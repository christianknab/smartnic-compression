
module gear_box
import zfp_types_pkg::*;

(
    input logic clk,
    input logic rst,
    input logic en,
    input logic valid_in,
    input logic [383:0] header,
    input logic header_valid,
    input logic [44:0] in0, in1, in2, in3,
    input logic in_x_valid [3:0],
    input width_mode_t width_mode,
    input logic last_of_frame,
    output logic [255:0] d_out,
    output logic [31:0] output_mask,
    output logic [255:0] last_frame,
    output logic [31:0] last_frame_mask, 
    output logic last_frame_valid,
    output logic d_out_valid,
    output logic last_frame_out);





    logic [179:0] packed_data;
    logic [7:0] valid_bits;
    logic [511:0] data_buffer;
    logic [8:0] accum_count;
    logic [511:0] temp_buffer;
    logic [5:0] input_size;
    logic [8:0] next_accum_count;



    bit_packer gear_packer(.in0(in0), .in1(in1), .in2(in2), .in3(in3), .in_valid(in_x_valid), .width_mode(width_mode), .packed_data(packed_data), .valid_bits(valid_bits));


    always_ff @(posedge clk or posedge rst)begin
        if(rst)begin
            data_buffer <= '0;
            accum_count <= '0;
            output_mask <= '0;
            last_frame_mask <= 0;
            d_out <= 0;
            last_frame <= 0;
            last_frame_out <= 0;
            last_frame_valid <= '0;
            d_out_valid <= '0;
        end else if(en) begin
            // Default assignments to prevent sticky control signals
            d_out_valid <= 1'b0;
            last_frame_valid <= 1'b0; 
            last_frame_out <= 1'b0; // Only assert when valid_in and last_of_frame are true
            
            if(valid_in)begin
                last_frame_out <= last_of_frame;

                if(header_valid)begin
                    d_out <= header[255:0];
                    d_out_valid <= 1'b1;
                    output_mask <= '1;
                    
                    if(~last_of_frame)begin 
                        data_buffer <= temp_buffer;
                        accum_count <= next_accum_count;
                    end else begin
                        last_frame <= temp_buffer[255:0];
                        last_frame_valid <= 1'b1;
                        data_buffer <= 0;
                        accum_count <= 0;
                        
                        // Direct boolean assignment clears unused upper bits automatically
                        for(int i = 0; i < 32; i ++)begin
                            last_frame_mask[i] <= (i*8 < next_accum_count);
                        end
                    end
                end else begin
                    if(~last_of_frame)begin
                        if(next_accum_count >= 256)begin // Fixed threshold
                            d_out <= temp_buffer[255:0];
                            d_out_valid <= 1'b1;

                            data_buffer <= temp_buffer >> 256;
                            accum_count <= next_accum_count - 256;
                            output_mask <= '1;
                        end else begin
                            data_buffer <= temp_buffer;
                            accum_count <= next_accum_count;
                        end
                    end else begin
                        data_buffer <= 0;
                        accum_count <= 0;
                        d_out_valid <= 1'b1;
                        
                        if(next_accum_count >= 256)begin // Fixed threshold
                            d_out <= temp_buffer[255:0];
                            output_mask <= '1;
                            
                            last_frame <= temp_buffer[511:256];
                            last_frame_valid <= 1'b1;

                            for(int i = 0; i < 32; i ++)begin
                            last_frame_mask[i] <= (i*8 < (int'(next_accum_count) - 256));                            end
                        end else begin
                            d_out <= temp_buffer[255:0];
                            last_frame_mask <= '0; // Ensure spillover mask is clean
                            
                            for(int i = 0; i < 32; i ++)begin
                                output_mask[i] <= (i*8 < next_accum_count);
                            end
                        end
                    end
                end
            end
        end
    end
    always_comb begin
        if(~header_valid)begin
            temp_buffer = data_buffer | (512'(packed_data) << accum_count);
            next_accum_count = accum_count + valid_bits;
        end else begin
            case(width_mode)
                WIDTH_21: begin
                    temp_buffer = { 363'h0  , in3[20:0], header[383:256]};
                    next_accum_count = 9'd149;
                end
                WIDTH_29: begin
                    temp_buffer = { 355'h0  , in3[28:0], header[383:256]};
                    next_accum_count = 9'd157;
                end
                WIDTH_45: begin 
                    temp_buffer = { 339'h0  , in3, header[383:256]};
                    next_accum_count = 9'd173;
                end
                default: begin 
                    temp_buffer = 0;
                    next_accum_count = 0;
                end
            endcase
        end
    
    end

endmodule

