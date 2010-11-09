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
static LispRef ff_stub_eul_fpi_as_str1255 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G001309, res;

  POPVAL1(G001309);
  FF_RES_CONVERT3(res,eul_fpi_as_str(FF_ARG_CONVERT0(G001309)));
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
  LispRef sym_1308, sym_1307, sym_1306, G001305, G001303, G001301, sym_1299, sym_1297, sym_1295, sym_1294, sym_1293, sym_1292, sym_1291, sym_1290, sym_1289, sym_1288, sym_1287, sym_1286, sym_1285, key_1284, key_1283, key_1282, sym_1281, key_1280, G001279, G001277, G001275, G001273, G001271, G001269, G001267, G001265, G001263, G001261, G001259, G001257;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 8 binding: (method-zero?) */
  static const void *G001256[] = {I(aa,2d,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 9 binding: (method-binary-lcm) */
  static const void *G001258[] = {I(ab,24,00,00),B(fpi ,5),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 10 binding: (method-binary-gcd) */
  static const void *G001260[] = {I(ab,24,00,00),B(fpi ,4),I(3d,02,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 11 binding: (method-binary-mod) */
  static const void *G001262[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: (method-binary%) */
  static const void *G001264[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-binary/) */
  static const void *G001266[] = {I(ab,17,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 14 binding: (method-binary*) */
  static const void *G001268[] = {I(ab,16,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 15 binding: (method-binary-) */
  static const void *G001270[] = {I(ab,15,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 16 binding: (method-binary<) */
  static const void *G001272[] = {I(ab,1a,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 17 binding: (method-binary=) */
  static const void *G001274[] = {I(ab,19,1b,44),I(04,87,36,02),I(86,45,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 18 binding: (method-binary+) */
  static const void *G001276[] = {I(ab,14,45,00)};

  eul_allocate_static_cons(cons_1298, NULL, NULL);
  eul_allocate_static_cons(cons_1296, NULL, eul_as_static(cons_1298));
  /* Byte-vector with size: 375 is_init: 0 index: 38 binding: top-level */
  static const void *G001278[] = {I(a9,28,02,1b),I(89,00,00,00),B(fpi ,6),I(2a,26,00,00),I(03,33,33,33),I(89,00,00,00),B(fpi ,3),I(2a,26,00,00),I(fc,cc,cc,cd),I(89,00,00,00),B(fpi ,2),I(2a,24,00,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,81),I(05,2a,24,00),B(integer ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(fpi ,19),I(23,00,00,00),B(fpi ,20),I(23,00,00,00),B(fpi ,21),I(1f,04,23,00),B(fpi ,22),I(1f,05,23,00),B(fpi ,23),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(fpi ,6),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(fpi ,6),I(2a,24,00,00),B(number ,14),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,14),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,24),I(23,00,00,00),B(fpi ,18),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,25),I(23,00,00,00),B(fpi ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,26),I(23,00,00,00),B(fpi ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,9),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,27),I(23,00,00,00),B(fpi ,15),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,12),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,28),I(23,00,00,00),B(fpi ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,17),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,17),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,29),I(23,00,00,00),B(fpi ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,6),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,30),I(23,00,00,00),B(fpi ,12),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,8),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,8),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,31),I(23,00,00,00),B(fpi ,11),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,25),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,25),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,32),I(23,00,00,00),B(fpi ,10),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,19),I(8a,03,02,84),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,19),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,33),I(23,00,00,00),B(fpi ,9),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,19),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,16),I(8a,03,02,83),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,16),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,34),I(23,00,00,00),B(fpi ,8),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(fpi ,37),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(fpi ,6),I(1c,1f,06,3c),I(02,2a,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3d,01,4b,45),I(4b,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 39 binding: fpi-binary-gcd */
  static const void *G001300[] = {I(ab,1c,1c,1a),I(1b,44,2b,1c),I(1f,03,17,1f),I(03,1c,16,1b),I(1f,04,19,1b),I(44,05,1f,05),I(36,14,1f,04),I(1d,15,1b,1f),I(07,24,00,00),B(fpi ,4),I(3d,02,07,22),I(01,22,03,36),I(35,1c,1f,03),I(1a,1b,44,2a),I(1f,03,1f,03),I(17,1f,03,1c),I(16,1b,1f,06),I(19,1b,44,05),I(1f,05,36,12),I(1f,06,1d,15),I(1b,1f,07,24),B(fpi ,4),I(3d,02,08,22),I(01,22,03,36),I(03,1f,03,22),I(01,45,03,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 40 binding: fpi-binary-lcm */
  static const void *G001302[] = {I(ab,1c,82,24),B(compare ,2),I(3c,02,1b,44),I(04,1b,36,0b),I(1c,82,24,00),B(compare ,2),I(3c,02,1b,44),I(04,82,36,14),I(1f,03,1f,03),I(16,1f,04,1f),I(04,24,00,00),B(fpi ,4),I(3c,02,17,45),I(04,00,00,00)};

  /* Byte-vector with size: 42 is_init: 1 index: 0 binding: initialize-fpi */
  static const void *G001304[] = {I(87,25,00,00),B(fpi ,1),I(24,00,00,00),B(integer ,1),I(3e,0b,24,00),B(integer ,0),I(3c,00,21,01),I(24,00,00,00),B(number ,1),I(3e,0b,24,00),B(number ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(fpi ,6),I(23,00,00,00),B(fpi ,41),I(23,00,00,00),B(fpi ,40),I(3b,02,25,00),B(fpi ,5),I(23,00,00,00),B(fpi ,42),I(23,00,00,00),B(fpi ,39),I(3b,02,25,00),B(fpi ,4),I(23,00,00,00),B(fpi ,43),I(23,00,00,00),B(fpi ,38),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001257,G001256);
  eul_allocate_bytevector( G001259,G001258);
  eul_allocate_bytevector( G001261,G001260);
  eul_allocate_bytevector( G001263,G001262);
  eul_allocate_bytevector( G001265,G001264);
  eul_allocate_bytevector( G001267,G001266);
  eul_allocate_bytevector( G001269,G001268);
  eul_allocate_bytevector( G001271,G001270);
  eul_allocate_bytevector( G001273,G001272);
  eul_allocate_bytevector( G001275,G001274);
  eul_allocate_bytevector( G001277,G001276);
  eul_intern_keyword(key_1280,"name");
  eul_intern_symbol(sym_1281,"fpi");
  eul_intern_keyword(key_1282,"direct-superclasses");
  eul_intern_keyword(key_1283,"direct-slots");
  eul_intern_keyword(key_1284,"direct-keywords");
  eul_intern_symbol(sym_1285,"(method binary+)");
  eul_intern_symbol(sym_1286,"(method binary=)");
  eul_intern_symbol(sym_1287,"(method binary<)");
  eul_intern_symbol(sym_1288,"(method binary-)");
  eul_intern_symbol(sym_1289,"(method binary*)");
  eul_intern_symbol(sym_1290,"(method binary/)");
  eul_intern_symbol(sym_1291,"(method binary%)");
  eul_intern_symbol(sym_1292,"(method binary-mod)");
  eul_intern_symbol(sym_1293,"(method binary-gcd)");
  eul_intern_symbol(sym_1294,"(method binary-lcm)");
  eul_intern_symbol(sym_1295,"(method zero?)");
  eul_intern_symbol(sym_1297,"converter");
  eul_intern_symbol(sym_1299,"<fpi>");
  object_class(cons_1298) = eul_static_cons_class;
  eul_car(cons_1298) = sym_1299;
  eul_cdr(cons_1298) = eul_nil;
  object_class(cons_1296) = eul_static_cons_class;
  eul_car(cons_1296) = sym_1297;
  eul_allocate_bytevector( G001279,G001278);
  eul_allocate_bytevector( G001301,G001300);
  eul_allocate_bytevector( G001303,G001302);
  eul_intern_symbol(sym_1306,"fpi-binary-lcm");
  eul_intern_symbol(sym_1307,"fpi-binary-gcd");
  eul_intern_symbol(sym_1308,"top-level");
  eul_allocate_bytevector( G001305,G001304);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 7; i++)
      fpi_bindings[i] = eul_nil;
  }

  fpi_bindings[ 7] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_fpi_as_str1255;
  fpi_bindings[ 8] = G001257;
  fpi_bindings[ 9] = G001259;
  fpi_bindings[ 10] = G001261;
  fpi_bindings[ 11] = G001263;
  fpi_bindings[ 12] = G001265;
  fpi_bindings[ 13] = G001267;
  fpi_bindings[ 14] = G001269;
  fpi_bindings[ 15] = G001271;
  fpi_bindings[ 16] = G001273;
  fpi_bindings[ 17] = G001275;
  fpi_bindings[ 18] = G001277;
  fpi_bindings[ 19] = key_1280;
  fpi_bindings[ 20] = sym_1281;
  fpi_bindings[ 21] = key_1282;
  fpi_bindings[ 22] = key_1283;
  fpi_bindings[ 23] = key_1284;
  fpi_bindings[ 24] = sym_1285;
  fpi_bindings[ 25] = sym_1286;
  fpi_bindings[ 26] = sym_1287;
  fpi_bindings[ 27] = sym_1288;
  fpi_bindings[ 28] = sym_1289;
  fpi_bindings[ 29] = sym_1290;
  fpi_bindings[ 30] = sym_1291;
  fpi_bindings[ 31] = sym_1292;
  fpi_bindings[ 32] = sym_1293;
  fpi_bindings[ 33] = sym_1294;
  fpi_bindings[ 34] = sym_1295;
  fpi_bindings[ 35] = sym_1297;
  fpi_bindings[ 36] = sym_1299;
  fpi_bindings[ 37] = cons_1296;
  fpi_bindings[ 38] = G001279;
  fpi_bindings[ 39] = G001301;
  fpi_bindings[ 40] = G001303;
  fpi_bindings[ 1] = eul_nil;
  fpi_bindings[ 41] = sym_1306;
  fpi_bindings[ 42] = sym_1307;
  fpi_bindings[ 43] = sym_1308;
  eul_allocate_lambda( fpi_bindings[0], "initialize-fpi", 0, G001305);

  }
}


/* eof */