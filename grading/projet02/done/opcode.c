/**
 * @file opcode.c
 * @brief Instruction opcodes for PPS-GBemul project
 *
 * @date 2020
 */

#include <stdio.h>

#define EPFL_PPS_GBEMUL_OPCODE_C
#include "opcode.h"

// Game Boy CPU PREFIXED instructions ordered by OpCode
const instruction_t instruction_prefixed[] = {
    OP_RLC_B,
    OP_RLC_C,
    OP_RLC_D,
    OP_RLC_E,
    OP_RLC_H,
    OP_RLC_L,
    OP_RLC_HLR,
    OP_RLC_A,
    OP_RRC_B,
    OP_RRC_C,
    OP_RRC_D,
    OP_RRC_E,
    OP_RRC_H,
    OP_RRC_L,
    OP_RRC_HLR,
    OP_RRC_A,
    OP_RL_B,
    OP_RL_C,
    OP_RL_D,
    OP_RL_E,
    OP_RL_H,
    OP_RL_L,
    OP_RL_HLR,
    OP_RL_A,
    OP_RR_B,
    OP_RR_C,
    OP_RR_D,
    OP_RR_E,
    OP_RR_H,
    OP_RR_L,
    OP_RR_HLR,
    OP_RR_A,
    OP_SLA_B,
    OP_SLA_C,
    OP_SLA_D,
    OP_SLA_E,
    OP_SLA_H,
    OP_SLA_L,
    OP_SLA_HLR,
    OP_SLA_A,
    OP_SRA_B,
    OP_SRA_C,
    OP_SRA_D,
    OP_SRA_E,
    OP_SRA_H,
    OP_SRA_L,
    OP_SRA_HLR,
    OP_SRA_A,
    OP_SWAP_B,
    OP_SWAP_C,
    OP_SWAP_D,
    OP_SWAP_E,
    OP_SWAP_H,
    OP_SWAP_L,
    OP_SWAP_HLR,
    OP_SWAP_A,
    OP_SRL_B,
    OP_SRL_C,
    OP_SRL_D,
    OP_SRL_E,
    OP_SRL_H,
    OP_SRL_L,
    OP_SRL_HLR,
    OP_SRL_A,
    OP_BIT_0_B,
    OP_BIT_0_C,
    OP_BIT_0_D,
    OP_BIT_0_E,
    OP_BIT_0_H,
    OP_BIT_0_L,
    OP_BIT_0_HLR,
    OP_BIT_0_A,
    OP_BIT_1_B,
    OP_BIT_1_C,
    OP_BIT_1_D,
    OP_BIT_1_E,
    OP_BIT_1_H,
    OP_BIT_1_L,
    OP_BIT_1_HLR,
    OP_BIT_1_A,
    OP_BIT_2_B,
    OP_BIT_2_C,
    OP_BIT_2_D,
    OP_BIT_2_E,
    OP_BIT_2_H,
    OP_BIT_2_L,
    OP_BIT_2_HLR,
    OP_BIT_2_A,
    OP_BIT_3_B,
    OP_BIT_3_C,
    OP_BIT_3_D,
    OP_BIT_3_E,
    OP_BIT_3_H,
    OP_BIT_3_L,
    OP_BIT_3_HLR,
    OP_BIT_3_A,
    OP_BIT_4_B,
    OP_BIT_4_C,
    OP_BIT_4_D,
    OP_BIT_4_E,
    OP_BIT_4_H,
    OP_BIT_4_L,
    OP_BIT_4_HLR,
    OP_BIT_4_A,
    OP_BIT_5_B,
    OP_BIT_5_C,
    OP_BIT_5_D,
    OP_BIT_5_E,
    OP_BIT_5_H,
    OP_BIT_5_L,
    OP_BIT_5_HLR,
    OP_BIT_5_A,
    OP_BIT_6_B,
    OP_BIT_6_C,
    OP_BIT_6_D,
    OP_BIT_6_E,
    OP_BIT_6_H,
    OP_BIT_6_L,
    OP_BIT_6_HLR,
    OP_BIT_6_A,
    OP_BIT_7_B,
    OP_BIT_7_C,
    OP_BIT_7_D,
    OP_BIT_7_E,
    OP_BIT_7_H,
    OP_BIT_7_L,
    OP_BIT_7_HLR,
    OP_BIT_7_A,
    OP_RES_0_B,
    OP_RES_0_C,
    OP_RES_0_D,
    OP_RES_0_E,
    OP_RES_0_H,
    OP_RES_0_L,
    OP_RES_0_HLR,
    OP_RES_0_A,
    OP_RES_1_B,
    OP_RES_1_C,
    OP_RES_1_D,
    OP_RES_1_E,
    OP_RES_1_H,
    OP_RES_1_L,
    OP_RES_1_HLR,
    OP_RES_1_A,
    OP_RES_2_B,
    OP_RES_2_C,
    OP_RES_2_D,
    OP_RES_2_E,
    OP_RES_2_H,
    OP_RES_2_L,
    OP_RES_2_HLR,
    OP_RES_2_A,
    OP_RES_3_B,
    OP_RES_3_C,
    OP_RES_3_D,
    OP_RES_3_E,
    OP_RES_3_H,
    OP_RES_3_L,
    OP_RES_3_HLR,
    OP_RES_3_A,
    OP_RES_4_B,
    OP_RES_4_C,
    OP_RES_4_D,
    OP_RES_4_E,
    OP_RES_4_H,
    OP_RES_4_L,
    OP_RES_4_HLR,
    OP_RES_4_A,
    OP_RES_5_B,
    OP_RES_5_C,
    OP_RES_5_D,
    OP_RES_5_E,
    OP_RES_5_H,
    OP_RES_5_L,
    OP_RES_5_HLR,
    OP_RES_5_A,
    OP_RES_6_B,
    OP_RES_6_C,
    OP_RES_6_D,
    OP_RES_6_E,
    OP_RES_6_H,
    OP_RES_6_L,
    OP_RES_6_HLR,
    OP_RES_6_A,
    OP_RES_7_B,
    OP_RES_7_C,
    OP_RES_7_D,
    OP_RES_7_E,
    OP_RES_7_H,
    OP_RES_7_L,
    OP_RES_7_HLR,
    OP_RES_7_A,
    OP_SET_0_B,
    OP_SET_0_C,
    OP_SET_0_D,
    OP_SET_0_E,
    OP_SET_0_H,
    OP_SET_0_L,
    OP_SET_0_HLR,
    OP_SET_0_A,
    OP_SET_1_B,
    OP_SET_1_C,
    OP_SET_1_D,
    OP_SET_1_E,
    OP_SET_1_H,
    OP_SET_1_L,
    OP_SET_1_HLR,
    OP_SET_1_A,
    OP_SET_2_B,
    OP_SET_2_C,
    OP_SET_2_D,
    OP_SET_2_E,
    OP_SET_2_H,
    OP_SET_2_L,
    OP_SET_2_HLR,
    OP_SET_2_A,
    OP_SET_3_B,
    OP_SET_3_C,
    OP_SET_3_D,
    OP_SET_3_E,
    OP_SET_3_H,
    OP_SET_3_L,
    OP_SET_3_HLR,
    OP_SET_3_A,
    OP_SET_4_B,
    OP_SET_4_C,
    OP_SET_4_D,
    OP_SET_4_E,
    OP_SET_4_H,
    OP_SET_4_L,
    OP_SET_4_HLR,
    OP_SET_4_A,
    OP_SET_5_B,
    OP_SET_5_C,
    OP_SET_5_D,
    OP_SET_5_E,
    OP_SET_5_H,
    OP_SET_5_L,
    OP_SET_5_HLR,
    OP_SET_5_A,
    OP_SET_6_B,
    OP_SET_6_C,
    OP_SET_6_D,
    OP_SET_6_E,
    OP_SET_6_H,
    OP_SET_6_L,
    OP_SET_6_HLR,
    OP_SET_6_A,
    OP_SET_7_B,
    OP_SET_7_C,
    OP_SET_7_D,
    OP_SET_7_E,
    OP_SET_7_H,
    OP_SET_7_L,
    OP_SET_7_HLR,
    OP_SET_7_A
};

