`timescale 1ns/1ps

module h264_codec_tb (
  input  logic clk,
  input  logic rst_n,

  // --- Encoder Interface ---
  input  logic        enc_yuv_valid,
  input  logic [63:0] enc_yuv_data,
  output logic        enc_done,
  output logic        enc_nal_valid,
  output logic [7:0] enc_nal_data, // Changed from [7:0] to [31:0]
  output logic        encoder_rinc,


  output  logic        enc_ld_start,
  output  logic [7:0]  enc_ld_x,
  output  logic [7:0]  enc_ld_y,
  // --- Decoder Control ---
  input  logic        decoder_ap_start,
  output logic        ap_done,
  input  logic [31:0] nalu_len_in,
  input  logic [31:0] nalu_type_in,
  input  logic [31:0] nalu_prefix_len_in,

  // --- TB Memory Backdoor (Virtual Address Mapped) ---
  input  logic        tb_mem_wr_en,
  input  logic [31:0] tb_mem_addr,
  input  logic [7:0]  tb_mem_wr_data,
  output logic [7:0]  tb_mem_rd_data
);

  // =========================================================
  // Memory Space Declarations
  // =========================================================
  logic [7:0] nalu_buf      [0:1048575]; // 0x00000000 - 1MB
  logic [7:0] pic_Sluma     [0:2097151]; // 0x10000000 - 2MB (1920x1088)
  logic [7:0] pic_SChroma_0 [0:524287];  // 0x20000000 - 512KB (Cb)
  logic [7:0] pic_SChroma_1 [0:524287];  // 0x30000000 - 512KB (Cr)
  
  // Metadata BRAMs (Sized generously for 1080p MB counts / DPB size)
  logic [31:0] pic_Picorder_num  [0:31];
  logic [31:0] pic_memoccupied   [0:31];
  logic [31:0] pic_frame_num     [0:31];
  logic [31:0] pic_type          [0:31];
  logic [31:0] pic_use_for_char  [0:31];
  logic [31:0] pic_info_refIdxL0 [0:16383];
  logic [31:0] pic_info_refIdxL1 [0:16383];
  logic [31:0] pic_info_mvd_l0   [0:16383];
  logic [31:0] pic_info_mvd_l1   [0:16383];

  // TB Backdoor routing
  always_ff @(posedge clk) begin
    if (tb_mem_wr_en) begin
      case (tb_mem_addr[31:28])
        4'h0: nalu_buf[tb_mem_addr[19:0]] <= tb_mem_wr_data;
      endcase
    end
    
    case (tb_mem_addr[31:28])
      4'h1: tb_mem_rd_data <= pic_Sluma[tb_mem_addr[20:0]];
      4'h2: tb_mem_rd_data <= pic_SChroma_0[tb_mem_addr[18:0]];
      4'h3: tb_mem_rd_data <= pic_SChroma_1[tb_mem_addr[18:0]];
      default: tb_mem_rd_data <= 8'h00;
    endcase
  end

  // =========================================================
  // xk264 Encoder Instantiation & Protocol Logic
  // =========================================================
  
  // 1. Auto-Start Logic (Decoupled from C++ pixels)
  logic encoder_sys_start;
  logic [7:0] startup_cnt;
  
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      startup_cnt <= 8'd0;
      encoder_sys_start <= 1'b0;
    end else begin
      if (startup_cnt < 8'd100) startup_cnt <= startup_cnt + 1'b1;
      
      // Pulse sys_start for exactly 1 cycle after reset settles
      if (startup_cnt == 8'd90) encoder_sys_start <= 1'b1;
      else encoder_sys_start <= 1'b0;
    end
  end

  // 2. Ext Memory Protocol (Cycle-Accurate to tb_top.v tasks)
  logic ext_start_wire;
  logic [2:0] ext_mode_wire;
  logic ext_done_reg;
  logic ext_wen_reg;
  logic ext_ren_reg;
  logic [5:0] ext_cnt;
  logic [4:0] ext_addr_reg;
  
  typedef enum logic [2:0] {
    IDLE  = 3'd0, 
    RUN   = 3'd1, 
    POST1 = 3'd2, 
    POST2 = 3'd3, 
    POST3 = 3'd4  
  } ext_state_t;
  ext_state_t ext_curr_state;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ext_curr_state <= IDLE;
      ext_cnt <= 6'd0;
      ext_addr_reg <= 5'd0;
      ext_done_reg <= 1'b0;
      ext_wen_reg <= 1'b0;
      ext_ren_reg <= 1'b0;
    end else begin
      case (ext_curr_state)
        IDLE: begin
          ext_done_reg <= 1'b0;
          ext_wen_reg <= 1'b0;
          ext_ren_reg <= 1'b0;
          ext_addr_reg <= 5'd0; 
          
          if (ext_start_wire) begin 
            ext_curr_state <= RUN;
            
            case (ext_mode_wire)
              3'b000: ext_cnt <= 6'd4;  
              3'b001: ext_cnt <= 6'd32; 
              3'b010: ext_cnt <= 6'd4;  
              3'b011: ext_cnt <= 6'd16; 
              3'b100: ext_cnt <= 6'd4;  
              3'b101: ext_cnt <= 6'd16; 
              3'b110: ext_cnt <= 6'd4;  
              3'b111: ext_cnt <= 6'd8;  
            endcase
            
            if (ext_mode_wire[2]) ext_ren_reg <= 1'b1; 
            else                  ext_wen_reg <= 1'b1;
          end
        end
        
        RUN: begin
          ext_addr_reg <= ext_addr_reg + 1'b1;

          if (ext_cnt == 6'd1) begin
            ext_wen_reg <= 1'b0;
            ext_ren_reg <= 1'b0;
            ext_curr_state <= POST1; 
          end else begin
            ext_cnt <= ext_cnt - 1'b1;
          end
        end
        
        POST1: begin
          ext_curr_state <= POST2;
        end
        
        POST2: begin
          ext_done_reg <= 1'b1;
          ext_curr_state <= POST3;
        end
        
        POST3: begin
          ext_done_reg <= 1'b0;
          if (!ext_start_wire) begin 
            ext_curr_state <= IDLE;
          end
        end
      endcase
    end
  end

  top u_encoder (
    .clk            (clk),
    .rst_n          (rst_n),
    .sys_start      (encoder_sys_start),
    .sys_done       (enc_done),
    .sys_intra_flag (1'b1),
    .sys_qp         (6'd27),     
    .sys_mode       (1'b0),      
    .sys_x_total    (8'd119), 
    .sys_y_total    (8'd67),  
    .enc_ld_start   (enc_ld_start), 
    .enc_ld_x       (enc_ld_x), 
    .enc_ld_y       (enc_ld_y),
    
    .rdata_i        (enc_yuv_data),
    .rvalid_i       (enc_yuv_valid),
    .rinc_o         (encoder_rinc),
    
    .wdata_o        (enc_nal_data),
    .wfull_i        (1'b0),
    .winc_o         (enc_nal_valid),
    
    .ext_mb_x_o     (), 
    .ext_mb_y_o     (), 
    .ext_start_o    (ext_start_wire), 
    .ext_done_i     (ext_done_reg), 
    .ext_mode_o     (ext_mode_wire), 
    .ext_wen_i      (ext_wen_reg), 
    .ext_ren_i      (ext_ren_reg), 
    .ext_addr_i     ({27'd0, ext_addr_reg}), 
    .ext_data_i     (128'h0), 
    .ext_data_o     ()
  );

  // =========================================================
  // ADSC-HLS Decoder Instantiation
  // =========================================================
  
  // Wires for BRAMs
  logic [19:0] nalu_addr0;  logic nalu_ce0; logic [7:0] nalu_q0;
  logic [20:0] luma_addr0, luma_addr1; logic luma_ce0, luma_ce1, luma_we0, luma_we1; logic [7:0] luma_d0, luma_d1, luma_q0, luma_q1;
  logic [18:0] cb_addr0, cb_addr1; logic cb_ce0, cb_ce1, cb_we0, cb_we1; logic [7:0] cb_d0, cb_d1, cb_q0, cb_q1;
  logic [18:0] cr_addr0, cr_addr1; logic cr_ce0, cr_ce1, cr_we0, cr_we1; logic [7:0] cr_d0, cr_d1, cr_q0, cr_q1;

  // Frame Buffer RAM Logic (Decoder Ports)
  always_ff @(posedge clk) begin
    if (nalu_ce0) nalu_q0 <= nalu_buf[nalu_addr0];
    
    if (luma_ce0) begin if (luma_we0) pic_Sluma[luma_addr0] <= luma_d0; luma_q0 <= pic_Sluma[luma_addr0]; end
    if (luma_ce1) begin if (luma_we1) pic_Sluma[luma_addr1] <= luma_d1; luma_q1 <= pic_Sluma[luma_addr1]; end
    
    if (cb_ce0) begin if (cb_we0) pic_SChroma_0[cb_addr0] <= cb_d0; cb_q0 <= pic_SChroma_0[cb_addr0]; end
    if (cb_ce1) begin if (cb_we1) pic_SChroma_0[cb_addr1] <= cb_d1; cb_q1 <= pic_SChroma_0[cb_addr1]; end
    
    if (cr_ce0) begin if (cr_we0) pic_SChroma_1[cr_addr0] <= cr_d0; cr_q0 <= pic_SChroma_1[cr_addr0]; end
    if (cr_ce1) begin if (cr_we1) pic_SChroma_1[cr_addr1] <= cr_d1; cr_q1 <= pic_SChroma_1[cr_addr1]; end
  end

  decode_main u_decoder (
    .ap_clk(clk), .ap_rst(~rst_n),
    .ap_start(decoder_ap_start), .ap_done(ap_done),
    .ap_idle(), .ap_ready(),
    
    .nalu_startcodeprefix_len(nalu_prefix_len_in),
    .nalu_len(nalu_len_in),
    .nalu_nal_unit_type(nalu_type_in),
    .nalu_nal_reference_idc(32'd0),
    .nalu_forbidden_bit(32'd0),
    .nalu_bit_offset(32'd0),
    .nalu_bit_length(nalu_len_in * 8),

    .nalu_buf_address0(nalu_addr0), .nalu_buf_ce0(nalu_ce0), .nalu_buf_q0(nalu_q0),
    
    .pic_Sluma_address0(luma_addr0), .pic_Sluma_ce0(luma_ce0), .pic_Sluma_we0(luma_we0), .pic_Sluma_d0(luma_d0), .pic_Sluma_q0(luma_q0),
    .pic_Sluma_address1(luma_addr1), .pic_Sluma_ce1(luma_ce1), .pic_Sluma_we1(luma_we1), .pic_Sluma_d1(luma_d1), .pic_Sluma_q1(luma_q1),
    
    .pic_SChroma_0_address0(cb_addr0), .pic_SChroma_0_ce0(cb_ce0), .pic_SChroma_0_we0(cb_we0), .pic_SChroma_0_d0(cb_d0), .pic_SChroma_0_q0(cb_q0),
    .pic_SChroma_0_address1(cb_addr1), .pic_SChroma_0_ce1(cb_ce1), .pic_SChroma_0_we1(cb_we1), .pic_SChroma_0_d1(cb_d1), .pic_SChroma_0_q1(cb_q1),

    .pic_SChroma_1_address0(cr_addr0), .pic_SChroma_1_ce0(cr_ce0), .pic_SChroma_1_we0(cr_we0), .pic_SChroma_1_d0(cr_d0), .pic_SChroma_1_q0(cr_q0),
    .pic_SChroma_1_address1(cr_addr1), .pic_SChroma_1_ce1(cr_ce1), .pic_SChroma_1_we1(cr_we1), .pic_SChroma_1_d1(cr_d1), .pic_SChroma_1_q1(cr_q1)
  );

endmodule