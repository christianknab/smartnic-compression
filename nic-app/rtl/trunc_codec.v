// Language: Verilog 2001

`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * fp32 <-> bf16 precision truncation of UDP payloads, in the NIC datapath.
 *
 * DECOMPRESS = 0 (TX side): an IPv4/UDP packet to UDP_PORT whose payload is a
 *   whole number of floats (at least MIN_FLOATS) keeps only the upper 16 bits
 *   of each little-endian float32, which halves the payload. The IP reserved
 *   flag bit marks the packet as compressed, the IP/UDP lengths and IP checksum
 *   are rewritten, and the UDP checksum is zeroed ("no checksum" for IPv4).
 * DECOMPRESS = 1 (RX side): marked packets get each 16-bit value widened back
 *   to a float32 with zeroed low mantissa bits, lengths restored, mark cleared.
 * Everything else passes through untouched.
 *
 * Assumes no VLAN tag, no IP options, and that the UDP payload runs to the end
 * of the frame (no Ethernet padding; MIN_FLOATS keeps compressed frames at
 * >= 60 bytes so the MAC never pads them). The first HDR_BEATS beats are
 * buffered so the header can be rewritten once the UDP port is known, which
 * costs HDR_BEATS idle input cycles per packet.
 */
module trunc_codec #
(
    parameter DECOMPRESS = 0,
    parameter [15:0] UDP_PORT = 16'd5555,
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

// Frame layout (byte offsets): Ethernet 0-13, IPv4 14-33, UDP 34-41, payload 42+
localparam HDR_BEATS = 5;  // bytes 0-39: everything before the UDP checksum
localparam HDR_BYTES = HDR_BEATS*KEEP_WIDTH;
localparam MIN_FLOATS = 9;

// check configuration
initial begin
    if (DATA_WIDTH != 64) begin
        $error("Error: trunc_codec only supports a 64-bit datapath (instance %m)");
        $finish;
    end
end

localparam [1:0]
    STATE_HDR = 2'd0,    // buffer the header beats
    STATE_FLUSH = 2'd1,  // send them on, rewritten if the packet is ours
    STATE_BODY = 2'd2;   // stream the rest of the packet

reg [1:0] state_reg = STATE_HDR;

reg [HDR_BEATS*DATA_WIDTH-1:0] hdr_reg = 0;
reg [2:0] hdr_cnt_reg = 0;
reg [2:0] flush_idx_reg = 0;
reg hdr_last_reg = 1'b0;  // packet ended inside the header beats
reg [KEEP_WIDTH-1:0] hdr_last_keep_reg = 0;

reg [15:0] pos_reg = 0;  // byte offset of the current input beat

reg [ID_WIDTH-1:0] id_reg = 0;
reg [DEST_WIDTH-1:0] dest_reg = 0;
reg [USER_WIDTH-1:0] user_reg = 0;

// compress: upper halves from the previous beat, waiting for a second set
reg [31:0] acc_reg = 0;
reg acc_valid_reg = 1'b0;

// decompress: the second output beat produced by the current input beat
reg [31:0] pend_reg = 0;
reg pend_valid_reg = 1'b0;
reg pend_last_reg = 1'b0;
reg [KEEP_WIDTH-1:0] pend_keep_reg = 0;

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

assign s_axis_tready = state_reg == STATE_HDR ||
    (state_reg == STATE_BODY && out_ready && !pend_valid_reg);

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

// unfragmented IPv4/UDP without options, to our port, lengths consistent
wire udp_pkt = !hdr_last_reg && eth_type == 16'h0800 && ip_ver_ihl == 8'h45 &&
    ip_proto == 8'd17 && ip_flags[13:0] == 0 && udp_dport == UDP_PORT &&
    ip_len == udp_len + 16'd20;

// this packet gets (de)compressed
wire hit = DECOMPRESS ?
    udp_pkt && ip_flags[15] && udp_len[0] == 1'b0 && udp_len > 16'd8 :
    udp_pkt && !ip_flags[15] && udp_len[1:0] == 2'd0 && udp_len >= 16'd8 + MIN_FLOATS*4;

wire [15:0] pl_len = udp_len - 16'd8;
wire [15:0] new_udp_len = 16'd8 + (DECOMPRESS ? {pl_len[14:0], 1'b0} : {1'b0, pl_len[15:1]});
wire [15:0] new_ip_len = new_udp_len + 16'd20;
wire [15:0] new_ip_flags = {DECOMPRESS ? 1'b0 : 1'b1, ip_flags[14:0]};

// end of the UDP payload in the incoming frame (42 + payload length)
wire [15:0] in_end = udp_len + 16'd34;

// IPv4 header checksum over the rewritten header (checksum field taken as 0)
wire [19:0] ip_sum = {hb[14], hb[15]} + new_ip_len + {hb[18], hb[19]} + new_ip_flags +
    {hb[22], hb[23]} + {hb[26], hb[27]} + {hb[28], hb[29]} + {hb[30], hb[31]} + {hb[32], hb[33]};
wire [16:0] ip_sum_fold = ip_sum[15:0] + ip_sum[19:16];
wire [15:0] ip_csum = ~(ip_sum_fold[15:0] + ip_sum_fold[16]);

reg [HDR_BEATS*DATA_WIDTH-1:0] hdr_out;

always @* begin
    hdr_out = hdr_reg;
    if (hit) begin
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

wire flush_end = flush_idx_reg + 3'd1 == hdr_cnt_reg;

/*
 * Payload
 *
 * Body beats start at byte 40 and the payload at byte 42, so the upper half
 * (bytes 2-3) of every float sits in lanes 0-1 or 4-5, and its lower half in
 * lanes 2-3 or 6-7. Lanes 0-1 of the first body beat are the UDP checksum;
 * they are zeroed and otherwise ride along like an upper half.
 */

// input lanes holding UDP checksum/payload bytes
reg [KEEP_WIDTH-1:0] lane_ok;

integer i;

always @* begin
    for (i = 0; i < KEEP_WIDTH; i = i + 1) begin
        lane_ok[i] = s_axis_tkeep[i] && (pos_reg + i < in_end);
    end
end

wire [DATA_WIDTH-1:0] body_data = pos_reg == HDR_BYTES ? {s_axis_tdata[63:16], 16'd0} : s_axis_tdata;

// compress: the upper halves in this beat
wire [31:0] upper_halves = {body_data[47:32], body_data[15:0]};

// decompress: put four bytes back into lanes 0-1 and 4-5, zeros elsewhere
function [63:0] widen(input [31:0] h);
    widen = {16'd0, h[31:16], 16'd0, h[15:0]};
endfunction

always @(posedge clk) begin
    if (m_axis_tready) begin
        m_axis_tvalid_reg <= 1'b0;
    end

    case (state_reg)
        STATE_HDR: begin
            if (s_axis_tvalid) begin
                hdr_reg[hdr_cnt_reg*DATA_WIDTH +: DATA_WIDTH] <= s_axis_tdata;
                hdr_cnt_reg <= hdr_cnt_reg + 1;
                id_reg <= s_axis_tid;
                dest_reg <= s_axis_tdest;
                user_reg <= s_axis_tuser;

                if (s_axis_tlast || hdr_cnt_reg == HDR_BEATS-1) begin
                    hdr_last_reg <= s_axis_tlast;
                    hdr_last_keep_reg <= s_axis_tkeep;
                    flush_idx_reg <= 0;
                    state_reg <= STATE_FLUSH;
                end
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
                    pos_reg <= HDR_BYTES;
                    acc_valid_reg <= 1'b0;
                    state_reg <= hdr_last_reg ? STATE_HDR : STATE_BODY;
                end
            end
        end
        STATE_BODY: begin
            if (pend_valid_reg) begin
                if (out_ready) begin
                    m_axis_tdata_reg <= widen(pend_reg);
                    m_axis_tkeep_reg <= pend_keep_reg;
                    m_axis_tvalid_reg <= 1'b1;
                    m_axis_tlast_reg <= pend_last_reg;
                    m_axis_tuser_reg <= user_reg;
                    pend_valid_reg <= 1'b0;

                    if (pend_last_reg) begin
                        state_reg <= STATE_HDR;
                    end
                end
            end else if (s_axis_tvalid && out_ready) begin
                pos_reg <= pos_reg + KEEP_WIDTH;
                user_reg <= s_axis_tuser;
                m_axis_tid_reg <= s_axis_tid;
                m_axis_tdest_reg <= s_axis_tdest;
                m_axis_tuser_reg <= s_axis_tuser;
                m_axis_tlast_reg <= s_axis_tlast;

                if (!hit) begin
                    m_axis_tdata_reg <= s_axis_tdata;
                    m_axis_tkeep_reg <= s_axis_tkeep;
                    m_axis_tvalid_reg <= 1'b1;
                end else if (!DECOMPRESS) begin
                    // two input beats -> one output beat
                    if (acc_valid_reg) begin
                        m_axis_tdata_reg <= {upper_halves, acc_reg};
                        m_axis_tkeep_reg <= lane_ok[4] ? 8'hff : 8'h3f;
                        m_axis_tvalid_reg <= 1'b1;
                        acc_valid_reg <= 1'b0;
                    end else if (s_axis_tlast) begin
                        m_axis_tdata_reg <= {32'd0, upper_halves};
                        m_axis_tkeep_reg <= lane_ok[4] ? 8'h0f : 8'h03;
                        m_axis_tvalid_reg <= 1'b1;
                    end else begin
                        acc_reg <= upper_halves;
                        acc_valid_reg <= 1'b1;
                    end
                end else begin
                    // one input beat -> two output beats (second one via pend_reg)
                    m_axis_tdata_reg <= widen(body_data[31:0]);
                    m_axis_tvalid_reg <= 1'b1;
                    if (lane_ok[4]) begin
                        m_axis_tkeep_reg <= {KEEP_WIDTH{1'b1}};
                        m_axis_tlast_reg <= 1'b0;
                        pend_reg <= body_data[63:32];
                        pend_keep_reg <= !s_axis_tlast ? 8'hff : lane_ok[6] ? 8'h3f : 8'h03;
                        pend_last_reg <= s_axis_tlast;
                        pend_valid_reg <= 1'b1;
                    end else begin
                        m_axis_tkeep_reg <= !s_axis_tlast ? 8'hff : lane_ok[2] ? 8'h3f : 8'h03;
                    end
                end

                if (s_axis_tlast && !(DECOMPRESS && hit && lane_ok[4])) begin
                    state_reg <= STATE_HDR;
                end
            end
        end
        default: begin
            state_reg <= STATE_HDR;
        end
    endcase

    if (rst) begin
        state_reg <= STATE_HDR;
        hdr_cnt_reg <= 0;
        acc_valid_reg <= 1'b0;
        pend_valid_reg <= 1'b0;
        m_axis_tvalid_reg <= 1'b0;
    end
end

endmodule

`resetall
