/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module ex-syntax
 **  Copyright: See file ex-syntax.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_env();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_cg_interf();
extern LispRef cg_interf_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef thread_bindings[];
extern LispRef convert_bindings[];
extern LispRef collect_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];
extern LispRef p_env_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef sx_node_bindings[];

/* Module bindings with size 80 */
LispRef ex_syntax_bindings[80];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-syntax */
void initialize_module_ex_syntax()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_env();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_cg_interf();
  eul_fast_table_set(eul_modules,"ex_syntax",(LispRef) ex_syntax_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5018, sym_5017, sym_5016, sym_5015, sym_5014, sym_5013, sym_5012, sym_5011, sym_5010, G005009, G005007, G005005, G005002, G005000, G004996, G004994, G004992, G004990, G004988, sym_4986, G004984, sym_4982, G004979, G004977, G004975, G004972, sym_4970, sym_4969, sym_4968, sym_4967, G004966, sym_4964, G004963, G004959, G004957, G004955, sym_4953, G004952, G004948, G004946, G004944, sym_4942, G004941, G004937, G004935, G004933, G004931, sym_4929, sym_4928, G004927, key_4925, G004922, G004920, G004918, G004916;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 18 is_init: 0 index: 11 binding: anonymous */
  static const void *G004915[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(sx_node ,21),I(3c,01,47,00),I(02,1d,24,00),B(ex_syntax ,5),I(3c,02,1c,1c),I(1c,26,00,00),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,15),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 12 binding: anonymous */
  static const void *G004917[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-G004757) */
  static const void *G004919[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4923, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4924, "bad syntax prefix syntax", 24);
  /* Byte-vector with size: 27 is_init: 0 index: 17 binding: (method-G004757) */
  static const void *G004921[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,14),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,15),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,22),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 109 is_init: 0 index: 20 binding: anonymous */
  static const void *G004926[] = {I(ab,46,07,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,19),I(23,00,00,00),B(ex_syntax ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,19),I(23,00,00,00),B(ex_syntax ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,77,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,00),I(73,1b,48,00),I(02,1c,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,15),I(3c,02,47,00),I(00,76,24,00),B(number ,9),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,12),I(3b,01,1c,24),B(boot ,4),I(3c,02,2a,47),I(00,00,76,23),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,11),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1b,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 21 binding: anonymous */
  static const void *G004930[] = {I(aa,1b,10,1b),I(47,00,01,24),B(ex_syntax ,2),I(3c,02,24,00),B(sx_node ,21),I(3c,01,1d,73),I(1c,1c,1c,26),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,15),I(3d,01,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 22 binding: anonymous */
  static const void *G004932[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: (method-G004727) */
  static const void *G004934[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4938, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4939, "bad syntax rename syntax", 24);
  /* Byte-vector with size: 27 is_init: 0 index: 26 binding: (method-G004727) */
  static const void *G004936[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,24),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,25),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,22),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 112 is_init: 0 index: 28 binding: anonymous */
  static const void *G004940[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,27),I(23,00,00,00),B(ex_syntax ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,27),I(23,00,00,00),B(ex_syntax ,23),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,24,00,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,15),I(3c,02,47,00),I(00,73,24,00),B(boot1 ,29),I(1c,24,00,00),B(boot ,15),I(3c,02,1d,1c),I(24,00,00,00),B(number ,9),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,22),I(3b,01,1c,24),B(boot ,4),I(3c,02,2a,47),I(00,00,73,23),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,21),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1c,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 29 binding: anonymous */
  static const void *G004943[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-G004701) */
  static const void *G004945[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4949, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4950, "bad syntax except syntax", 24);
  /* Byte-vector with size: 27 is_init: 0 index: 33 binding: (method-G004701) */
  static const void *G004947[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,31),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,32),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,22),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 100 is_init: 0 index: 35 binding: anonymous */
  static const void *G004951[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,34),I(23,00,00,00),B(ex_syntax ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,34),I(23,00,00,00),B(ex_syntax ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,15),I(3c,02,47,00),I(00,73,24,00),B(number ,9),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,29),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,19,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 36 binding: anonymous */
  static const void *G004954[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 37 binding: (method-G004677) */
  static const void *G004956[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4960, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4961, "bad syntax only syntax", 22);
  /* Byte-vector with size: 27 is_init: 0 index: 40 binding: (method-G004677) */
  static const void *G004958[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,38),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,39),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,22),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 87 is_init: 0 index: 42 binding: anonymous */
  static const void *G004962[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,41),I(23,00,00,00),B(ex_syntax ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,41),I(23,00,00,00),B(ex_syntax ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(00,73,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,36),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 47 binding: top-level */
  static const void *G004965[] = {I(a9,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(ex_syntax ,10),I(2a,23,00,00),B(ex_syntax ,43),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,42),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,44),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,35),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,45),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,28),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,46),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,20),I(3b,02,24,00),B(ex_syntax ,8),I(3d,02,01,45),I(01,00,00,00)};

  eul_allocate_static_string(str_4973, "external syntax binding ~a not available in module", 50);
  /* Byte-vector with size: 23 is_init: 0 index: 49 binding: import-syntax-binding */
  static const void *G004971[] = {I(ab,1c,1c,24),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,27),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(ex_syntax ,48),I(1f,05,1f,05),I(24,00,00,00),B(i_notify ,6),I(3c,04,22,01),I(1b,87,1c,26),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1d,24,00,00),B(ex_syntax ,9),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 50 binding: anonymous */
  static const void *G004974[] = {I(ab,1b,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,41,00,00),B(aux_table ,10),I(22,01,1d,1c),I(24,00,00,00),B(p_env ,15),I(3d,02,04,22),I(01,32,00,00),I(00,00,00,26),I(1c,24,00,00),B(p_env ,15),I(3c,01,2a,1c),I(87,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 51 binding: (method-G004629) */
  static const void *G004976[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4980, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4981, "cannot import syntax module ~a", 30);
  /* Byte-vector with size: 33 is_init: 0 index: 55 binding: (method-G004629) */
  static const void *G004978[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,52),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,44),I(86,23,00,00),B(ex_syntax ,53),I(47,00,00,24),B(mop_gf ,17),I(3c,03,23,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,24),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(1f,03,24,00),B(boot ,22),I(3d,04,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_4985, "  Import syntax module ~a ...", 29);
  /* Byte-vector with size: 102 is_init: 0 index: 58 binding: import-syntax-module */
  static const void *G004983[] = {I(aa,46,01,1b),I(48,00,00,23),B(ex_syntax ,56),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,84),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,57),I(23,00,00,00),B(ex_syntax ,55),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,57),I(23,00,00,00),B(ex_syntax ,51),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,24),B(p_env ,13),I(3c,01,1b,26),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,50),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,1c),I(24,00,00,00),B(ex_syntax ,9),I(3c,01,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 59 binding: expand-syntax-import */
  static const void *G004987[] = {I(aa,24,00,00),B(ex_syntax ,6),I(24,00,00,00),B(ex_syntax ,6),I(3d,02,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 60 binding: make-prefix */
  static const void *G004989[] = {I(ab,1c,82,02),I(1c,82,02,1c),I(1c,24,00,00),B(collect ,19),I(3c,02,24,00),B(mop_class ,5),I(24,00,00,00),B(convert ,2),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 61 binding: anonymous */
  static const void *G004991[] = {I(ab,1c,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 62 binding: anonymous */
  static const void *G004993[] = {I(ab,1c,24,00),B(ex_syntax ,3),I(3d,01,02,00)};

  eul_allocate_static_string(str_4997, "no syntax-import expander ~a available", 38);
  eul_allocate_static_string(str_4998, "no syntax-import expander ~a available", 38);
  /* Byte-vector with size: 43 is_init: 0 index: 65 binding: syntax-import-expander */
  static const void *G004995[] = {I(ab,1c,7c,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,62),I(3b,02,32,00),I(00,00,00,84),I(1d,7a,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,61),I(3b,02,32,00),I(00,00,00,5e),I(1f,03,10,7c),I(1b,34,00,00),I(00,00,00,3f),I(1f,04,10,24),B(ex_syntax ,10),I(3c,01,1b,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,19),I(23,00,00,00),B(ex_syntax ,63),I(1f,07,24,00),B(boot ,22),I(3c,02,22,02),I(32,00,00,00),I(00,00,00,1a),I(23,00,00,00),B(ex_syntax ,64),I(1f,05,24,00),B(boot ,22),I(3c,02,22,01),I(22,01,1f,03),I(1f,03,1d,3d),I(02,04,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 66 binding: expand-old-syntax-imports */
  static const void *G004999[] = {I(aa,24,00,00),B(ex_syntax ,4),I(1c,24,00,00),B(boot ,15),I(3d,02,01,00)};

  eul_allocate_static_string(str_5003, "redefinition of expander ~a", 27);
  /* Byte-vector with size: 17 is_init: 0 index: 68 binding: install-syntax-import-expander */
  static const void *G005001[] = {I(ab,1c,24,00),B(ex_syntax ,10),I(3c,01,1b,34),I(00,00,00,1d),I(86,23,00,00),B(ex_syntax ,67),I(1f,04,24,00),B(i_notify ,5),I(3c,03,32,00),I(00,00,00,07),I(86,2a,24,00),B(ex_syntax ,10),I(24,00,00,00),B(boot1 ,41),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,04,00,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 69 binding: anonymous */
  static const void *G005004[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,44),I(23,00,00,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,84),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,47,00),I(00,24,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,84,1d,24),B(sx_obj1 ,59),I(09,22,05,32),I(00,00,00,5e),I(1c,10,1b,24),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,29),I(1c,47,00,00),I(50,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,01,3d,01),I(05,22,01,32),I(00,00,00,28),I(1c,47,00,02),I(50,1b,34,00),I(00,00,00,12),I(1f,04,47,00),I(00,8f,32,00),I(00,00,00,0f),I(1f,04,11,47),I(00,01,3d,01),I(05,22,01,22),I(02,45,02,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 70 binding: register-imported-syntax-module */
  static const void *G005006[] = {I(aa,46,04,1b),I(48,00,00,47),I(00,00,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,1d),I(47,00,00,26),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,32,00,00),I(00,00,00,0a),I(47,00,00,1b),I(48,00,02,86),I(1b,48,00,01),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,69),I(3b,01,48,00),I(01,23,00,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,84),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,01),I(3d,01,05,00)};

  /* Byte-vector with size: 88 is_init: 1 index: 0 binding: initialize-ex-syntax */
  static const void *G005008[] = {I(87,25,00,00),B(ex_syntax ,1),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(ex_syntax ,10),I(23,00,00,00),B(ex_syntax ,71),I(23,00,00,00),B(ex_syntax ,70),I(3b,01,25,00),B(ex_syntax ,9),I(23,00,00,00),B(ex_syntax ,72),I(23,00,00,00),B(ex_syntax ,68),I(3b,02,25,00),B(ex_syntax ,8),I(23,00,00,00),B(ex_syntax ,73),I(23,00,00,00),B(ex_syntax ,66),I(3b,01,25,00),B(ex_syntax ,7),I(23,00,00,00),B(ex_syntax ,74),I(23,00,00,00),B(ex_syntax ,65),I(3b,02,25,00),B(ex_syntax ,6),I(23,00,00,00),B(ex_syntax ,75),I(23,00,00,00),B(ex_syntax ,60),I(3b,02,25,00),B(ex_syntax ,5),I(23,00,00,00),B(ex_syntax ,76),I(23,00,00,00),B(ex_syntax ,59),I(3b,01,25,00),B(ex_syntax ,4),I(23,00,00,00),B(ex_syntax ,77),I(23,00,00,00),B(ex_syntax ,58),I(3b,01,25,00),B(ex_syntax ,3),I(23,00,00,00),B(ex_syntax ,78),I(23,00,00,00),B(ex_syntax ,49),I(3b,02,25,00),B(ex_syntax ,2),I(23,00,00,00),B(ex_syntax ,79),I(23,00,00,00),B(ex_syntax ,47),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004916,G004915);
  eul_allocate_bytevector( G004918,G004917);
  eul_allocate_bytevector( G004920,G004919);
  object_class(str_4923) = eul_static_string_class;
  object_class(str_4924) = eul_static_string_class;
  eul_intern_keyword(key_4925,"ct-error-value");
  eul_allocate_bytevector( G004922,G004921);
  eul_intern_symbol(sym_4928,"anonymous");
  eul_intern_symbol(sym_4929,"(method G004757)");
  eul_allocate_bytevector( G004927,G004926);
  eul_allocate_bytevector( G004931,G004930);
  eul_allocate_bytevector( G004933,G004932);
  eul_allocate_bytevector( G004935,G004934);
  object_class(str_4938) = eul_static_string_class;
  object_class(str_4939) = eul_static_string_class;
  eul_allocate_bytevector( G004937,G004936);
  eul_intern_symbol(sym_4942,"(method G004727)");
  eul_allocate_bytevector( G004941,G004940);
  eul_allocate_bytevector( G004944,G004943);
  eul_allocate_bytevector( G004946,G004945);
  object_class(str_4949) = eul_static_string_class;
  object_class(str_4950) = eul_static_string_class;
  eul_allocate_bytevector( G004948,G004947);
  eul_intern_symbol(sym_4953,"(method G004701)");
  eul_allocate_bytevector( G004952,G004951);
  eul_allocate_bytevector( G004955,G004954);
  eul_allocate_bytevector( G004957,G004956);
  object_class(str_4960) = eul_static_string_class;
  object_class(str_4961) = eul_static_string_class;
  eul_allocate_bytevector( G004959,G004958);
  eul_intern_symbol(sym_4964,"(method G004677)");
  eul_allocate_bytevector( G004963,G004962);
  eul_intern_symbol(sym_4967,"only");
  eul_intern_symbol(sym_4968,"except");
  eul_intern_symbol(sym_4969,"rename");
  eul_intern_symbol(sym_4970,"prefix");
  eul_allocate_bytevector( G004966,G004965);
  object_class(str_4973) = eul_static_string_class;
  eul_allocate_bytevector( G004972,G004971);
  eul_allocate_bytevector( G004975,G004974);
  eul_allocate_bytevector( G004977,G004976);
  object_class(str_4980) = eul_static_string_class;
  object_class(str_4981) = eul_static_string_class;
  eul_intern_symbol(sym_4982,"*actual-module*");
  eul_allocate_bytevector( G004979,G004978);
  object_class(str_4985) = eul_static_string_class;
  eul_intern_symbol(sym_4986,"(method G004629)");
  eul_allocate_bytevector( G004984,G004983);
  eul_allocate_bytevector( G004988,G004987);
  eul_allocate_bytevector( G004990,G004989);
  eul_allocate_bytevector( G004992,G004991);
  eul_allocate_bytevector( G004994,G004993);
  object_class(str_4997) = eul_static_string_class;
  object_class(str_4998) = eul_static_string_class;
  eul_allocate_bytevector( G004996,G004995);
  eul_allocate_bytevector( G005000,G004999);
  object_class(str_5003) = eul_static_string_class;
  eul_allocate_bytevector( G005002,G005001);
  eul_allocate_bytevector( G005005,G005004);
  eul_allocate_bytevector( G005007,G005006);
  eul_intern_symbol(sym_5010,"register-imported-syntax-module");
  eul_intern_symbol(sym_5011,"install-syntax-import-expander");
  eul_intern_symbol(sym_5012,"expand-old-syntax-imports");
  eul_intern_symbol(sym_5013,"syntax-import-expander");
  eul_intern_symbol(sym_5014,"make-prefix");
  eul_intern_symbol(sym_5015,"expand-syntax-import");
  eul_intern_symbol(sym_5016,"import-syntax-module");
  eul_intern_symbol(sym_5017,"import-syntax-binding");
  eul_intern_symbol(sym_5018,"top-level");
  eul_allocate_bytevector( G005009,G005008);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      ex_syntax_bindings[i] = eul_nil;
  }

  ex_syntax_bindings[ 11] = G004916;
  ex_syntax_bindings[ 12] = G004918;
  ex_syntax_bindings[ 13] = G004920;
  ex_syntax_bindings[ 14] = str_4923;
  ex_syntax_bindings[ 15] = str_4924;
  ex_syntax_bindings[ 16] = key_4925;
  ex_syntax_bindings[ 17] = G004922;
  ex_syntax_bindings[ 18] = sym_4928;
  ex_syntax_bindings[ 19] = sym_4929;
  ex_syntax_bindings[ 20] = G004927;
  ex_syntax_bindings[ 21] = G004931;
  ex_syntax_bindings[ 22] = G004933;
  ex_syntax_bindings[ 23] = G004935;
  ex_syntax_bindings[ 24] = str_4938;
  ex_syntax_bindings[ 25] = str_4939;
  ex_syntax_bindings[ 26] = G004937;
  ex_syntax_bindings[ 27] = sym_4942;
  ex_syntax_bindings[ 28] = G004941;
  ex_syntax_bindings[ 29] = G004944;
  ex_syntax_bindings[ 30] = G004946;
  ex_syntax_bindings[ 31] = str_4949;
  ex_syntax_bindings[ 32] = str_4950;
  ex_syntax_bindings[ 33] = G004948;
  ex_syntax_bindings[ 34] = sym_4953;
  ex_syntax_bindings[ 35] = G004952;
  ex_syntax_bindings[ 36] = G004955;
  ex_syntax_bindings[ 37] = G004957;
  ex_syntax_bindings[ 38] = str_4960;
  ex_syntax_bindings[ 39] = str_4961;
  ex_syntax_bindings[ 40] = G004959;
  ex_syntax_bindings[ 41] = sym_4964;
  ex_syntax_bindings[ 42] = G004963;
  ex_syntax_bindings[ 43] = sym_4967;
  ex_syntax_bindings[ 44] = sym_4968;
  ex_syntax_bindings[ 45] = sym_4969;
  ex_syntax_bindings[ 46] = sym_4970;
  ex_syntax_bindings[ 47] = G004966;
  ex_syntax_bindings[ 48] = str_4973;
  ex_syntax_bindings[ 49] = G004972;
  ex_syntax_bindings[ 50] = G004975;
  ex_syntax_bindings[ 51] = G004977;
  ex_syntax_bindings[ 52] = str_4980;
  ex_syntax_bindings[ 53] = str_4981;
  ex_syntax_bindings[ 54] = sym_4982;
  ex_syntax_bindings[ 55] = G004979;
  ex_syntax_bindings[ 56] = str_4985;
  ex_syntax_bindings[ 57] = sym_4986;
  ex_syntax_bindings[ 58] = G004984;
  ex_syntax_bindings[ 59] = G004988;
  ex_syntax_bindings[ 60] = G004990;
  ex_syntax_bindings[ 61] = G004992;
  ex_syntax_bindings[ 62] = G004994;
  ex_syntax_bindings[ 63] = str_4997;
  ex_syntax_bindings[ 64] = str_4998;
  ex_syntax_bindings[ 65] = G004996;
  ex_syntax_bindings[ 66] = G005000;
  ex_syntax_bindings[ 67] = str_5003;
  ex_syntax_bindings[ 68] = G005002;
  ex_syntax_bindings[ 69] = G005005;
  ex_syntax_bindings[ 70] = G005007;
  ex_syntax_bindings[ 1] = eul_nil;
  ex_syntax_bindings[ 71] = sym_5010;
  ex_syntax_bindings[ 72] = sym_5011;
  ex_syntax_bindings[ 73] = sym_5012;
  ex_syntax_bindings[ 74] = sym_5013;
  ex_syntax_bindings[ 75] = sym_5014;
  ex_syntax_bindings[ 76] = sym_5015;
  ex_syntax_bindings[ 77] = sym_5016;
  ex_syntax_bindings[ 78] = sym_5017;
  ex_syntax_bindings[ 79] = sym_5018;
  eul_allocate_lambda( ex_syntax_bindings[0], "initialize-ex-syntax", 0, G005009);

  }
}


/* eof */
