// Language: Verilog 2001

`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * PLACEHOLDER for the ZFP fixed-rate block decoder; replace this file with the
 * real one, keeping the ports.
 *
 * Contract used by zfp_rx_codec:
 *   in_data   the compressed block, BLOCK_BITS (21, 29 or 45) bits, as
 *             produced by zfp_encode
 *   out_data  4 fp32 values, value 0 in bits [31:0]
 *   out_valid follows in_valid by a fixed latency; no stall, so the caller
 *             must always be able to take the output
 *
 * Undoes the zfp_encode placeholder: each value gets back its top
 * BLOCK_BITS/4 bits, the rest are zero, so tests can predict its output
 * exactly.
 */
module zfp_decode #
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

    input  wire [BLOCK_BITS-1:0]  in_data,
    input  wire                   in_valid,

    output wire [127:0]           out_data,
    output wire                   out_valid
);

localparam K = BLOCK_BITS/4;

wire [127:0] dec = {
    in_data[3*K +: K], {32-K{1'b0}},
    in_data[2*K +: K], {32-K{1'b0}},
    in_data[1*K +: K], {32-K{1'b0}},
    in_data[0*K +: K], {32-K{1'b0}}
};

reg [127:0] data_pipe [0:LATENCY-1];
reg [LATENCY-1:0] valid_pipe = 0;

assign out_data = data_pipe[LATENCY-1];
assign out_valid = valid_pipe[LATENCY-1];

integer i;

always @(posedge clk) begin
    data_pipe[0] <= dec;
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
