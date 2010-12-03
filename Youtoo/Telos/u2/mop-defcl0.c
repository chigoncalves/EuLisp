/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-defcl0
 **  Copyright: See file mop-defcl0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef string_bindings[];
extern LispRef symbol_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_key_bindings[];

/* Module bindings with size 95 */
LispRef mop_defcl0_bindings[95];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-defcl0 */
void initialize_module_mop_defcl0()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"mop_defcl0",(LispRef) mop_defcl0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1207, sym_1206, sym_1205, sym_1204, sym_1203, sym_1202, sym_1201, sym_1200, sym_1199, sym_1198, sym_1197, sym_1196, G001195, sym_1193, sym_1192, sym_1191, sym_1190, G001189, G001187, G001185, G001177, G001175, sym_1173, sym_1172, sym_1171, G001170, G001168, G001166, sym_1164, key_1163, G001162, sym_1160, sym_1159, G001158, sym_1156, G001155, G001153, sym_1151, sym_1150, key_1149, key_1148, key_1147, key_1146, key_1144, key_1142, key_1140, key_1137, sym_1136, sym_1134, sym_1133, sym_1132, sym_1131, sym_1130, G001129, sym_1127, sym_1126, sym_1125, sym_1124, sym_1123, sym_1122, sym_1121, sym_1120, sym_1119, G001118, G001116, key_1114, key_1112, key_1109, sym_1106, key_1105, key_1104, sym_1103, sym_1101, key_1100, sym_1099, G001098;

  /* Code vector and literal definitions */
  eul_allocate_static_cons(cons_1102, NULL, NULL);
  eul_allocate_static_cons(cons_1113, NULL, NULL);
  eul_allocate_static_cons(cons_1111, NULL, eul_as_static(cons_1113));
  eul_allocate_static_cons(cons_1110, NULL, eul_as_static(cons_1111));
  eul_allocate_static_cons(cons_1108, NULL, eul_as_static(cons_1110));
  eul_allocate_static_cons(cons_1107, NULL, eul_as_static(cons_1108));
  /* Byte-vector with size: 71 is_init: 0 index: 26 binding: do-direct-slotds */
  static const void *G001097[] = {I(aa,1b,12,1b),I(44,04,86,39),I(11,1c,10,7a),I(12,1b,44,36),I(1d,10,1b,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,15),I(1c,0f,23,00),B(mop_defcl0 ,16),I(1c,0f,1f,08),I(11,1b,24,00),B(mop_defcl0 ,2),I(3c,01,1d,1c),I(0f,22,08,36),I(d3,23,00,00),B(mop_defcl0 ,18),I(1f,03,74,23),B(mop_defcl0 ,19),I(1c,1f,03,24),B(mop_key ,2),I(3c,03,1f,05),I(74,23,00,00),B(mop_defcl0 ,20),I(1c,1f,05,24),B(mop_key ,2),I(3c,03,1f,07),I(72,1b,86,0f),I(23,00,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,05),I(1f,08,50,1b),I(44,04,86,36),I(20,1f,06,86),I(0f,86,1c,0f),I(23,00,00,00),B(mop_defcl0 ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,19),I(1c,0f,22,04),I(1f,05,1f,0a),I(50,1b,44,04),I(86,36,0e,1f),I(06,86,0f,23),B(mop_defcl0 ,20),I(1c,0f,22,01),I(1f,0e,74,1b),I(23,00,00,00),B(mop_defcl0 ,25),I(24,00,00,00),B(mop_key ,3),I(3c,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,08),I(1c,0f,23,00),B(mop_defcl0 ,15),I(1c,0f,23,00),B(mop_defcl0 ,16),I(1c,0f,1f,15),I(11,1b,24,00),B(mop_defcl0 ,2),I(3c,01,1d,1c),I(0f,22,15,22),I(01,45,02,00)};

  /* Byte-vector with size: 66 is_init: 0 index: 27 binding: do-accessor */
  static const void *G001115[] = {I(43,04,1c,12),I(1b,44,04,86),I(36,fa,1d,10),I(23,00,00,00),B(mop_defcl0 ,22),I(50,1b,44,48),I(1f,03,73,1b),I(1f,07,1f,07),I(1f,06,24,00),B(mop_defcl0 ,4),I(3c,04,1c,1f),I(08,1f,08,1f),I(07,24,00,00),B(mop_defcl0 ,7),I(3c,04,1f,06),I(75,1f,09,1f),I(09,1d,1f,09),I(24,00,00,00),B(mop_defcl0 ,3),I(3c,04,1f,03),I(1f,03,1d,24),B(collect ,17),I(3d,03,0b,22),I(05,36,a3,1f),I(03,10,23,00),B(mop_defcl0 ,23),I(50,1b,44,38),I(1f,04,73,1b),I(1f,08,1f,08),I(1f,07,24,00),B(mop_defcl0 ,4),I(3c,04,1f,06),I(75,1f,09,1f),I(09,1d,1f,09),I(24,00,00,00),B(mop_defcl0 ,3),I(3c,04,1d,1c),I(24,00,00,00),B(boot ,8),I(3d,02,0b,22),I(04,36,5d,1f),I(04,10,23,00),B(mop_defcl0 ,24),I(50,1b,44,38),I(1f,05,73,1b),I(1f,09,1f,09),I(1f,08,87,24),B(mop_defcl0 ,7),I(3c,05,1f,07),I(75,1f,0a,1f),I(0a,1d,1f,0a),I(24,00,00,00),B(mop_defcl0 ,3),I(3c,04,1d,1c),I(24,00,00,00),B(boot ,8),I(3d,02,0c,22),I(04,36,17,1f),I(05,75,1f,08),I(1f,08,1d,1f),I(08,24,00,00),B(mop_defcl0 ,3),I(3d,04,09,22),I(01,22,01,22),I(01,22,01,45),I(05,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 37 binding: do-reader */
  static const void *G001117[] = {I(43,04,23,00),B(mop_defcl0 ,28),I(86,0f,23,00),B(mop_defcl0 ,29),I(86,0f,23,00),B(mop_defcl0 ,30),I(1c,0f,1f,05),I(86,0f,23,00),B(mop_defcl0 ,31),I(1c,0f,23,00),B(mop_defcl0 ,32),I(1c,0f,23,00),B(mop_defcl0 ,33),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(mop_defcl0 ,34),I(1c,0f,1f,0b),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1d,1c),I(0f,1b,86,0f),I(1f,0e,1c,0f),I(1f,13,1c,0f),I(23,00,00,00),B(mop_defcl0 ,35),I(1c,0f,1f,15),I(86,0f,23,00),B(mop_defcl0 ,36),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,45,19,00)};

  eul_allocate_static_cons(cons_1135, NULL, NULL);
  eul_allocate_static_cons(cons_1145, NULL, NULL);
  eul_allocate_static_cons(cons_1143, NULL, eul_as_static(cons_1145));
  eul_allocate_static_cons(cons_1141, NULL, eul_as_static(cons_1143));
  eul_allocate_static_cons(cons_1139, NULL, eul_as_static(cons_1141));
  eul_allocate_static_cons(cons_1138, NULL, eul_as_static(cons_1139));
  /* Byte-vector with size: 104 is_init: 0 index: 56 binding: defprimclass */
  static const void *G001128[] = {I(43,fb,1f,04),I(24,00,00,00),B(mop_defcl0 ,10),I(3c,01,1f,04),I(86,0f,23,00),B(mop_defcl0 ,38),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,23,00,00),B(mop_defcl0 ,39),I(1c,0f,23,00),B(mop_defcl0 ,40),I(86,0f,23,00),B(mop_defcl0 ,41),I(1c,0f,23,00),B(mop_defcl0 ,42),I(86,0f,1f,0d),I(1c,0f,1d,1c),I(0f,1f,0a,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,0f),I(7b,1b,44,05),I(1f,10,36,0b),I(1f,10,24,00),B(boot1 ,26),I(3c,01,1b,44),I(04,1b,36,09),I(23,00,00,00),B(mop_defcl0 ,44),I(23,00,00,00),B(mop_defcl0 ,16),I(1c,0f,1f,12),I(24,00,00,00),B(mop_defcl0 ,2),I(3c,01,23,00),B(mop_defcl0 ,16),I(1c,0f,23,00),B(mop_defcl0 ,45),I(1f,14,86,24),B(mop_key ,2),I(3c,03,1f,15),I(24,00,00,00),B(mop_defcl0 ,6),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1b,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,18),I(23,00,00,00),B(mop_defcl0 ,50),I(24,00,00,00),B(mop_key ,3),I(3c,02,1c,1c),I(0f,23,00,00),B(mop_defcl0 ,51),I(1c,0f,1f,08),I(1c,0f,23,00),B(mop_defcl0 ,52),I(1c,0f,1f,0c),I(1c,0f,23,00),B(mop_defcl0 ,53),I(1c,0f,1f,12),I(1c,0f,23,00),B(mop_defcl0 ,15),I(1c,0f,23,00),B(mop_defcl0 ,16),I(1c,0f,1b,86),I(0f,1f,27,1c),I(0f,23,00,00),B(mop_defcl0 ,54),I(1c,0f,1f,29),I(1f,27,24,00),B(mop_defcl0 ,12),I(3c,02,1f,2a),I(1f,27,24,00),B(mop_defcl0 ,8),I(3c,02,1f,2b),I(1f,28,24,00),B(mop_defcl0 ,9),I(3c,02,1f,2c),I(1f,29,24,00),B(mop_defcl0 ,13),I(3c,02,1f,2d),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,03),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,07),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,09),I(1c,0f,1f,24),I(1c,0f,1f,2a),I(1c,0f,23,00),B(mop_defcl0 ,55),I(1c,0f,45,36)};

  /* Byte-vector with size: 23 is_init: 0 index: 57 binding: anonymous */
  static const void *G001152[] = {I(ab,1c,12,1b),I(44,04,1c,36),I(50,1d,10,1b),I(7a,12,1b,44),I(11,1f,04,11),I(1b,1f,05,47),I(00,00,3d,02),I(06,22,01,36),I(36,1c,11,23),B(mop_defcl0 ,20),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,12),I(1b,44,11,1f),I(07,11,1b,1f),I(08,47,00,00),I(3d,02,09,22),I(01,36,0e,1f),I(07,11,1d,1f),I(08,0f,47,00),I(00,3d,02,08),I(22,03,22,02),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 59 binding: find-slot-keywords */
  static const void *G001154[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,57),I(3b,02,48,00),I(00,1c,86,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 79 is_init: 0 index: 62 binding: do-writer */
  static const void *G001157[] = {I(43,fb,12,1b),I(44,97,1f,04),I(86,0f,23,00),B(mop_defcl0 ,41),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,29),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,0a),I(86,0f,23,00),B(mop_defcl0 ,31),I(1c,0f,23,00),B(mop_defcl0 ,32),I(1c,0f,23,00),B(mop_defcl0 ,61),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(mop_defcl0 ,34),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,1f,11),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,03),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1f,13,1c),I(0f,23,00,00),B(mop_defcl0 ,35),I(1c,0f,86,0f),I(22,16,36,9c),I(23,00,00,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,29),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,08),I(86,0f,23,00),B(mop_defcl0 ,31),I(1c,0f,23,00),B(mop_defcl0 ,32),I(1c,0f,23,00),B(mop_defcl0 ,61),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(mop_defcl0 ,34),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,1f,0f),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,03),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1f,17,1c),I(0f,23,00,00),B(mop_defcl0 ,35),I(1c,0f,1f,19),I(86,0f,23,00),B(mop_defcl0 ,36),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,22,18,45),I(05,00,00,00)};

  /* Byte-vector with size: 48 is_init: 0 index: 65 binding: do-predicates */
  static const void *G001161[] = {I(ab,1b,12,1b),I(44,04,86,36),I(b3,1c,10,23),B(mop_defcl0 ,46),I(50,1b,44,94),I(1d,73,23,00),B(mop_defcl0 ,43),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,43),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,86,86,0f),I(1c,1c,0f,1f),I(0c,86,0f,23),B(mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,28),I(86,0f,1c,1c),I(0f,1b,86,0f),I(23,00,00,00),B(mop_defcl0 ,63),I(1c,0f,1f,07),I(1c,0f,23,00),B(mop_defcl0 ,63),I(1c,0f,1f,0e),I(1c,0f,1f,12),I(1c,0f,23,00),B(mop_defcl0 ,64),I(1c,0f,1b,86),I(0f,1f,18,75),I(1f,1a,1c,24),B(mop_defcl0 ,8),I(3c,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3d,02,1c,22),I(18,36,13,1d),I(75,1f,04,1c),I(24,00,00,00),B(mop_defcl0 ,8),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 66 binding: anonymous */
  static const void *G001165[] = {I(43,03,1d,12),I(1b,44,04,1c),I(36,32,1f,03),I(11,1f,03,11),I(1f,05,10,1f),I(05,10,1c,1c),I(24,00,00,00),B(boot1 ,26),I(3c,02,1f,06),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,1d,47),I(00,00,3d,03),I(0a,22,06,45),I(04,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 67 binding: anonymous */
  static const void *G001167[] = {I(aa,24,00,00),B(symbol ,6),I(3d,00,01,00)};

  /* Byte-vector with size: 60 is_init: 0 index: 71 binding: do-constructors */
  static const void *G001169[] = {I(ab,46,08,1b),I(12,1b,44,04),I(86,36,e1,1c),I(10,23,00,00),B(mop_defcl0 ,48),I(50,1b,44,c2),I(1d,73,1b,7a),I(12,1b,44,3b),I(23,00,00,00),B(mop_defcl0 ,68),I(86,0f,1f,06),I(1c,0f,23,00),B(mop_defcl0 ,69),I(1c,0f,23,00),B(mop_defcl0 ,70),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,68),I(1c,0f,1f,07),I(1c,0f,23,00),B(mop_defcl0 ,35),I(1c,0f,22,07),I(36,6b,1c,11),I(23,00,00,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,67),I(3b,01,1c,24),B(collect ,2),I(3c,02,1f,03),I(10,86,1b,48),I(00,00,23,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,66),I(3b,03,48,00),I(00,47,00,00),I(1f,06,11,1b),I(1f,05,86,47),I(00,00,3c,03),I(1f,0c,1c,0f),I(23,00,00,00),B(mop_defcl0 ,69),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,1f,08,1c),I(0f,23,00,00),B(mop_defcl0 ,35),I(1c,0f,22,0c),I(1f,05,75,1f),I(07,1c,24,00),B(mop_defcl0 ,9),I(3c,02,1d,1c),I(0f,22,05,36),I(11,1d,75,1f),I(04,1c,24,00),B(mop_defcl0 ,9),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 72 binding: strip-<> */
  static const void *G001174[] = {I(aa,1b,82,02),I(1b,82,0b,27),I(3c,50,1b,44),I(1c,1c,06,1b),I(2c,1f,03,83),I(1d,24,00,00),B(string ,6),I(3c,03,41,00),B(boot1 ,56),I(22,03,36,02),I(1d,45,03,00)};

  eul_allocate_static_cons(cons_1178, NULL, NULL);
  eul_allocate_static_cons(cons_1183, NULL, NULL);
  eul_allocate_static_cons(cons_1182, NULL, eul_as_static(cons_1183));
  eul_allocate_static_cons(cons_1181, NULL, eul_as_static(cons_1182));
  eul_allocate_static_cons(cons_1180, NULL, eul_as_static(cons_1181));
  eul_allocate_static_cons(cons_1179, NULL, eul_as_static(cons_1180));
  /* Byte-vector with size: 94 is_init: 0 index: 75 binding: defclass */
  static const void *G001176[] = {I(43,fc,1f,03),I(24,00,00,00),B(mop_defcl0 ,10),I(3c,01,23,00),B(mop_defcl0 ,47),I(1d,23,00,00),B(mop_defcl0 ,42),I(24,00,00,00),B(mop_key ,2),I(3c,03,1c,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,06),I(7b,1b,44,05),I(1f,07,36,0b),I(1f,07,24,00),B(boot1 ,26),I(3c,01,1b,44),I(04,1b,36,09),I(23,00,00,00),B(mop_defcl0 ,73),I(23,00,00,00),B(mop_defcl0 ,16),I(1c,0f,1f,09),I(24,00,00,00),B(mop_defcl0 ,2),I(3c,01,23,00),B(mop_defcl0 ,16),I(1c,0f,23,00),B(mop_defcl0 ,45),I(1f,0b,86,24),B(mop_key ,2),I(3c,03,1f,0c),I(24,00,00,00),B(mop_defcl0 ,6),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1b,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,0f),I(23,00,00,00),B(mop_defcl0 ,74),I(24,00,00,00),B(mop_key ,3),I(3c,02,1c,1c),I(0f,23,00,00),B(mop_defcl0 ,51),I(1c,0f,1f,08),I(1c,0f,23,00),B(mop_defcl0 ,52),I(1c,0f,1f,0c),I(1c,0f,23,00),B(mop_defcl0 ,53),I(1c,0f,1f,12),I(1c,0f,23,00),B(mop_defcl0 ,15),I(1c,0f,1f,16),I(1c,0f,23,00),B(mop_defcl0 ,69),I(1c,0f,1b,86),I(0f,1f,1e,1c),I(0f,23,00,00),B(mop_defcl0 ,39),I(1c,0f,1f,20),I(1f,1f,24,00),B(mop_defcl0 ,12),I(3c,02,1f,21),I(1f,1f,24,00),B(mop_defcl0 ,8),I(3c,02,1f,22),I(1f,20,24,00),B(mop_defcl0 ,9),I(3c,02,1f,23),I(1f,21,24,00),B(mop_defcl0 ,13),I(3c,02,1f,24),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,03),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,07),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,09),I(1c,0f,23,00),B(mop_defcl0 ,55),I(1c,0f,45,2b)};

  /* Byte-vector with size: 24 is_init: 0 index: 76 binding: anonymous */
  static const void *G001184[] = {I(43,03,1d,12),I(1b,44,04,1d),I(36,52,1f,03),I(10,1b,7a,12),I(1b,44,15,1f),I(05,11,1f,04),I(2c,1c,1f,07),I(1d,47,00,01),I(3d,03,08,22),I(02,36,33,1f),I(05,11,1d,10),I(1f,03,11,47),I(00,00,1d,1d),I(1f,09,24,00),B(mop_defcl0 ,3),I(3c,04,1b,1f),I(09,24,00,00),B(boot ,8),I(3c,02,1f,08),I(2c,1f,05,1d),I(1d,47,00,01),I(3d,03,0c,22),I(06,22,02,45),I(04,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 77 binding: do-accessors */
  static const void *G001186[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,76),I(3b,03,48,00),I(01,1c,24,00),B(boot ,19),I(3c,01,1b,2c),I(1f,03,86,1d),I(47,00,01,3d),I(03,05,45,05)};

  /* Byte-vector with size: 25 is_init: 0 index: 82 binding: do-printfn */
  static const void *G001188[] = {I(ab,23,00,00),B(mop_defcl0 ,49),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,12),I(1b,44,04,86),I(36,49,1f,03),I(86,0f,23,00),B(mop_defcl0 ,78),I(1c,0f,23,00),B(mop_defcl0 ,79),I(86,0f,1c,1c),I(0f,23,00,00),B(mop_defcl0 ,79),I(86,0f,23,00),B(mop_defcl0 ,78),I(1c,0f,1f,07),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(mop_defcl0 ,80),I(1c,0f,23,00),B(mop_defcl0 ,81),I(1c,0f,86,0f),I(22,0a,45,04)};

  /* Byte-vector with size: 80 is_init: 1 index: 0 binding: initialize-mop-defcl0 */
  static const void *G001194[] = {I(87,25,00,00),B(mop_defcl0 ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_defcl0 ,83),I(23,00,00,00),B(mop_defcl0 ,82),I(3b,02,25,00),B(mop_defcl0 ,13),I(23,00,00,00),B(mop_defcl0 ,84),I(23,00,00,00),B(mop_defcl0 ,77),I(3b,02,25,00),B(mop_defcl0 ,12),I(23,00,00,00),B(mop_defcl0 ,85),I(23,00,00,00),B(mop_defcl0 ,75),I(3b,fc,25,00),B(mop_defcl0 ,11),I(23,00,00,00),B(mop_defcl0 ,86),I(23,00,00,00),B(mop_defcl0 ,72),I(3b,01,25,00),B(mop_defcl0 ,10),I(23,00,00,00),B(mop_defcl0 ,87),I(23,00,00,00),B(mop_defcl0 ,71),I(3b,02,25,00),B(mop_defcl0 ,9),I(23,00,00,00),B(mop_defcl0 ,88),I(23,00,00,00),B(mop_defcl0 ,65),I(3b,02,25,00),B(mop_defcl0 ,8),I(23,00,00,00),B(mop_defcl0 ,89),I(23,00,00,00),B(mop_defcl0 ,62),I(3b,fb,25,00),B(mop_defcl0 ,7),I(23,00,00,00),B(mop_defcl0 ,90),I(23,00,00,00),B(mop_defcl0 ,59),I(3b,01,25,00),B(mop_defcl0 ,6),I(23,00,00,00),B(mop_defcl0 ,91),I(23,00,00,00),B(mop_defcl0 ,56),I(3b,fb,25,00),B(mop_defcl0 ,5),I(23,00,00,00),B(mop_defcl0 ,92),I(23,00,00,00),B(mop_defcl0 ,37),I(3b,04,25,00),B(mop_defcl0 ,4),I(23,00,00,00),B(mop_defcl0 ,93),I(23,00,00,00),B(mop_defcl0 ,27),I(3b,04,25,00),B(mop_defcl0 ,3),I(23,00,00,00),B(mop_defcl0 ,94),I(23,00,00,00),B(mop_defcl0 ,26),I(3b,01,25,00),B(mop_defcl0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1099,"quote");
  eul_intern_keyword(key_1100,"name");
  eul_intern_symbol(sym_1101,"list");
  eul_intern_symbol(sym_1103,"absent");
  object_class(cons_1102) = eul_static_cons_class;
  eul_car(cons_1102) = sym_1103;
  eul_cdr(cons_1102) = eul_nil;
  eul_intern_keyword(key_1104,"default");
  eul_intern_keyword(key_1105,"keyword");
  eul_intern_symbol(sym_1106,"lambda");
  eul_intern_keyword(key_1109,"accessor");
  eul_intern_keyword(key_1112,"reader");
  eul_intern_keyword(key_1114,"writer");
  object_class(cons_1113) = eul_static_cons_class;
  eul_car(cons_1113) = key_1114;
  eul_cdr(cons_1113) = eul_nil;
  object_class(cons_1111) = eul_static_cons_class;
  eul_car(cons_1111) = key_1112;
  object_class(cons_1110) = eul_static_cons_class;
  eul_car(cons_1110) = key_1105;
  object_class(cons_1108) = eul_static_cons_class;
  eul_car(cons_1108) = key_1109;
  object_class(cons_1107) = eul_static_cons_class;
  eul_car(cons_1107) = key_1104;
  eul_allocate_bytevector( G001098,G001097);
  eul_allocate_bytevector( G001116,G001115);
  eul_intern_symbol(sym_1119,"x");
  eul_intern_symbol(sym_1120,"i");
  eul_intern_symbol(sym_1121,"o");
  eul_intern_symbol(sym_1122,"?");
  eul_intern_symbol(sym_1123,"binding-ref");
  eul_intern_symbol(sym_1124,"primitive-relative-ref");
  eul_intern_symbol(sym_1125,"opencoded-lambda");
  eul_intern_symbol(sym_1126,"defun");
  eul_intern_symbol(sym_1127,"declare-inline");
  eul_allocate_bytevector( G001118,G001117);
  eul_intern_symbol(sym_1130,"get-global-register");
  eul_intern_symbol(sym_1131,"defconstant");
  eul_intern_symbol(sym_1132,"primitive-class-of");
  eul_intern_symbol(sym_1133,"setter");
  eul_intern_symbol(sym_1134,"<simple-class>");
  eul_intern_symbol(sym_1136,"<object>");
  object_class(cons_1135) = eul_static_cons_class;
  eul_car(cons_1135) = sym_1136;
  eul_cdr(cons_1135) = eul_nil;
  eul_intern_keyword(key_1137,"keywords");
  eul_intern_keyword(key_1140,"predicate");
  eul_intern_keyword(key_1142,"class");
  eul_intern_keyword(key_1144,"constructor");
  eul_intern_keyword(key_1146,"print-function");
  object_class(cons_1145) = eul_static_cons_class;
  eul_car(cons_1145) = key_1146;
  eul_cdr(cons_1145) = eul_nil;
  object_class(cons_1143) = eul_static_cons_class;
  eul_car(cons_1143) = key_1144;
  object_class(cons_1141) = eul_static_cons_class;
  eul_car(cons_1141) = key_1142;
  object_class(cons_1139) = eul_static_cons_class;
  eul_car(cons_1139) = key_1140;
  object_class(cons_1138) = eul_static_cons_class;
  eul_car(cons_1138) = key_1137;
  eul_intern_keyword(key_1147,"direct-keywords");
  eul_intern_keyword(key_1148,"direct-slots");
  eul_intern_keyword(key_1149,"direct-superclasses");
  eul_intern_symbol(sym_1150,"initialize");
  eul_intern_symbol(sym_1151,"progn");
  eul_allocate_bytevector( G001129,G001128);
  eul_allocate_bytevector( G001153,G001152);
  eul_intern_symbol(sym_1156,"anonymous");
  eul_allocate_bytevector( G001155,G001154);
  eul_intern_symbol(sym_1159,"v");
  eul_intern_symbol(sym_1160,"set-primitive-relative-ref");
  eul_allocate_bytevector( G001158,G001157);
  eul_intern_keyword(key_1163,"method");
  eul_intern_symbol(sym_1164,"defgeneric");
  eul_allocate_bytevector( G001162,G001161);
  eul_allocate_bytevector( G001166,G001165);
  eul_allocate_bytevector( G001168,G001167);
  eul_intern_symbol(sym_1171,"inits");
  eul_intern_symbol(sym_1172,"make");
  eul_intern_symbol(sym_1173,"apply");
  eul_allocate_bytevector( G001170,G001169);
  eul_allocate_bytevector( G001175,G001174);
  object_class(cons_1178) = eul_static_cons_class;
  eul_car(cons_1178) = sym_1136;
  eul_cdr(cons_1178) = eul_nil;
  object_class(cons_1183) = eul_static_cons_class;
  eul_car(cons_1183) = key_1146;
  eul_cdr(cons_1183) = eul_nil;
  object_class(cons_1182) = eul_static_cons_class;
  eul_car(cons_1182) = key_1144;
  object_class(cons_1181) = eul_static_cons_class;
  eul_car(cons_1181) = key_1142;
  object_class(cons_1180) = eul_static_cons_class;
  eul_car(cons_1180) = key_1140;
  object_class(cons_1179) = eul_static_cons_class;
  eul_car(cons_1179) = key_1137;
  eul_allocate_bytevector( G001177,G001176);
  eul_allocate_bytevector( G001185,G001184);
  eul_allocate_bytevector( G001187,G001186);
  eul_intern_symbol(sym_1190,"obj");
  eul_intern_symbol(sym_1191,"str");
  eul_intern_symbol(sym_1192,"generic-print");
  eul_intern_symbol(sym_1193,"defmethod");
  eul_allocate_bytevector( G001189,G001188);
  eul_intern_symbol(sym_1196,"do-printfn");
  eul_intern_symbol(sym_1197,"do-accessors");
  eul_intern_symbol(sym_1198,"defclass");
  eul_intern_symbol(sym_1199,"strip-<>");
  eul_intern_symbol(sym_1200,"do-constructors");
  eul_intern_symbol(sym_1201,"do-predicates");
  eul_intern_symbol(sym_1202,"do-writer");
  eul_intern_symbol(sym_1203,"find-slot-keywords");
  eul_intern_symbol(sym_1204,"defprimclass");
  eul_intern_symbol(sym_1205,"do-reader");
  eul_intern_symbol(sym_1206,"do-accessor");
  eul_intern_symbol(sym_1207,"do-direct-slotds");
  eul_allocate_bytevector( G001195,G001194);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      mop_defcl0_bindings[i] = eul_nil;
  }

  mop_defcl0_bindings[ 14] = sym_1099;
  mop_defcl0_bindings[ 15] = key_1100;
  mop_defcl0_bindings[ 16] = sym_1101;
  mop_defcl0_bindings[ 17] = sym_1103;
  mop_defcl0_bindings[ 18] = cons_1102;
  mop_defcl0_bindings[ 19] = key_1104;
  mop_defcl0_bindings[ 20] = key_1105;
  mop_defcl0_bindings[ 21] = sym_1106;
  mop_defcl0_bindings[ 22] = key_1109;
  mop_defcl0_bindings[ 23] = key_1112;
  mop_defcl0_bindings[ 24] = key_1114;
  mop_defcl0_bindings[ 25] = cons_1107;
  mop_defcl0_bindings[ 26] = G001098;
  mop_defcl0_bindings[ 27] = G001116;
  mop_defcl0_bindings[ 28] = sym_1119;
  mop_defcl0_bindings[ 29] = sym_1120;
  mop_defcl0_bindings[ 30] = sym_1121;
  mop_defcl0_bindings[ 31] = sym_1122;
  mop_defcl0_bindings[ 32] = sym_1123;
  mop_defcl0_bindings[ 33] = sym_1124;
  mop_defcl0_bindings[ 34] = sym_1125;
  mop_defcl0_bindings[ 35] = sym_1126;
  mop_defcl0_bindings[ 36] = sym_1127;
  mop_defcl0_bindings[ 37] = G001118;
  mop_defcl0_bindings[ 38] = sym_1130;
  mop_defcl0_bindings[ 39] = sym_1131;
  mop_defcl0_bindings[ 40] = sym_1132;
  mop_defcl0_bindings[ 41] = sym_1133;
  mop_defcl0_bindings[ 42] = sym_1134;
  mop_defcl0_bindings[ 43] = sym_1136;
  mop_defcl0_bindings[ 44] = cons_1135;
  mop_defcl0_bindings[ 45] = key_1137;
  mop_defcl0_bindings[ 46] = key_1140;
  mop_defcl0_bindings[ 47] = key_1142;
  mop_defcl0_bindings[ 48] = key_1144;
  mop_defcl0_bindings[ 49] = key_1146;
  mop_defcl0_bindings[ 50] = cons_1138;
  mop_defcl0_bindings[ 51] = key_1147;
  mop_defcl0_bindings[ 52] = key_1148;
  mop_defcl0_bindings[ 53] = key_1149;
  mop_defcl0_bindings[ 54] = sym_1150;
  mop_defcl0_bindings[ 55] = sym_1151;
  mop_defcl0_bindings[ 56] = G001129;
  mop_defcl0_bindings[ 57] = G001153;
  mop_defcl0_bindings[ 58] = sym_1156;
  mop_defcl0_bindings[ 59] = G001155;
  mop_defcl0_bindings[ 60] = sym_1159;
  mop_defcl0_bindings[ 61] = sym_1160;
  mop_defcl0_bindings[ 62] = G001158;
  mop_defcl0_bindings[ 63] = key_1163;
  mop_defcl0_bindings[ 64] = sym_1164;
  mop_defcl0_bindings[ 65] = G001162;
  mop_defcl0_bindings[ 66] = G001166;
  mop_defcl0_bindings[ 67] = G001168;
  mop_defcl0_bindings[ 68] = sym_1171;
  mop_defcl0_bindings[ 69] = sym_1172;
  mop_defcl0_bindings[ 70] = sym_1173;
  mop_defcl0_bindings[ 71] = G001170;
  mop_defcl0_bindings[ 72] = G001175;
  mop_defcl0_bindings[ 73] = cons_1178;
  mop_defcl0_bindings[ 74] = cons_1179;
  mop_defcl0_bindings[ 75] = G001177;
  mop_defcl0_bindings[ 76] = G001185;
  mop_defcl0_bindings[ 77] = G001187;
  mop_defcl0_bindings[ 78] = sym_1190;
  mop_defcl0_bindings[ 79] = sym_1191;
  mop_defcl0_bindings[ 80] = sym_1192;
  mop_defcl0_bindings[ 81] = sym_1193;
  mop_defcl0_bindings[ 82] = G001189;
  mop_defcl0_bindings[ 1] = eul_nil;
  mop_defcl0_bindings[ 83] = sym_1196;
  mop_defcl0_bindings[ 84] = sym_1197;
  mop_defcl0_bindings[ 85] = sym_1198;
  mop_defcl0_bindings[ 86] = sym_1199;
  mop_defcl0_bindings[ 87] = sym_1200;
  mop_defcl0_bindings[ 88] = sym_1201;
  mop_defcl0_bindings[ 89] = sym_1202;
  mop_defcl0_bindings[ 90] = sym_1203;
  mop_defcl0_bindings[ 91] = sym_1204;
  mop_defcl0_bindings[ 92] = sym_1205;
  mop_defcl0_bindings[ 93] = sym_1206;
  mop_defcl0_bindings[ 94] = sym_1207;
  eul_allocate_lambda( mop_defcl0_bindings[0], "initialize-mop-defcl0", 0, G001195);

  }
}


/* eof */
