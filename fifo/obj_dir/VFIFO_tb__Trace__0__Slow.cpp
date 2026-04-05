// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFIFO_tb__Syms.h"


VL_ATTR_COLD void VFIFO_tb___024root__trace_init_sub__TOP__0(VFIFO_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_init_sub__TOP__0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("FIFO_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"DSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"ASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"wr_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rd_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"wr_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"rd_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"wr_full_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rd_empty_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"DSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"ASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"wr_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rd_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"wr_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rd_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+27,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_init_top(VFIFO_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_init_top\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VFIFO_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFIFO_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFIFO_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFIFO_tb___024root__trace_register(VFIFO_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_register\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VFIFO_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFIFO_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFIFO_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFIFO_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_const_0\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFIFO_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_const_0_sub_0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+30,(0xaU),32);
    bufp->fullIData(oldp+31,(0x20U),32);
    bufp->fullIData(oldp+32,(4U),32);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_full_0\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFIFO_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_full_0_sub_0\n"); );
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.FIFO_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.FIFO_tb__DOT__wr_inc));
    bufp->fullBit(oldp+3,(vlSelfRef.FIFO_tb__DOT__rd_inc));
    bufp->fullIData(oldp+4,(vlSelfRef.FIFO_tb__DOT__wr_data_i),32);
    bufp->fullIData(oldp+5,(vlSelfRef.FIFO_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.FIFO_tb__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelfRef.FIFO_tb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem
                            [(0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))]),32);
    bufp->fullBit(oldp+9,((((1U & ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr) 
                                   >> 4U)) != (1U & 
                                               ((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                                                >> 4U))) 
                           & ((0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr)) 
                              == (0xfU & (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr))))));
    bufp->fullBit(oldp+10,(((IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr) 
                            == (IData)(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr))));
    bufp->fullIData(oldp+11,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[7]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[8]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[9]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[10]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[11]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[12]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[13]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[14]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__mem[15]),32);
    bufp->fullCData(oldp+27,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__wr_ptr),5);
    bufp->fullCData(oldp+28,(vlSelfRef.FIFO_tb__DOT__u_fifo__DOT__rd_ptr),5);
    bufp->fullBit(oldp+29,(vlSelfRef.FIFO_tb__DOT__clk));
}
