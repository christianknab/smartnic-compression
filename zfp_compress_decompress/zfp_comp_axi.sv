module zfp_comp_axi
import zfp_types_pkg::*;
 #(
    parameter CHANNELS = 8,
    parameter PORT_COUNT = 8,
    parameter AXIS_SYNC_KEEP_WIDTH = AXIS_SYNC_DATA_WIDTH/8,
    parameter AXIS_SYNC_DATA_WIDTH = 512,
    parameter AXIS_KEEP_WIDTH_32 = AXIS_SYNC_DATA_WIDTH/32,
    parameter AXIS_SYNC_TX_USER_WIDTH = 17,
    parameter BIT_WIDTH = 32,
    parameter ZFP_INPUT_SIZE = BIT_WIDTH *4,
    parameter BUFFER_SLOTS = 6,
    parameter COMP_MODE_ORIGIN = 336,//find true avlue later
    parameter PTP_TS_WIDTH = 8,
    parameter TX_TAG_WIDTH = 8

)(
    input logic clk,
    input logic rst,


    input  logic [AXIS_SYNC_DATA_WIDTH-1:0]     s_axis_sync_tx_tdata, //data proper
    input  logic [AXIS_SYNC_KEEP_WIDTH-1:0]     s_axis_sync_tx_tkeep, //data valid mask
    input  logic                                s_axis_sync_tx_tvalid, //data source is ready to send data
    output logic                                s_axis_sync_tx_tready, //this module is ready to recieve data
    input  logic                                s_axis_sync_tx_tlast, // 1 on the last input cycle of the current input block
    input  logic [AXIS_SYNC_TX_USER_WIDTH-1:0]  s_axis_sync_tx_tuser, //sideband data, need to buffer, tx routing and checksum offload command?

    output logic [AXIS_SYNC_DATA_WIDTH-1:0]     m_axis_sync_tx_tdata, //module data out
    output logic [AXIS_SYNC_KEEP_WIDTH-1:0]     m_axis_sync_tx_tkeep, //module data out mask
    output logic                                m_axis_sync_tx_tvalid, // module data output is valid
    input  logic                                m_axis_sync_tx_tready, // downstream consumer is ready for data
    output logic                                m_axis_sync_tx_tlast, // 1 on last output cycle of comp
    output logic [AXIS_SYNC_TX_USER_WIDTH-1:0]  m_axis_sync_tx_tuser, // sideband data out from module

    //should be able to just buffer these signals, these are control signals
    input  logic [PTP_TS_WIDTH-1:0]             s_axis_sync_tx_cpl_ts,
    input  logic [TX_TAG_WIDTH-1:0]             s_axis_sync_tx_cpl_tag,
    input  logic                                s_axis_sync_tx_cpl_valid,
    output logic                                s_axis_sync_tx_cpl_ready,

    output logic [PTP_TS_WIDTH-1:0]             m_axis_sync_tx_cpl_ts,
    output logic [TX_TAG_WIDTH-1:0]             m_axis_sync_tx_cpl_tag,
    output logic                                m_axis_sync_tx_cpl_valid,
    input  logic                                m_axis_sync_tx_cpl_ready
);

//Incompleted inputs, i.e less than 4 32-bit floats will be padded with the remaining value for calculation
//Inputs can be fed in at clock cycle - the header, this must be explicitly captured, copied to the output and not processed
//UDP header is 64 bits long
//128 bits in becomes 45-21 out, output must be buffered and match the input size, or masked if packet is not long enough
/*
    Need to determine:
        Buffer size
        State machine for header forwarding
        Handling AXI valid and ready commands on both input and output ** make able to copy to decompress



    Architecture


    N ZFP compressors, where N is large enough to cover all of the data input in a single cycle
        input valid when AXI conditions are met and comp module has at least 1 valid data piece
            this module can process at line rate, so module ready is relayed from downstream objects

    Need to creat copy logic to forward last value to all invalid compressors NO
        Copy logic should only find the 1 partially used compressor and copy the last value the the remaining inputs

    output is ready when there is a full 512 bit or if the output is the last in the sequence and MASK
    CPL will be buffered,
    copying header will require data movement for the block, as half of the first compressor will be header data
        area effeicient method of achieving this?
    Control will be another question lol,
        need to make sure output data compaction can work for all compression scales


    



*/


genvar ports;
genvar data_width;



logic axi_input_valid;










