#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include "Vzfp_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

struct CompressedBlock {
    int emax;
    int max_bit_pos;
    std::vector<int> bitstream;
};


#include <cstring>

CompressedBlock zfp_1d_block_compress(const std::vector<float>& block, int max_bits) {
    CompressedBlock out = {0, 0, {}};
    
    // Find maximum absolute value
    float max_val = 0.0f;
    for (float val : block) {
        max_val = std::max(max_val, std::abs(val));
    }
    
    if (max_val == 0.0f) return out;

    // 1. Hardware-Accurate Emax Extraction (Biased IEEE-754)
    uint32_t max_bits_val;
    std::memcpy(&max_bits_val, &max_val, sizeof(float));
    
    // Extract bits 30:23 (the biased exponent)
    int biased_exp = (max_bits_val >> 23) & 0xFF; 
    
    // Output the biased exponent to match RTL trans_emax
    out.emax = biased_exp; 

    // Calculate the mathematical unbiased emax for the scale calculation
    // IEEE bias is 127. ZFP emax is usually (unbiased + 1).
    int math_emax = (biased_exp - 127) + 1; 

    // 2. Hardware-Accurate Precision (16-bit Datapath)
    int precision = 31; 
    double scale = std::pow(2.0, precision - math_emax);

    // Convert to integers using the updated scale
    int64_t ints[4];
    for (int i = 0; i < 4; i++) {
        ints[i] = static_cast<int64_t>(block[i] * scale);
    }

    // Forward Orthogonal Transform (Using int64_t to prevent overflow)
    int64_t s0 = ints[0] + ints[1];
    int64_t d0 = ints[0] - ints[1];
    int64_t s1 = ints[2] + ints[3];
    int64_t d1 = ints[2] - ints[3];

    int64_t c0 = s0 + s1;
    int64_t c2 = s0 - s1;
    int64_t c1 = d0 + d1;
    int64_t c3 = d0 - d1;

    // 3. Hardware-Accurate Truncation (Arithmetic Shift instead of Division)
    int64_t coeffs[4] = {c0 >> 2, c1 >> 2, c2 >> 2, c3 >> 2};

    // Find the highest bit position actually used
    int64_t max_mag = 0;
    for (int i = 0; i < 4; i++) {
        max_mag = std::max(max_mag, std::abs(coeffs[i]));
    }
    out.max_bit_pos = (max_mag > 0) ? static_cast<int>(std::floor(std::log2(max_mag))) : 0;

    // Bit-plane encoding with fixed-rate truncation
    bool emitted_signs[4] = {false, false, false, false};

    bool budget_hit = false;
    for (int bit_pos = out.max_bit_pos; bit_pos >= 0; bit_pos--) {
        if (out.bitstream.size() >= max_bits || budget_hit) break;
        
        for (int i = 0; i < 4; i++) {
            if (out.bitstream.size() >= max_bits) {
                budget_hit = true;
                break;
            }

            int bit = (std::abs(coeffs[i]) >> bit_pos) & 1;

            if (bit == 1 && !emitted_signs[i]) {
                // If we don't have room for both the bit and its sign, abort entirely
                if (out.bitstream.size() + 1 >= max_bits) {
                    budget_hit = true;
                    break; 
                }
                
                out.bitstream.push_back(1);
                out.bitstream.push_back(coeffs[i] < 0 ? 1 : 0); // Emit sign bit
                emitted_signs[i] = true;
            } else {
                out.bitstream.push_back(bit);
            }
        }
    }

    return out;
}

