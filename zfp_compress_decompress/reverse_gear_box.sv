
module reverse_gear_box import zfp_types_pkg::*; #(
    parameter WIDTH_ORIGIN = 100 //insert correct here
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic valid_in,
    input logic [511:0] input_frame,
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


    

    assign out4 = (state == S_FIRST) ? out4_first : out4_int; 

    bit_unpacker gear_unpack(
        .packed_data(packed_data),
        .valid_bits(valid_bits),
        .width_mode(width_mode_buffer),
        .out1(out1),
        .out2(out2),
        .out3(out3),
        .out4(out4_int),
        .out_valid(out_valid)
        

    );




    always_ff @(posedge clk or posedge rst)begin
        if(rst)begin
            data_buffer <= '0;
            width_mode_buffer <= WIDTH_45;
            packed_data <= '0;
            valid_bits <= '0;
            header_valid <= 1'b1;
            accum_bits <= '0;
            last_frame <= 0;
            state <= S_FIRST;
        end else if(en)begin
            header_valid <= '0;

            case(state)
                S_FIRST:begin
                    last_frame <= 0;
                    width_mode_buffer <= width_mode_t'(input_frame[WIDTH_ORIGIN +: 2]);
                    width_mode <= width_mode_t'(input_frame[WIDTH_ORIGIN +: 2]);
                    if(valid_in)begin
                        header <= input_frame[0 +:384];
                        header_valid <= 1'b1;
                        out4_first <= out4_comb;
                        state <= S_DURING;
                        
                        case(width_mode)
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
                        

                        accum_bits <= accum_bits + 512;

                        data_buffer <= temp_buffer >> 180;
                        
                        packed_data <= data_buffer[179:0];
                        valid_bits <= '1;
                        if(last_of_packet)begin
                            state <= S_LAST;
                        end
                    end
                end
                S_LAST: begin
                    if(accum_bits > 180)begin
                        data_buffer <= data_buffer >> 180;
                        packed_data <= data_buffer[179:0];
                        valid_bits <= '1;
                        accum_bits <= accum_bits - 180;
                    end else if(accum_bits > 0)begin
                        data_buffer <= 0;
                        packed_data <= data_buffer[179:0];
                        valid_bits <= accum_bits[7:0];
                        accum_bits <= 0;
                        state <= S_FIRST;
                        last_frame <= 1;
                    end 
                end
                default:begin

                end

            endcase



        end

    end
    
    always_comb begin
        logic [1:0] current_width;

        temp_buffer = data_buffer | (1024'(input_frame) << accum_bits); 

        ready = (accum_bits < 512 && state != S_LAST);
        current_width = (state == S_FIRST) ? input_frame[WIDTH_ORIGIN +: 2] : width_mode;

        case(current_width)
            WIDTH_21: out4_comb = {24'b0, input_frame[384 +: 21]};
            WIDTH_29: out4_comb = {16'b0, input_frame[384 +: 29]};                    
            WIDTH_45: out4_comb = {input_frame[384 +: 45]};
            default:  out4_comb = '0;
        endcase

    end

endmodule