// Game Boy CPU DIRECT instructions ordered by OpCode
const instruction_t instruction_direct[] = {
    OP_NOP,
    OP_LD_BC_N16,
    OP_LD_BCR_A,
    OP_INC_BC,
    OP_INC_B,
    OP_DEC_B,
    OP_LD_B_N8,
    OP_RLCA,
    OP_LD_N16R_SP,
    OP_ADD_HL_BC,
    OP_LD_A_BCR,
    OP_DEC_BC,
    OP_INC_C,
    OP_DEC_C,
    OP_LD_C_N8,
    OP_RRCA,
    OP_STOP,
    OP_LD_DE_N16,
    OP_LD_DER_A,
    OP_INC_DE,
    OP_INC_D,
    OP_DEC_D,
    OP_LD_D_N8,
    OP_RLA,
    OP_JR_E8,
    OP_ADD_HL_DE,
    OP_LD_A_DER,
    OP_DEC_DE,
    OP_INC_E,
    OP_DEC_E,
    OP_LD_E_N8,
    OP_RRA,
    OP_JR_NZ_E8,
    OP_LD_HL_N16,
    OP_LD_HLRI_A,
    OP_INC_HL,
    OP_INC_H,
    OP_DEC_H,
    OP_LD_H_N8,
    OP_DAA,
    OP_JR_Z_E8,
    OP_ADD_HL_HL,
    OP_LD_A_HLRI,
    OP_DEC_HL,
    OP_INC_L,
    OP_DEC_L,
    OP_LD_L_N8,
    OP_CPL,
    OP_JR_NC_E8,
    OP_LD_SP_N16,
    OP_LD_HLRD_A,
    OP_INC_SP,
    OP_INC_HLR,
    OP_DEC_HLR,
    OP_LD_HLR_N8,
    OP_SCF,
    OP_JR_C_E8,
    OP_ADD_HL_SP,
    OP_LD_A_HLRD,
    OP_DEC_SP,
    OP_INC_A,
    OP_DEC_A,
    OP_LD_A_N8,
    OP_CCF,
    OP_LD_B_B,
    OP_LD_B_C,
    OP_LD_B_D,
    OP_LD_B_E,
    OP_LD_B_H,
    OP_LD_B_L,
    OP_LD_B_HLR,
    OP_LD_B_A,
    OP_LD_C_B,
    OP_LD_C_C,
    OP_LD_C_D,
    OP_LD_C_E,
    OP_LD_C_H,
    OP_LD_C_L,
    OP_LD_C_HLR,
    OP_LD_C_A,
    OP_LD_D_B,
    OP_LD_D_C,
    OP_LD_D_D,
    OP_LD_D_E,
    OP_LD_D_H,
    OP_LD_D_L,
    OP_LD_D_HLR,
    OP_LD_D_A,
    OP_LD_E_B,
    OP_LD_E_C,
    OP_LD_E_D,
    OP_LD_E_E,
    OP_LD_E_H,
    OP_LD_E_L,
    OP_LD_E_HLR,
    OP_LD_E_A,
    OP_LD_H_B,
    OP_LD_H_C,
    OP_LD_H_D,
    OP_LD_H_E,
    OP_LD_H_H,
    OP_LD_H_L,
    OP_LD_H_HLR,
    OP_LD_H_A,
    OP_LD_L_B,
    OP_LD_L_C,
    OP_LD_L_D,
    OP_LD_L_E,
    OP_LD_L_H,
    OP_LD_L_L,
    OP_LD_L_HLR,
    OP_LD_L_A,
    OP_LD_HLR_B,
    OP_LD_HLR_C,
    OP_LD_HLR_D,
    OP_LD_HLR_E,
    OP_LD_HLR_H,
    OP_LD_HLR_L,
    OP_HALT,
    OP_LD_HLR_A,
    OP_LD_A_B,
    OP_LD_A_C,
    OP_LD_A_D,
    OP_LD_A_E,
    OP_LD_A_H,
    OP_LD_A_L,
    OP_LD_A_HLR,
    OP_LD_A_A,
    OP_ADD_A_B,
    OP_ADD_A_C,
    OP_ADD_A_D,
    OP_ADD_A_E,
    OP_ADD_A_H,
    OP_ADD_A_L,
    OP_ADD_A_HLR,
    OP_ADD_A_A,
    OP_ADC_A_B,
    OP_ADC_A_C,
    OP_ADC_A_D,
    OP_ADC_A_E,
    OP_ADC_A_H,
    OP_ADC_A_L,
    OP_ADC_A_HLR,
    OP_ADC_A_A,
    OP_SUB_A_B,
    OP_SUB_A_C,
    OP_SUB_A_D,
    OP_SUB_A_E,
    OP_SUB_A_H,
    OP_SUB_A_L,
    OP_SUB_A_HLR,
    OP_SUB_A_A,
    OP_SBC_A_B,
    OP_SBC_A_C,
    OP_SBC_A_D,
    OP_SBC_A_E,
    OP_SBC_A_H,
    OP_SBC_A_L,
    OP_SBC_A_HLR,
    OP_SBC_A_A,
    OP_AND_A_B,
    OP_AND_A_C,
    OP_AND_A_D,
    OP_AND_A_E,
    OP_AND_A_H,
    OP_AND_A_L,
    OP_AND_A_HLR,
    OP_AND_A_A,
    OP_XOR_A_B,
    OP_XOR_A_C,
    OP_XOR_A_D,
    OP_XOR_A_E,
    OP_XOR_A_H,
    OP_XOR_A_L,
    OP_XOR_A_HLR,
    OP_XOR_A_A,
    OP_OR_A_B,
    OP_OR_A_C,
    OP_OR_A_D,
    OP_OR_A_E,
    OP_OR_A_H,
    OP_OR_A_L,
    OP_OR_A_HLR,
    OP_OR_A_A,
    OP_CP_A_B,
    OP_CP_A_C,
    OP_CP_A_D,
    OP_CP_A_E,
    OP_CP_A_H,
    OP_CP_A_L,
    OP_CP_A_HLR,
    OP_CP_A_A,
    OP_RET_NZ,
    OP_POP_BC,
    OP_JP_NZ_N16,
    OP_JP_N16,
    OP_CALL_NZ_N16,
    OP_PUSH_BC,
    OP_ADD_A_N8,
    OP_RST_0,
    OP_RET_Z,
    OP_RET,
    OP_JP_Z_N16,
    OP_UNKOWN,
    OP_CALL_Z_N16,
    OP_CALL_N16,
    OP_ADC_A_N8,
    OP_RST_1,
    OP_RET_NC,
    OP_POP_DE,
    OP_JP_NC_N16,
    OP_UNKOWN,
    OP_CALL_NC_N16,
    OP_PUSH_DE,
    OP_SUB_A_N8,
    OP_RST_2,
    OP_RET_C,
    OP_RETI,
    OP_JP_C_N16,
    OP_UNKOWN,
    OP_CALL_C_N16,
    OP_UNKOWN,
    OP_SBC_A_N8,
    OP_RST_3,
    OP_LD_N8R_A,
    OP_POP_HL,
    OP_LD_CR_A,
    OP_UNKOWN,
    OP_UNKOWN,
    OP_PUSH_HL,
    OP_AND_A_N8,
    OP_RST_4,
    OP_ADD_SP_N,
    OP_JP_HL,
    OP_LD_N16R_A,
    OP_UNKOWN,
    OP_UNKOWN,
    OP_UNKOWN,
    OP_XOR_A_N8,
    OP_RST_5,
    OP_LD_A_N8R,
    OP_POP_AF,
    OP_LD_A_CR,
    OP_DI,
    OP_UNKOWN,
    OP_PUSH_AF,
    OP_OR_A_N8,
    OP_RST_6,
    OP_LD_HL_SP_N8,
    OP_LD_SP_HL,
    OP_LD_A_N16R,
    OP_EI,
    OP_UNKOWN,
    OP_UNKOWN,
    OP_CP_A_N8,
    OP_RST_7
};

// ======================================================================
int opcode_check_integrity()
{
#define last(TAB) (sizeof TAB / sizeof TAB[0])

#define do_check(TAB, KIND) \
  do { \
  const size_t end = last(TAB); \
  for(size_t i = 0; i < end; ++i) { \
    if (TAB[i].kind != KIND) { \
      fprintf(stderr, "opcode_check_integrity(): wrong kind (%0x) in " #TAB "[], index %zu\n", \
              TAB[i].kind, i); \
      return 0; \
    } \
    if ((TAB[i].family != UNKN) && (TAB[i].opcode != i)) { \
      fprintf(stderr, "opcode_check_integrity(): wrong index/opcode in " #TAB "[]: index=%zu, opcode=%d\n", \
              i, TAB[i].opcode); \
      return 0;  \
    } \
  } \
  } while(0)

    do_check(instruction_direct, DIRECT);
    do_check(instruction_prefixed, PREFIXED);
    return 1;
#undef last
#undef do_check
}
