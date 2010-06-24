/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module table
 **  Copyright: See file table.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_list();
extern void initialize_module_fpi();
extern void initialize_module_string();
extern void initialize_module_vector();
extern void initialize_module_table1();
extern LispRef fpi_bindings[];
extern LispRef compare_bindings[];
extern LispRef copy_bindings[];
extern LispRef convert_bindings[];
extern LispRef telos_bindings[];
extern LispRef list_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef string_bindings[];
extern LispRef boot1_bindings[];
extern LispRef vector_bindings[];
extern LispRef boot_bindings[];
extern LispRef collect_bindings[];
extern LispRef table1_bindings[];

/* Module bindings with size 84 */
LispRef table_bindings[84];

/* Foreign functions */
static LispRef ff_stub_eul_table_ref5652 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005765, G005766, res;

  POPVAL1(G005766);
  POPVAL1(G005765);
  FF_RES_CONVERT6(res,eul_table_ref(FF_ARG_CONVERT8(G005765), FF_ARG_CONVERT3(G005766)));
  return res;
}

static LispRef ff_stub_eul_addr_str5653 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005767, res;

  POPVAL1(G005767);
  FF_RES_CONVERT3(res,eul_addr_str(FF_ARG_CONVERT8(G005767)));
  return res;
}

static LispRef ff_stub_eul_table_set5654 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005768, G005769, G005770, res;

  POPVAL1(G005770);
  POPVAL1(G005769);
  POPVAL1(G005768);
  FF_RES_CONVERT6(res,eul_table_set(FF_ARG_CONVERT8(G005768), FF_ARG_CONVERT3(G005769), FF_ARG_CONVERT8(G005770)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module table */
void initialize_module_table()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_list();
  initialize_module_fpi();
  initialize_module_string();
  initialize_module_vector();
  initialize_module_table1();
  eul_fast_table_set(eul_modules,"table",(LispRef) table_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5764, sym_5763, sym_5762, sym_5761, sym_5760, sym_5759, sym_5758, sym_5757, sym_5756, G005755, G005753, G005751, G005749, G005747, G005745, G005743, G005741, G005739, G005737, G005735, G005733, G005731, G005729, G005727, sym_5725, sym_5723, sym_5721, sym_5720, sym_5719, sym_5718, sym_5717, sym_5716, sym_5715, sym_5714, sym_5713, sym_5711, sym_5709, sym_5708, sym_5707, sym_5706, G005705, G005703, G005701, G005698, G005696, G005694, G005692, G005690, G005688, G005685, G005683, G005681, G005679, G005677, G005674, G005671, G005668, G005665, sym_5663, G005662, G005660, G005658, G005656;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: (method-accumulate1) */
  static const void *G005655[] = {I(ab,24,00,00),B(table ,10),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: (method-accumulate) */
  static const void *G005657[] = {I(43,03,24,00),B(table ,2),I(3d,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 16 binding: anonymous */
  static const void *G005659[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,20),I(1c,10,1d,11),I(47,00,00,1d),I(1d,47,00,01),I(3d,03,04,22),I(02,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 18 binding: (method-member) */
  static const void *G005661[] = {I(43,fd,46,02),I(1d,48,00,00),I(1b,12,1b,34),I(00,00,00,19),I(1d,47,00,00),I(24,00,00,00),B(table ,5),I(3d,02,04,32),I(00,00,00,3e),I(1c,10,1b,48),I(00,01,1f,03),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(1c,23,00,00),B(table ,17),I(23,00,00,00),B(table ,16),I(3b,01,24,00),B(collect ,13),I(3d,03,06,22),I(02,45,04,00)};

  eul_allocate_static_string(str_5666, "all? on multiple tables not yet implemented", 43);
  /* Byte-vector with size: 13 is_init: 0 index: 20 binding: (method-all?) */
  static const void *G005664[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,3),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,19),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_5669, "any? on multiple tables not yet implemented", 43);
  /* Byte-vector with size: 13 is_init: 0 index: 22 binding: (method-any?) */
  static const void *G005667[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,8),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,21),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_5672, "map on multiple tables not yet implemented", 42);
  /* Byte-vector with size: 13 is_init: 0 index: 24 binding: (method-map) */
  static const void *G005670[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,6),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,23),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_5675, "do on multiple tables not yet implemented", 41);
  /* Byte-vector with size: 13 is_init: 0 index: 26 binding: (method-do) */
  static const void *G005673[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,9),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,25),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: (method-emptyp) */
  static const void *G005676[] = {I(aa,24,00,00),B(table ,4),I(3d,01,00,00)};

  /* Byte-vector with size: 52 is_init: 0 index: 28 binding: anonymous */
  static const void *G005678[] = {I(aa,47,00,03),I(1c,02,1b,7a),I(1b,34,00,00),I(00,00,00,5b),I(1c,10,1b,47),I(00,01,47,00),I(04,3c,02,1b),I(34,00,00,00),I(00,00,00,1c),I(1f,03,11,1f),I(04,47,00,02),I(90,2a,1b,22),I(01,32,00,00),I(00,00,00,2c),I(1f,04,2b,1b),I(47,00,06,1a),I(1b,34,00,00),I(00,00,00,13),I(1c,47,00,05),I(3d,01,07,32),I(00,00,00,0c),I(82,47,00,05),I(3d,01,07,22),I(02,22,02,32),I(00,00,00,6c),I(47,00,00,83),I(24,00,00,00),B(table1 ,4),I(08,2b,47,00),I(01,47,00,02),I(0f,47,00,03),I(1f,05,1d,03),I(2a,47,00,00),I(1d,1c,83,1d),I(24,00,00,00),B(table1 ,4),I(09,22,02,2a),I(47,00,00,82),I(24,00,00,00),B(table1 ,4),I(08,1d,1c,1a),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,11),I(47,00,00,24),B(table ,7),I(3c,01,2a,47),I(00,00,84,24),B(table1 ,4),I(08,22,04,45),I(03,00,00,00)};

  /* Byte-vector with size: 48 is_init: 0 index: 29 binding: (method-(setter table-ref)) */
  static const void *G005680[] = {I(43,03,46,0a),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(83,24,00,00),B(table1 ,9),I(08,47,00,00),I(82,24,00,00),B(table1 ,9),I(08,1d,48,00),I(03,1c,48,00),I(04,47,00,03),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,36),I(26,00,00,00),I(00,00,00,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,1b,48),I(00,03,47,00),I(03,47,00,00),I(1c,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,22,04,2a),I(47,00,03,06),I(1b,48,00,06),I(47,00,01,1f),I(03,3c,01,1b),I(47,00,06,18),I(86,1b,48,00),I(05,23,00,00),B(table ,17),I(23,00,00,00),B(table ,28),I(3b,01,48,00),I(05,1c,47,00),I(05,3d,01,0b)};

  /* Byte-vector with size: 6 is_init: 0 index: 30 binding: (method-(setter table-ref)) */
  static const void *G005682[] = {I(43,03,1c,24),B(collect ,8),I(3c,01,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  eul_allocate_static_string(str_5686, "", 1);
  /* Byte-vector with size: 8 is_init: 0 index: 32 binding: (method-(setter table-ref)) */
  static const void *G005684[] = {I(43,03,1c,23),B(table ,31),I(24,00,00,00),B(string ,11),I(3c,02,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 33 binding: (method-(setter table-ref)) */
  static const void *G005687[] = {I(43,03,1c,41),B(table ,12),I(22,01,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 34 binding: (method-(setter element)) */
  static const void *G005689[] = {I(43,03,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1f,03),I(1f,03,1f,03),I(1f,03,3d,03),I(04,45,04,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 35 binding: anonymous */
  static const void *G005691[] = {I(aa,47,00,02),I(1c,02,1b,7a),I(1b,34,00,00),I(00,00,00,4f),I(1c,10,1b,47),I(00,01,47,00),I(03,3c,02,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,11,32),I(00,00,00,2a),I(1f,04,2b,1b),I(47,00,05,1a),I(1b,34,00,00),I(00,00,00,13),I(1c,47,00,04),I(3d,01,07,32),I(00,00,00,0c),I(82,47,00,04),I(3d,01,07,22),I(02,22,02,32),I(00,00,00,12),I(47,00,00,84),I(24,00,00,00),B(table1 ,4),I(08,45,03,00)};

  /* Byte-vector with size: 39 is_init: 0 index: 36 binding: (method-table-ref) */
  static const void *G005693[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,26,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(83,24,00,00),B(table1 ,9),I(08,47,00,00),I(82,24,00,00),B(table1 ,9),I(08,1d,48,00),I(02,1c,48,00),I(03,47,00,02),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,41),I(47,00,02,06),I(1b,48,00,05),I(47,00,01,1f),I(03,3c,01,1b),I(47,00,05,18),I(86,1b,48,00),I(04,23,00,00),B(table ,17),I(23,00,00,00),B(table ,35),I(3b,01,48,00),I(04,1c,47,00),I(04,3d,01,0a),I(22,04,32,00),I(00,00,00,13),I(47,00,00,84),I(24,00,00,00),B(table1 ,4),I(08,45,06,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 37 binding: (method-table-ref) */
  static const void *G005695[] = {I(ab,24,00,00),B(collect ,8),I(3c,01,41,00),B(table ,11),I(45,02,00,00)};

  eul_allocate_static_string(str_5699, "", 1);
  /* Byte-vector with size: 7 is_init: 0 index: 39 binding: (method-table-ref) */
  static const void *G005697[] = {I(ab,23,00,00),B(table ,38),I(24,00,00,00),B(string ,11),I(3c,02,41,00),B(table ,11),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-table-ref) */
  static const void *G005700[] = {I(ab,41,00,00),B(table ,12),I(22,01,41,00),B(table ,11),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-element) */
  static const void *G005702[] = {I(ab,24,00,00),B(table ,5),I(3d,02,00,00)};

  eul_allocate_static_cons(cons_5712, NULL, NULL);
  eul_allocate_static_cons(cons_5710, NULL, eul_as_static(cons_5712));
  eul_allocate_static_cons(cons_5724, NULL, NULL);
  eul_allocate_static_cons(cons_5722, NULL, eul_as_static(cons_5724));
  /* Byte-vector with size: 658 is_init: 0 index: 60 binding: top-level */
  static const void *G005704[] = {I(a9,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(table ,42),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table ,5),I(2a,24,00,00),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,4),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,43),I(23,00,00,00),B(table ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(2a,24,00,00),B(table ,5),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,14),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,14),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,14),I(24,00,00,00),B(mop_class ,33),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,9),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,45),I(23,00,00,00),B(table ,34),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(table ,47),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(table ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,2a,24),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,14),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,33),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,14),I(24,00,00,00),B(string ,13),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,32),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,14),I(24,00,00,00),B(mop_class ,33),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,30),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,9),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,49),I(23,00,00,00),B(table ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(table1 ,9),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,50),I(23,00,00,00),B(table ,26),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(table1 ,9),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,51),I(23,00,00,00),B(table ,24),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,26),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(table1 ,9),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,26),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,52),I(23,00,00,00),B(table ,22),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,26),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,18),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(table1 ,9),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,18),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,53),I(23,00,00,00),B(table ,20),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,18),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,54),I(23,00,00,00),B(table ,18),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,25),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,27),I(86,24,00,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,25),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,55),I(23,00,00,00),B(table ,15),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,56),I(23,00,00,00),B(table ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(table ,59),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(table1 ,4),I(1c,1f,06,3c),I(02,2a,24,00),B(table1 ,4),I(24,00,00,00),B(mop_class ,13),I(3d,01,89,45),I(89,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 61 binding: accumulate-table */
  static const void *G005726[] = {I(43,03,24,00),B(table1 ,16),I(3c,01,24,00),B(list ,17),I(3d,03,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 62 binding: anonymous */
  static const void *G005728[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,11),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,45,02)};

  /* Byte-vector with size: 12 is_init: 0 index: 63 binding: all1-table? */
  static const void *G005730[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,62),I(3b,01,1c,24),B(vector ,9),I(3d,02,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 64 binding: table-empty? */
  static const void *G005732[] = {I(aa,83,24,00),B(table1 ,4),I(08,2d,45,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 65 binding: anonymous */
  static const void *G005734[] = {I(ab,1c,47,00),I(03,1a,1b,34),I(00,00,00,49),I(47,00,02,1f),I(03,02,1f,03),I(2b,1c,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,10,1f,03),I(11,1c,1c,47),I(00,00,3c,02),I(1b,1f,08,0f),I(1f,05,1c,47),I(00,01,3d,02),I(0a,22,04,32),I(00,00,00,0e),I(1c,1f,05,47),I(00,01,3d,02),I(06,22,03,32),I(00,00,00,10),I(1c,24,00,00),B(boot ,24),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 66 binding: map1-table */
  static const void *G005736[] = {I(ab,46,04,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,1b,48,00),I(02,47,00,02),I(06,1b,48,00),I(03,47,00,02),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,2d),I(86,1b,48,00),I(01,23,00,00),B(table ,17),I(23,00,00,00),B(table ,65),I(3b,02,48,00),I(01,82,86,47),I(00,01,3d,02),I(05,22,01,32),I(00,00,00,06),I(86,45,04,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 67 binding: anonymous */
  static const void *G005738[] = {I(aa,1b,47,00),I(05,1a,1b,34),I(00,00,00,45),I(47,00,01,1d),I(02,1b,7a,1b),I(34,00,00,00),I(00,00,00,24),I(1c,10,47,00),I(02,3c,01,1b),I(47,00,06,18),I(1b,1f,04,47),I(00,03,3c,02),I(22,02,32,00),I(00,00,00,07),I(86,2a,1f,03),I(2b,47,00,04),I(3d,01,04,22),I(02,32,00,00),I(00,00,00,0a),I(47,00,00,45),I(02,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 68 binding: anonymous */
  static const void *G005740[] = {I(ab,1c,47,00),I(06,1a,1b,34),I(00,00,00,35),I(47,00,07,1f),I(03,02,1b,34),I(00,00,00,19),I(1f,03,2b,1b),I(1f,04,47,00),I(03,3d,02,05),I(22,01,32,00),I(00,00,00,0e),I(47,00,07,1f),I(04,1f,04,03),I(22,01,32,00),I(00,00,00,0e),I(82,1d,47,00),I(03,3d,02,03),I(45,03,00,00)};

  /* Byte-vector with size: 56 is_init: 0 index: 69 binding: table-rehash */
  static const void *G005742[] = {I(aa,46,08,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(82,24,00,00),B(table1 ,9),I(08,1c,48,00),I(01,1b,48,00),I(02,47,00,01),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,9d),I(47,00,01,06),I(1b,48,00,05),I(47,00,05,84),I(16,1b,48,00),I(06,47,00,06),I(24,00,00,00),B(boot1 ,39),I(3c,01,1b,48),I(00,07,47,00),I(00,82,24,00),B(table1 ,4),I(08,84,16,47),I(00,00,47,00),I(07,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,22,02,2a),I(47,00,00,1c),I(1c,82,1d,24),B(table1 ,4),I(09,22,02,2a),I(86,86,1c,48),I(00,03,1b,48),I(00,04,23,00),B(table ,17),I(23,00,00,00),B(table ,68),I(3b,02,48,00),I(03,23,00,00),B(table ,17),I(23,00,00,00),B(table ,67),I(3b,01,48,00),I(04,82,47,00),I(04,3d,01,0a),I(22,06,32,00),I(00,00,00,09),I(47,00,00,45),I(04,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 70 binding: anonymous */
  static const void *G005744[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,11),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,45,02)};

  /* Byte-vector with size: 12 is_init: 0 index: 71 binding: anyp1-table */
  static const void *G005746[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,70),I(3b,01,1c,24),B(vector ,4),I(3d,02,02,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 72 binding: anonymous */
  static const void *G005748[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,18),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,32,00),I(00,00,00,07),I(86,45,02,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 73 binding: do1-table */
  static const void *G005750[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,72),I(3b,01,1c,24),B(vector ,13),I(3d,02,02,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 74 binding: accumulate1-table */
  static const void *G005752[] = {I(ab,24,00,00),B(table1 ,16),I(3c,01,24,00),B(list ,15),I(3d,02,00,00)};

  /* Byte-vector with size: 108 is_init: 1 index: 0 binding: initialize-table */
  static const void *G005754[] = {I(87,25,00,00),B(table ,1),I(24,00,00,00),B(table1 ,1),I(3e,0b,24,00),B(table1 ,0),I(3c,00,21,01),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(table ,75),I(23,00,00,00),B(table ,74),I(3b,02,25,00),B(table ,10),I(23,00,00,00),B(table ,76),I(23,00,00,00),B(table ,73),I(3b,02,25,00),B(table ,9),I(23,00,00,00),B(table ,77),I(23,00,00,00),B(table ,71),I(3b,02,25,00),B(table ,8),I(23,00,00,00),B(table ,78),I(23,00,00,00),B(table ,69),I(3b,01,25,00),B(table ,7),I(23,00,00,00),B(table ,79),I(23,00,00,00),B(table ,66),I(3b,02,25,00),B(table ,6),I(86,25,00,00),B(table ,5),I(23,00,00,00),B(table ,80),I(23,00,00,00),B(table ,64),I(3b,01,25,00),B(table ,4),I(23,00,00,00),B(table ,81),I(23,00,00,00),B(table ,63),I(3b,02,25,00),B(table ,3),I(23,00,00,00),B(table ,82),I(23,00,00,00),B(table ,61),I(3b,03,25,00),B(table ,2),I(23,00,00,00),B(table ,83),I(23,00,00,00),B(table ,60),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G005656,G005655);
  eul_allocate_bytevector( G005658,G005657);
  eul_allocate_bytevector( G005660,G005659);
  eul_intern_symbol(sym_5663,"anonymous");
  eul_allocate_bytevector( G005662,G005661);
  object_class(str_5666) = eul_static_string_class;
  eul_allocate_bytevector( G005665,G005664);
  object_class(str_5669) = eul_static_string_class;
  eul_allocate_bytevector( G005668,G005667);
  object_class(str_5672) = eul_static_string_class;
  eul_allocate_bytevector( G005671,G005670);
  object_class(str_5675) = eul_static_string_class;
  eul_allocate_bytevector( G005674,G005673);
  eul_allocate_bytevector( G005677,G005676);
  eul_allocate_bytevector( G005679,G005678);
  eul_allocate_bytevector( G005681,G005680);
  eul_allocate_bytevector( G005683,G005682);
  object_class(str_5686) = eul_static_string_class;
  eul_allocate_bytevector( G005685,G005684);
  eul_allocate_bytevector( G005688,G005687);
  eul_allocate_bytevector( G005690,G005689);
  eul_allocate_bytevector( G005692,G005691);
  eul_allocate_bytevector( G005694,G005693);
  eul_allocate_bytevector( G005696,G005695);
  object_class(str_5699) = eul_static_string_class;
  eul_allocate_bytevector( G005698,G005697);
  eul_allocate_bytevector( G005701,G005700);
  eul_allocate_bytevector( G005703,G005702);
  eul_intern_symbol(sym_5706,"table-ref");
  eul_intern_symbol(sym_5707,"(method element)");
  eul_intern_symbol(sym_5708,"(method table-ref)");
  eul_intern_symbol(sym_5709,"(method (setter element))");
  eul_intern_symbol(sym_5711,"setter");
  object_class(cons_5712) = eul_static_cons_class;
  eul_car(cons_5712) = sym_5706;
  eul_cdr(cons_5712) = eul_nil;
  object_class(cons_5710) = eul_static_cons_class;
  eul_car(cons_5710) = sym_5711;
  eul_intern_symbol(sym_5713,"(method (setter table-ref))");
  eul_intern_symbol(sym_5714,"(method emptyp)");
  eul_intern_symbol(sym_5715,"(method do)");
  eul_intern_symbol(sym_5716,"(method map)");
  eul_intern_symbol(sym_5717,"(method any?)");
  eul_intern_symbol(sym_5718,"(method all?)");
  eul_intern_symbol(sym_5719,"(method member)");
  eul_intern_symbol(sym_5720,"(method accumulate)");
  eul_intern_symbol(sym_5721,"(method accumulate1)");
  eul_intern_symbol(sym_5723,"converter");
  eul_intern_symbol(sym_5725,"<table>");
  object_class(cons_5724) = eul_static_cons_class;
  eul_car(cons_5724) = sym_5725;
  eul_cdr(cons_5724) = eul_nil;
  object_class(cons_5722) = eul_static_cons_class;
  eul_car(cons_5722) = sym_5723;
  eul_allocate_bytevector( G005705,G005704);
  eul_allocate_bytevector( G005727,G005726);
  eul_allocate_bytevector( G005729,G005728);
  eul_allocate_bytevector( G005731,G005730);
  eul_allocate_bytevector( G005733,G005732);
  eul_allocate_bytevector( G005735,G005734);
  eul_allocate_bytevector( G005737,G005736);
  eul_allocate_bytevector( G005739,G005738);
  eul_allocate_bytevector( G005741,G005740);
  eul_allocate_bytevector( G005743,G005742);
  eul_allocate_bytevector( G005745,G005744);
  eul_allocate_bytevector( G005747,G005746);
  eul_allocate_bytevector( G005749,G005748);
  eul_allocate_bytevector( G005751,G005750);
  eul_allocate_bytevector( G005753,G005752);
  eul_intern_symbol(sym_5756,"accumulate1-table");
  eul_intern_symbol(sym_5757,"do1-table");
  eul_intern_symbol(sym_5758,"anyp1-table");
  eul_intern_symbol(sym_5759,"table-rehash");
  eul_intern_symbol(sym_5760,"map1-table");
  eul_intern_symbol(sym_5761,"table-empty?");
  eul_intern_symbol(sym_5762,"all1-table?");
  eul_intern_symbol(sym_5763,"accumulate-table");
  eul_intern_symbol(sym_5764,"top-level");
  eul_allocate_bytevector( G005755,G005754);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      table_bindings[i] = eul_nil;
  }

  table_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_table_ref5652;
  table_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_addr_str5653;
  table_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_table_set5654;
  table_bindings[ 14] = G005656;
  table_bindings[ 15] = G005658;
  table_bindings[ 16] = G005660;
  table_bindings[ 17] = sym_5663;
  table_bindings[ 18] = G005662;
  table_bindings[ 19] = str_5666;
  table_bindings[ 20] = G005665;
  table_bindings[ 21] = str_5669;
  table_bindings[ 22] = G005668;
  table_bindings[ 23] = str_5672;
  table_bindings[ 24] = G005671;
  table_bindings[ 25] = str_5675;
  table_bindings[ 26] = G005674;
  table_bindings[ 27] = G005677;
  table_bindings[ 28] = G005679;
  table_bindings[ 29] = G005681;
  table_bindings[ 30] = G005683;
  table_bindings[ 31] = str_5686;
  table_bindings[ 32] = G005685;
  table_bindings[ 33] = G005688;
  table_bindings[ 34] = G005690;
  table_bindings[ 35] = G005692;
  table_bindings[ 36] = G005694;
  table_bindings[ 37] = G005696;
  table_bindings[ 38] = str_5699;
  table_bindings[ 39] = G005698;
  table_bindings[ 40] = G005701;
  table_bindings[ 41] = G005703;
  table_bindings[ 42] = sym_5706;
  table_bindings[ 43] = sym_5707;
  table_bindings[ 44] = sym_5708;
  table_bindings[ 45] = sym_5709;
  table_bindings[ 46] = sym_5711;
  table_bindings[ 47] = cons_5710;
  table_bindings[ 48] = sym_5713;
  table_bindings[ 49] = sym_5714;
  table_bindings[ 50] = sym_5715;
  table_bindings[ 51] = sym_5716;
  table_bindings[ 52] = sym_5717;
  table_bindings[ 53] = sym_5718;
  table_bindings[ 54] = sym_5719;
  table_bindings[ 55] = sym_5720;
  table_bindings[ 56] = sym_5721;
  table_bindings[ 57] = sym_5723;
  table_bindings[ 58] = sym_5725;
  table_bindings[ 59] = cons_5722;
  table_bindings[ 60] = G005705;
  table_bindings[ 61] = G005727;
  table_bindings[ 62] = G005729;
  table_bindings[ 63] = G005731;
  table_bindings[ 64] = G005733;
  table_bindings[ 65] = G005735;
  table_bindings[ 66] = G005737;
  table_bindings[ 67] = G005739;
  table_bindings[ 68] = G005741;
  table_bindings[ 69] = G005743;
  table_bindings[ 70] = G005745;
  table_bindings[ 71] = G005747;
  table_bindings[ 72] = G005749;
  table_bindings[ 73] = G005751;
  table_bindings[ 74] = G005753;
  table_bindings[ 1] = eul_nil;
  table_bindings[ 75] = sym_5756;
  table_bindings[ 76] = sym_5757;
  table_bindings[ 77] = sym_5758;
  table_bindings[ 78] = sym_5759;
  table_bindings[ 79] = sym_5760;
  table_bindings[ 80] = sym_5761;
  table_bindings[ 81] = sym_5762;
  table_bindings[ 82] = sym_5763;
  table_bindings[ 83] = sym_5764;
  eul_allocate_lambda( table_bindings[0], "initialize-table", 0, G005755);

  }
}


/* eof */
