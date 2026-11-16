# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vzfp_types_pkg.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vzfp_types_pkg \
	Vzfp_types_pkg___024root__DepSet_hc662c2f6__0 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__0 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__1 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__2 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__3 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__4 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__5 \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vzfp_types_pkg__ConstPool_0 \
	Vzfp_types_pkg___024root__Slow \
	Vzfp_types_pkg___024root__DepSet_hc662c2f6__0__Slow \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__0__Slow \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__1__Slow \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__2__Slow \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__3__Slow \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__4__Slow \
	Vzfp_types_pkg___024root__DepSet_h73e9d533__5__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vzfp_types_pkg__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
