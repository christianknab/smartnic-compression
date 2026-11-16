module zfp_comp(
                input  logic        clk,
                input  logic        rst,
                input  logic        en, 
                input  logic [31:0] d_in [3:0],
                input  logic [1:0]  max_bits, // 00 = 8, 01 = 16, 10 = 32, 11 = 8 
                input  logic        d_in_valid,
                output logic [7:0]  exponent,
                output logic [4:0]  max_pos,
                output logic [31:0] comp_stream,
                output logic [1:0]  stream_len,
                output logic        d_out_valid
                );

    // Properly declared signed logic to prevent math corruption and CMPCONST warnings
    logic signed [31:0] conv_ints [3:0]; 
    logic signed [33:0] s [1:0];
    logic signed [33:0] d [1:0];
    logic signed [33:0] c [3:0];
    logic signed [33:0] coeffs [3:0];
    logic signed [33:0] coeffs_s4 [3:0];
    logic [30:0] abs_coeffs_s4 [3:0];

    logic [30:0] abs_coeffs [3:0];
    logic l1_comp [1:0];
    logic l2_comp;
    logic max1_comp [1:0];
    logic max2_comp;
    logic [31:0] max_val;
    logic [7:0]  emax_s1, emax_s2, emax_s3, emax_s4; 
    logic [30:0] max_mag;
    logic [4:0]  max_bit_pos, max_bit_pos_find; // Exactly 5 bits to match output [4:0]
    logic [3:0]  emmited_signs;
    
    integer      bit_idx; // Use integer to safely prevent unsigned underflow during decrements
    logic [31:0] internal_bitstream;
    logic [5:0]  max_bits_val; // 6 bits to safely hold the max value of 32
    
    logic        data_valid [4:0];
    logic [1:0]  max_bits_int[4:0];

    logic [31:0] count;


    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            for(int i = 0; i < 4; i++) begin
                conv_ints[i] <= '0;
                coeffs[i]    <= '0;
                coeffs_s4[i] <= '0;
            end
            for(int i = 0; i < 5; i++) begin
                data_valid[i]   <= 1'b0;
                max_bits_int[i] <= 2'b00;
            end
            emax_s2     <= '0;
            emax_s3     <= '0;
            emax_s4     <= '0;
            max_bit_pos <= '0;
            max_pos     <= '0;
            stream_len  <= '0;
            exponent    <= '0;
            comp_stream <= '0;
            d_out_valid <= 1'b0;
            count <= '0;
        end else if(en) begin

            if(d_in_valid)begin
                count <= count + 1;
            end
            // Pipeline tracking
            for(int i = 4; i > 0; i--) begin
                data_valid[i]   <= data_valid[i-1];
                max_bits_int[i] <= max_bits_int[i-1];
            end
            data_valid[0]   <= d_in_valid;
            max_bits_int[0] <= max_bits;

            // Stage 1
            for(int i = 0; i < 4; i++) begin
            if (d_in[i][30:0] == 31'd0) begin
                conv_ints[i] <= '0;
            end else begin
                logic [30:0] mag = 31'({1'b1, d_in[i][22:0], 7'd0} >> (emax_s1 - d_in[i][30:23]));
                conv_ints[i] <= d_in[i][31] ? -$signed({1'b0, mag}) : $signed({1'b0, mag});
            end
        end
            emax_s2 <= emax_s1;

            // Stage 2
            for(int i = 0; i < 4; i++) begin
                coeffs[i] <= c[i] >>> 2; // Arithmetic shift right for signed values
            end
            emax_s3 <= emax_s2;

            // Stage 3
            max_bit_pos <= max_bit_pos_find;
            for(int i = 0; i < 4; i++) begin
                coeffs_s4[i] <= coeffs[i];
                abs_coeffs_s4[i] <= abs_coeffs[i];
            end
            emax_s4 <= emax_s3;

            // Stage 4
            max_pos     <= max_bit_pos;
            stream_len  <= max_bits_int[2];
            exponent    <= emax_s4;
            comp_stream <= internal_bitstream;
            d_out_valid <= data_valid[2];
        end
    end

    logic current_bit;
    logic budget_hit;
    always_comb begin
        // Stage 1
        l1_comp[0] = d_in[0][30:0] < d_in[1][30:0];
        l1_comp[1] = d_in[2][30:0] < d_in[3][30:0];
        l2_comp    = d_in[{1'b0, l1_comp[0]}][30:0] < d_in[{1'b1, l1_comp[1]}][30:0];
        max_val    = (~l2_comp) ? {1'b0, d_in[{1'b0,l1_comp[0]}][30:0]} : {1'b0, d_in[l1_comp[1] + 2][30:0]};
        emax_s1    = max_val[30:23];

        // Stage 2
        // Explicit 34-bit casting prevents Verilator width warnings
        s[0] = 34'(conv_ints[0]) + 34'(conv_ints[1]);
        s[1] = 34'(conv_ints[2]) + 34'(conv_ints[3]);
        d[0] = 34'(conv_ints[0]) - 34'(conv_ints[1]);
        d[1] = 34'(conv_ints[2]) - 34'(conv_ints[3]);
        
        c[0] = 34'(s[0]) + 34'(s[1]);
        c[2] = 34'(s[0]) - 34'(s[1]);
        c[1] = 34'(d[0]) + 34'(d[1]);
        c[3] = 34'(d[0]) - 34'(d[1]);

        // Stage 3
        for(int i = 0; i < 4; i++) begin
            // Calculate absolute magnitudes safely
            abs_coeffs[i] = (coeffs[i] < 0) ? 31'(-coeffs[i]) : 31'(coeffs[i]);
        end
        max1_comp[0] = abs_coeffs[0] < abs_coeffs[1];
        max1_comp[1] = abs_coeffs[2] < abs_coeffs[3];
        max2_comp    = abs_coeffs[{1'b0, max1_comp[0]}] < abs_coeffs[{1'b1, max1_comp[1]}];
        max_mag      = (~max2_comp) ? abs_coeffs[{1'b0, max1_comp[0]}] : abs_coeffs[max1_comp[1] + 2];
        
        max_bit_pos_find = 5'd0;
        for(int i = 0; i <= 30; i++) begin
            if(max_mag[i]) max_bit_pos_find = 5'(i); // Cast iteration to 5 bits
        end

        // Stage 4
        bit_idx            = 31;
        // Cast the literal to 6 bits to prevent shift warnings, and use the pipelined max_bits
        max_bits_val       = 6'd8 << max_bits_int[2]; 
        emmited_signs      = 4'd0;
        internal_bitstream = 32'd0;
        current_bit = 1'b0; 
        budget_hit = 1'b0;

        for(int i = 32; i > 0; i--) begin
            int index = i - 1;
            
            if(index <= max_bit_pos) begin
                for(int c_i = 0; c_i < 4; c_i++) begin
                    
                    // Cast evaluation to 6 bits 
                    logic [5:0] bits_used = 6'(31 - bit_idx);
                    
                    if (bits_used < max_bits_val && !budget_hit) begin
                        current_bit = abs_coeffs_s4[c_i][index];
                        
                        // Because coeffs_s4 is correctly declared as signed, `coeffs_s4 < 0` will evaluate properly
                        if (current_bit == 1'b1 && ~emmited_signs[c_i]) begin
                            // Guard against negative array indexing when checking bounds
                            if (bits_used + 6'd2 <= max_bits_val && bit_idx >= 1) begin
                                emmited_signs[c_i]              = 1'b1;
                                internal_bitstream[bit_idx]     = 1'b1;
                                internal_bitstream[bit_idx - 1] = (coeffs_s4[c_i] < 0) ? 1'b1 : 1'b0;
                                bit_idx                        -= 2;
                            end else begin
                                budget_hit = 1'b1;
                            end
                        end else if (bit_idx >= 0) begin
                            internal_bitstream[bit_idx] = current_bit;
                            bit_idx                    -= 1;
                        end
                        
                    end
                end
            end
        end
    end

endmodule

// module zfp_comp#(parameter PRECISION = 31)
//                 (
//                 input logic clk,
//                 input logic rst,
//                 input logic [31:0] d_in [3:0],
//                 input logic [1:0] max_bits, // 00 = 8, 01 = 16, 10 = 32, n/a 11 = 8 
//                 input logic d_in_valid,
//                 output logic [7:0] exponent,
//                 output logic [4:0] max_pos,
//                 output logic [31:0] comp_stream,
//                 output logic [1:0] stream_len,
//                 output logic d_out_valid
//                 );

//     logic [31:0] conv_ints [3:0];
//     logic l1_comp [1:0];
//     logic l2_comp;
//     logic max1_comp [1:0];
//     logic max2_comp;
//     logic [31:0] max_val;
//     logic [7:0] emax_s1, emax_s2, emax_s3, emax_s4; 
//     logic [33:0] s [1:0];
//     logic [33:0] d [1:0];
//     logic [33:0] c [3:0];
//     logic [33:0] coeffs [3:0];
//     logic [33:0] coeffs_s4 [3:0];
//     logic [30:0] max_mag;
//     logic [$clog2(30):0] max_bit_pos, max_bit_pos_find;
//     logic [3:0] emmited_signs;
//     logic [$clog2(32):0] bit_idx;
//     logic [31:0] internal_bitstream;
//     logic [$clog2(32):0] max_bits_val;
//     logic data_valid [4:0];
//     logic [1:0] max_bits_int[4:0];

    




//     always_ff @(posedge clk or posedge rst)begin
//         if(rst)begin
//             conv_ints <= '{default: '0};
//             emax_s2 <= '0;
//             coeffs <= '{default: '0};
//             coeffs_s4 <= '{default: '0};
//             max_bit_pos <= '0;
//             max_pos <= 0;
//             stream_len <= 0;
//             exponent <= 0;
//             comp_stream <= 0;
//             d_out_valid <= 0;
//         end else begin
//             for(logic[$clog2(4):0] i = 4; i >0; i--)begin
//                 data_valid[i] <= data_valid[i-1];
//                 max_bits_int[i] <= max_bits_int[i-1];
//             end

//             data_valid[0] <= d_in_valid;
//             max_bits_int[0] <= max_bits;

//             //stage 1
//             for(logic [2:0] i = 0; i < 4; i++)begin
//                 conv_ints[i] <= {d_in[i][31], 1'b1, d_in[i][22:0]} >> (emax_s1 - d_in[i][30:23]);
//             end
//             emax_s2 <= emax_s1;

//             //stage 2
//             for(logic [2:0] i = 0; i < 4; i ++)begin
//                 coeffs[i[1:0]] <= c[i[1:0]] >> 2; 
//             end
//             emax_s3 <= emax_s2;

//             //stage 3
//             max_bit_pos <= max_bit_pos_find;//$clog2(max_mag);
//             coeffs_s4 <= coeffs;
//             emax_s4 <= emax_s3;

//             //stage 4

//             max_pos <= max_bit_pos;
//             stream_len <= max_bits_int[3];
//             exponent <= emax_s4;
//             comp_stream <= internal_bitstream;
//             d_out_valid <= data_valid[3];


//         end
//     end


//     logic[$clog2(32):0] index;
    
//     always_comb begin
//         //S1
//         l1_comp[0] = d_in[0][30:0] < d_in[1][30:0];
//         l1_comp[1] = d_in[2][30:0] < d_in[3][30:0];
//         l2_comp = d_in[l1_comp[0]][30:0] < d_in[l1_comp[1]+2][30:0];
//         max_val = (l2_comp)? {1'b0, d_in[l1_comp[0]][30:0]} : {1'b0, d_in[l1_comp[1] + 2][30:0]};
//         emax_s1 = max_val[30:23];

//         //S2
//         s[0] = conv_ints[0] + conv_ints [1];
//         s[1] = conv_ints[2] + conv_ints [3];
//         d[0] = conv_ints[0] - conv_ints [1];
//         d[1] = conv_ints[2] - conv_ints [3];
//         c[0] = s[0] + s[1];
//         c[2] = s[0] - s[1];
//         c[1] = d[0] + d[1];
//         c[3] = d[0] - d[1];

//         //S3
//         max1_comp[0] = coeffs[0][30:0] < coeffs[1][30:0];
//         max1_comp[1] = coeffs[2][30:0] < coeffs[3][30:0];
//         max2_comp = coeffs[max1_comp[0]][30:0] < coeffs[max1_comp[1]+2][30:0];
//         max_mag = (max2_comp)? coeffs[max1_comp[0]] : coeffs[max1_comp[1] + 2];
        
//         max_bit_pos_find = 30;
//         for(logic [$clog2(32):0] i = 0; i < 30; i ++) begin
//             if(max_mag[i])begin
//                 max_bit_pos_find = i;
//             end
//         end


//         //S4
//         bit_idx = 31;
//         max_bits_val = 8 << max_bits; // The total number of bits allowed
//         emmited_signs = 0;
//         internal_bitstream = 0; // Clear the stream

//         for(logic [$clog2(32):0] i = 32; i > 0; i--) begin
//             index = i - 1;
            
//             if(index <= max_bit_pos) begin
//                 for(logic [2:0] c_i = 0; c_i < 4; c_i++) begin
                    
//                     // Calculate how many bits we have used so far
//                     logic [5:0] bits_used = 31 - bit_idx;
                    
//                     // Only proceed if we haven't hit the budget
//                     if (bits_used < max_bits_val) begin
                        
//                         logic current_bit = coeffs_s4[c_i][index];
                        
//                         // Need to emit sign?
//                         if (current_bit == 1'b1 && ~emmited_signs[c_i]) begin
//                             // Check if we have room for BOTH the data bit and the sign bit
//                             if (bits_used + 2 <= max_bits_val) begin
//                                 emmited_signs[c_i] = 1'b1;
//                                 internal_bitstream[bit_idx] = 1'b1;
//                                 internal_bitstream[bit_idx - 1] = (coeffs_s4[c_i] < 0) ? 1'b1 : 1'b0;
//                                 bit_idx -= 2;
//                             end else begin
//                                 // Hit the budget exactly; we can't fit the sign, so we must 
//                                 // drop this bit entirely to prevent corruption.
//                                 // Do nothing; let the loop exit naturally.
//                             end
//                         end else begin
//                             // Standard data bit (0, or a 1 whose sign is already sent)
//                             internal_bitstream[bit_idx] = current_bit;
//                             bit_idx -= 1;
//                         end
                        
//                     end
//                 end
//             end
//         end

//     end

// endmodule
