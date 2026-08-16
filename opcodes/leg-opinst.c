/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Semantic operand instances for leg.

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

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "leg-desc.h"
#include "leg-opc.h"

/* Operand references.  */

#define OP_ENT(op) LEG_OPERAND_##op
#define INPUT CGEN_OPINST_INPUT
#define OUTPUT CGEN_OPINST_OUTPUT
#define END CGEN_OPINST_END
#define COND_REF CGEN_OPINST_COND_REF

static const CGEN_OPINST sfmt_empty_ops[] ATTRIBUTE_UNUSED = {
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_nop_ops[] ATTRIBUTE_UNUSED = {
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_jump_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "branch", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (BRANCH), 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_UDI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_mov_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "src1", HW_H_GR, CGEN_MODE_DI, OP_ENT (SRC1), 0, 0 },
  { OUTPUT, "dest", HW_H_GR, CGEN_MODE_DI, OP_ENT (DEST), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

#undef OP_ENT
#undef INPUT
#undef OUTPUT
#undef END
#undef COND_REF

/* Operand instance lookup table.  */

static const CGEN_OPINST *leg_cgen_opinst_table[MAX_INSNS] = {
  0,
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_jump_ops[0],
  & sfmt_mov_ops[0],
};

/* Function to call before using the operand instance table.  */

void
leg_cgen_init_opinst_table (CGEN_CPU_DESC cd)
{
  int i;
  const CGEN_OPINST **oi = & leg_cgen_opinst_table[0];
  CGEN_INSN *insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].opinst = oi[i];
}
