// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VZFP_TYPES_PKG__SYMS_H_
#define VERILATED_VZFP_TYPES_PKG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vzfp_types_pkg.h"

// INCLUDE MODULE CLASSES
#include "Vzfp_types_pkg___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vzfp_types_pkg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vzfp_types_pkg* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vzfp_types_pkg___024root       TOP;

    // CONSTRUCTORS
    Vzfp_types_pkg__Syms(VerilatedContext* contextp, const char* namep, Vzfp_types_pkg* modelp);
    ~Vzfp_types_pkg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
