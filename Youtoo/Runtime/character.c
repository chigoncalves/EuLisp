/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module character
 **  Copyright: See file character.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_compare();
extern void initialize_module_collect();
extern void initialize_module_string();
extern LispRef collect_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 54 */
LispRef character_bindings[54];

/* Foreign functions */
static LispRef ff_stub_tolower3041 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003097, res;

  POPVAL1(G003097);
  FF_RES_CONVERT1(res,tolower(FF_ARG_CONVERT1(G003097)));
  return res;
}

static LispRef ff_stub_toupper3042 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003098, res;

  POPVAL1(G003098);
  FF_RES_CONVERT1(res,toupper(FF_ARG_CONVERT1(G003098)));
  return res;
}

static LispRef ff_stub_isalpha3043 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003099, res;

  POPVAL1(G003099);
  FF_RES_CONVERT5(res,isalpha(FF_ARG_CONVERT1(G003099)));
  return res;
}

static LispRef ff_stub_isalnum3044 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003100, res;

  POPVAL1(G003100);
  FF_RES_CONVERT5(res,isalnum(FF_ARG_CONVERT1(G003100)));
  return res;
}

static LispRef ff_stub_isupper3045 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003101, res;

  POPVAL1(G003101);
  FF_RES_CONVERT5(res,isupper(FF_ARG_CONVERT1(G003101)));
  return res;
}

static LispRef ff_stub_islower3046 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003102, res;

  POPVAL1(G003102);
  FF_RES_CONVERT5(res,islower(FF_ARG_CONVERT1(G003102)));
  return res;
}

static LispRef ff_stub_isdigit3047 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003103, res;

  POPVAL1(G003103);
  FF_RES_CONVERT5(res,isdigit(FF_ARG_CONVERT1(G003103)));
  return res;
}

