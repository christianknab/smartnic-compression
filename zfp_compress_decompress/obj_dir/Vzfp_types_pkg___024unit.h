// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vzfp_types_pkg.h for the primary calling header

#ifndef VERILATED_VZFP_TYPES_PKG___024UNIT_H_
#define VERILATED_VZFP_TYPES_PKG___024UNIT_H_  // guard

#include "verilated.h"


class Vzfp_types_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vzfp_types_pkg___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vzfp_types_pkg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vzfp_types_pkg___024unit(Vzfp_types_pkg__Syms* symsp, const char* v__name);
    ~Vzfp_types_pkg___024unit();
    VL_UNCOPYABLE(Vzfp_types_pkg___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
