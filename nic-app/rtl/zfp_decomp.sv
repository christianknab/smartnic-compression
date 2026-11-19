// i copied this exactly from zfp_compress_decompress/zfp_decomp.sv
module zfp_decomp (
    input  logic        clk,
    input  logic        rst,
    input  logic        en,
    input  logic [7:0]  emax,
    input  logic [4:0]  max_pos,
    input  logic [31:0] comp_stream,
    input  logic [1:0]  stream_len,
    input  logic        d_in_valid,
    
    output logic        d_out_valid,
    output logic [31:0] d_out [3:0]
);

    // =========================================================================
    // PIPELINE REGISTERS
    // =========================================================================
    // Stage 1
    logic [31:0] coeffs_s1 [3:0];
    logic        signs_s1  [3:0];
    logic [7:0]  emax_s1;
    logic        valid_s1;

    // Stage 2
    logic signed [33:0] s_s2 [1:0];
    logic signed [33:0] d_s2 [1:0];
    logic [7:0]         emax_s2;
    logic               valid_s2;

    // Stage 3
    logic signed [33:0] x_s3 [3:0];
    logic [7:0]         emax_s3;
    logic               valid_s3;

    // =========================================================================
    // COMBINATIONAL LOGIC
    // =========================================================================
    
    // Stage 1: Bitstream Decode
   // Stage 1: Bitstream Decode
    logic [31:0] coeffs_c [3:0];
    logic        signs_c  [3:0];
    logic        found_c  [3:0];
    integer      bit_idx;
    logic [6:0]  max_bits_val; // Increased width to prevent 64-bit truncation
    integer      bits_used;    // Changed to integer for safe signed math
    logic        budget_hit;   // Added abort flag

    always_comb begin
        // Initialize defaults
        for (int i = 0; i < 4; i++) begin
            coeffs_c[i] = '0;
            signs_c[i]  = 1'b0;
            found_c[i]  = 1'b0;
        end
        
        bit_idx = 31;
        max_bits_val = 7'd8 << stream_len; 
        budget_hit = 1'b0;
        
        for (int index = 31; index >= 0; index--) begin
            if (index <= max_pos) begin
                for (int c_i = 0; c_i < 4; c_i++) begin
                    bits_used = 31 - bit_idx;
                    
                    if (bits_used < max_bits_val && !budget_hit) begin
                        if (comp_stream[bit_idx] == 1'b1 && !found_c[c_i]) begin
                            if (bits_used + 2 <= max_bits_val) begin
                                found_c[c_i] = 1'b1;
                                coeffs_c[c_i][index] = 1'b1;
                                signs_c[c_i] = comp_stream[bit_idx - 1]; 
                                bit_idx -= 2;
                            end else begin
                                budget_hit = 1'b1; // Abort entirely to maintain alignment
                            end
                        end else begin
                            coeffs_c[c_i][index] = comp_stream[bit_idx];
                            bit_idx -= 1;
                        end
                    end
                end
            end
        end
    end


    // Stage 2: Sign Restoration and Inverse Transform Pass 1

    logic signed [33:0] s_c   [1:0];
    logic signed [33:0] d_c   [1:0];
    logic signed [33:0] c_val [3:0];
    logic signed [33:0] s_c0_sum, s_c1_sum, d_c0_sum, d_c1_sum;

    always_comb begin
        for (int i = 0; i < 4; i++) begin
            // Apply two's complement and shift left by 2 (inverse of c >> 2)
            if (signs_s1[i]) begin
                c_val[i] = -signed'({2'b00, coeffs_s1[i]});
            end else begin
                c_val[i] =  signed'({2'b00, coeffs_s1[i]});
            end
            c_val[i] = c_val[i] << 2; 
        end
        
        s_c0_sum = c_val[0] + c_val[2];
        s_c1_sum = c_val[0] - c_val[2];
        d_c0_sum = c_val[1] + c_val[3];
        d_c1_sum = c_val[1] - c_val[3];

        // Match C++ integer division (round toward zero) by adding 1 if negative
        s_c[0] = s_c0_sum[33] ? (s_c0_sum + 1) >>> 1 : s_c0_sum >>> 1;
        s_c[1] = s_c1_sum[33] ? (s_c1_sum + 1) >>> 1 : s_c1_sum >>> 1;
        d_c[0] = d_c0_sum[33] ? (d_c0_sum + 1) >>> 1 : d_c0_sum >>> 1;
        d_c[1] = d_c1_sum[33] ? (d_c1_sum + 1) >>> 1 : d_c1_sum >>> 1;
    end

    // Stage 3: Inverse Transform Pass 2
    // Stage 3: Inverse Transform Pass 2
    logic signed [33:0] x_c [3:0];

    logic signed [33:0] x_c0_sum, x_c1_sum, x_c2_sum, x_c3_sum;

    always_comb begin
        x_c0_sum = s_s2[0] + d_s2[0];
        x_c1_sum = s_s2[0] - d_s2[0];
        x_c2_sum = s_s2[1] + d_s2[1];
        x_c3_sum = s_s2[1] - d_s2[1];

        x_c[0] = x_c0_sum[33] ? (x_c0_sum + 1) >>> 1 : x_c0_sum >>> 1;
        x_c[1] = x_c1_sum[33] ? (x_c1_sum + 1) >>> 1 : x_c1_sum >>> 1;
        x_c[2] = x_c2_sum[33] ? (x_c2_sum + 1) >>> 1 : x_c2_sum >>> 1;
        x_c[3] = x_c3_sum[33] ? (x_c3_sum + 1) >>> 1 : x_c3_sum >>> 1;
    end

    // Stage 4: Integer to IEEE 754 Float Reassembly
    logic [31:0] d_out_c [3:0];

    always_comb begin : decompress_stage_4
        for (int i = 0; i < 4; i++) begin
            logic        sign_bit;
            logic [30:0] mag;
            integer      pos;
            logic [7:0]  exp_out;
            logic [22:0] mant_out;
            logic [30:0] shifted_mag;
            int          true_exp;
            
            // Assign default values to prevent latches
            pos = 0;
            exp_out = '0;
            mant_out = '0;
            shifted_mag = '0;
            true_exp = 0;
            
            sign_bit = x_s3[i][33]; 
            // Negate the full 34-bit signed vector before slicing the 31-bit magnitude
            mag = sign_bit ? 31'(-x_s3[i]) : x_s3[i][30:0]; 

            if (mag == 0 || emax_s3 == 0) begin
                d_out_c[i] = '0;
            end else begin
                // Leading Zero Counter (Find highest set bit)
                for (int j = 0; j <= 30; j++) begin
                    if (mag[j]) pos = j;
                end
                
                // emax_s3 already contains the +127 bias. 
                // We only need to adjust for the 30-bit fractional scaling offset.
                true_exp = int'(emax_s3) + pos - 30;

                if (true_exp <= 0) begin
                    exp_out = 8'd0;   // Flush true underflows to 0
                end else if (true_exp >= 255) begin
                    exp_out = 8'd255; // Saturate overflows to Infinity
                end else begin
                    exp_out = true_exp[7:0];
                end
                
                // Align mantissa to the 23rd bit
                if (pos >= 23) 
                    shifted_mag = mag >> (pos - 23);
                else 
                    shifted_mag = mag << (23 - pos); // <--- ADD THIS MISSING ELSE BRANCH
                
                // [22:0] naturally truncates the implicit '1' at bit 23
                mant_out = shifted_mag[22:0];
                
                d_out_c[i] = {sign_bit, exp_out, mant_out};
            end
        end
    end

    // =========================================================================
    // SEQUENTIAL LOGIC
    // =========================================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            valid_s1    <= 1'b0;
            valid_s2    <= 1'b0;
            valid_s3    <= 1'b0;
            d_out_valid <= 1'b0;
            for (int i=0; i<4; i++) d_out[i] <= '0;
        end else if(en) begin
            // Stage 1
            valid_s1 <= d_in_valid;
            emax_s1  <= emax;
            for (int i=0; i<4; i++) begin
                coeffs_s1[i] <= coeffs_c[i];
                signs_s1[i]  <= signs_c[i];
            end
            
            // Stage 2
            valid_s2 <= valid_s1;
            emax_s2  <= emax_s1;
            for (int i=0; i<2; i++) begin
                s_s2[i] <= s_c[i];
                d_s2[i] <= d_c[i];
            end

            // Stage 3
            valid_s3 <= valid_s2;
            emax_s3  <= emax_s2;
            for (int i=0; i<4; i++) begin
                x_s3[i] <= x_c[i];
            end

            // Stage 4 (Output)
            d_out_valid <= valid_s3;
            for (int i=0; i<4; i++) begin
                d_out[i] <= d_out_c[i];
            end
        end
    end

