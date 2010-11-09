/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-meth0
 **  Copyright: See file mop-meth0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef collect_bindings[];
extern LispRef mop_key_bindings[];

/* Module bindings with size 46 */
LispRef mop_meth0_bindings[46];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-meth0 */
void initialize_module_mop_meth0()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"mop_meth0",(LispRef) mop_meth0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_452, sym_451, sym_450, sym_449, sym_448, sym_447, sym_446, G00445, sym_443, sym_442, G00441, G00439, G00437, G00435, sym_433, sym_432, G00431, sym_429, sym_428, sym_427, sym_426, sym_425, sym_423, G00421, G00419, sym_417, sym_416, sym_415, sym_414, sym_413, key_412, G00410, G00408;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 20 is_init: 0 index: 11 binding: defmethod-args */
  static const void *G00407[] = {I(aa,1b,12,1b),I(44,04,86,36),I(43,1c,7a,12),I(1b,44,04,1d),I(36,38,1d,10),I(7a,12,1b,44),I(19,1f,03,10),I(1f,04,11,1b),I(24,00,00,00),B(mop_meth0 ,2),I(3c,01,1d,1c),I(0f,22,03,36),I(17,1f,03,72),I(1f,04,11,1b),I(24,00,00,00),B(mop_meth0 ,2),I(3c,01,1d,1c),I(0f,22,03,22),I(01,22,01,45),I(02,00,00,00)};

  eul_allocate_static_cons(cons_411, NULL, NULL);
  /* Byte-vector with size: 39 is_init: 0 index: 19 binding: method-lambda */
  static const void *G00409[] = {I(a8,1b,24,00),B(mop_meth0 ,9),I(3c,01,1c,24),B(mop_meth0 ,8),I(3c,01,1d,24),B(mop_meth0 ,7),I(3c,01,1d,23),B(mop_meth0 ,13),I(24,00,00,00),B(mop_key ,3),I(3c,02,23,00),B(mop_meth0 ,12),I(1f,04,23,00),B(mop_meth0 ,14),I(24,00,00,00),B(mop_key ,2),I(3c,03,1f,03),I(24,00,00,00),B(mop_meth0 ,2),I(3c,01,1f,04),I(24,00,00,00),B(mop_meth0 ,4),I(3c,01,1b,24),B(collect ,9),I(3c,01,1b,1d),I(0f,23,00,00),B(mop_meth0 ,15),I(1c,0f,1f,04),I(1f,08,0f,23),B(mop_meth0 ,16),I(1c,0f,23,00),B(mop_meth0 ,17),I(1f,09,0f,1b),I(86,0f,1d,1c),I(0f,1f,05,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(mop_meth0 ,18),I(1c,0f,45,12)};

  /* Byte-vector with size: 16 is_init: 0 index: 20 binding: defmethod-domain */
  static const void *G00418[] = {I(aa,1b,7a,12),I(1b,44,04,86),I(36,34,1c,10),I(7a,12,1b,44),I(15,1d,11,1b),I(24,00,00,00),B(mop_meth0 ,4),I(3c,01,86,1c),I(0f,22,02,36),I(17,1d,10,1b),I(73,1f,04,11),I(1b,24,00,00),B(mop_meth0 ,4),I(3c,01,1d,1c),I(0f,22,04,22),I(01,45,02,00)};

  eul_allocate_static_cons(cons_422, NULL, NULL);
  eul_allocate_static_cons(cons_424, NULL, NULL);
  /* Byte-vector with size: 60 is_init: 0 index: 29 binding: defmethod */
  static const void *G00420[] = {I(a7,23,00,00),B(mop_meth0 ,22),I(1c,24,00,00),B(mop_meth0 ,9),I(3c,01,1d,24),B(mop_meth0 ,8),I(3c,01,1f,03),I(24,00,00,00),B(mop_meth0 ,7),I(3c,01,1d,23),B(mop_meth0 ,23),I(24,00,00,00),B(mop_key ,3),I(3c,02,23,00),B(mop_meth0 ,12),I(1f,04,1f,06),I(24,00,00,00),B(mop_key ,2),I(3c,03,1f,03),I(24,00,00,00),B(mop_meth0 ,2),I(3c,01,1f,04),I(24,00,00,00),B(mop_meth0 ,4),I(3c,01,1d,1f),I(08,50,1b,44),I(12,1f,0a,86),I(0f,23,00,00),B(mop_meth0 ,24),I(1c,0f,22,01),I(36,03,1f,03),I(1d,24,00,00),B(collect ,9),I(3c,01,1b,1f),I(04,0f,23,00),B(mop_meth0 ,15),I(1c,0f,1f,06),I(1f,0a,0f,1f),I(0f,1c,0f,23),B(mop_meth0 ,25),I(1c,0f,23,00),B(mop_meth0 ,17),I(1f,0c,0f,1f),I(12,86,0f,23),B(mop_meth0 ,26),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(mop_meth0 ,27),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,1f,0b,1c),I(0f,1f,0f,1c),I(0f,23,00,00),B(mop_meth0 ,18),I(1c,0f,1b,86),I(0f,1f,1d,1c),I(0f,23,00,00),B(mop_meth0 ,28),I(1c,0f,45,1f)};

  /* Byte-vector with size: 7 is_init: 0 index: 32 binding: method-function-lambda */
  static const void *G00430[] = {I(a7,23,00,00),B(mop_meth0 ,30),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(mop_meth0 ,31),I(1c,0f,45,05)};

  /* Byte-vector with size: 8 is_init: 0 index: 33 binding: defmethod-body */
  static const void *G00434[] = {I(aa,1b,10,7a),I(12,1b,44,14),I(1c,11,1b,11),I(24,00,00,00),B(mop_meth0 ,7),I(3d,01,03,22),I(01,36,03,1c),I(11,45,02,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 34 binding: defmethod-sig */
  static const void *G00436[] = {I(aa,1b,10,7a),I(12,1b,44,14),I(1c,11,1b,11),I(24,00,00,00),B(mop_meth0 ,8),I(3d,01,03,22),I(01,36,03,1c),I(10,45,02,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 35 binding: defmethod-keywords */
  static const void *G00438[] = {I(aa,1b,10,7a),I(12,1b,44,23),I(1c,10,1d,11),I(1b,10,1f,04),I(11,1b,11,1b),I(24,00,00,00),B(mop_meth0 ,9),I(3c,01,1f,03),I(1c,0f,1f,06),I(1c,0f,22,07),I(36,02,86,45),I(02,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 38 binding: named-method-function-lambda */
  static const void *G00440[] = {I(43,fd,1d,86),I(0f,23,00,00),B(mop_meth0 ,36),I(1c,0f,23,00),B(mop_meth0 ,30),I(1f,03,0f,1b),I(86,0f,1f,05),I(1c,0f,1f,03),I(1c,0f,23,00),B(mop_meth0 ,37),I(1c,0f,45,09)};

  /* Byte-vector with size: 62 is_init: 1 index: 0 binding: initialize-mop-meth0 */
  static const void *G00444[] = {I(87,25,00,00),B(mop_meth0 ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_meth0 ,25),I(23,00,00,00),B(mop_meth0 ,38),I(3b,fd,25,00),B(mop_meth0 ,10),I(23,00,00,00),B(mop_meth0 ,39),I(23,00,00,00),B(mop_meth0 ,35),I(3b,01,25,00),B(mop_meth0 ,9),I(23,00,00,00),B(mop_meth0 ,40),I(23,00,00,00),B(mop_meth0 ,34),I(3b,01,25,00),B(mop_meth0 ,8),I(23,00,00,00),B(mop_meth0 ,41),I(23,00,00,00),B(mop_meth0 ,33),I(3b,01,25,00),B(mop_meth0 ,7),I(23,00,00,00),B(mop_meth0 ,16),I(23,00,00,00),B(mop_meth0 ,32),I(3b,fe,25,00),B(mop_meth0 ,6),I(23,00,00,00),B(mop_meth0 ,42),I(23,00,00,00),B(mop_meth0 ,29),I(3b,fe,25,00),B(mop_meth0 ,5),I(23,00,00,00),B(mop_meth0 ,43),I(23,00,00,00),B(mop_meth0 ,20),I(3b,01,25,00),B(mop_meth0 ,4),I(23,00,00,00),B(mop_meth0 ,44),I(23,00,00,00),B(mop_meth0 ,19),I(3b,ff,25,00),B(mop_meth0 ,3),I(23,00,00,00),B(mop_meth0 ,45),I(23,00,00,00),B(mop_meth0 ,11),I(3b,01,25,00),B(mop_meth0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00408,G00407);
  eul_intern_keyword(key_412,"class");
  object_class(cons_411) = eul_static_cons_class;
  eul_car(cons_411) = key_412;
  eul_cdr(cons_411) = eul_nil;
  eul_intern_symbol(sym_413,"<simple-method>");
  eul_intern_symbol(sym_414,"make-vector");
  eul_intern_symbol(sym_415,"method-function-lambda");
  eul_intern_symbol(sym_416,"list");
  eul_intern_symbol(sym_417,"make-method");
  eul_allocate_bytevector( G00410,G00409);
  eul_allocate_bytevector( G00419,G00418);
  eul_intern_symbol(sym_423,"absent");
  object_class(cons_422) = eul_static_cons_class;
  eul_car(cons_422) = sym_423;
  eul_cdr(cons_422) = eul_nil;
  object_class(cons_424) = eul_static_cons_class;
  eul_car(cons_424) = key_412;
  eul_cdr(cons_424) = eul_nil;
  eul_intern_symbol(sym_425,"generic-function-method-class");
  eul_intern_symbol(sym_426,"named-method-function-lambda");
  eul_intern_symbol(sym_427,"generic-function-method-keywords");
  eul_intern_symbol(sym_428,"append");
  eul_intern_symbol(sym_429,"stable-add-method");
  eul_allocate_bytevector( G00421,G00420);
  eul_intern_symbol(sym_432,"progn");
  eul_intern_symbol(sym_433,"lambda");
  eul_allocate_bytevector( G00431,G00430);
  eul_allocate_bytevector( G00435,G00434);
  eul_allocate_bytevector( G00437,G00436);
  eul_allocate_bytevector( G00439,G00438);
  eul_intern_symbol(sym_442,"method");
  eul_intern_symbol(sym_443,"named-lambda");
  eul_allocate_bytevector( G00441,G00440);
  eul_intern_symbol(sym_446,"defmethod-keywords");
  eul_intern_symbol(sym_447,"defmethod-sig");
  eul_intern_symbol(sym_448,"defmethod-body");
  eul_intern_symbol(sym_449,"defmethod");
  eul_intern_symbol(sym_450,"defmethod-domain");
  eul_intern_symbol(sym_451,"method-lambda");
  eul_intern_symbol(sym_452,"defmethod-args");
  eul_allocate_bytevector( G00445,G00444);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      mop_meth0_bindings[i] = eul_nil;
  }

  mop_meth0_bindings[ 11] = G00408;
  mop_meth0_bindings[ 12] = key_412;
  mop_meth0_bindings[ 13] = cons_411;
  mop_meth0_bindings[ 14] = sym_413;
  mop_meth0_bindings[ 15] = sym_414;
  mop_meth0_bindings[ 16] = sym_415;
  mop_meth0_bindings[ 17] = sym_416;
  mop_meth0_bindings[ 18] = sym_417;
  mop_meth0_bindings[ 19] = G00410;
  mop_meth0_bindings[ 20] = G00419;
  mop_meth0_bindings[ 21] = sym_423;
  mop_meth0_bindings[ 22] = cons_422;
  mop_meth0_bindings[ 23] = cons_424;
  mop_meth0_bindings[ 24] = sym_425;
  mop_meth0_bindings[ 25] = sym_426;
  mop_meth0_bindings[ 26] = sym_427;
  mop_meth0_bindings[ 27] = sym_428;
  mop_meth0_bindings[ 28] = sym_429;
  mop_meth0_bindings[ 29] = G00421;
  mop_meth0_bindings[ 30] = sym_432;
  mop_meth0_bindings[ 31] = sym_433;
  mop_meth0_bindings[ 32] = G00431;
  mop_meth0_bindings[ 33] = G00435;
  mop_meth0_bindings[ 34] = G00437;
  mop_meth0_bindings[ 35] = G00439;
  mop_meth0_bindings[ 36] = sym_442;
  mop_meth0_bindings[ 37] = sym_443;
  mop_meth0_bindings[ 38] = G00441;
  mop_meth0_bindings[ 1] = eul_nil;
  mop_meth0_bindings[ 39] = sym_446;
  mop_meth0_bindings[ 40] = sym_447;
  mop_meth0_bindings[ 41] = sym_448;
  mop_meth0_bindings[ 42] = sym_449;
  mop_meth0_bindings[ 43] = sym_450;
  mop_meth0_bindings[ 44] = sym_451;
  mop_meth0_bindings[ 45] = sym_452;
  eul_allocate_lambda( mop_meth0_bindings[0], "initialize-mop-meth0", 0, G00445);

  }
}


/* eof */