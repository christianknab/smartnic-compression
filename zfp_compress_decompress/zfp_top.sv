module zfp_top (
    input  logic        clk,
    input  logic        rst,
    input  logic [31:0] d_in [3:0],
    input  logic        d_in_valid,
    input logic [1:0]   max_bits_in,
    output logic [31:0] d_out [3:0],
    output logic        d_out_valid,
    output logic [7:0]  trans_emax,
    output logic [4:0]  trans_max_pos,
    output logic [31:0] trans_stream,
    output logic [1:0]  trans_len,
    output logic        trans_valid
    
);
    

    zfp_comp compressor (
        .clk(clk),
        .rst(rst),
        .d_in(d_in),
        .max_bits(max_bits_in), // Set to 32 bits
        .d_in_valid(d_in_valid),
        .exponent(trans_emax),
        .max_pos(trans_max_pos),
        .comp_stream(trans_stream),
        .stream_len(trans_len),
        .d_out_valid(trans_valid)
    );

    zfp_decomp decompressor (
        .clk(clk),
        .rst(rst),
        .emax(trans_emax),
        .max_pos(trans_max_pos),
        .comp_stream(trans_stream),
        .stream_len(trans_len),
        .d_in_valid(trans_valid),
        .d_out_valid(d_out_valid),
        .d_out(d_out)
    );
endmodule
