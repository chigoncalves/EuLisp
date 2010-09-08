/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-meth
 **  Copyright: See file mop-meth.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_gf();
extern LispRef mop_prim_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 63 */
LispRef mop_meth_bindings[63];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-meth */
void initialize_module_mop_meth()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  initialize_module_mop_gf();
  eul_fast_table_set(eul_modules,"mop_meth",(LispRef) mop_meth_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1632, sym_1631, sym_1630, sym_1629, sym_1628, sym_1627, sym_1626, G001625, G001623, G001621, G001619, G001617, G001614, G001612, key_1610, key_1609, G001608, G001606, sym_1604, sym_1603, sym_1602, sym_1601, sym_1600, sym_1599, sym_1598, sym_1597, sym_1596, sym_1595, sym_1594, sym_1593, sym_1592, G001591, G001588, G001586, G001584, G001582, sym_1580, key_1579, G001578, G001576, key_1574, G001573, sym_1571, G001570, G001568, sym_1566, G001565, G001563;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 29 is_init: 0 index: 14 binding: discriminating-function */
  static const void *G001562[] = {I(a8,47,00,00),I(26,00,00,00),I(00,00,00,08),I(02,1b,82,02),I(1c,83,02,47),I(00,01,1f,04),I(24,00,00,00),B(boot ,5),I(3c,02,24,00),B(mop_class ,77),I(1c,24,00,00),B(boot ,10),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(47,00,00,1f),I(07,24,00,00),B(mop_gf ,15),I(3d,02,07,32),I(00,00,00,26),I(1f,04,1d,0f),I(1f,06,1f,05),I(1d,03,2a,1d),I(11,29,18,1d),I(10,1b,1f,09),I(24,00,00,00),B(boot ,5),I(3d,02,09,22),I(02,45,07,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 16 binding: (method-compute-discriminating-function) */
  static const void *G001564[] = {I(43,04,46,02),I(1f,03,48,00),I(00,1c,48,00),I(01,23,00,00),B(mop_meth ,15),I(23,00,00,00),B(mop_meth ,14),I(3b,ff,45,04)};

  /* Byte-vector with size: 5 is_init: 0 index: 17 binding: method-lookup-function */
  static const void *G001567[] = {I(a8,47,00,00),I(1c,47,00,01),I(24,00,00,00),B(mop_gf ,7),I(3d,03,01,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 19 binding: (method-compute-method-lookup-function) */
  static const void *G001569[] = {I(43,03,46,02),I(1d,48,00,00),I(47,00,00,83),I(02,1b,48,00),I(01,23,00,00),B(mop_meth ,18),I(23,00,00,00),B(mop_meth ,17),I(3b,ff,45,04)};

  /* Byte-vector with size: 13 is_init: 0 index: 21 binding: (method-initialize) */
  static const void *G001572[] = {I(ab,1c,1c,37),I(02,2a,23,00),B(mop_meth ,20),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,34),I(00,00,00,15),I(1b,1f,03,24),B(mop_meth ,8),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1d,45),I(03,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 22 binding: anonymous */
  static const void *G001575[] = {I(aa,47,00,00),I(1c,24,00,00),B(mop_meth ,8),I(3d,02,01,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 25 binding: (method-initialize) */
  static const void *G001577[] = {I(ab,46,01,1c),I(48,00,00,47),I(00,00,1c,37),I(02,2a,23,00),B(mop_meth ,23),I(1c,86,24,00),B(mop_key ,2),I(3c,03,23,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,22),I(3b,01,1c,24),B(boot ,16),I(3c,02,2a,47),I(00,00,24,00),B(mop_meth ,13),I(3c,01,2a,47),I(00,00,45,03)};

  /* Byte-vector with size: 22 is_init: 0 index: 26 binding: (method-finalize-generic) */
  static const void *G001581[] = {I(aa,1b,83,02),I(1c,26,00,00),I(00,00,00,05),I(02,1d,1d,1d),I(24,00,00,00),B(mop_meth ,7),I(3c,03,1f,03),I(1f,03,1d,1f),I(04,24,00,00),B(mop_meth ,12),I(3c,04,1f,04),I(1d,1c,26,00),I(00,00,00,06),I(1d,03,22,02),I(2a,1f,04,1c),I(1c,26,00,00),I(00,00,00,07),I(1d,03,22,02),I(2a,1f,04,24),B(mop_gf ,3),I(3c,01,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 27 binding: (method-remove-method) */
  static const void *G001583[] = {I(ab,1c,26,00),I(00,00,00,05),I(02,1c,1c,86),I(6c,1b,34,00),I(00,00,00,3e),I(1d,1d,24,00),B(boot ,17),I(3c,02,1f,04),I(1c,1c,26,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,03,86),I(1c,82,1d,03),I(22,02,2a,1f),I(04,24,00,00),B(mop_meth ,13),I(3c,01,22,01),I(32,00,00,00),I(00,00,00,09),I(86,2a,1f,03),I(45,04,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 28 binding: (method-find-method) */
  static const void *G001585[] = {I(ab,24,00,00),B(mop_meth ,9),I(3d,02,00,00)};

  eul_allocate_static_string(str_1589, "mismatch between class of generic function ~a and method class ~a", 65);
  /* Byte-vector with size: 41 is_init: 0 index: 30 binding: (method-add-method) */
  static const void *G001587[] = {I(ab,1b,1d,24),B(mop_meth ,4),I(3c,02,2a,1b),I(04,1d,26,00),I(00,00,00,03),I(02,24,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,1f),I(1d,82,02,1d),I(04,23,00,00),B(mop_meth ,29),I(1d,1d,24,00),B(boot ,12),I(3c,03,22,02),I(2a,1c,83,02),I(1f,03,1c,24),B(mop_meth ,10),I(3c,02,1b,34),I(00,00,00,15),I(1f,04,1c,24),B(mop_meth ,6),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1f,04),I(26,00,00,00),I(00,00,00,05),I(02,1f,04,1c),I(0f,1f,06,1c),I(1c,26,00,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,05,1f),I(07,1c,82,1d),I(03,22,02,2a),I(1f,06,24,00),B(mop_meth ,13),I(3c,01,2a,1f),I(06,45,07,00)};

  /* Byte-vector with size: 380 is_init: 0 index: 44 binding: top-level */
  static const void *G001590[] = {I(a9,84,24,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_meth ,31),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,8),I(2a,84,24,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_meth ,32),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,10),I(2a,84,24,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_meth ,33),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,6),I(2a,83,24,00),B(mop_class ,44),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_meth ,34),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,13),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_meth ,35),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,7),I(2a,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,05,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(mop_meth ,36),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,12),I(2a,24,00,00),B(mop_meth ,8),I(2a,24,00,00),B(mop_meth ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_meth ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,37),I(23,00,00,00),B(mop_meth ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,10),I(2a,24,00,00),B(mop_meth ,10),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,44),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_meth ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,38),I(23,00,00,00),B(mop_meth ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,6),I(2a,24,00,00),B(mop_meth ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,44),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_meth ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,39),I(23,00,00,00),B(mop_meth ,27),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,13),I(2a,24,00,00),B(mop_meth ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,44),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_meth ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,40),I(23,00,00,00),B(mop_meth ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,44),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,41),I(23,00,00,00),B(mop_meth ,25),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,22),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,41),I(23,00,00,00),B(mop_meth ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,7),I(2a,24,00,00),B(mop_meth ,7),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,44),I(86,86,24,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_meth ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,42),I(23,00,00,00),B(mop_meth ,19),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,12),I(2a,24,00,00),B(mop_meth ,12),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,44),I(86,86,86,24),B(boot1 ,39),I(3c,05,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_meth ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,43),I(23,00,00,00),B(mop_meth ,16),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,48,45),I(48,00,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 45 binding: primitive-add-method */
  static const void *G001605[] = {I(ab,1b,1d,24),B(mop_meth ,4),I(3c,02,2a,1b),I(83,02,1d,1c),I(24,00,00,00),B(mop_meth ,9),I(3c,02,1b,34),I(00,00,00,15),I(1f,03,1c,24),B(mop_meth ,11),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1f,03),I(26,00,00,00),I(00,00,00,05),I(02,1f,03,1c),I(0f,1f,05,1c),I(1c,26,00,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,04,1f),I(06,1c,82,1d),I(03,22,02,2a),I(1f,05,24,00),B(mop_gf ,3),I(3c,01,2a,1f),I(05,45,06,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 48 binding: make-method */
  static const void *G001607[] = {I(43,04,1f,03),I(24,00,00,00),B(mop_class ,55),I(50,1b,34,00),I(00,00,00,26),I(1d,24,00,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1d,12,32,00),I(00,00,00,07),I(86,22,01,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,36),I(24,00,00,00),B(mop_class ,55),I(26,00,00,00),I(00,00,00,03),I(01,1b,1f,06),I(1c,83,1d,03),I(22,02,2a,1b),I(1f,05,1c,84),I(1d,03,22,02),I(2a,1b,22,01),I(32,00,00,00),I(00,00,00,2f),I(24,00,00,00),B(mop_gf ,2),I(1f,06,23,00),B(mop_meth ,46),I(1f,07,23,00),B(mop_meth ,47),I(1f,08,1f,08),I(24,00,00,00),B(boot ,5),I(3d,07,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 49 binding: anonymous */
  static const void *G001611[] = {I(aa,1b,47,00),I(02,1a,1b,34),I(00,00,00,7d),I(47,00,01,1d),I(02,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0f),I(24,00,00,00),B(mop_class ,20),I(47,00,03,1f),I(04,02,1b,34),I(00,00,00,2d),I(1c,1c,24,00),B(mop_inspect ,11),I(3c,02,1b,34),I(00,00,00,15),I(1f,05,83,14),I(47,00,00,3d),I(01,06,32,00),I(00,00,00,07),I(86,22,01,32),I(00,00,00,24),I(1c,24,00,00),B(mop_class ,20),I(50,1b,34,00),I(00,00,00,12),I(47,00,01,1f),I(06,86,03,32),I(00,00,00,06),I(86,22,01,22),I(03,32,00,00),I(00,00,00,08),I(87,45,02,00)};

  eul_allocate_static_string(str_1615, "method extends domain of generic function ~a\n    method domain: ~a\n    generic function domain: ~a", 98);
  /* Byte-vector with size: 31 is_init: 0 index: 51 binding: check-method-domain */
  static const void *G001613[] = {I(ab,46,05,1c),I(83,02,1b,48),I(00,01,47,00),I(01,06,1b,48),I(00,02,1d,83),I(02,1b,48,00),I(03,47,00,03),I(06,86,1b,48),I(00,00,23,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,49),I(3b,01,48,00),I(00,47,00,02),I(1d,19,1b,34),I(00,00,00,11),I(82,47,00,00),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,24),I(1f,07,82,02),I(23,00,00,00),B(mop_meth ,50),I(1c,47,00,01),I(47,00,03,24),B(boot ,12),I(3d,04,0a,22),I(01,45,09,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 52 binding: stable-add-method */
  static const void *G001616[] = {I(ab,1c,04,24),B(mop_class ,15),I(50,1b,34,00),I(00,00,00,16),I(1c,04,24,00),B(mop_class ,55),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,1a),I(1f,03,1f,03),I(24,00,00,00),B(mop_meth ,2),I(3d,02,04,32),I(00,00,00,14),I(1f,03,1f,03),I(24,00,00,00),B(mop_meth ,8),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 53 binding: anonymous */
  static const void *G001618[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,32),I(1c,10,1b,83),I(02,1b,47,00),I(00,24,00,00),B(mop_gf ,10),I(3c,02,1b,34),I(00,00,00,0d),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,01,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 54 binding: primitive-find-method */
  static const void *G001620[] = {I(ab,46,02,1b),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,53),I(3b,01,48,00),I(01,1d,26,00),I(00,00,00,05),I(02,47,00,01),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 55 binding: primitive-remove-method */
  static const void *G001622[] = {I(ab,1c,26,00),I(00,00,00,05),I(02,1c,1c,86),I(6c,1b,34,00),I(00,00,00,3e),I(1d,1d,24,00),B(boot ,17),I(3c,02,1f,04),I(1c,1c,26,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,03,86),I(1c,82,1d,03),I(22,02,2a,1f),I(04,24,00,00),B(mop_gf ,3),I(3c,01,22,01),I(32,00,00,00),I(00,00,00,09),I(86,2a,1f,03),I(45,04,00,00)};

  /* Byte-vector with size: 86 is_init: 1 index: 0 binding: initialize-mop-meth */
  static const void *G001624[] = {I(87,25,00,00),B(mop_meth ,1),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_meth ,13),I(86,25,00,00),B(mop_meth ,12),I(23,00,00,00),B(mop_meth ,56),I(23,00,00,00),B(mop_meth ,55),I(3b,02,25,00),B(mop_meth ,11),I(86,25,00,00),B(mop_meth ,10),I(23,00,00,00),B(mop_meth ,57),I(23,00,00,00),B(mop_meth ,54),I(3b,02,25,00),B(mop_meth ,9),I(86,25,00,00),B(mop_meth ,8),I(86,25,00,00),B(mop_meth ,7),I(86,25,00,00),B(mop_meth ,6),I(23,00,00,00),B(mop_meth ,58),I(23,00,00,00),B(mop_meth ,52),I(3b,02,25,00),B(mop_meth ,5),I(23,00,00,00),B(mop_meth ,59),I(23,00,00,00),B(mop_meth ,51),I(3b,02,25,00),B(mop_meth ,4),I(23,00,00,00),B(mop_meth ,60),I(23,00,00,00),B(mop_meth ,48),I(3b,04,25,00),B(mop_meth ,3),I(23,00,00,00),B(mop_meth ,61),I(23,00,00,00),B(mop_meth ,45),I(3b,02,25,00),B(mop_meth ,2),I(23,00,00,00),B(mop_meth ,62),I(23,00,00,00),B(mop_meth ,44),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001563,G001562);
  eul_intern_symbol(sym_1566,"discriminating-function");
  eul_allocate_bytevector( G001565,G001564);
  eul_allocate_bytevector( G001568,G001567);
  eul_intern_symbol(sym_1571,"method-lookup-function");
  eul_allocate_bytevector( G001570,G001569);
  eul_intern_keyword(key_1574,"generic-function");
  eul_allocate_bytevector( G001573,G001572);
  eul_allocate_bytevector( G001576,G001575);
  eul_intern_keyword(key_1579,"methods");
  eul_intern_symbol(sym_1580,"anonymous");
  eul_allocate_bytevector( G001578,G001577);
  eul_allocate_bytevector( G001582,G001581);
  eul_allocate_bytevector( G001584,G001583);
  eul_allocate_bytevector( G001586,G001585);
  object_class(str_1589) = eul_static_string_class;
  eul_allocate_bytevector( G001588,G001587);
  eul_intern_symbol(sym_1592,"add-method");
  eul_intern_symbol(sym_1593,"find-method");
  eul_intern_symbol(sym_1594,"remove-method");
  eul_intern_symbol(sym_1595,"finalize-generic");
  eul_intern_symbol(sym_1596,"compute-method-lookup-function");
  eul_intern_symbol(sym_1597,"compute-discriminating-function");
  eul_intern_symbol(sym_1598,"(method add-method)");
  eul_intern_symbol(sym_1599,"(method find-method)");
  eul_intern_symbol(sym_1600,"(method remove-method)");
  eul_intern_symbol(sym_1601,"(method finalize-generic)");
  eul_intern_symbol(sym_1602,"(method initialize)");
  eul_intern_symbol(sym_1603,"(method compute-method-lookup-function)");
  eul_intern_symbol(sym_1604,"(method compute-discriminating-function)");
  eul_allocate_bytevector( G001591,G001590);
  eul_allocate_bytevector( G001606,G001605);
  eul_intern_keyword(key_1609,"domain");
  eul_intern_keyword(key_1610,"function");
  eul_allocate_bytevector( G001608,G001607);
  eul_allocate_bytevector( G001612,G001611);
  object_class(str_1615) = eul_static_string_class;
  eul_allocate_bytevector( G001614,G001613);
  eul_allocate_bytevector( G001617,G001616);
  eul_allocate_bytevector( G001619,G001618);
  eul_allocate_bytevector( G001621,G001620);
  eul_allocate_bytevector( G001623,G001622);
  eul_intern_symbol(sym_1626,"primitive-remove-method");
  eul_intern_symbol(sym_1627,"primitive-find-method");
  eul_intern_symbol(sym_1628,"stable-add-method");
  eul_intern_symbol(sym_1629,"check-method-domain");
  eul_intern_symbol(sym_1630,"make-method");
  eul_intern_symbol(sym_1631,"primitive-add-method");
  eul_intern_symbol(sym_1632,"top-level");
  eul_allocate_bytevector( G001625,G001624);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      mop_meth_bindings[i] = eul_nil;
  }

  mop_meth_bindings[ 14] = G001563;
  mop_meth_bindings[ 15] = sym_1566;
  mop_meth_bindings[ 16] = G001565;
  mop_meth_bindings[ 17] = G001568;
  mop_meth_bindings[ 18] = sym_1571;
  mop_meth_bindings[ 19] = G001570;
  mop_meth_bindings[ 20] = key_1574;
  mop_meth_bindings[ 21] = G001573;
  mop_meth_bindings[ 22] = G001576;
  mop_meth_bindings[ 23] = key_1579;
  mop_meth_bindings[ 24] = sym_1580;
  mop_meth_bindings[ 25] = G001578;
  mop_meth_bindings[ 26] = G001582;
  mop_meth_bindings[ 27] = G001584;
  mop_meth_bindings[ 28] = G001586;
  mop_meth_bindings[ 29] = str_1589;
  mop_meth_bindings[ 30] = G001588;
  mop_meth_bindings[ 31] = sym_1592;
  mop_meth_bindings[ 32] = sym_1593;
  mop_meth_bindings[ 33] = sym_1594;
  mop_meth_bindings[ 34] = sym_1595;
  mop_meth_bindings[ 35] = sym_1596;
  mop_meth_bindings[ 36] = sym_1597;
  mop_meth_bindings[ 37] = sym_1598;
  mop_meth_bindings[ 38] = sym_1599;
  mop_meth_bindings[ 39] = sym_1600;
  mop_meth_bindings[ 40] = sym_1601;
  mop_meth_bindings[ 41] = sym_1602;
  mop_meth_bindings[ 42] = sym_1603;
  mop_meth_bindings[ 43] = sym_1604;
  mop_meth_bindings[ 44] = G001591;
  mop_meth_bindings[ 45] = G001606;
  mop_meth_bindings[ 46] = key_1609;
  mop_meth_bindings[ 47] = key_1610;
  mop_meth_bindings[ 48] = G001608;
  mop_meth_bindings[ 49] = G001612;
  mop_meth_bindings[ 50] = str_1615;
  mop_meth_bindings[ 51] = G001614;
  mop_meth_bindings[ 52] = G001617;
  mop_meth_bindings[ 53] = G001619;
  mop_meth_bindings[ 54] = G001621;
  mop_meth_bindings[ 55] = G001623;
  mop_meth_bindings[ 1] = eul_nil;
  mop_meth_bindings[ 56] = sym_1626;
  mop_meth_bindings[ 57] = sym_1627;
  mop_meth_bindings[ 58] = sym_1628;
  mop_meth_bindings[ 59] = sym_1629;
  mop_meth_bindings[ 60] = sym_1630;
  mop_meth_bindings[ 61] = sym_1631;
  mop_meth_bindings[ 62] = sym_1632;
  eul_allocate_lambda( mop_meth_bindings[0], "initialize-mop-meth", 0, G001625);

  }
}


/* eof */
