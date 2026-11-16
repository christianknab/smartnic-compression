// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vzfp_types_pkg__pch.h"

//============================================================
// Constructors

Vzfp_types_pkg::Vzfp_types_pkg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vzfp_types_pkg__Syms(contextp(), _vcname__, this)}
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

Vzfp_types_pkg::Vzfp_types_pkg(const char* _vcname__)
    : Vzfp_types_pkg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vzfp_types_pkg::~Vzfp_types_pkg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vzfp_types_pkg___024root___eval_debug_assertions(Vzfp_types_pkg___024root* vlSelf);
#endif  // VL_DEBUG
void Vzfp_types_pkg___024root___eval_static(Vzfp_types_pkg___024root* vlSelf);
void Vzfp_types_pkg___024root___eval_initial(Vzfp_types_pkg___024root* vlSelf);
void Vzfp_types_pkg___024root___eval_settle(Vzfp_types_pkg___024root* vlSelf);
void Vzfp_types_pkg___024root___eval(Vzfp_types_pkg___024root* vlSelf);

void Vzfp_types_pkg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vzfp_types_pkg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vzfp_types_pkg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vzfp_types_pkg___024root___eval_static(&(vlSymsp->TOP));
        Vzfp_types_pkg___024root___eval_initial(&(vlSymsp->TOP));
        Vzfp_types_pkg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vzfp_types_pkg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vzfp_types_pkg::eventsPending() { return false; }

uint64_t Vzfp_types_pkg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vzfp_types_pkg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vzfp_types_pkg___024root___eval_final(Vzfp_types_pkg___024root* vlSelf);

VL_ATTR_COLD void Vzfp_types_pkg::final() {
    Vzfp_types_pkg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vzfp_types_pkg::hierName() const { return vlSymsp->name(); }
const char* Vzfp_types_pkg::modelName() const { return "Vzfp_types_pkg"; }
unsigned Vzfp_types_pkg::threads() const { return 1; }
void Vzfp_types_pkg::prepareClone() const { contextp()->prepareClone(); }
void Vzfp_types_pkg::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vzfp_types_pkg::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vzfp_types_pkg::trace()' called on model that was Verilated without --trace option");
}