std::vector<float> zfp_1d_block_decompress(const CompressedBlock& comp, int max_bits) {
    if (comp.emax == 0 && comp.bitstream.empty()) {
        return {0.0f, 0.0f, 0.0f, 0.0f};
    }

    int64_t dec_c[4] = {0, 0, 0, 0};
    int64_t signs[4] = {1, 1, 1, 1};
    bool found[4] = {false, false, false, false};
    size_t idx = 0;

    // Read bit-planes and reconstruct signs
    for (int bit_pos = comp.max_bit_pos; bit_pos >= 0; bit_pos--) {
        if (idx >= comp.bitstream.size()) break;
        
        for (int i = 0; i < 4; i++) {
            if (idx >= comp.bitstream.size()) break;

            int bit = comp.bitstream[idx++];

            if (bit == 1 && !found[i]) {
                found[i] = true;
                if (idx < comp.bitstream.size()) {
                    signs[i] = (comp.bitstream[idx++] == 1) ? -1 : 1;
                }
                dec_c[i] |= (1LL << bit_pos);
            } else {
                dec_c[i] |= (static_cast<int64_t>(bit) << bit_pos);
            }
        }
    }

    // Apply signs
    int64_t c0 = dec_c[0] * signs[0] * 4;
    int64_t c1 = dec_c[1] * signs[1] * 4;
    int64_t c2 = dec_c[2] * signs[2] * 4;
    int64_t c3 = dec_c[3] * signs[3] * 4;

    // Inverse Orthogonal Transform
    int64_t s0 = (c0 + c2) / 2;
    int64_t s1 = (c0 - c2) / 2;
    int64_t d0 = (c1 + c3) / 2;
    int64_t d1 = (c1 - c3) / 2;

    int64_t x0 = (s0 + d0) / 2;
    int64_t x1 = (s0 - d0) / 2;
    int64_t x2 = (s1 + d1) / 2;
    int64_t x3 = (s1 - d1) / 2;

    // Convert back to floating point
    double scale = std::pow(2.0, 31 - ((comp.emax - 127) + 1));
    
    std::vector<float> reconstructed(4);
    reconstructed[0] = static_cast<float>(x0 / scale);
    reconstructed[1] = static_cast<float>(x1 / scale);
    reconstructed[2] = static_cast<float>(x2 / scale);
    reconstructed[3] = static_cast<float>(x3 / scale);

    return reconstructed;
}


