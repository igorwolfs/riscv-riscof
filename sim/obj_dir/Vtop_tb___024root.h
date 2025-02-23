// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__sysclk;
    CData/*0:0*/ top_tb__DOT__nrst_in;
    CData/*0:0*/ top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr;
    CData/*0:0*/ top_tb__DOT__core_t__DOT__control_t__DOT__br_eq;
    CData/*0:0*/ top_tb__DOT__core_t__DOT__control_t__DOT__br_blt;
    CData/*0:0*/ top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__sysclk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top_tb__DOT__core_t__DOT__alu_cid;
    IData/*31:0*/ top_tb__DOT__sig_file;
    IData/*31:0*/ top_tb__DOT__dmem_wr_addr;
    IData/*31:0*/ top_tb__DOT__dmem_wr_data;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__internal_dmem_rd_data;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__internal_imem_data;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__alu_arg1_in;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__alu_arg2_in;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__reg_rd_data2;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__pc;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__pc_next;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__active_dmem_rd_data;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__active_imem_data;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__imem_instr;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__alu_t__DOT____VdfgTmp_hf30ee45b__0;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr;
    IData/*31:0*/ top_tb__DOT__core_t__DOT__registers_t__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4194304> top_tb__DOT__ext_memory;
    VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__core_t__DOT__registers_t__DOT__regs;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    std::string top_tb__DOT__mem_path;
    std::string top_tb__DOT__sig_path;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
