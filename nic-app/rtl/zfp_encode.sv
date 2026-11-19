`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * Contract used by zfp_tx_codec:
 *   in_data   4 fp32 values, value 0 in bits [31:0]
 *   out_data  the compressed block, BLOCK_BITS (21, 29 or 45) bits
 *   out_valid follows in_valid with a fixed 4 cycle latency
 *
 */
module zfp_encode #
(
    parameter BLOCK_BITS = 29
)
(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [127:0]           in_data,
    input  wire                   in_valid,

    output wire [BLOCK_BITS-1:0]  out_data,
    output wire                   out_valid
);

if (BLOCK_BITS != 21 && BLOCK_BITS != 29 && BLOCK_BITS != 45) begin
    $error("BLOCK_BITS must be 21, 29 or 45");
end

localparam [1:0] MODE = (BLOCK_BITS == 21) ? 2'b00 :
                        (BLOCK_BITS == 29) ? 2'b01 : 2'b10;
localparam SB = BLOCK_BITS - 13;   // stream bits

logic [7:0] exponent;
logic [4:0] max_pos;
logic [31:0] comp_stream;

logic [31:0] vals [3:0];
always_comb
    for (int i = 0; i < 4; i++) vals[i] = in_data[32*i +: 32];

assign out_data = {comp_stream[SB-1:0], max_pos, exponent};

zfp_comp compress(
    .clk(clk),
    .rst(rst),
    .en(1'b1), 
    .d_in(vals),
    .max_bits(MODE),
    .d_in_valid(in_valid),
    .exponent(exponent),
    .max_pos(max_pos),
    .comp_stream(comp_stream),
    .stream_len(),
    .d_out_valid(out_valid)
);


endmodule

`resetall