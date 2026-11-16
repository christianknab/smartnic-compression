// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_zfp_top__pch.h"

//============================================================
// Constructors

Vtb_zfp_top::Vtb_zfp_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_zfp_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , s_tx_tvalid{vlSymsp->TOP.s_tx_tvalid}
    , s_tx_tready{vlSymsp->TOP.s_tx_tready}
    , s_tx_tlast{vlSymsp->TOP.s_tx_tlast}
    , s_tx_tuser{vlSymsp->TOP.s_tx_tuser}
    , m_rx_tvalid{vlSymsp->TOP.m_rx_tvalid}
    , m_rx_tready{vlSymsp->TOP.m_rx_tready}
    , m_rx_tlast{vlSymsp->TOP.m_rx_tlast}
    , m_rx_tuser{vlSymsp->TOP.m_rx_tuser}
    , s_tx_tdata{vlSymsp->TOP.s_tx_tdata}
    , m_rx_tdata{vlSymsp->TOP.m_rx_tdata}
    , s_tx_tkeep{vlSymsp->TOP.s_tx_tkeep}
    , m_rx_tkeep{vlSymsp->TOP.m_rx_tkeep}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_zfp_top::Vtb_zfp_top(const char* _vcname__)
    : Vtb_zfp_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_zfp_top::~Vtb_zfp_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_zfp_top___024root___eval_debug_assertions(Vtb_zfp_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_zfp_top___024root___eval_static(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___eval_initial(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___eval_settle(Vtb_zfp_top___024root* vlSelf);
void Vtb_zfp_top___024root___eval(Vtb_zfp_top___024root* vlSelf);

void Vtb_zfp_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_zfp_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_zfp_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_zfp_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_zfp_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_zfp_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_zfp_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_zfp_top::eventsPending() { return false; }

uint64_t Vtb_zfp_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_zfp_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_zfp_top___024root___eval_final(Vtb_zfp_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_zfp_top::final() {
    Vtb_zfp_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_zfp_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_zfp_top::modelName() const { return "Vtb_zfp_top"; }
unsigned Vtb_zfp_top::threads() const { return 1; }
void Vtb_zfp_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_zfp_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_zfp_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_zfp_top::trace()' called on model that was Verilated without --trace option");
}
