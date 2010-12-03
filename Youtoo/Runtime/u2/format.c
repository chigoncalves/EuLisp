/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module format
 **  Copyright: See file format.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_collect();
extern void initialize_module_fpi();
extern void initialize_module_list();
extern void initialize_module_string();
extern void initialize_module_character();
extern void initialize_module_stream();
extern void initialize_module_condition();
extern void initialize_module_let_cc();
extern void initialize_module_socket();
extern void initialize_module_lock();
extern void initialize_module_convert();
extern void initialize_module_dynamic();
extern LispRef list_bindings[];
extern LispRef fpi_bindings[];
extern LispRef telos_bindings[];
extern LispRef collect_bindings[];
extern LispRef character_bindings[];
extern LispRef stream_bindings[];
extern LispRef let_cc_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef condition_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];
extern LispRef convert_bindings[];
extern LispRef string_bindings[];
extern LispRef stream1_bindings[];
extern LispRef socket_bindings[];
extern LispRef boot_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef lock_bindings[];

/* Module bindings with size 44 */
LispRef format_bindings[44];

/* Foreign functions */
static LispRef ff_stub_eul_format_info4401 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004452, res;

  POPVAL1(G004452);
  FF_RES_CONVERT6(res,eul_format_info(FF_ARG_CONVERT3(G004452)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module format */
void initialize_module_format()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_collect();
  initialize_module_fpi();
  initialize_module_list();
  initialize_module_string();
  initialize_module_character();
  initialize_module_stream();
  initialize_module_condition();
  initialize_module_let_cc();
  initialize_module_socket();
  initialize_module_lock();
  initialize_module_convert();
  initialize_module_dynamic();
  eul_fast_table_set(eul_modules,"format",(LispRef) format_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_4451, sym_4450, sym_4449, sym_4448, sym_4447, G004446, G004444, G004442, G004435, sym_4433, G004432, G004430, G004427, G004425, sym_4423, sym_4422, G004421, key_4419, G004418, sym_4416, sym_4415, sym_4414, key_4413, sym_4412, key_4411, key_4410, key_4408, key_4406, G004405, G004403;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 7 binding: anonymous */
  static const void *G004402[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_4407, "tcp", 3);
  eul_allocate_static_string(str_4409, "~a:~a", 5);
  /* Byte-vector with size: 142 is_init: 0 index: 19 binding: (method-initialize) */
  static const void *G004404[] = {I(ab,46,04,1c),I(1c,37,02,2a),I(1b,23,00,00),B(format ,8),I(24,00,00,00),B(boot ,32),I(3c,02,86,86),I(86,1f,03,24),B(socket ,10),I(3c,01,1b,44),I(5b,1f,04,84),I(24,00,00,00),B(socket ,8),I(08,1b,20,05),I(1f,05,8a,03),I(24,00,00,00),B(socket ,8),I(08,1b,20,05),I(1f,08,1f,06),I(1c,83,1d,24),B(socket ,2),I(09,22,02,2a),I(1f,08,1f,05),I(1c,82,1d,24),B(socket ,2),I(09,22,02,2a),I(1f,06,83,24),B(socket ,8),I(08,41,00,00),B(stream1 ,22),I(22,01,1b,20),I(05,1f,04,22),I(03,36,47,1f),I(06,83,24,00),B(socket ,2),I(08,1b,20,05),I(1f,07,82,24),B(socket ,2),I(08,1b,20,05),I(1f,04,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1f,06),I(1c,23,00,00),B(format ,9),I(41,00,00,00),B(stream1 ,23),I(22,03,1b,20),I(06,1f,05,22),I(04,2a,1c,85),I(19,1b,44,27),I(24,00,00,00),B(stream1 ,6),I(3c,00,24,00),B(stream2 ,39),I(1c,23,00,00),B(format ,10),I(1f,0b,24,00),B(boot ,13),I(3c,04,22,01),I(36,30,1d,85),I(1a,1b,44,27),I(1f,03,41,00),B(stream1 ,24),I(22,01,24,00),B(stream2 ,39),I(1c,23,00,00),B(format ,10),I(1f,0c,24,00),B(boot ,13),I(3c,04,22,01),I(36,02,86,22),I(01,2a,23,00),B(format ,11),I(1f,05,1f,05),I(24,00,00,00),B(format ,2),I(3c,03,24,00),B(stream2 ,3),I(23,00,00,00),B(format ,12),I(1d,23,00,00),B(format ,13),I(23,00,00,00),B(format ,14),I(23,00,00,00),B(format ,15),I(1f,09,24,00),B(mop_gf ,2),I(3c,07,24,00),B(stream2 ,3),I(23,00,00,00),B(format ,12),I(1f,03,23,00),B(format ,13),I(23,00,00,00),B(format ,16),I(23,00,00,00),B(format ,15),I(1f,0a,24,00),B(mop_gf ,2),I(3c,07,1f,0a),I(1d,1c,8a,04),I(1d,24,00,00),B(stream2 ,20),I(09,22,02,2a),I(1f,0a,1c,1c),I(8a,05,1d,24),B(stream2 ,20),I(09,22,02,2a),I(24,00,00,00),B(stream2 ,11),I(1b,48,00,00),I(23,00,00,00),B(format ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(format ,18),I(23,00,00,00),B(format ,7),I(3b,00,1c,0f),I(23,00,00,00),B(format ,17),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(0d,24,00,00),B(stream2 ,37),I(0f,1b,89,00),B(stream2 ,37),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0f,45,10,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 21 binding: error */
  static const void *G004417[] = {I(43,fd,1d,44),I(29,24,00,00),B(mop_gf ,2),I(1f,03,23,00),B(format ,20),I(1f,04,1f,04),I(24,00,00,00),B(boot ,5),I(3c,05,86,24),B(condition ,2),I(3d,02,03,36),I(35,24,00,00),B(format ,2),I(1d,1d,24,00),B(boot ,5),I(3c,03,24,00),B(condition ,8),I(23,00,00,00),B(format ,20),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,86,24),B(condition ,2),I(3d,02,04,22),I(01,45,03,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 24 binding: top-level */
  static const void *G004420[] = {I(a9,23,00,00),B(format ,22),I(23,00,00,00),B(format ,21),I(3b,fd,89,00),B(boot ,14),I(2a,24,00,00),B(mop_gf ,12),I(8a,03,02,84),I(24,00,00,00),B(socket ,2),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(format ,23),I(23,00,00,00),B(format ,19),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 25 binding: anonymous */
  static const void *G004424[] = {I(ab,1c,12,1b),I(44,04,1c,36),I(1c,1d,11,1f),I(03,10,1f,03),I(1c,24,00,00),B(string ,11),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  eul_allocate_static_string(str_4428, "", 0);
  /* Byte-vector with size: 38 is_init: 0 index: 27 binding: fmt */
  static const void *G004426[] = {I(a7,46,03,24),B(stream2 ,46),I(24,00,00,00),B(mop_gf ,2),I(3c,01,1b,8a),I(05,24,00,00),B(stream2 ,20),I(08,24,00,00),B(format ,4),I(1d,1f,05,1f),I(05,24,00,00),B(boot ,5),I(3c,04,2a,86),I(1b,48,00,00),I(23,00,00,00),B(format ,18),I(23,00,00,00),B(format ,25),I(3b,02,48,00),I(00,1d,82,24),B(stream2 ,46),I(08,1b,23,00),B(format ,26),I(47,00,00,3c),I(02,1f,03,8a),I(04,24,00,00),B(stream2 ,23),I(08,1f,04,84),I(24,00,00,00),B(stream2 ,23),I(08,1c,82,1d),I(24,00,00,00),B(string ,6),I(3c,03,1f,03),I(1c,24,00,00),B(string ,11),I(3d,02,0a,45),I(0a,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 28 binding: call/ep-lambda */
  static const void *G004429[] = {I(aa,24,00,00),B(mop_gf ,2),I(47,00,00,23),B(format ,20),I(47,00,01,47),I(00,02,24,00),B(boot ,5),I(3c,05,1b,1d),I(24,00,00,00),B(condition ,2),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 30 binding: cerror */
  static const void *G004431[] = {I(43,fd,46,03),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(23,00,00,00),B(format ,29),I(23,00,00,00),B(format ,28),I(3b,01,24,00),B(let_cc ,2),I(3c,01,1b,45),I(04,00,00,00)};

  eul_allocate_static_string(str_4436, "%s", 2);
  eul_allocate_static_string(str_4437, "bad format string ~s", 20);
  eul_allocate_static_string(str_4438, "bad format string ~s", 20);
  eul_allocate_static_string(str_4439, "bad format string ~s", 20);
  eul_allocate_static_string(str_4440, "%", 1);
  /* Byte-vector with size: 142 is_init: 0 index: 36 binding: anonymous */
  static const void *G004434[] = {I(ab,1c,10,1d),I(11,1b,20,04),I(1f,03,10,1f),I(04,11,1b,20),I(06,1f,05,10),I(47,00,00,1f),I(03,24,00,00),B(stream ,24),I(3c,02,2a,47),I(00,03,84,24),B(stream2 ,23),I(08,47,00,03),I(8a,04,24,00),B(stream2 ,23),I(08,1b,1d,1f),I(06,1f,09,23),B(format ,31),I(47,00,01,41),B(stream1 ,20),I(22,06,2a,1c),I(1f,05,14,47),I(00,03,1c,1c),I(84,1d,24,00),B(stream2 ,23),I(09,22,05,2a),I(1b,27,00,50),I(1b,44,05,1f),I(06,39,c5,1c),I(27,61,50,1b),I(44,04,1b,36),I(05,1d,27,64),I(50,1b,44,5a),I(1f,08,12,1b),I(44,14,86,23),B(format ,32),I(47,00,01,24),B(boot ,13),I(3d,03,0b,36),I(3d,1f,09,10),I(1b,24,00,00),B(boot1 ,39),I(3c,01,1b,44),I(10,1c,47,00),I(00,24,00,00),B(stream2 ,31),I(3c,02,36,0f),I(47,00,00,1d),I(24,00,00,00),B(stream ,8),I(3c,02,2a,1f),I(0c,11,1f,0c),I(11,47,00,02),I(3d,02,0d,22),I(02,22,01,39),I(59,1f,03,27),I(73,50,1b,44),I(5d,1f,09,12),I(1b,44,17,86),I(23,00,00,00),B(format ,33),I(47,00,01,24),B(boot ,13),I(3d,03,0c,36),I(3d,1f,0a,10),I(1b,24,00,00),B(boot1 ,39),I(3c,01,1b,44),I(10,1c,47,00),I(00,24,00,00),B(stream2 ,28),I(3c,02,36,0f),I(47,00,00,1d),I(24,00,00,00),B(stream ,4),I(3c,02,2a,1f),I(0d,11,1f,0d),I(11,47,00,02),I(3d,02,0e,22),I(02,22,01,36),I(f3,1f,04,27),I(25,50,1b,44),I(1f,47,00,00),I(27,0a,24,00),B(stream ,23),I(3c,02,2a,1f),I(0b,11,1b,1f),I(0c,47,00,02),I(3d,02,0d,22),I(01,36,cb,1f),I(05,27,78,50),I(1b,44,04,1b),I(36,2d,1f,06),I(27,6f,50,1b),I(44,04,1b,36),I(20,1f,07,27),I(66,50,1b,44),I(04,1b,36,13),I(1f,08,27,65),I(50,1b,44,04),I(1b,36,06,1f),I(09,27,67,50),I(22,01,22,01),I(22,01,1b,44),I(59,1f,0c,12),I(1b,44,17,86),I(23,00,00,00),B(format ,34),I(47,00,01,24),B(boot ,13),I(3d,03,0f,36),I(39,1f,08,24),B(character ,11),I(3c,01,23,00),B(format ,35),I(1c,24,00,00),B(collect ,17),I(3c,02,1f,0f),I(10,47,00,00),I(1d,1d,24,00),B(stream ,21),I(3c,03,2a,1f),I(11,11,1f,11),I(11,47,00,02),I(3d,02,12,22),I(03,22,01,36),I(37,1f,07,27),I(7e,50,1b,44),I(1f,47,00,00),I(27,7e,24,00),B(stream ,8),I(3c,02,2a,1f),I(0e,11,1b,1f),I(0f,47,00,02),I(3d,02,10,22),I(01,36,0f,1f),I(0e,11,1b,1f),I(0f,47,00,02),I(3d,02,10,22),I(01,22,01,22),I(02,22,01,22),I(01,22,02,45),I(08,00,00,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 37 binding: sformat */
  static const void *G004441[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(47,00,00,8a),I(05,24,00,00),B(stream2 ,20),I(08,1b,48,00),I(03,86,1b,48),I(00,02,23,00),B(format ,18),I(23,00,00,00),B(format ,36),I(3b,02,48,00),I(02,47,00,01),I(41,00,00,00),B(format ,6),I(22,01,1b,24),B(boot ,28),I(3c,01,1b,1f),I(05,47,00,02),I(3c,02,47,00),I(00,24,00,00),B(stream ,16),I(3c,01,2a,1b),I(45,08,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 38 binding: format */
  static const void *G004443[] = {I(a7,24,00,00),B(format ,4),I(24,00,00,00),B(stream2 ,35),I(1f,03,1f,03),I(24,00,00,00),B(boot ,5),I(3d,04,02,00)};

  /* Byte-vector with size: 97 is_init: 1 index: 0 binding: initialize-format */
  static const void *G004445[] = {I(87,25,00,00),B(format ,1),I(24,00,00,00),B(dynamic ,1),I(3e,0b,24,00),B(dynamic ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(lock ,1),I(3e,0b,24,00),B(lock ,0),I(3c,00,21,01),I(24,00,00,00),B(socket ,1),I(3e,0b,24,00),B(socket ,0),I(3c,00,21,01),I(24,00,00,00),B(let_cc ,1),I(3e,0b,24,00),B(let_cc ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(stream ,1),I(3e,0b,24,00),B(stream ,0),I(3c,00,21,01),I(24,00,00,00),B(character ,1),I(3e,0b,24,00),B(character ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(format ,39),I(23,00,00,00),B(format ,38),I(3b,fe,25,00),B(format ,5),I(23,00,00,00),B(format ,40),I(23,00,00,00),B(format ,37),I(3b,fd,25,00),B(format ,4),I(23,00,00,00),B(format ,41),I(23,00,00,00),B(format ,30),I(3b,fd,25,00),B(format ,3),I(23,00,00,00),B(format ,42),I(23,00,00,00),B(format ,27),I(3b,fe,25,00),B(format ,2),I(23,00,00,00),B(format ,43),I(23,00,00,00),B(format ,24),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004403,G004402);
  eul_intern_keyword(key_4406,"socket");
  object_class(str_4407) = eul_static_string_class;
  eul_intern_keyword(key_4408,"value");
  object_class(str_4409) = eul_static_string_class;
  eul_intern_keyword(key_4410,"file-name");
  eul_intern_keyword(key_4411,"mode");
  eul_intern_symbol(sym_4412,"r");
  eul_intern_keyword(key_4413,"descriptor");
  eul_intern_symbol(sym_4414,"w");
  eul_intern_symbol(sym_4415,"*clean-ups*");
  eul_intern_symbol(sym_4416,"anonymous");
  eul_allocate_bytevector( G004405,G004404);
  eul_intern_keyword(key_4419,"message");
  eul_allocate_bytevector( G004418,G004417);
  eul_intern_symbol(sym_4422,"error");
  eul_intern_symbol(sym_4423,"(method initialize)");
  eul_allocate_bytevector( G004421,G004420);
  eul_allocate_bytevector( G004425,G004424);
  object_class(str_4428) = eul_static_string_class;
  eul_allocate_bytevector( G004427,G004426);
  eul_allocate_bytevector( G004430,G004429);
  eul_intern_symbol(sym_4433,"call/ep-lambda");
  eul_allocate_bytevector( G004432,G004431);
  object_class(str_4436) = eul_static_string_class;
  object_class(str_4437) = eul_static_string_class;
  object_class(str_4438) = eul_static_string_class;
  object_class(str_4439) = eul_static_string_class;
  object_class(str_4440) = eul_static_string_class;
  eul_allocate_bytevector( G004435,G004434);
  eul_allocate_bytevector( G004442,G004441);
  eul_allocate_bytevector( G004444,G004443);
  eul_intern_symbol(sym_4447,"format");
  eul_intern_symbol(sym_4448,"sformat");
  eul_intern_symbol(sym_4449,"cerror");
  eul_intern_symbol(sym_4450,"fmt");
  eul_intern_symbol(sym_4451,"top-level");
  eul_allocate_bytevector( G004446,G004445);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 6; i++)
      format_bindings[i] = eul_nil;
  }

  format_bindings[ 6] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_format_info4401;
  format_bindings[ 7] = G004403;
  format_bindings[ 8] = key_4406;
  format_bindings[ 9] = str_4407;
  format_bindings[ 10] = key_4408;
  format_bindings[ 11] = str_4409;
  format_bindings[ 12] = key_4410;
  format_bindings[ 13] = key_4411;
  format_bindings[ 14] = sym_4412;
  format_bindings[ 15] = key_4413;
  format_bindings[ 16] = sym_4414;
  format_bindings[ 17] = sym_4415;
  format_bindings[ 18] = sym_4416;
  format_bindings[ 19] = G004405;
  format_bindings[ 20] = key_4419;
  format_bindings[ 21] = G004418;
  format_bindings[ 22] = sym_4422;
  format_bindings[ 23] = sym_4423;
  format_bindings[ 24] = G004421;
  format_bindings[ 25] = G004425;
  format_bindings[ 26] = str_4428;
  format_bindings[ 27] = G004427;
  format_bindings[ 28] = G004430;
  format_bindings[ 29] = sym_4433;
  format_bindings[ 30] = G004432;
  format_bindings[ 31] = str_4436;
  format_bindings[ 32] = str_4437;
  format_bindings[ 33] = str_4438;
  format_bindings[ 34] = str_4439;
  format_bindings[ 35] = str_4440;
  format_bindings[ 36] = G004435;
  format_bindings[ 37] = G004442;
  format_bindings[ 38] = G004444;
  format_bindings[ 1] = eul_nil;
  format_bindings[ 39] = sym_4447;
  format_bindings[ 40] = sym_4448;
  format_bindings[ 41] = sym_4449;
  format_bindings[ 42] = sym_4450;
  format_bindings[ 43] = sym_4451;
  eul_allocate_lambda( format_bindings[0], "initialize-format", 0, G004446);

  }
}


/* eof */
