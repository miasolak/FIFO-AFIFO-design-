// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb__Syms.h"
#include "VFIFO_tb___024root.h"

VL_INLINE_OPT VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__0(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FIFO_tb__DOT__rst_n = (1U & (~ (IData)(vlSelfRef.FIFO_tb__DOT__rst_n)));
    co_await vlSelfRef.__VdlySched.delay(0x55f0ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hcb17499f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge FIFO_tb.clk)", 
                                                         "dv/FIFO_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__rst_n = (1U & (~ (IData)(vlSelfRef.FIFO_tb__DOT__rst_n)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i = 1U;
    while ((VL_GTES_III(32, 0x10U, vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i) 
            & (~ (((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                          >> 4U)) != (1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                            >> 4U))) 
                  & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                     == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))))) {
        vlSelfRef.FIFO_tb__DOT__wr_data_i = vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i;
        vlSelfRef.FIFO_tb__DOT__wr_inc = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "dv/FIFO_tb.sv", 
                                             50);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                                >> 4U)) != (1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                                  >> 4U))) 
                        & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                           == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))))) {
            VL_WRITEF_NX("\033[1;32m[PASSED]\033[0m FIFO full.\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: FIFO_tb.sv:56: Assertion failed in %NFIFO_tb: \033[1;31m[FAILED]\033[0m FIFO was expected to be full but it is not.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("dv/FIFO_tb.sv", 56, "");
        }
    }
    vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i = 1U;
    while ((VL_GTES_III(32, 0x10U, vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i) 
            & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
               != (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)))) {
        co_await vlSelfRef.__VtrigSched_hcb174a5e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge FIFO_tb.clk)", 
                                                             "dv/FIFO_tb.sv", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem
                            [(0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))] 
                            == vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i)))) {
                VL_WRITEF_NX("\033[1;32m[PASSED]\033[0m Read data is same as written data.\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Error: FIFO_tb.sv:64: Assertion failed in %NFIFO_tb.unnamedblk2: \033[1;31m[FAILED]\033[0m Read data was 0x%0x, but it is expected to be 0x%0x.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))],
                             32,vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i);
                VL_STOP_MT("dv/FIFO_tb.sv", 64, "");
            }
        }
        vlSelfRef.FIFO_tb__DOT__rd_inc = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "dv/FIFO_tb.sv", 
                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.FIFO_tb__DOT__rd_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                        == (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr))))) {
            VL_WRITEF_NX("\033[1;32m[PASSED]\033[0m FIFO empty.\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: FIFO_tb.sv:73: Assertion failed in %NFIFO_tb: \033[1;31m[FAILED]\033[0m FIFO was expected to be empty but it is not.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("dv/FIFO_tb.sv", 73, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_hcb17499f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge FIFO_tb.clk)", 
                                                         "dv/FIFO_tb.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_data_i = 0xbabaU;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 1U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_data_i = 0xabcdU;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 1U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                          == (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr))))) {
            VL_WRITEF_NX("[%0t] %%Error: FIFO_tb.sv:95: Assertion failed in %NFIFO_tb: \033[1;31m[FAILED]\033[0m FIFO was empty but it should't be.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("dv/FIFO_tb.sv", 95, "");
        } else {
            VL_WRITEF_NX("\033[1;32m[PASSED]\033[0m FIFO was not empty.\n",0);
        }
    }
    vlSelfRef.FIFO_tb__DOT__rst_n = (1U & (~ (IData)(vlSelfRef.FIFO_tb__DOT__rst_n)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__rst_n = (1U & (~ (IData)(vlSelfRef.FIFO_tb__DOT__rst_n)));
    vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i = 0U;
    while ((VL_GTS_III(32, 0x10U, vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i) 
            & (~ (((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                          >> 4U)) != (1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                            >> 4U))) 
                  & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                     == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))))) {
        vlSelfRef.FIFO_tb__DOT__wr_data_i = vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i;
        vlSelfRef.FIFO_tb__DOT__wr_inc = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "dv/FIFO_tb.sv", 
                                             106);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                                >> 4U)) != (1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                                  >> 4U))) 
                        & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                           == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))))) {
            VL_WRITEF_NX("\033[1;32m[PASSED]\033[0m FIFO full.\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: FIFO_tb.sv:112: Assertion failed in %NFIFO_tb: \033[1;31m[FAILED]\033[0m FIFO was expected to be full but it is not.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("dv/FIFO_tb.sv", 112, "");
        }
    }
    vlSelfRef.FIFO_tb__DOT__wr_data_i = 0xaaU;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 1U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_data_i = 0xbbU;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 1U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.FIFO_tb__DOT__wr_inc = 0U;
    vlSelfRef.FIFO_tb__DOT__rd_inc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "dv/FIFO_tb.sv", 
                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                                  >> 4U)) != (1U & 
                                              ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                               >> 4U))) 
                          & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                             == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))))) {
            VL_WRITEF_NX("[%0t] %%Error: FIFO_tb.sv:132: Assertion failed in %NFIFO_tb: \033[1;31m[FAILED]\033[0m FIFO was full but is shouldn't be.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("dv/FIFO_tb.sv", 132, "");
        } else {
            VL_WRITEF_NX("\033[1;32m[PASSED]\033[0m FIFO is not full.\n",0);
        }
    }
    VL_FINISH_MT("dv/FIFO_tb.sv", 134, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__act(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VFIFO_tb___024root___eval_triggers__act(VFIFO_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_triggers__act\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.FIFO_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.FIFO_tb__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.FIFO_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0 
        = vlSelfRef.FIFO_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__FIFO_tb__DOT__rst_n__0 
        = vlSelfRef.FIFO_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFIFO_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
