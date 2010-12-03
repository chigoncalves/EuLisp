/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module an-side
 **  Copyright: See file an-side.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern LispRef i_all_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef list_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef boot_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef sx_obj2_bindings[];

/* Module bindings with size 12 */
LispRef an_side_bindings[12];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module an-side */
void initialize_module_an_side()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  eul_fast_table_set(eul_modules,"an_side",(LispRef) an_side_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2760, G002759, sym_2757, sym_2756, G002755, G002753, sym_2751, G002750, G002747;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_2748, "var ~a captured", 15);
  /* Byte-vector with size: 15 is_init: 0 index: 4 binding: anonymous */
  static const void *G002746[] = {I(aa,1b,47,00),I(00,86,6c,12),I(1b,44,2f,1c),I(8a,03,24,00),B(sx_obj2 ,11),I(08,23,00,00),B(an_side ,3),I(1c,24,00,00),B(i_notify ,4),I(3c,02,2a,1d),I(87,1c,82,1d),I(24,00,00,00),B(sx_obj2 ,9),I(09,22,03,36),I(02,86,45,02)};

  /* Byte-vector with size: 27 is_init: 0 index: 6 binding: (method-compute-captured-vars) */
  static const void *G002749[] = {I(aa,46,01,1b),I(8a,05,24,00),B(sx_obj ,17),I(08,1c,83,24),B(sx_obj ,13),I(08,24,00,00),B(boot ,8),I(3c,02,1b,48),I(00,00,1c,82),I(24,00,00,00),B(sx_obj ,13),I(08,24,00,00),B(sx_obj1 ,18),I(1c,24,00,00),B(boot ,11),I(3c,02,24,00),B(sx_obj2 ,18),I(1c,24,00,00),B(list ,37),I(3c,02,23,00),B(an_side ,5),I(23,00,00,00),B(an_side ,4),I(3b,01,1c,24),B(boot ,17),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 7 binding: (method-compute-captured-vars) */
  static const void *G002752[] = {I(aa,1b,8a,09),I(24,00,00,00),B(sx_obj1 ,59),I(08,24,00,00),B(an_side ,2),I(1c,24,00,00),B(boot ,17),I(3c,02,2a,1c),I(8a,08,24,00),B(sx_obj1 ,59),I(08,24,00,00),B(an_side ,2),I(1c,24,00,00),B(boot ,17),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 75 is_init: 0 index: 10 binding: top-level */
  static const void *G002754[] = {I(a9,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(an_side ,8),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(an_side ,2),I(2a,24,00,00),B(an_side ,2),I(2a,24,00,00),B(an_side ,2),I(8a,03,02,83),I(24,00,00,00),B(sx_obj1 ,59),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(an_side ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(an_side ,9),I(23,00,00,00),B(an_side ,7),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(an_side ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(an_side ,2),I(8a,03,02,83),I(24,00,00,00),B(sx_obj ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(an_side ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(an_side ,9),I(23,00,00,00),B(an_side ,6),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(an_side ,2),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,10,45),I(10,00,00,00)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-an-side */
  static const void *G002758[] = {I(87,25,00,00),B(an_side ,1),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(an_side ,2),I(23,00,00,00),B(an_side ,11),I(23,00,00,00),B(an_side ,10),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_2748) = eul_static_string_class;
  eul_allocate_bytevector( G002747,G002746);
  eul_intern_symbol(sym_2751,"anonymous");
  eul_allocate_bytevector( G002750,G002749);
  eul_allocate_bytevector( G002753,G002752);
  eul_intern_symbol(sym_2756,"compute-captured-vars");
  eul_intern_symbol(sym_2757,"(method compute-captured-vars)");
  eul_allocate_bytevector( G002755,G002754);
  eul_intern_symbol(sym_2760,"top-level");
  eul_allocate_bytevector( G002759,G002758);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 3; i++)
      an_side_bindings[i] = eul_nil;
  }

  an_side_bindings[ 3] = str_2748;
  an_side_bindings[ 4] = G002747;
  an_side_bindings[ 5] = sym_2751;
  an_side_bindings[ 6] = G002750;
  an_side_bindings[ 7] = G002753;
  an_side_bindings[ 8] = sym_2756;
  an_side_bindings[ 9] = sym_2757;
  an_side_bindings[ 10] = G002755;
  an_side_bindings[ 1] = eul_nil;
  an_side_bindings[ 11] = sym_2760;
  eul_allocate_lambda( an_side_bindings[0], "initialize-an-side", 0, G002759);

  }
}


/* eof */
