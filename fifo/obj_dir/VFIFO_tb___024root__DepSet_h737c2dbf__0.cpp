// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb___024root.h"

VL_ATTR_COLD void VFIFO_tb___024root___eval_initial__TOP(VFIFO_tb___024root* vlSelf);
VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__0(VFIFO_tb___024root* vlSelf);
VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__1(VFIFO_tb___024root* vlSelf);

void VFIFO_tb___024root___eval_initial(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VFIFO_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VFIFO_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VFIFO_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0 
        = vlSelfRef.FIFO_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__rst_n__0 
        = vlSelfRef.FIFO_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__1(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "dv/FIFO_tb.sv", 
                                             31);
        vlSelfRef.__VdlyVal__FIFO_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.FIFO_tb__DOT__clk)));
        vlSelfRef.__VdlySet__FIFO_tb__DOT__clk__v0 = 1U;
    }
}

void VFIFO_tb___024root___eval_act(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_act\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VFIFO_tb___024root___nba_sequent__TOP__0(VFIFO_tb___024root* vlSelf);
void VFIFO_tb___024root___nba_sequent__TOP__1(VFIFO_tb___024root* vlSelf);

void VFIFO_tb___024root___eval_nba(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_nba\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VFIFO_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VFIFO_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VFIFO_tb___024root___nba_sequent__TOP__0(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___nba_sequent__TOP__0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__FIFO_tb__DOT__u_fifo__DOT__mem__v0;
    __VdlyVal__FIFO_tb__DOT__u_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__FIFO_tb__DOT__u_fifo__DOT__mem__v0;
    __VdlyDim0__FIFO_tb__DOT__u_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__FIFO_tb__DOT__u_fifo__DOT__mem__v0;
    __VdlySet__FIFO_tb__DOT__u_fifo__DOT__mem__v0 = 0;
    // Body
    __VdlySet__FIFO_tb__DOT__u_fifo__DOT__mem__v0 = 0U;
    if (vlSelfRef.FIFO_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.FIFO_tb__DOT__rd_inc) 
             & (~ (IData)(vlSelfRef.FIFO_tb__DOT__rd_empty_o)))) {
            vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.FIFO_tb__DOT__wr_inc) 
             & (~ (IData)(vlSelfRef.FIFO_tb__DOT__wr_full_o)))) {
            __VdlyVal__FIFO_tb__DOT__u_fifo__DOT__mem__v0 
                = vlSelfRef.FIFO_tb__DOT__wr_data_i;
            __VdlyDim0__FIFO_tb__DOT__u_fifo__DOT__mem__v0 
                = (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr));
            __VdlySet__FIFO_tb__DOT__u_fifo__DOT__mem__v0 = 1U;
            vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__FIFO_tb__DOT__u_fifo__DOT__mem__v0) {
        vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[__VdlyDim0__FIFO_tb__DOT__u_fifo__DOT__mem__v0] 
            = __VdlyVal__FIFO_tb__DOT__u_fifo__DOT__mem__v0;
    }
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

VL_INLINE_OPT void VFIFO_tb___024root___nba_sequent__TOP__1(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___nba_sequent__TOP__1\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__FIFO_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__FIFO_tb__DOT__clk__v0 = 0U;
        vlSelfRef.FIFO_tb__DOT__clk = vlSelfRef.__VdlyVal__FIFO_tb__DOT__clk__v0;
    }
}

void VFIFO_tb___024root___timing_resume(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___timing_resume\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcb17499f__0.resume(
                                                   "@(posedge FIFO_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcb174a5e__0.resume(
                                                   "@(negedge FIFO_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VFIFO_tb___024root___timing_commit(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___timing_commit\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcb17499f__0.commit(
                                                   "@(posedge FIFO_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcb174a5e__0.commit(
                                                   "@(negedge FIFO_tb.clk)");
    }
}

void VFIFO_tb___024root___eval_triggers__act(VFIFO_tb___024root* vlSelf);

bool VFIFO_tb___024root___eval_phase__act(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_phase__act\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFIFO_tb___024root___eval_triggers__act(vlSelf);
    VFIFO_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VFIFO_tb___024root___timing_resume(vlSelf);
        VFIFO_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFIFO_tb___024root___eval_phase__nba(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_phase__nba\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFIFO_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__nba(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__act(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VFIFO_tb___024root___eval(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VFIFO_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/FIFO_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VFIFO_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/FIFO_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VFIFO_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VFIFO_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFIFO_tb___024root___eval_debug_assertions(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_debug_assertions\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
