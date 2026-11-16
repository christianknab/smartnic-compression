module bit_unpacker
import zfp_types_pkg::*;
(
    input logic [179:0] packed_data,
    input logic [7:0] valid_bits,
    input  width_mode_t width_mode,
    output logic [44:0] out1, out2, out3, out4,
    output logic [3:0] out_valid
);

    always_comb begin
        out_valid = '0;
        case(width_mode)
            WIDTH_21:begin
                out1 = {24'b0, packed_data[20:0]};
                out2 = {24'b0, packed_data[41:21]};
                out3 = {24'b0, packed_data[62:42]};
                out4 = {24'b0, packed_data[83:63]};
                for(int i = 0; i < 4; i ++)begin
                    if((i+1)*21 <= valid_bits)
                        out_valid[i] = 1'b1;
                end
            end
            WIDTH_29:begin
                out1 = {16'b0, packed_data[28:0]};
                out2 = {16'b0, packed_data[57:29]};
                out3 = {16'b0, packed_data[86:58]};
                out4 = {16'b0, packed_data[115:87]};
                for(int i = 0; i < 4; i ++)begin
                    if((i+1)*29 <= valid_bits)
                        out_valid[i] = 1'b1;
                end

            end
            WIDTH_45:begin
                out1 = packed_data[44:0];
                out2 = packed_data[89:45];
                out3 = packed_data[134:90];
                out4 = packed_data[179:135];
                for(int i = 0; i < 4; i ++)begin
                    if((i+1)*45 <= valid_bits)
                        out_valid[i] = 1'b1;
                end
            end
            default:begin
                out1 = 0;
                out2 = 0;
                out3 = 0;
                out4 = 0;
            end
        endcase
    end


endmodule