endmodule

// module zfp_decomp   #()
//                     (
//                         input logic clk,
//                         input logic rst,
//                         input logic [7:0] emax,
//                         input logic [4:0] max_pos,
//                         input logic [31:0] comp_stream,
//                         input logic [1:0] stream_len,
//                         input logic d_in_valid,
//                         output logic d_out_valid,
//                         output logic [31:0] d_out [3:0]
//                     );

//     logic [31:0] coeffs [3:0][2:0];
//     logic signs [3:0][2:0];
//     logic found [3:0];
//     logic [$clog2(32):0] bit_idx;
//     logic [$clog2[32]:0] max_bits_val;
//     logic [33:0] c [3:0];
//     logic [33:0] s [1:0][1:0];
//     logic [33:0] d [1:0][1:0];
//     logic [31:0] x [3:0][1:0];

//     logic [7:0] emax_buf[3:0];
//     logic data_valid [3:0];



//     always_ff @(posedge clk or posedge rst)begin
//         if(rst)begin
//             d_out <= '{default: '0};
//             d_out_valid = 1'b0;
//             coeffs[1] <= '{default: '0};
//             signs[1] <= '{default: '0};
//             s[1] <= '{default: '0};
//             d[1] <= '{default: '0};
//             x[1] <= '{default: '0};
//         end else begin
//             for(logic[$clog2(4):0] i = 4; i >0; i--)begin
//                 emax_buf[i] <= emax_buf[i-1];
//                 data_valid[i] <= data_valid[i-1];
//             end
//             emax_buf[0] <= emax;
//             data_valid[0] <= d_in_valid;





