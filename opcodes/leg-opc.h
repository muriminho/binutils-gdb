/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode header for leg.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2026 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef LEG_OPC_H
#define LEG_OPC_H

#ifdef __cplusplus
extern "C" {
#endif

/* -- opc.h */

/* Allows reason codes to be output when assembler errors occur.  */
#define CGEN_VERBOSE_ASSEMBLER_ERRORS

#define CGEN_DIS_HASH_SIZE 64
#define CGEN_DIS_HASH(buf,value) ((value >> 26) & 0x3f)

/* -- asm.c */
/* Enum declaration for leg instruction types.  */
typedef enum cgen_insn_type {
  LEG_INSN_INVALID, LEG_INSN_NOP, LEG_INSN_EXIT, LEG_INSN_JUMP
 , LEG_INSN_JUMPREG, LEG_INSN_MOV, LEG_INSN_MOVIMM, LEG_INSN_LOAD64
 , LEG_INSN_STORE64, LEG_INSN_LOAD32, LEG_INSN_STORE32, LEG_INSN_LOAD16
 , LEG_INSN_STORE16, LEG_INSN_LOAD8, LEG_INSN_STORE8, LEG_INSN_JEQR
 , LEG_INSN_JEQ, LEG_INSN_JLER, LEG_INSN_JLEUR, LEG_INSN_JLE
 , LEG_INSN_JLEU, LEG_INSN_JLR, LEG_INSN_JLUR, LEG_INSN_JL
 , LEG_INSN_JLU
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID LEG_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) LEG_INSN_JLU + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_opcode;
  long f_dest;
  long f_src1;
  long f_src2;
  long f_imm;
  long f_uimm;
  long f_branch;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


   #ifdef __cplusplus
   }
   #endif

#endif /* LEG_OPC_H */
