// Language: Verilog 2001

`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * ZFP compression of UDP payloads on the TX path, ahead of mqnic_egress (TX
 * checksum offload).
 *
 * An unfragmented IPv4/UDP packet to UDP_PORT, marked with DSCP (the sending
 * app sets it per socket with IP_TOS), whose payload is a whole number of
 * fp32 values (at least MIN_PAYLOAD bytes) is compressed in blocks of 4 values,
 * each of which zfp_encode turns into BLOCK_BITS bits. A partial last block is
 * padded with zeros. The compressed UDP payload is
 *
 *   bytes 0-1  original payload length, big endian
 *   byte  2    BLOCK_BITS
 *   byte  3    format version (1)
 *   bytes 4-5  zero
 *   bytes 6-   the blocks, packed LSB first, last byte zero padded
 *
 * which puts the first block on a beat boundary (frame byte 48). The compressed
 * size follows from the original length, so the header is rewritten up front
 * and the packet streams through: IP/UDP lengths, the IP reserved flag bit
 * (marks the packet as compressed) and the IP header checksum. The UDP checksum
 * is left to mqnic_egress: the checksum field gets the pseudo-header sum for the
 * new length, and the packet's checksum command is replaced by one covering the
 * UDP header and payload, whether or not the host asked for offload. Without
 * CSUM_ENABLE the UDP checksum is zeroed ("no checksum" for IPv4) instead.
 *
 * Everything else passes through untouched, checksum command included.
 * Assumes no VLAN tag and no IP options. Packets are handled one at a time; the
 * first HDR_BEATS beats are buffered to decide what to do with a packet.
 */
module zfp_tx_codec #
(
    parameter [15:0] UDP_PORT = 16'd5555,
    // DSCP (top 6 bits of the IPv4 TOS byte) that opts a packet in
    parameter [5:0] DSCP = 6'd13,
    // compressed bits per block of 4 values
    parameter BLOCK_BITS = 29,
    // mqnic_egress does TX checksum offload (consumes the checksum commands)
    parameter CSUM_ENABLE = 1,
    // packed beats buffered between zfp_encode and the output; a power of two
    parameter FIFO_DEPTH = 32,
    parameter DATA_WIDTH = 64,
    parameter KEEP_WIDTH = DATA_WIDTH/8,
    parameter ID_WIDTH = 8,
    parameter DEST_WIDTH = 8,
    parameter USER_WIDTH = 1
)
(
    input  wire                   clk,
    input  wire                   rst,

    /*
     * AXI Stream input (from the DMA engine)
     */
    input  wire [DATA_WIDTH-1:0]  s_axis_tdata,
    input  wire [KEEP_WIDTH-1:0]  s_axis_tkeep,
    input  wire                   s_axis_tvalid,
    output wire                   s_axis_tready,
    input  wire                   s_axis_tlast,
    input  wire [ID_WIDTH-1:0]    s_axis_tid,
    input  wire [DEST_WIDTH-1:0]  s_axis_tdest,
    input  wire [USER_WIDTH-1:0]  s_axis_tuser,

    /*
     * AXI Stream output (to mqnic_egress)
     */
    output wire [DATA_WIDTH-1:0]  m_axis_tdata,
    output wire [KEEP_WIDTH-1:0]  m_axis_tkeep,
    output wire                   m_axis_tvalid,
    input  wire                   m_axis_tready,
    output wire                   m_axis_tlast,
    output wire [ID_WIDTH-1:0]    m_axis_tid,
    output wire [DEST_WIDTH-1:0]  m_axis_tdest,
    output wire [USER_WIDTH-1:0]  m_axis_tuser,

    /*
     * Transmit checksum command input (one per packet, ahead of its data)
     */
    input  wire                   s_axis_cmd_csum_enable,
    input  wire [7:0]             s_axis_cmd_csum_start,
    input  wire [7:0]             s_axis_cmd_csum_offset,
    input  wire                   s_axis_cmd_valid,
    output wire                   s_axis_cmd_ready,

    /*
     * Transmit checksum command output
     */
    output wire                   m_axis_cmd_csum_enable,
    output wire [7:0]             m_axis_cmd_csum_start,
    output wire [7:0]             m_axis_cmd_csum_offset,
    output wire                   m_axis_cmd_valid,
    input  wire                   m_axis_cmd_ready
);

// Frame layout (byte offsets): Ethernet 0-13, IPv4 14-33, UDP 34-41, payload 42+
localparam HDR_BEATS = 5;  // bytes 0-39: everything before the UDP checksum
localparam HDR_BYTES = HDR_BEATS*KEEP_WIDTH;
localparam CODEC_HDR_BYTES = 6;
localparam MIN_PAYLOAD = 16;
localparam [7:0] VERSION = 8'd1;

localparam CL_FIFO_DEPTH = $clog2(FIFO_DEPTH);

// check configuration
initial begin
    if (DATA_WIDTH != 64) begin
        $error("Error: zfp_tx_codec only supports a 64-bit datapath (instance %m)");
        $finish;
    end
    if (BLOCK_BITS <= 8 || BLOCK_BITS >= 64) begin
        $error("Error: BLOCK_BITS must be 9-63 (instance %m)");
        $finish;
    end
end

localparam [2:0]
    STATE_HDR = 3'd0,        // buffer the header beats
    STATE_DECIDE = 3'd1,     // wait for the checksum command, pick a path
    STATE_FLUSH = 3'd2,      // send the header beats on, rewritten if compressing
    STATE_PASS = 3'd3,       // not compressing: stream the rest of the packet
    STATE_CODEC_HDR = 3'd4,  // compressing: UDP checksum + codec header beat
    STATE_DRAIN = 3'd5;      // compressing: send packed blocks from the FIFO

reg [2:0] state_reg = STATE_HDR;

reg [HDR_BEATS*DATA_WIDTH-1:0] hdr_reg = 0;
reg [2:0] hdr_cnt_reg = 0;
reg [2:0] flush_idx_reg = 0;
reg hdr_last_reg = 1'b0;  // packet ended inside the header beats
reg [KEEP_WIDTH-1:0] hdr_last_keep_reg = 0;
reg hit_reg = 1'b0;

reg [ID_WIDTH-1:0] id_reg = 0;
reg [DEST_WIDTH-1:0] dest_reg = 0;
reg [USER_WIDTH-1:0] user_reg = 0;

// checksum command of the packet being buffered
reg cmd_csum_enable_reg = 1'b0;
reg [7:0] cmd_csum_start_reg = 0;
reg [7:0] cmd_csum_offset_reg = 0;
reg cmd_valid_reg = 1'b0;

reg m_axis_cmd_csum_enable_reg = 1'b0;
reg [7:0] m_axis_cmd_csum_start_reg = 0;
reg [7:0] m_axis_cmd_csum_offset_reg = 0;
reg m_axis_cmd_valid_reg = 1'b0;

assign s_axis_cmd_ready = !cmd_valid_reg;

assign m_axis_cmd_csum_enable = m_axis_cmd_csum_enable_reg;
assign m_axis_cmd_csum_start = m_axis_cmd_csum_start_reg;
assign m_axis_cmd_csum_offset = m_axis_cmd_csum_offset_reg;
assign m_axis_cmd_valid = m_axis_cmd_valid_reg;

// payload input side
reg pl_active_reg = 1'b0;      // taking payload beats / emitting blocks
reg in_done_reg = 1'b0;        // all blocks handed to zfp_encode, input consumed
reg in_last_reg = 1'b0;        // input tlast seen
reg [15:0] pos_reg = 0;        // byte offset of the current input beat
reg [15:0] pl_end_reg = 0;     // byte offset of the end of the payload
reg [47:0] prev_reg = 0;       // payload bytes from the previous beat (lanes 2-7)
reg [63:0] lo_word_reg = 0;    // first half of the block being gathered
reg [15:0] word_cnt_reg = 0;
reg [15:0] n_words_reg = 0;
reg [15:0] n_blocks_reg = 0;
reg [CL_FIFO_DEPTH+1:0] inflight_reg = 0;  // blocks inside zfp_encode

// packer
reg [127:0] acc_reg = 0;
reg [6:0] acc_cnt_reg = 0;
reg [15:0] blk_cnt_reg = 0;
reg flush_pending_reg = 1'b0;
reg out_done_reg = 1'b0;

reg [DATA_WIDTH-1:0] m_axis_tdata_reg = 0;
reg [KEEP_WIDTH-1:0] m_axis_tkeep_reg = 0;
reg m_axis_tvalid_reg = 1'b0;
reg m_axis_tlast_reg = 1'b0;
reg [ID_WIDTH-1:0] m_axis_tid_reg = 0;
reg [DEST_WIDTH-1:0] m_axis_tdest_reg = 0;
reg [USER_WIDTH-1:0] m_axis_tuser_reg = 0;

assign m_axis_tdata = m_axis_tdata_reg;
assign m_axis_tkeep = m_axis_tkeep_reg;
assign m_axis_tvalid = m_axis_tvalid_reg;
assign m_axis_tlast = m_axis_tlast_reg;
assign m_axis_tid = m_axis_tid_reg;
assign m_axis_tdest = m_axis_tdest_reg;
assign m_axis_tuser = m_axis_tuser_reg;

wire out_ready = !m_axis_tvalid_reg || m_axis_tready;

// packed beats: {last, keep, data}
wire [CL_FIFO_DEPTH:0] fifo_count;
wire [DATA_WIDTH+KEEP_WIDTH:0] fifo_m_data;
wire fifo_m_valid;
wire fifo_m_ready = state_reg == STATE_DRAIN && out_ready;

// room for the outputs of every block in flight, one more block and the final flush
wire credit_ok = fifo_count + inflight_reg + 2 <= FIFO_DEPTH;

wire pl_in_ready = pl_active_reg && !in_last_reg && credit_ok;

assign s_axis_tready = state_reg == STATE_HDR ||
    (state_reg == STATE_PASS && out_ready) || pl_in_ready;

/*
 * Header parsing and rewriting
 */
wire [7:0] hb [0:HDR_BYTES-1];

genvar g;
generate
    for (g = 0; g < HDR_BYTES; g = g + 1) begin : hdr_byte
        assign hb[g] = hdr_reg[g*8 +: 8];
    end
endgenerate

wire [15:0] eth_type   = {hb[12], hb[13]};
wire [7:0]  ip_ver_ihl = hb[14];
wire [5:0]  ip_dscp    = hb[15][7:2];  // [1:0] are ECN, which the network may change
wire [15:0] ip_len     = {hb[16], hb[17]};
wire [15:0] ip_flags   = {hb[20], hb[21]};  // reserved, DF, MF, fragment offset
wire [7:0]  ip_proto   = hb[23];
wire [15:0] udp_dport  = {hb[36], hb[37]};
wire [15:0] udp_len    = {hb[38], hb[39]};

// unfragmented IPv4/UDP without options, to our port, lengths consistent
wire udp_pkt = !hdr_last_reg && eth_type == 16'h0800 && ip_ver_ihl == 8'h45 &&
    ip_proto == 8'd17 && ip_flags[13:0] == 0 && udp_dport == UDP_PORT &&
    ip_len == udp_len + 16'd20;

wire [15:0] pl_len = udp_len - 16'd8;

// this packet gets compressed
wire hit = udp_pkt && ip_dscp == DSCP && !ip_flags[15] && pl_len[1:0] == 2'd0 && udp_len >= 16'd8 + MIN_PAYLOAD;

wire [15:0] n_words = ({1'b0, pl_len} + 17'd7) >> 3;
wire [15:0] n_blocks = ({1'b0, pl_len} + 17'd15) >> 4;
wire [23:0] c_bits = n_blocks * BLOCK_BITS;
wire [15:0] c_bytes = (c_bits + 24'd7) >> 3;

wire [15:0] new_udp_len = 16'd8 + CODEC_HDR_BYTES + c_bytes;
wire [15:0] new_ip_len = new_udp_len + 16'd20;
wire [15:0] new_ip_flags = {1'b1, ip_flags[14:0]};

// IPv4 header checksum over the rewritten header (checksum field taken as 0)
wire [19:0] ip_sum = {hb[14], hb[15]} + new_ip_len + {hb[18], hb[19]} + new_ip_flags +
    {hb[22], hb[23]} + {hb[26], hb[27]} + {hb[28], hb[29]} + {hb[30], hb[31]} + {hb[32], hb[33]};
wire [16:0] ip_sum_fold = ip_sum[15:0] + ip_sum[19:16];
wire [15:0] ip_csum = ~(ip_sum_fold[15:0] + ip_sum_fold[16]);

// UDP pseudo-header sum (not inverted), what the host leaves in the checksum
// field for offload; mqnic_egress adds the UDP header and payload to it
wire [18:0] ph_sum = {hb[26], hb[27]} + {hb[28], hb[29]} + {hb[30], hb[31]} + {hb[32], hb[33]} +
    16'd17 + new_udp_len;
wire [16:0] ph_sum_fold = ph_sum[15:0] + ph_sum[18:16];
wire [15:0] udp_seed = CSUM_ENABLE ? ph_sum_fold[15:0] + ph_sum_fold[16] : 16'd0;

reg [HDR_BEATS*DATA_WIDTH-1:0] hdr_out;

always @* begin
    hdr_out = hdr_reg;
    if (hit_reg) begin
        hdr_out[16*8 +: 8] = new_ip_len[15:8];
        hdr_out[17*8 +: 8] = new_ip_len[7:0];
        hdr_out[20*8 +: 8] = new_ip_flags[15:8];
        hdr_out[21*8 +: 8] = new_ip_flags[7:0];
        hdr_out[24*8 +: 8] = ip_csum[15:8];
        hdr_out[25*8 +: 8] = ip_csum[7:0];
        hdr_out[38*8 +: 8] = new_udp_len[15:8];
        hdr_out[39*8 +: 8] = new_udp_len[7:0];
    end
end

// bytes 40-47: UDP checksum field, codec header
wire [DATA_WIDTH-1:0] codec_hdr_beat = {16'd0, VERSION, BLOCK_BITS[7:0], pl_len[7:0], pl_len[15:8],
    udp_seed[7:0], udp_seed[15:8]};

wire flush_end = flush_idx_reg + 3'd1 == hdr_cnt_reg;

/*
 * Payload: realign and gather blocks
 *
 * The payload starts at byte 42, in lanes 2-7 of the first beat after the
 * header. Each aligned 64-bit payload word is lanes 2-7 of one beat plus lanes
 * 0-1 of the next; after the last beat the remaining bytes (and zeros, if the
 * frame is short) make up the words still missing. Two words make a block.
 */
reg [KEEP_WIDTH-1:0] lane_ok;

integer i;

always @* begin
    for (i = 0; i < KEEP_WIDTH; i = i + 1) begin
        lane_ok[i] = s_axis_tkeep[i] && (pos_reg + i < pl_end_reg);
    end
end

reg [DATA_WIDTH-1:0] in_data;

always @* begin
    for (i = 0; i < KEEP_WIDTH; i = i + 1) begin
        in_data[i*8 +: 8] = lane_ok[i] ? s_axis_tdata[i*8 +: 8] : 8'd0;
    end
end

wire in_beat = pl_in_ready && s_axis_tvalid;
wire tail_word = pl_active_reg && in_last_reg && credit_ok;

wire word_valid = (in_beat && pos_reg != HDR_BYTES || tail_word) && word_cnt_reg < n_words_reg;
wire [63:0] word_data = in_beat ? {in_data[15:0], prev_reg} : {16'd0, prev_reg};
wire word_last = word_cnt_reg + 16'd1 == n_words_reg;

wire enc_in_valid = word_valid && (word_cnt_reg[0] || word_last);
wire [127:0] enc_in_data = word_cnt_reg[0] ? {word_data, lo_word_reg} : {64'd0, word_data};

wire [BLOCK_BITS-1:0] enc_out_data;
wire enc_out_valid;

zfp_encode #(
    .BLOCK_BITS(BLOCK_BITS)
)
encode_inst (
    .clk(clk),
    .rst(rst),
    .in_data(enc_in_data),
    .in_valid(enc_in_valid),
    .out_data(enc_out_data),
    .out_valid(enc_out_valid)
);

/*
 * Packer: BLOCK_BITS-bit blocks into 64-bit beats, LSB first. BLOCK_BITS < 64,
 * so a block completes at most one beat; the remainder of the last block goes
 * out as a short final beat on the following cycle.
 */
function [KEEP_WIDTH-1:0] keep_bytes(input [3:0] n);
    keep_bytes = ~({KEEP_WIDTH{1'b1}} << n);
endfunction

wire [127:0] pack_sum = acc_reg | ({{128-BLOCK_BITS{1'b0}}, enc_out_data} << acc_cnt_reg);
wire [7:0] pack_cnt = acc_cnt_reg + BLOCK_BITS;
wire pack_final = blk_cnt_reg + 16'd1 == n_blocks_reg;

reg fifo_s_valid;
reg [DATA_WIDTH+KEEP_WIDTH:0] fifo_s_data;

always @* begin
    fifo_s_valid = 1'b0;
    fifo_s_data = {1'b0, {KEEP_WIDTH{1'b1}}, pack_sum[63:0]};

    if (enc_out_valid) begin
        if (pack_cnt >= 64) begin
            fifo_s_valid = 1'b1;
            fifo_s_data[DATA_WIDTH+KEEP_WIDTH] = pack_final && pack_cnt == 64;
        end else if (pack_final) begin
            fifo_s_valid = 1'b1;
            fifo_s_data = {1'b1, keep_bytes((pack_cnt + 7) >> 3), pack_sum[63:0]};
        end
    end else if (flush_pending_reg) begin
        fifo_s_valid = 1'b1;
        fifo_s_data = {1'b1, keep_bytes((acc_cnt_reg + 7) >> 3), acc_reg[63:0]};
    end
end

zfp_fifo #(
    .WIDTH(DATA_WIDTH+KEEP_WIDTH+1),
    .DEPTH(FIFO_DEPTH)
)
fifo_inst (
    .clk(clk),
    .rst(rst),
    .s_data(fifo_s_data),
    .s_valid(fifo_s_valid),
    .m_data(fifo_m_data),
    .m_valid(fifo_m_valid),
    .m_ready(fifo_m_ready),
    .count(fifo_count)
);

always @(posedge clk) begin
    if (m_axis_tready) begin
        m_axis_tvalid_reg <= 1'b0;
    end
    if (m_axis_cmd_ready) begin
        m_axis_cmd_valid_reg <= 1'b0;
    end

    if (s_axis_cmd_valid && s_axis_cmd_ready) begin
        cmd_csum_enable_reg <= s_axis_cmd_csum_enable;
        cmd_csum_start_reg <= s_axis_cmd_csum_start;
        cmd_csum_offset_reg <= s_axis_cmd_csum_offset;
        cmd_valid_reg <= 1'b1;
    end

    case (state_reg)
        STATE_HDR: begin
            if (s_axis_tvalid) begin
                hdr_reg[hdr_cnt_reg*DATA_WIDTH +: DATA_WIDTH] <= s_axis_tdata;
                hdr_cnt_reg <= hdr_cnt_reg + 1;
                if (hdr_cnt_reg == 0) begin
                    id_reg <= s_axis_tid;
                    dest_reg <= s_axis_tdest;
                    user_reg <= s_axis_tuser;
                end

                if (s_axis_tlast || hdr_cnt_reg == HDR_BEATS-1) begin
                    hdr_last_reg <= s_axis_tlast;
                    hdr_last_keep_reg <= s_axis_tkeep;
                    state_reg <= STATE_DECIDE;
                end
            end
        end
        STATE_DECIDE: begin
            if (!CSUM_ENABLE || (cmd_valid_reg && !m_axis_cmd_valid_reg)) begin
                if (CSUM_ENABLE) begin
                    // UDP header + payload, checksum at byte 40
                    m_axis_cmd_csum_enable_reg <= hit ? 1'b1 : cmd_csum_enable_reg;
                    m_axis_cmd_csum_start_reg <= hit ? 8'd34 : cmd_csum_start_reg;
                    m_axis_cmd_csum_offset_reg <= hit ? 8'd40 : cmd_csum_offset_reg;
                    m_axis_cmd_valid_reg <= 1'b1;
                    cmd_valid_reg <= 1'b0;
                end

                hit_reg <= hit;
                flush_idx_reg <= 0;
                state_reg <= STATE_FLUSH;

                pl_active_reg <= hit;
                in_done_reg <= 1'b0;
                in_last_reg <= 1'b0;
                pos_reg <= HDR_BYTES;
                pl_end_reg <= udp_len + 16'd34;
                word_cnt_reg <= 0;
                n_words_reg <= n_words;
                n_blocks_reg <= n_blocks;
                acc_reg <= 0;
                acc_cnt_reg <= 0;
                blk_cnt_reg <= 0;
                flush_pending_reg <= 1'b0;
                out_done_reg <= 1'b0;
            end
        end
        STATE_FLUSH: begin
            if (out_ready) begin
                m_axis_tdata_reg <= hdr_out[flush_idx_reg*DATA_WIDTH +: DATA_WIDTH];
                m_axis_tkeep_reg <= flush_end && hdr_last_reg ? hdr_last_keep_reg : {KEEP_WIDTH{1'b1}};
                m_axis_tvalid_reg <= 1'b1;
                m_axis_tlast_reg <= flush_end && hdr_last_reg;
                m_axis_tid_reg <= id_reg;
                m_axis_tdest_reg <= dest_reg;
                m_axis_tuser_reg <= user_reg;
                flush_idx_reg <= flush_idx_reg + 1;

                if (flush_end) begin
                    hdr_cnt_reg <= 0;
                    state_reg <= hdr_last_reg ? STATE_HDR : hit_reg ? STATE_CODEC_HDR : STATE_PASS;
                end
            end
        end
        STATE_PASS: begin
            if (s_axis_tvalid && out_ready) begin
                m_axis_tdata_reg <= s_axis_tdata;
                m_axis_tkeep_reg <= s_axis_tkeep;
                m_axis_tvalid_reg <= 1'b1;
                m_axis_tlast_reg <= s_axis_tlast;
                m_axis_tid_reg <= s_axis_tid;
                m_axis_tdest_reg <= s_axis_tdest;
                m_axis_tuser_reg <= s_axis_tuser;

                if (s_axis_tlast) begin
                    state_reg <= STATE_HDR;
                end
            end
        end
        STATE_CODEC_HDR: begin
            if (out_ready) begin
                m_axis_tdata_reg <= codec_hdr_beat;
                m_axis_tkeep_reg <= {KEEP_WIDTH{1'b1}};
                m_axis_tvalid_reg <= 1'b1;
                m_axis_tlast_reg <= 1'b0;
                state_reg <= STATE_DRAIN;
            end
        end
        STATE_DRAIN: begin
            if (fifo_m_valid && out_ready) begin
                m_axis_tdata_reg <= fifo_m_data[DATA_WIDTH-1:0];
                m_axis_tkeep_reg <= fifo_m_data[DATA_WIDTH +: KEEP_WIDTH];
                m_axis_tvalid_reg <= 1'b1;
                m_axis_tlast_reg <= fifo_m_data[DATA_WIDTH+KEEP_WIDTH];
                if (fifo_m_data[DATA_WIDTH+KEEP_WIDTH]) begin
                    out_done_reg <= 1'b1;
                end
            end
            if (out_done_reg && in_done_reg) begin
                state_reg <= STATE_HDR;
            end
        end
        default: begin
            state_reg <= STATE_HDR;
        end
    endcase

    // payload input
    if (in_beat) begin
        pos_reg <= pos_reg + KEEP_WIDTH;
        prev_reg <= in_data[63:16];
        if (s_axis_tlast) begin
            in_last_reg <= 1'b1;
        end
    end else if (tail_word) begin
        prev_reg <= 0;
    end

    if (word_valid) begin
        word_cnt_reg <= word_cnt_reg + 1;
        if (!word_cnt_reg[0]) begin
            lo_word_reg <= word_data;
        end
    end

    if (pl_active_reg && in_last_reg && word_cnt_reg == n_words_reg) begin
        pl_active_reg <= 1'b0;
        in_done_reg <= 1'b1;
    end

    inflight_reg <= inflight_reg + enc_in_valid - enc_out_valid;

    // packer
    if (enc_out_valid) begin
        blk_cnt_reg <= blk_cnt_reg + 1;
        if (pack_cnt >= 64) begin
            acc_reg <= pack_sum >> 64;
            acc_cnt_reg <= pack_cnt - 64;
            flush_pending_reg <= pack_final && pack_cnt != 64;
        end else if (pack_final) begin
            acc_reg <= 0;
            acc_cnt_reg <= 0;
        end else begin
            acc_reg <= pack_sum;
            acc_cnt_reg <= pack_cnt;
        end
    end else if (flush_pending_reg) begin
        acc_reg <= 0;
        acc_cnt_reg <= 0;
        flush_pending_reg <= 1'b0;
    end

    if (rst) begin
        state_reg <= STATE_HDR;
        hdr_cnt_reg <= 0;
        cmd_valid_reg <= 1'b0;
        m_axis_cmd_valid_reg <= 1'b0;
        pl_active_reg <= 1'b0;
        in_done_reg <= 1'b0;
        inflight_reg <= 0;
        flush_pending_reg <= 1'b0;
        m_axis_tvalid_reg <= 1'b0;
    end
end

endmodule

`resetall