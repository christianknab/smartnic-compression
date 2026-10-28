import numpy as np
import math
import time

data_array = np.fromfile('32_2048.bin', dtype=np.int32) 
fixed_scale = 2**16
error_bound = int(0.01 * fixed_scale) 
bin_size = 2 * error_bound                         
batch_size = 8
MAX_BIN = 15

drift_history = [0, 0, 0] 
out_list = []
num_batches = math.ceil(len(data_array) / batch_size)



def linear_pred(a, b):
    return 2*a - b

def quad_pred(a, b, c):
    return 4*a - 4 * b + c


start_time = time.perf_counter()
for i in range(num_batches):
    cur_batch = i * batch_size
    batch = data_array[cur_batch : cur_batch + batch_size]
    
    # ====================================================================
    # PHASE 1: FULLY PARALLEL PREDICTION & SELECTION
    # In HLS, this loop is fully unrolled. All 8 elements calculate their 
    # prev, linear, and quad predictions simultaneously using original data.
    # ====================================================================
    orig_preds = []
    selected_fits = []
    
    for j, data in enumerate(batch):
        global_idx = cur_batch + j
        data = int(data)
        
        if global_idx >= 3:
            i_m1 = int(data_array[global_idx - 1])
            i_m2 = int(data_array[global_idx - 2])
            i_m3 = int(data_array[global_idx - 3])
        else:
            i_m1 = i_m2 = i_m3 = 0 
            
        # Calculate all 3 Lorenzo predictors
        prev = i_m1
        linear = linear_pred(i_m1, i_m2)
        quad = quad_pred(i_m1, i_m2, i_m3) #+ i_m3
        
        # Evaluate which predictor is best based on ORIGINAL data
        preds = [prev, linear, quad]
        best_idx = -1
        best_err = float('inf')
        best_pred = 0
        
        for idx, p in enumerate(preds):
            err = abs(data - p)
            if err < best_err:
                best_err = err
                best_idx = idx
                best_pred = p
                
        orig_preds.append(best_pred)
        selected_fits.append(best_idx)

    # ====================================================================
    # PHASE 2: PARALLEL PREFIX-SUM (DUAL QUANTIZATION)
    # In HLS, applying `#pragma HLS unroll` here forces the synthesizer to 
    # build a combinational logic tree. Because batch_size is only 8, the 
    # FPGA resolves the entire drift propagation in a single clock cycle.
    # ====================================================================
    for j, data in enumerate(batch):
        data = int(data) 
        global_idx = cur_batch + j
        fit_type = selected_fits[j]
        
        if global_idx < 3:
            out_list.extend([3, data])
            drift_history.append(0) 
            continue
            
        # Propagate drift based on the specific predictor selected in Phase 1
        if fit_type == 0:
            drift_pred = drift_history[-1]
        elif fit_type == 1:
            drift_pred = linear_pred(drift_history[-1], drift_history[-2])
        else:
            drift_pred = quad_pred(drift_history[-1], drift_history[-2], drift_history[-3])
            
        true_pred = orig_preds[j] +drift_pred
        
        diff = data - true_pred
        quant_bin = round(diff / bin_size)
        recon_val = true_pred + (quant_bin * bin_size)
        
        quant_error = abs(data - recon_val)
        
        if quant_error <= error_bound and abs(quant_bin) <= MAX_BIN:
            out_list.extend([fit_type, quant_bin])
            drift_history.append(recon_val - data)
        else:
            out_list.extend([3, data])       
            drift_history.append(0)

end_time = time.perf_counter()
# Decompression and Size Calculation remain identical...
# ... [Your exact size calculation while-loop remains the same] ...

size = 0
num_errors = 0
i = 0
while i < len(out_list):
    if out_list[i] in [0, 1, 2]:
        # NOTE: Real SZ also adds the bit-length of the Huffman-encoded quant_bin here. 
        # Adding only 2 assumes the quant_bin compresses to 0 bits, which is impossible.
        size += 2 
        i += 2 # Advance by 2 (state code + quant_bin)
    elif out_list[i] == 3:
        size += 34
        num_errors += 1
        i += 2 # Advance by 2 (state code + raw float)
    else:
        # Fallback to prevent infinite loops if data gets corrupted
        i += 1
        
        
size = size / 8
input_size = (32 * len(data_array))/8
print(f"input size: {input_size} Bytes")
print(f"compressed size: {size} Bytes")
print(f"compression ratio {input_size/size}")
print(f"num full data: {num_errors}")
print(f"Compression time : {end_time - start_time}")


decompressed = []
i = 0

while i < len(out_list):
    code = out_list[i]
    
    match code:
        case 0:
            quant_bin = out_list[i + 1]
            pred = decompressed[-1]
            recon_val = pred + (quant_bin * bin_size)
            decompressed.append(recon_val)
            i += 2 
            
        case 1:
            quant_bin = out_list[i + 1]
            pred = linear_pred(decompressed[-1], decompressed[-2])
            recon_val = pred + (quant_bin * bin_size)
            decompressed.append(recon_val)
            i += 2 
            
        case 2:
            quant_bin = out_list[i + 1]
            pred = quad_pred(decompressed[-1], decompressed[-2], decompressed[-3])
            recon_val = pred + (quant_bin * bin_size)
            decompressed.append(recon_val)
            i += 2 
            
        case 3:
            raw_val = out_list[i + 1]
            decompressed.append(raw_val)
            i += 2 
            
        case _:
            # Failsafe to prevent infinite loops if the bitstream ever gets corrupted
            print(f"FATAL: Corrupt state code {code} at index {i}")
            break
            
def calculate_r2(original, decompressed):
    # Scale back to floats to calculate accurate variance
    y_true = np.array(original, dtype=np.float64) / fixed_scale
    y_pred = np.array(decompressed, dtype=np.float64) / fixed_scale
    
    y_mean = np.mean(y_true)
    ss_res = np.sum((y_true - y_pred) ** 2)
    ss_tot = np.sum((y_true - y_mean) ** 2)
    
    if ss_tot == 0:
        return 1.0 if ss_res == 0 else 0.0
    return 1 - (ss_res / ss_tot)

r2 = calculate_r2(data_array, decompressed)
print(f"r2 compressed vs og: {r2}")