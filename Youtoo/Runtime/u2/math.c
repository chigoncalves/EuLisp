/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module math
 **  Copyright: See file math.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_double();
extern LispRef double_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef float_bindings[];

/* Module bindings with size 81 */
LispRef math_bindings[81];

/* Foreign functions */
static LispRef ff_stub_acos198 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00279, res;

  POPVAL1(G00279);
  FF_RES_CONVERT2(res,acos(FF_ARG_CONVERT2(G00279)));
  return res;
}

static LispRef ff_stub_asin199 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00280, res;

  POPVAL1(G00280);
  FF_RES_CONVERT2(res,asin(FF_ARG_CONVERT2(G00280)));
  return res;
}

static LispRef ff_stub_atan200 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00281, res;

  POPVAL1(G00281);
  FF_RES_CONVERT2(res,atan(FF_ARG_CONVERT2(G00281)));
  return res;
}

static LispRef ff_stub_atan2201 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00282, G00283, res;

  POPVAL1(G00283);
  POPVAL1(G00282);
  FF_RES_CONVERT2(res,atan2(FF_ARG_CONVERT2(G00282), FF_ARG_CONVERT2(G00283)));
  return res;
}

static LispRef ff_stub_cos202 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00284, res;

  POPVAL1(G00284);
  FF_RES_CONVERT2(res,cos(FF_ARG_CONVERT2(G00284)));
  return res;
}

static LispRef ff_stub_sin203 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00285, res;

  POPVAL1(G00285);
  FF_RES_CONVERT2(res,sin(FF_ARG_CONVERT2(G00285)));
  return res;
}

static LispRef ff_stub_tan204 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00286, res;

  POPVAL1(G00286);
  FF_RES_CONVERT2(res,tan(FF_ARG_CONVERT2(G00286)));
  return res;
}

static LispRef ff_stub_cosh205 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00287, res;

  POPVAL1(G00287);
  FF_RES_CONVERT2(res,cosh(FF_ARG_CONVERT2(G00287)));
  return res;
}

static LispRef ff_stub_sinh206 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00288, res;

  POPVAL1(G00288);
  FF_RES_CONVERT2(res,sinh(FF_ARG_CONVERT2(G00288)));
  return res;
}

static LispRef ff_stub_tanh207 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00289, res;

  POPVAL1(G00289);
  FF_RES_CONVERT2(res,tanh(FF_ARG_CONVERT2(G00289)));
  return res;
}

static LispRef ff_stub_exp208 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00290, res;

  POPVAL1(G00290);
  FF_RES_CONVERT2(res,exp(FF_ARG_CONVERT2(G00290)));
  return res;
}

static LispRef ff_stub_log209 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00291, res;

  POPVAL1(G00291);
  FF_RES_CONVERT2(res,log(FF_ARG_CONVERT2(G00291)));
  return res;
}

static LispRef ff_stub_log10210 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00292, res;

  POPVAL1(G00292);
  FF_RES_CONVERT2(res,log10(FF_ARG_CONVERT2(G00292)));
  return res;
}

static LispRef ff_stub_pow211 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00293, G00294, res;

  POPVAL1(G00294);
  POPVAL1(G00293);
  FF_RES_CONVERT2(res,pow(FF_ARG_CONVERT2(G00293), FF_ARG_CONVERT2(G00294)));
  return res;
}

