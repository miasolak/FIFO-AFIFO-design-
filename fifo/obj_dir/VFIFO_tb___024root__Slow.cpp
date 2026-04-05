// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb__Syms.h"
#include "VFIFO_tb___024root.h"

void VFIFO_tb___024root___ctor_var_reset(VFIFO_tb___024root* vlSelf);

VFIFO_tb___024root::VFIFO_tb___024root(VFIFO_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFIFO_tb___024root___ctor_var_reset(this);
}

void VFIFO_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFIFO_tb___024root::~VFIFO_tb___024root() {
}
