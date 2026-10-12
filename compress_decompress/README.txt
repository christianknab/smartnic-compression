Verilate:
verilator --cc --trace-fst --no-timing --top-module h264_codec_tb   -Wno-lint -Wno-style -Wno-IMPLICIT -Wno-STMTDLY -Wno-UNOPTFLAT -Wno-COMBDLY   h264_codec_tb.sv   +incdir+xk264/rtl   -f xk264_files.f   verilog/*.v   --exe tb_main.cpp --build



Run Verilated Code:
./obj_dir/Vh264_codec_tb


file gen

find xk264/rtl xk264/lib/behave/mem -name "*.v" > xk264_files.f

use ffmeg and ffplay to create and view .yuv files