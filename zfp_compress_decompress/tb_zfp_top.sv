module tb_zfp_top #(
    parameter PORT_COUNT = 1,
    parameter AXIS_SYNC_KEEP_WIDTH = AXIS_SYNC_DATA_WIDTH/8,
    parameter AXIS_SYNC_DATA_WIDTH = 512, // Set to standard 512-bit width for example
    parameter AXIS_SYNC_TX_USER_WIDTH = 8
)(
    input  logic clk,
    input  logic rst,

    // Inputs to Compressor
    input  logic [AXIS_SYNC_DATA_WIDTH-1:0]     s_tx_tdata,
    input  logic [AXIS_SYNC_KEEP_WIDTH-1:0]     s_tx_tkeep,
    input  logic                                s_tx_tvalid,
    output logic                                s_tx_tready,
    input  logic                                s_tx_tlast,
    input  logic [AXIS_SYNC_TX_USER_WIDTH-1:0]  s_tx_tuser,


    output logic [AXIS_SYNC_DATA_WIDTH-1:0]    mon_tdata,
    output logic [AXIS_SYNC_KEEP_WIDTH-1:0]    mon_tkeep,
    output logic                               mon_tvalid,
    output logic                               mon_tready,
    output logic                               mon_tlast,
    output logic [AXIS_SYNC_TX_USER_WIDTH-1:0] mon_tuser,


    // Outputs from Decompressor
    output logic [PORT_COUNT*AXIS_SYNC_DATA_WIDTH-1:0]     m_rx_tdata,
    output logic [PORT_COUNT*AXIS_SYNC_KEEP_WIDTH-1:0]     m_rx_tkeep,
    output logic [PORT_COUNT-1:0]                          m_rx_tvalid,
    input  logic [PORT_COUNT-1:0]                          m_rx_tready,
    output logic [PORT_COUNT-1:0]                          m_rx_tlast,
    output logic [PORT_COUNT*AXIS_SYNC_TX_USER_WIDTH-1:0]  m_rx_tuser
);

    // Intermediate signals connecting compressor TX to decompressor RX
    logic [AXIS_SYNC_DATA_WIDTH-1:0]    int_tdata;
    logic [AXIS_SYNC_KEEP_WIDTH-1:0]    int_tkeep;
    logic                               int_tvalid;
    logic                               int_tready;
    logic                               int_tlast;
    logic [AXIS_SYNC_TX_USER_WIDTH-1:0] int_tuser;

    assign mon_tdata = int_tdata;
    assign mon_tkeep = int_tkeep;
    assign mon_tvalid = int_tvalid;
    assign mon_tready = int_tready;
    assign mon_tlast = int_tlast;
    assign mon_tuser = int_tuser;

    // Sideband CPL signals (driven to defaults for testbench)
    logic [7:0] cpl_ts, m_cpl_ts;
    logic [7:0] cpl_tag, m_cpl_tag;
    logic cpl_valid, cpl_ready, m_cpl_valid, m_cpl_ready;

    assign cpl_ts = '0;
    assign cpl_tag = '0;
    assign cpl_valid = '0;
    assign m_cpl_ready = 1'b1;

    zfp_comp_axi #(
        .AXIS_SYNC_DATA_WIDTH(AXIS_SYNC_DATA_WIDTH)
    ) comp_inst (
        .clk(clk),
        .rst(rst),
        .s_axis_sync_tx_tdata(s_tx_tdata),
        .s_axis_sync_tx_tkeep(s_tx_tkeep),
        .s_axis_sync_tx_tvalid(s_tx_tvalid),
        .s_axis_sync_tx_tready(s_tx_tready),
        .s_axis_sync_tx_tlast(s_tx_tlast),
        .s_axis_sync_tx_tuser(s_tx_tuser),
        
        .m_axis_sync_tx_tdata(int_tdata),
        .m_axis_sync_tx_tkeep(int_tkeep),
        .m_axis_sync_tx_tvalid(int_tvalid),
        .m_axis_sync_tx_tready(int_tready),
        .m_axis_sync_tx_tlast(int_tlast),
        .m_axis_sync_tx_tuser(int_tuser),

        // CPL dummy connections
        .s_axis_sync_tx_cpl_ts(cpl_ts),
        .s_axis_sync_tx_cpl_tag(cpl_tag),
        .s_axis_sync_tx_cpl_valid(cpl_valid),
        .s_axis_sync_tx_cpl_ready(cpl_ready),
        .m_axis_sync_tx_cpl_ts(m_cpl_ts),
        .m_axis_sync_tx_cpl_tag(m_cpl_tag),
        .m_axis_sync_tx_cpl_valid(m_cpl_valid),
        .m_axis_sync_tx_cpl_ready(m_cpl_ready)
    );

    zfp_decomp_axi #(
        .AXIS_SYNC_DATA_WIDTH(AXIS_SYNC_DATA_WIDTH)
    ) decomp_inst (
        .clk(clk),
        .rst(rst),
        // Connecting the intermediate signals from compressor to decompressor
        .s_axis_sync_rx_tdata(int_tdata),
        .s_axis_sync_rx_tkeep(int_tkeep),
        .s_axis_sync_rx_tvalid(int_tvalid),
        .s_axis_sync_rx_tready(int_tready),
        .s_axis_sync_rx_tlast(int_tlast),
        .s_axis_sync_rx_tuser(int_tuser),

        .m_axis_sync_rx_tdata(m_rx_tdata),
        .m_axis_sync_rx_tkeep(m_rx_tkeep),
        .m_axis_sync_rx_tvalid(m_rx_tvalid),
        .m_axis_sync_rx_tready(m_rx_tready),
        .m_axis_sync_rx_tlast(m_rx_tlast),
        .m_axis_sync_rx_tuser(m_rx_tuser)
    );

endmodule