static LispRef ff_stub_isgraph3048 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003104, res;

  POPVAL1(G003104);
  FF_RES_CONVERT5(res,isgraph(FF_ARG_CONVERT1(G003104)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module character */
void initialize_module_character()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_compare();
  initialize_module_collect();
  initialize_module_string();
  eul_fast_table_set(eul_modules,"character",(LispRef) character_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3096, sym_3095, sym_3094, sym_3093, sym_3092, sym_3091, sym_3090, sym_3089, G003088, key_3086, key_3085, G003084, G003082, G003080, G003078, G003076, G003074, G003072, sym_3070, sym_3068, sym_3066, sym_3065, sym_3064, key_3063, key_3062, key_3061, sym_3060, key_3059, sym_3058, sym_3057, G003056, G003054, G003052, G003050;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 20 binding: (method-as-uppercase) */
  static const void *G003049[] = {I(aa,41,00,00),B(character ,13),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 21 binding: (method-as-lowercase) */
  static const void *G003051[] = {I(aa,41,00,00),B(character ,12),I(45,01,00,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 22 binding: (method-binary<) */
  static const void *G003053[] = {I(ab,1c,24,00),B(character ,2),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(character ,2),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,12),I(1f,03,62,1f),I(03,62,1a,32),I(00,00,00,72),I(1f,03,24,00),B(character ,9),I(3c,01,1b,34),I(00,00,00,15),I(1f,03,24,00),B(character ,9),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,12),I(1f,05,62,1f),I(05,62,1a,32),I(00,00,00,3c),I(1f,05,24,00),B(character ,7),I(3c,01,1b,34),I(00,00,00,15),I(1f,05,24,00),B(character ,7),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,12),I(1f,07,62,1f),I(07,62,1a,32),I(00,00,00,06),I(86,22,02,22),I(02,45,04,00)};

  eul_allocate_static_cons(cons_3069, NULL, NULL);
  eul_allocate_static_cons(cons_3067, NULL, eul_as_static(cons_3069));
  /* Byte-vector with size: 189 is_init: 0 index: 36 binding: top-level */
  static const void *G003055[] = {I(a9,28,0a,1b),I(89,00,00,00),B(character ,5),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,23),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(character ,3),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,24),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(character ,6),I(2a,24,00,00),B(character ,5),I(24,00,00,00),B(mop_class ,71),I(05,2a,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,25),I(23,00,00,00),B(character ,26),I(23,00,00,00),B(character ,27),I(1f,04,23,00),B(character ,28),I(1f,05,23,00),B(character ,29),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(character ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(character ,5),I(2a,24,00,00),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(character ,5),I(24,00,00,00),B(character ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(character ,30),I(23,00,00,00),B(character ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(character ,3),I(2a,24,00,00),B(character ,6),I(2a,24,00,00),B(character ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(character ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(character ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(character ,31),I(23,00,00,00),B(character ,21),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(character ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(character ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(character ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(character ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(character ,32),I(23,00,00,00),B(character ,20),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(character ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(character ,35),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(character ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(character ,5),I(24,00,00,00),B(mop_class ,13),I(3d,01,23,45),I(23,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 37 binding: uppercase? */
  static const void *G003071[] = {I(aa,1b,41,00),B(character ,16),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 38 binding: alphap */
  static const void *G003073[] = {I(aa,1b,41,00),B(character ,14),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 39 binding: digit? */
  static const void *G003075[] = {I(aa,1b,41,00),B(character ,18),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 40 binding: alnump */
  static const void *G003077[] = {I(aa,1b,41,00),B(character ,15),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 41 binding: lowercase? */
  static const void *G003079[] = {I(aa,1b,41,00),B(character ,17),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 42 binding: graph? */
  static const void *G003081[] = {I(aa,1b,41,00),B(character ,19),I(22,01,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 45 binding: character-as-string */
  static const void *G003083[] = {I(aa,24,00,00),B(string ,13),I(23,00,00,00),B(character ,43),I(83,23,00,00),B(character ,44),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,01,00)};

  /* Byte-vector with size: 76 is_init: 1 index: 0 binding: initialize-character */
  static const void *G003087[] = {I(87,25,00,00),B(character ,1),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(character ,46),I(23,00,00,00),B(character ,45),I(3b,01,25,00),B(character ,11),I(23,00,00,00),B(character ,47),I(23,00,00,00),B(character ,42),I(3b,01,25,00),B(character ,10),I(23,00,00,00),B(character ,48),I(23,00,00,00),B(character ,41),I(3b,01,25,00),B(character ,9),I(23,00,00,00),B(character ,49),I(23,00,00,00),B(character ,40),I(3b,01,25,00),B(character ,8),I(23,00,00,00),B(character ,50),I(23,00,00,00),B(character ,39),I(3b,01,25,00),B(character ,7),I(86,25,00,00),B(character ,6),I(86,25,00,00),B(character ,5),I(23,00,00,00),B(character ,51),I(23,00,00,00),B(character ,38),I(3b,01,25,00),B(character ,4),I(86,25,00,00),B(character ,3),I(23,00,00,00),B(character ,52),I(23,00,00,00),B(character ,37),I(3b,01,25,00),B(character ,2),I(23,00,00,00),B(character ,53),I(23,00,00,00),B(character ,36),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003050,G003049);
  eul_allocate_bytevector( G003052,G003051);
  eul_allocate_bytevector( G003054,G003053);
  eul_intern_symbol(sym_3057,"as-lowercase");
  eul_intern_symbol(sym_3058,"as-uppercase");
  eul_intern_keyword(key_3059,"name");
  eul_intern_symbol(sym_3060,"character");
  eul_intern_keyword(key_3061,"direct-superclasses");
  eul_intern_keyword(key_3062,"direct-slots");
  eul_intern_keyword(key_3063,"direct-keywords");
  eul_intern_symbol(sym_3064,"(method binary<)");
  eul_intern_symbol(sym_3065,"(method as-lowercase)");
  eul_intern_symbol(sym_3066,"(method as-uppercase)");
  eul_intern_symbol(sym_3068,"converter");
  eul_intern_symbol(sym_3070,"<character>");
  object_class(cons_3069) = eul_static_cons_class;
  eul_car(cons_3069) = sym_3070;
  eul_cdr(cons_3069) = eul_nil;
  object_class(cons_3067) = eul_static_cons_class;
  eul_car(cons_3067) = sym_3068;
  eul_allocate_bytevector( G003056,G003055);
  eul_allocate_bytevector( G003072,G003071);
  eul_allocate_bytevector( G003074,G003073);
  eul_allocate_bytevector( G003076,G003075);
  eul_allocate_bytevector( G003078,G003077);
  eul_allocate_bytevector( G003080,G003079);
  eul_allocate_bytevector( G003082,G003081);
  eul_intern_keyword(key_3085,"size");
  eul_intern_keyword(key_3086,"fill-value");
  eul_allocate_bytevector( G003084,G003083);
  eul_intern_symbol(sym_3089,"character-as-string");
  eul_intern_symbol(sym_3090,"graph?");
  eul_intern_symbol(sym_3091,"lowercase?");
  eul_intern_symbol(sym_3092,"alnump");
  eul_intern_symbol(sym_3093,"digit?");
  eul_intern_symbol(sym_3094,"alphap");
  eul_intern_symbol(sym_3095,"uppercase?");
  eul_intern_symbol(sym_3096,"top-level");
  eul_allocate_bytevector( G003088,G003087);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 12; i++)
      character_bindings[i] = eul_nil;
  }

  character_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_tolower3041;
  character_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_toupper3042;
  character_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isalpha3043;
  character_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isalnum3044;
  character_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isupper3045;
  character_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_islower3046;
  character_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isdigit3047;
  character_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_isgraph3048;
  character_bindings[ 20] = G003050;
  character_bindings[ 21] = G003052;
  character_bindings[ 22] = G003054;
  character_bindings[ 23] = sym_3057;
  character_bindings[ 24] = sym_3058;
  character_bindings[ 25] = key_3059;
  character_bindings[ 26] = sym_3060;
  character_bindings[ 27] = key_3061;
  character_bindings[ 28] = key_3062;
  character_bindings[ 29] = key_3063;
  character_bindings[ 30] = sym_3064;
  character_bindings[ 31] = sym_3065;
  character_bindings[ 32] = sym_3066;
  character_bindings[ 33] = sym_3068;
  character_bindings[ 34] = sym_3070;
  character_bindings[ 35] = cons_3067;
  character_bindings[ 36] = G003056;
  character_bindings[ 37] = G003072;
  character_bindings[ 38] = G003074;
  character_bindings[ 39] = G003076;
  character_bindings[ 40] = G003078;
  character_bindings[ 41] = G003080;
  character_bindings[ 42] = G003082;
  character_bindings[ 43] = key_3085;
  character_bindings[ 44] = key_3086;
  character_bindings[ 45] = G003084;
  character_bindings[ 1] = eul_nil;
  character_bindings[ 46] = sym_3089;
  character_bindings[ 47] = sym_3090;
  character_bindings[ 48] = sym_3091;
  character_bindings[ 49] = sym_3092;
  character_bindings[ 50] = sym_3093;
  character_bindings[ 51] = sym_3094;
  character_bindings[ 52] = sym_3095;
  character_bindings[ 53] = sym_3096;
  eul_allocate_lambda( character_bindings[0], "initialize-character", 0, G003088);

  }
}


/* eof */
