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
static LispRef ff_stub_eul_table_ref8033 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G008146, G008147, res;

  POPVAL1(G008147);
  POPVAL1(G008146);
  FF_RES_CONVERT6(res,eul_table_ref(FF_ARG_CONVERT8(G008146), FF_ARG_CONVERT3(G008147)));
  return res;
}

static LispRef ff_stub_eul_addr_str8034 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G008148, res;

  POPVAL1(G008148);
  FF_RES_CONVERT3(res,eul_addr_str(FF_ARG_CONVERT8(G008148)));
  return res;
}

static LispRef ff_stub_eul_table_set8035 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G008149, G008150, G008151, res;

  POPVAL1(G008151);
  POPVAL1(G008150);
  POPVAL1(G008149);
  FF_RES_CONVERT6(res,eul_table_set(FF_ARG_CONVERT8(G008149), FF_ARG_CONVERT3(G008150), FF_ARG_CONVERT8(G008151)));
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
  LispRef sym_8145, sym_8144, sym_8143, sym_8142, sym_8141, sym_8140, sym_8139, sym_8138, sym_8137, G008136, G008134, G008132, G008130, G008128, G008126, G008124, G008122, G008120, G008118, G008116, G008114, G008112, G008110, G008108, sym_8106, sym_8104, sym_8102, sym_8101, sym_8100, sym_8099, sym_8098, sym_8097, sym_8096, sym_8095, sym_8094, sym_8092, sym_8090, sym_8089, sym_8088, sym_8087, G008086, G008084, G008082, G008079, G008077, G008075, G008073, G008071, G008069, G008066, G008064, G008062, G008060, G008058, G008055, G008052, G008049, G008046, sym_8044, G008043, G008041, G008039, G008037;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: (method-accumulate1) */
  static const void *G008036[] = {I(ab,24,00,00),B(table ,8),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: (method-accumulate) */
  static const void *G008038[] = {I(43,03,24,00),B(table ,2),I(3d,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 16 binding: anonymous */
  static const void *G008040[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,20),I(1c,10,1d,11),I(47,00,00,1d),I(1d,47,00,01),I(3d,03,04,22),I(02,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 18 binding: (method-member) */
  static const void *G008042[] = {I(43,fd,46,02),I(1d,48,00,00),I(1b,12,1b,34),I(00,00,00,19),I(1d,47,00,00),I(24,00,00,00),B(table ,3),I(3d,02,04,32),I(00,00,00,3e),I(1c,10,1b,48),I(00,01,1f,03),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(1c,23,00,00),B(table ,17),I(23,00,00,00),B(table ,16),I(3b,01,24,00),B(collect ,12),I(3d,03,06,22),I(02,45,04,00)};

  eul_allocate_static_string(str_8047, "allp on multiple tables not yet implemented", 43);
  /* Byte-vector with size: 13 is_init: 0 index: 20 binding: (method-allp) */
  static const void *G008045[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,9),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,19),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_8050, "anyp on multiple tables not yet implemented", 43);
  /* Byte-vector with size: 13 is_init: 0 index: 22 binding: (method-anyp) */
  static const void *G008048[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,6),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,21),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_8053, "map on multiple tables not yet implemented", 42);
  /* Byte-vector with size: 13 is_init: 0 index: 24 binding: (method-map) */
  static const void *G008051[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,4),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,23),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_8056, "do on multiple tables not yet implemented", 41);
  /* Byte-vector with size: 13 is_init: 0 index: 26 binding: (method-do) */
  static const void *G008054[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,7),I(3d,02,03,32),I(00,00,00,18),I(23,00,00,00),B(table ,25),I(24,00,00,00),B(boot ,22),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: (method-emptyp) */
  static const void *G008057[] = {I(aa,24,00,00),B(table ,10),I(3d,01,00,00)};

  /* Byte-vector with size: 52 is_init: 0 index: 28 binding: anonymous */
  static const void *G008059[] = {I(aa,47,00,03),I(1c,02,1b,7a),I(1b,34,00,00),I(00,00,00,5b),I(1c,10,1b,47),I(00,01,47,00),I(04,3c,02,1b),I(34,00,00,00),I(00,00,00,1c),I(1f,03,11,1f),I(04,47,00,02),I(90,2a,1b,22),I(01,32,00,00),I(00,00,00,2c),I(1f,04,2b,1b),I(47,00,06,1a),I(1b,34,00,00),I(00,00,00,13),I(1c,47,00,05),I(3d,01,07,32),I(00,00,00,0c),I(82,47,00,05),I(3d,01,07,22),I(02,22,02,32),I(00,00,00,6c),I(47,00,00,83),I(24,00,00,00),B(table1 ,4),I(08,2b,47,00),I(01,47,00,02),I(0f,47,00,03),I(1f,05,1d,03),I(2a,47,00,00),I(1d,1c,83,1d),I(24,00,00,00),B(table1 ,4),I(09,22,02,2a),I(47,00,00,82),I(24,00,00,00),B(table1 ,4),I(08,1d,1c,1a),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,11),I(47,00,00,24),B(table ,5),I(3c,01,2a,47),I(00,00,84,24),B(table1 ,4),I(08,22,04,45),I(03,00,00,00)};

  /* Byte-vector with size: 48 is_init: 0 index: 29 binding: (method-(setter table-ref)) */
  static const void *G008061[] = {I(43,03,46,0a),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(83,24,00,00),B(table1 ,8),I(08,47,00,00),I(82,24,00,00),B(table1 ,8),I(08,1d,48,00),I(03,1c,48,00),I(04,47,00,03),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,36),I(26,00,00,00),I(00,00,00,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,1b,48),I(00,03,47,00),I(03,47,00,00),I(1c,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,22,04,2a),I(47,00,03,06),I(1b,48,00,06),I(47,00,01,1f),I(03,3c,01,1b),I(47,00,06,18),I(86,1b,48,00),I(05,23,00,00),B(table ,17),I(23,00,00,00),B(table ,28),I(3b,01,48,00),I(05,1c,47,00),I(05,3d,01,0b)};

  /* Byte-vector with size: 6 is_init: 0 index: 30 binding: (method-(setter table-ref)) */
  static const void *G008063[] = {I(43,03,1c,24),B(collect ,8),I(3c,01,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  eul_allocate_static_string(str_8067, "", 1);
  /* Byte-vector with size: 8 is_init: 0 index: 32 binding: (method-(setter table-ref)) */
  static const void *G008065[] = {I(43,03,1c,23),B(table ,31),I(24,00,00,00),B(string ,11),I(3c,02,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 33 binding: (method-(setter table-ref)) */
  static const void *G008068[] = {I(43,03,1c,41),B(table ,12),I(22,01,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 34 binding: (method-(setter element)) */
  static const void *G008070[] = {I(43,03,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1f,03),I(1f,03,1f,03),I(1f,03,3d,03),I(04,45,04,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 35 binding: anonymous */
  static const void *G008072[] = {I(aa,47,00,02),I(1c,02,1b,7a),I(1b,34,00,00),I(00,00,00,4f),I(1c,10,1b,47),I(00,01,47,00),I(03,3c,02,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,11,32),I(00,00,00,2a),I(1f,04,2b,1b),I(47,00,05,1a),I(1b,34,00,00),I(00,00,00,13),I(1c,47,00,04),I(3d,01,07,32),I(00,00,00,0c),I(82,47,00,04),I(3d,01,07,22),I(02,22,02,32),I(00,00,00,12),I(47,00,00,84),I(24,00,00,00),B(table1 ,4),I(08,45,03,00)};

  /* Byte-vector with size: 39 is_init: 0 index: 36 binding: (method-table-ref) */
  static const void *G008074[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,26,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(83,24,00,00),B(table1 ,8),I(08,47,00,00),I(82,24,00,00),B(table1 ,8),I(08,1d,48,00),I(02,1c,48,00),I(03,47,00,02),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,41),I(47,00,02,06),I(1b,48,00,05),I(47,00,01,1f),I(03,3c,01,1b),I(47,00,05,18),I(86,1b,48,00),I(04,23,00,00),B(table ,17),I(23,00,00,00),B(table ,35),I(3b,01,48,00),I(04,1c,47,00),I(04,3d,01,0a),I(22,04,32,00),I(00,00,00,13),I(47,00,00,84),I(24,00,00,00),B(table1 ,4),I(08,45,06,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 37 binding: (method-table-ref) */
  static const void *G008076[] = {I(ab,24,00,00),B(collect ,8),I(3c,01,41,00),B(table ,11),I(45,02,00,00)};

  eul_allocate_static_string(str_8080, "", 1);
  /* Byte-vector with size: 7 is_init: 0 index: 39 binding: (method-table-ref) */
  static const void *G008078[] = {I(ab,23,00,00),B(table ,38),I(24,00,00,00),B(string ,11),I(3c,02,41,00),B(table ,11),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-table-ref) */
  static const void *G008081[] = {I(ab,41,00,00),B(table ,12),I(22,01,41,00),B(table ,11),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-element) */
  static const void *G008083[] = {I(ab,24,00,00),B(table ,3),I(3d,02,00,00)};

  eul_allocate_static_cons(cons_8093, NULL, NULL);
  eul_allocate_static_cons(cons_8091, NULL, eul_as_static(cons_8093));
  eul_allocate_static_cons(cons_8105, NULL, NULL);
  eul_allocate_static_cons(cons_8103, NULL, eul_as_static(cons_8105));
  /* Byte-vector with size: 658 is_init: 0 index: 60 binding: top-level */
  static const void *G008085[] = {I(a9,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table ,42),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table ,3),I(2a,24,00,00),B(collect ,23),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,4),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,43),I(23,00,00,00),B(table ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(2a,24,00,00),B(table ,3),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,14),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,14),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,14),I(24,00,00,00),B(mop_class ,34),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,8),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,45),I(23,00,00,00),B(table ,34),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(table ,3),I(1c,1f,06,3c),I(02,2a,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,2a,24),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,14),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,33),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,14),I(24,00,00,00),B(string ,13),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,32),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,14),I(24,00,00,00),B(mop_class ,34),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,30),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,8),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,49),I(23,00,00,00),B(table ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(24,00,00,00),B(table1 ,8),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,50),I(23,00,00,00),B(table ,26),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(24,00,00,00),B(table1 ,8),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,51),I(23,00,00,00),B(table ,24),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,16),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(24,00,00,00),B(table1 ,8),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,52),I(23,00,00,00),B(table ,22),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,15),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(24,00,00,00),B(table1 ,8),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,15),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,53),I(23,00,00,00),B(table ,20),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,15),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,54),I(23,00,00,00),B(table ,18),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,26),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,28),I(86,24,00,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,26),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,55),I(23,00,00,00),B(table ,15),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,26),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(24,00,00,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table ,56),I(23,00,00,00),B(table ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table ,59),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(table1 ,4),I(1c,1f,06,3c),I(02,2a,24,00),B(table1 ,4),I(24,00,00,00),B(mop_class ,13),I(3d,01,89,45),I(89,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 61 binding: accumulate-table */
  static const void *G008107[] = {I(43,03,24,00),B(table1 ,16),I(3c,01,24,00),B(list ,17),I(3d,03,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 62 binding: anonymous */
  static const void *G008109[] = {I(ab,1c,47,00),I(03,1a,1b,34),I(00,00,00,49),I(47,00,02,1f),I(03,02,1f,03),I(2b,1c,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,10,1f,03),I(11,1c,1c,47),I(00,00,3c,02),I(1b,1f,08,0f),I(1f,05,1c,47),I(00,01,3d,02),I(0a,22,04,32),I(00,00,00,0e),I(1c,1f,05,47),I(00,01,3d,02),I(06,22,03,32),I(00,00,00,10),I(1c,24,00,00),B(boot ,24),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 63 binding: map1-table */
  static const void *G008111[] = {I(ab,46,04,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,1b,48,00),I(02,47,00,02),I(06,1b,48,00),I(03,47,00,02),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,2d),I(86,1b,48,00),I(01,23,00,00),B(table ,17),I(23,00,00,00),B(table ,62),I(3b,02,48,00),I(01,82,86,47),I(00,01,3d,02),I(05,22,01,32),I(00,00,00,06),I(86,45,04,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 64 binding: anonymous */
  static const void *G008113[] = {I(aa,1b,47,00),I(05,1a,1b,34),I(00,00,00,45),I(47,00,01,1d),I(02,1b,7a,1b),I(34,00,00,00),I(00,00,00,24),I(1c,10,47,00),I(02,3c,01,1b),I(47,00,06,18),I(1b,1f,04,47),I(00,03,3c,02),I(22,02,32,00),I(00,00,00,07),I(86,2a,1f,03),I(2b,47,00,04),I(3d,01,04,22),I(02,32,00,00),I(00,00,00,0a),I(47,00,00,45),I(02,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 65 binding: anonymous */
  static const void *G008115[] = {I(ab,1c,47,00),I(06,1a,1b,34),I(00,00,00,35),I(47,00,07,1f),I(03,02,1b,34),I(00,00,00,19),I(1f,03,2b,1b),I(1f,04,47,00),I(03,3d,02,05),I(22,01,32,00),I(00,00,00,0e),I(47,00,07,1f),I(04,1f,04,03),I(22,01,32,00),I(00,00,00,0e),I(82,1d,47,00),I(03,3d,02,03),I(45,03,00,00)};

  /* Byte-vector with size: 56 is_init: 0 index: 66 binding: table-rehash */
  static const void *G008117[] = {I(aa,46,08,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,47,00,00),I(82,24,00,00),B(table1 ,8),I(08,1c,48,00),I(01,1b,48,00),I(02,47,00,01),I(24,00,00,00),B(vector ,5),I(3c,01,1b,34),I(00,00,00,9d),I(47,00,01,06),I(1b,48,00,05),I(47,00,05,84),I(16,1b,48,00),I(06,47,00,06),I(24,00,00,00),B(boot1 ,39),I(3c,01,1b,48),I(00,07,47,00),I(00,82,24,00),B(table1 ,4),I(08,84,16,47),I(00,00,47,00),I(07,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,22,02,2a),I(47,00,00,1c),I(1c,82,1d,24),B(table1 ,4),I(09,22,02,2a),I(86,86,1c,48),I(00,03,1b,48),I(00,04,23,00),B(table ,17),I(23,00,00,00),B(table ,65),I(3b,02,48,00),I(03,23,00,00),B(table ,17),I(23,00,00,00),B(table ,64),I(3b,01,48,00),I(04,82,47,00),I(04,3d,01,0a),I(22,06,32,00),I(00,00,00,09),I(47,00,00,45),I(04,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 67 binding: anonymous */
  static const void *G008119[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,11),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,45,02)};

  /* Byte-vector with size: 12 is_init: 0 index: 68 binding: anyp1-table */
  static const void *G008121[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,67),I(3b,01,1c,24),B(vector ,4),I(3d,02,02,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 69 binding: anonymous */
  static const void *G008123[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,18),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,32,00),I(00,00,00,07),I(86,45,02,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 70 binding: do1-table */
  static const void *G008125[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,69),I(3b,01,1c,24),B(vector ,13),I(3d,02,02,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 71 binding: accumulate1-table */
  static const void *G008127[] = {I(ab,24,00,00),B(table1 ,16),I(3c,01,24,00),B(list ,15),I(3d,02,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 72 binding: anonymous */
  static const void *G008129[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,11),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,45,02)};

  /* Byte-vector with size: 12 is_init: 0 index: 73 binding: allp1-table */
  static const void *G008131[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,72),I(3b,01,1c,24),B(vector ,9),I(3d,02,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 74 binding: table-empty-p */
  static const void *G008133[] = {I(aa,83,24,00),B(table1 ,4),I(08,2d,45,00)};

  /* Byte-vector with size: 108 is_init: 1 index: 0 binding: initialize-table */
  static const void *G008135[] = {I(87,25,00,00),B(table ,1),I(24,00,00,00),B(table1 ,1),I(3e,0b,24,00),B(table1 ,0),I(3c,00,21,01),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(table ,75),I(23,00,00,00),B(table ,74),I(3b,01,25,00),B(table ,10),I(23,00,00,00),B(table ,76),I(23,00,00,00),B(table ,73),I(3b,02,25,00),B(table ,9),I(23,00,00,00),B(table ,77),I(23,00,00,00),B(table ,71),I(3b,02,25,00),B(table ,8),I(23,00,00,00),B(table ,78),I(23,00,00,00),B(table ,70),I(3b,02,25,00),B(table ,7),I(23,00,00,00),B(table ,79),I(23,00,00,00),B(table ,68),I(3b,02,25,00),B(table ,6),I(23,00,00,00),B(table ,80),I(23,00,00,00),B(table ,66),I(3b,01,25,00),B(table ,5),I(23,00,00,00),B(table ,81),I(23,00,00,00),B(table ,63),I(3b,02,25,00),B(table ,4),I(86,25,00,00),B(table ,3),I(23,00,00,00),B(table ,82),I(23,00,00,00),B(table ,61),I(3b,03,25,00),B(table ,2),I(23,00,00,00),B(table ,83),I(23,00,00,00),B(table ,60),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G008037,G008036);
  eul_allocate_bytevector( G008039,G008038);
  eul_allocate_bytevector( G008041,G008040);
  eul_intern_symbol(sym_8044,"anonymous");
  eul_allocate_bytevector( G008043,G008042);
  object_class(str_8047) = eul_static_string_class;
  eul_allocate_bytevector( G008046,G008045);
  object_class(str_8050) = eul_static_string_class;
  eul_allocate_bytevector( G008049,G008048);
  object_class(str_8053) = eul_static_string_class;
  eul_allocate_bytevector( G008052,G008051);
  object_class(str_8056) = eul_static_string_class;
  eul_allocate_bytevector( G008055,G008054);
  eul_allocate_bytevector( G008058,G008057);
  eul_allocate_bytevector( G008060,G008059);
  eul_allocate_bytevector( G008062,G008061);
  eul_allocate_bytevector( G008064,G008063);
  object_class(str_8067) = eul_static_string_class;
  eul_allocate_bytevector( G008066,G008065);
  eul_allocate_bytevector( G008069,G008068);
  eul_allocate_bytevector( G008071,G008070);
  eul_allocate_bytevector( G008073,G008072);
  eul_allocate_bytevector( G008075,G008074);
  eul_allocate_bytevector( G008077,G008076);
  object_class(str_8080) = eul_static_string_class;
  eul_allocate_bytevector( G008079,G008078);
  eul_allocate_bytevector( G008082,G008081);
  eul_allocate_bytevector( G008084,G008083);
  eul_intern_symbol(sym_8087,"table-ref");
  eul_intern_symbol(sym_8088,"(method element)");
  eul_intern_symbol(sym_8089,"(method table-ref)");
  eul_intern_symbol(sym_8090,"(method (setter element))");
  eul_intern_symbol(sym_8092,"setter");
  object_class(cons_8093) = eul_static_cons_class;
  eul_car(cons_8093) = sym_8087;
  eul_cdr(cons_8093) = eul_nil;
  object_class(cons_8091) = eul_static_cons_class;
  eul_car(cons_8091) = sym_8092;
  eul_intern_symbol(sym_8094,"(method (setter table-ref))");
  eul_intern_symbol(sym_8095,"(method emptyp)");
  eul_intern_symbol(sym_8096,"(method do)");
  eul_intern_symbol(sym_8097,"(method map)");
  eul_intern_symbol(sym_8098,"(method anyp)");
  eul_intern_symbol(sym_8099,"(method allp)");
  eul_intern_symbol(sym_8100,"(method member)");
  eul_intern_symbol(sym_8101,"(method accumulate)");
  eul_intern_symbol(sym_8102,"(method accumulate1)");
  eul_intern_symbol(sym_8104,"converter");
  eul_intern_symbol(sym_8106,"<table>");
  object_class(cons_8105) = eul_static_cons_class;
  eul_car(cons_8105) = sym_8106;
  eul_cdr(cons_8105) = eul_nil;
  object_class(cons_8103) = eul_static_cons_class;
  eul_car(cons_8103) = sym_8104;
  eul_allocate_bytevector( G008086,G008085);
  eul_allocate_bytevector( G008108,G008107);
  eul_allocate_bytevector( G008110,G008109);
  eul_allocate_bytevector( G008112,G008111);
  eul_allocate_bytevector( G008114,G008113);
  eul_allocate_bytevector( G008116,G008115);
  eul_allocate_bytevector( G008118,G008117);
  eul_allocate_bytevector( G008120,G008119);
  eul_allocate_bytevector( G008122,G008121);
  eul_allocate_bytevector( G008124,G008123);
  eul_allocate_bytevector( G008126,G008125);
  eul_allocate_bytevector( G008128,G008127);
  eul_allocate_bytevector( G008130,G008129);
  eul_allocate_bytevector( G008132,G008131);
  eul_allocate_bytevector( G008134,G008133);
  eul_intern_symbol(sym_8137,"table-empty-p");
  eul_intern_symbol(sym_8138,"allp1-table");
  eul_intern_symbol(sym_8139,"accumulate1-table");
  eul_intern_symbol(sym_8140,"do1-table");
  eul_intern_symbol(sym_8141,"anyp1-table");
  eul_intern_symbol(sym_8142,"table-rehash");
  eul_intern_symbol(sym_8143,"map1-table");
  eul_intern_symbol(sym_8144,"accumulate-table");
  eul_intern_symbol(sym_8145,"top-level");
  eul_allocate_bytevector( G008136,G008135);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      table_bindings[i] = eul_nil;
  }

  table_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_table_ref8033;
  table_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_addr_str8034;
  table_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_table_set8035;
  table_bindings[ 14] = G008037;
  table_bindings[ 15] = G008039;
  table_bindings[ 16] = G008041;
  table_bindings[ 17] = sym_8044;
  table_bindings[ 18] = G008043;
  table_bindings[ 19] = str_8047;
  table_bindings[ 20] = G008046;
  table_bindings[ 21] = str_8050;
  table_bindings[ 22] = G008049;
  table_bindings[ 23] = str_8053;
  table_bindings[ 24] = G008052;
  table_bindings[ 25] = str_8056;
  table_bindings[ 26] = G008055;
  table_bindings[ 27] = G008058;
  table_bindings[ 28] = G008060;
  table_bindings[ 29] = G008062;
  table_bindings[ 30] = G008064;
  table_bindings[ 31] = str_8067;
  table_bindings[ 32] = G008066;
  table_bindings[ 33] = G008069;
  table_bindings[ 34] = G008071;
  table_bindings[ 35] = G008073;
  table_bindings[ 36] = G008075;
  table_bindings[ 37] = G008077;
  table_bindings[ 38] = str_8080;
  table_bindings[ 39] = G008079;
  table_bindings[ 40] = G008082;
  table_bindings[ 41] = G008084;
  table_bindings[ 42] = sym_8087;
  table_bindings[ 43] = sym_8088;
  table_bindings[ 44] = sym_8089;
  table_bindings[ 45] = sym_8090;
  table_bindings[ 46] = sym_8092;
  table_bindings[ 47] = cons_8091;
  table_bindings[ 48] = sym_8094;
  table_bindings[ 49] = sym_8095;
  table_bindings[ 50] = sym_8096;
  table_bindings[ 51] = sym_8097;
  table_bindings[ 52] = sym_8098;
  table_bindings[ 53] = sym_8099;
  table_bindings[ 54] = sym_8100;
  table_bindings[ 55] = sym_8101;
  table_bindings[ 56] = sym_8102;
  table_bindings[ 57] = sym_8104;
  table_bindings[ 58] = sym_8106;
  table_bindings[ 59] = cons_8103;
  table_bindings[ 60] = G008086;
  table_bindings[ 61] = G008108;
  table_bindings[ 62] = G008110;
  table_bindings[ 63] = G008112;
  table_bindings[ 64] = G008114;
  table_bindings[ 65] = G008116;
  table_bindings[ 66] = G008118;
  table_bindings[ 67] = G008120;
  table_bindings[ 68] = G008122;
  table_bindings[ 69] = G008124;
  table_bindings[ 70] = G008126;
  table_bindings[ 71] = G008128;
  table_bindings[ 72] = G008130;
  table_bindings[ 73] = G008132;
  table_bindings[ 74] = G008134;
  table_bindings[ 1] = eul_nil;
  table_bindings[ 75] = sym_8137;
  table_bindings[ 76] = sym_8138;
  table_bindings[ 77] = sym_8139;
  table_bindings[ 78] = sym_8140;
  table_bindings[ 79] = sym_8141;
  table_bindings[ 80] = sym_8142;
  table_bindings[ 81] = sym_8143;
  table_bindings[ 82] = sym_8144;
  table_bindings[ 83] = sym_8145;
  eul_allocate_lambda( table_bindings[0], "initialize-table", 0, G008136);

  }
}


/* eof */