/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module i-compile
 **  Copyright: See file i-compile.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_read();
extern void initialize_module_p_env();
extern void initialize_module_p_parse();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_write();
extern void initialize_module_ex_module();
extern void initialize_module_ex_body();
extern void initialize_module_cg_gen();
extern void initialize_module_cg_asm();
extern void initialize_module_cg_dld();
extern void initialize_module_cg_interf();
extern void initialize_module_cg_link();
extern void initialize_module_cg_exec();
extern LispRef cg_dld_bindings[];
extern LispRef ex_body_bindings[];
extern LispRef ex_module_bindings[];
extern LispRef sx_write_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef i_all_bindings[];
extern LispRef cg_link_bindings[];
extern LispRef p_read_bindings[];
extern LispRef cg_exec_bindings[];
extern LispRef cg_asm_bindings[];
extern LispRef cg_gen_bindings[];
extern LispRef p_parse_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_error_bindings[];
extern LispRef number_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef string_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef collect_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef i_param_bindings[];
extern LispRef format_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 84 */
LispRef i_compile_bindings[84];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-compile */
void initialize_module_i_compile()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_read();
  initialize_module_p_env();
  initialize_module_p_parse();
  initialize_module_sx_obj();
  initialize_module_sx_write();
  initialize_module_ex_module();
  initialize_module_ex_body();
  initialize_module_cg_gen();
  initialize_module_cg_asm();
  initialize_module_cg_dld();
  initialize_module_cg_interf();
  initialize_module_cg_link();
  initialize_module_cg_exec();
  eul_fast_table_set(eul_modules,"i_compile",(LispRef) i_compile_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_8453, sym_8452, sym_8451, sym_8450, sym_8449, sym_8448, sym_8447, sym_8446, sym_8445, G008444, sym_8441, G008439, G008437, G008434, G008432, G008413, G008410, G008407, G008405, G008395, G008393, sym_8382, G008380, sym_8378, G008377, sym_8375, sym_8374, sym_8372, sym_8371, sym_8369, sym_8367, G008365, G008363;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 10 binding: anonymous */
  static const void *G008362[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_cons(cons_8370, NULL, NULL);
  eul_allocate_static_cons(cons_8368, NULL, eul_as_static(cons_8370));
  eul_allocate_static_cons(cons_8366, NULL, eul_as_static(cons_8368));
  eul_allocate_static_string(str_8373, "  ~a", 4);
  /* Byte-vector with size: 41 is_init: 0 index: 19 binding: (method-compile-module) */
  static const void *G008364[] = {I(aa,1b,23,00),B(i_compile ,14),I(86,6c,1b,44),I(0d,1c,87,24),B(cg_interf ,12),I(3d,02,02,36),I(8a,23,00,00),B(i_compile ,15),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,16),I(1c,24,00,00),B(format ,2),I(3c,02,23,00),B(i_compile ,15),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(i_compile ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,10),I(3b,00,1c,0f),I(23,00,00,00),B(i_compile ,17),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1f),I(05,24,00,00),B(i_compile ,9),I(3c,01,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,05,45,02)};

  /* Byte-vector with size: 26 is_init: 0 index: 21 binding: top-level */
  static const void *G008376[] = {I(a9,24,00,00),B(i_param ,18),I(8a,03,02,83),I(86,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(i_param ,18),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(i_compile ,20),I(23,00,00,00),B(i_compile ,19),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,18),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_8381, ".c", 2);
  eul_allocate_static_string(str_8383, ".c", 2);
  eul_allocate_static_string(str_8384, ".o", 2);
  eul_allocate_static_string(str_8385, ".o", 2);
  eul_allocate_static_string(str_8386, "~a~a~a", 6);
  eul_allocate_static_string(str_8387, "-o", 2);
  eul_allocate_static_string(str_8388, "-c", 2);
  eul_allocate_static_string(str_8389, "  Compiling ~a using ~a ...", 27);
  eul_allocate_static_string(str_8390, "file ~a can't be compiled correctly", 35);
  eul_allocate_static_string(str_8391, "  Module file ~a need not be recompiled.", 40);
  /* Byte-vector with size: 136 is_init: 0 index: 33 binding: compile-C-file-aux */
  static const void *G008379[] = {I(aa,1b,7d,1b),I(44,04,1b,36),I(04,1c,82,02),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(i_compile ,22),I(24,00,00,00),B(collect ,17),I(3c,04,24,00),B(i_param ,23),I(23,00,00,00),B(i_compile ,23),I(24,00,00,00),B(collect ,17),I(3c,02,1f,04),I(24,00,00,00),B(i_param ,23),I(50,1b,44,04),I(1b,36,15,1f),I(05,1d,50,1b),I(44,04,1b,36),I(09,24,00,00),B(i_param ,36),I(12,22,01,1b),I(44,0f,1f,06),I(24,00,00,00),B(i_modify ,6),I(3c,01,36,02),I(86,1b,4a,8c),I(1f,04,24,00),B(i_modify ,3),I(3c,01,1f,08),I(7d,1b,44,04),I(1b,36,05,1f),I(09,82,02,24),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(i_compile ,24),I(24,00,00,00),B(collect ,17),I(3c,04,24,00),B(i_modify ,7),I(3c,01,24,00),B(i_param ,6),I(1b,44,04,1b),I(36,67,24,00),B(i_param ,53),I(44,41,1f,0c),I(7d,1b,44,04),I(1b,36,05,1f),I(0d,82,02,24),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,25),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(36,1f,1f,0c),I(7d,1b,44,04),I(1b,36,05,1f),I(0d,82,02,23),B(i_compile ,26),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(23,00,00,00),B(i_compile ,27),I(1f,03,24,00),B(i_param ,22),I(1f,03,24,00),B(format ,2),I(3c,04,24,00),B(i_param ,53),I(44,2f,1f,03),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(collect ,17),I(3c,05,36,03),I(1f,03,24,00),B(i_param ,45),I(24,00,00,00),B(i_param ,55),I(23,00,00,00),B(i_compile ,28),I(1f,04,23,00),B(i_compile ,29),I(1f,0c,24,00),B(cg_interf ,20),I(3c,06,23,00),B(i_compile ,30),I(1f,0e,24,00),B(i_param ,45),I(24,00,00,00),B(i_notify ,3),I(3c,03,2a,1b),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(cg_interf ,16),I(3c,01,2a,1b),I(24,00,00,00),B(boot1 ,51),I(3c,01,24,00),B(number ,16),I(3c,01,1b,44),I(04,1b,36,14),I(8a,fe,23,00),B(i_compile ,31),I(1f,10,24,00),B(i_error ,4),I(3d,03,12,22),I(0a,36,11,23),B(i_compile ,32),I(1f,05,24,00),B(i_notify ,3),I(3d,02,08,45),I(08,00,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 34 binding: link */
  static const void *G008392[] = {I(aa,24,00,00),B(i_compile ,7),I(3c,00,2a,24),B(i_param ,61),I(1b,44,04,1b),I(36,15,24,00),B(i_param ,28),I(1b,44,04,1b),I(36,07,24,00),B(i_param ,7),I(22,01,1b,44),I(2c,24,00,00),B(i_param ,28),I(44,0c,1d,24),B(i_compile ,4),I(3d,01,03,36),I(16,24,00,00),B(i_param ,7),I(44,0c,1d,24),B(i_compile ,6),I(3d,01,03,36),I(02,86,36,02),I(86,45,03,00)};

  eul_allocate_static_string(str_8396, "Creating library of module ~a ...", 33);
  eul_allocate_static_string(str_8397, ".o", 2);
  eul_allocate_static_string(str_8398, ".o", 2);
  eul_allocate_static_string(str_8399, "~a~alib~a.a", 11);
  eul_allocate_static_string(str_8400, "lib~a.a", 7);
  eul_allocate_static_string(str_8401, "~a~a~a", 6);
  eul_allocate_static_string(str_8402, "library ~a can't be created correctly", 37);
  eul_allocate_static_string(str_8403, "archive ~a can't be converted correctly", 39);
  /* Byte-vector with size: 111 is_init: 0 index: 43 binding: create-C-library */
  static const void *G008394[] = {I(aa,23,00,00),B(i_compile ,35),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,24),B(i_param ,6),I(86,89,00,00),B(i_param ,6),I(2a,1c,24,00),B(i_compile ,5),I(3c,01,2a,1b),I(89,00,00,00),B(i_param ,6),I(2a,1c,24,00),B(cg_interf ,17),I(3c,01,24,00),B(cg_interf ,25),I(3c,00,24,00),B(i_param ,53),I(44,41,1f,03),I(7d,1b,44,04),I(1b,36,05,1f),I(04,82,02,24),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,36),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(36,1f,1f,03),I(7d,1b,44,04),I(1b,36,05,1f),I(04,82,02,23),B(i_compile ,37),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,7),I(3c,01,24,00),B(i_param ,6),I(1b,44,04,1b),I(36,57,24,00),B(i_param ,53),I(44,23,23,00),B(i_compile ,38),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(1f,08,24,00),B(format ,2),I(3c,04,36,13),I(23,00,00,00),B(i_compile ,39),I(1f,06,24,00),B(format ,2),I(3c,02,23,00),B(i_compile ,40),I(1f,03,24,00),B(i_param ,22),I(1f,03,24,00),B(format ,2),I(3c,04,22,01),I(24,00,00,00),B(i_param ,38),I(1c,1f,06,1f),I(06,24,00,00),B(cg_interf ,20),I(3c,04,24,00),B(i_param ,8),I(1d,24,00,00),B(cg_interf ,20),I(3c,02,1c,24),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(boot1 ,51),I(3c,01,24,00),B(number ,16),I(3c,01,1b,44),I(04,1b,36,13),I(85,23,00,00),B(i_compile ,41),I(1f,05,24,00),B(i_error ,4),I(3c,03,2a,1c),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(boot1 ,51),I(3c,01,24,00),B(number ,16),I(3c,01,1b,44),I(04,1b,36,13),I(85,23,00,00),B(i_compile ,42),I(1f,06,24,00),B(i_error ,4),I(3c,03,2a,1f),I(0a,24,00,00),B(cg_interf ,11),I(3d,01,0b,45),I(0b,00,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 44 binding: compile-C-file */
  static const void *G008404[] = {I(aa,1b,24,00),B(p_env ,14),I(3c,01,1b,44),I(0b,1b,83,24),B(sx_obj1 ,59),I(08,36,0c,1c),I(24,00,00,00),B(cg_interf ,15),I(3c,01,24,00),B(cg_interf ,6),I(3c,00,24,00),B(number ,9),I(3c,02,24,00),B(i_compile ,2),I(1c,24,00,00),B(boot ,17),I(3c,02,2a,1d),I(24,00,00,00),B(i_compile ,2),I(3d,01,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_8408, " -L", 3);
  /* Byte-vector with size: 9 is_init: 0 index: 46 binding: anonymous */
  static const void *G008406[] = {I(aa,1b,7d,1b),I(44,04,1b,36),I(04,1c,82,02),I(23,00,00,00),B(i_compile ,45),I(1c,24,00,00),B(string ,11),I(3d,02,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_8411, " -l", 3);
  /* Byte-vector with size: 9 is_init: 0 index: 48 binding: anonymous */
  static const void *G008409[] = {I(aa,1b,7d,1b),I(44,04,1b,36),I(04,1c,82,02),I(23,00,00,00),B(i_compile ,47),I(1c,24,00,00),B(string ,11),I(3d,02,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_8414, "Creating stand-alone application of module ~a ...", 49);
  eul_allocate_static_string(str_8415, "_", 1);
  eul_allocate_static_string(str_8416, "  Linking ~a.o with imports using ~a ...", 40);
  eul_allocate_static_string(str_8417, "_.o", 3);
  eul_allocate_static_string(str_8418, "_.o", 3);
  eul_allocate_static_string(str_8419, " -leulvm", 8);
  eul_allocate_static_string(str_8420, ".o", 2);
  eul_allocate_static_string(str_8421, ".o", 2);
  eul_allocate_static_string(str_8422, "~a~a~a", 6);
  eul_allocate_static_string(str_8423, "", 0);
  eul_allocate_static_string(str_8424, "", 0);
  eul_allocate_static_string(str_8425, "-lgc", 4);
  eul_allocate_static_string(str_8426, "", 0);
  eul_allocate_static_string(str_8427, "-o", 2);
  eul_allocate_static_string(str_8428, "strip ", 6);
  eul_allocate_static_string(str_8429, "executable ~a can't be stipped correctly", 40);
  eul_allocate_static_string(str_8430, "module ~a can't be linked correctly", 35);
  /* Byte-vector with size: 183 is_init: 0 index: 66 binding: create-stand-alone-application */
  static const void *G008412[] = {I(aa,23,00,00),B(i_compile ,49),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,1b),I(24,00,00,00),B(i_compile ,5),I(3c,01,2a,1b),I(7d,1b,44,04),I(1b,36,04,1c),I(82,02,1b,23),B(i_compile ,50),I(24,00,00,00),B(string ,11),I(3c,02,1b,41),B(boot1 ,56),I(22,01,24,00),B(i_compile ,2),I(3c,01,2a,23),B(i_compile ,51),I(1f,04,24,00),B(i_param ,67),I(24,00,00,00),B(i_notify ,3),I(3c,03,2a,24),B(i_param ,53),I(44,41,1f,03),I(7d,1b,44,04),I(1b,36,05,1f),I(04,82,02,24),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,52),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(36,1f,1f,03),I(7d,1b,44,04),I(1b,36,05,1f),I(04,82,02,23),B(i_compile ,53),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,3),I(3c,01,23,00),B(i_compile ,54),I(24,00,00,00),B(cg_interf ,25),I(3c,00,24,00),B(cg_interf ,23),I(3c,00,1f,07),I(24,00,00,00),B(cg_interf ,17),I(3c,01,24,00),B(i_param ,53),I(1b,44,04,1b),I(36,71,24,00),B(i_param ,53),I(44,41,1f,09),I(7d,1b,44,04),I(1b,36,05,1f),I(0a,82,02,24),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,55),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(36,1f,1f,09),I(7d,1b,44,04),I(1b,36,05,1f),I(0a,82,02,23),B(i_compile ,56),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,7),I(3c,01,24,00),B(i_param ,6),I(1b,44,04,1b),I(36,03,1f,0b),I(23,00,00,00),B(i_compile ,57),I(1f,03,24,00),B(i_param ,22),I(1f,03,24,00),B(format ,2),I(3c,04,23,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,48),I(3b,01,24,00),B(i_param ,14),I(24,00,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,44,08,23),B(i_compile ,58),I(36,11,24,00),B(collect ,17),I(1d,24,00,00),B(boot ,5),I(3c,02,24,00),B(i_param ,62),I(44,09,23,00),B(i_compile ,59),I(36,07,23,00),B(i_compile ,60),I(23,00,00,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,46),I(3b,01,24,00),B(i_param ,9),I(24,00,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,44,08,23),B(i_compile ,61),I(36,11,24,00),B(collect ,17),I(1d,24,00,00),B(boot ,5),I(3c,02,24,00),B(i_param ,67),I(24,00,00,00),B(i_param ,55),I(23,00,00,00),B(i_compile ,62),I(1f,0a,1f,10),I(1f,15,24,00),B(i_param ,54),I(1f,15,1f,08),I(1f,16,1f,19),I(1f,0f,1f,0f),I(24,00,00,00),B(i_param ,21),I(24,00,00,00),B(cg_interf ,20),I(3c,0e,1b,24),B(i_notify ,4),I(3c,01,2a,1b),I(24,00,00,00),B(boot1 ,51),I(3c,01,82,19),I(1b,44,43,24),B(i_param ,57),I(12,1b,44,04),I(86,36,33,23),B(i_compile ,63),I(1f,0b,24,00),B(string ,11),I(3c,02,1b,24),B(boot1 ,51),I(3c,01,82,19),I(1b,44,04,86),I(36,12,86,23),B(i_compile ,64),I(1f,1b,24,00),B(i_error ,4),I(3d,03,1a,22),I(02,22,01,36),I(13,86,23,00),B(i_compile ,65),I(1f,18,24,00),B(i_error ,4),I(3d,03,17,45),I(17,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 67 binding: check-stop */
  static const void *G008431[] = {I(a9,24,00,00),B(i_param ,60),I(44,2d,24,00),B(i_param ,60),I(24,00,00,00),B(i_param ,24),I(50,1b,44,16),I(86,89,00,00),B(i_param ,24),I(2a,24,00,00),B(i_error ,2),I(3d,00,01,36),I(02,86,22,01),I(36,02,86,45),I(00,00,00,00)};

  eul_allocate_static_string(str_8435, "Interactive compiling ...", 25);
  /* Byte-vector with size: 16 is_init: 0 index: 69 binding: interactive-compile */
  static const void *G008433[] = {I(aa,23,00,00),B(i_compile ,68),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,24),B(p_parse ,2),I(3c,01,1b,24),B(cg_gen ,18),I(3c,01,1c,1c),I(24,00,00,00),B(cg_asm ,3),I(3c,02,1d,1c),I(24,00,00,00),B(cg_exec ,4),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 70 binding: anonymous */
  static const void *G008436[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_8440, "Compiling module ~a ...", 23);
  eul_allocate_static_string(str_8442, "... module ~a compiled.", 23);
  /* Byte-vector with size: 73 is_init: 0 index: 74 binding: compile */
  static const void *G008438[] = {I(aa,23,00,00),B(i_compile ,71),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,1b),I(89,00,00,00),B(i_param ,63),I(2a,86,86,86),I(86,1f,04,24),B(p_read ,2),I(3c,01,1b,20),I(05,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(04,24,00,00),B(i_param ,17),I(3c,01,23,00),B(i_compile ,72),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(i_compile ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,70),I(3b,00,1c,0f),I(23,00,00,00),B(i_compile ,17),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,24),B(i_compile ,7),I(3c,00,2a,1d),I(86,24,00,00),B(cg_gen ,9),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(03,1f,08,24),B(cg_asm ,3),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(04,1f,08,24),B(cg_link ,23),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(05,1f,08,24),B(cg_link ,4),I(3c,02,2a,24),B(i_compile ,7),I(3c,00,2a,1f),I(05,24,00,00),B(cg_interf ,9),I(3c,01,2a,23),B(i_compile ,73),I(1f,0c,24,00),B(i_notify ,3),I(3c,02,2a,1f),I(05,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,0d,00,00)};

  /* Byte-vector with size: 131 is_init: 1 index: 0 binding: initialize-i-compile */
  static const void *G008443[] = {I(87,25,00,00),B(i_compile ,1),I(24,00,00,00),B(cg_exec ,1),I(3e,0b,24,00),B(cg_exec ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_link ,1),I(3e,0b,24,00),B(cg_link ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_dld ,1),I(3e,0b,24,00),B(cg_dld ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_asm ,1),I(3e,0b,24,00),B(cg_asm ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_gen ,1),I(3e,0b,24,00),B(cg_gen ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_body ,1),I(3e,0b,24,00),B(ex_body ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_module ,1),I(3e,0b,24,00),B(ex_module ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_write ,1),I(3e,0b,24,00),B(sx_write ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_parse ,1),I(3e,0b,24,00),B(p_parse ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(p_read ,1),I(3e,0b,24,00),B(p_read ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(i_compile ,75),I(23,00,00,00),B(i_compile ,74),I(3b,01,25,00),B(i_compile ,9),I(23,00,00,00),B(i_compile ,76),I(23,00,00,00),B(i_compile ,69),I(3b,01,25,00),B(i_compile ,8),I(23,00,00,00),B(i_compile ,77),I(23,00,00,00),B(i_compile ,67),I(3b,00,25,00),B(i_compile ,7),I(23,00,00,00),B(i_compile ,78),I(23,00,00,00),B(i_compile ,66),I(3b,01,25,00),B(i_compile ,6),I(23,00,00,00),B(i_compile ,79),I(23,00,00,00),B(i_compile ,44),I(3b,01,25,00),B(i_compile ,5),I(23,00,00,00),B(i_compile ,80),I(23,00,00,00),B(i_compile ,43),I(3b,01,25,00),B(i_compile ,4),I(23,00,00,00),B(i_compile ,81),I(23,00,00,00),B(i_compile ,34),I(3b,01,25,00),B(i_compile ,3),I(23,00,00,00),B(i_compile ,82),I(23,00,00,00),B(i_compile ,33),I(3b,01,25,00),B(i_compile ,2),I(23,00,00,00),B(i_compile ,83),I(23,00,00,00),B(i_compile ,21),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G008363,G008362);
  eul_intern_symbol(sym_8367,"telos");
  eul_intern_symbol(sym_8369,"level-1");
  eul_intern_symbol(sym_8371,"math");
  object_class(cons_8370) = eul_static_cons_class;
  eul_car(cons_8370) = sym_8371;
  eul_cdr(cons_8370) = eul_nil;
  object_class(cons_8368) = eul_static_cons_class;
  eul_car(cons_8368) = sym_8369;
  object_class(cons_8366) = eul_static_cons_class;
  eul_car(cons_8366) = sym_8367;
  eul_intern_symbol(sym_8372,"*indent*");
  object_class(str_8373) = eul_static_string_class;
  eul_intern_symbol(sym_8374,"*clean-ups*");
  eul_intern_symbol(sym_8375,"anonymous");
  eul_allocate_bytevector( G008365,G008364);
  eul_intern_symbol(sym_8378,"(method compile-module)");
  eul_allocate_bytevector( G008377,G008376);
  object_class(str_8381) = eul_static_string_class;
  eul_intern_symbol(sym_8382,"_");
  object_class(str_8383) = eul_static_string_class;
  object_class(str_8384) = eul_static_string_class;
  object_class(str_8385) = eul_static_string_class;
  object_class(str_8386) = eul_static_string_class;
  object_class(str_8387) = eul_static_string_class;
  object_class(str_8388) = eul_static_string_class;
  object_class(str_8389) = eul_static_string_class;
  object_class(str_8390) = eul_static_string_class;
  object_class(str_8391) = eul_static_string_class;
  eul_allocate_bytevector( G008380,G008379);
  eul_allocate_bytevector( G008393,G008392);
  object_class(str_8396) = eul_static_string_class;
  object_class(str_8397) = eul_static_string_class;
  object_class(str_8398) = eul_static_string_class;
  object_class(str_8399) = eul_static_string_class;
  object_class(str_8400) = eul_static_string_class;
  object_class(str_8401) = eul_static_string_class;
  object_class(str_8402) = eul_static_string_class;
  object_class(str_8403) = eul_static_string_class;
  eul_allocate_bytevector( G008395,G008394);
  eul_allocate_bytevector( G008405,G008404);
  object_class(str_8408) = eul_static_string_class;
  eul_allocate_bytevector( G008407,G008406);
  object_class(str_8411) = eul_static_string_class;
  eul_allocate_bytevector( G008410,G008409);
  object_class(str_8414) = eul_static_string_class;
  object_class(str_8415) = eul_static_string_class;
  object_class(str_8416) = eul_static_string_class;
  object_class(str_8417) = eul_static_string_class;
  object_class(str_8418) = eul_static_string_class;
  object_class(str_8419) = eul_static_string_class;
  object_class(str_8420) = eul_static_string_class;
  object_class(str_8421) = eul_static_string_class;
  object_class(str_8422) = eul_static_string_class;
  object_class(str_8423) = eul_static_string_class;
  object_class(str_8424) = eul_static_string_class;
  object_class(str_8425) = eul_static_string_class;
  object_class(str_8426) = eul_static_string_class;
  object_class(str_8427) = eul_static_string_class;
  object_class(str_8428) = eul_static_string_class;
  object_class(str_8429) = eul_static_string_class;
  object_class(str_8430) = eul_static_string_class;
  eul_allocate_bytevector( G008413,G008412);
  eul_allocate_bytevector( G008432,G008431);
  object_class(str_8435) = eul_static_string_class;
  eul_allocate_bytevector( G008434,G008433);
  eul_allocate_bytevector( G008437,G008436);
  object_class(str_8440) = eul_static_string_class;
  eul_intern_symbol(sym_8441,"*actual-module*");
  object_class(str_8442) = eul_static_string_class;
  eul_allocate_bytevector( G008439,G008438);
  eul_intern_symbol(sym_8445,"compile");
  eul_intern_symbol(sym_8446,"interactive-compile");
  eul_intern_symbol(sym_8447,"check-stop");
  eul_intern_symbol(sym_8448,"create-stand-alone-application");
  eul_intern_symbol(sym_8449,"compile-C-file");
  eul_intern_symbol(sym_8450,"create-C-library");
  eul_intern_symbol(sym_8451,"link");
  eul_intern_symbol(sym_8452,"compile-C-file-aux");
  eul_intern_symbol(sym_8453,"top-level");
  eul_allocate_bytevector( G008444,G008443);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      i_compile_bindings[i] = eul_nil;
  }

  i_compile_bindings[ 10] = G008363;
  i_compile_bindings[ 11] = sym_8367;
  i_compile_bindings[ 12] = sym_8369;
  i_compile_bindings[ 13] = sym_8371;
  i_compile_bindings[ 14] = cons_8366;
  i_compile_bindings[ 15] = sym_8372;
  i_compile_bindings[ 16] = str_8373;
  i_compile_bindings[ 17] = sym_8374;
  i_compile_bindings[ 18] = sym_8375;
  i_compile_bindings[ 19] = G008365;
  i_compile_bindings[ 20] = sym_8378;
  i_compile_bindings[ 21] = G008377;
  i_compile_bindings[ 22] = str_8381;
  i_compile_bindings[ 23] = sym_8382;
  i_compile_bindings[ 24] = str_8383;
  i_compile_bindings[ 25] = str_8384;
  i_compile_bindings[ 26] = str_8385;
  i_compile_bindings[ 27] = str_8386;
  i_compile_bindings[ 28] = str_8387;
  i_compile_bindings[ 29] = str_8388;
  i_compile_bindings[ 30] = str_8389;
  i_compile_bindings[ 31] = str_8390;
  i_compile_bindings[ 32] = str_8391;
  i_compile_bindings[ 33] = G008380;
  i_compile_bindings[ 34] = G008393;
  i_compile_bindings[ 35] = str_8396;
  i_compile_bindings[ 36] = str_8397;
  i_compile_bindings[ 37] = str_8398;
  i_compile_bindings[ 38] = str_8399;
  i_compile_bindings[ 39] = str_8400;
  i_compile_bindings[ 40] = str_8401;
  i_compile_bindings[ 41] = str_8402;
  i_compile_bindings[ 42] = str_8403;
  i_compile_bindings[ 43] = G008395;
  i_compile_bindings[ 44] = G008405;
  i_compile_bindings[ 45] = str_8408;
  i_compile_bindings[ 46] = G008407;
  i_compile_bindings[ 47] = str_8411;
  i_compile_bindings[ 48] = G008410;
  i_compile_bindings[ 49] = str_8414;
  i_compile_bindings[ 50] = str_8415;
  i_compile_bindings[ 51] = str_8416;
  i_compile_bindings[ 52] = str_8417;
  i_compile_bindings[ 53] = str_8418;
  i_compile_bindings[ 54] = str_8419;
  i_compile_bindings[ 55] = str_8420;
  i_compile_bindings[ 56] = str_8421;
  i_compile_bindings[ 57] = str_8422;
  i_compile_bindings[ 58] = str_8423;
  i_compile_bindings[ 59] = str_8424;
  i_compile_bindings[ 60] = str_8425;
  i_compile_bindings[ 61] = str_8426;
  i_compile_bindings[ 62] = str_8427;
  i_compile_bindings[ 63] = str_8428;
  i_compile_bindings[ 64] = str_8429;
  i_compile_bindings[ 65] = str_8430;
  i_compile_bindings[ 66] = G008413;
  i_compile_bindings[ 67] = G008432;
  i_compile_bindings[ 68] = str_8435;
  i_compile_bindings[ 69] = G008434;
  i_compile_bindings[ 70] = G008437;
  i_compile_bindings[ 71] = str_8440;
  i_compile_bindings[ 72] = sym_8441;
  i_compile_bindings[ 73] = str_8442;
  i_compile_bindings[ 74] = G008439;
  i_compile_bindings[ 1] = eul_nil;
  i_compile_bindings[ 75] = sym_8445;
  i_compile_bindings[ 76] = sym_8446;
  i_compile_bindings[ 77] = sym_8447;
  i_compile_bindings[ 78] = sym_8448;
  i_compile_bindings[ 79] = sym_8449;
  i_compile_bindings[ 80] = sym_8450;
  i_compile_bindings[ 81] = sym_8451;
  i_compile_bindings[ 82] = sym_8452;
  i_compile_bindings[ 83] = sym_8453;
  eul_allocate_lambda( i_compile_bindings[0], "initialize-i-compile", 0, G008444);

  }
}


/* eof */