//             //S1
//             coeffs[1] <= coeffs[0];
//             signs[1] <= signs[0];


//             //S2
//             s[1] <= s[0];
//             d[1] <= d[0];

//             // S3
//             x[1] <= x[0];

//             //s4

//             for(logic [2:0] i = 0; i < 4; i++)begin
//                 d_out[i] <= x[1][i] >> (31-emax_buf[3]);
//             end
//             d_out_valid <= data_valid[3];
//         end

//     end

//     always_comb begin

//         //S1
//         bit_idx = 0;
//         max_bits_val = 8 << stream_len;
//         found = '0;
//         coeffs[0] = '0;
//         signs[0] = '0;

//         for(logic [$clog2(32):0] i = 32; i > 0; i--) begin
//             index = i - 1;
            
//             if(index <= max_pos) begin
//                 for(logic [2:0] c_i = 0; c_i < 4; c_i++) begin
//                     // Calculate how many bits we have used so far
//                     logic [5:0] bits_used = 31 - bit_idx;
                    
//                     // Only proceed if we haven't hit the budget
//                     if (bits_used < max_bits_val) begin
//                         if(comp_stream[bit_idx] && ~found[c_i])begin
//                             found[0][c_i] = 1'b1;
//                             if(bit_idx < max_bits_val)begin
//                                 signs[0][c_i] <= comp_stream[bit_idx];
//                                 bit_idx ++;
//                             end
//                             coeffs[0][c_i][i] = 1'b1;
//                         end else begin
//                             coeffs[0][c_i][i] = comp_stream[bit_idx];

//                         end

//                     end



//                 end
//             end

//         end

//         //S2
//         c = '{default: '0};
//         s[0] = '{default: '0};
//         d[0] = '{default: '0};
//         for(logic [2:0] i = 0; i < 4; i ++)begin
//             c[i] = {signs[1][i], coeffs[1][i]} << 2;
//         end
//         s[0][0] = (c[0] + c[2]) >> 1;
//         s[0][1] = (c[0] - c[2]) >> 1;
//         d[0][0] = (c[1] + c[3]) >> 1;
//         d[0][1] = (c[1] - c[3]) >> 1;


//         //S3

//         x[0] = '{default: '0};
//         x[0][0] = (s[1][0] + d[1][0]) >> 1;
//         x[0][1] = (s[1][0] - d[1][0]) >> 1;
//         x[0][2] = (s[1][1] + d[1][1]) >> 1;
//         x[0][3] = (s[1][1] - d[1][1]) >> 1;



//     end


// endmodule

