// Language: Verilog 2001

`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * ZFP decompression of UDP payloads on the RX path, undoing zfp_tx_codec.
 *
 * A packet is decompressed if it is unfragmented IPv4/UDP to UDP_PORT, carries
 * the IP reserved flag bit (compressed mark), and its codec header (see
 * zfp_tx_codec.v) has our version and BLOCK_BITS and a UDP length that matches
 * the original length. The original IP/UDP lengths are restored, the mark is
 * cleared, the IP header checksum recomputed and the UDP checksum zeroed ("no
 * checksum" for IPv4; the payload is lossy, so the sender's checksum cannot
 * match). The output is trimmed to the original length, which drops the
 * padding of a partial last block as well as any Ethernet padding.
 *
 * The DSCP opt-in is a TX-side control only: the reserved flag bit plus the
 * codec header are what mark a packet as compressed, so the DSCP is not checked
 * here (and is left as it is).
 *
 * Everything else passes through untouched. Assumes no VLAN tag and no IP
 * options. Packets are handled one at a time; the first HDR_BEATS beats are
 * buffered to decide what to do with a packet.
 */
module zfp_rx_codec #
(
    parameter [15:0] UDP_PORT = 16'd5555,
    // compressed bits per block of 4 values
    parameter BLOCK_BITS = 29,
    // decoded blocks buffered between zfp_decode and the output; a power of two
    parameter FIFO_DEPTH = 16,
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
     * AXI Stream input
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
     * AXI Stream output
     */
    output wire [DATA_WIDTH-1:0]  m_axis_tdata,
    output wire [KEEP_WIDTH-1:0]  m_axis_tkeep,
    output wire                   m_axis_tvalid,
    input  wire                   m_axis_tready,
    output wire                   m_axis_tlast,
    output wire [ID_WIDTH-1:0]    m_axis_tid,
    output wire [DEST_WIDTH-1:0]  m_axis_tdest,
    output wire [USER_WIDTH-1:0]  m_axis_tuser
);

// Frame layout (byte offsets): Ethernet 0-13, IPv4 14-33, UDP 34-41,
// codec header 42-47, packed blocks 48+
localparam HDR_BEATS = 6;
localparam HDR_BYTES = HDR_BEATS*KEEP_WIDTH;
localparam OUT_HDR_BEATS = 5;  // bytes 0-39 of the output come from the header buffer
localparam CODEC_HDR_BYTES = 6;
localparam MIN_PAYLOAD = 16;
localparam [7:0] VERSION = 8'd1;

localparam CL_FIFO_DEPTH = $clog2(FIFO_DEPTH);

// check configuration
initial begin
    if (DATA_WIDTH != 64) begin
        $error("Error: zfp_rx_codec only supports a 64-bit datapath (instance %m)");
        $finish;
    end
    if (BLOCK_BITS <= 8 || BLOCK_BITS >= 64) begin
        $error("Error: BLOCK_BITS must be 9-63 (instance %m)");
        $finish;
    end
end

localparam [2:0]
    STATE_HDR = 3'd0,     // buffer the header beats
    STATE_DECIDE = 3'd1,  // pick a path
    STATE_FLUSH = 3'd2,   // send the header beats on, rewritten if decompressing
    STATE_PASS = 3'd3,    // not decompressing: stream the rest of the packet
    STATE_BODY = 3'd4;    // decompressing: send the decoded payload

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

// payload input side
reg pl_active_reg = 1'b0;      // taking input beats / emitting blocks
reg in_done_reg = 1'b0;        // all blocks handed to zfp_decode, input consumed
reg in_last_reg = 1'b0;        // input tlast seen
reg [127:0] acc_reg = 0;       // unpacker bit buffer
reg [7:0] acc_cnt_reg = 0;
reg [15:0] blk_cnt_reg = 0;
reg [15:0] n_blocks_reg = 0;
reg [CL_FIFO_DEPTH+1:0] inflight_reg = 0;  // blocks inside zfp_decode

// output side
reg [15:0] out_pos_reg = 0;    // byte offset of the next output beat
reg [15:0] out_end_reg = 0;    // byte offset of the end of the payload
reg [15:0] out_word_reg = 0;   // payload word for the next output beat
reg [15:0] n_words_reg = 0;
reg [15:0] carry_reg = 0;      // last two bytes of the previous payload word
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

wire blocks_left = blk_cnt_reg < n_blocks_reg;

// take input while the bit buffer has room; once every block is out, just
// drop the rest of the frame (padding)
wire pl_in_ready = pl_active_reg && !in_last_reg && (acc_cnt_reg < 64 || !blocks_left);

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
wire [15:0] ip_len     = {hb[16], hb[17]};
wire [15:0] ip_flags   = {hb[20], hb[21]};  // reserved, DF, MF, fragment offset
wire [7:0]  ip_proto   = hb[23];
wire [15:0] udp_dport  = {hb[36], hb[37]};
wire [15:0] udp_len    = {hb[38], hb[39]};
wire [15:0] orig_len   = {hb[42], hb[43]};
wire [7:0]  blk_bits   = hb[44];
wire [7:0]  version    = hb[45];

wire [15:0] n_words = ({1'b0, orig_len} + 17'd7) >> 3;
wire [15:0] n_blocks = ({1'b0, orig_len} + 17'd15) >> 4;
wire [23:0] c_bits = n_blocks * BLOCK_BITS;
wire [15:0] c_bytes = (c_bits + 24'd7) >> 3;

// unfragmented IPv4/UDP without options, to our port, lengths consistent
wire udp_pkt = !hdr_last_reg && eth_type == 16'h0800 && ip_ver_ihl == 8'h45 &&
    ip_proto == 8'd17 && ip_flags[13:0] == 0 && udp_dport == UDP_PORT &&
    ip_len == udp_len + 16'd20;

// this packet gets decompressed
wire hit = udp_pkt && ip_flags[15] && version == VERSION && blk_bits == BLOCK_BITS &&
    orig_len[1:0] == 2'd0 && orig_len >= MIN_PAYLOAD &&
    udp_len == 16'd8 + CODEC_HDR_BYTES + c_bytes;

wire [15:0] new_udp_len = orig_len + 16'd8;
wire [15:0] new_ip_len = new_udp_len + 16'd20;
wire [15:0] new_ip_flags = {1'b0, ip_flags[14:0]};

// IPv4 header checksum over the rewritten header (checksum field taken as 0)
wire [19:0] ip_sum = {hb[14], hb[15]} + new_ip_len + {hb[18], hb[19]} + new_ip_flags +
    {hb[22], hb[23]} + {hb[26], hb[27]} + {hb[28], hb[29]} + {hb[30], hb[31]} + {hb[32], hb[33]};
wire [16:0] ip_sum_fold = ip_sum[15:0] + ip_sum[19:16];
wire [15:0] ip_csum = ~(ip_sum_fold[15:0] + ip_sum_fold[16]);

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

wire flush_end = hit_reg ? flush_idx_reg == OUT_HDR_BEATS-1 : flush_idx_reg + 3'd1 == hdr_cnt_reg;

/*
 * Unpacker: 64-bit beats into BLOCK_BITS-bit blocks, LSB first. A frame cut
 * short is completed with zeros.
 */
reg [DATA_WIDTH-1:0] in_data;

integer i;

always @* begin
    for (i = 0; i < KEEP_WIDTH; i = i + 1) begin
        in_data[i*8 +: 8] = s_axis_tkeep[i] ? s_axis_tdata[i*8 +: 8] : 8'd0;
    end
end

wire in_beat = pl_in_ready && s_axis_tvalid;

wire [CL_FIFO_DEPTH:0] fifo_count;
wire credit_ok = fifo_count + inflight_reg + 1 <= FIFO_DEPTH;

wire dec_in_valid = pl_active_reg && blocks_left && (acc_cnt_reg >= BLOCK_BITS || in_last_reg) && credit_ok;

wire [127:0] dec_out_data;
wire dec_out_valid;

zfp_decode #(
    .BLOCK_BITS(BLOCK_BITS)
)
decode_inst (
    .clk(clk),
    .rst(rst),
    .in_data(acc_reg[BLOCK_BITS-1:0]),
    .in_valid(dec_in_valid),
    .out_data(dec_out_data),
    .out_valid(dec_out_valid)
);

wire [127:0] fifo_m_data;
wire fifo_m_valid;

/*
 * Output: realign the decoded payload to frame byte 42. Output beat j (frame
 * beat 5+j) is the last two bytes of payload word j-1 in lanes 0-1 (the zeroed
 * UDP checksum for j = 0) and the first six bytes of word j in lanes 2-7.
 */
wire need_word = out_word_reg < n_words_reg;
wire [63:0] out_word = out_word_reg[0] ? fifo_m_data[127:64] : fifo_m_data[63:0];
wire body_beat = state_reg == STATE_BODY && !out_done_reg && out_ready && (!need_word || fifo_m_valid);
wire fifo_m_ready = body_beat && need_word && (out_word_reg[0] || out_word_reg + 16'd1 == n_words_reg);

reg [KEEP_WIDTH-1:0] out_keep;

always @* begin
    for (i = 0; i < KEEP_WIDTH; i = i + 1) begin
        out_keep[i] = out_pos_reg + i < out_end_reg;
    end
end

zfp_fifo #(
    .WIDTH(128),
    .DEPTH(FIFO_DEPTH)
)
fifo_inst (
    .clk(clk),
    .rst(rst),
    .s_data(dec_out_data),
    .s_valid(dec_out_valid),
    .m_data(fifo_m_data),
    .m_valid(fifo_m_valid),
    .m_ready(fifo_m_ready),
    .count(fifo_count)
);

reg [127:0] acc_next;
reg [7:0] acc_cnt_next;

always @* begin
    acc_next = acc_reg;
    acc_cnt_next = acc_cnt_reg;
    if (dec_in_valid) begin
        acc_next = acc_next >> BLOCK_BITS;
        acc_cnt_next = acc_cnt_reg >= BLOCK_BITS ? acc_cnt_reg - BLOCK_BITS : 8'd0;
    end
    if (in_beat && blocks_left) begin
        acc_next = acc_next | ({64'd0, in_data} << acc_cnt_next);
        acc_cnt_next = acc_cnt_next + 8'd64;
    end
end

always @(posedge clk) begin
    if (m_axis_tready) begin
        m_axis_tvalid_reg <= 1'b0;
    end

    // payload input (before the state machine, so STATE_DECIDE resets win)
    acc_reg <= acc_next;
    acc_cnt_reg <= acc_cnt_next;

    if (in_beat && s_axis_tlast) begin
        in_last_reg <= 1'b1;
    end

    if (dec_in_valid) begin
        blk_cnt_reg <= blk_cnt_reg + 1;
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
            hit_reg <= hit;
            flush_idx_reg <= 0;
            state_reg <= STATE_FLUSH;

            pl_active_reg <= hit;
            in_done_reg <= 1'b0;
            in_last_reg <= 1'b0;
            acc_reg <= 0;
            acc_cnt_reg <= 0;
            blk_cnt_reg <= 0;
            n_blocks_reg <= n_blocks;

            out_pos_reg <= OUT_HDR_BEATS*KEEP_WIDTH;
            out_end_reg <= orig_len + 16'd42;
            out_word_reg <= 0;
            n_words_reg <= n_words;
            carry_reg <= 0;
            out_done_reg <= 1'b0;
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
                    state_reg <= hdr_last_reg ? STATE_HDR : hit_reg ? STATE_BODY : STATE_PASS;
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
        STATE_BODY: begin
            if (body_beat) begin
                m_axis_tdata_reg <= need_word ? {out_word[47:0], carry_reg} : {48'd0, carry_reg};
                m_axis_tkeep_reg <= out_keep;
                m_axis_tvalid_reg <= 1'b1;
                m_axis_tlast_reg <= out_pos_reg + KEEP_WIDTH >= out_end_reg;
                carry_reg <= out_word[63:48];
                out_word_reg <= out_word_reg + 1;
                out_pos_reg <= out_pos_reg + KEEP_WIDTH;

                if (out_pos_reg + KEEP_WIDTH >= out_end_reg) begin
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

    if (pl_active_reg && in_last_reg && !blocks_left) begin
        pl_active_reg <= 1'b0;
        in_done_reg <= 1'b1;
    end

    inflight_reg <= inflight_reg + dec_in_valid - dec_out_valid;

    if (rst) begin
        state_reg <= STATE_HDR;
        hdr_cnt_reg <= 0;
        pl_active_reg <= 1'b0;
        in_done_reg <= 1'b0;
        inflight_reg <= 0;
        m_axis_tvalid_reg <= 1'b0;
    end
end

endmodule

`resetall