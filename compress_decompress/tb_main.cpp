#include <iostream>
#include <fstream>
#include <vector>
#include "Vh264_codec_tb.h"
#include "verilated.h"

Vh264_codec_tb* tb;

void tick() {
    tb->clk = 0; 
    tb->eval();
    tb->clk = 1; 
    tb->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    tb = new Vh264_codec_tb;
    Verilated::traceEverOn(false);

    tb->clk = 0; 
    tb->rst_n = 0; 
    tb->enc_yuv_valid = 0; 
    tb->tb_mem_wr_en = 0;
    tb->decoder_ap_start = 0;
    tb->nalu_prefix_len_in = 0;
    
    for (int i = 0; i < 10; i++) tick();
    tb->rst_n = 1; tick();

    std::cout << "[TB] Phase 1: test Encoding..." << std::endl;

    std::ifstream yuv_in("raw_1080p.yuv", std::ios::binary);
    if (!yuv_in) {
        std::cerr << "Failed to open raw_1080p.yuv" << std::endl;
        return -1;
    }

    std::vector<uint8_t> bitstream;
    
    // 1. Inject ORIGINAL Sequence Parameter Set (SPS) for 1080p
    uint8_t sps[] = {0x00, 0x00, 0x00, 0x01, 0x67, 0x42, 0x00, 0x2A, 0x96, 0x54, 0x05, 
                     0x01, 0xED, 0x80, 0x88, 0x00, 0x00, 0x03, 0x00, 0x08, 0x00, 
                     0x00, 0x03, 0x01, 0xE2, 0x40, 0x00, 0x5D, 0xC0, 0x00, 0x17, 
                     0x70, 0x8F, 0x16, 0x2D, 0x96, 0xB0};
    bitstream.insert(bitstream.end(), sps, sps + sizeof(sps));

    // 2. Inject Picture Parameter Set (PPS)
    uint8_t pps[] = {0x00, 0x00, 0x00, 0x01, 0x68, 0xEB, 0xCC, 0xB2, 0x2C};
    bitstream.insert(bitstream.end(), pps, pps + sizeof(pps));

    // Notice: No manual slice header injected. Hardware will generate it.

    std::vector<uint8_t> frame_y(1920 * 1088, 0);
    std::vector<uint8_t> frame_u(960 * 544, 128);
    std::vector<uint8_t> frame_v(960 * 544, 128);

    yuv_in.read((char*)frame_y.data(), 1920 * 1080);
    yuv_in.read((char*)frame_u.data(), 960 * 540);
    yuv_in.read((char*)frame_v.data(), 960 * 540);

    // Internal counters to track where we are within the current macroblock load
    int y_pixel_count = 0;
    int u_pixel_count = 0;
    int v_pixel_count = 0;
    
    // The hardware drives tb->enc_ld_x and tb->enc_ld_y
    // We use them to calculate the memory offset
    uint32_t current_mb_x = 0;
    uint32_t current_mb_y = 0;

    while (!tb->enc_done) {
        
        // 1. Capture the hardware's macroblock coordinate requests
        if (tb->enc_ld_start) {
            current_mb_x = tb->enc_ld_x;
            current_mb_y = tb->enc_ld_y;
            y_pixel_count = 0;
            u_pixel_count = 0;
            v_pixel_count = 0;
        }

        // 2. Supply YUV Data if the hardware is pulling (rinc == 1)
        if (tb->encoder_rinc) {
            uint64_t packed_data = 0;
            
            if (y_pixel_count < 256) {
                // Serve Y (Luma) block: 16x16 pixels = 256 pixels
                for (int p = 0; p < 8; p++) {
                    int y = (y_pixel_count + p) / 16;
                    int x = (y_pixel_count + p) % 16;
                    uint64_t pix = frame_y[(current_mb_y * 16 + y) * 1920 + (current_mb_x * 16 + x)];
                    packed_data |= (pix << (p * 8));
                }
                y_pixel_count += 8;
            } 
            else if (u_pixel_count < 64) {
                // Serve U (Cb) block: 8x8 pixels = 64 pixels
                for (int p = 0; p < 8; p++) {
                    int y = (u_pixel_count + p) / 8;
                    int x = (u_pixel_count + p) % 8;
                    uint64_t pix = frame_u[(current_mb_y * 8 + y) * 960 + (current_mb_x * 8 + x)];
                    packed_data |= (pix << (p * 8));
                }
                u_pixel_count += 8;
            } 
            else if (v_pixel_count < 64) {
                // Serve V (Cr) block: 8x8 pixels = 64 pixels
                for (int p = 0; p < 8; p++) {
                    int y = (v_pixel_count + p) / 8;
                    int x = (v_pixel_count + p) % 8;
                    uint64_t pix = frame_v[(current_mb_y * 8 + y) * 960 + (current_mb_x * 8 + x)];
                    packed_data |= (pix << (p * 8));
                }
                v_pixel_count += 8;
            }

            tb->enc_yuv_data = packed_data;
            tb->enc_yuv_valid = 1;
        } else {
            tb->enc_yuv_valid = 0;
        }

        // 3. Capture NAL output bits whenever valid
        if (tb->enc_nal_valid) {
            bitstream.push_back(tb->enc_nal_data);
        }

        tick();
    }
    // Flush remaining bitstream
    while (!tb->enc_done) {
        tick();
        if (tb->enc_nal_valid) bitstream.push_back(tb->enc_nal_data);
    }
    
    std::cout << "[TB] Encoded " << bitstream.size() << " bytes." << std::endl;
    
    std::cout << "\n[DIAGNOSTIC] First 16 bytes of pure hardware output:" << std::endl;
    for(size_t k = 46; k < 46 + 16 && k < bitstream.size(); k++) {
        printf("%02X ", bitstream[k]);
    }
    std::cout << "\n" << std::endl;

    std::ofstream h264_out("sim_output.h264", std::ios::binary);
    if (h264_out) {
        h264_out.write(reinterpret_cast<const char*>(bitstream.data()), bitstream.size());
        h264_out.close();
    }

    std::cout << "[TB] Phase 2: Decoding NAL Units..." << std::endl;

    std::vector<size_t> start_codes;
    for (size_t i = 0; i < bitstream.size() - 2; i++) {
        if (bitstream[i] == 0 && bitstream[i+1] == 0 && bitstream[i+2] == 1) {
            if (i > 0 && bitstream[i-1] == 0) start_codes.push_back(i - 1);
            else start_codes.push_back(i);
        }
    }
    start_codes.push_back(bitstream.size());

    for (size_t i = 0; i < start_codes.size() - 1; i++) {
        size_t start_idx = start_codes[i];
        size_t end_idx = start_codes[i+1];
        size_t nalu_len = end_idx - start_idx;
        
        uint32_t prefix_len = (bitstream[start_idx] == 0 && bitstream[start_idx+1] == 0 && bitstream[start_idx+2] == 0) ? 4 : 3;
        uint8_t nal_type = bitstream[start_idx + prefix_len] & 0x1F;
        
        for (size_t j = 0; j < nalu_len; j++) {
            tb->tb_mem_wr_en = 1;
            tb->tb_mem_addr = 0x00000000 + j;
            tb->tb_mem_wr_data = bitstream[start_idx + j];
            tick();
        }
        tb->tb_mem_wr_en = 0;

        tb->nalu_len_in = nalu_len;
        tb->nalu_type_in = nal_type;
        tb->nalu_prefix_len_in = prefix_len;
        tb->decoder_ap_start = 1;
        tick();
        tb->decoder_ap_start = 0;

        uint64_t decode_cycles = 0;
        while (!tb->ap_done) {
            tick();
            decode_cycles++;
        }
    }

    std::ofstream yuv_out("sim_output_1080p.yuv", std::ios::binary);
    uint32_t width = 1920, height = 1088;
    uint32_t luma_size = width * height;
    uint32_t chroma_size = (width / 2) * (height / 2);

    for (uint32_t i = 0; i < luma_size; i++) {
        tb->tb_mem_addr = 0x10000000 + i; tick(); tick(); 
        yuv_out.put(tb->tb_mem_rd_data);
    }
    for (uint32_t i = 0; i < chroma_size; i++) {
        tb->tb_mem_addr = 0x20000000 + i; tick(); tick();
        yuv_out.put(tb->tb_mem_rd_data);
    }
    for (uint32_t i = 0; i < chroma_size; i++) {
        tb->tb_mem_addr = 0x30000000 + i; tick(); tick();
        yuv_out.put(tb->tb_mem_rd_data);
    }

    yuv_out.close();
    tb->final();
    delete tb;
    return 0;
}