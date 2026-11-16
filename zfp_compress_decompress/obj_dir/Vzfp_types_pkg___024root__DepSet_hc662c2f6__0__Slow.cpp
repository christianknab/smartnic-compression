// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzfp_types_pkg.h for the primary calling header

#include "Vzfp_types_pkg__pch.h"
#include "Vzfp_types_pkg__Syms.h"
#include "Vzfp_types_pkg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzfp_types_pkg___024root___dump_triggers__stl(Vzfp_types_pkg___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vzfp_types_pkg___024root___eval_triggers__stl(Vzfp_types_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzfp_types_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzfp_types_pkg___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzfp_types_pkg___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
