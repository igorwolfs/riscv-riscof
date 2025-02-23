// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_tb__DOT__sysclk = 0U;
    vlSelf->top_tb__DOT__nrst_in = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x483d2573U;
    __Vtemp_1[1U] = 0x5f504154U;
    __Vtemp_1[2U] = 0x4d454dU;
    if ((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->top_tb__DOT__mem_path))) {
        vlSelf->top_tb__DOT__mem_path = std::string{"tests/my.hex"};
    }
    __Vtemp_2[0U] = 0x483d2573U;
    __Vtemp_2[1U] = 0x5f504154U;
    __Vtemp_2[2U] = 0x534947U;
    if ((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                vlSelf->top_tb__DOT__sig_path))) {
        vlSelf->top_tb__DOT__sig_path = std::string{"tests/my.sig"};
    }
    VL_READMEM_N(true, 32, 4194304, 0, VL_CVT_PACK_STR_NN(vlSelf->top_tb__DOT__mem_path)
                 ,  &(vlSelf->top_tb__DOT__ext_memory)
                 , 0, ~0ULL);
    vlSelf->top_tb__DOT__sig_file = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->top_tb__DOT__sig_path)
                                                , std::string{"w"});
    ;
    if (VL_UNLIKELY((0U == vlSelf->top_tb__DOT__sig_file))) {
        VL_WRITEF("Error: Could not open signature file %@\n",
                  -1,&(vlSelf->top_tb__DOT__sig_path));
        VL_FINISH_MT("../riscv_core/core_RV32I/testbenches/top_tb.sv", 24, "");
    }
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../riscv_core/core_RV32I/testbenches/top_tb.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.sysclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.sysclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_tb__DOT__sysclk = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__nrst_in = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__sig_file = 0;
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->top_tb__DOT__ext_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dmem_wr_addr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dmem_wr_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__internal_dmem_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__internal_imem_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__alu_cid = VL_RAND_RESET_I(10);
    vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__active_imem_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__imem_instr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__alu_t__DOT____VdfgTmp_hf30ee45b__0 = 0;
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__sysclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
