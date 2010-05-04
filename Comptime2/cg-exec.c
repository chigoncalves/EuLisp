/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module cg-exec
 **  Copyright: See file cg-exec.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_cg_exec_word_length();
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_env();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_cg_state();
extern void initialize_module_cg_asm();
extern void initialize_module_cg_interf();
extern void initialize_module_i_ffi();
extern void initialize_module_ex_expr();
extern void initialize_module_cg_dld();
extern LispRef ex_expr_bindings[];
extern LispRef i_ffi_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef cg_asm_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef list_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef sx_node_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_error_bindings[];
extern LispRef integer_bindings[];
extern LispRef number_bindings[];
extern LispRef cg_exec_word_length_bindings[];
extern LispRef cg_dld_bindings[];
extern LispRef i_param_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef string_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef boot_bindings[];
extern LispRef cg_state_bindings[];
extern LispRef boot1_bindings[];
extern LispRef table_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef table1_bindings[];

/* Module bindings with size 82 */
LispRef cg_exec_bindings[82];

/* Foreign functions */
static LispRef ff_stub_eul_allocate_lambda28064 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G008150, G008151, G008152, res;

  POPVAL1(G008152);
  POPVAL1(G008151);
  POPVAL1(G008150);
  FF_RES_CONVERT6(res,eul_allocate_lambda2(FF_ARG_CONVERT8(G008150), FF_ARG_CONVERT8(G008151), FF_ARG_CONVERT8(G008152)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-exec */
void initialize_module_cg_exec()
{
  if (is_initialized) return;
  initialize_module_cg_exec_word_length();
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_env();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_cg_state();
  initialize_module_cg_asm();
  initialize_module_cg_interf();
  initialize_module_i_ffi();
  initialize_module_ex_expr();
  initialize_module_cg_dld();
  eul_fast_table_set(eul_modules,"cg_exec",(LispRef) cg_exec_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_8149, sym_8148, sym_8147, sym_8146, sym_8145, sym_8144, sym_8143, sym_8142, sym_8141, sym_8140, sym_8139, sym_8138, sym_8137, sym_8136, sym_8135, sym_8134, G008133, G008131, G008129, sym_8127, G008126, G008124, G008122, G008120, G008118, G008116, G008113, G008111, G008108, G008106, G008102, sym_8100, sym_8098, G008097, key_8095, G008093, G008091, G008087, sym_8085, sym_8084, sym_8083, sym_8082, G008081, sym_8079, sym_8078, sym_8077, G008076, G008074, G008070, G008068, G008066;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 11 is_init: 0 index: 22 binding: top-level */
  static const void *G008065[] = {I(a9,86,89,00),B(cg_exec ,16),I(2a,86,89,00),B(cg_exec ,5),I(2a,24,00,00),B(table1 ,4),I(24,00,00,00),B(mop_gf ,2),I(3c,01,1b,89),B(cg_exec ,15),I(45,01,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 23 binding: set-bytevector-pos */
  static const void *G008067[] = {I(ab,24,00,00),B(table ,3),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(cg_exec ,15),I(1f,03,1f,03),I(1f,03,3d,03),I(03,45,03,00)};

  eul_allocate_static_cons(cons_8071, c_int_as_eul_int(172), NULL);
  eul_allocate_static_string(str_8072, "initialize-", 11);
  /* Byte-vector with size: 29 is_init: 0 index: 26 binding: run-init-bytevector */
  static const void *G008069[] = {I(aa,1b,82,24),B(cg_state ,38),I(08,1c,83,24),B(cg_state ,38),I(08,23,00,00),B(cg_exec ,24),I(24,00,00,00),B(boot ,11),I(3c,02,1c,83),I(14,86,24,00),B(cg_exec ,12),I(3c,03,24,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,1b,82,02),I(23,00,00,00),B(cg_exec ,25),I(1c,24,00,00),B(string ,11),I(3c,02,41,00),B(boot1 ,52),I(22,01,1b,82),I(1f,05,41,00),B(cg_exec ,21),I(22,03,1b,3d),I(00,07,45,07)};

  /* Byte-vector with size: 7 is_init: 0 index: 27 binding: anonymous */
  static const void *G008073[] = {I(a9,47,00,00),I(24,00,00,00),B(cg_exec ,18),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 50 is_init: 0 index: 31 binding: execute */
  static const void *G008075[] = {I(ab,46,01,1c),I(48,00,00,23),B(cg_exec ,28),I(89,00,00,00),B(i_param ,60),I(2a,47,00,00),I(89,00,00,00),B(cg_exec ,16),I(2a,47,00,00),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,41,00,00),B(cg_dld ,14),I(22,01,1b,89),B(cg_exec ,5),I(2a,1c,82,24),B(cg_state ,3),I(08,1d,83,24),B(cg_state ,3),I(08,24,00,00),B(cg_exec ,11),I(3c,00,2a,1c),I(24,00,00,00),B(cg_exec ,17),I(3c,01,2a,23),B(cg_exec ,29),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,27),I(3b,00,1c,0f),I(23,00,00,00),B(cg_exec ,29),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1d),I(24,00,00,00),B(cg_exec ,3),I(3c,01,47,00),I(00,24,00,00),B(cg_exec ,18),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,08,00,00)};

  /* Byte-vector with size: 79 is_init: 0 index: 36 binding: compute-bytevector-aux */
  static const void *G008080[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,18),I(24,00,00,00),B(cg_exec_word_length ,3),I(3d,00,02,32),I(00,00,01,22),I(1c,10,1b,24),B(number ,23),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(cg_exec_word_length ,6),I(3c,01,32,00),I(00,00,00,f5),I(1c,7a,1b,34),I(00,00,00,e9),I(1d,10,1f,03),I(11,1f,04,11),I(1b,10,1f,03),I(1f,03,1d,1d),I(23,00,00,00),B(cg_exec ,32),I(50,1b,34,00),I(00,00,00,16),I(1c,24,00,00),B(cg_exec ,10),I(3c,01,32,00),I(00,00,00,b0),I(1f,03,23,00),B(cg_exec ,33),I(50,1b,34,00),I(00,00,00,16),I(1d,24,00,00),B(cg_exec ,20),I(3c,01,32,00),I(00,00,00,8e),I(1f,04,23,00),B(cg_exec ,34),I(50,1b,34,00),I(00,00,00,22),I(1f,04,11,1b),I(10,1b,1f,06),I(24,00,00,00),B(cg_exec ,8),I(3c,02,22,02),I(32,00,00,00),I(00,00,00,62),I(1f,05,24,00),B(integer ,3),I(3c,01,1b,34),I(00,00,00,15),I(1f,0d,24,00),B(cg_exec ,6),I(3c,01,32,00),I(00,00,00,3e),I(1f,06,23,00),B(cg_exec ,35),I(50,1b,34,00),I(00,00,00,16),I(1f,05,24,00),B(cg_exec ,9),I(3c,01,32,00),I(00,00,00,1c),I(1f,07,24,00),B(cg_exec_word_length ,6),I(3c,01,2a,1f),I(05,24,00,00),B(cg_exec_word_length ,6),I(3c,01,22,01),I(22,01,22,01),I(22,01,22,08),I(32,00,00,00),I(00,00,00,09),I(86,22,01,2a),I(1f,03,11,24),B(cg_exec ,6),I(3d,01,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_8088, "statically linked module ~a cannot get new bindings", 51);
  eul_allocate_static_string(str_8089, "module ~a cannot have more than ~a bindings", 43);
  /* Byte-vector with size: 52 is_init: 0 index: 39 binding: next-local-index */
  static const void *G008086[] = {I(a9,24,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,12),I(24,00,00,00),B(sx_obj1 ,60),I(08,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,33),I(24,00,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,23,00,00),B(cg_exec ,37),I(1c,24,00,00),B(boot ,22),I(3c,02,22,01),I(2a,24,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,11),I(24,00,00,00),B(sx_obj1 ,60),I(08,1c,1c,1a),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,33),I(24,00,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,23,00,00),B(cg_exec ,38),I(1c,1f,05,24),B(boot ,22),I(3c,03,22,01),I(2a,1d,83,14),I(24,00,00,00),B(cg_exec ,16),I(1c,1c,26,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,60),I(09,22,02,2a),I(1f,03,45,04)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-G007906) */
  static const void *G008090[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_8094, "can't compute binding ~a of module ~a", 37);
  /* Byte-vector with size: 25 is_init: 0 index: 43 binding: (method-G007906) */
  static const void *G008092[] = {I(ab,24,00,00),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,50),I(24,00,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,86,23,00),B(cg_exec ,41),I(47,00,00,1f),I(03,24,00,00),B(mop_gf ,17),I(3c,04,1b,24),B(i_error ,5),I(23,00,00,00),B(cg_exec ,42),I(47,00,00,24),B(boot ,22),I(3d,04,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_8099, "  compute-binding ~a ~a", 23);
  /* Byte-vector with size: 100 is_init: 0 index: 47 binding: compute-binding */
  static const void *G008096[] = {I(ab,46,01,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(cg_exec ,30),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(cg_exec ,44),I(23,00,00,00),B(cg_exec ,43),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(cg_exec ,44),I(23,00,00,00),B(cg_exec ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,23),B(cg_exec ,45),I(1f,13,47,00),I(00,24,00,00),B(i_notify ,4),I(3c,03,2a,47),I(00,00,24,00),B(p_env ,7),I(3c,01,1f,13),I(23,00,00,00),B(cg_exec ,46),I(50,1b,34,00),I(00,00,00,16),I(1c,24,00,00),B(sx_obj ,16),I(3c,01,32,00),I(00,00,00,08),I(1f,14,41,00),B(cg_dld ,14),I(22,01,1d,83),I(24,00,00,00),B(sx_obj1 ,44),I(08,24,00,00),B(cg_exec_word_length ,2),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  eul_allocate_static_string(str_8103, "body of inlined function contains non exported binding ~a", 57);
  eul_allocate_static_string(str_8104, "bad index ~a of foreign function ~a", 35);
  /* Byte-vector with size: 31 is_init: 0 index: 50 binding: compute-foreign-function-binding */
  static const void *G008101[] = {I(aa,1b,24,00),B(p_env ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(85,23,00,00),B(cg_exec ,48),I(1f,03,24,00),B(i_error ,4),I(3c,03,1b,24),B(sx_node ,27),I(3c,01,1c,83),I(24,00,00,00),B(sx_obj1 ,44),I(08,1c,41,00),B(cg_dld ,14),I(22,01,1c,7e),I(1b,34,00,00),I(00,00,00,17),I(1c,1f,03,24),B(cg_exec_word_length ,2),I(3d,02,07,32),I(00,00,00,1c),I(85,23,00,00),B(cg_exec ,49),I(1f,04,1f,09),I(24,00,00,00),B(i_error ,4),I(3d,04,07,45),I(07,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 51 binding: compute-code-vector */
  static const void *G008105[] = {I(aa,24,00,00),B(cg_exec ,19),I(3c,01,24,00),B(cg_exec ,5),I(1c,24,00,00),B(cg_exec_word_length ,2),I(3d,02,01,00)};

  eul_allocate_static_string(str_8109, "  set-up-binding ~a ~a", 22);
  /* Byte-vector with size: 23 is_init: 0 index: 53 binding: anonymous */
  static const void *G008107[] = {I(aa,1b,83,24),B(sx_obj1 ,44),I(08,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,1e),I(24,00,00,00),B(cg_exec ,7),I(3c,00,1d,1c),I(1c,83,1d,24),B(sx_obj1 ,44),I(09,22,03,2a),I(1c,26,00,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,44),I(08,1d,83,24),B(sx_obj1 ,44),I(08,23,00,00),B(cg_exec ,52),I(1d,1d,24,00),B(i_notify ,4),I(3d,03,04,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 54 binding: set-up-bindings */
  static const void *G008110[] = {I(a9,24,00,00),B(cg_exec ,16),I(82,24,00,00),B(sx_obj1 ,60),I(08,24,00,00),B(aux_table ,8),I(3c,01,24,00),B(sx_node ,21),I(1c,24,00,00),B(list ,26),I(3c,02,23,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,53),I(3b,01,1c,24),B(boot ,4),I(3d,02,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_8114, "  compute-bytevector ~a ~a", 26);
  /* Byte-vector with size: 11 is_init: 0 index: 56 binding: compute-bytevector */
  static const void *G008112[] = {I(43,03,23,00),B(cg_exec ,55),I(1c,1f,04,24),B(i_notify ,4),I(3c,03,2a,1c),I(24,00,00,00),B(cg_exec_word_length ,5),I(3c,01,2a,1d),I(24,00,00,00),B(cg_exec ,6),I(3d,01,03,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 57 binding: register-new-local */
  static const void *G008115[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,11),I(24,00,00,00),B(cg_exec ,7),I(3c,00,24,00),B(cg_exec ,5),I(1c,1f,05,41),B(cg_dld ,12),I(22,03,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 58 binding: anonymous */
  static const void *G008117[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,3e),I(1c,10,24,00),B(p_env ,14),I(3c,01,1b,83),I(24,00,00,00),B(sx_obj1 ,60),I(08,47,00,01),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,00,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 59 binding: get-imported-module-or-library */
  static const void *G008119[] = {I(a9,46,02,24),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,1b,48,00),I(01,47,00,01),I(24,00,00,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2f),I(86,1b,48,00),I(00,23,00,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,58),I(3b,01,48,00),I(00,24,00,00),B(i_param ,15),I(47,00,00,3d),I(01,03,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 60 binding: anonymous */
  static const void *G008121[] = {I(aa,1b,83,24),B(cg_state ,38),I(08,1c,26,00),I(00,00,00,03),I(24,00,00,00),B(cg_state ,38),I(08,1d,84,24),B(cg_state ,38),I(08,1f,03,82),I(24,00,00,00),B(cg_state ,38),I(08,1f,03,1c),I(1f,03,24,00),B(cg_exec ,12),I(3c,03,1b,24),B(cg_exec ,13),I(3c,01,1f,04),I(1c,24,00,00),B(cg_exec ,2),I(3d,02,07,45),I(07,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 61 binding: set-up-bytevectors */
  static const void *G008123[] = {I(aa,23,00,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,60),I(3b,01,1c,24),B(boot ,4),I(3d,02,01,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 63 binding: reset-interactive-module */
  static const void *G008125[] = {I(aa,1b,82,24),B(sx_obj1 ,60),I(08,24,00,00),B(aux_table ,9),I(3c,01,2a,24),B(i_param ,49),I(24,00,00,00),B(aux_table ,9),I(3c,01,2a,1b),I(86,1c,26,00),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,60),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,09),I(1d,24,00,00),B(sx_obj1 ,60),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,08),I(1d,24,00,00),B(sx_obj1 ,60),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,0d),I(1d,24,00,00),B(sx_obj1 ,60),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,0c),I(1d,24,00,00),B(sx_obj1 ,60),I(09,22,02,2a),I(86,89,00,00),B(i_param ,56),I(2a,23,00,00),B(cg_exec ,62),I(89,00,00,00),B(i_param ,60),I(45,01,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 64 binding: get-bytevector-pos */
  static const void *G008128[] = {I(aa,24,00,00),B(cg_exec ,15),I(1c,24,00,00),B(table ,3),I(3d,02,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 65 binding: compute-static */
  static const void *G008130[] = {I(aa,24,00,00),B(cg_exec ,13),I(3c,01,24,00),B(cg_exec ,5),I(1c,24,00,00),B(cg_exec_word_length ,2),I(3d,02,01,00)};

  /* Byte-vector with size: 170 is_init: 1 index: 0 binding: initialize-cg-exec */
  static const void *G008132[] = {I(87,25,00,00),B(cg_exec ,1),I(24,00,00,00),B(cg_dld ,1),I(3e,0b,24,00),B(cg_dld ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_expr ,1),I(3e,0b,24,00),B(ex_expr ,0),I(3c,00,21,01),I(24,00,00,00),B(i_ffi ,1),I(3e,0b,24,00),B(i_ffi ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_asm ,1),I(3e,0b,24,00),B(cg_asm ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_state ,1),I(3e,0b,24,00),B(cg_state ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_exec_word_length ,1),I(3e,0b,24,00),B(cg_exec_word_length ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_exec ,66),I(23,00,00,00),B(cg_exec ,65),I(3b,01,25,00),B(cg_exec ,20),I(23,00,00,00),B(cg_exec ,67),I(23,00,00,00),B(cg_exec ,64),I(3b,01,25,00),B(cg_exec ,19),I(23,00,00,00),B(cg_exec ,68),I(23,00,00,00),B(cg_exec ,63),I(3b,01,25,00),B(cg_exec ,18),I(23,00,00,00),B(cg_exec ,69),I(23,00,00,00),B(cg_exec ,61),I(3b,01,25,00),B(cg_exec ,17),I(86,25,00,00),B(cg_exec ,16),I(86,25,00,00),B(cg_exec ,15),I(23,00,00,00),B(cg_exec ,70),I(23,00,00,00),B(cg_exec ,59),I(3b,00,25,00),B(cg_exec ,14),I(23,00,00,00),B(cg_exec ,71),I(23,00,00,00),B(cg_exec ,57),I(3b,fe,25,00),B(cg_exec ,13),I(23,00,00,00),B(cg_exec ,72),I(23,00,00,00),B(cg_exec ,56),I(3b,03,25,00),B(cg_exec ,12),I(23,00,00,00),B(cg_exec ,73),I(23,00,00,00),B(cg_exec ,54),I(3b,00,25,00),B(cg_exec ,11),I(23,00,00,00),B(cg_exec ,74),I(23,00,00,00),B(cg_exec ,51),I(3b,01,25,00),B(cg_exec ,10),I(23,00,00,00),B(cg_exec ,75),I(23,00,00,00),B(cg_exec ,50),I(3b,01,25,00),B(cg_exec ,9),I(23,00,00,00),B(cg_exec ,76),I(23,00,00,00),B(cg_exec ,47),I(3b,02,25,00),B(cg_exec ,8),I(23,00,00,00),B(cg_exec ,77),I(23,00,00,00),B(cg_exec ,39),I(3b,00,25,00),B(cg_exec ,7),I(23,00,00,00),B(cg_exec ,78),I(23,00,00,00),B(cg_exec ,36),I(3b,01,25,00),B(cg_exec ,6),I(86,25,00,00),B(cg_exec ,5),I(23,00,00,00),B(cg_exec ,28),I(23,00,00,00),B(cg_exec ,31),I(3b,02,25,00),B(cg_exec ,4),I(23,00,00,00),B(cg_exec ,79),I(23,00,00,00),B(cg_exec ,26),I(3b,01,25,00),B(cg_exec ,3),I(23,00,00,00),B(cg_exec ,80),I(23,00,00,00),B(cg_exec ,23),I(3b,02,25,00),B(cg_exec ,2),I(23,00,00,00),B(cg_exec ,81),I(23,00,00,00),B(cg_exec ,22),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G008066,G008065);
  eul_allocate_bytevector( G008068,G008067);
  object_class(cons_8071) = eul_static_cons_class;
  eul_cdr(cons_8071) = eul_nil;
  object_class(str_8072) = eul_static_string_class;
  eul_allocate_bytevector( G008070,G008069);
  eul_allocate_bytevector( G008074,G008073);
  eul_intern_symbol(sym_8077,"execute");
  eul_intern_symbol(sym_8078,"*clean-ups*");
  eul_intern_symbol(sym_8079,"anonymous");
  eul_allocate_bytevector( G008076,G008075);
  eul_intern_symbol(sym_8082,"CODE-VECTOR");
  eul_intern_symbol(sym_8083,"STATIC");
  eul_intern_symbol(sym_8084,"BINDING");
  eul_intern_symbol(sym_8085,"FF");
  eul_allocate_bytevector( G008081,G008080);
  object_class(str_8088) = eul_static_string_class;
  object_class(str_8089) = eul_static_string_class;
  eul_allocate_bytevector( G008087,G008086);
  eul_allocate_bytevector( G008091,G008090);
  object_class(str_8094) = eul_static_string_class;
  eul_intern_keyword(key_8095,"ct-error-value");
  eul_allocate_bytevector( G008093,G008092);
  eul_intern_symbol(sym_8098,"(method G007906)");
  object_class(str_8099) = eul_static_string_class;
  eul_intern_symbol(sym_8100,"?");
  eul_allocate_bytevector( G008097,G008096);
  object_class(str_8103) = eul_static_string_class;
  object_class(str_8104) = eul_static_string_class;
  eul_allocate_bytevector( G008102,G008101);
  eul_allocate_bytevector( G008106,G008105);
  object_class(str_8109) = eul_static_string_class;
  eul_allocate_bytevector( G008108,G008107);
  eul_allocate_bytevector( G008111,G008110);
  object_class(str_8114) = eul_static_string_class;
  eul_allocate_bytevector( G008113,G008112);
  eul_allocate_bytevector( G008116,G008115);
  eul_allocate_bytevector( G008118,G008117);
  eul_allocate_bytevector( G008120,G008119);
  eul_allocate_bytevector( G008122,G008121);
  eul_allocate_bytevector( G008124,G008123);
  eul_intern_symbol(sym_8127,"idle");
  eul_allocate_bytevector( G008126,G008125);
  eul_allocate_bytevector( G008129,G008128);
  eul_allocate_bytevector( G008131,G008130);
  eul_intern_symbol(sym_8134,"compute-static");
  eul_intern_symbol(sym_8135,"get-bytevector-pos");
  eul_intern_symbol(sym_8136,"reset-interactive-module");
  eul_intern_symbol(sym_8137,"set-up-bytevectors");
  eul_intern_symbol(sym_8138,"get-imported-module-or-library");
  eul_intern_symbol(sym_8139,"register-new-local");
  eul_intern_symbol(sym_8140,"compute-bytevector");
  eul_intern_symbol(sym_8141,"set-up-bindings");
  eul_intern_symbol(sym_8142,"compute-code-vector");
  eul_intern_symbol(sym_8143,"compute-foreign-function-binding");
  eul_intern_symbol(sym_8144,"compute-binding");
  eul_intern_symbol(sym_8145,"next-local-index");
  eul_intern_symbol(sym_8146,"compute-bytevector-aux");
  eul_intern_symbol(sym_8147,"run-init-bytevector");
  eul_intern_symbol(sym_8148,"set-bytevector-pos");
  eul_intern_symbol(sym_8149,"top-level");
  eul_allocate_bytevector( G008133,G008132);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 21; i++)
      cg_exec_bindings[i] = eul_nil;
  }

  cg_exec_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_allocate_lambda28064;
  cg_exec_bindings[ 22] = G008066;
  cg_exec_bindings[ 23] = G008068;
  cg_exec_bindings[ 24] = cons_8071;
  cg_exec_bindings[ 25] = str_8072;
  cg_exec_bindings[ 26] = G008070;
  cg_exec_bindings[ 27] = G008074;
  cg_exec_bindings[ 28] = sym_8077;
  cg_exec_bindings[ 29] = sym_8078;
  cg_exec_bindings[ 30] = sym_8079;
  cg_exec_bindings[ 31] = G008076;
  cg_exec_bindings[ 32] = sym_8082;
  cg_exec_bindings[ 33] = sym_8083;
  cg_exec_bindings[ 34] = sym_8084;
  cg_exec_bindings[ 35] = sym_8085;
  cg_exec_bindings[ 36] = G008081;
  cg_exec_bindings[ 37] = str_8088;
  cg_exec_bindings[ 38] = str_8089;
  cg_exec_bindings[ 39] = G008087;
  cg_exec_bindings[ 40] = G008091;
  cg_exec_bindings[ 41] = str_8094;
  cg_exec_bindings[ 42] = key_8095;
  cg_exec_bindings[ 43] = G008093;
  cg_exec_bindings[ 44] = sym_8098;
  cg_exec_bindings[ 45] = str_8099;
  cg_exec_bindings[ 46] = sym_8100;
  cg_exec_bindings[ 47] = G008097;
  cg_exec_bindings[ 48] = str_8103;
  cg_exec_bindings[ 49] = str_8104;
  cg_exec_bindings[ 50] = G008102;
  cg_exec_bindings[ 51] = G008106;
  cg_exec_bindings[ 52] = str_8109;
  cg_exec_bindings[ 53] = G008108;
  cg_exec_bindings[ 54] = G008111;
  cg_exec_bindings[ 55] = str_8114;
  cg_exec_bindings[ 56] = G008113;
  cg_exec_bindings[ 57] = G008116;
  cg_exec_bindings[ 58] = G008118;
  cg_exec_bindings[ 59] = G008120;
  cg_exec_bindings[ 60] = G008122;
  cg_exec_bindings[ 61] = G008124;
  cg_exec_bindings[ 62] = sym_8127;
  cg_exec_bindings[ 63] = G008126;
  cg_exec_bindings[ 64] = G008129;
  cg_exec_bindings[ 65] = G008131;
  cg_exec_bindings[ 1] = eul_nil;
  cg_exec_bindings[ 66] = sym_8134;
  cg_exec_bindings[ 67] = sym_8135;
  cg_exec_bindings[ 68] = sym_8136;
  cg_exec_bindings[ 69] = sym_8137;
  cg_exec_bindings[ 70] = sym_8138;
  cg_exec_bindings[ 71] = sym_8139;
  cg_exec_bindings[ 72] = sym_8140;
  cg_exec_bindings[ 73] = sym_8141;
  cg_exec_bindings[ 74] = sym_8142;
  cg_exec_bindings[ 75] = sym_8143;
  cg_exec_bindings[ 76] = sym_8144;
  cg_exec_bindings[ 77] = sym_8145;
  cg_exec_bindings[ 78] = sym_8146;
  cg_exec_bindings[ 79] = sym_8147;
  cg_exec_bindings[ 80] = sym_8148;
  cg_exec_bindings[ 81] = sym_8149;
  eul_allocate_lambda( cg_exec_bindings[0], "initialize-cg-exec", 0, G008133);

  }
}


/* eof */