import numpy as np
import math


data_array = np.fromfile('32_2048.bin', dtype=np.float32)#.astype(np.float64) 
decompressed_list = np.fromfile('output.bin', dtype=np.float32)#.astype(np.float64) 

data_array = data_array[0: 2048]

print(f"len og {len(data_array)}")
print(f"len decomp {len(decompressed_list)}")



# 3. Calculate R2 
y_true = np.array(data_array)
y_pred = np.array(decompressed_list)

y_mean = np.mean(y_true)
ss_res = np.sum((y_true - y_pred) ** 2)
ss_tot = np.sum((y_true - y_mean) ** 2)
# 1. Calculate Maximum Absolute Error
max_error = np.max(np.abs(y_true - y_pred))
print(f"Max Absolute Error: {max_error:.4f}")

# Fixed the missing minus sign
r2 = 1 - (ss_res / ss_tot)

print(f"R2: {r2:.4f}")