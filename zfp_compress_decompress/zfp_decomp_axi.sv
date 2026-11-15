module zfp_decomp_axi
(
    parameter PORT_COUNT = 8,
    parameter AXIS_SYNC_KEEP_WIDTH = 8,
    parameter AXIS_SYNC_DATA_WIDTH = 8,
    parameter AXIS_KEEP_WIDTH_32 = AXIS_SYNC_DATA_WIDTH/32,
    parameter AXIS_SYNC_TX_USER_WIDTH = 8
)(
    input  logic [PORT_COUNT*AXIS_SYNC_DATA_WIDTH-1:0]     s_axis_sync_rx_tdata,
    input  logic [PORT_COUNT*AXIS_SYNC_KEEP_WIDTH-1:0]     s_axis_sync_rx_tkeep,
    input  logic [PORT_COUNT-1:0]                          s_axis_sync_rx_tvalid,
    output logic [PORT_COUNT-1:0]                          s_axis_sync_rx_tready,
    input  logic [PORT_COUNT-1:0]                          s_axis_sync_rx_tlast,
    input  logic [PORT_COUNT*AXIS_SYNC_RX_USER_WIDTH-1:0]  s_axis_sync_rx_tuser,

    output logic [PORT_COUNT*AXIS_SYNC_DATA_WIDTH-1:0]     m_axis_sync_rx_tdata,
    output logic [PORT_COUNT*AXIS_SYNC_KEEP_WIDTH-1:0]     m_axis_sync_rx_tkeep,
    output logic [PORT_COUNT-1:0]                          m_axis_sync_rx_tvalid,
    input  logic [PORT_COUNT-1:0]                          m_axis_sync_rx_tready,
    output logic [PORT_COUNT-1:0]                          m_axis_sync_rx_tlast,
    output logic [PORT_COUNT*AXIS_SYNC_RX_USER_WIDTH-1:0]  m_axis_sync_rx_tuser,
);



typedef struct packed {
    logic [7:0] exponent;
    logic [4:0] max_pos;
    logic [31:0] stream;
} zfp_comp_data_t;
typedef enum logic [1:0] {
  WIDTH_21 = 2'b00,
  WIDTH_29 = 2'b01,
  WIDTH_45 = 2'b10
} width_mode_t;
typedef enum logic [1:0]{
    S_FIRST = 2'b00,
    S_DURING = 2'b01,
    S_LAST = 2'b11
} gear_states_t;


/*
    First Beat Detection
    Latch tuser data and decomp mode
*/
assign axi_input_valid = s_axis_sync_rx_tvalid & s_axis_sync_rx_tready;

logic is_first_beat, is_first_sent_beat, axi_input_valid;
logic [AXIS_SYNC_TX_USER_WIDTH-1:0] tuser_buffer [BUFFER_SLOTS-1:0];
logic [$clog2(BUFFER_SLOTS):0] tuser_front, tuser_tail, cur_tuser;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        is_first_beat <= 1'b1;
        tuser_front <= '0;
        tuser_tail  <= '0;
        cur_tuser   <= '0;
    end else if (axi_input_valid) begin

        if (is_first_beat) begin
            // 1. Load the initial tuser as-is
            tuser_buffer[tuser_tail] <= s_axis_sync_rx_tuser;
            
            // 2. Lock in the current index for the rest of this packet
            cur_tuser <= tuser_tail;

            // 3. Increment the tail pointer with explicit wrap-around
            if (tuser_tail == BUFFER_SLOTS - 1)
                tuser_tail <= '0;
            else
                tuser_tail <= tuser_tail + 1;
        end else begin
            // 4. On SUBSEQUENT beats, monitor for late bad_frame aborts
            if (s_axis_sync_rx_tuser[0]) begin
                tuser_buffer[cur_tuser][0] <= 1'b1;
            end
        end

        // Track packet boundaries
        if (s_axis_sync_rx_tlast)
            is_first_beat <= 1'b1; 
        else
            is_first_beat <= 1'b0; 
    end
end


logic [383:0] header;
logic header_valid;
zfp_comp_data_t unpacked [3:0];
logic [3:0] unpacked_valid;
width_mode_t width_mode;
logic [31:0] decompressed_data [3:0][3:0];
logic [3:0] decomp_data_valid;
logic last_frame, gear_ready;

assign en = m_axis_sync_rx_tready || (~m_axis_sync_rx_tready && ~m_axis_sync_rx_tvalid);
assign s_axis_sync_rx_tready = gear_ready;
/*
    Reverse gear box

*/
reverse_gear_box decomp_gear_box(
    .clk(clk),
    .rst(rst),
    .en(en),
    .valid_in(s_axis_sync_rx_tvalid),
    .input_frame(s_axis_sync_rx_tdata),
    .last_of_packet(s_axis_sync_rx_tlast),
    .first_of_packet(is_first_beat),

    .ready(gear_ready),
    .header(header),
    .header_valid(header_valid),
    .out1(unpacked[0]), 
    .out2(unpacked[1]), 
    .out3(unpacked[2]), 
    .out4(unpacked[3]),
    .out_valid(unpacked_valid),
    .width_mode(width_mode),
    .last_frame(last_frame)
);


