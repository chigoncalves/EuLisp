/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module handler
 **  Copyright: See file handler.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern void initialize_module_convert();
extern void initialize_module_convert1();
extern void initialize_module_fpi();
extern void initialize_module_float();
extern void initialize_module_string();
extern void initialize_module_collect();
extern LispRef convert1_bindings[];
extern LispRef convert_bindings[];
extern LispRef callback_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef float_bindings[];
extern LispRef collect_bindings[];
extern LispRef fpi_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 83 */
LispRef handler_bindings[83];

/* Foreign functions */
static LispRef ff_stub_eul_int_as_eul_int_ref7078 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007178, res;

  POPVAL1(G007178);
  FF_RES_CONVERT6(res,eul_int_as_eul_int_ref(FF_ARG_CONVERT8(G007178)));
  return res;
}

static LispRef ff_stub_eul_int_ref_as_c_int7079 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007179, res;

  POPVAL1(G007179);
  FF_RES_CONVERT0(res,eul_int_ref_as_c_int(FF_ARG_CONVERT8(G007179)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref7080 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007180, G007181, res;

  POPVAL1(G007181);
  POPVAL1(G007180);
  FF_RES_CONVERT0(res,eul_c_vector_ref(FF_ARG_CONVERT9(G007180), FF_ARG_CONVERT0(G007181)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set7081 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007182, G007183, G007184, res;

  POPVAL1(G007184);
  POPVAL1(G007183);
  POPVAL1(G007182);
  FF_RES_CONVERT0(res,eul_c_vector_set(FF_ARG_CONVERT9(G007182), FF_ARG_CONVERT0(G007183), FF_ARG_CONVERT0(G007184)));
  return res;
}

static LispRef ff_stub_eul_double_as_eul_double_ref7082 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007185, res;

  POPVAL1(G007185);
  FF_RES_CONVERT6(res,eul_double_as_eul_double_ref(FF_ARG_CONVERT8(G007185)));
  return res;
}

static LispRef ff_stub_eul_double_ref_as_c_double7083 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007186, res;

  POPVAL1(G007186);
  FF_RES_CONVERT2(res,eul_double_ref_as_c_double(FF_ARG_CONVERT8(G007186)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref7084 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007187, G007188, res;

  POPVAL1(G007188);
  POPVAL1(G007187);
  FF_RES_CONVERT2(res,eul_c_vector_ref(FF_ARG_CONVERT10(G007187), FF_ARG_CONVERT0(G007188)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set7085 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007189, G007190, G007191, res;

  POPVAL1(G007191);
  POPVAL1(G007190);
  POPVAL1(G007189);
  FF_RES_CONVERT2(res,eul_c_vector_set(FF_ARG_CONVERT10(G007189), FF_ARG_CONVERT0(G007190), FF_ARG_CONVERT2(G007191)));
  return res;
}

static LispRef ff_stub_eul_string_as_eul_string_ref7086 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007192, res;

  POPVAL1(G007192);
  FF_RES_CONVERT6(res,eul_string_as_eul_string_ref(FF_ARG_CONVERT8(G007192)));
  return res;
}

static LispRef ff_stub_eul_string_ref_as_c_string7087 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007193, res;

  POPVAL1(G007193);
  FF_RES_CONVERT3(res,eul_string_ref_as_c_string(FF_ARG_CONVERT8(G007193)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref7088 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007194, G007195, res;

  POPVAL1(G007195);
  POPVAL1(G007194);
  FF_RES_CONVERT3(res,eul_c_vector_ref(FF_ARG_CONVERT11(G007194), FF_ARG_CONVERT0(G007195)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set7089 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007196, G007197, G007198, res;

  POPVAL1(G007198);
  POPVAL1(G007197);
  POPVAL1(G007196);
  FF_RES_CONVERT3(res,eul_c_vector_set(FF_ARG_CONVERT11(G007196), FF_ARG_CONVERT0(G007197), FF_ARG_CONVERT3(G007198)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module handler */
void initialize_module_handler()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  initialize_module_convert();
  initialize_module_convert1();
  initialize_module_fpi();
  initialize_module_float();
  initialize_module_string();
  initialize_module_collect();
  eul_fast_table_set(eul_modules,"handler",(LispRef) handler_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_7177, G007176, G007174, sym_7172, sym_7171, sym_7170, sym_7167, sym_7166, sym_7165, sym_7164, sym_7163, sym_7160, sym_7159, sym_7158, sym_7157, sym_7156, sym_7155, sym_7154, sym_7152, sym_7150, sym_7149, sym_7148, sym_7147, sym_7146, sym_7145, sym_7144, sym_7143, key_7141, key_7140, key_7139, sym_7138, key_7137, key_7136, sym_7135, key_7134, G007133, G007131, G007129, G007127, G007125, G007123, G007121, G007119, G007117, G007115, G007113, G007111, G007109, G007107, G007105, G007103, G007101, G007099, G007097, G007095, G007093, G007091;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-(setter element)) */
  static const void *G007090[] = {I(43,03,41,00),B(handler ,22),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-element) */
  static const void *G007092[] = {I(ab,41,00,00),B(handler ,21),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-(converter <string>)) */
  static const void *G007094[] = {I(aa,41,00,00),B(handler ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-(converter <string*>)) */
  static const void *G007096[] = {I(aa,41,00,00),B(handler ,19),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 27 binding: (method-string*?) */
  static const void *G007098[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 28 binding: (method-string*?) */
  static const void *G007100[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-(setter element)) */
  static const void *G007102[] = {I(43,03,41,00),B(handler ,18),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: (method-element) */
  static const void *G007104[] = {I(ab,41,00,00),B(handler ,17),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: (method-(converter <double>)) */
  static const void *G007106[] = {I(aa,41,00,00),B(handler ,16),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: (method-(converter <double*>)) */
  static const void *G007108[] = {I(aa,41,00,00),B(handler ,15),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-double*?) */
  static const void *G007110[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 34 binding: (method-double*?) */
  static const void *G007112[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-(setter element)) */
  static const void *G007114[] = {I(43,03,41,00),B(handler ,14),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: (method-element) */
  static const void *G007116[] = {I(ab,41,00,00),B(handler ,13),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: (method-(converter <int>)) */
  static const void *G007118[] = {I(aa,41,00,00),B(handler ,12),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-(converter <int*>)) */
  static const void *G007120[] = {I(aa,41,00,00),B(handler ,11),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-int*?) */
  static const void *G007122[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-int*?) */
  static const void *G007124[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-handler?) */
  static const void *G007126[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 42 binding: (method-handler?) */
  static const void *G007128[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 43 binding: (setter-handle) */
  static const void *G007130[] = {I(ab,1c,82,1d),I(24,00,00,00),B(handler ,2),I(09,45,02,00)};

  eul_allocate_static_cons(cons_7142, NULL, NULL);
  eul_allocate_static_cons(cons_7153, NULL, NULL);
  eul_allocate_static_cons(cons_7151, NULL, eul_as_static(cons_7153));
  eul_allocate_static_cons(cons_7162, NULL, NULL);
  eul_allocate_static_cons(cons_7161, NULL, eul_as_static(cons_7162));
  eul_allocate_static_cons(cons_7169, NULL, NULL);
  eul_allocate_static_cons(cons_7168, NULL, eul_as_static(cons_7169));
  /* Byte-vector with size: 951 is_init: 0 index: 80 binding: top-level */
  static const void *G007132[] = {I(a9,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,25),I(3c,01,23,00),B(handler ,44),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,46),I(23,00,00,00),B(handler ,47),I(24,00,00,00),B(boot1 ,25),I(3c,04,1b,24),B(boot1 ,25),I(3c,01,24,00),B(mop_class ,70),I(23,00,00,00),B(handler ,44),I(23,00,00,00),B(handler ,48),I(23,00,00,00),B(handler ,49),I(1f,06,23,00),B(handler ,50),I(1f,06,23,00),B(handler ,51),I(23,00,00,00),B(handler ,52),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(handler ,2),I(2a,28,28,1b),I(89,00,00,00),B(handler ,4),I(2a,28,29,1b),I(89,00,00,00),B(handler ,5),I(2a,28,2a,1b),I(89,00,00,00),B(handler ,6),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,53),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,8),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,54),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,9),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,55),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,10),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,56),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,7),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(handler ,3),I(23,00,00,00),B(handler ,57),I(23,00,00,00),B(handler ,43),I(3b,02,1d,3c),I(02,2a,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(2a,24,00,00),B(handler ,2),I(2a,24,00,00),B(handler ,4),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,59),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(handler ,4),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(2a,24,00,00),B(handler ,4),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,63),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,4),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,64),I(23,00,00,00),B(handler ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,65),I(23,00,00,00),B(handler ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,4),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,4),I(24,00,00,00),B(fpi ,6),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,35),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,68),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(handler ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(2a,24,00,00),B(handler ,5),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,71),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,72),I(23,00,00,00),B(handler ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,73),I(23,00,00,00),B(handler ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,5),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,5),I(24,00,00,00),B(fpi ,6),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,74),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(handler ,6),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(2a,24,00,00),B(handler ,6),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,77),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,6),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,78),I(23,00,00,00),B(handler ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,79),I(23,00,00,00),B(handler ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,6),I(24,00,00,00),B(fpi ,6),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,c3,45),I(c3,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 81 binding: handle */
  static const void *G007173[] = {I(aa,82,24,00),B(handler ,2),I(08,45,00,00)};

  /* Byte-vector with size: 70 is_init: 1 index: 0 binding: initialize-handler */
  static const void *G007175[] = {I(87,25,00,00),B(handler ,1),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(convert1 ,1),I(3e,0b,24,00),B(convert1 ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(handler ,10),I(86,25,00,00),B(handler ,9),I(86,25,00,00),B(handler ,8),I(86,25,00,00),B(handler ,7),I(86,25,00,00),B(handler ,6),I(86,25,00,00),B(handler ,5),I(86,25,00,00),B(handler ,4),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,81),I(3b,01,25,00),B(handler ,3),I(86,25,00,00),B(handler ,2),I(23,00,00,00),B(handler ,82),I(23,00,00,00),B(handler ,80),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G007091,G007090);
  eul_allocate_bytevector( G007093,G007092);
  eul_allocate_bytevector( G007095,G007094);
  eul_allocate_bytevector( G007097,G007096);
  eul_allocate_bytevector( G007099,G007098);
  eul_allocate_bytevector( G007101,G007100);
  eul_allocate_bytevector( G007103,G007102);
  eul_allocate_bytevector( G007105,G007104);
  eul_allocate_bytevector( G007107,G007106);
  eul_allocate_bytevector( G007109,G007108);
  eul_allocate_bytevector( G007111,G007110);
  eul_allocate_bytevector( G007113,G007112);
  eul_allocate_bytevector( G007115,G007114);
  eul_allocate_bytevector( G007117,G007116);
  eul_allocate_bytevector( G007119,G007118);
  eul_allocate_bytevector( G007121,G007120);
  eul_allocate_bytevector( G007123,G007122);
  eul_allocate_bytevector( G007125,G007124);
  eul_allocate_bytevector( G007127,G007126);
  eul_allocate_bytevector( G007129,G007128);
  eul_allocate_bytevector( G007131,G007130);
  eul_intern_keyword(key_7134,"name");
  eul_intern_symbol(sym_7135,"handle");
  eul_intern_keyword(key_7136,"keyword");
  eul_intern_keyword(key_7137,"handle");
  eul_intern_symbol(sym_7138,"handler");
  eul_intern_keyword(key_7139,"direct-superclasses");
  eul_intern_keyword(key_7140,"direct-slots");
  eul_intern_keyword(key_7141,"direct-keywords");
  object_class(cons_7142) = eul_static_cons_class;
  eul_car(cons_7142) = key_7137;
  eul_cdr(cons_7142) = eul_nil;
  eul_intern_symbol(sym_7143,"handler?");
  eul_intern_symbol(sym_7144,"int*?");
  eul_intern_symbol(sym_7145,"double*?");
  eul_intern_symbol(sym_7146,"string*?");
  eul_intern_symbol(sym_7147,"(setter handle)");
  eul_intern_symbol(sym_7148,"(method handler?)");
  eul_intern_symbol(sym_7149,"int*");
  eul_intern_symbol(sym_7150,"(method int*?)");
  eul_intern_symbol(sym_7152,"converter");
  eul_intern_symbol(sym_7154,"<int*>");
  object_class(cons_7153) = eul_static_cons_class;
  eul_car(cons_7153) = sym_7154;
  eul_cdr(cons_7153) = eul_nil;
  object_class(cons_7151) = eul_static_cons_class;
  eul_car(cons_7151) = sym_7152;
  eul_intern_symbol(sym_7155,"(method (converter <int*>))");
  eul_intern_symbol(sym_7156,"(method (converter <int>))");
  eul_intern_symbol(sym_7157,"(method element)");
  eul_intern_symbol(sym_7158,"(method (setter element))");
  eul_intern_symbol(sym_7159,"double*");
  eul_intern_symbol(sym_7160,"(method double*?)");
  eul_intern_symbol(sym_7163,"<double*>");
  object_class(cons_7162) = eul_static_cons_class;
  eul_car(cons_7162) = sym_7163;
  eul_cdr(cons_7162) = eul_nil;
  object_class(cons_7161) = eul_static_cons_class;
  eul_car(cons_7161) = sym_7152;
  eul_intern_symbol(sym_7164,"(method (converter <double*>))");
  eul_intern_symbol(sym_7165,"(method (converter <double>))");
  eul_intern_symbol(sym_7166,"string*");
  eul_intern_symbol(sym_7167,"(method string*?)");
  eul_intern_symbol(sym_7170,"<string*>");
  object_class(cons_7169) = eul_static_cons_class;
  eul_car(cons_7169) = sym_7170;
  eul_cdr(cons_7169) = eul_nil;
  object_class(cons_7168) = eul_static_cons_class;
  eul_car(cons_7168) = sym_7152;
  eul_intern_symbol(sym_7171,"(method (converter <string*>))");
  eul_intern_symbol(sym_7172,"(method (converter <string>))");
  eul_allocate_bytevector( G007133,G007132);
  eul_allocate_bytevector( G007174,G007173);
  eul_intern_symbol(sym_7177,"top-level");
  eul_allocate_bytevector( G007176,G007175);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      handler_bindings[i] = eul_nil;
  }

  handler_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_as_eul_int_ref7078;
  handler_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_ref_as_c_int7079;
  handler_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref7080;
  handler_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set7081;
  handler_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_as_eul_double_ref7082;
  handler_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_ref_as_c_double7083;
  handler_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref7084;
  handler_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set7085;
  handler_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_as_eul_string_ref7086;
  handler_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_ref_as_c_string7087;
  handler_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref7088;
  handler_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set7089;
  handler_bindings[ 23] = G007091;
  handler_bindings[ 24] = G007093;
  handler_bindings[ 25] = G007095;
  handler_bindings[ 26] = G007097;
  handler_bindings[ 27] = G007099;
  handler_bindings[ 28] = G007101;
  handler_bindings[ 29] = G007103;
  handler_bindings[ 30] = G007105;
  handler_bindings[ 31] = G007107;
  handler_bindings[ 32] = G007109;
  handler_bindings[ 33] = G007111;
  handler_bindings[ 34] = G007113;
  handler_bindings[ 35] = G007115;
  handler_bindings[ 36] = G007117;
  handler_bindings[ 37] = G007119;
  handler_bindings[ 38] = G007121;
  handler_bindings[ 39] = G007123;
  handler_bindings[ 40] = G007125;
  handler_bindings[ 41] = G007127;
  handler_bindings[ 42] = G007129;
  handler_bindings[ 43] = G007131;
  handler_bindings[ 44] = key_7134;
  handler_bindings[ 45] = sym_7135;
  handler_bindings[ 46] = key_7136;
  handler_bindings[ 47] = key_7137;
  handler_bindings[ 48] = sym_7138;
  handler_bindings[ 49] = key_7139;
  handler_bindings[ 50] = key_7140;
  handler_bindings[ 51] = key_7141;
  handler_bindings[ 52] = cons_7142;
  handler_bindings[ 53] = sym_7143;
  handler_bindings[ 54] = sym_7144;
  handler_bindings[ 55] = sym_7145;
  handler_bindings[ 56] = sym_7146;
  handler_bindings[ 57] = sym_7147;
  handler_bindings[ 58] = sym_7148;
  handler_bindings[ 59] = sym_7149;
  handler_bindings[ 60] = sym_7150;
  handler_bindings[ 61] = sym_7152;
  handler_bindings[ 62] = sym_7154;
  handler_bindings[ 63] = cons_7151;
  handler_bindings[ 64] = sym_7155;
  handler_bindings[ 65] = sym_7156;
  handler_bindings[ 66] = sym_7157;
  handler_bindings[ 67] = sym_7158;
  handler_bindings[ 68] = sym_7159;
  handler_bindings[ 69] = sym_7160;
  handler_bindings[ 70] = sym_7163;
  handler_bindings[ 71] = cons_7161;
  handler_bindings[ 72] = sym_7164;
  handler_bindings[ 73] = sym_7165;
  handler_bindings[ 74] = sym_7166;
  handler_bindings[ 75] = sym_7167;
  handler_bindings[ 76] = sym_7170;
  handler_bindings[ 77] = cons_7168;
  handler_bindings[ 78] = sym_7171;
  handler_bindings[ 79] = sym_7172;
  handler_bindings[ 80] = G007133;
  handler_bindings[ 81] = G007174;
  handler_bindings[ 1] = eul_nil;
  handler_bindings[ 82] = sym_7177;
  eul_allocate_lambda( handler_bindings[0], "initialize-handler", 0, G007176);

  }
}


/* eof */
