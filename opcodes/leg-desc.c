/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* CPU data for leg.

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
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "leg-desc.h"
#include "leg-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "leg", MACH_LEG },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "leg", ISA_LEG },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE leg_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE leg_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE leg_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE leg_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA leg_cgen_isa_table[] = {
  { "leg", 64, 64, 64, 64 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH leg_cgen_mach_table[] = {
  { "leg", "leg", MACH_LEG, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY leg_cgen_opval_h_gr_entries[] =
{
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "r15", 15, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD leg_cgen_opval_h_gr =
{
  & leg_cgen_opval_h_gr_entries[0],
  16,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY leg_cgen_opval_h_csr_entries[] =
{
  { "IE", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "IM", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "IP", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "ICC", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "DCC", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "CC", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "CFG", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "EBA", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "DC", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "DEBA", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "CFG2", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "JTX", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "JRX", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "BP0", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "BP1", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "BP2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "BP3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "WP0", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "WP1", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "WP2", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "WP3", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "PSW", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "TLBVADDR", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "TLBPADDR", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "TLBBADVADDR", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD leg_cgen_opval_h_csr =
{
  & leg_cgen_opval_h_csr_entries[0],
  25,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY leg_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PC), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-gr", HW_H_GR, CGEN_ASM_KEYWORD, & leg_cgen_opval_h_gr, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-csr", HW_H_CSR, CGEN_ASM_KEYWORD, & leg_cgen_opval_h_csr, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD leg_cgen_ifld_table[] =
{
  { LEG_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_OPCODE, "f-opcode", 0, 64, 7, 8, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_DEST, "f-dest", 0, 64, 15, 8, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_SRC1, "f-src1", 0, 64, 23, 8, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_SRC2, "f-src2", 0, 64, 31, 8, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_IMM, "f-imm", 0, 64, 63, 32, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_UIMM, "f-uimm", 0, 64, 63, 32, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { LEG_F_BRANCH, "f-branch", 0, 64, 63, 32, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */



/* multi ifield definitions */


/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) LEG_OPERAND_##op

const CGEN_OPERAND leg_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", LEG_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { &leg_cgen_ifld_table[LEG_F_NIL] } },
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } } } }  },
/* dest: destinatination register 0 */
  { "dest", LEG_OPERAND_DEST, HW_H_GR, 15, 8,
    { 0, { &leg_cgen_ifld_table[LEG_F_DEST] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* addrg: address register */
  { "addrg", LEG_OPERAND_ADDRG, HW_H_GR, 15, 8,
    { 0, { &leg_cgen_ifld_table[LEG_F_DEST] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* src1: source register 1 */
  { "src1", LEG_OPERAND_SRC1, HW_H_GR, 23, 8,
    { 0, { &leg_cgen_ifld_table[LEG_F_SRC1] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* src2: source register 2 */
  { "src2", LEG_OPERAND_SRC2, HW_H_GR, 31, 8,
    { 0, { &leg_cgen_ifld_table[LEG_F_SRC2] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm: signed immediate */
  { "imm", LEG_OPERAND_IMM, HW_H_SINT, 63, 32,
    { 0, { &leg_cgen_ifld_table[LEG_F_IMM] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uimm: unsigned immediate */
  { "uimm", LEG_OPERAND_UIMM, HW_H_UINT, 63, 32,
    { 0, { &leg_cgen_ifld_table[LEG_F_UIMM] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* addr: unsigned address */
  { "addr", LEG_OPERAND_ADDR, HW_H_UINT, 63, 32,
    { 0, { &leg_cgen_ifld_table[LEG_F_UIMM] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* branch: branch offset */
  { "branch", LEG_OPERAND_BRANCH, HW_H_IADDR, 63, 32,
    { 0, { &leg_cgen_ifld_table[LEG_F_BRANCH] } },
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE leg_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
/* nop */
  {
    LEG_INSN_NOP, "nop", "nop", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* exit */
  {
    LEG_INSN_EXIT, "exit", "exit", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jump $branch */
  {
    LEG_INSN_JUMP, "jump", "jump", 64,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jumpr $dest */
  {
    LEG_INSN_JUMPREG, "jumpreg", "jumpr", 64,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* movr $dest,$src1 */
  {
    LEG_INSN_MOV, "mov", "movr", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov $dest,$uimm */
  {
    LEG_INSN_MOVIMM, "movimm", "mov", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldrq $addrg,$src1 */
  {
    LEG_INSN_LOAD64, "load64", "ldrq", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* strq $addrg,$src1 */
  {
    LEG_INSN_STORE64, "store64", "strq", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldrw $addrg,$src1 */
  {
    LEG_INSN_LOAD32, "load32", "ldrw", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* strw $addrg,$src1 */
  {
    LEG_INSN_STORE32, "store32", "strw", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldrh $addrg,$src1 */
  {
    LEG_INSN_LOAD16, "load16", "ldrh", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* strh $addrg,$src1 */
  {
    LEG_INSN_STORE16, "store16", "strh", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldrb $addrg,$src1 */
  {
    LEG_INSN_LOAD8, "load8", "ldrb", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* strb $addrg,$src1 */
  {
    LEG_INSN_STORE8, "store8", "strb", 64,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jeqr $src1,$src2,$addrg */
  {
    LEG_INSN_JEQR, "jeqr", "jeqr", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jeq $src1,$src2,$branch */
  {
    LEG_INSN_JEQ, "jeq", "jeq", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jler $src1,$src2,$addrg */
  {
    LEG_INSN_JLER, "jler", "jler", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jleur $src1,$src2,$addrg */
  {
    LEG_INSN_JLEUR, "jleur", "jleur", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jle $src1,$src2,$branch */
  {
    LEG_INSN_JLE, "jle", "jle", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jleu $src1,$src2,$branch */
  {
    LEG_INSN_JLEU, "jleu", "jleu", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jlr $src1,$src2,$addrg */
  {
    LEG_INSN_JLR, "jlr", "jlr", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jlur $src1,$src2,$addrg */
  {
    LEG_INSN_JLUR, "jlur", "jlur", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jl $src1,$src2,$branch */
  {
    LEG_INSN_JL, "jl", "jl", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jlu $src1,$src2,$branch */
  {
    LEG_INSN_JLU, "jlu", "jlu", 64,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

#ifndef opcodes_error_handler
#define opcodes_error_handler(...) \
  fprintf (stderr, __VA_ARGS__); fputc ('\n', stderr)
#endif

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void leg_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of leg_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  return NULL;
}

/* Subroutine of leg_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & leg_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of leg_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & leg_cgen_ifld_table[0];
}

/* Subroutine of leg_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & leg_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of leg_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & leg_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of leg_cgen_cpu_open to rebuild the tables.  */

static void
leg_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & leg_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & leg_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      opcodes_error_handler
		(/* xgettext:c-format */
		 _("internal error: leg_cgen_rebuild_tables: "
		   "conflicting insn-chunk-bitsize values: `%d' vs. `%d'"),
		 cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_INSN_ENDIAN: specify instruction endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
leg_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  enum cgen_endian insn_endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (leg_cgen_mach_table, name);

	    if (mach != NULL)
	      machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	case CGEN_CPU_OPEN_INSN_ENDIAN :
	  insn_endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  opcodes_error_handler
	    (/* xgettext:c-format */
	     _("internal error: leg_cgen_cpu_open: "
	       "unsupported argument `%d'"),
	     arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      opcodes_error_handler
	(/* xgettext:c-format */
	 _("internal error: leg_cgen_cpu_open: no endianness specified"));
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  cd->insn_endian
    = (insn_endian == CGEN_ENDIAN_UNKNOWN ? endian : insn_endian);

  /* Table (re)builder.  */
  cd->rebuild_tables = leg_cgen_rebuild_tables;
  leg_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;

  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to leg_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
leg_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return leg_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
leg_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }

  free ((CGEN_INSN *) cd->macro_insn_table.init_entries);
  free ((CGEN_INSN *) cd->insn_table.init_entries);
  free ((CGEN_HW_ENTRY *) cd->hw_table.entries);
  free ((CGEN_HW_ENTRY *) cd->operand_table.entries);
  free (cd);
}

