import numpy as np
import math
import argparse

def zfp_1d_block_compress_fixed(block, max_bits):
    max_val = np.max(np.abs(block))
    if max_val == 0: return 0, 0, []
    # print(f"input {np.abs(block)}")
    # print(f"max val {max_val}")
    emax = math.floor(math.log2(max_val)) + 1
    precision = 31
    scale = 2**(precision - emax)
    ints = [int(x * scale) for x in block]
    
    s0 = ints[0] + ints[1]; d0 = ints[0] - ints[1]
    s1 = ints[2] + ints[3]; d1 = ints[2] - ints[3]
    
    c0 = s0 + s1; c2 = s0 - s1
    c1 = d0 + d1; c3 = d0 - d1
    
    # Use arithmetic shifts to match SystemVerilog/C++ truncation behavior
    coeffs = [c0 >> 2, c1 >> 2, c2 >> 2, c3 >> 2]
    # print(f"coefficents {coeffs}")
    
    # Start loop at the highest bit actually used to save budget
    max_mag = max(abs(c) for c in coeffs)
    max_bit_pos = math.floor(math.log2(max_mag)) if max_mag > 0 else 0
    
    # print(f"max_mag: {max_mag}")
    
    bitstream = []
    emitted_signs = [False] * 4
    
    budget_hit = False
    for bit_pos in range(max_bit_pos, -1, -1):
        if len(bitstream) >= max_bits or budget_hit: break
        
        for i, c in enumerate(coeffs):
            if len(bitstream) >= max_bits: 
                budget_hit = True
                break
            
            bit = (abs(c) >> bit_pos) & 1
            if bit == 1 and not emitted_signs[i]:
                if len(bitstream) + 1 >= max_bits: 
                    budget_hit = True
                    break 
                bitstream.append(1)
                bitstream.append(1 if c < 0 else 0) 
                emitted_signs[i] = True
            else:
                bitstream.append(bit)
                
    return emax, max_bit_pos, bitstream

def zfp_1d_block_decompress_fixed(emax, max_bit_pos, bitstream):
    dec_c = [0] * 4
    signs = [1] * 4
    found = [False] * 4
    idx = 0
    
    for bit_pos in range(max_bit_pos, -1, -1):
        if idx >= len(bitstream): break
        for i in range(4):
            if idx >= len(bitstream): break
            
            bit = bitstream[idx]
            idx += 1
            
            if bit == 1 and not found[i]:
                found[i] = True
                if idx < len(bitstream):
                    # Read the sign bit
                    signs[i] = -1 if bitstream[idx] == 1 else 1
                    idx += 1
                dec_c[i] |= (1 << bit_pos)
            else:
                dec_c[i] |= (bit << bit_pos)
                
    # Restore signs
    
    dec_coeffs = [c * s for c, s in zip(dec_c, signs)]
    
    c0, c1, c2, c3 = [c * 4 for c in dec_coeffs]
    
    s0 = (c0 + c2) >> 1; s1 = (c0 - c2) >> 1
    d0 = (c1 + c3) >> 1; d1 = (c1 - c3) >> 1
    x0 = (s0 + d0) >> 1; x1 = (s0 - d0) >> 1
    x2 = (s1 + d1) >> 1; x3 = (s1 - d1) >> 1
    
    scale = 2**(31 - emax)
    return [x / scale for x in [x0, x1, x2, x3]]

# --- Execution ---

if __name__ == "__main__":
    
    parser = argparse.ArgumentParser(description="Process a file with optional settings.")
    parser.add_argument("-i", "--input", default="32_2048.bin")
    parser.add_argument("-o", "--output", default="output_golden.bin")
    args = parser.parse_args()
    
    # Load data and ensure it's evaluated as floats for ZFP scaling
    data_array = np.fromfile(args.input, dtype=np.float32)#.astype(np.float64) 
    bit_budget = 32

    out_list = []

    # 1. Compress in chunks of 4
    for i in range(len(data_array) // 4):
        # Slice 4 elements from the array
        block = data_array[i*4 : (i*4)+4]
        
        exponent, max_bit_pos, compressed_stream = zfp_1d_block_compress_fixed(block, bit_budget)
        
        # Use append to keep the tuple intact for the decoder
        out_list.append((exponent, max_bit_pos, compressed_stream))

    decompressed_list = []

    # 2. Decompress
    for i, data in enumerate(out_list):
        exponent, max_bit_pos, compressed_stream = data
        decompressed_block = zfp_1d_block_decompress_fixed(exponent, max_bit_pos, compressed_stream)
        decompressed_list.extend(decompressed_block)  

            

    with open(args.output, "wb") as f:
        f.write(np.array(decompressed_list, dtype=np.float32).tobytes())

    # 3. Calculate R2 
    y_true = np.array(data_array)
    y_pred = np.array(decompressed_list)

    y_mean = np.mean(y_true)
    ss_res = np.sum((y_true - y_pred) ** 2)
    ss_tot = np.sum((y_true - y_mean) ** 2)
    # 1. Calculate Maximum Absolute Error
    max_error = np.max(np.abs(y_true - y_pred))
    # print(f"Max Absolute Error: {max_error:.4f}")

    # Fixed the missing minus sign
    r2 = 1 - (ss_res / ss_tot)

    # print(f"R2: {r2:.4f}")