// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzfp_types_pkg.h for the primary calling header

#include "Vzfp_types_pkg__pch.h"
#include "Vzfp_types_pkg___024root.h"

VL_INLINE_OPT void Vzfp_types_pkg___024root___nba_sequent__TOP__4(Vzfp_types_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzfp_types_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzfp_types_pkg___024root___nba_sequent__TOP__4\n"); );
    // Body
    if ((0xdU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xcU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xbU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xaU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((9U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((8U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((7U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((6U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((5U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((4U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((3U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((2U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((1U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                      [0U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                       [0U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                    [0U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                      [1U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                       [1U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                    [1U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                      [2U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                       [2U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                    [2U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c
                      [3U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                       [3U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__coeffs_c
                    [3U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out3 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__2__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx = 0x1fU;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val 
        = (0x7fU & ((IData)(8U) << (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__width_mode)));
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 0U;
    if ((0x1fU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1eU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1dU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1cU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1bU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1aU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x19U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x18U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x17U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x16U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x400000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffbfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x400000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x16U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x400000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffbfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x400000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x16U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x400000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffbfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x400000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x16U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x400000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffbfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x400000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x16U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x15U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x200000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffdfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x200000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x15U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x200000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffdfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x200000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x15U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x200000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffdfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x200000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x15U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x200000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffdfffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x200000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x15U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x14U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x100000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffefffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x100000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x14U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x100000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffefffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x100000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x14U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x100000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffefffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x100000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x14U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x100000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffefffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x100000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x14U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x13U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x80000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfff7ffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x80000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x13U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x80000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfff7ffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x80000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x13U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x80000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfff7ffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x80000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x13U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x80000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfff7ffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x80000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x13U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x12U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x40000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffbffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x40000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x12U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x40000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffbffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x40000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x12U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x40000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffbffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x40000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x12U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x40000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffbffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x40000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x12U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x11U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x20000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffdffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x20000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x11U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x20000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffdffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x20000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x11U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x20000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffdffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x20000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x11U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x20000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffdffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x20000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x11U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x10U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x10000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffeffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x10000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x10U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x10000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffeffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x10000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x10U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x10000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffeffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x10000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x10U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x10000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffeffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x10000U & ((IData)(
                                                     (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                             << 0x10U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xfU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x8000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffff7fffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x8000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xfU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x8000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffff7fffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x8000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xfU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x8000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffff7fffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x8000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xfU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x8000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffff7fffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x8000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xfU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xeU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x4000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffbfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x4000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xeU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x4000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffbfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x4000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xeU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x4000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffbfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x4000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xeU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x4000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffbfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x4000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xeU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xdU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x2000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffdfffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x2000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xdU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xcU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x1000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffefffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x1000U & ((IData)(
                                                    (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                            << 0xcU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xbU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x800U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffff7ffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x800U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xbU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0xaU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                   >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x400U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffbffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x400U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 0xaU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((9U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x200U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffdffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x200U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 9U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((8U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x100U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffeffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x100U & ((IData)(
                                                   (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                           << 8U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((7U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x80U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffff7fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x80U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 7U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((6U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x40U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffffbfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x40U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 6U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((5U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x20U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffffdfU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x20U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 5U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((4U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x10U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xffffffefU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x10U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                          << 4U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((3U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (8U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffff7U & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (8U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 3U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((2U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (4U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffffbU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (4U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 2U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((1U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                 >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (2U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfffffffdU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (2U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                       << 1U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                      [0U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                       [0U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                    [0U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                      [1U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                       [1U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                    [1U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                      [2U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                       [2U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                    [2U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c
                      [3U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                       [3U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__coeffs_c
                    [3U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out2 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__1__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx = 0x1fU;
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val 
        = (0x7fU & ((IData)(8U) << (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__width_mode)));
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 0U;
    if ((0x1fU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x80000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                          >> (0x1fU 
                                              & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                 << 0x1fU));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1eU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x40000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xbfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x40000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1eU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1dU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x20000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xdfffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x20000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1dU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1cU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x10000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xefffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x10000000U & ((IData)(
                                                        (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                                << 0x1cU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1bU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x8000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xf7ffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x8000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1bU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x1aU <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x4000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfbffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x4000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x1aU)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x19U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x2000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfdffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x2000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x19U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x18U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x1000000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xfeffffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x1000000U & ((IData)(
                                                       (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                               << 0x18U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
    if ((0x17U <= (0x1fU & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                    >> 0x20U))))) {
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [0U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[0U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [0U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[0U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[0U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [0U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [1U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[1U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [1U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[1U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[1U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [1U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [2U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[2U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [2U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[2U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[2U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [2U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
        vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
            = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx);
        if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used 
              < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val)) 
             & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit)))) {
            if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                       & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c
                          [3U])))) {
                if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bits_used) 
                     <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                        = (0x800000U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                           [3U]);
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                        = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                         >> (0x1fU 
                                             & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                                                - (IData)(1U))))));
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                           - (IData)(2U));
                } else {
                    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
                }
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = ((0xff7fffffU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__coeffs_c
                        [3U]) | (0x800000U & ((IData)(
                                                      (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT____Vcellout__gear_unpack__out1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx))) 
                                              << 0x17U)));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__0__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(1U));
            }
        }
    }
}
