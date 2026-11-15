// Language: Verilog 2001

`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * PLACEHOLDER for the ZFP fixed-rate block encoder; replace this file with the
 * real one, keeping the ports.
 *
 * Contract used by zfp_tx_codec:
 *   in_data   4 fp32 values, value 0 in bits [31:0]
 *   out_data  the compressed block, BLOCK_BITS (21, 29 or 45) bits
 *   out_valid follows in_valid by a fixed latency; no stall, so the caller
 *             must always be able to take the output
 *
 * This placeholder just keeps the top BLOCK_BITS/4 bits of every value
 * (value 0 in the low bits), so tests can predict its output exactly.
 */
module zfp_encode #
(
    parameter BLOCK_BITS = 29,
`ifdef ZFP_STUB_LATENCY
    parameter LATENCY = `ZFP_STUB_LATENCY
`else
    parameter LATENCY = 4
`endif
)
(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [127:0]           in_data,
    input  wire                   in_valid,

    output wire [BLOCK_BITS-1:0]  out_data,
    output wire                   out_valid
);

localparam K = BLOCK_BITS/4;

wire [BLOCK_BITS-1:0] enc = {in_data[127 -: K], in_data[95 -: K], in_data[63 -: K], in_data[31 -: K]};

reg [BLOCK_BITS-1:0] data_pipe [0:LATENCY-1];
reg [LATENCY-1:0] valid_pipe = 0;

assign out_data = data_pipe[LATENCY-1];
assign out_valid = valid_pipe[LATENCY-1];

integer i;

always @(posedge clk) begin
    data_pipe[0] <= enc;
    valid_pipe[0] <= in_valid;
    for (i = 1; i < LATENCY; i = i + 1) begin
        data_pipe[i] <= data_pipe[i-1];
        valid_pipe[i] <= valid_pipe[i-1];
    end

    if (rst) begin
        valid_pipe <= 0;
    end
end

endmodule

`resetall