static LispRef ff_stub_sqrt212 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00295, res;

  POPVAL1(G00295);
  FF_RES_CONVERT2(res,sqrt(FF_ARG_CONVERT2(G00295)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module math */
void initialize_module_math()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_double();
  eul_fast_table_set(eul_modules,"math",(LispRef) math_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_278, G00277, sym_275, sym_274, sym_273, sym_272, sym_271, sym_270, sym_269, sym_268, sym_267, sym_266, sym_265, sym_264, sym_263, sym_262, sym_261, sym_260, sym_259, sym_258, sym_257, sym_256, sym_255, sym_254, sym_253, sym_252, sym_251, sym_250, sym_249, sym_248, sym_247, sym_246, dbl_245, G00244, G00242, G00240, G00238, G00236, G00234, G00232, G00230, G00228, G00226, G00224, G00222, G00220, G00218, G00216, G00214;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 33 binding: (method-sqrt) */
  static const void *G00213[] = {I(aa,41,00,00),B(math ,32),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 34 binding: (method-pow) */
  static const void *G00215[] = {I(ab,41,00,00),B(math ,31),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-log10) */
  static const void *G00217[] = {I(aa,41,00,00),B(math ,30),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: (method-log) */
  static const void *G00219[] = {I(aa,41,00,00),B(math ,29),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: (method-exp) */
  static const void *G00221[] = {I(aa,41,00,00),B(math ,28),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-tanh) */
  static const void *G00223[] = {I(aa,41,00,00),B(math ,27),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-sinh) */
  static const void *G00225[] = {I(aa,41,00,00),B(math ,26),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 40 binding: (method-cosh) */
  static const void *G00227[] = {I(aa,41,00,00),B(math ,25),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-tan) */
  static const void *G00229[] = {I(aa,41,00,00),B(math ,24),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 42 binding: (method-sin) */
  static const void *G00231[] = {I(aa,41,00,00),B(math ,23),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 43 binding: (method-cos) */
  static const void *G00233[] = {I(aa,41,00,00),B(math ,22),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 44 binding: (method-atan2) */
  static const void *G00235[] = {I(ab,41,00,00),B(math ,21),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 45 binding: (method-atan) */
  static const void *G00237[] = {I(aa,41,00,00),B(math ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 46 binding: (method-asin) */
  static const void *G00239[] = {I(aa,41,00,00),B(math ,19),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 47 binding: (method-acos) */
  static const void *G00241[] = {I(aa,41,00,00),B(math ,18),I(45,01,00,00)};

  /* Byte-vector with size: 719 is_init: 0 index: 79 binding: top-level */
  static const void *G00243[] = {I(a9,23,00,00),B(math ,48),I(89,00,00,00),B(math ,9),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,49),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,13),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,50),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,11),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,51),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,5),I(2a,84,24,00),B(float ,8),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,52),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,8),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,53),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,6),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,54),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,3),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,55),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,17),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,56),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,16),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,57),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,14),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,58),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,2),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,59),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,7),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,60),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,15),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,61),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,10),I(2a,84,24,00),B(float ,8),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,62),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,4),I(2a,83,24,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(math ,63),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(math ,12),I(2a,24,00,00),B(math ,13),I(2a,24,00,00),B(math ,11),I(2a,24,00,00),B(math ,5),I(2a,24,00,00),B(math ,8),I(2a,24,00,00),B(math ,6),I(2a,24,00,00),B(math ,3),I(2a,24,00,00),B(math ,17),I(2a,24,00,00),B(math ,16),I(2a,24,00,00),B(math ,14),I(2a,24,00,00),B(math ,2),I(2a,24,00,00),B(math ,7),I(2a,24,00,00),B(math ,15),I(2a,24,00,00),B(math ,10),I(2a,24,00,00),B(math ,4),I(2a,24,00,00),B(math ,12),I(2a,24,00,00),B(math ,13),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,13),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,64),I(23,00,00,00),B(math ,47),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,11),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,11),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,65),I(23,00,00,00),B(math ,46),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,5),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,5),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,66),I(23,00,00,00),B(math ,45),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,8),I(8a,03,02,84),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,8),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,67),I(23,00,00,00),B(math ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,6),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,68),I(23,00,00,00),B(math ,43),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,3),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,69),I(23,00,00,00),B(math ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,17),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,17),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,70),I(23,00,00,00),B(math ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,16),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,16),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,71),I(23,00,00,00),B(math ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,14),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,14),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,72),I(23,00,00,00),B(math ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,2),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,73),I(23,00,00,00),B(math ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,7),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,74),I(23,00,00,00),B(math ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,15),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,15),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,75),I(23,00,00,00),B(math ,36),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,15),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,10),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,10),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,76),I(23,00,00,00),B(math ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,4),I(8a,03,02,84),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,4),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,77),I(23,00,00,00),B(math ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(math ,12),I(8a,03,02,83),I(24,00,00,00),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(math ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(math ,78),I(23,00,00,00),B(math ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(math ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,96,45),I(96,00,00,00)};

  /* Byte-vector with size: 48 is_init: 1 index: 0 binding: initialize-math */
  static const void *G00276[] = {I(87,25,00,00),B(math ,1),I(24,00,00,00),B(double ,1),I(3e,0b,24,00),B(double ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(math ,17),I(86,25,00,00),B(math ,16),I(86,25,00,00),B(math ,15),I(86,25,00,00),B(math ,14),I(86,25,00,00),B(math ,13),I(86,25,00,00),B(math ,12),I(86,25,00,00),B(math ,11),I(86,25,00,00),B(math ,10),I(86,25,00,00),B(math ,8),I(86,25,00,00),B(math ,7),I(86,25,00,00),B(math ,6),I(86,25,00,00),B(math ,5),I(86,25,00,00),B(math ,4),I(86,25,00,00),B(math ,3),I(86,25,00,00),B(math ,2),I(23,00,00,00),B(math ,80),I(23,00,00,00),B(math ,79),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00214,G00213);
  eul_allocate_bytevector( G00216,G00215);
  eul_allocate_bytevector( G00218,G00217);
  eul_allocate_bytevector( G00220,G00219);
  eul_allocate_bytevector( G00222,G00221);
  eul_allocate_bytevector( G00224,G00223);
  eul_allocate_bytevector( G00226,G00225);
  eul_allocate_bytevector( G00228,G00227);
  eul_allocate_bytevector( G00230,G00229);
  eul_allocate_bytevector( G00232,G00231);
  eul_allocate_bytevector( G00234,G00233);
  eul_allocate_bytevector( G00236,G00235);
  eul_allocate_bytevector( G00238,G00237);
  eul_allocate_bytevector( G00240,G00239);
  eul_allocate_bytevector( G00242,G00241);
  eul_allocate_double(dbl_245,3.141593);
  eul_intern_symbol(sym_246,"acos");
  eul_intern_symbol(sym_247,"asin");
  eul_intern_symbol(sym_248,"atan");
  eul_intern_symbol(sym_249,"atan2");
  eul_intern_symbol(sym_250,"cos");
  eul_intern_symbol(sym_251,"sin");
  eul_intern_symbol(sym_252,"tan");
  eul_intern_symbol(sym_253,"cosh");
  eul_intern_symbol(sym_254,"sinh");
  eul_intern_symbol(sym_255,"tanh");
  eul_intern_symbol(sym_256,"exp");
  eul_intern_symbol(sym_257,"log");
  eul_intern_symbol(sym_258,"log10");
  eul_intern_symbol(sym_259,"pow");
  eul_intern_symbol(sym_260,"sqrt");
  eul_intern_symbol(sym_261,"(method acos)");
  eul_intern_symbol(sym_262,"(method asin)");
  eul_intern_symbol(sym_263,"(method atan)");
  eul_intern_symbol(sym_264,"(method atan2)");
  eul_intern_symbol(sym_265,"(method cos)");
  eul_intern_symbol(sym_266,"(method sin)");
  eul_intern_symbol(sym_267,"(method tan)");
  eul_intern_symbol(sym_268,"(method cosh)");
  eul_intern_symbol(sym_269,"(method sinh)");
  eul_intern_symbol(sym_270,"(method tanh)");
  eul_intern_symbol(sym_271,"(method exp)");
  eul_intern_symbol(sym_272,"(method log)");
  eul_intern_symbol(sym_273,"(method log10)");
  eul_intern_symbol(sym_274,"(method pow)");
  eul_intern_symbol(sym_275,"(method sqrt)");
  eul_allocate_bytevector( G00244,G00243);
  eul_intern_symbol(sym_278,"top-level");
  eul_allocate_bytevector( G00277,G00276);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 18; i++)
      math_bindings[i] = eul_nil;
  }

  math_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_acos198;
  math_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_asin199;
  math_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atan200;
  math_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atan2201;
  math_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_cos202;
  math_bindings[ 23] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_sin203;
  math_bindings[ 24] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_tan204;
  math_bindings[ 25] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_cosh205;
  math_bindings[ 26] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_sinh206;
  math_bindings[ 27] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_tanh207;
  math_bindings[ 28] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_exp208;
  math_bindings[ 29] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_log209;
  math_bindings[ 30] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_log10210;
  math_bindings[ 31] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_pow211;
  math_bindings[ 32] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_sqrt212;
  math_bindings[ 33] = G00214;
  math_bindings[ 34] = G00216;
  math_bindings[ 35] = G00218;
  math_bindings[ 36] = G00220;
  math_bindings[ 37] = G00222;
  math_bindings[ 38] = G00224;
  math_bindings[ 39] = G00226;
  math_bindings[ 40] = G00228;
  math_bindings[ 41] = G00230;
  math_bindings[ 42] = G00232;
  math_bindings[ 43] = G00234;
  math_bindings[ 44] = G00236;
  math_bindings[ 45] = G00238;
  math_bindings[ 46] = G00240;
  math_bindings[ 47] = G00242;
  math_bindings[ 48] = dbl_245;
  math_bindings[ 49] = sym_246;
  math_bindings[ 50] = sym_247;
  math_bindings[ 51] = sym_248;
  math_bindings[ 52] = sym_249;
  math_bindings[ 53] = sym_250;
  math_bindings[ 54] = sym_251;
  math_bindings[ 55] = sym_252;
  math_bindings[ 56] = sym_253;
  math_bindings[ 57] = sym_254;
  math_bindings[ 58] = sym_255;
  math_bindings[ 59] = sym_256;
  math_bindings[ 60] = sym_257;
  math_bindings[ 61] = sym_258;
  math_bindings[ 62] = sym_259;
  math_bindings[ 63] = sym_260;
  math_bindings[ 64] = sym_261;
  math_bindings[ 65] = sym_262;
  math_bindings[ 66] = sym_263;
  math_bindings[ 67] = sym_264;
  math_bindings[ 68] = sym_265;
  math_bindings[ 69] = sym_266;
  math_bindings[ 70] = sym_267;
  math_bindings[ 71] = sym_268;
  math_bindings[ 72] = sym_269;
  math_bindings[ 73] = sym_270;
  math_bindings[ 74] = sym_271;
  math_bindings[ 75] = sym_272;
  math_bindings[ 76] = sym_273;
  math_bindings[ 77] = sym_274;
  math_bindings[ 78] = sym_275;
  math_bindings[ 79] = G00244;
  math_bindings[ 1] = eul_nil;
  math_bindings[ 80] = sym_278;
  eul_allocate_lambda( math_bindings[0], "initialize-math", 0, G00277);

  }
}


/* eof */
