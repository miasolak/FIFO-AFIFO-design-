// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFIFO_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VFIFO_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFIFO_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ FIFO_tb__DOT__clk;
    CData/*0:0*/ FIFO_tb__DOT__rst_n;
    CData/*0:0*/ FIFO_tb__DOT__wr_inc;
    CData/*0:0*/ FIFO_tb__DOT__rd_inc;
    CData/*0:0*/ FIFO_tb__DOT__wr_full_o;
    CData/*0:0*/ FIFO_tb__DOT__rd_empty_o;
    CData/*4:0*/ FIFO_tb__DOT__u_fifo__DOT__wr_ptr;
    CData/*4:0*/ FIFO_tb__DOT__u_fifo__DOT__rd_ptr;
    CData/*0:0*/ __VdlyVal__FIFO_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__FIFO_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__FIFO_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ FIFO_tb__DOT__wr_data_i;
    IData/*31:0*/ FIFO_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ FIFO_tb__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ FIFO_tb__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> FIFO_tb__DOT__u_fifo__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcb17499f__0;
    VlTriggerScheduler __VtrigSched_hcb174a5e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFIFO_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFIFO_tb___024root(VFIFO_tb__Syms* symsp, const char* v__name);
    ~VFIFO_tb___024root();
    VL_UNCOPYABLE(VFIFO_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
