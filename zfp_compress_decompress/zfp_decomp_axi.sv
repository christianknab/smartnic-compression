module zfp_decomp_axi 
import zfp_types_pkg::*;
#(
    parameter PORT_COUNT = 1,
    parameter AXIS_SYNC_KEEP_WIDTH = AXIS_SYNC_DATA_WIDTH/8,
    parameter AXIS_SYNC_DATA_WIDTH = 512,
    parameter AXIS_KEEP_WIDTH_32 = AXIS_SYNC_DATA_WIDTH/32,
    parameter AXIS_SYNC_TX_USER_WIDTH = 8,
    parameter BUFFER_SLOTS = 4,
    parameter AXIS_SYNC_RX_USER_WIDTH = 8,
    parameter COMP_MODE_ORIGIN = 336
)(
    input logic clk,
    input logic rst,
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
    output logic [PORT_COUNT*AXIS_SYNC_RX_USER_WIDTH-1:0]  m_axis_sync_rx_tuser
);





/*
    First Beat Detection
    Latch tuser data and decomp mode
*/
assign axi_input_valid = s_axis_sync_rx_tvalid & s_axis_sync_rx_tready;

logic is_first_beat, is_first_sent_beat, axi_input_valid;
logic [AXIS_SYNC_TX_USER_WIDTH-1:0] tuser_buffer [BUFFER_SLOTS-1:0];
logic [$clog2(BUFFER_SLOTS):0] tuser_front, tuser_tail, cur_tuser;
logic en;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        is_first_beat <= 1'b1;
        tuser_front <= '0;
        tuser_tail  <= '0;
        cur_tuser   <= '0;
    end else if (axi_input_valid) begin

        if (is_first_beat) begin
            // 1. Load the initial tuser as-is
            tuser_buffer[tuser_tail[1:0]] <= s_axis_sync_rx_tuser;
            
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
                tuser_buffer[cur_tuser[1:0]][0] <= 1'b1;
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
        .comp_stream({<< {unpacked[j].stream}}),
        .stream_len(width_mode),
        .d_in_valid(unpacked_valid[j]),
        .d_out_valid(decomp_data_valid[j]),
        .d_out(decompressed_data[j])
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
            header_valid_buf <= '{default: '0};
            last_frame_buff <= '{default: '0};
        end else if(en) begin
            if(header_valid)begin
                header_buffer[0] <= header;
                header_valid_buf[0] <= header_valid;
            end else begin
                header_buffer[0] <= 0;
                header_valid_buf[0] <= 0;
            end
            if(unpacked_valid != 0)
                last_frame_buff[0] <= last_frame;

            for(int i = 3; i > 0; i--)begin
                header_buffer[i] <= header_buffer[i-1];
                header_valid_buf[i] <= header_valid_buf[i-1];
                last_frame_buff[i] <= last_frame_buff[i-1];
            end

            if(header_valid_buf[2])begin
                m_axis_sync_rx_tuser <= tuser_buffer[tuser_front[1:0]];
                if (tuser_front == BUFFER_SLOTS - 1)
                    tuser_front <= '0;
                else
                    tuser_front <= tuser_front + 1;
            end
        end
    end

    logic [511:0] flat_decomp_data;
    always_comb begin
        // Manually pack the 4x4 unpacked array into a 512-bit packed vector
        for (int i = 0; i < 4; i++) begin
            for (int k = 0; k < 4; k++) begin
                flat_decomp_data[(i*4 + k)*32 +: 32] = decompressed_data[i][k];
            end
        end
    end

    logic [127:0] flat_row_3;
    always_comb begin
        flat_row_3 = {decompressed_data[3][3], 
                  decompressed_data[3][2], 
                  decompressed_data[3][1], 
                  decompressed_data[3][0]};

        m_axis_sync_rx_tdata = (header_valid_buf[3]) ? { flat_row_3, header_buffer[3]} : flat_decomp_data;
        m_axis_sync_rx_tkeep = (header_valid_buf[3]) 
            ? { {48{1'b1}}, {16{decomp_data_valid[3]}} } 
            : { {16{decomp_data_valid[0]}}, {16{decomp_data_valid[1]}}, {16{decomp_data_valid[2]}}, {16{decomp_data_valid[3]}} };        
            
        m_axis_sync_rx_tvalid = (decomp_data_valid != 0);
        m_axis_sync_rx_tlast = last_frame_buff[3];
    end

endmodule




/*
    512 bits of 45, 29, 23
            =   11.3, 17.6, 22.26
    Plan to buffer input side, just make sure output can achieve 1 unpacked 512 bit transmission per cycle
*/

