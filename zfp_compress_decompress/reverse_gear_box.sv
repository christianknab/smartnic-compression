module reverse_gear_box import zfp_types_pkg::*; #(
    parameter COMP_MODE__ORIGIN = 336 
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic valid_in,
    input logic [511:0] input_frame,
    input logic [63:0] tkeep,
    input logic last_of_packet,
    input logic first_of_packet,
    
    output logic ready,
    output logic [383:0] header,
    output logic header_valid,
    output zfp_comp_data_t out1, out2, out3, out4,
    output logic [3:0] out_valid,
    output width_mode_t width_mode,
    output logic last_frame
);

    logic [1023:0] data_buffer, temp_buffer;
    logic [9:0] accum_bits;
    logic [179:0] packed_data;
    logic [7:0] valid_bits;
    width_mode_t width_mode_buffer;
    gear_states_t state, next_state;
    logic [44:0] out4_int, out4_first, out4_comb;
    logic [3:0] out_valid_int;
    logic [9:0] current_out_width; // Added dynamically calculated output width

    assign out4 = (header_valid) ? out4_first : out4_int; 
    assign out_valid = (header_valid) ? 4'b1000 : out_valid_int;

    bit_unpacker gear_unpack(
        .packed_data(packed_data),
        .valid_bits(valid_bits),
        .width_mode(width_mode_buffer),
        .out1(out1),
        .out2(out2),
        .out3(out3),
        .out4(out4_int),
        .out_valid(out_valid_int)
    );

    logic [9:0] incoming_bits;

    always_comb begin
        // Count valid bytes from tkeep on the last beat (or all beats)
        logic [6:0] valid_bytes;
        valid_bytes = '0;
        for (int i = 0; i < 64; i++) begin
            valid_bytes += 7'(tkeep[i]);
        end
        incoming_bits = last_of_packet ? {valid_bytes, 3'b000} : 10'd512;
    end

    always_comb begin
        logic [1:0] current_width;

        // 1. Determine current_out_width (Now 10 bits)
        case(width_mode)
            WIDTH_21: current_out_width = 10'd84;
            WIDTH_29: current_out_width = 10'd116;
            WIDTH_45: current_out_width = 10'd180;
            default:  current_out_width = 10'd180; 
        endcase

        // 2. Calculate 'ready' BEFORE it is used to fix ALWCOMBORDER and UNOPTFLAT.
        // Used explicitly sized 10'd512 to fix WIDTHEXPAND.
        ready = (accum_bits < 10'd512 && state != S_LAST);

        // 3. Now safely use 'ready' and 'current_out_width'
        if (valid_in && ready && (accum_bits >= current_out_width)) begin
            temp_buffer = (data_buffer >> current_out_width) | (1024'(input_frame) << (accum_bits - current_out_width));
        end else begin
            temp_buffer = data_buffer | (1024'(input_frame) << accum_bits); 
        end
        
        current_width = (state == S_FIRST) ? input_frame[COMP_MODE__ORIGIN +: 2] : width_mode;

        case(current_width)
            WIDTH_21: out4_comb = {24'b0, input_frame[384 +: 21]};
            WIDTH_29: out4_comb = {16'b0, input_frame[384 +: 29]};                    
            WIDTH_45: out4_comb = {input_frame[384 +: 45]};
            default:  out4_comb = '0;
        endcase
    end

    always_ff @(posedge clk or posedge rst)begin
        if(rst)begin
            data_buffer <= '0;
            width_mode_buffer <= WIDTH_45;
            packed_data <= '0;
            valid_bits <= '0;
            header_valid <= 1'b0;
            accum_bits <= '0;
            last_frame <= 0;
            state <= S_FIRST;
        end else if(en)begin
            header_valid <= '0;

            case(state)
                S_FIRST:begin
                    last_frame <= 0;
                    width_mode_buffer <= width_mode_t'(input_frame[COMP_MODE__ORIGIN +: 2]);
                    width_mode <= width_mode_t'(input_frame[COMP_MODE__ORIGIN +: 2]);
                    if(valid_in)begin
                        header <= input_frame[0 +:384];
                        header_valid <= 1'b1;
                        out4_first <= out4_comb;
                        state <= S_DURING;
                        
                        case(width_mode_t'(input_frame[COMP_MODE__ORIGIN +: 2]))
                            WIDTH_21:begin
                                data_buffer <= {917'h0, input_frame[511:405]};
                                accum_bits <= 107;
                            end
                            WIDTH_29:begin
                                data_buffer <= {925'h0, input_frame[511:413]};
                                accum_bits <= 99;
                            end
                            WIDTH_45:begin
                                data_buffer <= {941'h0, input_frame[511:429]};
                                accum_bits <= 83;
                            end
                            default:begin
                                data_buffer <= 0;
                                accum_bits <= 0;
                            end
                        endcase
                    end
                end
                
                S_DURING:begin
                    if(valid_in && ready)begin
                        if (accum_bits >= current_out_width) begin
                            // Output a block and read new frame
                            accum_bits <= accum_bits + incoming_bits - current_out_width;
                            data_buffer <= temp_buffer; // temp_buffer already handles the shift
                            packed_data <= data_buffer[179:0]; // Capture bottom before overwrite
                            valid_bits <= current_out_width[7:0];
                        end else begin
                            // Incoming data but not enough accumulated to output yet
                            accum_bits <= accum_bits + incoming_bits;
                            data_buffer <= temp_buffer;
                            valid_bits <= '0;
                        end
                        
                        if(last_of_packet)begin
                            state <= S_LAST;
                        end
                    end else if (accum_bits >= current_out_width) begin
                        // Upstream stalled, but we have enough buffered data to output a full block
                        accum_bits <= accum_bits - current_out_width;
                        data_buffer <= data_buffer >> current_out_width;
                        packed_data <= data_buffer[179:0];
                        valid_bits <= current_out_width[7:0];
                    end else begin
                        // Buffer starving, wait for valid_in
                        valid_bits <= '0;
                    end
                end
                
                S_LAST: begin
                    if (accum_bits > current_out_width) begin
                        // More than one output block remaining
                        data_buffer <= data_buffer >> current_out_width;
                        packed_data <= data_buffer[179:0];
                        valid_bits  <= current_out_width[7:0];
                        accum_bits  <= accum_bits - current_out_width;
                    end else if (accum_bits > 0) begin
                        // Final block (either exact multiple == current_out_width, or partial < current_out_width)
                        data_buffer <= '0;
                        packed_data <= data_buffer[179:0];
                        valid_bits  <= accum_bits[7:0];
                        accum_bits  <= '0;
                        last_frame  <= 1'b1;
                        state       <= S_FIRST;
                    end else begin
                        // Safety catch-all if S_LAST was entered with 0 bits
                        state       <= S_FIRST;
                        last_frame  <= 1'b1;
                        valid_bits  <= '0;
                    end
                end
                
                default:begin
                    state <= S_FIRST;
                end
            endcase
        end
    end
endmodule

// module reverse_gear_box import zfp_types_pkg::*; #(
//     parameter COMP_MODE__ORIGIN = 336 //insert correct here
// )(
//     input logic clk,
//     input logic rst,
//     input logic en,
//     input logic valid_in,
//     input logic [511:0] input_frame,
//     input logic last_of_packet,
//     input logic first_of_packet,
    

//     output logic ready,
//     output logic [383:0] header,
//     output logic header_valid,
//     output zfp_comp_data_t out1, out2, out3, out4,
//     output logic [3:0] out_valid,
//     output width_mode_t width_mode,
//     output logic last_frame
// );

//     logic [1023:0] data_buffer, temp_buffer;
//     logic [9:0] accum_bits;
//     logic [179:0] packed_data;
//     logic [7:0] valid_bits;
//     width_mode_t width_mode_buffer;
//     gear_states_t state, next_state;
//     logic [44:0] out4_int, out4_first, out4_comb;
//     logic [3:0] out_valid_int;

    

//     assign out4 = (header_valid) ? out4_first : out4_int; 
//     assign out_valid = (header_valid) ? 4'b1000 : out_valid_int;

//     bit_unpacker gear_unpack(
//         .packed_data(packed_data),
//         .valid_bits(valid_bits),
//         .width_mode(width_mode_buffer),
//         .out1(out1),
//         .out2(out2),
//         .out3(out3),
//         .out4(out4_int),
//         .out_valid(out_valid_int)
        

//     );




//     always_ff @(posedge clk or posedge rst)begin
//         if(rst)begin
//             data_buffer <= '0;
//             width_mode_buffer <= WIDTH_45;
//             packed_data <= '0;
//             valid_bits <= '0;
//             header_valid <= 1'b0;
//             accum_bits <= '0;
//             last_frame <= 0;
//             state <= S_FIRST;
//         end else if(en)begin
//             header_valid <= '0;

//             case(state)
//                 S_FIRST:begin
//                     last_frame <= 0;
//                     width_mode_buffer <= width_mode_t'(input_frame[COMP_MODE__ORIGIN +: 2]);
//                     width_mode <= width_mode_t'(input_frame[COMP_MODE__ORIGIN +: 2]);
//                     if(valid_in)begin
//                         header <= input_frame[0 +:384];
//                         header_valid <= 1'b1;
//                         out4_first <= out4_comb;
//                         state <= S_DURING;
                        
//                         case(width_mode)
//                             WIDTH_21:begin
//                                 data_buffer <= {917'h0, input_frame[511:405]};
//                                 accum_bits <= 107;
//                             end
//                             WIDTH_29:begin
//                                 data_buffer <= {925'h0, input_frame[511:413]};
//                                 accum_bits <= 99;
//                             end
//                             WIDTH_45:begin
//                                 data_buffer <= {941'h0, input_frame[511:429]};
//                                 accum_bits <= 83;
//                             end
//                             default:begin
//                                 data_buffer <= 0;
//                                 accum_bits <= 0;
//                             end
//                         endcase
//                     end
//                 end
                
//                 S_DURING:begin
//                     if(valid_in && ready)begin
//                         // Process incoming 512 bits and outgoing 180 bits simultaneously


//                         /*Packed data sohuld be variable in length based on the width mode*/
//                         accum_bits <= accum_bits + 512 - 180;
//                         data_buffer <= temp_buffer >> 180;
//                         packed_data <= temp_buffer[179:0]; // Use temp_buffer to capture the newly appended bits
//                         valid_bits <= 8'd180; // Assuming valid_bits expects a count rather than all 1s
                        
//                         if(last_of_packet)begin
//                             state <= S_LAST;
//                         end
//                     end else if (accum_bits >= 180) begin
//                         // Upstream stalled, but we have enough buffered data to output a full block
//                         accum_bits <= accum_bits - 180;
//                         data_buffer <= data_buffer >> 180;
//                         packed_data <= data_buffer[179:0];
//                         valid_bits <= 8'd180;
//                     end else begin
//                         // Buffer starving, wait for valid_in
//                         valid_bits <= '0;
//                     end
//                 end
                
//                 S_LAST: begin
//                     if(accum_bits >= 180)begin // Changed from > to >= to catch exact multiples
//                         data_buffer <= data_buffer >> 180;
//                         packed_data <= data_buffer[179:0];
//                         valid_bits <= 8'd180;
//                         accum_bits <= accum_bits - 180;
//                     end else if(accum_bits > 0)begin
//                         data_buffer <= 0;
//                         packed_data <= data_buffer[179:0];
//                         valid_bits <= accum_bits[7:0];
//                         accum_bits <= 0;
//                         state <= S_FIRST;
//                         last_frame <= 1;
//                     end else begin
//                         // Catch-all for when accum_bits hits exactly 0
//                         state <= S_FIRST;
//                         last_frame <= 1;
//                         valid_bits <= '0;
//                     end 
//                 end
                
//                 default:begin
//                     state <= S_FIRST;
//                 end
//             endcase
//         end
//     end


//     always_comb begin
//         logic [1:0] current_width;

//         temp_buffer = data_buffer | (1024'(input_frame) << accum_bits); 

//         ready = (accum_bits < 512 && state != S_LAST);
//         current_width = (state == S_FIRST) ? input_frame[COMP_MODE__ORIGIN +: 2] : width_mode;

//         case(current_width)
//             WIDTH_21: out4_comb = {24'b0, input_frame[384 +: 21]};
//             WIDTH_29: out4_comb = {16'b0, input_frame[384 +: 29]};                    
//             WIDTH_45: out4_comb = {input_frame[384 +: 45]};
//             default:  out4_comb = '0;
//         endcase

//     end

// endmodule

