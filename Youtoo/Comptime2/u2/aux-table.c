/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module aux-table
 **  Copyright: See file aux-table.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef table_bindings[];
extern LispRef vector_bindings[];
extern LispRef table1_bindings[];
extern LispRef boot1_bindings[];
extern LispRef stream_bindings[];

/* Module bindings with size 31 */
LispRef aux_table_bindings[31];

/* Foreign functions */
static LispRef ff_stub_eul_c_str_as_eul_symbol27 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0061, res;

  POPVAL1(G0061);
  FF_RES_CONVERT6(res,eul_c_str_as_eul_symbol(FF_ARG_CONVERT8(G0061)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module aux-table */
void initialize_module_aux_table()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"aux_table",(LispRef) aux_table_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_60, sym_59, sym_58, sym_57, sym_56, sym_55, sym_54, sym_53, G0052, G0050, G0048, G0046, G0044, G0042, G0040, G0038, G0036, G0034, sym_32, G0031, G0029;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 4 is_init: 0 index: 11 binding: anonymous */
  static const void *G0028[] = {I(aa,47,00,00),I(10,27,0a,24),B(stream ,13),I(3d,03,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 13 binding: access-table-print */
  static const void *G0030[] = {I(a7,46,01,1b),I(48,00,00,1c),I(24,00,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,47),I(00,00,12,1b),I(44,22,1c,8a),I(03,24,00,00),B(table1 ,3),I(08,24,00,00),B(stream ,13),I(1c,24,00,00),B(vector ,16),I(3d,02,06,22),I(01,36,19,23),B(aux_table ,12),I(23,00,00,00),B(aux_table ,11),I(3b,01,24,00),B(vector ,16),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 14 binding: access-table-keys */
  static const void *G0033[] = {I(aa,24,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,24),B(table1 ,2),I(3d,01,01,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 15 binding: anonymous */
  static const void *G0035[] = {I(ab,1c,44,24),I(24,00,00,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,47,00),I(00,1f,03,1f),I(03,1f,03,3c),I(03,2a,1c,22),I(01,36,04,47),I(00,00,45,02)};

  /* Byte-vector with size: 4 is_init: 0 index: 16 binding: anonymous */
  static const void *G0037[] = {I(aa,47,00,00),I(1c,24,00,00),B(table ,7),I(3d,02,01,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 17 binding: make-access-table */
  static const void *G0039[] = {I(a8,46,01,24),B(mop_gf ,2),I(24,00,00,00),B(table1 ,3),I(1d,24,00,00),B(boot ,5),I(3c,03,1b,48),I(00,00,23,00),B(aux_table ,12),I(23,00,00,00),B(aux_table ,16),I(3b,01,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,1c,23),B(aux_table ,12),I(23,00,00,00),B(aux_table ,15),I(3b,02,1d,3c),I(02,2a,1c,45),I(04,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 18 binding: access-table-size */
  static const void *G0041[] = {I(aa,24,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,83),I(24,00,00,00),B(table1 ,3),I(08,45,01,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 19 binding: access-table-map */
  static const void *G0043[] = {I(ab,24,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,1d),I(1c,24,00,00),B(table ,2),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 20 binding: access-table-do */
  static const void *G0045[] = {I(ab,24,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,1d),I(1c,24,00,00),B(table ,9),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 21 binding: access-table-values */
  static const void *G0047[] = {I(aa,24,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,24),B(table1 ,9),I(3d,01,01,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 22 binding: access-table-clear */
  static const void *G0049[] = {I(aa,24,00,00),B(boot1 ,42),I(3c,01,86,86),I(1d,3c,02,24),B(table1 ,14),I(3d,01,01,00)};

  /* Byte-vector with size: 56 is_init: 1 index: 0 binding: initialize-aux-table */
  static const void *G0051[] = {I(87,25,00,00),B(aux_table ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(aux_table ,23),I(23,00,00,00),B(aux_table ,22),I(3b,01,25,00),B(aux_table ,9),I(23,00,00,00),B(aux_table ,24),I(23,00,00,00),B(aux_table ,21),I(3b,01,25,00),B(aux_table ,8),I(23,00,00,00),B(aux_table ,25),I(23,00,00,00),B(aux_table ,20),I(3b,02,25,00),B(aux_table ,7),I(23,00,00,00),B(aux_table ,26),I(23,00,00,00),B(aux_table ,19),I(3b,02,25,00),B(aux_table ,6),I(23,00,00,00),B(aux_table ,27),I(23,00,00,00),B(aux_table ,18),I(3b,01,25,00),B(aux_table ,5),I(23,00,00,00),B(aux_table ,28),I(23,00,00,00),B(aux_table ,17),I(3b,ff,25,00),B(aux_table ,4),I(23,00,00,00),B(aux_table ,29),I(23,00,00,00),B(aux_table ,14),I(3b,01,25,00),B(aux_table ,3),I(23,00,00,00),B(aux_table ,30),I(23,00,00,00),B(aux_table ,13),I(3b,fe,25,00),B(aux_table ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G0029,G0028);
  eul_intern_symbol(sym_32,"anonymous");
  eul_allocate_bytevector( G0031,G0030);
  eul_allocate_bytevector( G0034,G0033);
  eul_allocate_bytevector( G0036,G0035);
  eul_allocate_bytevector( G0038,G0037);
  eul_allocate_bytevector( G0040,G0039);
  eul_allocate_bytevector( G0042,G0041);
  eul_allocate_bytevector( G0044,G0043);
  eul_allocate_bytevector( G0046,G0045);
  eul_allocate_bytevector( G0048,G0047);
  eul_allocate_bytevector( G0050,G0049);
  eul_intern_symbol(sym_53,"access-table-clear");
  eul_intern_symbol(sym_54,"access-table-values");
  eul_intern_symbol(sym_55,"access-table-do");
  eul_intern_symbol(sym_56,"access-table-map");
  eul_intern_symbol(sym_57,"access-table-size");
  eul_intern_symbol(sym_58,"make-access-table");
  eul_intern_symbol(sym_59,"access-table-keys");
  eul_intern_symbol(sym_60,"access-table-print");
  eul_allocate_bytevector( G0052,G0051);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      aux_table_bindings[i] = eul_nil;
  }

  aux_table_bindings[ 10] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_str_as_eul_symbol27;
  aux_table_bindings[ 11] = G0029;
  aux_table_bindings[ 12] = sym_32;
  aux_table_bindings[ 13] = G0031;
  aux_table_bindings[ 14] = G0034;
  aux_table_bindings[ 15] = G0036;
  aux_table_bindings[ 16] = G0038;
  aux_table_bindings[ 17] = G0040;
  aux_table_bindings[ 18] = G0042;
  aux_table_bindings[ 19] = G0044;
  aux_table_bindings[ 20] = G0046;
  aux_table_bindings[ 21] = G0048;
  aux_table_bindings[ 22] = G0050;
  aux_table_bindings[ 1] = eul_nil;
  aux_table_bindings[ 23] = sym_53;
  aux_table_bindings[ 24] = sym_54;
  aux_table_bindings[ 25] = sym_55;
  aux_table_bindings[ 26] = sym_56;
  aux_table_bindings[ 27] = sym_57;
  aux_table_bindings[ 28] = sym_58;
  aux_table_bindings[ 29] = sym_59;
  aux_table_bindings[ 30] = sym_60;
  eul_allocate_lambda( aux_table_bindings[0], "initialize-aux-table", 0, G0052);

  }
}


/* eof */
