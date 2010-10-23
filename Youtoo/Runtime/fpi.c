/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module fpi
 **  Copyright: See file fpi.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_compare();
extern void initialize_module_number();
extern void initialize_module_integer();
extern LispRef telos_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef number_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef integer_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 44 */
LispRef fpi_bindings[44];

/* Foreign functions */
static LispRef ff_stub_eul_int_as_str2337 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002391, res;

  POPVAL1(G002391);
  FF_RES_CONVERT3(res,eul_int_as_str(FF_ARG_CONVERT0(G002391)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module fpi */
void initialize_module_fpi()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_compare();
  initialize_module_number();
  initialize_module_integer();
  eul_fast_table_set(eul_modules,"fpi",(LispRef) fpi_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2390, sym_2389, sym_2388, G002387, G002385, G002383, sym_2381, sym_2379, sym_2377, sym_2376, sym_2375, sym_2374, sym_2373, sym_2372, sym_2371, sym_2370, sym_2369, sym_2368, sym_2367, key_2366, key_2365, key_2364, sym_2363, key_2362, G002361, G002359, G002357, G002355, G002353, G002351, G002349, G002347, G002345, G002343, G002341, G002339;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 8 binding: (method-zero?) */
  static const void *G002338[] = {I(aa,2d,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 9 binding: (method-binary-lcm) */
  static const void *G002340[] = {I(ab,24,00,00),B(fpi ,4),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 10 binding: (method-binary-gcd) */
  static const void *G002342[] = {I(ab,24,00,00),B(fpi ,5),I(3d,02,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 11 binding: (method-binary-mod) */
  static const void *G002344[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: (method-binary%) */
  static const void *G002346[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-binary/) */
  static const void *G002348[] = {I(ab,17,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 14 binding: (method-binary*) */
  static const void *G002350[] = {I(ab,16,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 15 binding: (method-binary-) */
  static const void *G002352[] = {I(ab,15,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 16 binding: (method-binary<) */
  static const void *G002354[] = {I(ab,1a,45,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 17 binding: (method-binary=) */
  static const void *G002356[] = {I(ab,19,1b,34),I(00,00,00,0d),I(87,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 18 binding: (method-binary+) */
  static const void *G002358[] = {I(ab,14,45,00)};

  eul_allocate_static_cons(cons_2380, NULL, NULL);
  eul_allocate_static_cons(cons_2378, NULL, eul_as_static(cons_2380));
  /* Byte-vector with size: 397 is_init: 0 index: 38 binding: top-level */
  static const void *G002360[] = {I(a9,28,02,1b),I(89,00,00,00),B(fpi ,6),I(2a,26,00,00),I(1f,ff,ff,ff),I(89,00,00,00),B(fpi ,3),I(2a,26,00,00),I(e0,00,00,01),I(89,00,00,00),B(fpi ,2),I(2a,24,00,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,81),I(05,2a,24,00),B(integer ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(fpi ,19),I(23,00,00,00),B(fpi ,20),I(23,00,00,00),B(fpi ,21),I(1f,04,23,00),B(fpi ,22),I(1f,05,23,00),B(fpi ,23),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(fpi ,6),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(fpi ,6),I(2a,24,00,00),B(number ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,24),I(23,00,00,00),B(fpi ,18),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,25),I(23,00,00,00),B(fpi ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,26),I(23,00,00,00),B(fpi ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,27),I(23,00,00,00),B(fpi ,15),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,28),I(23,00,00,00),B(fpi ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,29),I(23,00,00,00),B(fpi ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,30),I(23,00,00,00),B(fpi ,12),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,31),I(23,00,00,00),B(fpi ,11),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,25),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,25),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,32),I(23,00,00,00),B(fpi ,10),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,19),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,19),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,33),I(23,00,00,00),B(fpi ,9),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,19),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,16),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,34),I(23,00,00,00),B(fpi ,8),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,14),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(fpi ,37),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(fpi ,6),I(1c,1f,06,3c),I(02,2a,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,14),I(3d,01,4b,45),I(4b,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 39 binding: int-binary-lcm */
  static const void *G002382[] = {I(ab,1c,82,24),B(compare ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(1c,82,24,00),B(compare ,2),I(3c,02,1b,34),I(00,00,00,0d),I(82,32,00,00),I(00,00,00,1a),I(1f,03,1f,03),I(16,1f,04,1f),I(04,24,00,00),B(fpi ,5),I(3c,02,17,45),I(04,00,00,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 40 binding: int-binary-gcd */
  static const void *G002384[] = {I(ab,1c,1c,1a),I(1b,34,00,00),I(00,00,00,3b),I(1c,1f,03,17),I(1f,03,1c,16),I(1b,1f,04,19),I(1b,34,00,00),I(00,00,00,0f),I(1f,05,32,00),I(00,00,00,17),I(1f,04,1d,15),I(1b,1f,07,24),B(fpi ,5),I(3d,02,07,22),I(01,22,03,32),I(00,00,00,49),I(1c,1f,03,1a),I(1b,34,00,00),I(00,00,00,3b),I(1f,03,1f,03),I(17,1f,03,1c),I(16,1b,1f,06),I(19,1b,34,00),I(00,00,00,0e),I(1f,05,32,00),I(00,00,00,17),I(1f,06,1d,15),I(1b,1f,07,24),B(fpi ,5),I(3d,02,08,22),I(01,22,03,32),I(00,00,00,07),I(1f,03,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 42 is_init: 1 index: 0 binding: initialize-fpi */
  static const void *G002386[] = {I(87,25,00,00),B(fpi ,1),I(24,00,00,00),B(integer ,1),I(3e,0b,24,00),B(integer ,0),I(3c,00,21,01),I(24,00,00,00),B(number ,1),I(3e,0b,24,00),B(number ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(fpi ,6),I(23,00,00,00),B(fpi ,41),I(23,00,00,00),B(fpi ,40),I(3b,02,25,00),B(fpi ,5),I(23,00,00,00),B(fpi ,42),I(23,00,00,00),B(fpi ,39),I(3b,02,25,00),B(fpi ,4),I(23,00,00,00),B(fpi ,43),I(23,00,00,00),B(fpi ,38),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002339,G002338);
  eul_allocate_bytevector( G002341,G002340);
  eul_allocate_bytevector( G002343,G002342);
  eul_allocate_bytevector( G002345,G002344);
  eul_allocate_bytevector( G002347,G002346);
  eul_allocate_bytevector( G002349,G002348);
  eul_allocate_bytevector( G002351,G002350);
  eul_allocate_bytevector( G002353,G002352);
  eul_allocate_bytevector( G002355,G002354);
  eul_allocate_bytevector( G002357,G002356);
  eul_allocate_bytevector( G002359,G002358);
  eul_intern_keyword(key_2362,"name");
  eul_intern_symbol(sym_2363,"fpi");
  eul_intern_keyword(key_2364,"direct-superclasses");
  eul_intern_keyword(key_2365,"direct-slots");
  eul_intern_keyword(key_2366,"direct-keywords");
  eul_intern_symbol(sym_2367,"(method binary+)");
  eul_intern_symbol(sym_2368,"(method binary=)");
  eul_intern_symbol(sym_2369,"(method binary<)");
  eul_intern_symbol(sym_2370,"(method binary-)");
  eul_intern_symbol(sym_2371,"(method binary*)");
  eul_intern_symbol(sym_2372,"(method binary/)");
  eul_intern_symbol(sym_2373,"(method binary%)");
  eul_intern_symbol(sym_2374,"(method binary-mod)");
  eul_intern_symbol(sym_2375,"(method binary-gcd)");
  eul_intern_symbol(sym_2376,"(method binary-lcm)");
  eul_intern_symbol(sym_2377,"(method zero?)");
  eul_intern_symbol(sym_2379,"converter");
  eul_intern_symbol(sym_2381,"<fpi>");
  object_class(cons_2380) = eul_static_cons_class;
  eul_car(cons_2380) = sym_2381;
  eul_cdr(cons_2380) = eul_nil;
  object_class(cons_2378) = eul_static_cons_class;
  eul_car(cons_2378) = sym_2379;
  eul_allocate_bytevector( G002361,G002360);
  eul_allocate_bytevector( G002383,G002382);
  eul_allocate_bytevector( G002385,G002384);
  eul_intern_symbol(sym_2388,"int-binary-gcd");
  eul_intern_symbol(sym_2389,"int-binary-lcm");
  eul_intern_symbol(sym_2390,"top-level");
  eul_allocate_bytevector( G002387,G002386);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 7; i++)
      fpi_bindings[i] = eul_nil;
  }

  fpi_bindings[ 7] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_as_str2337;
  fpi_bindings[ 8] = G002339;
  fpi_bindings[ 9] = G002341;
  fpi_bindings[ 10] = G002343;
  fpi_bindings[ 11] = G002345;
  fpi_bindings[ 12] = G002347;
  fpi_bindings[ 13] = G002349;
  fpi_bindings[ 14] = G002351;
  fpi_bindings[ 15] = G002353;
  fpi_bindings[ 16] = G002355;
  fpi_bindings[ 17] = G002357;
  fpi_bindings[ 18] = G002359;
  fpi_bindings[ 19] = key_2362;
  fpi_bindings[ 20] = sym_2363;
  fpi_bindings[ 21] = key_2364;
  fpi_bindings[ 22] = key_2365;
  fpi_bindings[ 23] = key_2366;
  fpi_bindings[ 24] = sym_2367;
  fpi_bindings[ 25] = sym_2368;
  fpi_bindings[ 26] = sym_2369;
  fpi_bindings[ 27] = sym_2370;
  fpi_bindings[ 28] = sym_2371;
  fpi_bindings[ 29] = sym_2372;
  fpi_bindings[ 30] = sym_2373;
  fpi_bindings[ 31] = sym_2374;
  fpi_bindings[ 32] = sym_2375;
  fpi_bindings[ 33] = sym_2376;
  fpi_bindings[ 34] = sym_2377;
  fpi_bindings[ 35] = sym_2379;
  fpi_bindings[ 36] = sym_2381;
  fpi_bindings[ 37] = cons_2378;
  fpi_bindings[ 38] = G002361;
  fpi_bindings[ 39] = G002383;
  fpi_bindings[ 40] = G002385;
  fpi_bindings[ 1] = eul_nil;
  fpi_bindings[ 41] = sym_2388;
  fpi_bindings[ 42] = sym_2389;
  fpi_bindings[ 43] = sym_2390;
  eul_allocate_lambda( fpi_bindings[0], "initialize-fpi", 0, G002387);

  }
}


/* eof */
