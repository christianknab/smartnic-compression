// Language: Verilog 2001

`resetall
`timescale 1ns / 1ps
`default_nettype none

/*
 * Small first-word-fall-through FIFO for the ZFP codecs.
 *
 * There is no s_ready: the writer keeps track of the free space (count) and
 * never writes into a full FIFO. m_data is valid whenever m_valid is set and
 * is read in the same cycle m_ready is asserted. count is the number of
 * entries currently stored.
 */
module zfp_fifo #
(
    parameter WIDTH = 64,
    // a power of two
    parameter DEPTH = 16
)
(
    input  wire                     clk,
    input  wire                     rst,

    input  wire [WIDTH-1:0]         s_data,
    input  wire                     s_valid,

    output wire [WIDTH-1:0]         m_data,
    output wire                     m_valid,
    input  wire                     m_ready,

    output wire [$clog2(DEPTH):0]   count
);

localparam CL_DEPTH = $clog2(DEPTH);

// check configuration
initial begin
    if (DEPTH < 2 || (1 << CL_DEPTH) != DEPTH) begin
        $error("Error: DEPTH must be a power of two (instance %m)");
        $finish;
    end
end

reg [WIDTH-1:0] mem [0:DEPTH-1];

reg [CL_DEPTH:0] wr_ptr_reg = 0;
reg [CL_DEPTH:0] rd_ptr_reg = 0;

assign count = wr_ptr_reg - rd_ptr_reg;
assign m_valid = wr_ptr_reg != rd_ptr_reg;
assign m_data = mem[rd_ptr_reg[CL_DEPTH-1:0]];

always @(posedge clk) begin
    if (s_valid) begin
        mem[wr_ptr_reg[CL_DEPTH-1:0]] <= s_data;
        wr_ptr_reg <= wr_ptr_reg + 1;
    end

    if (m_valid && m_ready) begin
        rd_ptr_reg <= rd_ptr_reg + 1;
    end

    if (rst) begin
        wr_ptr_reg <= 0;
        rd_ptr_reg <= 0;
    end
end

endmodule

`resetall
