// Testbench for the ZFP codecs; run with nic-app/tb/run.sh.
//
//   frames.mem/desc.mem -> zfp_tx_codec -> mqnic_egress (Corundum's TX
//   checksum offload, unmodified) -> "wire" -> pad to 60 bytes -> zfp_rx_codec
//
// Every source has random gaps and every sink random stalls. The bytes of each
// frame on the wire (W) and at the RX output (O) go to got.txt, which
// zfp_vectors.py check compares against its reference model. Protocol errors
// seen here (tid mismatches, holes in tkeep, missing or extra frames) are
// reported directly and make the run fail.

`timescale 1ns / 1ps

`include "zfp_config.vh"

module tb_zfp;

localparam MAX_FRAMES = 256;
localparam MEM_BYTES = 1 << 20;
localparam MIN_FRAME = 60;
localparam TIMEOUT = 200000;

// percent of cycles a source offers data / a sink is ready
localparam IN_PCT = 70;
localparam OUT_PCT = 70;

logic clk = 1'b0;
logic rst = 1'b1;

always #2 clk = ~clk;

/*
 * Stimulus. desc[0] is the frame count; frame f has desc[1+4f+0] byte address
 * in frames, +1 length, +2 checksum enable, +3 {start, offset}.
 */
logic [7:0] frames [0:MEM_BYTES-1];
logic [31:0] desc [0:4*MAX_FRAMES];
int n_frames = 0;
int errors = 0;
int fd;

function automatic int f_addr(int f); return desc[1+4*f]; endfunction
function automatic int f_len(int f); return desc[1+4*f+1]; endfunction

int unsigned rng = 32'h2545f491;

// xorshift32: true in pct percent of calls
function automatic bit chance(int pct);
    rng ^= rng << 13;
    rng ^= rng >> 17;
    rng ^= rng << 5;
    return (rng % 100) < pct;
endfunction

/*
 * DUT chain
 */
logic [63:0] tx_tdata = 0;
logic [7:0]  tx_tkeep = 0;
logic        tx_tvalid = 1'b0;
logic        tx_tready;
logic        tx_tlast = 1'b0;
logic [7:0]  tx_tid = 0;

logic        cmd_csum_enable = 1'b0;
logic [7:0]  cmd_csum_start = 0;
logic [7:0]  cmd_csum_offset = 0;
logic        cmd_valid = 1'b0;
logic        cmd_ready;

logic [63:0] c_tdata;
logic [7:0]  c_tkeep;
logic        c_tvalid, c_tready, c_tlast;
logic [7:0]  c_tid, c_tdest;
logic [0:0]  c_tuser;

logic        cc_csum_enable;
logic [7:0]  cc_csum_start, cc_csum_offset;
logic        cc_valid, cc_ready;

logic [63:0] w_tdata;
logic [7:0]  w_tkeep;
logic        w_tvalid, w_tlast;
logic        w_tready = 1'b0;
logic [7:0]  w_tid, w_tdest;
logic [0:0]  w_tuser;

logic [63:0] r_tdata = 0;
logic [7:0]  r_tkeep = 0;
logic        r_tvalid = 1'b0;
logic        r_tready;
logic        r_tlast = 1'b0;
logic [7:0]  r_tid = 0;

logic [63:0] o_tdata;
logic [7:0]  o_tkeep;
logic        o_tvalid, o_tlast;
logic        o_tready = 1'b0;
logic [7:0]  o_tid, o_tdest;
logic [0:0]  o_tuser;

