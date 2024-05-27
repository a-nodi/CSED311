// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
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
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_h79137a98_0;
extern const VlUnpacked<CData/*4:0*/, 4096> Vtop__ConstPool__TABLE_h912387bc_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0;
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0 = 0;
    SData/*11:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v0;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 = 0;
    IData/*24:0*/ __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32;
    __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v0;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32;
    __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v0;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32;
    __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 = 0;
    CData/*4:0*/ __Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history;
    __Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16);
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 = 0;
    IData/*23:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0;
    // Body
    __Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v16 = 0U;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 0x10U;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[(0x3fffU 
                                                        & vlSelf->top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_h79137a98_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if (vlSelf->top__DOT__cpu__DOT__branch_or_jmp) {
        __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 
            = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_tag;
        __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32 
            = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
        __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 
            = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT____Vcellinp__btb__ID_EX_pc;
        __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32 
            = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write) 
             & (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U];
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 
                = (0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr);
        }
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__ways = 1U;
    if (vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch) {
        __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 
            = ((2U & vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter
                [vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index])
                ? ((1U & vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter
                    [vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index])
                    ? ((IData)(vlSelf->top__DOT__cpu__DOT__branch_or_jmp)
                        ? 3U : 2U) : ((IData)(vlSelf->top__DOT__cpu__DOT__branch_or_jmp)
                                       ? 3U : 0U)) : 
               ((1U & vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter
                 [vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index])
                 ? ((IData)(vlSelf->top__DOT__cpu__DOT__branch_or_jmp)
                     ? 3U : 0U) : ((IData)(vlSelf->top__DOT__cpu__DOT__branch_or_jmp)
                                    ? 1U : 0U)));
        __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32 
            = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][0U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][1U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][2U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][3U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i);
        }
        __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v0 = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage = 0U;
        __Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history 
            = (0x10U & (IData)(__Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history));
    } else {
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_enable) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_dirty;
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input;
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_write_valid;
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input;
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_write_tobe_cache;
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input;
        }
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_enable) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[0U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[1U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[2U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_write_tobe_cache[3U];
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v16 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input;
        }
        vlSelf->top__DOT__cpu__DOT__cache__DOT__current_stage 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__next_stage;
    }
    if (vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch) {
        __Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history 
            = ((0x1eU & ((IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history) 
                         << 1U)) | (IData)(vlSelf->top__DOT__cpu__DOT__branch_or_jmp));
    }
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pred_taken 
        = (1U & (vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter
                 [vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index] 
                 >> 1U));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history;
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_branch = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = vlSelf->top__DOT__cpu__DOT__is_jal;
        vlSelf->top__DOT__cpu__DOT__ID_EX_branch = vlSelf->top__DOT__cpu__DOT__branch;
        vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR = vlSelf->top__DOT__cpu__DOT__IF_ID_BHSR;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelf->top__DOT__cpu__DOT__forwarding_rs2_dout;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = vlSelf->top__DOT__cpu__DOT__is_jalr;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = vlSelf->top__DOT__cpu__DOT__rs1;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = vlSelf->top__DOT__cpu__DOT__rs2;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = vlSelf->top__DOT__cpu__DOT__alu_src;
        vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
            = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data 
            = vlSelf->top__DOT__cpu__DOT__forWard_B_out;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
            = vlSelf->top__DOT__cpu__DOT__dmem_out;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted 
            = vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write 
            = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write;
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write 
            = vlSelf->top__DOT__cpu__DOT__mem_write;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read 
            = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read 
            = vlSelf->top__DOT__cpu__DOT__mem_read;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_pc = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_BHSR = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_pc = vlSelf->top__DOT__cpu__DOT__EX_MEM_pc;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted;
        }
        if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived) 
             & (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0x32U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_read;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_is_write;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_address;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[0U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[1U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[2U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_data_input[3U];
        } else if ((0U < vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter)) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                = (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                   - (IData)(1U));
        } else {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall))))) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_BHSR 
                = vlSelf->top__DOT__cpu__DOT__BHSR;
        }
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted 
            = vlSelf->top__DOT__cpu__DOT__check_is_halted;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg 
            = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg;
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg 
            = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg 
            = vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg;
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg 
            = vlSelf->top__DOT__cpu__DOT__pc_to_reg;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
            = vlSelf->top__DOT__cpu__DOT__alu_result;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = (0x1fU 
                                                & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    }
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc = vlSelf->top__DOT__cpu__DOT__IF_ID_pc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_stall)) 
                      & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall))))) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst = vlSelf->top__DOT__cpu__DOT__imem_out;
        vlSelf->top__DOT__cpu__DOT__IF_ID_pc = vlSelf->top__DOT__cpu__DOT__current_pc;
        vlSelf->top__DOT__cpu__DOT__current_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v0) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[1U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[2U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[3U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[4U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[5U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[6U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[7U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[8U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[9U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0xaU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0xbU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0xcU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0xdU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0xeU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0xfU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x10U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x11U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x12U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x13U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x14U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x15U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x16U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x17U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x18U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x19U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x1aU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x1bU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x1cU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x1dU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x1eU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[0x1fU] = 0x1ffffffU;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table[__Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT___tag_table__v32;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[0xfU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__dirty_storage__v16;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v0) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table[__Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_table__v32;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[3U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[4U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[4U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[4U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[4U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[5U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[5U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[5U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[5U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[6U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[6U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[6U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[6U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[7U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[7U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[7U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[7U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[8U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[8U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[8U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[8U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[9U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[9U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[9U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[9U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xaU][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xaU][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xaU][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xaU][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xbU][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xbU][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xbU][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xbU][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xcU][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xcU][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xcU][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xcU][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xdU][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xdU][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xdU][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xdU][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xeU][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xeU][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xeU][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xeU][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xfU][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xfU][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xfU][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[0xfU][3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_storage__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_storage__v16][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_storage__v16[3U];
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[0xfU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__valid_storage__v16;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[0xfU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_storage[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag_storage__v16;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v0) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32) {
        vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter[__Vdlyvdim0__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__counter__v32;
    }
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history 
        = __Vdly__top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT___branch_history;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__pred_taken 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pred_taken;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__IF_BHSR 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_is_jal 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_branch 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_branch;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_BHSR 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_is_jalr 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelf->__VdfgTmp_h69e9d136__0 = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal) 
                                      | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr));
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ID_EX_rs1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ID_EX_rs2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__mux_ID_EX_alu_src__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelf->is_halted = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted;
    if (vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read) {
        vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_mem_read = 1U;
        vlSelf->top__DOT__cpu__DOT__mem_rw_32 = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_rw_32 = 1U;
    }
    vlSelf->top__DOT__cpu__DOT__is_input_valid = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read) 
                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelf->top__DOT__cpu__DOT__mem_rw = (1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read)));
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
           >> 0x19U);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input);
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__rd_din = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                           ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
                                           : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1);
    vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_rd 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    vlSelf->top__DOT__cpu__DOT__BHSR = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch) 
           | (IData)(vlSelf->__VdfgTmp_h69e9d136__0));
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__mem_rw_32_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__mem_rw_32;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__mem_access = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw 
        = vlSelf->top__DOT__cpu__DOT__mem_rw;
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
    vlSelf->top__DOT__cpu__DOT__mux_mem_to_reg__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__is_ready = (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__BHSR 
        = vlSelf->top__DOT__cpu__DOT__BHSR;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__update_counter 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__bhsr__DOT__update_bhsr 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__try_to_branch;
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__ID_EX_mem_read 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__offset_input 
        = (3U & vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_input 
        = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
           >> 8U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__index_input 
        = (0xfU & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                   >> 4U));
    vlSelf->top__DOT__cpu__DOT__FU__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__in1_alu_out = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg)
                                                ? ((IData)(4U) 
                                                   + vlSelf->top__DOT__cpu__DOT__EX_MEM_pc)
                                                : vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_memory_output_is_valid 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__is_ready));
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
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_tag_match 
        = (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_stored 
           == vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_input);
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__ID_EX_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_pc 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_tag 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index 
        = (0x1fU & ((vlSelf->top__DOT__cpu__DOT__ID_EX_pc 
                     >> 2U) ^ (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_BHSR)));
    vlSelf->top__DOT__cpu__DOT__pc_imm = (vlSelf->top__DOT__cpu__DOT__ID_EX_imm 
                                          + vlSelf->top__DOT__cpu__DOT__ID_EX_pc);
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
    vlSelf->is_hit = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_tag_match) 
                      & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_stored));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__ID_EX_tag 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_tag;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__ID_EX_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predictor__DOT__ID_EX_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__ID_EX_btb_index 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__ID_EX_btb_index;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pc_imm 
        = vlSelf->top__DOT__cpu__DOT__pc_imm;
    vlSelf->top__DOT__cpu__DOT__adder_pc_imm__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__pc_imm;
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
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
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
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_I 
        = (vlSelf->top__DOT__cpu__DOT__IF_ID_inst >> 0x14U);
    vlSelf->top__DOT__cpu__DOT__rs2 = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__is_hit = vlSelf->top__DOT__is_hit;
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
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_h9abc89ab__0 
        = (((- (IData)((vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_I));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = vlSelf->top__DOT__cpu__DOT__rs2;
    vlSelf->top__DOT__cpu__DOT__FEU__DOT__rs2 = vlSelf->top__DOT__cpu__DOT__rs2;
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__rs2 = vlSelf->top__DOT__cpu__DOT__rs2;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit 
        = vlSelf->top__DOT__cpu__DOT__is_hit;
    vlSelf->top__DOT__cpu__DOT__is_miss = vlSelf->top__DOT__is_miss;
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
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_tag 
        = (vlSelf->top__DOT__cpu__DOT__current_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_btb_index 
        = (0x1fU & ((vlSelf->top__DOT__cpu__DOT__current_pc 
                     >> 2U) ^ (IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_BHSR)));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_miss 
        = vlSelf->top__DOT__cpu__DOT__is_miss;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__imem_out = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
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
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__imem_out;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_table__DOT__corresponding_tag 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_from_table;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_tag_match 
        = (vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__IF_tag 
           == vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__tag_from_table);
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__btb__DOT__target_out 
        = vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out;
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_btb_output_valid 
        = (0U != vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out);
    vlSelf->top__DOT__cpu__DOT__predicted_pc = ((((IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_tag_match) 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__pred_taken)) 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__is_btb_output_valid))
                                                 ? vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__target_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__cpu__DOT__current_pc));
    vlSelf->top__DOT__cpu__DOT__PC_predict__DOT__predicted_pc 
        = vlSelf->top__DOT__cpu__DOT__predicted_pc;
    vlSelf->top__DOT__cpu__DOT__mux_next_pc__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__predicted_pc;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelf->clk) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
            __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__rd)))) {
        __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__mux_rd_din;
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__rd;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    }
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
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf1f34e79_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4390399c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h22a62afa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he94ab748_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hcf214628_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__rd = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__mux_rd_din = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__cpu__DOT__MEM_WB_pc)
                                               : vlSelf->top__DOT__cpu__DOT__rd_din);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = vlSelf->top__DOT__cpu__DOT__rd;
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_RegWrite 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
            vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
        }
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__FU__DOT__MEM_WB_RegWrite 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    }
    vlSelf->top__DOT__cpu__DOT__FU__DOT__EX_MEM_RegWrite 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
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
    if (((((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__cpu__DOT__is_stall) 
                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__is_flush))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write 
            = vlSelf->top__DOT__cpu__DOT__reg_write;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_stall)) 
                      & (~ (IData)(vlSelf->top__DOT__cpu__DOT__cache_stall))))) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_is_flush 
            = vlSelf->top__DOT__cpu__DOT__is_flush;
    }
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ForwardA = vlSelf->top__DOT__cpu__DOT__ForwardA_sel;
    vlSelf->top__DOT__cpu__DOT__mux_forward_A__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ForwardA_sel;
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
    vlSelf->top__DOT__cpu__DOT__FU__DOT__ForwardB = vlSelf->top__DOT__cpu__DOT__ForwardB_sel;
    vlSelf->top__DOT__cpu__DOT__mux_forward_B__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ForwardB_sel;
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
    vlSelf->top__DOT__cpu__DOT__cache_stall = ((~ ((IData)(vlSelf->top__DOT__cpu__DOT__is_ready) 
                                                   & ((IData)(vlSelf->is_hit) 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid)))) 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid));
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
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = 
        (1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__is_stall)));
    vlSelf->top__DOT__cpu__DOT__HDU__DOT__is_stall 
        = vlSelf->top__DOT__cpu__DOT__is_stall;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__cache_stall 
        = vlSelf->top__DOT__cpu__DOT__cache_stall;
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs2];
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__forwarding_rs2_dout 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__mux_rs2_sel)
            ? vlSelf->top__DOT__cpu__DOT__rs2_dout : vlSelf->top__DOT__cpu__DOT__mux_rd_din);
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
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs2_dout__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__forwarding_rs2_dout;
    vlSelf->top__DOT__cpu__DOT__Mux_forwarding_rs1_dout__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout;
    vlSelf->top__DOT__cpu__DOT__check_is_halted = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                                                   & ((0xaU 
                                                       == vlSelf->top__DOT__cpu__DOT__forwarding_rs1_dout) 
                                                      & (0x11U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__rs1))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
