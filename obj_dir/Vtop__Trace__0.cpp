// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__tmp_done));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__tmp_send));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__tmp_text));
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__tmp_length_check),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__tmp_count_check),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__n),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__N),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sort_i),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sort_k),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__format_i),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__format_k),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__format_index),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__huffman_i),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__huffman_k),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__bintree_i),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__bintree_k),8);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__pairlist_i),9);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__pairlist_k),9);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sortlist_i),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sortlist_k),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__encode_leaf),8);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__encode_pair),9);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__state),23);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__huffcode_i),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__hufftext_i),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__hufftext_k),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__send_i),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__send_k),4);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__input_index),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__current_state),4);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__i),10);
        bufp->chgWData(oldp+32,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__text),1024);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[0]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[1]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[2]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[3]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[4]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[5]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[6]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[7]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[8]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[9]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[10]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[11]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[12]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[13]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[14]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[15]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[16]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[17]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[18]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[19]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[20]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[21]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[22]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[23]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[24]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[25]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[26]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[27]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[28]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[29]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[30]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[31]),32);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__current_state),2);
    }
    bufp->chgBit(oldp+97,(vlSelf->clk_i));
    bufp->chgBit(oldp+98,(vlSelf->data_en_i));
    bufp->chgCData(oldp+99,(vlSelf->input_text_i),8);
    bufp->chgBit(oldp+100,(vlSelf->done_o));
    bufp->chgSData(oldp+101,(vlSelf->total_bit),11);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
