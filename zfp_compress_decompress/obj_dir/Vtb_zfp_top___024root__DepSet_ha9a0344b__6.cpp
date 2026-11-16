// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_zfp_top.h for the primary calling header

#include "Vtb_zfp_top__pch.h"
#include "Vtb_zfp_top___024root.h"

VL_INLINE_OPT void Vtb_zfp_top___024root___nba_sequent__TOP__6(Vtb_zfp_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_zfp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_zfp_top___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*3:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit = 0;
    CData/*3:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit = 0;
    CData/*3:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit = 0;
    CData/*3:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit = 0;
    CData/*0:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l2_comp;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l2_comp = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__max_val;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__max_val = 0;
    CData/*0:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l2_comp;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l2_comp = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__max_val;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__max_val = 0;
    CData/*0:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l2_comp;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l2_comp = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__max_val;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__max_val = 0;
    CData/*0:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l2_comp;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l2_comp = 0;
    IData/*31:0*/ tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__max_val;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__max_val = 0;
    CData/*1:0*/ tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__unnamedblk1__DOT__current_width;
    tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__unnamedblk1__DOT__current_width = 0;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    VlWide<32>/*1023:0*/ __Vtemp_4;
    // Body
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bits_used 
        = ((IData)(0x1fU) - vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx);
    if (((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bits_used 
          < (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__max_bits_val)) 
         & (~ (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__budget_hit)))) {
        if ((1U & ((IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT____Vcellout__decomp_gear_box__out4 
                            >> (0x1fU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx))) 
                   & (~ vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__found_c
                      [3U])))) {
            if ((((IData)(2U) + vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bits_used) 
                 <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__max_bits_val))) {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__found_c[3U] = 1U;
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                    = (1U | vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__coeffs_c
                       [3U]);
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__signs_c[3U] 
                    = (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT____Vcellout__decomp_gear_box__out4 
                                     >> (0x1fU & (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx 
                                                  - (IData)(1U))))));
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx 
                    = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx 
                       - (IData)(2U));
            } else {
                vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__budget_hit = 1U;
            }
        } else {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__coeffs_c[3U] 
                = ((0xfffffffeU & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__coeffs_c
                    [3U]) | (1U & (IData)((vlSelf->tb_zfp_top__DOT__decomp_inst__DOT____Vcellout__decomp_gear_box__out4 
                                           >> (0x1fU 
                                               & vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx)))));
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx 
                = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_mode_gen__BRA__3__KET____DOT__decomp_mod__DOT__bit_idx 
                   - (IData)(1U));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__axi_input_valid 
        = ((IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__gear_ready) 
           & (IData)(vlSelf->tb_zfp_top__DOT__int_tvalid));
    __Vtemp_3[0U] = vlSelf->tb_zfp_top__DOT__int_tdata[0U];
    __Vtemp_3[1U] = vlSelf->tb_zfp_top__DOT__int_tdata[1U];
    __Vtemp_3[2U] = vlSelf->tb_zfp_top__DOT__int_tdata[2U];
    __Vtemp_3[3U] = vlSelf->tb_zfp_top__DOT__int_tdata[3U];
    __Vtemp_3[4U] = vlSelf->tb_zfp_top__DOT__int_tdata[4U];
    __Vtemp_3[5U] = vlSelf->tb_zfp_top__DOT__int_tdata[5U];
    __Vtemp_3[6U] = vlSelf->tb_zfp_top__DOT__int_tdata[6U];
    __Vtemp_3[7U] = vlSelf->tb_zfp_top__DOT__int_tdata[7U];
    __Vtemp_3[8U] = vlSelf->tb_zfp_top__DOT__int_tdata[8U];
    __Vtemp_3[9U] = vlSelf->tb_zfp_top__DOT__int_tdata[9U];
    __Vtemp_3[0xaU] = vlSelf->tb_zfp_top__DOT__int_tdata[0xaU];
    __Vtemp_3[0xbU] = vlSelf->tb_zfp_top__DOT__int_tdata[0xbU];
    __Vtemp_3[0xcU] = vlSelf->tb_zfp_top__DOT__int_tdata[0xcU];
    __Vtemp_3[0xdU] = vlSelf->tb_zfp_top__DOT__int_tdata[0xdU];
    __Vtemp_3[0xeU] = vlSelf->tb_zfp_top__DOT__int_tdata[0xeU];
    __Vtemp_3[0xfU] = vlSelf->tb_zfp_top__DOT__int_tdata[0xfU];
    __Vtemp_3[0x10U] = 0U;
    __Vtemp_3[0x11U] = 0U;
    __Vtemp_3[0x12U] = 0U;
    __Vtemp_3[0x13U] = 0U;
    __Vtemp_3[0x14U] = 0U;
    __Vtemp_3[0x15U] = 0U;
    __Vtemp_3[0x16U] = 0U;
    __Vtemp_3[0x17U] = 0U;
    __Vtemp_3[0x18U] = 0U;
    __Vtemp_3[0x19U] = 0U;
    __Vtemp_3[0x1aU] = 0U;
    __Vtemp_3[0x1bU] = 0U;
    __Vtemp_3[0x1cU] = 0U;
    __Vtemp_3[0x1dU] = 0U;
    __Vtemp_3[0x1eU] = 0U;
    __Vtemp_3[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_4, __Vtemp_3, (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__accum_bits));
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0U] 
           | __Vtemp_4[0U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[1U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[1U] 
           | __Vtemp_4[1U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[2U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[2U] 
           | __Vtemp_4[2U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[3U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[3U] 
           | __Vtemp_4[3U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[4U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[4U] 
           | __Vtemp_4[4U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[5U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[5U] 
           | __Vtemp_4[5U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[6U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[6U] 
           | __Vtemp_4[6U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[7U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[7U] 
           | __Vtemp_4[7U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[8U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[8U] 
           | __Vtemp_4[8U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[9U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[9U] 
           | __Vtemp_4[9U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0xaU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0xaU] 
           | __Vtemp_4[0xaU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0xbU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0xbU] 
           | __Vtemp_4[0xbU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0xcU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0xcU] 
           | __Vtemp_4[0xcU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0xdU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0xdU] 
           | __Vtemp_4[0xdU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0xeU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0xeU] 
           | __Vtemp_4[0xeU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0xfU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0xfU] 
           | __Vtemp_4[0xfU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x10U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x10U] 
           | __Vtemp_4[0x10U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x11U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x11U] 
           | __Vtemp_4[0x11U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x12U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x12U] 
           | __Vtemp_4[0x12U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x13U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x13U] 
           | __Vtemp_4[0x13U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x14U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x14U] 
           | __Vtemp_4[0x14U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x15U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x15U] 
           | __Vtemp_4[0x15U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x16U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x16U] 
           | __Vtemp_4[0x16U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x17U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x17U] 
           | __Vtemp_4[0x17U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x18U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x18U] 
           | __Vtemp_4[0x18U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x19U] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x19U] 
           | __Vtemp_4[0x19U]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x1aU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x1aU] 
           | __Vtemp_4[0x1aU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x1bU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x1bU] 
           | __Vtemp_4[0x1bU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x1cU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x1cU] 
           | __Vtemp_4[0x1cU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x1dU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x1dU] 
           | __Vtemp_4[0x1dU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x1eU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x1eU] 
           | __Vtemp_4[0x1eU]);
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__temp_buffer[0x1fU] 
        = (vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__data_buffer[0x1fU] 
           | __Vtemp_4[0x1fU]);
    tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__unnamedblk1__DOT__current_width 
        = (3U & ((0U == (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__state))
                  ? ((vlSelf->tb_zfp_top__DOT__int_tdata[3U] 
                      << 0x1cU) | (vlSelf->tb_zfp_top__DOT__int_tdata[3U] 
                                   >> 4U)) : (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__width_mode)));
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__out4_comb 
        = (0x1fffffffffffULL & ((0U == (IData)(tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__unnamedblk1__DOT__current_width))
                                 ? (QData)((IData)(
                                                   (0x1fffffU 
                                                    & vlSelf->tb_zfp_top__DOT__int_tdata[0xcU])))
                                 : ((1U == (IData)(tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__unnamedblk1__DOT__current_width))
                                     ? (QData)((IData)(
                                                       (0x1fffffffU 
                                                        & vlSelf->tb_zfp_top__DOT__int_tdata[0xcU])))
                                     : ((2U == (IData)(tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__unnamedblk1__DOT__current_width))
                                         ? (((QData)((IData)(
                                                             vlSelf->tb_zfp_top__DOT__int_tdata[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->tb_zfp_top__DOT__int_tdata[0xcU])))
                                         : 0ULL))));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__can_send 
        = (((8U >= (0xfU & (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__o_front_ptr))) 
            && (1U & ((IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__output_buffer_valid) 
                      >> (0xfU & (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__o_front_ptr))))) 
           & ((8U >= (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__o_front_ptr)))) 
              && (1U & ((IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__output_buffer_valid) 
                        >> (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__o_front_ptr)))))));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__buff_full 
        = (((IData)(1U) + (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__o_tail_ptr)))) 
           >= (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__o_front_ptr));
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid = 0U;
    if ((0U == (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__width_mode_buffer))) {
        if ((0x15U <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (1U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x2aU <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (2U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x3fU <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (4U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x54U <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (8U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
    } else if ((1U == (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__width_mode_buffer))) {
        if ((0x1dU <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (1U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x3aU <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (2U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x57U <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (4U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x74U <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (8U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
    } else if ((2U == (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__width_mode_buffer))) {
        if ((0x2dU <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (1U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x5aU <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (2U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0x87U <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (4U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
        if ((0xb4U <= (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__decomp_gear_box__DOT__valid_bits))) {
            vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid 
                = (8U | (IData)(vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__unpacked_valid));
        }
    }
    vlSelf->tb_zfp_top__DOT__decomp_inst__DOT__en = 
        (1U & ((~ (IData)(vlSelf->m_rx_tvalid)) | (IData)(vlSelf->m_rx_tready)));
    vlSelf->s_tx_tready = (1U & (~ (IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__buff_full)));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__axi_input_valid 
        = ((IData)(vlSelf->s_tx_tready) & (IData)(vlSelf->s_tx_tvalid));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit = 0x180U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[0U] = 0U;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid = 0U;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid 
        = ((0xeU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid)) 
           | (0xfU == (0xfU & (IData)((vlSelf->s_tx_tkeep 
                                       >> 0x30U)))));
    if ((1U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid))) {
        vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[0U] 
            = (((0U == (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))
                 ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit)) 
                                             >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit)))) 
               | (vlSelf->s_tx_tdata[(0xfU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit 
                                              >> 5U))] 
                  >> (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit)));
    }
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid 
        = ((0xdU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid)) 
           | ((IData)((0xfU == (0xfU & (IData)((vlSelf->s_tx_tkeep 
                                                >> 0x34U))))) 
              << 1U));
    if ((2U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid))) {
        vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x20U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit)))
                 ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x20U) 
                                                    + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                             >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x20U) 
                                                  + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))))) 
               | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x20U) 
                                               + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit) 
                                              >> 5U))] 
                  >> (0x1fU & ((IData)(0x20U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))));
    }
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid 
        = ((0xbU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid)) 
           | ((IData)((0xfU == (0xfU & (IData)((vlSelf->s_tx_tkeep 
                                                >> 0x38U))))) 
              << 2U));
    if ((4U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid))) {
        vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x40U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit)))
                 ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x40U) 
                                                    + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                             >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x40U) 
                                                  + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))))) 
               | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x40U) 
                                               + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit) 
                                              >> 5U))] 
                  >> (0x1fU & ((IData)(0x40U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))));
    }
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid 
        = ((7U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid)) 
           | ((IData)((0xfU == (0xfU & (IData)((vlSelf->s_tx_tkeep 
                                                >> 0x3cU))))) 
              << 3U));
    if ((8U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid))) {
        vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in[3U] 
            = (((0U == (0x1fU & ((IData)(0x60U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit)))
                 ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x60U) 
                                                    + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                             >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x60U) 
                                                  + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))))) 
               | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x60U) 
                                               + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit) 
                                              >> 5U))] 
                  >> (0x1fU & ((IData)(0x60U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__unnamedblk1__DOT__base_bit))));
    }
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__in_valid 
        = ((IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__axi_input_valid) 
           & (0U != (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__word_valid)));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[0U] = 0U;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid = 0U;
    if (vlSelf->tb_zfp_top__DOT__comp_inst__DOT__is_first_beat) {
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid = 0U;
    } else {
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid 
            = ((0xeU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid)) 
               | (0xfU == (0xfU & (IData)(vlSelf->s_tx_tkeep))));
        if ((1U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[0U] 
                = (((0U == (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit)) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit)))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit 
                                                  >> 5U))] 
                      >> (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit)));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid 
            = ((0xdU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 4U))))) 
                  << 1U));
        if ((2U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[1U] 
                = (((0U == (0x1fU & ((IData)(0x20U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x20U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x20U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid 
            = ((0xbU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 8U))))) 
                  << 2U));
        if ((4U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[2U] 
                = (((0U == (0x1fU & ((IData)(0x40U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x40U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x40U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x40U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid 
            = ((7U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0xcU))))) 
                  << 3U));
        if ((8U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in[3U] 
                = (((0U == (0x1fU & ((IData)(0x60U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x60U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x60U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x60U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
    }
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__in_valid 
        = ((IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__axi_input_valid) 
           & (0U != (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__word_valid)));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit = 0x80U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[0U] = 0U;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid = 0U;
    if (vlSelf->tb_zfp_top__DOT__comp_inst__DOT__is_first_beat) {
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid = 0U;
    } else {
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid 
            = ((0xeU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid)) 
               | (0xfU == (0xfU & (IData)((vlSelf->s_tx_tkeep 
                                           >> 0x10U)))));
        if ((1U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[0U] 
                = (((0U == (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit)) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit)))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit 
                                                  >> 5U))] 
                      >> (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit)));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid 
            = ((0xdU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0x14U))))) 
                  << 1U));
        if ((2U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[1U] 
                = (((0U == (0x1fU & ((IData)(0x20U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x20U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x20U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid 
            = ((0xbU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0x18U))))) 
                  << 2U));
        if ((4U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[2U] 
                = (((0U == (0x1fU & ((IData)(0x40U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x40U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x40U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x40U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid 
            = ((7U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0x1cU))))) 
                  << 3U));
        if ((8U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in[3U] 
                = (((0U == (0x1fU & ((IData)(0x60U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x60U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x60U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x60U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
    }
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__in_valid 
        = ((IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__axi_input_valid) 
           & (0U != (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__word_valid)));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit = 0x100U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[3U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[2U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[1U] = 0U;
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[0U] = 0U;
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid = 0U;
    if (vlSelf->tb_zfp_top__DOT__comp_inst__DOT__is_first_beat) {
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid = 0U;
    } else {
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid 
            = ((0xeU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid)) 
               | (0xfU == (0xfU & (IData)((vlSelf->s_tx_tkeep 
                                           >> 0x20U)))));
        if ((1U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[0U] 
                = (((0U == (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit)) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit)))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit 
                                                  >> 5U))] 
                      >> (0x1fU & tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit)));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid 
            = ((0xdU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0x24U))))) 
                  << 1U));
        if ((2U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[1U] 
                = (((0U == (0x1fU & ((IData)(0x20U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x20U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x20U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid 
            = ((0xbU & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0x28U))))) 
                  << 2U));
        if ((4U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[2U] 
                = (((0U == (0x1fU & ((IData)(0x40U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x40U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x40U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x40U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
        tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid 
            = ((7U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid)) 
               | ((IData)((0xfU == (0xfU & (IData)(
                                                   (vlSelf->s_tx_tkeep 
                                                    >> 0x2cU))))) 
                  << 3U));
        if ((8U & (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid))) {
            vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in[3U] 
                = (((0U == (0x1fU & ((IData)(0x60U) 
                                     + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit)))
                     ? 0U : (vlSelf->s_tx_tdata[(((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x60U) 
                                                      + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))))) 
                   | (vlSelf->s_tx_tdata[(0xfU & (((IData)(0x60U) 
                                                   + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit) 
                                                  >> 5U))] 
                      >> (0x1fU & ((IData)(0x60U) + tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__unnamedblk1__DOT__base_bit))));
        }
    }
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__in_valid 
        = ((IData)(vlSelf->tb_zfp_top__DOT__comp_inst__DOT__axi_input_valid) 
           & (0U != (IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__word_valid)));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l1_comp[0U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
            [0U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
                     [1U]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l1_comp[1U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
            [2U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
                     [3U]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l2_comp 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
            [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l1_comp
            [0U]]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
                      [(2U | vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l1_comp
                        [1U])]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__max_val 
        = ((IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l2_comp)
            ? (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
               [(3U & ((IData)(2U) + vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l1_comp
                       [1U]))]) : (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__d_in
                                   [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__l1_comp
                                   [0U]]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__emax_s1 
        = (0xffU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__3__KET____DOT__comp_mod__DOT__max_val 
                    >> 0x17U));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l1_comp[0U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
            [0U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
                     [1U]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l1_comp[1U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
            [2U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
                     [3U]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l2_comp 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
            [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l1_comp
            [0U]]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
                      [(2U | vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l1_comp
                        [1U])]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__max_val 
        = ((IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l2_comp)
            ? (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
               [(3U & ((IData)(2U) + vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l1_comp
                       [1U]))]) : (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__d_in
                                   [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__l1_comp
                                   [0U]]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__emax_s1 
        = (0xffU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__0__KET____DOT__comp_mod__DOT__max_val 
                    >> 0x17U));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l1_comp[0U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
            [0U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
                     [1U]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l1_comp[1U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
            [2U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
                     [3U]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l2_comp 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
            [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l1_comp
            [0U]]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
                      [(2U | vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l1_comp
                        [1U])]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__max_val 
        = ((IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l2_comp)
            ? (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
               [(3U & ((IData)(2U) + vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l1_comp
                       [1U]))]) : (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__d_in
                                   [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__l1_comp
                                   [0U]]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__emax_s1 
        = (0xffU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__1__KET____DOT__comp_mod__DOT__max_val 
                    >> 0x17U));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l1_comp[0U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
            [0U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
                     [1U]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l1_comp[1U] 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
            [2U]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
                     [3U]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l2_comp 
        = ((0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
            [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l1_comp
            [0U]]) < (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
                      [(2U | vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l1_comp
                        [1U])]));
    tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__max_val 
        = ((IData)(tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l2_comp)
            ? (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
               [(3U & ((IData)(2U) + vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l1_comp
                       [1U]))]) : (0x7fffffffU & vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__d_in
                                   [vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__l1_comp
                                   [0U]]));
    vlSelf->tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__emax_s1 
        = (0xffU & (tb_zfp_top__DOT__comp_inst__DOT__comp_mod_gen__BRA__2__KET____DOT__comp_mod__DOT__max_val 
                    >> 0x17U));
}

void Vtb_zfp_top___024root___nba_sequent__TOP__0(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___nba_sequent__TOP__1(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___nba_sequent__TOP__2(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___nba_sequent__TOP__3(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___nba_sequent__TOP__4(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___nba_sequent__TOP__5(Vtb_zfp_top___024root* vlSelf);

void Vtb_zfp_top___024root___eval_nba(Vtb_zfp_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_zfp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_zfp_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_zfp_top___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_zfp_top___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_zfp_top___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_zfp_top___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_zfp_top___024root___nba_sequent__TOP__4(vlSelf);
        Vtb_zfp_top___024root___nba_sequent__TOP__5(vlSelf);
        Vtb_zfp_top___024root___nba_sequent__TOP__6(vlSelf);
    }
}

void Vtb_zfp_top___024root___eval_triggers__act(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___eval_act(Vtb_zfp_top___024root* vlSelf);

bool Vtb_zfp_top___024root___eval_phase__act(Vtb_zfp_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_zfp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_zfp_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_zfp_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_zfp_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_zfp_top___024root___eval_phase__nba(Vtb_zfp_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_zfp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_zfp_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_zfp_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_zfp_top___024root___dump_triggers__ico(Vtb_zfp_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb_zfp_top___024root___eval_phase__ico(Vtb_zfp_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_zfp_top___024root___dump_triggers__nba(Vtb_zfp_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_zfp_top___024root___dump_triggers__act(Vtb_zfp_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_zfp_top___024root___eval(Vtb_zfp_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_zfp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_zfp_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_zfp_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_zfp_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_zfp_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_zfp_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_zfp_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_zfp_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_zfp_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_zfp_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_zfp_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_zfp_top___024root___eval_debug_assertions(Vtb_zfp_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_zfp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_zfp_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->s_tx_tvalid & 0xfeU))) {
        Verilated::overWidthError("s_tx_tvalid");}
    if (VL_UNLIKELY((vlSelf->s_tx_tlast & 0xfeU))) {
        Verilated::overWidthError("s_tx_tlast");}
    if (VL_UNLIKELY((vlSelf->m_rx_tready & 0xfeU))) {
        Verilated::overWidthError("m_rx_tready");}
}
#endif  // VL_DEBUG