zfp_comp_data_t zfp_comp_data [AXIS_SYNC_DATA_WIDTH/(ZFP_INPUT_SIZE)-1:0];
logic zfp_comp_valid[AXIS_SYNC_DATA_WIDTH/(ZFP_INPUT_SIZE)-1:0];
logic buff_full;


assign axi_input_valid = s_axis_sync_tx_tvalid & s_axis_sync_tx_tready;

assign s_axis_sync_tx_tready = ~buff_full;


assign m_axis_sync_tx_cpl_valid = s_axis_sync_tx_cpl_valid;
assign m_axis_sync_tx_cpl_tag   = s_axis_sync_tx_cpl_tag;
assign m_axis_sync_tx_cpl_ts    = s_axis_sync_tx_cpl_ts;
assign s_axis_sync_tx_cpl_ready = m_axis_sync_tx_cpl_ready;

logic is_first_beat, is_first_sent_beat;
logic [AXIS_SYNC_TX_USER_WIDTH-1:0] tuser_buffer [BUFFER_SLOTS-1:0];
logic [$clog2(BUFFER_SLOTS):0] tuser_front, tuser_tail, cur_tuser;

logic [1:0] comp_mode;
logic [1:0] comp_mode_buffer [3:0];
logic [1:0] comp_mode_latch;
assign comp_mode = (is_first_beat) ? s_axis_sync_tx_tdata[COMP_MODE_ORIGIN +: 2] : comp_mode_latch;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        is_first_beat <= 1'b1;
        tuser_front <= '0;
        tuser_tail  <= '0;
        cur_tuser   <= '0;
        comp_mode_latch <= 0;
    end else if (axi_input_valid) begin

        if (is_first_beat) begin
            // 1. Load the initial tuser as-is
            tuser_buffer[tuser_tail[2:0]] <= s_axis_sync_tx_tuser;
            comp_mode_latch <= s_axis_sync_tx_tdata[COMP_MODE_ORIGIN +: 2];
            
            // 2. Lock in the current index for the rest of this packet
            cur_tuser <= tuser_tail;

            // 3. Increment the tail pointer with explicit wrap-around
            if (tuser_tail == BUFFER_SLOTS - 1)
                tuser_tail <= '0;
            else
                tuser_tail <= tuser_tail + 1;
        end else begin
            // 4. On SUBSEQUENT beats, monitor for late bad_frame aborts
            if (s_axis_sync_tx_tuser[0]) begin
                tuser_buffer[cur_tuser[2:0]][0] <= 1'b1;
            end
        end
        
        // Track packet boundaries
        if (s_axis_sync_tx_tlast)
            is_first_beat <= 1'b1; 
        else
            is_first_beat <= 1'b0; 
    end
end







/*
    Assumes a constant 48 byte header, which means we need to add 6 bytes to the 42 byte MAC IP UDP header
    Have software place the compression mode and any data that is not 16 byte aligned here
*/
generate
    for(data_width = 0; data_width < AXIS_SYNC_DATA_WIDTH/(ZFP_INPUT_SIZE); data_width++)begin : comp_mod_gen
        logic [31:0] d_in [3:0];
        logic [31:0] last_valid;
        logic [3:0] word_valid;
        logic in_valid;
        
        always_comb begin
            // 1. Declare local variables at the top
            int base_bit;
            int byte_offset;

            // 2. Apply DEFAULT assignments to prevent latches on all paths
            base_bit = (data_width * ZFP_INPUT_SIZE); // Added missing '*' 
            byte_offset = '0; 
            d_in = '{default: '0};
            word_valid = 4'b0;
            in_valid = '0; 
            
            // Mask out the first 48 bytes (Slices 0, 1, and 2) on the first beat
            if (is_first_beat && (data_width < 3)) begin
                word_valid = 4'b0; 
            end else begin
                for (int i = 0; i < 4; i++) begin
                    // 3. Assign the pre-declared variable here
                    byte_offset = (data_width * 16) + (i * 4); // Added missing '*'
                    
                    // Verify all 4 bytes of this specific float are valid in TKEEP
                    word_valid[i] = &s_axis_sync_tx_tkeep[byte_offset +: 4];
                    
                    if (word_valid[i]) begin
                        d_in[i] = s_axis_sync_tx_tdata[base_bit + (i * 32) +: 32]; // Added missing '*'
                    end
                end
            end
            
            // 4. Final conditional override
            in_valid = (axi_input_valid) ? |word_valid : '0;
        end

        /* verilator lint_off PINCONNECTEMPTY */
        zfp_comp comp_mod(
            .clk(clk),
            .rst(rst),
            .en(~buff_full),
            .d_in(d_in),
            .max_bits(comp_mode), // 00 = 8, 01 = 16, 10 = 32, 11 = 8 
            .d_in_valid(in_valid),
            .exponent(zfp_comp_data[data_width].exponent),
            .max_pos(zfp_comp_data[data_width].max_pos),
            .comp_stream(zfp_comp_data[data_width].stream),
            .stream_len(),
            .d_out_valid(zfp_comp_valid[data_width])
        );
        /* verilator lint_off PINCONNECTEMPTY */


    end

    
