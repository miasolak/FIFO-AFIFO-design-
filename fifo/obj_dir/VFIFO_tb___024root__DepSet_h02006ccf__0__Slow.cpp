// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb__Syms.h"
#include "VFIFO_tb___024root.h"

VL_ATTR_COLD void VFIFO_tb___024root___eval_initial__TOP(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial__TOP\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"FIFO.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__stl(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_tb___024root___eval_triggers__stl(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_triggers__stl\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFIFO_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
