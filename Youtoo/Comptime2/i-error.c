/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module i-error
 **  Copyright: See file i-error.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_level1();
extern void initialize_module_i_param();
extern void initialize_module_i_notify();
extern LispRef i_level1_bindings[];
extern LispRef format_bindings[];
extern LispRef stream2_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef condition_bindings[];

/* Module bindings with size 30 */
LispRef i_error_bindings[30];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-error */
void initialize_module_i_error()
{
  if (is_initialized) return;
  initialize_module_i_level1();
  initialize_module_i_param();
  initialize_module_i_notify();
  eul_fast_table_set(eul_modules,"i_error",(LispRef) i_error_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_411, sym_410, sym_409, G00408, G00406, G00404, G00400, sym_398, sym_397, sym_396, key_394, key_393, key_392, sym_391, key_390, key_389, sym_388, key_387, G00386, G00384, G00382, G00380;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 6 binding: (method-generic-print) */
  static const void *G00379[] = {I(ab,1c,82,24),B(i_error ,5),I(08,1d,82,24),B(condition ,8),I(08,24,00,00),B(i_notify ,6),I(3d,02,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 7 binding: (method-get-ct-error-condition-class) */
  static const void *G00381[] = {I(aa,24,00,00),B(i_error ,5),I(45,01,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 8 binding: (setter-ct-error-value) */
  static const void *G00383[] = {I(ab,1c,82,1d),I(24,00,00,00),B(i_error ,5),I(09,45,02,00)};

  eul_allocate_static_cons(cons_395, NULL, NULL);
  /* Byte-vector with size: 105 is_init: 0 index: 21 binding: top-level */
  static const void *G00385[] = {I(a9,24,00,00),B(condition ,8),I(24,00,00,00),B(boot1 ,25),I(3c,01,23,00),B(i_error ,9),I(23,00,00,00),B(i_error ,10),I(23,00,00,00),B(i_error ,11),I(23,00,00,00),B(i_error ,12),I(24,00,00,00),B(boot1 ,25),I(3c,04,1b,24),B(boot1 ,25),I(3c,01,24,00),B(mop_class ,71),I(23,00,00,00),B(i_error ,9),I(23,00,00,00),B(i_error ,13),I(23,00,00,00),B(i_error ,14),I(1f,06,23,00),B(i_error ,15),I(1f,06,23,00),B(i_error ,16),I(23,00,00,00),B(i_error ,17),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(i_error ,5),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(i_error ,3),I(23,00,00,00),B(i_error ,18),I(23,00,00,00),B(i_error ,8),I(3b,02,1d,3c),I(02,2a,24,00),B(i_error ,5),I(2a,24,00,00),B(i_param ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(i_param ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(i_error ,19),I(23,00,00,00),B(i_error ,7),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,30),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,30),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(i_error ,20),I(23,00,00,00),B(i_error ,6),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,30),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,11,45),I(11,00,00,00)};

  eul_allocate_static_string(str_401, "*** TOTAL NUMBER OF WARNINGS: ~a\n", 33);
  eul_allocate_static_string(str_402, "*** TOTAL NUMBER OF ERRORS: ~a\n", 31);
  /* Byte-vector with size: 41 is_init: 0 index: 24 binding: ct-exit */
  static const void *G00399[] = {I(a8,1b,34,00),I(00,00,00,0e),I(1b,10,32,00),I(00,00,00,07),I(86,24,00,00),B(i_param ,40),I(82,19,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,29),I(24,00,00,00),B(stream2 ,9),I(23,00,00,00),B(i_error ,22),I(24,00,00,00),B(i_param ,40),I(24,00,00,00),B(format ,4),I(3c,03,2a,24),B(i_param ,46),I(82,19,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,40),I(24,00,00,00),B(stream2 ,9),I(23,00,00,00),B(i_error ,23),I(24,00,00,00),B(i_param ,46),I(24,00,00,00),B(format ,4),I(3c,03,2a,1f),I(03,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,0c),I(85,20,04,1f),I(03,2a,1d,24),B(boot1 ,20),I(3d,01,04,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: ct-error-value */
  static const void *G00403[] = {I(aa,82,24,00),B(i_error ,5),I(08,45,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 26 binding: ct-error */
  static const void *G00405[] = {I(43,fd,24,00),B(format ,2),I(1d,1d,24,00),B(boot ,5),I(3c,03,1b,24),B(i_error ,5),I(23,00,00,00),B(i_error ,12),I(1f,06,24,00),B(boot ,12),I(3d,04,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 43 is_init: 1 index: 0 binding: initialize-i-error */
  static const void *G00407[] = {I(87,25,00,00),B(i_error ,1),I(24,00,00,00),B(i_notify ,1),I(3e,0b,24,00),B(i_notify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_param ,1),I(3e,0b,24,00),B(i_param ,0),I(3c,00,21,01),I(24,00,00,00),B(i_level1 ,1),I(3e,0b,24,00),B(i_level1 ,0),I(3c,00,21,01),I(86,25,00,00),B(i_error ,5),I(23,00,00,00),B(i_error ,13),I(23,00,00,00),B(i_error ,26),I(3b,fd,25,00),B(i_error ,4),I(23,00,00,00),B(i_error ,27),I(23,00,00,00),B(i_error ,25),I(3b,01,25,00),B(i_error ,3),I(23,00,00,00),B(i_error ,28),I(23,00,00,00),B(i_error ,24),I(3b,ff,25,00),B(i_error ,2),I(23,00,00,00),B(i_error ,29),I(23,00,00,00),B(i_error ,21),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00380,G00379);
  eul_allocate_bytevector( G00382,G00381);
  eul_allocate_bytevector( G00384,G00383);
  eul_intern_keyword(key_387,"name");
  eul_intern_symbol(sym_388,"value");
  eul_intern_keyword(key_389,"keyword");
  eul_intern_keyword(key_390,"ct-error-value");
  eul_intern_symbol(sym_391,"ct-error");
  eul_intern_keyword(key_392,"direct-superclasses");
  eul_intern_keyword(key_393,"direct-slots");
  eul_intern_keyword(key_394,"direct-keywords");
  object_class(cons_395) = eul_static_cons_class;
  eul_car(cons_395) = key_390;
  eul_cdr(cons_395) = eul_nil;
  eul_intern_symbol(sym_396,"(setter ct-error-value)");
  eul_intern_symbol(sym_397,"(method get-ct-error-condition-class)");
  eul_intern_symbol(sym_398,"(method generic-print)");
  eul_allocate_bytevector( G00386,G00385);
  object_class(str_401) = eul_static_string_class;
  object_class(str_402) = eul_static_string_class;
  eul_allocate_bytevector( G00400,G00399);
  eul_allocate_bytevector( G00404,G00403);
  eul_allocate_bytevector( G00406,G00405);
  eul_intern_symbol(sym_409,"ct-error-value");
  eul_intern_symbol(sym_410,"ct-exit");
  eul_intern_symbol(sym_411,"top-level");
  eul_allocate_bytevector( G00408,G00407);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 6; i++)
      i_error_bindings[i] = eul_nil;
  }

  i_error_bindings[ 6] = G00380;
  i_error_bindings[ 7] = G00382;
  i_error_bindings[ 8] = G00384;
  i_error_bindings[ 9] = key_387;
  i_error_bindings[ 10] = sym_388;
  i_error_bindings[ 11] = key_389;
  i_error_bindings[ 12] = key_390;
  i_error_bindings[ 13] = sym_391;
  i_error_bindings[ 14] = key_392;
  i_error_bindings[ 15] = key_393;
  i_error_bindings[ 16] = key_394;
  i_error_bindings[ 17] = cons_395;
  i_error_bindings[ 18] = sym_396;
  i_error_bindings[ 19] = sym_397;
  i_error_bindings[ 20] = sym_398;
  i_error_bindings[ 21] = G00386;
  i_error_bindings[ 22] = str_401;
  i_error_bindings[ 23] = str_402;
  i_error_bindings[ 24] = G00400;
  i_error_bindings[ 25] = G00404;
  i_error_bindings[ 26] = G00406;
  i_error_bindings[ 1] = eul_nil;
  i_error_bindings[ 27] = sym_409;
  i_error_bindings[ 28] = sym_410;
  i_error_bindings[ 29] = sym_411;
  eul_allocate_lambda( i_error_bindings[0], "initialize-i-error", 0, G00408);

  }
}


/* eof */
