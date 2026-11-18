Verilator Build Command:

verilator --cc --exe --build -j 0 -Wall -Wno-UNUSED --trace --trace-max-array 128 --trace-max-width 256 zfp_top.sv zfp_comp.sv zfp_decomp.sv tb_zfp.cpp


Sim invoke command:
./obj_dir/Vzfp_top



 verilator -Wall -Wno-UNUSED --cc zfp_types_pkg.sv tb_zfp_top.sv zfp_comp_axi.sv zfp_decomp_axi.sv --exe tb_zfp_axi.cpp --build --top-module tb_zfp_top --trace