endgenerate



logic [383:0] header_buffer [3:0]; // 48 bytes = 384 bits
logic         header_valid [3:0];
logic         last_buffer [3:0];
logic [AXIS_SYNC_TX_USER_WIDTH-1:0] user_buffer;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        header_buffer <= '{default: '0};
        header_valid  <= '{default: '0};
        last_buffer <= '{default: '0};
        user_buffer <= '{default: '0};
    end else begin
        if (s_axis_sync_tx_tvalid && s_axis_sync_tx_tready ) begin
            // Directly copy the first 42 bytes of this port's stream
            if(is_first_beat)begin
                header_buffer[0] <= s_axis_sync_tx_tdata[0 +: 384];
                header_valid[0]  <= 1'b1;
                comp_mode_buffer[0] <= s_axis_sync_tx_tdata[COMP_MODE_ORIGIN +: 2];
            end else begin
                header_buffer[0] <= '0;
                header_valid[0] <= 1'b0;
            end
            if(s_axis_sync_tx_tlast)
                last_buffer[0] <= 1'b1;
            else 
                last_buffer[0] <= 1'b0; 
        end else begin
            header_valid[0] <= 1'b0;
            last_buffer[0]  <= 1'b0;
        end 
        


        for(int i = 3; i > 0; i --)begin
            header_buffer[i] <= header_buffer[i-1];
            header_valid[i] <= header_valid[i-1];
            last_buffer[i] <= last_buffer[i-1];
            comp_mode_buffer[i] <= comp_mode_buffer[i-1];
        end
            // Add else-if logic here to clear header_valid[p] once written to output packer
    end
end






logic [255:0] formatted_comp_data, formatted_comp_data_last;
logic f_data_valid, f_last_valid, last_frame_sig;
logic [31:0] f_data_mask, f_last_mask;

logic zfp_block_out_valid;
assign zfp_block_out_valid = (zfp_comp_valid.or());
gear_box zfp_gear(
    .clk(clk),
    .rst(rst),
    .en(~buff_full),
    .valid_in(zfp_block_out_valid),
    .header(header_buffer[3]),
    .header_valid(header_valid[3]),
    .in0(zfp_comp_data[0]), 
    .in1(zfp_comp_data[1]), 
    .in2(zfp_comp_data[2]), 
    .in3(zfp_comp_data[3]),
    .in_x_valid(zfp_comp_valid),
    .width_mode(comp_mode_buffer[3]), // check endian mode, maybe make a type for the header
    .last_of_frame(last_buffer[3]),
    .d_out(formatted_comp_data),
    .output_mask(f_data_mask),
    .last_frame(formatted_comp_data_last),
    .last_frame_mask(f_last_mask), 
    .last_frame_valid(f_last_valid),
    .d_out_valid(f_data_valid),
    .last_frame_out(last_frame_sig)
    );





logic [8:0] output_buffer_valid;






 
// Fixed bounds: 4-bit pointers require 16 entries
logic [255:0] output_buffer[15:0];
logic [31:0] output_mask_buffer[15:0];
logic output_last_frame_buffer[15:0];

logic [4:0] o_front_ptr, o_tail_ptr;
logic [4:0] buffer_count;
logic [3:0] head_idx, head_next_idx;
logic [3:0] tail_idx, tail_next_idx;
logic has_odd_last, can_send;

// Clean FIFO pointer math
assign buffer_count = o_tail_ptr - o_front_ptr;
assign buff_full = (buffer_count >= 14); // Reserve space for up to 2 concurrent writes

// Explicit indices to guarantee safe 4-bit wrap-around
assign tail_idx = o_tail_ptr[3:0];
assign tail_next_idx = o_tail_ptr[3:0] + 4'd1;

