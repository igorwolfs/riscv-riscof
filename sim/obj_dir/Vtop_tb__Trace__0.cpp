// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr),32);
        bufp->chgIData(oldp+1,(vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data),32);
        bufp->chgIData(oldp+2,(vlSelf->top_tb__DOT__dmem_wr_addr),32);
        bufp->chgIData(oldp+3,(vlSelf->top_tb__DOT__dmem_wr_data),32);
        bufp->chgBit(oldp+4,((0x23U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))));
        bufp->chgIData(oldp+5,(vlSelf->top_tb__DOT__core_t__DOT__pc),32);
        bufp->chgIData(oldp+6,(vlSelf->top_tb__DOT__core_t__DOT__active_imem_data),32);
        bufp->chgIData(oldp+7,(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in),32);
        bufp->chgIData(oldp+8,(vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in),32);
        bufp->chgIData(oldp+9,(((0U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                 ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                    + vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                 : ((0x20U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                     ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                        - vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                     : ((0x200U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                         ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                            ^ vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                         : ((0x300U 
                                             == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                             ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                | vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                             : ((0x380U 
                                                 == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                 ? 
                                                (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                 : 
                                                ((0x80U 
                                                  == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                  ? 
                                                 VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in, vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                  : 
                                                 ((0x280U 
                                                   == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                   ? 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in, vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                   : 
                                                  ((0x2a0U 
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
                                                      : 0xffffffffU))))))))))),32);
        bufp->chgSData(oldp+10,(vlSelf->top_tb__DOT__core_t__DOT__alu_cid),10);
        bufp->chgBit(oldp+11,(((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                     | ((3U == (0x7fU 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                        | ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)))))))));
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                          >> 7U))),5);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+15,(((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr)
                                  ? ((0U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                      ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                         + vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                      : ((0x20U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                          ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                             - vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                          : ((0x200U 
                                              == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                              ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                 ^ vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                              : ((0x300U 
                                                  == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                  ? 
                                                 (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                  | vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                  : 
                                                 ((0x380U 
                                                   == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                   ? 
                                                  (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                   : 
                                                  ((0x80U 
                                                    == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in, vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                    : 
                                                   ((0x280U 
                                                     == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in, vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                                     : 
                                                    ((0x2a0U 
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
                                      ? ((IData)(4U) 
                                         + vlSelf->top_tb__DOT__core_t__DOT__pc)
                                      : ((3U == (0x7fU 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                          ? ((0U == 
                                              (7U & 
                                               (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xcU)))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                       >> 0xcU)))
                                                   ? vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)))))
                                          : ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                              ? (0xfffff000U 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)
                                              : ((0xfffff000U 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data) 
                                                 + vlSelf->top_tb__DOT__core_t__DOT__pc)))))),32);
        bufp->chgIData(oldp+16,(vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2),32);
        bufp->chgIData(oldp+17,((((0x63U == (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                  & ((IData)(((0U == 
                                               (0x7000U 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                              & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq))) 
                                     | (((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq)) 
                                         & (0x1000U 
                                            == (0x7000U 
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
                                  ? (vlSelf->top_tb__DOT__core_t__DOT__pc 
                                     + ((0x3f0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                   >> 8U))))
                                  : ((0x6fU == (0x7fU 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                      ? (vlSelf->top_tb__DOT__core_t__DOT__pc 
                                         + ((0x3ff00U 
                                             & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xdU)) 
                                            | (0xffU 
                                               & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                  >> 0xcU))))
                                      : ((0x67U == 
                                          (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                          ? vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr
                                          : ((IData)(4U) 
                                             + vlSelf->top_tb__DOT__core_t__DOT__pc))))),32);
        bufp->chgQData(oldp+18,((((QData)((IData)((- (IData)(
                                                             (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in)))),64);
        bufp->chgIData(oldp+20,((IData)(VL_SHIFTR_QQI(64,64,32, 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in))), vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in))),32);
        bufp->chgBit(oldp+21,(((0x13U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                               | ((0x23U == (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)))))))));
        bufp->chgBit(oldp+22,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr));
        bufp->chgBit(oldp+23,(((0x63U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                               | (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0))));
        bufp->chgCData(oldp+24,((0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)),7);
        bufp->chgSData(oldp+25,((vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                 >> 0x14U)),12);
        bufp->chgSData(oldp+26,(((0xfe0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                             >> 7U)))),12);
        bufp->chgSData(oldp+27,(((0x3f0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 0x15U)) 
                                 | (0xfU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 8U)))),10);
        bufp->chgIData(oldp+28,((0xfffff000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)),32);
        bufp->chgIData(oldp+29,(((0x3ff00U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                              >> 0xdU)) 
                                 | (0xffU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                             >> 0xcU)))),18);
        bufp->chgCData(oldp+30,((7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+31,((vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                 >> 0x19U)),7);
        bufp->chgSData(oldp+32,(((0x380U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 5U)) 
                                 | (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                    >> 0x19U))),10);
        bufp->chgSData(oldp+33,((0x380U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                           >> 5U))),10);
        bufp->chgIData(oldp+34,(((5U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                               >> 0xcU)))
                                  ? (0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                              >> 0x14U))
                                  : VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__active_imem_data, 0x14U))),32);
        bufp->chgIData(oldp+35,(((IData)(4U) + vlSelf->top_tb__DOT__core_t__DOT__pc)),32);
        bufp->chgIData(oldp+36,((vlSelf->top_tb__DOT__core_t__DOT__pc 
                                 + ((0x3f0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                               >> 8U))))),32);
        bufp->chgIData(oldp+37,((vlSelf->top_tb__DOT__core_t__DOT__pc 
                                 + ((0x3ff00U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                 >> 0xdU)) 
                                    | (0xffU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xcU))))),32);
        bufp->chgBit(oldp+38,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq));
        bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq)))));
        bufp->chgBit(oldp+40,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt));
        bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt)))));
        bufp->chgBit(oldp+42,(((IData)(((0U == (0x7000U 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                        & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq))) 
                               | (((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq)) 
                                   & (0x1000U == (0x7000U 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))) 
                                  | ((IData)(((0x4000U 
                                               == (0x7000U 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                              & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt))) 
                                     | (((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt)) 
                                         & (0x5000U 
                                            == (0x7000U 
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
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))))))))));
        bufp->chgCData(oldp+43,((0xffU & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)),8);
        bufp->chgSData(oldp+44,((0xffffU & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)),16);
        bufp->chgIData(oldp+45,(((0U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
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
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                      : ((2U == (7U 
                                                 & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                    >> 0xcU)))
                                          ? vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data
                                          : ((4U == 
                                              (7U & 
                                               (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xcU)))
                                              ? (0xffU 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)
                                              : (0xffffU 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)))))),32);
        bufp->chgIData(oldp+46,(((0xfffff000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data) 
                                 + vlSelf->top_tb__DOT__core_t__DOT__pc)),32);
        bufp->chgCData(oldp+47,((0xffU & vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2)),8);
        bufp->chgSData(oldp+48,((0xffffU & vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2)),16);
        bufp->chgIData(oldp+49,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[4]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[5]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[6]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[7]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[8]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[9]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[10]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[11]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[12]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[13]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[14]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[15]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[16]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[17]),32);
        bufp->chgIData(oldp+67,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[18]),32);
        bufp->chgIData(oldp+68,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[19]),32);
        bufp->chgIData(oldp+69,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[20]),32);
        bufp->chgIData(oldp+70,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[21]),32);
        bufp->chgIData(oldp+71,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[22]),32);
        bufp->chgIData(oldp+72,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[23]),32);
        bufp->chgIData(oldp+73,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[24]),32);
        bufp->chgIData(oldp+74,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[25]),32);
        bufp->chgIData(oldp+75,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[26]),32);
        bufp->chgIData(oldp+76,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[27]),32);
        bufp->chgIData(oldp+77,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[28]),32);
        bufp->chgIData(oldp+78,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[29]),32);
        bufp->chgIData(oldp+79,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[30]),32);
        bufp->chgIData(oldp+80,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[31]),32);
        bufp->chgIData(oldp+81,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__i),32);
    }
    bufp->chgBit(oldp+82,(vlSelf->top_tb__DOT__sysclk));
    bufp->chgBit(oldp+83,(vlSelf->top_tb__DOT__nrst_in));
    bufp->chgIData(oldp+84,(vlSelf->top_tb__DOT__sig_file),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