/*
    ZFP decomp block with masking
*/
genvar j;

generate
    for(j = 0; j < 4; j++)begin : decomp_mode_gen

        zfp_decomp decomp_mod(
        .clk(clk),
        .rst(rst),
        .en(en),
        .emax(unpacked[j].exponent),
        .max_pos(unpacked[j].max_pos),
        .comp_stream(unpacked[j].stream),
        .stream_len(width_mode),
        .d_in_valid(unpacked_valid[j]),
        .d_out_valid(decomp_data_valid[j]),
        .d_out(decompressed_data[j]);
    );
    end
endgenerate

/*
    Output Buffer

*/
    logic [383:0] header_buffer [3:0];
    logic header_valid_buf [3:0];
    logic last_frame_buff [3:0];
    //header buffer decomp takes 4 cycles still 
    always_ff @(posedge clk or posedge rst)begin
        if(rst)begin
            header_buffer <= '{default: '0};
            header_valid_buf <= '0;
            last_frame_buff <= '0;
        end else if(en) begin
            if(header_valid)begin
                header_buffer[0] <= header;
                header_valid_buf[0] <= header_valid;
            end
            if(unpacked_valid)
                last_frame_buff[0] <= last_frame;

            for(int i = 3; i > 0; i--)begin
                header_buffer[i] <= header_buffer[i-1];
                header_valid_buf[i] <= header_valid_buf[i-1];
                last_frame_buff[i] <= last_frame_buff[i-1];
            end

            if(header_valid_buf[2])begin
                m_axis_sync_rx_tuser <= tuser_buffer[tuser_front];
                if (tuser_front == BUFFER_SLOTS - 1)
                    tuser_front <= '0;
                else
                    tuser_front <= tuser_front + 1;
            end
        end
    end

    always_comb begin
        m_axis_sync_rx_tdata = (header_valid_buf[3]) ? {header_buffer[3], decompressed_data[3]} : {>>{decompressed_data}};
        m_axis_sync_rx_tkeep = (header_valid_buf[3]) ? {48'b1, 16{decomp_data_valid[3]}} : {16{decomp_data_valid[0]}, 16{decomp_data_valid[1]}, 16{decomp_data_valid[2]}, 16{decomp_data_valid[3]}}
        m_axis_sync_rx_tvalid = (decomp_data_valid != 0);
        m_axis_sync_rx_tlast = last_frame_buff[3];
    end

endmodule



module reverse_gear_box
(
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
                    width_mode_buffer <= input_frame[WIDTH_ORIGIN +: 2];
                    width_mode <= input_frame[WIDTH_ORIGIN +: 2];
                    if(valid_in)begin
                        header <= input_frame[0 +:383];
                        header_valid <= 1'b1;
                        out4_first <= out4_comb;
                        state <= S_DURING;
                        
                        case(width_mode)
                            WIDTH_21:begin
                                data_buffer <= input_frame[511:405];
                                accum_bits <= 107;
                            end
                            WIDTH_29:begin
                                data_buffer <= input_frame[511:413];
                                accum_bits <= 99;
                            end
                            WIDTH_45:begin
                                data_buffer <= input_frame[511:429];
                                accum_bits <= 83;
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

            endcase



        end

    end
    
    always_comb begin
        temp_buffer = data_buffer | (1024'(input_frame) << accum_bits); 

        ready = (accum_bits < 512 && state != S_LAST);
        logic [1:0] current_width;
        current_width = (state == S_FIRST) ? input_frame[WIDTH_ORIGIN +: 2] : width_mode;

        case(current_width)
            WIDTH_21: out4_comb = input_frame[384 +: 21];
            WIDTH_29: out4_comb = input_frame[384 +: 29];                    
            WIDTH_45: out4_comb = input_frame[384 +: 45];
            default:  out4_comb = '0;
        endcase

    end

endmodule


/*
    512 bits of 45, 29, 23
            =   11.3, 17.6, 22.26
    Plan to buffer input side, just make sure output can achieve 1 unpacked 512 bit transmission per cycle
*/



module bit_unpacker
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
                out1 = packed_data[20:0];
                out2 = packed_data[41:21];
                out3 = packed_data[62:42];
                out4 = packed_data[83:63];
                for(int i = 0; i < 4; i ++)begin
                    if((i+1)*21 <= valid_bits)
                        out_valid[i] = 1'b1;
                end
            end
            WIDTH_29:begin
                out1 = packed_data[28:0];
                out2 = packed_data[57:29];
                out3 = packed_data[86:58];
                out4 = packed_data[115:87];
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