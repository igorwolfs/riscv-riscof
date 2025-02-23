// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__sysclk__0 
        = vlSelf->top_tb__DOT__sysclk;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->top_tb__DOT__nrst_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../riscv_core/core_RV32I/testbenches/top_tb.sv", 
                                       79);
    vlSelf->top_tb__DOT__nrst_in = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "../riscv_core/core_RV32I/testbenches/top_tb.sv", 
                                           75);
        vlSelf->top_tb__DOT__sysclk = (1U & (~ (IData)(vlSelf->top_tb__DOT__sysclk)));
    }
}

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*21:0*/ __Vdlyvdim0__top_tb__DOT__ext_memory__v0;
    __Vdlyvdim0__top_tb__DOT__ext_memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__ext_memory__v0;
    __Vdlyvval__top_tb__DOT__ext_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__ext_memory__v0;
    __Vdlyvset__top_tb__DOT__ext_memory__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__top_tb__DOT__ext_memory__v1;
    __Vdlyvdim0__top_tb__DOT__ext_memory__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__ext_memory__v1;
    __Vdlyvval__top_tb__DOT__ext_memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__ext_memory__v1;
    __Vdlyvset__top_tb__DOT__ext_memory__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0;
    __Vdlyvdim0__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0;
    __Vdlyvval__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0;
    __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v1;
    __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 = 0U;
    __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v1 = 0U;
    __Vdlyvset__top_tb__DOT__ext_memory__v0 = 0U;
    __Vdlyvset__top_tb__DOT__ext_memory__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->top_tb__DOT__nrst_in)))) {
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__i = 0x20U;
    }
    if (vlSelf->top_tb__DOT__nrst_in) {
        if (((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr) 
             | ((0x6fU == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                | ((0x67U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                   | ((3U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                      | ((0x37U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                         | (0x17U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)))))))) {
            __Vdlyvval__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 
                = ((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr)
                    ? ((0U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                        ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                           + vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                        : ((0x20U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                            ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                               - vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                            : ((0x200U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                   ^ vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                : ((0x300U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                    ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                       | vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                    : ((0x380U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                        ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                           & vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                        : ((0x80U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                            ? VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in, vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                            : ((0x280U 
                                                == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                ? VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in, vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                : (
                                                   (0x2a0U 
                                                    == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                    ? (IData)(
                                                              VL_SHIFTR_QQI(64,64,32, 
                                                                            (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                                                >> 0x1fU))))) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in))), vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in))
                                                    : 
                                                   ((0x100U 
                                                     == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                     ? vlSelf->top_tb__DOT__core_t__DOT__alu_t__DOT____VdfgTmp_hf30ee45b__0
                                                     : 
                                                    ((0x180U 
                                                      == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                      ? vlSelf->top_tb__DOT__core_t__DOT__alu_t__DOT____VdfgTmp_hf30ee45b__0
                                                      : 0xffffffffU))))))))))
                    : ((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0)
                        ? ((IData)(4U) + vlSelf->top_tb__DOT__core_t__DOT__pc)
                        : ((3U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                            ? ((0U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                             >> 0xcU)))
                                ? (((- (IData)((1U 
                                                & (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                : ((1U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                 >> 0xcU)))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                    : ((2U == (7U & 
                                               (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xcU)))
                                        ? vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data
                                        : ((4U == (7U 
                                                   & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                      >> 0xcU)))
                                            ? (0xffU 
                                               & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)
                                            : (0xffffU 
                                               & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)))))
                            : ((0x37U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                ? (0xfffff000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)
                                : ((0xfffff000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data) 
                                   + vlSelf->top_tb__DOT__core_t__DOT__pc)))));
            __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0 
                = (0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                            >> 7U));
        }
    } else {
        __Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v1 = 1U;
    }
    if ((0x23U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))) {
        if ((0U == (vlSelf->top_tb__DOT__dmem_wr_addr 
                    >> 0x1cU))) {
            __Vdlyvval__top_tb__DOT__ext_memory__v0 
                = vlSelf->top_tb__DOT__dmem_wr_data;
            __Vdlyvset__top_tb__DOT__ext_memory__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__ext_memory__v0 
                = (0x3fffffU & (vlSelf->top_tb__DOT__dmem_wr_addr 
                                >> 2U));
        } else if (VL_UNLIKELY((0xf0000004U == vlSelf->top_tb__DOT__dmem_wr_addr))) {
            VL_FWRITEF(vlSelf->top_tb__DOT__sig_file,"Write to addr %x: data %x\r\n\n",
                       32,vlSelf->top_tb__DOT__dmem_wr_addr,
                       32,vlSelf->top_tb__DOT__dmem_wr_data);
            __Vdlyvval__top_tb__DOT__ext_memory__v1 
                = vlSelf->top_tb__DOT__dmem_wr_data;
            __Vdlyvset__top_tb__DOT__ext_memory__v1 = 1U;
            __Vdlyvdim0__top_tb__DOT__ext_memory__v1 
                = (0x3fffffU & (vlSelf->top_tb__DOT__dmem_wr_addr 
                                >> 2U));
        } else if (VL_UNLIKELY(((0xcafecafeU == vlSelf->top_tb__DOT__dmem_wr_addr) 
                                & (0xf0000000U == vlSelf->top_tb__DOT__dmem_wr_data)))) {
            VL_WRITEF("Finishing simulation.\n");
            VL_FCLOSE_I(vlSelf->top_tb__DOT__sig_file); VL_FINISH_MT("../riscv_core/core_RV32I/testbenches/top_tb.sv", 60, "");
        }
    }
    vlSelf->top_tb__DOT__core_t__DOT__pc = ((IData)(vlSelf->top_tb__DOT__nrst_in)
                                             ? vlSelf->top_tb__DOT__core_t__DOT__pc_next
                                             : 0U);
    if (__Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0) {
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[__Vdlyvdim0__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0] 
            = __Vdlyvval__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v0;
    }
    if (__Vdlyvset__top_tb__DOT__core_t__DOT__registers_t__DOT__regs__v1) {
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[1U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[2U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[3U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[4U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[5U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[6U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[7U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[8U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[9U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0xaU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0xbU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0xcU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0xdU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0xeU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0xfU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x10U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x11U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x12U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x13U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x14U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x15U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x16U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x17U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x18U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x19U] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x1aU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x1bU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x1cU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x1dU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x1eU] = 0U;
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__top_tb__DOT__ext_memory__v0) {
        vlSelf->top_tb__DOT__ext_memory[__Vdlyvdim0__top_tb__DOT__ext_memory__v0] 
            = __Vdlyvval__top_tb__DOT__ext_memory__v0;
    }
    if (__Vdlyvset__top_tb__DOT__ext_memory__v1) {
        vlSelf->top_tb__DOT__ext_memory[__Vdlyvdim0__top_tb__DOT__ext_memory__v1] 
            = __Vdlyvval__top_tb__DOT__ext_memory__v1;
    }
    vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
        = vlSelf->top_tb__DOT__ext_memory[(0x3fffffU 
                                           & (vlSelf->top_tb__DOT__core_t__DOT__pc 
                                              >> 2U))];
    vlSelf->top_tb__DOT__core_t__DOT__alu_cid = (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                     & ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                             >> 0xcU))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                               >> 0xcU))))))
                                                  ? 
                                                 ((0x380U 
                                                   & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                      >> 5U)) 
                                                  | (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                     >> 0x19U))
                                                  : 
                                                 (0x380U 
                                                  & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                     >> 5U)));
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr 
        = ((0x13U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
           | (0x33U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)));
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0 
        = ((0x6fU == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
           | (0x67U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)));
    vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2 
        = vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs
        [(0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                   >> 0x14U))];
    vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in = 
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs
        [(0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                   >> 0xfU))];
    vlSelf->top_tb__DOT__dmem_wr_data = ((0U == (7U 
                                                 & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2))
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xcU)))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2))
                                              : vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2));
    vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in = 
        ((0x33U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
          ? vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2
          : ((5U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                           >> 0xcU))) ? (0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                  >> 0x14U))
              : VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__active_imem_data, 0x14U)));
    vlSelf->top_tb__DOT__dmem_wr_addr = (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                         + ((0xfe0U 
                                             & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                  >> 7U))));
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq 
        = (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
           == vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2);
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt 
        = (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
           < vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2);
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr 
        = (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
           + VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__active_imem_data, 0x14U));
    vlSelf->top_tb__DOT__core_t__DOT__alu_t__DOT____VdfgTmp_hf30ee45b__0 
        = (- (IData)((vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                      < vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)));
    vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
        = vlSelf->top_tb__DOT__ext_memory[(0x3fffffU 
                                           & (vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr 
                                              >> 2U))];
    vlSelf->top_tb__DOT__core_t__DOT__pc_next = (((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                              & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq))) 
                                                     | (((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq)) 
                                                         & (0x1000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))) 
                                                        | ((IData)(
                                                                   ((0x4000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                                    & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt))) 
                                                           | (((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt)) 
                                                               & (0x5000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))) 
                                                              | ((IData)(
                                                                         ((0x6000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                                          & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt))) 
                                                                 | ((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt)) 
                                                                    & (0x7000U 
                                                                       == 
                                                                       (0x7000U 
                                                                        & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)))))))))
                                                  ? 
                                                 (vlSelf->top_tb__DOT__core_t__DOT__pc 
                                                  + 
                                                  ((0x3f0U 
                                                    & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                       >> 0x15U)) 
                                                   | (0xfU 
                                                      & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                         >> 8U))))
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                                   ? 
                                                  (vlSelf->top_tb__DOT__core_t__DOT__pc 
                                                   + 
                                                   ((0x3ff00U 
                                                     & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                        >> 0xdU)) 
                                                    | (0xffU 
                                                       & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                          >> 0xcU))))
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                                    ? vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top_tb__DOT__core_t__DOT__pc))));
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../riscv_core/core_RV32I/testbenches/top_tb.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../riscv_core/core_RV32I/testbenches/top_tb.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
