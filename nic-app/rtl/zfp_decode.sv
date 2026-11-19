`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * Contract used by zfp_rx_codec:
 *   in_data   the compressed block, BLOCK_BITS (21, 29 or 45) bits, as
 *             produced by zfp_encode
 *   out_data  4 fp32 values, value 0 in bits [31:0]
 *   out_valid follows in_valid by a fixed 4 cycle latency
 */
module zfp_decode #
(
    parameter BLOCK_BITS = 29
)
(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [BLOCK_BITS-1:0]  in_data,
    input  wire                   in_valid,

    output logic [127:0]           out_data,
    output wire                   out_valid
);


if (BLOCK_BITS != 21 && BLOCK_BITS != 29 && BLOCK_BITS != 45) begin
    $error("BLOCK_BITS must be 21, 29 or 45");
end

localparam [1:0] MODE = (BLOCK_BITS == 21) ? 2'b00 :
                        (BLOCK_BITS == 29) ? 2'b01 : 2'b10;
localparam SB = BLOCK_BITS - 13;   // stream bits

logic [7:0]  emax;
logic [4:0]  max_pos;
logic [31:0] comp_stream;

assign emax        = in_data[7:0];
assign max_pos     = in_data[12:8];
assign comp_stream = 32'(in_data >> 13);

logic [31:0] floats [3:0];

zfp_decomp decompress(
    .clk(clk),
    .rst(rst),
    .en(1'b1), 
    .emax(emax),
    .max_pos(max_pos),
    .comp_stream(comp_stream),
    .stream_len(MODE),
    .d_in_valid(in_valid),
    .d_out_valid(out_valid),
    .d_out(floats)
);

always_comb
    for (int i = 0; i < 4; i++) out_data[32*i +: 32] = floats[i];

endmodule

`resetall
