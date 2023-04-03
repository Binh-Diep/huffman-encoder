// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"data_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"input_text_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+101,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"total_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+103,"BIT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+104,"MAX_SYM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+98,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"data_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"input_text_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+101,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"total_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+103,"BIT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+104,"MAX_SYM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+98,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"data_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"input_text_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+101,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"total_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+1,"tmp_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"tmp_send",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"tmp_text",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+4,"tmp_length_check",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,"tmp_count_check",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("huffman_input ");
    tracep->declBus(c+103,"BIT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+104,"MAX_CHAR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+104,"MAX_SYM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+105,"F",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+103,"BIT_FREQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+106,"BIT_SYMBOL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+107,"ELEMENT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+98,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"data_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"input_text_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+2,"send_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"output_text_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"length_check",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+5,"count_check",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,"N",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"sort_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,"sort_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,"format_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,"format_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,"format_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,"huffman_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,"huffman_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,"bintree_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,"bintree_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,"pairlist_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+18,"pairlist_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+19,"sortlist_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,"sortlist_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,"encode_leaf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,"encode_pair",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+23,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+24,"huffcode_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,"hufftext_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,"hufftext_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,"send_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,"send_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,"input_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    {
        const char* __VenumItemNames[]
        = {"INIT", "GET_DATA", "LOAD", "SORT", "FORMAT", 
                                "LEAF_NODE", "BIN_TREE", 
                                "PAIR_LIST", "SORT_LIST", 
                                "PRE_ENCODE", "ENCODE", 
                                "HUFFCODE", "HUFFTEXT", 
                                "SEND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101"};
        tracep->declDTypeEnum(1, "data_input.state_e", 14, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+30,"current_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+31,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("huffman_output ");
    tracep->declBus(c+104,"MAX_SYM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+103,"BIT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+109,"SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+110,"MAX_TEXT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+109,"TEXT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+98,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"receive_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"finish_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"text_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"length_check",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+5,"count_check",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+101,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"total_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+32,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declArray(c+33,"text",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+65+i*1,"container",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    {
        const char* __VenumItemNames[]
        = {"RECEIVE", "CONT", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(2, "data_output.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+97,"current_state",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__dut__DOT__tmp_done));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__dut__DOT__tmp_send));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__dut__DOT__tmp_text));
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__tmp_length_check),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__tmp_count_check),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__n),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__N),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sort_i),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sort_k),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__format_i),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__format_k),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__format_index),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__huffman_i),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__huffman_k),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__bintree_i),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__bintree_k),8);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__pairlist_i),9);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__pairlist_k),9);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sortlist_i),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__sortlist_k),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__encode_leaf),8);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__encode_pair),9);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__state),23);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__huffcode_i),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__hufftext_i),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__hufftext_k),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__send_i),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__send_k),4);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__input_index),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__current_state),4);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__i),10);
    bufp->fullWData(oldp+33,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__text),1024);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[4]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[5]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[6]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[7]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[8]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[9]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[10]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[11]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[12]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[13]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[14]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[15]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[16]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[17]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[18]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[19]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[20]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[21]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[22]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[23]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[24]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[25]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[26]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[27]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[28]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[29]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[30]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__container[31]),32);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__dut__DOT__huffman_output__DOT__current_state),2);
    bufp->fullBit(oldp+98,(vlSelf->clk_i));
    bufp->fullBit(oldp+99,(vlSelf->data_en_i));
    bufp->fullCData(oldp+100,(vlSelf->input_text_i),8);
    bufp->fullBit(oldp+101,(vlSelf->done_o));
    bufp->fullSData(oldp+102,(vlSelf->total_bit),11);
    bufp->fullIData(oldp+103,(8U),32);
    bufp->fullIData(oldp+104,(0xffU),32);
    bufp->fullIData(oldp+105,(0x7f80U),32);
    bufp->fullIData(oldp+106,(0xfU),32);
    bufp->fullIData(oldp+107,(0x17U),32);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__dut__DOT__huffman_input__DOT__count),8);
    bufp->fullIData(oldp+109,(0x20U),32);
    bufp->fullIData(oldp+110,(0x400U),32);
}
