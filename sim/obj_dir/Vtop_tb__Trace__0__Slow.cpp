// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"INTERNAL_MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+87,0,"MEMSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"sysclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nrst_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"sig_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"dmem_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"dmem_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"dmem_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"dmem_wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"dmem_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"imem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("core_t", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"INTERNAL_MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+83,0,"sysclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nrst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"dmem_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"dmem_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"dmem_wr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"dmem_wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"dmem_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"imem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"internal_dmem_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"internal_imem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"alu_arg1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"alu_arg2_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"alu_arg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"alu_cid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+12,0,"reg_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_wr_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"reg_rd_idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"reg_rd_idx2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"reg_wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"reg_rd_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"reg_rd_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"active_dmem_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"active_imem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"imem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_t", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"alu_cid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"alu_arg1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"alu_arg2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"alu_arg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"CODE_SUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+92,0,"CODE_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+93,0,"CODE_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+94,0,"CODE_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+95,0,"CODE_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+96,0,"CODE_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+97,0,"CODE_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+98,0,"CODE_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+99,0,"CODE_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+100,0,"CODE_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+19,0,"SRA_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"SRA_tmp_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_t", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"alu_cid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"alu_arg1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"alu_arg2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"alu_arg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"reg_wr_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_wr_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"reg_rd_idx1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"reg_rd_idx2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"reg_wr_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"reg_rd_data1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"reg_rd_data2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"pc_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"dmem_rd_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"dmem_rd_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"dmem_wr_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"dmem_wr_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"dmem_wr_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"imem_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"imm_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"alu_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"pc_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"imem_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"imm_I_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+27,0,"imm_S_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+28,0,"imm_B_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+29,0,"imm_U_instr_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"imm_J_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+31,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"alu_cid_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+34,0,"alu_cid_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+35,0,"alu_arg2_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"reg_data_out_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"pc_next_default",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc_next_br",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_next_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_next_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"br_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"br_ne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"br_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"br_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"br_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"br_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"br_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"reg_data_out_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"load_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"load_bu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"load_hw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"load_hwu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"reg_data_out_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"reg_data_out_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"reg_data_out_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"store_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"store_hw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_t", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"NRST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"clkin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nrst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("registers_t", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+83,0,"clkin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nrst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"wr_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"wr_idx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rd_idx1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd_idx2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rd_data1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rd_data2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+50+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+82,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+86,(0U));
    bufp->fullIData(oldp+87,(0x400000U),32);
    bufp->fullIData(oldp+88,(vlSelf->top_tb__DOT__core_t__DOT__internal_dmem_rd_data),32);
    bufp->fullIData(oldp+89,(vlSelf->top_tb__DOT__core_t__DOT__internal_imem_data),32);
    bufp->fullIData(oldp+90,(vlSelf->top_tb__DOT__core_t__DOT__imem_instr),32);
    bufp->fullSData(oldp+91,(0U),10);
    bufp->fullSData(oldp+92,(0x20U),10);
    bufp->fullSData(oldp+93,(0x200U),10);
    bufp->fullSData(oldp+94,(0x300U),10);
    bufp->fullSData(oldp+95,(0x380U),10);
    bufp->fullSData(oldp+96,(0x80U),10);
    bufp->fullSData(oldp+97,(0x280U),10);
    bufp->fullSData(oldp+98,(0x2a0U),10);
    bufp->fullSData(oldp+99,(0x100U),10);
    bufp->fullSData(oldp+100,(0x180U),10);
    bufp->fullIData(oldp+101,(0x20U),32);
    bufp->fullIData(oldp+102,(0U),32);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr),32);
    bufp->fullIData(oldp+2,(vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data),32);
    bufp->fullIData(oldp+3,(vlSelf->top_tb__DOT__dmem_wr_addr),32);
    bufp->fullIData(oldp+4,(vlSelf->top_tb__DOT__dmem_wr_data),32);
    bufp->fullBit(oldp+5,((0x23U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))));
    bufp->fullIData(oldp+6,(vlSelf->top_tb__DOT__core_t__DOT__pc),32);
    bufp->fullIData(oldp+7,(vlSelf->top_tb__DOT__core_t__DOT__active_imem_data),32);
    bufp->fullIData(oldp+8,(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in),32);
    bufp->fullIData(oldp+9,(vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in),32);
    bufp->fullIData(oldp+10,(((0U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
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
                                           : ((0x380U 
                                               == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
                                               ? (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in)
                                               : ((0x80U 
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
    bufp->fullSData(oldp+11,(vlSelf->top_tb__DOT__core_t__DOT__alu_cid),10);
    bufp->fullBit(oldp+12,(((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr) 
                            | ((0x6fU == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                               | ((0x67U == (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                  | ((3U == (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)))))))));
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr)
                               ? ((0U == (IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_cid))
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
                                                        : 0xffffffffU))))))))))
                               : ((IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0)
                                   ? ((IData)(4U) + vlSelf->top_tb__DOT__core_t__DOT__pc)
                                   : ((3U == (0x7fU 
                                              & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                       ? ((0U == (7U 
                                                  & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                     >> 0xcU)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                           : ((1U == 
                                               (7U 
                                                & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                   >> 0xcU)))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                                               : ((2U 
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
                                       : ((0x37U == 
                                           (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                           ? (0xfffff000U 
                                              & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)
                                           : ((0xfffff000U 
                                               & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data) 
                                              + vlSelf->top_tb__DOT__core_t__DOT__pc)))))),32);
    bufp->fullIData(oldp+17,(vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2),32);
    bufp->fullIData(oldp+18,((((0x63U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                               & ((IData)(((0U == (0x7000U 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                           & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq))) 
                                  | (((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq)) 
                                      & (0x1000U == 
                                         (0x7000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))) 
                                     | ((IData)(((0x4000U 
                                                  == 
                                                  (0x7000U 
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
                                         | (0xffU & 
                                            (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                             >> 0xcU))))
                                   : ((0x67U == (0x7fU 
                                                 & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))
                                       ? vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__pc_next_jalr
                                       : ((IData)(4U) 
                                          + vlSelf->top_tb__DOT__core_t__DOT__pc))))),32);
    bufp->fullQData(oldp+19,((((QData)((IData)((- (IData)(
                                                          (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in)))),64);
    bufp->fullIData(oldp+21,((IData)(VL_SHIFTR_QQI(64,64,32, 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top_tb__DOT__core_t__DOT__alu_arg1_in))), vlSelf->top_tb__DOT__core_t__DOT__alu_arg2_in))),32);
    bufp->fullBit(oldp+22,(((0x13U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                            | ((0x23U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                               | ((0x63U == (0x7fU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                  | ((0x37U == (0x7fU 
                                                & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                     | ((0x17U == (0x7fU 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)))))))));
    bufp->fullBit(oldp+23,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__alu_instr));
    bufp->fullBit(oldp+24,(((0x63U == (0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                            | (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT____VdfgTmp_h0278fb29__0))));
    bufp->fullCData(oldp+25,((0x7fU & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)),7);
    bufp->fullSData(oldp+26,((vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                              >> 0x14U)),12);
    bufp->fullSData(oldp+27,(((0xfe0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                          >> 7U)))),12);
    bufp->fullSData(oldp+28,(((0x3f0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                         >> 0x15U)) 
                              | (0xfU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                         >> 8U)))),10);
    bufp->fullIData(oldp+29,((0xfffff000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)),32);
    bufp->fullIData(oldp+30,(((0x3ff00U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                           >> 0xdU)) 
                              | (0xffU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                          >> 0xcU)))),18);
    bufp->fullCData(oldp+31,((7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+32,((vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                              >> 0x19U)),7);
    bufp->fullSData(oldp+33,(((0x380U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                         >> 5U)) | 
                              (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                               >> 0x19U))),10);
    bufp->fullSData(oldp+34,((0x380U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                        >> 5U))),10);
    bufp->fullIData(oldp+35,(((5U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 0xcU)))
                               ? (0x1fU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                           >> 0x14U))
                               : VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__core_t__DOT__active_imem_data, 0x14U))),32);
    bufp->fullIData(oldp+36,(((IData)(4U) + vlSelf->top_tb__DOT__core_t__DOT__pc)),32);
    bufp->fullIData(oldp+37,((vlSelf->top_tb__DOT__core_t__DOT__pc 
                              + ((0x3f0U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 0x15U)) 
                                 | (0xfU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 8U))))),32);
    bufp->fullIData(oldp+38,((vlSelf->top_tb__DOT__core_t__DOT__pc 
                              + ((0x3ff00U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                              >> 0xdU)) 
                                 | (0xffU & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                             >> 0xcU))))),32);
    bufp->fullBit(oldp+39,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq));
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_eq)))));
    bufp->fullBit(oldp+41,(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt));
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt)))));
    bufp->fullBit(oldp+43,(((IData)(((0U == (0x7000U 
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
                                      & (0x5000U == 
                                         (0x7000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))) 
                                     | ((IData)(((0x6000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data)) 
                                                 & (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt))) 
                                        | ((~ (IData)(vlSelf->top_tb__DOT__core_t__DOT__control_t__DOT__br_blt)) 
                                           & (0x7000U 
                                              == (0x7000U 
                                                  & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data))))))))));
    bufp->fullCData(oldp+44,((0xffU & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)),8);
    bufp->fullSData(oldp+45,((0xffffU & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)),16);
    bufp->fullIData(oldp+46,(((0U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                            >> 0xcU)))
                               ? (((- (IData)((1U & 
                                               (vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data))
                               : ((1U == (7U & (vlSelf->top_tb__DOT__core_t__DOT__active_imem_data 
                                                >> 0xcU)))
                                   ? (((- (IData)((1U 
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
                                              & vlSelf->top_tb__DOT__core_t__DOT__active_dmem_rd_data)))))),32);
    bufp->fullIData(oldp+47,(((0xfffff000U & vlSelf->top_tb__DOT__core_t__DOT__active_imem_data) 
                              + vlSelf->top_tb__DOT__core_t__DOT__pc)),32);
    bufp->fullCData(oldp+48,((0xffU & vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2)),8);
    bufp->fullSData(oldp+49,((0xffffU & vlSelf->top_tb__DOT__core_t__DOT__reg_rd_data2)),16);
    bufp->fullIData(oldp+50,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[0]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[1]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[2]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[3]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[4]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[5]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[6]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[7]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[8]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[9]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[10]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[11]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[12]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[13]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[14]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[15]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[16]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[17]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[18]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[19]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[20]),32);
    bufp->fullIData(oldp+71,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[21]),32);
    bufp->fullIData(oldp+72,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[22]),32);
    bufp->fullIData(oldp+73,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[23]),32);
    bufp->fullIData(oldp+74,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[24]),32);
    bufp->fullIData(oldp+75,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[25]),32);
    bufp->fullIData(oldp+76,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[26]),32);
    bufp->fullIData(oldp+77,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[27]),32);
    bufp->fullIData(oldp+78,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[28]),32);
    bufp->fullIData(oldp+79,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[29]),32);
    bufp->fullIData(oldp+80,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[30]),32);
    bufp->fullIData(oldp+81,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__regs[31]),32);
    bufp->fullIData(oldp+82,(vlSelf->top_tb__DOT__core_t__DOT__registers_t__DOT__i),32);
    bufp->fullBit(oldp+83,(vlSelf->top_tb__DOT__sysclk));
    bufp->fullBit(oldp+84,(vlSelf->top_tb__DOT__nrst_in));
    bufp->fullIData(oldp+85,(vlSelf->top_tb__DOT__sig_file),32);
}
