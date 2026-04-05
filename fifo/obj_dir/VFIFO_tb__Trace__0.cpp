// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFIFO_tb__Syms.h"


void VFIFO_tb___024root__trace_chg_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFIFO_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_chg_0\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFIFO_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFIFO_tb___024root__trace_chg_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_chg_0_sub_0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.FIFO_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.FIFO_tb__DOT__wr_inc));
        bufp->chgBit(oldp+2,(vlSelfRef.FIFO_tb__DOT__rd_inc));
        bufp->chgIData(oldp+3,(vlSelfRef.FIFO_tb__DOT__wr_data_i),32);
        bufp->chgIData(oldp+4,(vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+7,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem
                               [(0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))]),32);
        bufp->chgBit(oldp+8,((((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                                      >> 4U)) != (1U 
                                                  & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                                     >> 4U))) 
                              & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                                 == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))));
        bufp->chgBit(oldp+9,(((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                              == (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr))));
        bufp->chgIData(oldp+10,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[7]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[8]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[9]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[10]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[11]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[12]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[13]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[14]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[15]),32);
        bufp->chgCData(oldp+26,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr),5);
        bufp->chgCData(oldp+27,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr),5);
    }
    bufp->chgBit(oldp+28,(vlSelfRef.FIFO_tb__DOT__clk));
}

void VFIFO_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_cleanup\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