assign head_idx = o_front_ptr[3:0];
assign head_next_idx = o_front_ptr[3:0] + 4'd1;

// can_send evaluates true if we have 2+ blocks, OR 1 block that is the end of a frame
assign has_odd_last = (buffer_count == 1) && output_last_frame_buffer[head_idx];
assign can_send = (buffer_count >= 2) || has_odd_last;

always_ff @(posedge clk or posedge rst) begin
    if(rst)begin
        output_buffer <= '{default: '0};
        output_mask_buffer <= '{default: '0};
        output_last_frame_buffer <= '{default: '0};
        o_tail_ptr <= 0;
        o_front_ptr <= 0;
        
        m_axis_sync_tx_tvalid <= '0;
        m_axis_sync_tx_tlast <= '0;
        m_axis_sync_tx_tkeep <= '0;
        is_first_sent_beat <= 1'b1;
    end else begin
        // --- Write Logic ---
        if(~buff_full) begin
            if(f_data_valid && f_last_valid) begin
                o_tail_ptr <= o_tail_ptr + 2;
                
                output_buffer[tail_idx] <= formatted_comp_data;
                output_mask_buffer[tail_idx] <= f_data_mask;
                output_last_frame_buffer[tail_idx] <= 1'b0;
                
                output_buffer[tail_next_idx] <= formatted_comp_data_last;
                output_mask_buffer[tail_next_idx] <= f_last_mask;
                output_last_frame_buffer[tail_next_idx] <= last_frame_sig;
                
            end else if (f_data_valid) begin
                o_tail_ptr <= o_tail_ptr + 1;
                
                output_buffer[tail_idx] <= formatted_comp_data;
                output_mask_buffer[tail_idx] <= f_data_mask;
                output_last_frame_buffer[tail_idx] <= 1'b0;
                
            end else if (f_last_valid) begin // Fallback in case last data arrives alone
                o_tail_ptr <= o_tail_ptr + 1;
                
                output_buffer[tail_idx] <= formatted_comp_data_last;
                output_mask_buffer[tail_idx] <= f_last_mask;
                output_last_frame_buffer[tail_idx] <= last_frame_sig;
            end
        end

        // Track beat status
        if(m_axis_sync_tx_tvalid && m_axis_sync_tx_tready && m_axis_sync_tx_tlast)begin
            is_first_sent_beat <= 1'b1;
        end else if (m_axis_sync_tx_tvalid && m_axis_sync_tx_tready) begin
            is_first_sent_beat <= 1'b0;
        end

        // --- Read & Output Logic ---
        if (~m_axis_sync_tx_tvalid || m_axis_sync_tx_tready) begin
            if (can_send) begin
                m_axis_sync_tx_tvalid <= 1'b1;
                
                if (buffer_count >= 2) begin
                    // Normal behavior: combine two 256-bit blocks into 512-bit
                    o_front_ptr <= o_front_ptr + 2;
                    m_axis_sync_tx_tdata <= {output_buffer[head_next_idx], output_buffer[head_idx]};
                    m_axis_sync_tx_tkeep <= {output_mask_buffer[head_next_idx], output_mask_buffer[head_idx]};
                    m_axis_sync_tx_tlast <= (output_last_frame_buffer[head_idx] || output_last_frame_buffer[head_next_idx]);
                end else begin
                    // Odd ending block: Pad the remaining 256 bits with zeroes
                    o_front_ptr <= o_front_ptr + 1;
                    m_axis_sync_tx_tdata <= {output_buffer[head_idx], 256'b0};
                    m_axis_sync_tx_tkeep <= {output_mask_buffer[head_idx], 32'b0};
                    m_axis_sync_tx_tlast <= 1'b1; // Force tlast
                end

                if(is_first_sent_beat) begin
                    m_axis_sync_tx_tuser <= tuser_buffer[tuser_front[2:0]];
                    if (tuser_front == BUFFER_SLOTS - 1)
                        tuser_front <= '0;
                    else
                        tuser_front <= tuser_front + 1;
                end
            end else begin
                m_axis_sync_tx_tvalid <= 1'b0;
                m_axis_sync_tx_tlast  <= 1'b0;
            end
        end
    end
end







endmodule










/*
    1 cycle delay
    takes the current compressed axi frame, header, and control signals
    outputs 1 255 bit block once the neccessary data has been accumulated
    on the last cycle of the frame, if more data is in the buffer than 1 frame, 2 frames are released a the same time
    can handle an input every cycle



*/




