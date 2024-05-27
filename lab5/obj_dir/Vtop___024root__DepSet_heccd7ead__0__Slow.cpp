// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[0U] = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[1U] = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[2U] = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[3U] = 0U;
    vlSelf->top__DOT__cpu__DOT__mux_rs2_sel = 1U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2 = 4U;
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__in0 = 1U;
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__in1 = 0U;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in3 = 0U;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in3 = 0U;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in3 = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf1f34e79_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4390399c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h22a62afa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he94ab748_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hcf214628_0;
extern const VlUnpacked<CData/*4:0*/, 4096> Vtop__ConstPool__TABLE_h912387bc_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0;
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*11:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_pc 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_is_jal 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_is_jalr 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_branch 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_branch;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_BHSR 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__pred_taken 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pred_taken;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__IF_BHSR 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = vlSelf->top__DOT__cpu__DOT__dmem_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[3U];
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ID_EX_rs1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ID_EX_rs2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_rd 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__EX_MEM_RegWrite 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_RegWrite 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__mux_rs2_sel 
        = vlSelf->top__DOT__cpu__DOT__mux_rs2_sel;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__mux_rs2_sel;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__ID_EX_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__ID_EX_mem_read 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_mem_read 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__BHSR = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR;
    vlSelf->top__DOT__cpu__DOT__mem_rw_32 = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read)
                                              ? 0U : 1U);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_tag 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__rd = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->is_halted = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index 
        = (0x1fU & ((vlSelf->top__DOT__cpu__DOT__ID_EX_pc 
                     >> 2U) ^ (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR)));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_S 
        = ((0xfe0U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                             >> 7U)));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_B 
        = ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                       >> 0x13U)) | ((0x800U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                            >> 7U)))));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_J 
        = ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                            >> 0x15U)))));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__offset_input 
        = (3U & vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_I 
        = (vlSelf->top__DOT__cpu__DOT__IF_ID_inst >> 0x14U);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_tag 
        = (vlSelf->top__DOT__cpu__DOT__current_pc >> 7U);
    vlSelf->__VdfgTmp_h69e9d136__0 = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal) 
                                      | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr));
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__rs2 = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__pc_imm = (vlSelf->top__DOT__cpu__DOT__ID_EX_imm 
                                          + vlSelf->top__DOT__cpu__DOT__ID_EX_pc);
    vlSelf->top__DOT__cpu__DOT__is_input_valid = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read) 
                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelf->top__DOT__cpu__DOT__mem_rw = (1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read)));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index 
        = (0x1fU & ((vlSelf->top__DOT__cpu__DOT__current_pc 
                     >> 2U) ^ (IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR)));
    vlSelf->top__DOT__cpu__DOT__is_ready = (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_input 
        = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
           >> 8U);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
           >> 0x19U);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs1_mem_to_ex_forward 
        = (((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
            & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
               == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write));
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs1_wb_to_ex_forward 
        = (((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
            & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
               == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write));
    vlSelf->top__DOT__cpu__DOT__ForwardA_sel = ((IData)(vlSelf->top__DOT__cpu__DOT__FU__DOT__rs1_mem_to_ex_forward)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__cpu__DOT__FU__DOT__rs1_wb_to_ex_forward)
                                                  ? 2U
                                                  : 0U));
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__is_jal = Vtop__ConstPool__TABLE_hf1f34e79_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__is_jalr = Vtop__ConstPool__TABLE_h4390399c_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__branch = Vtop__ConstPool__TABLE_he4685dc5_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_ha96ed2bf_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src = Vtop__ConstPool__TABLE_h22a62afa_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__reg_write = Vtop__ConstPool__TABLE_he94ab748_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = Vtop__ConstPool__TABLE_hbd434190_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_hcf214628_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs2_mem_to_ex_forward 
        = (((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
            & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
               == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write));
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs2_wb_to_ex_forward 
        = (((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
            & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
               == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write));
    vlSelf->top__DOT__cpu__DOT__ForwardB_sel = ((IData)(vlSelf->top__DOT__cpu__DOT__FU__DOT__rs2_mem_to_ex_forward)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__cpu__DOT__FU__DOT__rs2_wb_to_ex_forward)
                                                  ? 2U
                                                  : 0U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input 
        = (0xfU & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                   >> 4U));
    vlSelf->top__DOT__cpu__DOT__in1_alu_out = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg)
                                                ? ((IData)(4U) 
                                                   + vlSelf->top__DOT__cpu__DOT__EX_MEM_pc)
                                                : vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out);
    vlSelf->top__DOT__cpu__DOT__rd_din = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                           ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
                                           : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1);
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__BHSR 
        = vlSelf->top__DOT__cpu__DOT__BHSR;
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__mem_rw_32;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__ID_EX_tag 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_tag;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = vlSelf->top__DOT__cpu__DOT__rd;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__imem_out = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__ID_EX_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__ID_EX_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__ID_EX_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0 
        = (((- (IData)((vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_I));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch) 
           | (IData)(vlSelf->__VdfgTmp_h69e9d136__0));
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = vlSelf->top__DOT__cpu__DOT__rs2;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__rs2 = vlSelf->top__DOT__cpu__DOT__rs2;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__rs2 = vlSelf->top__DOT__cpu__DOT__rs2;
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs2];
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pc_imm 
        = vlSelf->top__DOT__cpu__DOT__pc_imm;
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__pc_imm;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__mem_access = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw 
        = vlSelf->top__DOT__cpu__DOT__mem_rw;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__IF_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__IF_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__IF_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_from_table 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table
        [vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index];
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table
        [vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_output_is_valid 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__is_ready));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7) 
            << 0xaU) | (((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                         << 7U) | (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)));
    __Vtableidx2 = (((0x6fU == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)) 
                     << 0xbU) | (((0x67U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)) 
                                  << 0xaU) | (((0x63U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)) 
                                               << 9U) 
                                              | (((0x23U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)) 
                                                  << 8U) 
                                                 | (((3U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)) 
                                                     << 7U) 
                                                    | (((0x13U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)) 
                                                        << 6U) 
                                                       | (((0x20U 
                                                            == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7)) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                                                              << 2U) 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7)) 
                                                                 << 1U) 
                                                                | (0x33U 
                                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode)))))))))));
    vlSelf->top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_h912387bc_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ForwardA = vlSelf->top__DOT__cpu__DOT__ForwardA_sel;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ForwardA_sel;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelf->top__DOT__cpu__DOT__is_jal;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelf->top__DOT__cpu__DOT__is_jalr;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch 
        = vlSelf->top__DOT__cpu__DOT__branch;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
        = vlSelf->top__DOT__cpu__DOT__alu_src;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__reg_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg 
        = vlSelf->top__DOT__cpu__DOT__pc_to_reg;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__mux_rs1_sel = (((0x11U 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__is_ecall))
                                                ? 2U
                                                : 1U);
    vlSelf->top__DOT__cpu__DOT__rs1 = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall)
                                        ? 0x11U : (0x1fU 
                                                   & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU)));
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ForwardB = vlSelf->top__DOT__cpu__DOT__ForwardB_sel;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ForwardB_sel;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_stored 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input][0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input][1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input][2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input][3U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_stored 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_stored 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input];
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__in1_alu_out;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__in1_alu_out;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__in1_alu_out;
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__mux_rd_din = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__cpu__DOT__MEM_WB_pc)
                                               : vlSelf->top__DOT__cpu__DOT__rd_din);
    vlSelf->top__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__print_reg[0x10U] = vlSelf->print_reg
        [0x10U];
    vlSelf->top__DOT__print_reg[0x11U] = vlSelf->print_reg
        [0x11U];
    vlSelf->top__DOT__print_reg[0x12U] = vlSelf->print_reg
        [0x12U];
    vlSelf->top__DOT__print_reg[0x13U] = vlSelf->print_reg
        [0x13U];
    vlSelf->top__DOT__print_reg[0x14U] = vlSelf->print_reg
        [0x14U];
    vlSelf->top__DOT__print_reg[0x15U] = vlSelf->print_reg
        [0x15U];
    vlSelf->top__DOT__print_reg[0x16U] = vlSelf->print_reg
        [0x16U];
    vlSelf->top__DOT__print_reg[0x17U] = vlSelf->print_reg
        [0x17U];
    vlSelf->top__DOT__print_reg[0x18U] = vlSelf->print_reg
        [0x18U];
    vlSelf->top__DOT__print_reg[0x19U] = vlSelf->print_reg
        [0x19U];
    vlSelf->top__DOT__print_reg[0x1aU] = vlSelf->print_reg
        [0x1aU];
    vlSelf->top__DOT__print_reg[0x1bU] = vlSelf->print_reg
        [0x1bU];
    vlSelf->top__DOT__print_reg[0x1cU] = vlSelf->print_reg
        [0x1cU];
    vlSelf->top__DOT__print_reg[0x1dU] = vlSelf->print_reg
        [0x1dU];
    vlSelf->top__DOT__print_reg[0x1eU] = vlSelf->print_reg
        [0x1eU];
    vlSelf->top__DOT__print_reg[0x1fU] = vlSelf->print_reg
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__cpu__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__cpu__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__cpu__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__cpu__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__cpu__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__cpu__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__cpu__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__cpu__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__cpu__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x10U] = 
        vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x11U] = 
        vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x12U] = 
        vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x13U] = 
        vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x14U] = 
        vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x15U] = 
        vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x16U] = 
        vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x17U] = 
        vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x18U] = 
        vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x19U] = 
        vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1aU] = 
        vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1bU] = 
        vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1cU] = 
        vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1dU] = 
        vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1eU] = 
        vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1fU] = 
        vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__imem_out;
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x40U 
                                                & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0x15U) 
                                                         | (vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_J 
                                                            << 1U))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0xdU) 
                                                         | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_B))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_S))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0
                                                        : 0U)
                                                       : 0U)))));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__update_counter 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__update_bhsr 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__corresponding_tag 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_from_table;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_tag_match 
        = (vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_tag 
           == vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_from_table);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_out 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_btb_output_valid 
        = (0U != vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_output_is_valid;
    vlSelf->top__DOT__cpu__DOT__is_output_valid = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT___is_output_valid) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_output_is_valid));
    if (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_output_is_valid) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[0U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[1U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[2U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[3U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][3U];
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[3U] = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__mux_rs1_sel 
        = vlSelf->top__DOT__cpu__DOT__mux_rs1_sel;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__mux_rs1_sel;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__rs1 = vlSelf->top__DOT__cpu__DOT__rs1;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__rs1 = vlSelf->top__DOT__cpu__DOT__rs1;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_load_hazard 
        = ((((IData)(vlSelf->top__DOT__cpu__DOT__rs1) 
             == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
            | ((IData)(vlSelf->top__DOT__cpu__DOT__rs2) 
               == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd))) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read));
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_ecall_hazard 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
           & ((0x11U == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
              | ((0x11U == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
                 & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read))));
    vlSelf->top__DOT__cpu__DOT__is_stall = (((IData)(vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_load_hazard) 
                                             | (IData)(vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_ecall_hazard))
                                             ? 1U : 0U);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_tag_match 
        = (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_stored 
           == vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_input);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
    vlSelf->top__DOT__cpu__DOT__in2_rd_din = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
    vlSelf->top__DOT__cpu__DOT__forwarding_rs2_dout 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__mux_rs2_sel)
            ? vlSelf->top__DOT__cpu__DOT__rs2_dout : vlSelf->top__DOT__cpu__DOT__mux_rd_din);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ForwardA_sel))
                                             ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__ForwardA_sel))
                                                 ? vlSelf->top__DOT__cpu__DOT__in1_alu_out
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__ForwardA_sel))
                                                  ? vlSelf->top__DOT__cpu__DOT__mux_rd_din
                                                  : 0U)));
    vlSelf->top__DOT__cpu__DOT__forWard_B_out = ((0U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__ForwardB_sel))
                                                  ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__ForwardB_sel))
                                                   ? vlSelf->top__DOT__cpu__DOT__in1_alu_out
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__ForwardB_sel))
                                                    ? vlSelf->top__DOT__cpu__DOT__mux_rd_din
                                                    : 0U)));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__predicted_pc = ((((IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_tag_match) 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pred_taken)) 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_btb_output_valid))
                                                 ? vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__cpu__DOT__current_pc));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelf->top__DOT__cpu__DOT__is_output_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[3U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[3U];
    if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__offset_input))) {
        if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__offset_input))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_read_from_cache 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[3U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[3U] 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
        } else {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_read_from_cache 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[2U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[2U] 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__offset_input))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_read_from_cache 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[1U] 
            = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_read_from_cache 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[0U] 
            = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    }
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = 
        (1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__is_stall)));
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_stall 
        = vlSelf->top__DOT__cpu__DOT__is_stall;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout 
        = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__mux_rs1_sel))
            ? vlSelf->top__DOT__cpu__DOT__mux_rd_din
            : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__mux_rs1_sel))
                ? vlSelf->top__DOT__cpu__DOT__rs1_dout
                : ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__mux_rs1_sel))
                    ? vlSelf->top__DOT__cpu__DOT__in1_alu_out
                    : 0U)));
    vlSelf->is_hit = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_tag_match) 
                      & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_stored));
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__forwarding_rs2_dout;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__forWard_B_out;
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__forWard_B_out;
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src)
                                             ? vlSelf->top__DOT__cpu__DOT__ID_EX_imm
                                             : vlSelf->top__DOT__cpu__DOT__forWard_B_out);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predicted_pc 
        = vlSelf->top__DOT__cpu__DOT__predicted_pc;
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__predicted_pc;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout;
    vlSelf->top__DOT__cpu__DOT__check_is_halted = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                                                   & ((0xaU 
                                                       == vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout) 
                                                      & (0x11U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__rs1))));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_cache_hit 
        = vlSelf->is_hit;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_valid = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_enable = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_tobe_cache = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_enable = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
        if ((1U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
            if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
                if (vlSelf->top__DOT__cpu__DOT__is_ready) {
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[0U] 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[0U];
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[1U] 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[1U];
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[2U] 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[2U];
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[3U] 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output[3U];
                }
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
            if (vlSelf->is_hit) {
                if (vlSelf->top__DOT__cpu__DOT__mem_rw) {
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_valid = 1U;
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_enable = 1U;
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_tobe_cache 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_stored;
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_enable = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_valid = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_enable = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_tobe_cache 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_stored;
            if (vlSelf->top__DOT__cpu__DOT__is_ready) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_enable = 1U;
            }
        }
    }
    vlSelf->top__DOT__is_hit = vlSelf->is_hit;
    vlSelf->top__DOT__cpu__DOT__cache_stall = ((~ ((IData)(vlSelf->top__DOT__cpu__DOT__is_ready) 
                                                   & ((IData)(vlSelf->is_hit) 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid)))) 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid));
    vlSelf->is_miss = (1U & (~ (IData)(vlSelf->is_hit)));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_dirty = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage 
            = ((IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
        if (vlSelf->is_hit) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 0U;
            if (vlSelf->top__DOT__cpu__DOT__mem_rw) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_dirty = 1U;
            }
        } else if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_dirty) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address 
                = (((vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_input 
                     << 8U) | (0xffU & vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out)) 
                   << (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2));
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 3U;
        } else {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address 
                = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                   << (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2));
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_dirty 
            = vlSelf->top__DOT__cpu__DOT__mem_rw;
        if (vlSelf->top__DOT__cpu__DOT__is_ready) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 1U;
        } else {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 2U;
        }
    } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage))) {
        if (vlSelf->top__DOT__cpu__DOT__is_ready) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address 
                = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                   << (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2));
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 2U;
        } else {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = 3U;
        }
    }
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
    vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
    if ((0x10U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)))) {
                        vlSelf->top__DOT__cpu__DOT__alu_result 
                            = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                               >> (0x1fU & vlSelf->top__DOT__cpu__DOT__alu_in_2));
                    }
                } else {
                    vlSelf->top__DOT__cpu__DOT__alu_result 
                        = ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                            ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                               << (0x1fU & vlSelf->top__DOT__cpu__DOT__alu_in_2))
                            : (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                               >> (0x1fU & vlSelf->top__DOT__cpu__DOT__alu_in_2)));
                }
            }
            if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)))) {
                        vlSelf->top__DOT__cpu__DOT__alu_bcond 
                            = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                               >= vlSelf->top__DOT__cpu__DOT__alu_in_2);
                    }
                } else {
                    vlSelf->top__DOT__cpu__DOT__alu_bcond 
                        = ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                            ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                               < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                               != vlSelf->top__DOT__cpu__DOT__alu_in_2));
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                    vlSelf->top__DOT__cpu__DOT__alu_bcond 
                        = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                           == vlSelf->top__DOT__cpu__DOT__alu_in_2);
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu__DOT__alu_result = ((8U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__cpu__DOT__alu_in_2))
                                                      : 
                                                     (~ 
                                                      (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                       ^ vlSelf->top__DOT__cpu__DOT__alu_in_2)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      ^ vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                      : 
                                                     (~ 
                                                      (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                       | vlSelf->top__DOT__cpu__DOT__alu_in_2))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (~ 
                                                      (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                       & vlSelf->top__DOT__cpu__DOT__alu_in_2))
                                                      : 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      | vlSelf->top__DOT__cpu__DOT__alu_in_2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                      : 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__cpu__DOT__alu_in_1)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (~ vlSelf->top__DOT__cpu__DOT__alu_in_1)
                                                      : 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      - (IData)(1U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + vlSelf->top__DOT__cpu__DOT__alu_in_1)
                                                      : 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      - vlSelf->top__DOT__cpu__DOT__alu_in_2)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      + vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                      : vlSelf->top__DOT__cpu__DOT__alu_in_1)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 1U
                                                      : 0U))));
    }
    vlSelf->top__DOT__cpu__DOT__is_hit = vlSelf->top__DOT__is_hit;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__cache_stall 
        = vlSelf->top__DOT__cpu__DOT__cache_stall;
    vlSelf->top__DOT__is_miss = vlSelf->is_miss;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read) 
            | (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write)) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT____Vcellinp__btb__ID_EX_pc 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr)
            ? vlSelf->top__DOT__cpu__DOT__alu_result
            : vlSelf->top__DOT__cpu__DOT__pc_imm);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__alu_bcond;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__alu_bcond;
    vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__alu_bcond));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit 
        = vlSelf->top__DOT__cpu__DOT__is_hit;
    vlSelf->top__DOT__cpu__DOT__is_miss = vlSelf->top__DOT__is_miss;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__ID_EX_pc 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT____Vcellinp__btb__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_branch_taken 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken;
    vlSelf->top__DOT__cpu__DOT__branch_or_jmp = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken) 
                                                 | (IData)(vlSelf->__VdfgTmp_h69e9d136__0));
    vlSelf->top__DOT__cpu__DOT__correct_pc = ((4U == 
                                               (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken))))
                                               ? vlSelf->top__DOT__cpu__DOT__alu_result
                                               : ((2U 
                                                   == 
                                                   (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken))))
                                                   ? vlSelf->top__DOT__cpu__DOT__pc_imm
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken))))
                                                    ? vlSelf->top__DOT__cpu__DOT__pc_imm
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__cpu__DOT__ID_EX_pc))));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_miss 
        = vlSelf->top__DOT__cpu__DOT__is_miss;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__branch_or_jmp 
        = vlSelf->top__DOT__cpu__DOT__branch_or_jmp;
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__correct_pc;
    vlSelf->top__DOT__cpu__DOT__is_correct = 1U;
    if (((0U != vlSelf->top__DOT__cpu__DOT__ID_EX_pc) 
         & (vlSelf->top__DOT__cpu__DOT__IF_ID_pc != vlSelf->top__DOT__cpu__DOT__correct_pc))) {
        vlSelf->top__DOT__cpu__DOT__is_correct = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__update_tag 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__branch_or_jmp;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__actually_taken 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__branch_or_jmp;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__update_table 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__branch_or_jmp;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__branch_or_jump 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__branch_or_jmp;
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__is_correct;
    vlSelf->top__DOT__cpu__DOT__is_flush = (1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__is_correct)));
    vlSelf->top__DOT__cpu__DOT__next_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__is_correct)
                                            ? vlSelf->top__DOT__cpu__DOT__predicted_pc
                                            : vlSelf->top__DOT__cpu__DOT__correct_pc);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->is_hit = VL_RAND_RESET_I(1);
    vlSelf->is_miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__func_code = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__check_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ForwardA_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ForwardB_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forWard_B_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_rs1_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_rs2_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwarding_rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__in1_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__in2_rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_rw_32 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_rw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_access = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_or_jmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__predicted_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__correct_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_correct = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__cache_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__branch_or_jmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pc_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predicted_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_from_table = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_tag_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pred_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_btb_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT____Vcellinp__btb__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__IF_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__ID_EX_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__ID_EX_tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__update_tag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__corresponding_tag = VL_RAND_RESET_I(25);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[__Vi0] = VL_RAND_RESET_I(25);
    }
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__actually_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__IF_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__ID_EX_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__update_counter = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__pred_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__IF_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__ID_EX_btb_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__update_table = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__branch_or_jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__update_bhsr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__IF_BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_I = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_S = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_B = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_J = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_input = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__offset_input = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_stored);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_stored = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_stored = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_stored = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_tag_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_cache_hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_tobe_cache = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_read_from_cache = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_read_from_cache = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT___is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_input_is_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_output_is_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_output);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__ways = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vi0]);
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__EX_MEM_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ForwardA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ForwardB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs1_mem_to_ex_forward = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs1_wb_to_ex_forward = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs2_mem_to_ex_forward = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__rs2_wb_to_ex_forward = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__mux_rs1_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__mux_rs2_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__in3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_load_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_ecall_hazard = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h69e9d136__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