zfp_tx_codec #(
    .UDP_PORT(`ZFP_UDP_PORT),
    .DSCP(`ZFP_DSCP),
    .BLOCK_BITS(`ZFP_BLOCK_BITS),
    .CSUM_ENABLE(1),
    .DATA_WIDTH(64),
    .ID_WIDTH(8),
    .DEST_WIDTH(8),
    .USER_WIDTH(1)
)
tx_inst (
    .clk(clk),
    .rst(rst),

    .s_axis_tdata(tx_tdata),
    .s_axis_tkeep(tx_tkeep),
    .s_axis_tvalid(tx_tvalid),
    .s_axis_tready(tx_tready),
    .s_axis_tlast(tx_tlast),
    .s_axis_tid(tx_tid),
    .s_axis_tdest(8'd0),
    .s_axis_tuser(1'b0),

    .m_axis_tdata(c_tdata),
    .m_axis_tkeep(c_tkeep),
    .m_axis_tvalid(c_tvalid),
    .m_axis_tready(c_tready),
    .m_axis_tlast(c_tlast),
    .m_axis_tid(c_tid),
    .m_axis_tdest(c_tdest),
    .m_axis_tuser(c_tuser),

    .s_axis_cmd_csum_enable(cmd_csum_enable),
    .s_axis_cmd_csum_start(cmd_csum_start),
    .s_axis_cmd_csum_offset(cmd_csum_offset),
    .s_axis_cmd_valid(cmd_valid),
    .s_axis_cmd_ready(cmd_ready),

    .m_axis_cmd_csum_enable(cc_csum_enable),
    .m_axis_cmd_csum_start(cc_csum_start),
    .m_axis_cmd_csum_offset(cc_csum_offset),
    .m_axis_cmd_valid(cc_valid),
    .m_axis_cmd_ready(cc_ready)
);

mqnic_egress #(
    .TX_CHECKSUM_ENABLE(1),
    .AXIS_DATA_WIDTH(64),
    .AXIS_KEEP_WIDTH(8),
    .AXIS_ID_WIDTH(8),
    .AXIS_DEST_WIDTH(8),
    .AXIS_USER_WIDTH(1),
    .MAX_TX_SIZE(2048)
)
egress_inst (
    .clk(clk),
    .rst(rst),

    .s_axis_tdata(c_tdata),
    .s_axis_tkeep(c_tkeep),
    .s_axis_tvalid(c_tvalid),
    .s_axis_tready(c_tready),
    .s_axis_tlast(c_tlast),
    .s_axis_tid(c_tid),
    .s_axis_tdest(c_tdest),
    .s_axis_tuser(c_tuser),

    .m_axis_tdata(w_tdata),
    .m_axis_tkeep(w_tkeep),
    .m_axis_tvalid(w_tvalid),
    .m_axis_tready(w_tready),
    .m_axis_tlast(w_tlast),
    .m_axis_tid(w_tid),
    .m_axis_tdest(w_tdest),
    .m_axis_tuser(w_tuser),

    .tx_csum_cmd_csum_enable(cc_csum_enable),
    .tx_csum_cmd_csum_start(cc_csum_start),
    .tx_csum_cmd_csum_offset(cc_csum_offset),
    .tx_csum_cmd_valid(cc_valid),
    .tx_csum_cmd_ready(cc_ready)
);

zfp_rx_codec #(
    .UDP_PORT(`ZFP_UDP_PORT),
    .BLOCK_BITS(`ZFP_BLOCK_BITS),
    .DATA_WIDTH(64),
    .ID_WIDTH(8),
    .DEST_WIDTH(8),
    .USER_WIDTH(1)
)
rx_inst (
    .clk(clk),
    .rst(rst),

    .s_axis_tdata(r_tdata),
    .s_axis_tkeep(r_tkeep),
    .s_axis_tvalid(r_tvalid),
    .s_axis_tready(r_tready),
    .s_axis_tlast(r_tlast),
    .s_axis_tid(r_tid),
    .s_axis_tdest(8'd0),
    .s_axis_tuser(1'b0),

    .m_axis_tdata(o_tdata),
    .m_axis_tkeep(o_tkeep),
    .m_axis_tvalid(o_tvalid),
    .m_axis_tready(o_tready),
    .m_axis_tlast(o_tlast),
    .m_axis_tid(o_tid),
    .m_axis_tdest(o_tdest),
    .m_axis_tuser(o_tuser)
);

/*
 * TX data source
 */
int tx_f = 0;
int tx_pos = 0;

always @(posedge clk) begin
    if (rst) begin
        tx_tvalid <= 1'b0;
    end else begin
        if (tx_tvalid && tx_tready) begin
            tx_pos = tx_pos + 8;
            if (tx_pos >= f_len(tx_f)) begin
                tx_pos = 0;
                tx_f = tx_f + 1;
            end
        end
        if (!tx_tvalid || tx_tready) begin
            if (tx_f < n_frames && chance(IN_PCT)) begin
                for (int i = 0; i < 8; i++) begin
                    tx_tdata[i*8 +: 8] <= tx_pos + i < f_len(tx_f) ? frames[f_addr(tx_f) + tx_pos + i] : 8'd0;
                    tx_tkeep[i] <= tx_pos + i < f_len(tx_f);
                end
                tx_tlast <= tx_pos + 8 >= f_len(tx_f);
                tx_tid <= tx_f[7:0];
                tx_tvalid <= 1'b1;
            end else begin
                tx_tvalid <= 1'b0;
            end
        end
    end
end

/*
 * TX checksum command source (may run ahead of the data, like the TX engine)
 */
int cmd_f = 0;

always @(posedge clk) begin
    if (rst) begin
        cmd_valid <= 1'b0;
    end else begin
        if (cmd_valid && cmd_ready) begin
            cmd_f = cmd_f + 1;
        end
        if (!cmd_valid || cmd_ready) begin
            if (cmd_f < n_frames && chance(IN_PCT)) begin
                cmd_csum_enable <= desc[1+4*cmd_f+2][0];
                cmd_csum_start <= desc[1+4*cmd_f+3][15:8];
                cmd_csum_offset <= desc[1+4*cmd_f+3][7:0];
                cmd_valid <= 1'b1;
            end else begin
                cmd_valid <= 1'b0;
            end
        end
    end
end

/*
 * Wire: capture frames out of mqnic_egress
 */
logic [7:0] wmem [0:MEM_BYTES-1];
int w_start [0:MAX_FRAMES-1];
int w_len [0:MAX_FRAMES-1];
int w_wr = 0;
int w_n = 0;
int w_cur = 0;

always @(posedge clk) begin
    if (rst) begin
        w_tready <= 1'b0;
    end else begin
        if (w_tvalid && w_tready) begin
            if (w_tid != w_n[7:0]) begin
                $display("ERROR: wire frame %0d: tid %0d", w_n, w_tid);
                errors++;
            end
            if (!w_tlast && w_tkeep != 8'hff || w_tkeep == 0 || (w_tkeep & (w_tkeep + 8'd1)) != 0) begin
                $display("ERROR: wire frame %0d: tkeep %b (last %0d)", w_n, w_tkeep, w_tlast);
                errors++;
            end
            for (int i = 0; i < 8; i++) begin
                if (w_tkeep[i]) begin
                    wmem[w_wr] = w_tdata[i*8 +: 8];
                    w_wr++;
                end
            end
            if (w_tlast) begin
                $fwrite(fd, "W %0d ", w_n);
                for (int j = w_cur; j < w_wr; j++) begin
                    $fwrite(fd, "%02x", wmem[j]);
                end
                $fwrite(fd, "\n");
                w_start[w_n] = w_cur;
                w_len[w_n] = w_wr - w_cur;
                w_cur = w_wr;
                w_n++;
            end
        end
        w_tready <= chance(OUT_PCT);
    end
end

/*
 * RX source: replay the wire frames, padded to 60 bytes like a MAC would
 */
int r_f = 0;
int r_pos = 0;

function automatic int r_plen(int f);
    return w_len[f] < MIN_FRAME ? MIN_FRAME : w_len[f];
endfunction

always @(posedge clk) begin
    if (rst) begin
        r_tvalid <= 1'b0;
    end else begin
        if (r_tvalid && r_tready) begin
            r_pos = r_pos + 8;
            if (r_pos >= r_plen(r_f)) begin
                r_pos = 0;
                r_f = r_f + 1;
            end
        end
        if (!r_tvalid || r_tready) begin
            if (r_f < w_n && chance(IN_PCT)) begin
                for (int i = 0; i < 8; i++) begin
                    r_tdata[i*8 +: 8] <= r_pos + i < w_len[r_f] ? wmem[w_start[r_f] + r_pos + i] : 8'd0;
                    r_tkeep[i] <= r_pos + i < r_plen(r_f);
                end
                r_tlast <= r_pos + 8 >= r_plen(r_f);
                r_tid <= r_f[7:0];
                r_tvalid <= 1'b1;
            end else begin
                r_tvalid <= 1'b0;
            end
        end
    end
end

/*
 * RX output sink
 */
logic [7:0] obuf [0:4095];
int o_len = 0;
int o_n = 0;

always @(posedge clk) begin
    if (rst) begin
        o_tready <= 1'b0;
    end else begin
        if (o_tvalid && o_tready) begin
            if (o_tid != o_n[7:0]) begin
                $display("ERROR: output frame %0d: tid %0d", o_n, o_tid);
                errors++;
            end
            if (!o_tlast && o_tkeep != 8'hff || o_tkeep == 0 || (o_tkeep & (o_tkeep + 8'd1)) != 0) begin
                $display("ERROR: output frame %0d: tkeep %b (last %0d)", o_n, o_tkeep, o_tlast);
                errors++;
            end
            for (int i = 0; i < 8; i++) begin
                if (o_tkeep[i] && o_len < 4096) begin
                    obuf[o_len] = o_tdata[i*8 +: 8];
                    o_len++;
                end
            end
            if (o_tlast) begin
                $fwrite(fd, "O %0d ", o_n);
                for (int j = 0; j < o_len; j++) begin
                    $fwrite(fd, "%02x", obuf[j]);
                end
                $fwrite(fd, "\n");
                o_len = 0;
                o_n++;
            end
        end
        o_tready <= chance(OUT_PCT);
    end
end

/*
 * Main
 */
int cycles = 0;

always @(posedge clk) begin
    cycles <= cycles + 1;
end

initial begin
    int seed;

    if ($value$plusargs("seed=%d", seed)) begin
        rng = seed == 0 ? 1 : seed;
    end

    $readmemh("frames.mem", frames);
    $readmemh("desc.mem", desc);
    n_frames = desc[0];
    if (n_frames < 1 || n_frames > MAX_FRAMES) begin
        $display("ERROR: bad frame count %0d", n_frames);
        $finish;
    end

    fd = $fopen("got.txt", "w");

    repeat (10) @(posedge clk);
    rst <= 1'b0;

    while (o_n < n_frames && cycles < TIMEOUT) begin
        @(posedge clk);
    end
    // anything extra coming out?
    repeat (200) @(posedge clk);

    if (o_n != n_frames || w_n != n_frames) begin
        $display("ERROR: %0d frames in, %0d on the wire, %0d out%s", n_frames, w_n, o_n,
            cycles >= TIMEOUT ? " (timeout)" : "");
        errors++;
    end

    $fclose(fd);
    $display("tb_zfp: W=%0d, %0d frames, %0d cycles, %0d errors",
        `ZFP_BLOCK_BITS, n_frames, cycles, errors);
    if (errors != 0) begin
        $fatal(1, "tb_zfp: FAILED");
    end
    $finish;
end

endmodule
