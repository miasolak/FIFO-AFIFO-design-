// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb___024root.h"

VL_ATTR_COLD void VFIFO_tb___024root___eval_static__TOP(VFIFO_tb___024root* vlSelf);
VL_ATTR_COLD void VFIFO_tb___024root____Vm_traceActivitySetAll(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD void VFIFO_tb___024root___eval_static(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_static\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VFIFO_tb___024root___eval_static__TOP(vlSelf);
    VFIFO_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VFIFO_tb___024root___eval_static__TOP(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_static__TOP\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FIFO_tb__DOT__clk = 0U;
    vlSelfRef.FIFO_tb__DOT__rst_n = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 0U;
    vlSelfRef.FIFO_tb__DOT__wr_data_i = 0U;
}

VL_ATTR_COLD void VFIFO_tb___024root___eval_final(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_final\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__stl(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFIFO_tb___024root___eval_phase__stl(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD void VFIFO_tb___024root___eval_settle(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_settle\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VFIFO_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/FIFO_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFIFO_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__stl(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___dump_triggers__stl\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_tb___024root___stl_sequent__TOP__0(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD void VFIFO_tb___024root___eval_stl(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_stl\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VFIFO_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VFIFO_tb___024root___stl_sequent__TOP__0(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___stl_sequent__TOP__0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FIFO_tb__DOT__wr_full_o = (((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                                                 >> 4U)) 
                                          != (1U & 
                                              ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                               >> 4U))) 
                                         & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                                            == (0xfU 
                                                & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))));
    vlSelfRef.FIFO_tb__DOT__rd_empty_o = ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                          == (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr));
}

VL_ATTR_COLD void VFIFO_tb___024root___eval_triggers__stl(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD bool VFIFO_tb___024root___eval_phase__stl(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_phase__stl\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFIFO_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VFIFO_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__act(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___dump_triggers__act\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge FIFO_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge FIFO_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge FIFO_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__nba(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___dump_triggers__nba\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge FIFO_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge FIFO_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge FIFO_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_tb___024root____Vm_traceActivitySetAll(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root____Vm_traceActivitySetAll\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VFIFO_tb___024root___ctor_var_reset(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___ctor_var_reset\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->FIFO_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__wr_inc = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__rd_inc = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->FIFO_tb__DOT__wr_full_o = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__rd_empty_o = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->FIFO_tb__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->FIFO_tb__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->FIFO_tb__DOT__u_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->FIFO_tb__DOT__u_fifo__DOT__wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->FIFO_tb__DOT__u_fifo__DOT__rd_ptr = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__FIFO_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__FIFO_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__FIFO_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