int main(int argc, char** argv) {
    // Initialize Verilator context and instantiate the top module
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vzfp_top* top = new Vzfp_top{contextp};

    // Enable tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("dump.vcd");

    // 1. Read the input binary file
    std::ifstream infile("32_2048.bin", std::ios::binary);
    if (!infile) {
        std::cerr << "Error: Could not open 32_2048.bin" << std::endl;
        return 1;
    }
    
    // Read 2048 32-bit values into a vector
    std::vector<uint32_t> data_in(2048);
    infile.read(reinterpret_cast<char*>(data_in.data()), 2048 * sizeof(uint32_t));
    infile.close();

    std::vector<uint32_t> data_out;
    
    // Initialize module signals
    top->clk = 0;
    top->rst = 1;
    top->d_in_valid = 0;
    // top->decom_valid = 0;

    int read_idx = 0;
    int time_steps = 0;

    std::vector<CompressedBlock> golden_compressed;
    std::vector<float> golden_decompressed;
    for(size_t i = 0; i < data_in.size(); i += 4) {
        float f3, f2, f1, f0;
        
        // Safely reinterpret the binary uint32_t data as IEEE 754 floats
        std::memcpy(&f3, &data_in[i+3], sizeof(float));
        std::memcpy(&f2, &data_in[i+2], sizeof(float));
        std::memcpy(&f1, &data_in[i+1], sizeof(float));
        std::memcpy(&f0, &data_in[i], sizeof(float));

        std::vector<float> block = {f0, f1, f2, f3};
        golden_compressed.push_back(zfp_1d_block_compress(block, 32));
    }

    for(auto & data : golden_compressed){
        std::vector<float> decomp_block = zfp_1d_block_decompress(data, 2);
        golden_decompressed.insert(golden_decompressed.end(), decomp_block.begin(), decomp_block.end());
    }

    int trans_idx = 0;
    int rec_idx = 0;
    int write_idx = 0;
    
    // 2. Main Simulation Loop
    // Continue until Verilator throws a finish, or we collect all 2048 outputs
    while (!contextp->gotFinish() && data_out.size() < 2048) {
        
        // Drive falling edge (prep inputs while clock is low)
        top->clk = 0;
        top->eval();
        contextp->timeInc(5);           // Advance 5 time units for the half-cycle
        tfp->dump(contextp->time());
        // Release reset after 3 clock cycles
        if (time_steps > 3) {
            top->rst = 0; 
            
            // Feed 4 new values per clock cycle if data remains
            if (read_idx < 2048) {
                top->d_in_valid = 1;
                // Note: If using an older Verilator version, these might be named top->d_in_0, top->d_in_1, etc.
                top->d_in[0] = data_in[read_idx];
                top->d_in[1] = data_in[read_idx + 1];
                top->d_in[2] = data_in[read_idx + 2];
                top->d_in[3] = data_in[read_idx + 3];
                read_idx += 4;
                top->max_bits_in = 2;

            } else {
                top->d_in_valid = 0; // Stop feeding data
            }

            // if(write_idx < golden_compressed.size()){

            //     CompressedBlock gold = golden_compressed.at(write_idx); // Use write_idx
                
            //     uint32_t packed_gold_stream = 0;
            //     int stream_len = gold.bitstream.size();
            //     write_idx++;
            //     // Pack MSB-first to match Python
            //     for (int b = 0; b < stream_len && b < 32; b++) {
            //         // The first bit in the vector goes to the highest available bit position
            //         packed_gold_stream |= (static_cast<uint32_t>(gold.bitstream[b]) << (31 - b)); 
            //     }
            //     // std::cout << packed_gold_stream << " emax " << gold.emax << " max pos " << gold.max_bit_pos << std::endl;
            //     top->decom_valid = 1;
            //     top->decom_len = 2;
            //     top->decom_emax = gold.emax;
            //     top->decom_stream = packed_gold_stream;
            //     top->decom_max_pos = gold.max_bit_pos;

            // } else {
            //     top->decom_valid = 0;
            // }




        }
        
        // Drive rising edge (Trigger sequential logic)
        top->clk = 1;
        top->eval();
        contextp->timeInc(5);           // Advance 5 time units for the half-cycle
        tfp->dump(contextp->time());
        
        if(top->trans_valid){
            // Prevent out-of-bounds crash if RTL emits too many valids
            if (trans_idx >= golden_compressed.size()) {
                std::cerr << "Error: RTL emitted more trans_valid signals than expected blocks.\n";
                break;
            }
            
            CompressedBlock gold = golden_compressed.at(trans_idx);
            
            std::cout << "Transmission" << std::endl;
            // Pack the golden vector into a scalar to match the RTL output
            uint32_t packed_gold_stream = 0;
            int stream_len = gold.bitstream.size();

            // Pack MSB-first to match Python
            for (int b = 0; b < stream_len && b < 32; b++) {
                // The first bit in the vector goes to the highest available bit position
                packed_gold_stream |= (static_cast<uint32_t>(gold.bitstream[b]) << (31 - b)); 
            }

            if(packed_gold_stream != top->trans_stream){
                std::cout << "Mismatched bitstream at index " << trans_idx 
                          << ", expected " << packed_gold_stream 
                          << ", got " << top->trans_stream << "\n";
            }
            if(gold.emax != top->trans_emax){
                std::cout << "Mismatched emax at index " << trans_idx 
                          << ", expected " << gold.emax 
                          << ", got " << (int)top->trans_emax << "\n";
            }
            if(gold.max_bit_pos != top->trans_max_pos){
                std::cout << "Mismatched max bit pos at index " << trans_idx 
                          << ", expected " << gold.max_bit_pos 
                          << ", got " << (int)top->trans_max_pos << "\n";
            }

            trans_idx++;
        }


        // Capture valid outputs immediately after the rising edge resolves
        if (top->d_out_valid) {
            std::cout << "output oc" << std::endl;
            data_out.push_back(top->d_out[0]);
            data_out.push_back(top->d_out[1]);
            data_out.push_back(top->d_out[2]);
            data_out.push_back(top->d_out[3]);


            // for(int i = 0; i < 4; i ++){
            //     float rtl_float;
            //     std::memcpy(&rtl_float, &top->d_out[i], sizeof(float));
                
            //     if(rtl_float != golden_decompressed.at(rec_idx + i)){
            //         std::cout << "Decompress mismatch expected: " << golden_decompressed.at(rec_idx + i) 
            //                 << " and got " << rtl_float << std::endl;
            //     }
            // }

            rec_idx += 4;




        }
        
        time_steps++;
        contextp->timeInc(1); // Advance internal Verilator time
        
        // Dump trace data for this timestamp
        tfp->dump(contextp->time());
        
        // Failsafe timeout to prevent infinite loops if the pipeline stalls
        if (time_steps > 50000) {
            std::cerr << "Timeout: Simulation exceeded max cycles." << std::endl;
            break; 
        }
    }

    // 3. Write the output binary file
    std::ofstream outfile("output.bin", std::ios::binary);
    outfile.write(reinterpret_cast<char*>(data_out.data()), data_out.size() * sizeof(uint32_t));
    outfile.close();

    std::cout << "Simulation finished. Wrote " << data_out.size() << " elements to output.bin." << std::endl;

    tfp->close();
    delete tfp;
    
    // Cleanup
    delete top;
    delete contextp;
    return 0;
}