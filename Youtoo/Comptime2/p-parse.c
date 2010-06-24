/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module p-parse
 **  Copyright: See file p-parse.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_p_env();
extern void initialize_module_ex_module();
extern void initialize_module_ex_body();
extern void initialize_module_sx_write();
extern void initialize_module_sx_node();
extern LispRef sx_node_bindings[];
extern LispRef sx_write_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_all_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef ex_body_bindings[];
extern LispRef ex_direct_bindings[];
extern LispRef ex_module_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef i_param_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 22 */
LispRef p_parse_bindings[22];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module p-parse */
void initialize_module_p_parse()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_p_env();
  initialize_module_ex_module();
  initialize_module_ex_body();
  initialize_module_sx_write();
  initialize_module_sx_node();
  eul_fast_table_set(eul_modules,"p_parse",(LispRef) p_parse_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2097, sym_2096, G002095, G002091, sym_2089, G002088, sym_2083, sym_2082, sym_2081, sym_2080, sym_2078, G002076, G002074;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 3 binding: anonymous */
  static const void *G002073[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_2077, "  Parsing module ~a ...", 23);
  eul_allocate_static_string(str_2079, " .ME/SE", 7);
  eul_allocate_static_string(str_2084, " .EE", 4);
  eul_allocate_static_string(str_2085, " .XE/SE", 7);
  eul_allocate_static_string(str_2086, "bad defmodule syntax in module ~a ...", 37);
  /* Byte-vector with size: 73 is_init: 0 index: 14 binding: (method-parse-module) */
  static const void *G002075[] = {I(aa,23,00,00),B(p_parse ,4),I(24,00,00,00),B(i_param ,62),I(24,00,00,00),B(i_notify ,3),I(3c,02,2a,23),B(p_parse ,5),I(89,00,00,00),B(i_param ,60),I(2a,23,00,00),B(p_parse ,6),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1b),I(7a,1b,34,00),I(00,00,00,16),I(1c,10,23,00),B(p_parse ,7),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,ae),I(1d,24,00,00),B(ex_module ,3),I(3c,01,23,00),B(p_parse ,8),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(p_parse ,9),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(p_parse ,10),I(23,00,00,00),B(p_parse ,3),I(3b,00,1c,0f),I(23,00,00,00),B(p_parse ,9),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(p_parse ,11),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1d),I(24,00,00,00),B(ex_direct ,4),I(3c,01,2a,23),B(p_parse ,12),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1d),I(24,00,00,00),B(ex_body ,6),I(3c,01,2a,1d),I(83,24,00,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,04,32,00),I(00,00,00,21),I(86,23,00,00),B(p_parse ,13),I(24,00,00,00),B(i_param ,62),I(24,00,00,00),B(i_notify ,6),I(3d,03,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 28 is_init: 0 index: 16 binding: top-level */
  static const void *G002087[] = {I(a9,24,00,00),B(i_param ,18),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(i_param ,18),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(p_parse ,15),I(23,00,00,00),B(p_parse ,14),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,18),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_2092, " .ME/SE", 7);
  eul_allocate_static_string(str_2093, " .XE/SE", 7);
  /* Byte-vector with size: 24 is_init: 0 index: 19 binding: interactive-parse */
  static const void *G002090[] = {I(aa,23,00,00),B(p_parse ,8),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(p_parse ,5),I(89,00,00,00),B(i_param ,60),I(2a,23,00,00),B(p_parse ,17),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(ex_module ,3),I(3c,01,2a,23),B(p_parse ,18),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1b),I(24,00,00,00),B(ex_body ,6),I(3c,01,2a,1b),I(45,02,00,00)};

  /* Byte-vector with size: 44 is_init: 1 index: 0 binding: initialize-p-parse */
  static const void *G002094[] = {I(87,25,00,00),B(p_parse ,1),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_write ,1),I(3e,0b,24,00),B(sx_write ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_body ,1),I(3e,0b,24,00),B(ex_body ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_module ,1),I(3e,0b,24,00),B(ex_module ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(p_parse ,20),I(23,00,00,00),B(p_parse ,19),I(3b,01,25,00),B(p_parse ,2),I(23,00,00,00),B(p_parse ,21),I(23,00,00,00),B(p_parse ,16),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002074,G002073);
  object_class(str_2077) = eul_static_string_class;
  eul_intern_symbol(sym_2078,"parse");
  object_class(str_2079) = eul_static_string_class;
  eul_intern_symbol(sym_2080,"defmodule");
  eul_intern_symbol(sym_2081,"*actual-module*");
  eul_intern_symbol(sym_2082,"*clean-ups*");
  eul_intern_symbol(sym_2083,"anonymous");
  object_class(str_2084) = eul_static_string_class;
  object_class(str_2085) = eul_static_string_class;
  object_class(str_2086) = eul_static_string_class;
  eul_allocate_bytevector( G002076,G002075);
  eul_intern_symbol(sym_2089,"(method parse-module)");
  eul_allocate_bytevector( G002088,G002087);
  object_class(str_2092) = eul_static_string_class;
  object_class(str_2093) = eul_static_string_class;
  eul_allocate_bytevector( G002091,G002090);
  eul_intern_symbol(sym_2096,"interactive-parse");
  eul_intern_symbol(sym_2097,"top-level");
  eul_allocate_bytevector( G002095,G002094);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 3; i++)
      p_parse_bindings[i] = eul_nil;
  }

  p_parse_bindings[ 3] = G002074;
  p_parse_bindings[ 4] = str_2077;
  p_parse_bindings[ 5] = sym_2078;
  p_parse_bindings[ 6] = str_2079;
  p_parse_bindings[ 7] = sym_2080;
  p_parse_bindings[ 8] = sym_2081;
  p_parse_bindings[ 9] = sym_2082;
  p_parse_bindings[ 10] = sym_2083;
  p_parse_bindings[ 11] = str_2084;
  p_parse_bindings[ 12] = str_2085;
  p_parse_bindings[ 13] = str_2086;
  p_parse_bindings[ 14] = G002076;
  p_parse_bindings[ 15] = sym_2089;
  p_parse_bindings[ 16] = G002088;
  p_parse_bindings[ 17] = str_2092;
  p_parse_bindings[ 18] = str_2093;
  p_parse_bindings[ 19] = G002091;
  p_parse_bindings[ 1] = eul_nil;
  p_parse_bindings[ 20] = sym_2096;
  p_parse_bindings[ 21] = sym_2097;
  eul_allocate_lambda( p_parse_bindings[0], "initialize-p-parse", 0, G002095);

  }
}


/* eof */
