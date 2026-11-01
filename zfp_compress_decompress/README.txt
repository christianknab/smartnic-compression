Verilator Build Command:

verilator --cc --exe --build -j 0 -Wall -Wno-UNUSED --trace --trace-max-array 128 --trace-max-width 256 zfp_top.sv zfp_comp.sv zfp_decomp.sv tb_zfp.cpp


Sim invoke command:
./obj_dir/Vzfp_top
