/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module number
 **  Copyright: See file number.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern void initialize_module_compare();
extern void initialize_module_copy();
extern LispRef compare_bindings[];
extern LispRef telos_bindings[];
extern LispRef copy_bindings[];
extern LispRef callback_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 87 */
LispRef number_bindings[87];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module number */
void initialize_module_number()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  initialize_module_compare();
  initialize_module_copy();
  eul_fast_table_set(eul_modules,"number",(LispRef) number_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2158, sym_2157, sym_2156, sym_2155, sym_2154, sym_2153, sym_2152, sym_2151, sym_2150, sym_2149, sym_2148, sym_2147, sym_2146, G002145, G002143, G002141, G002139, G002137, G002135, G002133, G002131, G002129, G002127, G002125, G002123, G002121, G002119, G002117, G002115, G002113, sym_2111, G002110, G002108, G002106, G002104, sym_2102, sym_2101, sym_2100, sym_2099, sym_2098, sym_2097, sym_2096, sym_2095, sym_2094, sym_2093, sym_2092, sym_2091, sym_2090, sym_2089, sym_2088, key_2087, key_2086, key_2085, key_2084, sym_2083, key_2082, G002081, G002079, G002077, G002075, G002073, G002071;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 26 binding: (method-deep-copy) */
  static const void *G002070[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 27 binding: (method-shallow-copy) */
  static const void *G002072[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 2 is_init: 0 index: 28 binding: (method-negate) */
  static const void *G002074[] = {I(aa,82,1c,15),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 29 binding: (method-number?) */
  static const void *G002076[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-number?) */
  static const void *G002078[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 444 is_init: 0 index: 52 binding: top-level */
  static const void *G002080[] = {I(a9,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,70),I(23,00,00,00),B(number ,31),I(23,00,00,00),B(number ,32),I(23,00,00,00),B(number ,33),I(1f,05,23,00),B(number ,34),I(1f,06,23,00),B(number ,35),I(86,23,00,00),B(number ,36),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(number ,7),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,37),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,24),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,38),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,16),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,39),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,13),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,40),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,14),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,41),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,9),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,42),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,12),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,43),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,17),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,44),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,6),I(2a,84,24,00),B(number ,7),I(24,00,00,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,45),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,8),I(2a,84,24,00),B(number ,7),I(24,00,00,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,46),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,25),I(2a,84,24,00),B(number ,7),I(24,00,00,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(number ,47),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,19),I(2a,24,00,00),B(number ,24),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,48),I(23,00,00,00),B(number ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,24),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,48),I(23,00,00,00),B(number ,29),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,24),I(2a,24,00,00),B(number ,7),I(2a,24,00,00),B(number ,16),I(2a,24,00,00),B(number ,13),I(2a,24,00,00),B(number ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(number ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,49),I(23,00,00,00),B(number ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,14),I(2a,24,00,00),B(number ,9),I(2a,24,00,00),B(number ,12),I(2a,24,00,00),B(number ,17),I(2a,24,00,00),B(number ,6),I(2a,24,00,00),B(number ,8),I(2a,24,00,00),B(number ,25),I(2a,24,00,00),B(number ,19),I(2a,83,82,14),I(24,00,00,00),B(number ,14),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(2b,24,00,00),B(number ,9),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(84,14,24,00),B(number ,12),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(26,00,00,00),I(00,00,00,03),I(14,24,00,00),B(number ,17),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(26,00,00,00),I(00,00,00,04),I(14,24,00,00),B(number ,6),I(24,00,00,00),B(callback ,4),I(3c,02,2a,24),B(copy ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(copy ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,50),I(23,00,00,00),B(number ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(copy ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,51),I(23,00,00,00),B(number ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,3),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,4d,45),I(4d,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 53 binding: negative? */
  static const void *G002103[] = {I(aa,82,1a,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 54 binding: positive? */
  static const void *G002105[] = {I(aa,82,1c,1a),I(45,01,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 55 binding: anonymous */
  static const void *G002107[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,9),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 57 binding: - */
  static const void *G002109[] = {I(43,fe,46,01),I(1b,12,1b,34),I(00,00,00,15),I(82,1f,03,24),B(number ,9),I(3d,02,03,32),I(00,00,00,29),I(86,1b,48,00),I(00,23,00,00),B(number ,56),I(23,00,00,00),B(number ,55),I(3b,02,48,00),I(00,1d,1f,04),I(47,00,00,3d),I(02,04,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 58 binding: signum */
  static const void *G002112[] = {I(aa,1b,2d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,23),I(1c,1b,82,1a),I(1b,34,00,00),I(00,00,00,0f),I(82,1d,15,32),I(00,00,00,06),I(1c,22,02,1d),I(1c,17,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 59 binding: anonymous */
  static const void *G002114[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,17),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 60 binding: / */
  static const void *G002116[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,56),I(23,00,00,00),B(number ,59),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 61 binding: anonymous */
  static const void *G002118[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1b,1f,04),I(24,00,00,00),B(number ,14),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 62 binding: + */
  static const void *G002120[] = {I(a8,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(number ,56),I(23,00,00,00),B(number ,61),I(3b,02,48,00),I(00,1c,82,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 63 binding: anonymous */
  static const void *G002122[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,6),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 64 binding: % */
  static const void *G002124[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,56),I(23,00,00,00),B(number ,63),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 65 binding: anonymous */
  static const void *G002126[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,8),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 66 binding: mod */
  static const void *G002128[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,56),I(23,00,00,00),B(number ,65),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 6 is_init: 0 index: 67 binding: abs */
  static const void *G002130[] = {I(aa,1b,82,1a),I(1b,34,00,00),I(00,00,00,0f),I(82,1d,15,32),I(00,00,00,06),I(1c,45,02,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 68 binding: anonymous */
  static const void *G002132[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,25),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 69 binding: gcd */
  static const void *G002134[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,56),I(23,00,00,00),B(number ,68),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 70 binding: anonymous */
  static const void *G002136[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,19),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 71 binding: lcm */
  static const void *G002138[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,56),I(23,00,00,00),B(number ,70),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 72 binding: anonymous */
  static const void *G002140[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1b,1f,04),I(24,00,00,00),B(number ,12),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 73 binding: * */
  static const void *G002142[] = {I(a8,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(number ,56),I(23,00,00,00),B(number ,72),I(3b,02,48,00),I(00,1c,83,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 124 is_init: 1 index: 0 binding: initialize-number */
  static const void *G002144[] = {I(87,25,00,00),B(number ,1),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(number ,25),I(86,25,00,00),B(number ,24),I(23,00,00,00),B(number ,74),I(23,00,00,00),B(number ,73),I(3b,ff,25,00),B(number ,23),I(23,00,00,00),B(number ,75),I(23,00,00,00),B(number ,71),I(3b,fe,25,00),B(number ,22),I(23,00,00,00),B(number ,76),I(23,00,00,00),B(number ,69),I(3b,fe,25,00),B(number ,21),I(23,00,00,00),B(number ,77),I(23,00,00,00),B(number ,67),I(3b,01,25,00),B(number ,20),I(86,25,00,00),B(number ,19),I(23,00,00,00),B(number ,78),I(23,00,00,00),B(number ,66),I(3b,fe,25,00),B(number ,18),I(86,25,00,00),B(number ,17),I(86,25,00,00),B(number ,16),I(23,00,00,00),B(number ,79),I(23,00,00,00),B(number ,64),I(3b,fe,25,00),B(number ,15),I(86,25,00,00),B(number ,14),I(86,25,00,00),B(number ,13),I(86,25,00,00),B(number ,12),I(23,00,00,00),B(number ,80),I(23,00,00,00),B(number ,62),I(3b,ff,25,00),B(number ,11),I(23,00,00,00),B(number ,81),I(23,00,00,00),B(number ,60),I(3b,fe,25,00),B(number ,10),I(86,25,00,00),B(number ,9),I(86,25,00,00),B(number ,8),I(86,25,00,00),B(number ,7),I(86,25,00,00),B(number ,6),I(23,00,00,00),B(number ,82),I(23,00,00,00),B(number ,58),I(3b,01,25,00),B(number ,5),I(23,00,00,00),B(number ,83),I(23,00,00,00),B(number ,57),I(3b,fe,25,00),B(number ,4),I(23,00,00,00),B(number ,84),I(23,00,00,00),B(number ,54),I(3b,01,25,00),B(number ,3),I(23,00,00,00),B(number ,85),I(23,00,00,00),B(number ,53),I(3b,01,25,00),B(number ,2),I(23,00,00,00),B(number ,86),I(23,00,00,00),B(number ,52),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002071,G002070);
  eul_allocate_bytevector( G002073,G002072);
  eul_allocate_bytevector( G002075,G002074);
  eul_allocate_bytevector( G002077,G002076);
  eul_allocate_bytevector( G002079,G002078);
  eul_intern_keyword(key_2082,"name");
  eul_intern_symbol(sym_2083,"number");
  eul_intern_keyword(key_2084,"direct-superclasses");
  eul_intern_keyword(key_2085,"direct-slots");
  eul_intern_keyword(key_2086,"direct-keywords");
  eul_intern_keyword(key_2087,"abstractp");
  eul_intern_symbol(sym_2088,"number?");
  eul_intern_symbol(sym_2089,"zero?");
  eul_intern_symbol(sym_2090,"negate");
  eul_intern_symbol(sym_2091,"binary+");
  eul_intern_symbol(sym_2092,"binary-");
  eul_intern_symbol(sym_2093,"binary*");
  eul_intern_symbol(sym_2094,"binary/");
  eul_intern_symbol(sym_2095,"binary%");
  eul_intern_symbol(sym_2096,"binary-mod");
  eul_intern_symbol(sym_2097,"binary-gcd");
  eul_intern_symbol(sym_2098,"binary-lcm");
  eul_intern_symbol(sym_2099,"(method number?)");
  eul_intern_symbol(sym_2100,"(method negate)");
  eul_intern_symbol(sym_2101,"(method shallow-copy)");
  eul_intern_symbol(sym_2102,"(method deep-copy)");
  eul_allocate_bytevector( G002081,G002080);
  eul_allocate_bytevector( G002104,G002103);
  eul_allocate_bytevector( G002106,G002105);
  eul_allocate_bytevector( G002108,G002107);
  eul_intern_symbol(sym_2111,"anonymous");
  eul_allocate_bytevector( G002110,G002109);
  eul_allocate_bytevector( G002113,G002112);
  eul_allocate_bytevector( G002115,G002114);
  eul_allocate_bytevector( G002117,G002116);
  eul_allocate_bytevector( G002119,G002118);
  eul_allocate_bytevector( G002121,G002120);
  eul_allocate_bytevector( G002123,G002122);
  eul_allocate_bytevector( G002125,G002124);
  eul_allocate_bytevector( G002127,G002126);
  eul_allocate_bytevector( G002129,G002128);
  eul_allocate_bytevector( G002131,G002130);
  eul_allocate_bytevector( G002133,G002132);
  eul_allocate_bytevector( G002135,G002134);
  eul_allocate_bytevector( G002137,G002136);
  eul_allocate_bytevector( G002139,G002138);
  eul_allocate_bytevector( G002141,G002140);
  eul_allocate_bytevector( G002143,G002142);
  eul_intern_symbol(sym_2146,"*");
  eul_intern_symbol(sym_2147,"lcm");
  eul_intern_symbol(sym_2148,"gcd");
  eul_intern_symbol(sym_2149,"abs");
  eul_intern_symbol(sym_2150,"mod");
  eul_intern_symbol(sym_2151,"%");
  eul_intern_symbol(sym_2152,"+");
  eul_intern_symbol(sym_2153,"/");
  eul_intern_symbol(sym_2154,"signum");
  eul_intern_symbol(sym_2155,"-");
  eul_intern_symbol(sym_2156,"positive?");
  eul_intern_symbol(sym_2157,"negative?");
  eul_intern_symbol(sym_2158,"top-level");
  eul_allocate_bytevector( G002145,G002144);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 26; i++)
      number_bindings[i] = eul_nil;
  }

  number_bindings[ 26] = G002071;
  number_bindings[ 27] = G002073;
  number_bindings[ 28] = G002075;
  number_bindings[ 29] = G002077;
  number_bindings[ 30] = G002079;
  number_bindings[ 31] = key_2082;
  number_bindings[ 32] = sym_2083;
  number_bindings[ 33] = key_2084;
  number_bindings[ 34] = key_2085;
  number_bindings[ 35] = key_2086;
  number_bindings[ 36] = key_2087;
  number_bindings[ 37] = sym_2088;
  number_bindings[ 38] = sym_2089;
  number_bindings[ 39] = sym_2090;
  number_bindings[ 40] = sym_2091;
  number_bindings[ 41] = sym_2092;
  number_bindings[ 42] = sym_2093;
  number_bindings[ 43] = sym_2094;
  number_bindings[ 44] = sym_2095;
  number_bindings[ 45] = sym_2096;
  number_bindings[ 46] = sym_2097;
  number_bindings[ 47] = sym_2098;
  number_bindings[ 48] = sym_2099;
  number_bindings[ 49] = sym_2100;
  number_bindings[ 50] = sym_2101;
  number_bindings[ 51] = sym_2102;
  number_bindings[ 52] = G002081;
  number_bindings[ 53] = G002104;
  number_bindings[ 54] = G002106;
  number_bindings[ 55] = G002108;
  number_bindings[ 56] = sym_2111;
  number_bindings[ 57] = G002110;
  number_bindings[ 58] = G002113;
  number_bindings[ 59] = G002115;
  number_bindings[ 60] = G002117;
  number_bindings[ 61] = G002119;
  number_bindings[ 62] = G002121;
  number_bindings[ 63] = G002123;
  number_bindings[ 64] = G002125;
  number_bindings[ 65] = G002127;
  number_bindings[ 66] = G002129;
  number_bindings[ 67] = G002131;
  number_bindings[ 68] = G002133;
  number_bindings[ 69] = G002135;
  number_bindings[ 70] = G002137;
  number_bindings[ 71] = G002139;
  number_bindings[ 72] = G002141;
  number_bindings[ 73] = G002143;
  number_bindings[ 1] = eul_nil;
  number_bindings[ 74] = sym_2146;
  number_bindings[ 75] = sym_2147;
  number_bindings[ 76] = sym_2148;
  number_bindings[ 77] = sym_2149;
  number_bindings[ 78] = sym_2150;
  number_bindings[ 79] = sym_2151;
  number_bindings[ 80] = sym_2152;
  number_bindings[ 81] = sym_2153;
  number_bindings[ 82] = sym_2154;
  number_bindings[ 83] = sym_2155;
  number_bindings[ 84] = sym_2156;
  number_bindings[ 85] = sym_2157;
  number_bindings[ 86] = sym_2158;
  eul_allocate_lambda( number_bindings[0], "initialize-number", 0, G002145);

  }
}


/* eof */
