
module bit_packer
import zfp_types_pkg::*;
(input logic [44:0] in0, in1, in2, in3,
                  input logic in_valid [3:0],
                  input  width_mode_t width_mode,
                  output logic [179:0] packed_data,
                  output logic [7:0] valid_bits);


    logic [44:0] mid0, mid1, mid2, mid3;

    assign mid0 = (in_valid[0]) ? in0 : '0;
    assign mid1 = (in_valid[1]) ? in1 : '0;
    assign mid2 = (in_valid[2]) ? in2 : '0;
    assign mid3 = (in_valid[3]) ? in3 : '0;

    always_comb begin
        valid_bits = '0;
        packed_data = '0;
        case(width_mode)
            WIDTH_21:begin
                for(int i = 0; i < 4; i ++)begin
                    if(in_valid[i])begin
                        valid_bits = valid_bits + 21;
                    end
                end
                packed_data = {96'h0, in3[20:0],in2[20:0],in1[20:0],in0[20:0]};
            end
            WIDTH_29:begin
                for(int i = 0; i < 4; i ++)begin
                    if(in_valid[i])begin
                        valid_bits = valid_bits + 29;
                    end
                end
                packed_data = {64'h0, in3[28:0],in2[28:0],in1[28:0],in0[28:0]};
            end
            WIDTH_45:begin
                for(int i = 0; i < 4; i ++)begin
                    if(in_valid[i])begin
                        valid_bits = valid_bits + 45;
                    end
                end
                packed_data = {in3, in2, in1, in0};

            end
            default: begin
                valid_bits = '0;
                packed_data = '0;
            end
        endcase
    end
endmodule

