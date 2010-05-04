/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module table1
 **  Copyright: See file table1.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_list();
extern void initialize_module_fpi();
extern void initialize_module_string();
extern void initialize_module_vector();
extern LispRef string_bindings[];
extern LispRef fpi_bindings[];
extern LispRef list_bindings[];
extern LispRef copy_bindings[];
extern LispRef convert_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef collect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef boot1_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef vector_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 102 */
LispRef table1_bindings[102];

/* Foreign functions */
static LispRef ff_stub_eul_hash_object7482 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007602, res;

  POPVAL1(G007602);
  FF_RES_CONVERT0(res,eul_hash_object(FF_ARG_CONVERT8(G007602)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module table1 */
void initialize_module_table1()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_list();
  initialize_module_fpi();
  initialize_module_string();
  initialize_module_vector();
  eul_fast_table_set(eul_modules,"table1",(LispRef) table1_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_7601, sym_7600, sym_7599, sym_7598, sym_7597, sym_7596, sym_7595, G007594, G007592, G007590, G007588, G007586, G007584, G007582, sym_7580, sym_7579, sym_7578, sym_7577, sym_7576, sym_7575, sym_7574, sym_7573, sym_7572, sym_7571, sym_7570, sym_7569, sym_7568, sym_7567, sym_7566, sym_7565, sym_7564, sym_7563, sym_7562, sym_7561, sym_7560, sym_7557, sym_7556, sym_7555, key_7553, key_7552, key_7551, sym_7550, sym_7549, key_7548, sym_7547, key_7546, key_7545, sym_7544, sym_7543, key_7542, G007541, G007539, G007537, G007535, G007533, G007531, G007529, G007527, G007525, G007523, G007521, G007519, G007517, G007515, G007513, G007511, G007509, key_7504, key_7503, G007502, G007500, G007498, G007496, G007494, G007492, sym_7490, G007489, G007487, G007484;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_7485, "keys of table ~a not accessable", 31);
  /* Byte-vector with size: 5 is_init: 0 index: 20 binding: (method-table-keys) */
  static const void *G007483[] = {I(aa,23,00,00),B(table1 ,19),I(1c,24,00,00),B(boot ,22),I(3d,02,01,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 21 binding: anonymous */
  static const void *G007486[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,17),I(1c,10,1b,47),I(00,00,0f,1b),I(48,00,00,47),I(00,00,22,02),I(45,02,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 23 binding: (method-table-keys) */
  static const void *G007488[] = {I(aa,46,01,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,86,1b,48),I(00,00,1c,24),B(vector ,5),I(3c,01,1b,34),I(00,00,00,2d),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,21),I(3b,01,1f,03),I(24,00,00,00),B(vector ,13),I(3c,02,2a,47),I(00,00,32,00),I(00,00,00,07),I(86,45,03,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 24 binding: anonymous */
  static const void *G007491[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,17),I(1c,11,1b,47),I(00,00,0f,1b),I(48,00,00,47),I(00,00,22,02),I(45,02,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 25 binding: (method-table-values) */
  static const void *G007493[] = {I(aa,46,01,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,86,1b,48),I(00,00,1c,24),B(vector ,5),I(3c,01,1b,34),I(00,00,00,2d),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,24),I(3b,01,1f,03),I(24,00,00,00),B(vector ,13),I(3c,02,2a,47),I(00,00,32,00),I(00,00,00,07),I(86,45,03,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-size) */
  static const void *G007495[] = {I(aa,83,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: (method-reset) */
  static const void *G007497[] = {I(aa,24,00,00),B(table1 ,9),I(3d,01,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 28 binding: (method-clear-table) */
  static const void *G007499[] = {I(aa,1b,86,1c),I(26,00,00,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,22,02,2a),I(1b,82,1c,83),I(1d,24,00,00),B(table1 ,4),I(09,22,02,2a),I(26,00,00,00),I(00,00,00,10),I(26,00,00,00),I(00,00,00,04),I(15,1c,1c,1c),I(82,1d,24,00),B(table1 ,4),I(09,22,02,2a),I(1c,45,02,00)};

  eul_allocate_static_cons(cons_7506, NULL, NULL);
  eul_allocate_static_cons(cons_7505, NULL, eul_as_static(cons_7506));
  eul_allocate_static_string(str_7507, "table initialization of ~a without hash function", 48);
  /* Byte-vector with size: 69 is_init: 0 index: 33 binding: (method-initialize) */
  static const void *G007501[] = {I(ab,1c,04,24),B(table1 ,4),I(50,1b,34,00),I(00,00,01,02),I(1c,23,00,00),B(table1 ,29),I(24,00,00,00),B(boot ,28),I(3c,02,1d,23),B(table1 ,30),I(24,00,00,00),B(boot ,28),I(3c,02,24,00),B(mop_inspect ,6),I(3c,01,1b,34),I(00,00,00,25),I(24,00,00,00),B(mop_gf ,2),I(24,00,00,00),B(table1 ,8),I(1f,05,24,00),B(boot ,9),I(3d,03,05,32),I(00,00,00,a8),I(1c,24,00,00),B(compare ,7),I(50,1b,34,00),I(00,00,00,26),I(24,00,00,00),B(mop_gf ,2),I(24,00,00,00),B(table1 ,8),I(1f,06,24,00),B(boot ,9),I(3d,03,06,32),I(00,00,00,76),I(86,24,00,00),B(boot1 ,24),I(24,00,00,00),B(boot1 ,44),I(24,00,00,00),B(boot1 ,26),I(3c,03,1f,03),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,3c),I(1f,06,23,00),B(table1 ,31),I(24,00,00,00),B(mop_key ,3),I(3c,02,24,00),B(mop_gf ,2),I(24,00,00,00),B(table1 ,14),I(1d,24,00,00),B(boot ,9),I(3d,03,09,22),I(01,32,00,00),I(00,00,00,1a),I(23,00,00,00),B(table1 ,32),I(1f,08,24,00),B(boot ,22),I(3d,02,08,22),I(02,22,01,22),I(02,32,00,00),I(00,00,00,0a),I(38,02,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 34 binding: (method-hash-table-p) */
  static const void *G007508[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 35 binding: (method-hash-table-p) */
  static const void *G007510[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 36 binding: (setter-table-comparator) */
  static const void *G007512[] = {I(ab,1c,83,1d),I(24,00,00,00),B(table1 ,8),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 37 binding: (setter-table-hash-function) */
  static const void *G007514[] = {I(ab,1c,82,1d),I(24,00,00,00),B(table1 ,8),I(09,45,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 38 binding: (method-simple-hash-table-p) */
  static const void *G007516[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-simple-hash-table-p) */
  static const void *G007518[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-tablep) */
  static const void *G007520[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-tablep) */
  static const void *G007522[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 42 binding: (setter-table-entries) */
  static const void *G007524[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,4),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 43 binding: (setter-table-size) */
  static const void *G007526[] = {I(ab,1c,83,1d),I(24,00,00,00),B(table1 ,4),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 44 binding: (setter-table-threshold) */
  static const void *G007528[] = {I(ab,1c,82,1d),I(24,00,00,00),B(table1 ,4),I(09,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 45 binding: anonymous */
  static const void *G007530[] = {I(a9,24,00,00),B(table1 ,3),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 46 binding: anonymous */
  static const void *G007532[] = {I(a9,24,00,00),B(boot1 ,44),I(45,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 47 binding: anonymous */
  static const void *G007534[] = {I(a9,26,00,00),I(00,00,00,10),I(26,00,00,00),I(00,00,00,04),I(15,45,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 48 binding: anonymous */
  static const void *G007536[] = {I(a9,82,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 49 binding: anonymous */
  static const void *G007538[] = {I(aa,41,00,00),B(table1 ,18),I(45,01,00,00)};

  eul_allocate_static_cons(cons_7554, NULL, NULL);
  eul_allocate_static_cons(cons_7559, NULL, NULL);
  eul_allocate_static_cons(cons_7558, NULL, eul_as_static(cons_7559));
  /* Byte-vector with size: 711 is_init: 0 index: 88 binding: top-level */
  static const void *G007540[] = {I(a9,23,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,49),I(3b,01,89,00),B(table1 ,3),I(2a,24,00,00),B(collect ,25),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,51),I(24,00,00,00),B(boot1 ,26),I(3c,02,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,52),I(23,00,00,00),B(table1 ,53),I(23,00,00,00),B(table1 ,54),I(24,00,00,00),B(boot1 ,26),I(3c,04,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,55),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,48),I(3b,00,24,00),B(boot1 ,26),I(3c,04,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,57),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,47),I(3b,00,24,00),B(boot1 ,26),I(3c,04,1f,03),I(1f,03,1f,03),I(1f,03,24,00),B(boot1 ,26),I(3c,04,24,00),B(mop_class ,71),I(23,00,00,00),B(table1 ,50),I(23,00,00,00),B(table1 ,58),I(23,00,00,00),B(table1 ,59),I(1f,09,23,00),B(table1 ,60),I(1f,06,23,00),B(table1 ,61),I(23,00,00,00),B(table1 ,62),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(table1 ,4),I(2a,28,1c,1b),I(89,00,00,00),B(table1 ,14),I(2a,24,00,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,63),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,46),I(3b,00,23,00),B(table1 ,53),I(23,00,00,00),B(table1 ,29),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,64),I(23,00,00,00),B(table1 ,56),I(23,00,00,00),B(table1 ,22),I(23,00,00,00),B(table1 ,45),I(3b,00,23,00),B(table1 ,53),I(23,00,00,00),B(table1 ,30),I(24,00,00,00),B(boot1 ,26),I(3c,06,1c,1c),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,71),I(23,00,00,00),B(table1 ,50),I(23,00,00,00),B(table1 ,65),I(23,00,00,00),B(table1 ,59),I(1f,07,23,00),B(table1 ,60),I(1f,06,23,00),B(table1 ,61),I(23,00,00,00),B(table1 ,66),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(table1 ,8),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,67),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,12),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,68),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,6),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,69),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,13),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,70),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,9),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,71),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,16),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,72),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table1 ,2),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table1 ,11),I(23,00,00,00),B(table1 ,73),I(23,00,00,00),B(table1 ,44),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table1 ,5),I(23,00,00,00),B(table1 ,74),I(23,00,00,00),B(table1 ,43),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table1 ,15),I(23,00,00,00),B(table1 ,75),I(23,00,00,00),B(table1 ,42),I(3b,02,1d,3c),I(02,2a,24,00),B(table1 ,12),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,76),I(23,00,00,00),B(table1 ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,12),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,76),I(23,00,00,00),B(table1 ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,12),I(2a,24,00,00),B(table1 ,4),I(2a,24,00,00),B(table1 ,14),I(24,00,00,00),B(mop_class ,71),I(05,2a,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(table1 ,50),I(23,00,00,00),B(table1 ,77),I(23,00,00,00),B(table1 ,59),I(1f,04,23,00),B(table1 ,60),I(1f,05,23,00),B(table1 ,61),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(table1 ,14),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(table1 ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,78),I(23,00,00,00),B(table1 ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,14),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,78),I(23,00,00,00),B(table1 ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,6),I(2a,24,00,00),B(table1 ,14),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table1 ,10),I(23,00,00,00),B(table1 ,79),I(23,00,00,00),B(table1 ,37),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(table1 ,7),I(23,00,00,00),B(table1 ,80),I(23,00,00,00),B(table1 ,36),I(3b,02,1d,3c),I(02,2a,24,00),B(table1 ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,81),I(23,00,00,00),B(table1 ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,8),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,81),I(23,00,00,00),B(table1 ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,13),I(2a,24,00,00),B(table1 ,8),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,4),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,82),I(23,00,00,00),B(table1 ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,9),I(2a,24,00,00),B(table1 ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,83),I(23,00,00,00),B(table1 ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,84),I(23,00,00,00),B(table1 ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,85),I(23,00,00,00),B(table1 ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,16),I(2a,24,00,00),B(table1 ,16),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,86),I(23,00,00,00),B(table1 ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,2),I(2a,24,00,00),B(table1 ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,87),I(23,00,00,00),B(table1 ,23),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table1 ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,14),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(table1 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(table1 ,87),I(23,00,00,00),B(table1 ,20),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table1 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,7b,45),I(7b,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 89 binding: table-size */
  static const void *G007581[] = {I(aa,83,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 90 binding: table-comparator */
  static const void *G007583[] = {I(aa,83,24,00),B(table1 ,8),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 91 binding: table-hash-function */
  static const void *G007585[] = {I(aa,82,24,00),B(table1 ,8),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 92 binding: table-threshold */
  static const void *G007587[] = {I(aa,82,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 93 binding: table-entries */
  static const void *G007589[] = {I(aa,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 94 binding: table-fill-value */
  static const void *G007591[] = {I(aa,84,24,00),B(table1 ,4),I(08,45,00,00)};

  /* Byte-vector with size: 109 is_init: 1 index: 0 binding: initialize-table1 */
  static const void *G007593[] = {I(87,25,00,00),B(table1 ,1),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(table1 ,95),I(23,00,00,00),B(table1 ,94),I(3b,01,25,00),B(table1 ,17),I(86,25,00,00),B(table1 ,16),I(23,00,00,00),B(table1 ,96),I(23,00,00,00),B(table1 ,93),I(3b,01,25,00),B(table1 ,15),I(86,25,00,00),B(table1 ,14),I(86,25,00,00),B(table1 ,13),I(86,25,00,00),B(table1 ,12),I(23,00,00,00),B(table1 ,97),I(23,00,00,00),B(table1 ,92),I(3b,01,25,00),B(table1 ,11),I(23,00,00,00),B(table1 ,98),I(23,00,00,00),B(table1 ,91),I(3b,01,25,00),B(table1 ,10),I(86,25,00,00),B(table1 ,9),I(86,25,00,00),B(table1 ,8),I(23,00,00,00),B(table1 ,99),I(23,00,00,00),B(table1 ,90),I(3b,01,25,00),B(table1 ,7),I(86,25,00,00),B(table1 ,6),I(23,00,00,00),B(table1 ,100),I(23,00,00,00),B(table1 ,89),I(3b,01,25,00),B(table1 ,5),I(86,25,00,00),B(table1 ,4),I(86,25,00,00),B(table1 ,3),I(86,25,00,00),B(table1 ,2),I(23,00,00,00),B(table1 ,101),I(23,00,00,00),B(table1 ,88),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_7485) = eul_static_string_class;
  eul_allocate_bytevector( G007484,G007483);
  eul_allocate_bytevector( G007487,G007486);
  eul_intern_symbol(sym_7490,"anonymous");
  eul_allocate_bytevector( G007489,G007488);
  eul_allocate_bytevector( G007492,G007491);
  eul_allocate_bytevector( G007494,G007493);
  eul_allocate_bytevector( G007496,G007495);
  eul_allocate_bytevector( G007498,G007497);
  eul_allocate_bytevector( G007500,G007499);
  eul_intern_keyword(key_7503,"comparator");
  eul_intern_keyword(key_7504,"hash-function");
  object_class(cons_7506) = eul_static_cons_class;
  eul_car(cons_7506) = key_7504;
  eul_cdr(cons_7506) = eul_nil;
  object_class(cons_7505) = eul_static_cons_class;
  eul_car(cons_7505) = key_7503;
  object_class(str_7507) = eul_static_string_class;
  eul_allocate_bytevector( G007502,G007501);
  eul_allocate_bytevector( G007509,G007508);
  eul_allocate_bytevector( G007511,G007510);
  eul_allocate_bytevector( G007513,G007512);
  eul_allocate_bytevector( G007515,G007514);
  eul_allocate_bytevector( G007517,G007516);
  eul_allocate_bytevector( G007519,G007518);
  eul_allocate_bytevector( G007521,G007520);
  eul_allocate_bytevector( G007523,G007522);
  eul_allocate_bytevector( G007525,G007524);
  eul_allocate_bytevector( G007527,G007526);
  eul_allocate_bytevector( G007529,G007528);
  eul_allocate_bytevector( G007531,G007530);
  eul_allocate_bytevector( G007533,G007532);
  eul_allocate_bytevector( G007535,G007534);
  eul_allocate_bytevector( G007537,G007536);
  eul_allocate_bytevector( G007539,G007538);
  eul_intern_keyword(key_7542,"name");
  eul_intern_symbol(sym_7543,"entries");
  eul_intern_symbol(sym_7544,"fill-value");
  eul_intern_keyword(key_7545,"keyword");
  eul_intern_keyword(key_7546,"fill-value");
  eul_intern_symbol(sym_7547,"size");
  eul_intern_keyword(key_7548,"default");
  eul_intern_symbol(sym_7549,"threshold");
  eul_intern_symbol(sym_7550,"table");
  eul_intern_keyword(key_7551,"direct-superclasses");
  eul_intern_keyword(key_7552,"direct-slots");
  eul_intern_keyword(key_7553,"direct-keywords");
  object_class(cons_7554) = eul_static_cons_class;
  eul_car(cons_7554) = key_7546;
  eul_cdr(cons_7554) = eul_nil;
  eul_intern_symbol(sym_7555,"comparator");
  eul_intern_symbol(sym_7556,"hash-function");
  eul_intern_symbol(sym_7557,"hash-table");
  object_class(cons_7559) = eul_static_cons_class;
  eul_car(cons_7559) = key_7503;
  eul_cdr(cons_7559) = eul_nil;
  object_class(cons_7558) = eul_static_cons_class;
  eul_car(cons_7558) = key_7504;
  eul_intern_symbol(sym_7560,"tablep");
  eul_intern_symbol(sym_7561,"simple-hash-table-p");
  eul_intern_symbol(sym_7562,"hash-table-p");
  eul_intern_symbol(sym_7563,"clear-table");
  eul_intern_symbol(sym_7564,"table-values");
  eul_intern_symbol(sym_7565,"table-keys");
  eul_intern_symbol(sym_7566,"(setter table-threshold)");
  eul_intern_symbol(sym_7567,"(setter table-size)");
  eul_intern_symbol(sym_7568,"(setter table-entries)");
  eul_intern_symbol(sym_7569,"(method tablep)");
  eul_intern_symbol(sym_7570,"simple-hash-table");
  eul_intern_symbol(sym_7571,"(method simple-hash-table-p)");
  eul_intern_symbol(sym_7572,"(setter table-hash-function)");
  eul_intern_symbol(sym_7573,"(setter table-comparator)");
  eul_intern_symbol(sym_7574,"(method hash-table-p)");
  eul_intern_symbol(sym_7575,"(method initialize)");
  eul_intern_symbol(sym_7576,"(method clear-table)");
  eul_intern_symbol(sym_7577,"(method reset)");
  eul_intern_symbol(sym_7578,"(method size)");
  eul_intern_symbol(sym_7579,"(method table-values)");
  eul_intern_symbol(sym_7580,"(method table-keys)");
  eul_allocate_bytevector( G007541,G007540);
  eul_allocate_bytevector( G007582,G007581);
  eul_allocate_bytevector( G007584,G007583);
  eul_allocate_bytevector( G007586,G007585);
  eul_allocate_bytevector( G007588,G007587);
  eul_allocate_bytevector( G007590,G007589);
  eul_allocate_bytevector( G007592,G007591);
  eul_intern_symbol(sym_7595,"table-fill-value");
  eul_intern_symbol(sym_7596,"table-entries");
  eul_intern_symbol(sym_7597,"table-threshold");
  eul_intern_symbol(sym_7598,"table-hash-function");
  eul_intern_symbol(sym_7599,"table-comparator");
  eul_intern_symbol(sym_7600,"table-size");
  eul_intern_symbol(sym_7601,"top-level");
  eul_allocate_bytevector( G007594,G007593);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 18; i++)
      table1_bindings[i] = eul_nil;
  }

  table1_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_hash_object7482;
  table1_bindings[ 19] = str_7485;
  table1_bindings[ 20] = G007484;
  table1_bindings[ 21] = G007487;
  table1_bindings[ 22] = sym_7490;
  table1_bindings[ 23] = G007489;
  table1_bindings[ 24] = G007492;
  table1_bindings[ 25] = G007494;
  table1_bindings[ 26] = G007496;
  table1_bindings[ 27] = G007498;
  table1_bindings[ 28] = G007500;
  table1_bindings[ 29] = key_7503;
  table1_bindings[ 30] = key_7504;
  table1_bindings[ 31] = cons_7505;
  table1_bindings[ 32] = str_7507;
  table1_bindings[ 33] = G007502;
  table1_bindings[ 34] = G007509;
  table1_bindings[ 35] = G007511;
  table1_bindings[ 36] = G007513;
  table1_bindings[ 37] = G007515;
  table1_bindings[ 38] = G007517;
  table1_bindings[ 39] = G007519;
  table1_bindings[ 40] = G007521;
  table1_bindings[ 41] = G007523;
  table1_bindings[ 42] = G007525;
  table1_bindings[ 43] = G007527;
  table1_bindings[ 44] = G007529;
  table1_bindings[ 45] = G007531;
  table1_bindings[ 46] = G007533;
  table1_bindings[ 47] = G007535;
  table1_bindings[ 48] = G007537;
  table1_bindings[ 49] = G007539;
  table1_bindings[ 50] = key_7542;
  table1_bindings[ 51] = sym_7543;
  table1_bindings[ 52] = sym_7544;
  table1_bindings[ 53] = key_7545;
  table1_bindings[ 54] = key_7546;
  table1_bindings[ 55] = sym_7547;
  table1_bindings[ 56] = key_7548;
  table1_bindings[ 57] = sym_7549;
  table1_bindings[ 58] = sym_7550;
  table1_bindings[ 59] = key_7551;
  table1_bindings[ 60] = key_7552;
  table1_bindings[ 61] = key_7553;
  table1_bindings[ 62] = cons_7554;
  table1_bindings[ 63] = sym_7555;
  table1_bindings[ 64] = sym_7556;
  table1_bindings[ 65] = sym_7557;
  table1_bindings[ 66] = cons_7558;
  table1_bindings[ 67] = sym_7560;
  table1_bindings[ 68] = sym_7561;
  table1_bindings[ 69] = sym_7562;
  table1_bindings[ 70] = sym_7563;
  table1_bindings[ 71] = sym_7564;
  table1_bindings[ 72] = sym_7565;
  table1_bindings[ 73] = sym_7566;
  table1_bindings[ 74] = sym_7567;
  table1_bindings[ 75] = sym_7568;
  table1_bindings[ 76] = sym_7569;
  table1_bindings[ 77] = sym_7570;
  table1_bindings[ 78] = sym_7571;
  table1_bindings[ 79] = sym_7572;
  table1_bindings[ 80] = sym_7573;
  table1_bindings[ 81] = sym_7574;
  table1_bindings[ 82] = sym_7575;
  table1_bindings[ 83] = sym_7576;
  table1_bindings[ 84] = sym_7577;
  table1_bindings[ 85] = sym_7578;
  table1_bindings[ 86] = sym_7579;
  table1_bindings[ 87] = sym_7580;
  table1_bindings[ 88] = G007541;
  table1_bindings[ 89] = G007582;
  table1_bindings[ 90] = G007584;
  table1_bindings[ 91] = G007586;
  table1_bindings[ 92] = G007588;
  table1_bindings[ 93] = G007590;
  table1_bindings[ 94] = G007592;
  table1_bindings[ 1] = eul_nil;
  table1_bindings[ 95] = sym_7595;
  table1_bindings[ 96] = sym_7596;
  table1_bindings[ 97] = sym_7597;
  table1_bindings[ 98] = sym_7598;
  table1_bindings[ 99] = sym_7599;
  table1_bindings[ 100] = sym_7600;
  table1_bindings[ 101] = sym_7601;
  eul_allocate_lambda( table1_bindings[0], "initialize-table1", 0, G007594);

  }
}


/* eof */