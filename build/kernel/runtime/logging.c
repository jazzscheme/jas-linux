#ifdef ___LINKER_INFO
; File: "logging.c", produced by Gambit v4.8.9
(
408009
(C)
"logging"
(("logging"))
(
"args"
"kernel.logging"
"logging"
"marshall"
"name"
"obj"
"prefix"
"quote"
"result"
"str"
"temp.12"
"thunk"
"x.13"
)
(
)
(
"jazz:logging-depth"
"logging#"
"logging#0"
"logging#1"
"logging#2"
)
(
"c-marker"
"enter-marker"
"exit-marker"
"jazz:logging-c->scheme"
"jazz:logging-line"
"jazz:logging-scheme->c"
"jazz:logging?"
"jazz:set-logging?"
"scheme-marker"
)
(
"##parameterize"
"##string-append"
"##symbol->string"
"display"
"foreign?"
"jazz:verbose-kernel"
"make-parameter"
"make-string"
"map"
"object->serial-number"
"with-output-to-string"
"write"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "logging"
#define ___LINKER_ID ___LNK_logging
#define ___MH_PROC ___H_logging
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 13
#define ___GLOCOUNT 26
#define ___SUPCOUNT 14
#define ___CNSCOUNT 6
#define ___SUBCOUNT 156
#define ___LBLCOUNT 80
#define ___MODDESCR ___REF_SUB(155)
#include "gambit.h"

___NEED_SYM(___S_args)
___NEED_SYM(___S_kernel_2e_logging)
___NEED_SYM(___S_logging)
___NEED_SYM(___S_marshall)
___NEED_SYM(___S_name)
___NEED_SYM(___S_obj)
___NEED_SYM(___S_prefix)
___NEED_SYM(___S_quote)
___NEED_SYM(___S_result)
___NEED_SYM(___S_str)
___NEED_SYM(___S_temp_2e_12)
___NEED_SYM(___S_thunk)
___NEED_SYM(___S_x_2e_13)

___NEED_GLO(___G__23__23_parameterize)
___NEED_GLO(___G__23__23_string_2d_append)
___NEED_GLO(___G__23__23_symbol_2d__3e_string)
___NEED_GLO(___G_c_2d_marker)
___NEED_GLO(___G_display)
___NEED_GLO(___G_enter_2d_marker)
___NEED_GLO(___G_exit_2d_marker)
___NEED_GLO(___G_foreign_3f_)
___NEED_GLO(___G_jazz_3a_logging_2d_c_2d__3e_scheme)
___NEED_GLO(___G_jazz_3a_logging_2d_depth)
___NEED_GLO(___G_jazz_3a_logging_2d_line)
___NEED_GLO(___G_jazz_3a_logging_2d_scheme_2d__3e_c)
___NEED_GLO(___G_jazz_3a_logging_3f_)
___NEED_GLO(___G_jazz_3a_set_2d_logging_3f_)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_logging_23_)
___NEED_GLO(___G_logging_23_0)
___NEED_GLO(___G_logging_23_1)
___NEED_GLO(___G_logging_23_2)
___NEED_GLO(___G_make_2d_parameter)
___NEED_GLO(___G_make_2d_string)
___NEED_GLO(___G_map)
___NEED_GLO(___G_object_2d__3e_serial_2d_number)
___NEED_GLO(___G_scheme_2d_marker)
___NEED_GLO(___G_with_2d_output_2d_to_2d_string)
___NEED_GLO(___G_write)

___BEGIN_SYM
___DEF_SYM(0,___S_args,"args")
___DEF_SYM(1,___S_kernel_2e_logging,"kernel.logging")
___DEF_SYM(2,___S_logging,"logging")
___DEF_SYM(3,___S_marshall,"marshall")
___DEF_SYM(4,___S_name,"name")
___DEF_SYM(5,___S_obj,"obj")
___DEF_SYM(6,___S_prefix,"prefix")
___DEF_SYM(7,___S_quote,"quote")
___DEF_SYM(8,___S_result,"result")
___DEF_SYM(9,___S_str,"str")
___DEF_SYM(10,___S_temp_2e_12,"temp.12")
___DEF_SYM(11,___S_thunk,"thunk")
___DEF_SYM(12,___S_x_2e_13,"x.13")
___END_SYM

#define ___SYM_args ___SYM(0,___S_args)
#define ___SYM_kernel_2e_logging ___SYM(1,___S_kernel_2e_logging)
#define ___SYM_logging ___SYM(2,___S_logging)
#define ___SYM_marshall ___SYM(3,___S_marshall)
#define ___SYM_name ___SYM(4,___S_name)
#define ___SYM_obj ___SYM(5,___S_obj)
#define ___SYM_prefix ___SYM(6,___S_prefix)
#define ___SYM_quote ___SYM(7,___S_quote)
#define ___SYM_result ___SYM(8,___S_result)
#define ___SYM_str ___SYM(9,___S_str)
#define ___SYM_temp_2e_12 ___SYM(10,___S_temp_2e_12)
#define ___SYM_thunk ___SYM(11,___S_thunk)
#define ___SYM_x_2e_13 ___SYM(12,___S_x_2e_13)

___BEGIN_GLO
___DEF_GLO(0,"c-marker")
___DEF_GLO(1,"enter-marker")
___DEF_GLO(2,"exit-marker")
___DEF_GLO(3,"jazz:logging-c->scheme")
___DEF_GLO(4,"jazz:logging-depth")
___DEF_GLO(5,"jazz:logging-line")
___DEF_GLO(6,"jazz:logging-scheme->c")
___DEF_GLO(7,"jazz:logging?")
___DEF_GLO(8,"jazz:set-logging?")
___DEF_GLO(9,"logging#")
___DEF_GLO(10,"logging#0")
___DEF_GLO(11,"logging#1")
___DEF_GLO(12,"logging#2")
___DEF_GLO(13,"scheme-marker")
___DEF_GLO(14,"##parameterize")
___DEF_GLO(15,"##string-append")
___DEF_GLO(16,"##symbol->string")
___DEF_GLO(17,"display")
___DEF_GLO(18,"foreign?")
___DEF_GLO(19,"jazz:verbose-kernel")
___DEF_GLO(20,"make-parameter")
___DEF_GLO(21,"make-string")
___DEF_GLO(22,"map")
___DEF_GLO(23,"object->serial-number")
___DEF_GLO(24,"with-output-to-string")
___DEF_GLO(25,"write")
___END_GLO

#define ___GLO_c_2d_marker ___GLO(0,___G_c_2d_marker)
#define ___PRM_c_2d_marker ___PRM(0,___G_c_2d_marker)
#define ___GLO_enter_2d_marker ___GLO(1,___G_enter_2d_marker)
#define ___PRM_enter_2d_marker ___PRM(1,___G_enter_2d_marker)
#define ___GLO_exit_2d_marker ___GLO(2,___G_exit_2d_marker)
#define ___PRM_exit_2d_marker ___PRM(2,___G_exit_2d_marker)
#define ___GLO_jazz_3a_logging_2d_c_2d__3e_scheme ___GLO(3,___G_jazz_3a_logging_2d_c_2d__3e_scheme)
#define ___PRM_jazz_3a_logging_2d_c_2d__3e_scheme ___PRM(3,___G_jazz_3a_logging_2d_c_2d__3e_scheme)
#define ___GLO_jazz_3a_logging_2d_depth ___GLO(4,___G_jazz_3a_logging_2d_depth)
#define ___PRM_jazz_3a_logging_2d_depth ___PRM(4,___G_jazz_3a_logging_2d_depth)
#define ___GLO_jazz_3a_logging_2d_line ___GLO(5,___G_jazz_3a_logging_2d_line)
#define ___PRM_jazz_3a_logging_2d_line ___PRM(5,___G_jazz_3a_logging_2d_line)
#define ___GLO_jazz_3a_logging_2d_scheme_2d__3e_c ___GLO(6,___G_jazz_3a_logging_2d_scheme_2d__3e_c)
#define ___PRM_jazz_3a_logging_2d_scheme_2d__3e_c ___PRM(6,___G_jazz_3a_logging_2d_scheme_2d__3e_c)
#define ___GLO_jazz_3a_logging_3f_ ___GLO(7,___G_jazz_3a_logging_3f_)
#define ___PRM_jazz_3a_logging_3f_ ___PRM(7,___G_jazz_3a_logging_3f_)
#define ___GLO_jazz_3a_set_2d_logging_3f_ ___GLO(8,___G_jazz_3a_set_2d_logging_3f_)
#define ___PRM_jazz_3a_set_2d_logging_3f_ ___PRM(8,___G_jazz_3a_set_2d_logging_3f_)
#define ___GLO_logging_23_ ___GLO(9,___G_logging_23_)
#define ___PRM_logging_23_ ___PRM(9,___G_logging_23_)
#define ___GLO_logging_23_0 ___GLO(10,___G_logging_23_0)
#define ___PRM_logging_23_0 ___PRM(10,___G_logging_23_0)
#define ___GLO_logging_23_1 ___GLO(11,___G_logging_23_1)
#define ___PRM_logging_23_1 ___PRM(11,___G_logging_23_1)
#define ___GLO_logging_23_2 ___GLO(12,___G_logging_23_2)
#define ___PRM_logging_23_2 ___PRM(12,___G_logging_23_2)
#define ___GLO_scheme_2d_marker ___GLO(13,___G_scheme_2d_marker)
#define ___PRM_scheme_2d_marker ___PRM(13,___G_scheme_2d_marker)
#define ___GLO__23__23_parameterize ___GLO(14,___G__23__23_parameterize)
#define ___PRM__23__23_parameterize ___PRM(14,___G__23__23_parameterize)
#define ___GLO__23__23_string_2d_append ___GLO(15,___G__23__23_string_2d_append)
#define ___PRM__23__23_string_2d_append ___PRM(15,___G__23__23_string_2d_append)
#define ___GLO__23__23_symbol_2d__3e_string ___GLO(16,___G__23__23_symbol_2d__3e_string)
#define ___PRM__23__23_symbol_2d__3e_string ___PRM(16,___G__23__23_symbol_2d__3e_string)
#define ___GLO_display ___GLO(17,___G_display)
#define ___PRM_display ___PRM(17,___G_display)
#define ___GLO_foreign_3f_ ___GLO(18,___G_foreign_3f_)
#define ___PRM_foreign_3f_ ___PRM(18,___G_foreign_3f_)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(19,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(19,___G_jazz_3a_verbose_2d_kernel)
#define ___GLO_make_2d_parameter ___GLO(20,___G_make_2d_parameter)
#define ___PRM_make_2d_parameter ___PRM(20,___G_make_2d_parameter)
#define ___GLO_make_2d_string ___GLO(21,___G_make_2d_string)
#define ___PRM_make_2d_string ___PRM(21,___G_make_2d_string)
#define ___GLO_map ___GLO(22,___G_map)
#define ___PRM_map ___PRM(22,___G_map)
#define ___GLO_object_2d__3e_serial_2d_number ___GLO(23,___G_object_2d__3e_serial_2d_number)
#define ___PRM_object_2d__3e_serial_2d_number ___PRM(23,___G_object_2d__3e_serial_2d_number)
#define ___GLO_with_2d_output_2d_to_2d_string ___GLO(24,___G_with_2d_output_2d_to_2d_string)
#define ___PRM_with_2d_output_2d_to_2d_string ___PRM(24,___G_with_2d_output_2d_to_2d_string)
#define ___GLO_write ___GLO(25,___G_write)
#define ___PRM_write ___PRM(25,___G_write)

___BEGIN_CNS
 ___DEF_CNS(___REF_FIX(32774),___REF_NUL)
,___DEF_CNS(___REF_FIX(32770),___REF_NUL)
,___DEF_CNS(___REF_FIX(65540),___REF_CNS(3))
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
,___DEF_CNS(___REF_FIX(65540),___REF_NUL)
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
___END_CNS

___DEF_SUB_STR(___X0,6UL)
               ___STR6(59,45,45,45,62,32)
___DEF_SUB_STR(___X1,6UL)
               ___STR6(59,60,45,45,45,32)
___DEF_SUB_STR(___X2,0UL)
               ___STR0
___DEF_SUB_STR(___X3,4UL)
               ___STR4(32,40,67,41)
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X5,5UL)
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(9))
               ___VEC1(___REF_SUB(11))
               ___VEC1(___REF_SUB(13))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X8,56UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,108,111,103)
               ___STR8(103,105,110,103,46,115,99,109)
               ___STR0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(131185))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(154))
               ___VEC0
___DEF_SUB_VEC(___X17,0UL)
               ___VEC0
___DEF_SUB_STR(___X18,0UL)
               ___STR0
___DEF_SUB_STR(___X19,0UL)
               ___STR0
___DEF_SUB_STR(___X20,1UL)
               ___STR1(32)
___DEF_SUB_STR(___X21,1UL)
               ___STR1(41)
___DEF_SUB_STR(___X22,1UL)
               ___STR1(40)
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SUB(24))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X24,46UL)
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_SUB(115))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(130))
               ___VEC0
___DEF_SUB_VEC(___X27,8UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(28))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(327684))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(852104))
               ___VEC0
___DEF_SUB_VEC(___X29,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(852104))
               ___VEC0
___DEF_SUB_VEC(___X31,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(393353))
               ___VEC0
___DEF_SUB_VEC(___X33,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(983178))
               ___VEC0
___DEF_SUB_VEC(___X35,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2490507))
               ___VEC0
___DEF_SUB_VEC(___X37,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1179787))
               ___VEC0
___DEF_SUB_VEC(___X39,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1638540))
               ___VEC0
___DEF_SUB_VEC(___X41,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1638540))
               ___VEC0
___DEF_SUB_VEC(___X43,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(393356))
               ___VEC0
___DEF_SUB_VEC(___X45,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(4063376))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310864))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310864))
               ___VEC0
___DEF_SUB_VEC(___X51,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1769618))
               ___VEC0
___DEF_SUB_VEC(___X53,3UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1769618))
               ___VEC0
___DEF_SUB_VEC(___X55,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524434))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524439))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(60))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1900691))
               ___VEC0
___DEF_SUB_VEC(___X61,3UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2031764))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3145877))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(66))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(131203))
               ___VEC0
___DEF_SUB_VEC(___X67,3UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524420))
               ___VEC0
___DEF_SUB_VEC(___X69,3UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524420))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(72))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524421))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(393350))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(393350))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(78))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2490517))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2031765))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2031766))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310864))
               ___VEC0
___DEF_SUB_VEC(___X85,3UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_FIX(163852))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310864))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1769613))
               ___VEC0
___DEF_SUB_VEC(___X89,3UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1900686))
               ___VEC0
___DEF_SUB_VEC(___X91,3UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_FIX(65552))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2949250))
               ___VEC0
___DEF_SUB_VEC(___X93,4UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_FIX(98322))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(96))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(721027))
               ___VEC0
___DEF_SUB_VEC(___X97,5UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_FIX(360468))
               ___VEC1(___REF_FIX(98324))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X99,4UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_FIX(98324))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X101,3UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_FIX(131094))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(104))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(106))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_FIX(41))
               ___VEC1(___REF_SUB(108))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X109,3UL)
               ___VEC1(___REF_FIX(42))
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_FIX(65552))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_FIX(43))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1900687))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_FIX(44))
               ___VEC1(___REF_SUB(114))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1900687))
               ___VEC0
___DEF_SUB_VEC(___X115,3UL)
               ___VEC1(___REF_FIX(45))
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_FIX(65552))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(3080335))
               ___VEC0
___DEF_SUB_VEC(___X117,12UL)
               ___VEC1(___REF_SYM(0,___S_args))
               ___VEC1(___REF_SYM(11,___S_thunk))
               ___VEC1(___REF_SYM(4,___S_name))
               ___VEC1(___REF_SYM(8,___S_result))
               ___VEC1(___REF_CNS(0))
               ___VEC1(___REF_SYM(5,___S_obj))
               ___VEC1(___REF_CNS(1))
               ___VEC1(___REF_CNS(2))
               ___VEC1(___REF_CNS(4))
               ___VEC1(___REF_SYM(3,___S_marshall))
               ___VEC1(___REF_SYM(10,___S_temp_2e_12))
               ___VEC1(___REF_SYM(12,___S_x_2e_13))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(154))
               ___VEC0
___DEF_SUB_VEC(___X119,17UL)
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_SUB(136))
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_SUB(140))
               ___VEC1(___REF_SUB(142))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_SUB(152))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(121))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(154))
               ___VEC0
___DEF_SUB_VEC(___X122,6UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(327682))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(852123))
               ___VEC0
___DEF_SUB_VEC(___X124,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(852123))
               ___VEC0
___DEF_SUB_VEC(___X126,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(393372))
               ___VEC0
___DEF_SUB_VEC(___X128,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(983197))
               ___VEC0
___DEF_SUB_VEC(___X130,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(2490526))
               ___VEC0
___DEF_SUB_VEC(___X132,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1179806))
               ___VEC0
___DEF_SUB_VEC(___X134,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1638559))
               ___VEC0
___DEF_SUB_VEC(___X136,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(393375))
               ___VEC0
___DEF_SUB_VEC(___X138,5UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(4063392))
               ___VEC0
___DEF_SUB_VEC(___X140,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310880))
               ___VEC0
___DEF_SUB_VEC(___X142,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310880))
               ___VEC0
___DEF_SUB_VEC(___X144,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_FIX(98312))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1769634))
               ___VEC0
___DEF_SUB_VEC(___X146,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_FIX(98312))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524450))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(149))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(524451))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310880))
               ___VEC0
___DEF_SUB_VEC(___X152,3UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(163850))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_FIX(1310880))
               ___VEC0
___DEF_SUB_VEC(___X154,6UL)
               ___VEC1(___REF_SYM(11,___S_thunk))
               ___VEC1(___REF_SYM(4,___S_name))
               ___VEC1(___REF_SYM(9,___S_str))
               ___VEC1(___REF_SYM(6,___S_prefix))
               ___VEC1(___REF_SYM(8,___S_result))
               ___VEC1(___REF_CNS(5))
               ___VEC0
___DEF_SUB_VEC(___X155,5UL)
               ___VEC1(___REF_SYM(2,___S_logging))
               ___VEC1(___REF_PRC(1))
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_NUL)
               ___VEC1(___REF_FAL)
               ___VEC0

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
,___DEF_SUB(___X3)
,___DEF_SUB(___X4)
,___DEF_SUB(___X5)
,___DEF_SUB(___X6)
,___DEF_SUB(___X7)
,___DEF_SUB(___X8)
,___DEF_SUB(___X9)
,___DEF_SUB(___X10)
,___DEF_SUB(___X11)
,___DEF_SUB(___X12)
,___DEF_SUB(___X13)
,___DEF_SUB(___X14)
,___DEF_SUB(___X15)
,___DEF_SUB(___X16)
,___DEF_SUB(___X17)
,___DEF_SUB(___X18)
,___DEF_SUB(___X19)
,___DEF_SUB(___X20)
,___DEF_SUB(___X21)
,___DEF_SUB(___X22)
,___DEF_SUB(___X23)
,___DEF_SUB(___X24)
,___DEF_SUB(___X25)
,___DEF_SUB(___X26)
,___DEF_SUB(___X27)
,___DEF_SUB(___X28)
,___DEF_SUB(___X29)
,___DEF_SUB(___X30)
,___DEF_SUB(___X31)
,___DEF_SUB(___X32)
,___DEF_SUB(___X33)
,___DEF_SUB(___X34)
,___DEF_SUB(___X35)
,___DEF_SUB(___X36)
,___DEF_SUB(___X37)
,___DEF_SUB(___X38)
,___DEF_SUB(___X39)
,___DEF_SUB(___X40)
,___DEF_SUB(___X41)
,___DEF_SUB(___X42)
,___DEF_SUB(___X43)
,___DEF_SUB(___X44)
,___DEF_SUB(___X45)
,___DEF_SUB(___X46)
,___DEF_SUB(___X47)
,___DEF_SUB(___X48)
,___DEF_SUB(___X49)
,___DEF_SUB(___X50)
,___DEF_SUB(___X51)
,___DEF_SUB(___X52)
,___DEF_SUB(___X53)
,___DEF_SUB(___X54)
,___DEF_SUB(___X55)
,___DEF_SUB(___X56)
,___DEF_SUB(___X57)
,___DEF_SUB(___X58)
,___DEF_SUB(___X59)
,___DEF_SUB(___X60)
,___DEF_SUB(___X61)
,___DEF_SUB(___X62)
,___DEF_SUB(___X63)
,___DEF_SUB(___X64)
,___DEF_SUB(___X65)
,___DEF_SUB(___X66)
,___DEF_SUB(___X67)
,___DEF_SUB(___X68)
,___DEF_SUB(___X69)
,___DEF_SUB(___X70)
,___DEF_SUB(___X71)
,___DEF_SUB(___X72)
,___DEF_SUB(___X73)
,___DEF_SUB(___X74)
,___DEF_SUB(___X75)
,___DEF_SUB(___X76)
,___DEF_SUB(___X77)
,___DEF_SUB(___X78)
,___DEF_SUB(___X79)
,___DEF_SUB(___X80)
,___DEF_SUB(___X81)
,___DEF_SUB(___X82)
,___DEF_SUB(___X83)
,___DEF_SUB(___X84)
,___DEF_SUB(___X85)
,___DEF_SUB(___X86)
,___DEF_SUB(___X87)
,___DEF_SUB(___X88)
,___DEF_SUB(___X89)
,___DEF_SUB(___X90)
,___DEF_SUB(___X91)
,___DEF_SUB(___X92)
,___DEF_SUB(___X93)
,___DEF_SUB(___X94)
,___DEF_SUB(___X95)
,___DEF_SUB(___X96)
,___DEF_SUB(___X97)
,___DEF_SUB(___X98)
,___DEF_SUB(___X99)
,___DEF_SUB(___X100)
,___DEF_SUB(___X101)
,___DEF_SUB(___X102)
,___DEF_SUB(___X103)
,___DEF_SUB(___X104)
,___DEF_SUB(___X105)
,___DEF_SUB(___X106)
,___DEF_SUB(___X107)
,___DEF_SUB(___X108)
,___DEF_SUB(___X109)
,___DEF_SUB(___X110)
,___DEF_SUB(___X111)
,___DEF_SUB(___X112)
,___DEF_SUB(___X113)
,___DEF_SUB(___X114)
,___DEF_SUB(___X115)
,___DEF_SUB(___X116)
,___DEF_SUB(___X117)
,___DEF_SUB(___X118)
,___DEF_SUB(___X119)
,___DEF_SUB(___X120)
,___DEF_SUB(___X121)
,___DEF_SUB(___X122)
,___DEF_SUB(___X123)
,___DEF_SUB(___X124)
,___DEF_SUB(___X125)
,___DEF_SUB(___X126)
,___DEF_SUB(___X127)
,___DEF_SUB(___X128)
,___DEF_SUB(___X129)
,___DEF_SUB(___X130)
,___DEF_SUB(___X131)
,___DEF_SUB(___X132)
,___DEF_SUB(___X133)
,___DEF_SUB(___X134)
,___DEF_SUB(___X135)
,___DEF_SUB(___X136)
,___DEF_SUB(___X137)
,___DEF_SUB(___X138)
,___DEF_SUB(___X139)
,___DEF_SUB(___X140)
,___DEF_SUB(___X141)
,___DEF_SUB(___X142)
,___DEF_SUB(___X143)
,___DEF_SUB(___X144)
,___DEF_SUB(___X145)
,___DEF_SUB(___X146)
,___DEF_SUB(___X147)
,___DEF_SUB(___X148)
,___DEF_SUB(___X149)
,___DEF_SUB(___X150)
,___DEF_SUB(___X151)
,___DEF_SUB(___X152)
,___DEF_SUB(___X153)
,___DEF_SUB(___X154)
,___DEF_SUB(___X155)
___END_SUB



#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

const char* logging_filename = "log.txt";

bool is_logging = true;

FILE *logging_stream = NULL;

int logging_line(const char *line)
{
  if (!is_logging)
    return 0;
  
  va_list ap;
  int result;
  FILE *stream;
  
  if (!logging_stream)
    logging_stream = fopen(logging_filename, "w");

  stream = logging_stream;
  
  fprintf (stream, "%s\n", line);

  fflush (stream);

  return result;
}

int logging(const char *format, ...)
{
  if (!is_logging)
    return 0;
  
  va_list ap;
  int result;
  FILE *stream;
  
  if (!logging_stream)
    logging_stream = fopen(logging_filename, "w");

  stream = logging_stream;
  
  va_start (ap, format);
  result = vfprintf (stream, format, ap);
  va_end (ap);

  fflush (stream);

  return result;
}

#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_logging_23_)
___DEF_M_HLBL(___L1_logging_23_)
___DEF_M_HLBL(___L2_logging_23_)
___DEF_M_HLBL(___L3_logging_23_)
___DEF_M_HLBL(___L4_logging_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L1_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L2_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L3_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L4_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L5_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L6_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L7_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L8_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L9_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L10_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L11_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L12_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L13_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L14_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L15_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L16_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L17_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L18_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L19_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L20_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L21_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L22_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L23_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L24_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L25_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L26_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L27_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L28_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L29_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L30_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L31_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L32_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L33_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L34_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L35_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L36_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L37_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L38_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L39_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L40_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L41_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L42_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L43_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L44_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL(___L45_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L1_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L2_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L3_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L4_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L5_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L6_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L7_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L8_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L9_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L10_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L11_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L12_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L13_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L14_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L15_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL(___L16_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_logging_23_0)
___DEF_M_HLBL(___L1_logging_23_0)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_logging_23_1)
___DEF_M_HLBL(___L1_logging_23_1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_logging_23_2)
___DEF_M_HLBL(___L1_logging_23_2)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_logging_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_logging_23_)
___DEF_P_HLBL(___L1_logging_23_)
___DEF_P_HLBL(___L2_logging_23_)
___DEF_P_HLBL(___L3_logging_23_)
___DEF_P_HLBL(___L4_logging_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_logging_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_logging_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_logging)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_logging_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_logging_23_)
   ___SET_GLO(1,___G_enter_2d_marker,___SUB(0))
   ___SET_GLO(2,___G_exit_2d_marker,___SUB(1))
   ___SET_GLO(13,___G_scheme_2d_marker,___SUB(2))
   ___SET_GLO(0,___G_c_2d_marker,___SUB(3))
   ___SET_R1(___FIX(0L))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_make_2d_parameter)
___DEF_SLBL(3,___L3_logging_23_)
   ___SET_GLO(4,___G_jazz_3a_logging_2d_depth,___R1)
   ___SET_GLO(7,___G_jazz_3a_logging_3f_,___PRC(72))
   ___SET_GLO(8,___G_jazz_3a_set_2d_logging_3f_,___PRC(75))
   ___SET_GLO(5,___G_jazz_3a_logging_2d_line,___PRC(78))
   ___SET_R1(___VOID)
   ___POLL(4)
___DEF_SLBL(4,___L4_logging_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_logging_2d_scheme_2d__3e_c
#undef ___PH_LBL0
#define ___PH_LBL0 7
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L1_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L2_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L3_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L4_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L5_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L6_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L7_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L8_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L9_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L10_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L11_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L12_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L13_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L14_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L15_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L16_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L17_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L18_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L19_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L20_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L21_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L22_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L23_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L24_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L25_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L26_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L27_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L28_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L29_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L30_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L31_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L32_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L33_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L34_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L35_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L36_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L37_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L38_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L39_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L40_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L41_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L42_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L43_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L44_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_P_HLBL(___L45_jazz_3a_logging_2d_scheme_2d__3e_c)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF_NARGS_EQ(2,___SET_R3(___NUL))
   ___GET_REST(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(2))
   ___JUMPINT(___SET_NARGS(0),___PRC(72),___L_logging_23_0)
___DEF_SLBL(2,___L2_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L46_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-8)
   ___JUMPGENSAFE(___SET_NARGS(0),___STK(3))
___DEF_GLBL(___L46_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(1),___PRM__23__23_symbol_2d__3e_string)
___DEF_SLBL(4,___L4_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_3a_logging_2d_depth)
___DEF_SLBL(5,___L5_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___FIXMUL(___R1,___FIX(2L)))
   ___SET_R2(___CHR(32))
   ___SET_R0(___LBL(6))
   ___JUMPPRM(___SET_NARGS(2),___PRM_make_2d_string)
___DEF_SLBL(6,___L6_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(-3,___ALLOC_CLO(2UL))
   ___BEGIN_SETUP_CLO(2,___STK(-3),31)
   ___ADD_CLO_ELEM(0,___STK(-4))
   ___ADD_CLO_ELEM(1,___STK(-6))
   ___END_SETUP_CLO(2)
   ___SET_R2(___STK(-3))
   ___SET_R1(___SUB(18))
   ___SET_R0(___LBL(8))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___JUMPGLOSAFE(___SET_NARGS(2),24,___G_with_2d_output_2d_to_2d_string)
___DEF_SLBL(8,___L8_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(9))
   ___JUMPINT(___SET_NARGS(1),___PRC(78),___L_logging_23_2)
___DEF_SLBL(9,___L9_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_3a_logging_2d_depth)
___DEF_SLBL(10,___L10_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___FIXADD(___R1,___FIX(1L)))
   ___SET_STK(-4,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-4),29)
   ___ADD_CLO_ELEM(0,___STK(-5))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(-4))
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_3a_logging_2d_depth)
   ___SET_R0(___LBL(12))
   ___ADJFP(-4)
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___JUMPGLOSAFE(___SET_NARGS(3),14,___G__23__23_parameterize)
___DEF_SLBL(12,___L12_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(-2,___R1)
   ___SET_STK(-1,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-1),17)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(-1))
   ___SET_R1(___SUB(19))
   ___SET_R0(___LBL(14))
   ___ADJFP(4)
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___JUMPGLOSAFE(___SET_NARGS(2),24,___G_with_2d_output_2d_to_2d_string)
___DEF_SLBL(14,___L14_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(15))
   ___JUMPINT(___SET_NARGS(1),___PRC(78),___L_logging_23_2)
___DEF_SLBL(15,___L15_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___STK(-6))
   ___POLL(16)
___DEF_SLBL(16,___L16_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(17,___L17_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(17,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SUB(20))
   ___SET_R0(___LBL(18))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_display)
___DEF_SLBL(18,___L18_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R0(___LBL(26))
   ___ADJFP(-4)
   ___POLL(19)
___DEF_SLBL(19,___L19_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___GOTO(___L47_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_SLBL(20,___L20_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(20,1,0,0)
___DEF_GLBL(___L47_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(21)
___DEF_SLBL(21,___L21_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_foreign_3f_)
___DEF_SLBL(22,___L22_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L48_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(23)
___DEF_SLBL(23,___L23_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(1),23,___G_object_2d__3e_serial_2d_number)
___DEF_GLBL(___L48_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___BEGIN_ALLOC_LIST(2UL,___STK(-6))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___CHECK_HEAP(24,4096)
___DEF_SLBL(24,___L24_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___POLL(25)
___DEF_SLBL(25,___L25_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(26,___L26_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(27))
   ___JUMPPRM(___SET_NARGS(1),___PRM_write)
___DEF_SLBL(27,___L27_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___SUB(21))
   ___SET_R0(___STK(-3))
   ___POLL(28)
___DEF_SLBL(28,___L28_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(1),___PRM_display)
___DEF_SLBL(29,___L29_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(29,0,0,0)
   ___POLL(30)
___DEF_SLBL(30,___L30_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___JUMPGENSAFE(___SET_NARGS(0),___CLO(___R4,1))
___DEF_SLBL(31,___L31_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(31,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SUB(22))
   ___SET_R0(___LBL(32))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_display)
___DEF_SLBL(32,___L32_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF(___NOT(___PROCEDUREP(___LBL(20))))
   ___GOTO(___L54_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
   ___SET_R2(___LBL(20))
   ___SET_R3(___CLO(___STK(-6),1))
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R0(___LBL(42))
   ___POLL(33)
___DEF_SLBL(33,___L33_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___GOTO(___L50_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_GLBL(___L49_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R3(___CDR(___R3))
   ___POLL(34)
___DEF_SLBL(34,___L34_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_GLBL(___L50_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L49_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L53_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(35)
___DEF_SLBL(35,___L35_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L52_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
___DEF_GLBL(___L51_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___ADJFP(8)
   ___POLL(36)
___DEF_SLBL(36,___L36_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___LBL(37))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(37,___L37_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(38))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L51_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___END_IF
___DEF_GLBL(___L52_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(38,___L38_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(39,4096)
___DEF_SLBL(39,___L39_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___POLL(40)
___DEF_SLBL(40,___L40_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L53_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___POLL(41)
___DEF_SLBL(41,___L41_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-1)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_SLBL(42,___L42_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R0(___CLO(___STK(-6),2))
   ___SET_R1(___CONS(___R0,___R1))
   ___SET_R0(___STK(-7))
   ___CHECK_HEAP(43,4096)
___DEF_SLBL(43,___L43_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___POLL(44)
___DEF_SLBL(44,___L44_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_write)
___DEF_GLBL(___L54_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___SET_R2(___CLO(___STK(-6),1))
   ___SET_R1(___LBL(20))
   ___SET_R0(___LBL(45))
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_SLBL(45,___L45_jazz_3a_logging_2d_scheme_2d__3e_c)
___DEF_GLBL(___L55_jazz_3a_logging_2d_scheme_2d__3e_c)
   ___GOTO(___L55_jazz_3a_logging_2d_scheme_2d__3e_c)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_logging_2d_c_2d__3e_scheme
#undef ___PH_LBL0
#define ___PH_LBL0 54
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L1_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L2_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L3_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L4_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L5_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L6_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L7_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L8_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L9_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L10_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L11_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L12_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L13_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L14_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L15_jazz_3a_logging_2d_c_2d__3e_scheme)
___DEF_P_HLBL(___L16_jazz_3a_logging_2d_c_2d__3e_scheme)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R0(___LBL(2))
   ___JUMPINT(___SET_NARGS(0),___PRC(72),___L_logging_23_0)
___DEF_SLBL(2,___L2_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L17_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___END_IF
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___ADJFP(-8)
   ___JUMPGENSAFE(___SET_NARGS(0),___STK(3))
___DEF_GLBL(___L17_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(1),___PRM__23__23_symbol_2d__3e_string)
___DEF_SLBL(4,___L4_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_STK(-6,___R1)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_3a_logging_2d_depth)
___DEF_SLBL(5,___L5_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R1(___FIXMUL(___R1,___FIX(2L)))
   ___SET_R2(___CHR(32))
   ___SET_R0(___LBL(6))
   ___JUMPPRM(___SET_NARGS(2),___PRM_make_2d_string)
___DEF_SLBL(6,___L6_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_STK(-4,___R1)
   ___SET_STK(1,___R1)
   ___SET_R2(___STK(-6))
   ___SET_R3(___SUB(2))
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLONOTSAFE(___SET_NARGS(4),15,___G__23__23_string_2d_append)
___DEF_SLBL(7,___L7_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R0(___LBL(8))
   ___JUMPINT(___SET_NARGS(1),___PRC(78),___L_logging_23_2)
___DEF_SLBL(8,___L8_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_3a_logging_2d_depth)
___DEF_SLBL(9,___L9_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R1(___FIXADD(___R1,___FIX(1L)))
   ___SET_STK(-3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-3),15)
   ___ADD_CLO_ELEM(0,___STK(-5))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(-3))
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_3a_logging_2d_depth)
   ___SET_R0(___LBL(11))
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___JUMPGLOSAFE(___SET_NARGS(3),14,___G__23__23_parameterize)
___DEF_SLBL(11,___L11_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_STK(-5,___R1)
   ___SET_STK(1,___STK(-4))
   ___SET_R2(___STK(-6))
   ___SET_R3(___SUB(3))
   ___SET_R1(___SUB(1))
   ___SET_R0(___LBL(12))
   ___ADJFP(1)
   ___JUMPGLONOTSAFE(___SET_NARGS(4),15,___G__23__23_string_2d_append)
___DEF_SLBL(12,___L12_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R0(___LBL(13))
   ___JUMPINT(___SET_NARGS(1),___PRC(78),___L_logging_23_2)
___DEF_SLBL(13,___L13_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___SET_R1(___STK(-5))
   ___POLL(14)
___DEF_SLBL(14,___L14_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(15,___L15_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(15,0,0,0)
   ___POLL(16)
___DEF_SLBL(16,___L16_jazz_3a_logging_2d_c_2d__3e_scheme)
   ___JUMPGENSAFE(___SET_NARGS(0),___CLO(___R4,1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_logging_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 72
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_logging_23_0)
___DEF_P_HLBL(___L1_logging_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_logging_23_0)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_logging_23_0)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN(___BOOL ___result)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_logging_23_0; } while (0)
___return(is_logging);
___return_logging_23_0:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_BOOL_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_BOOL_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_logging_23_0)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_logging_23_1
#undef ___PH_LBL0
#define ___PH_LBL0 75
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_logging_23_1)
___DEF_P_HLBL(___L1_logging_23_1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_logging_23_1)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_logging_23_1)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,___BOOL ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_BOOL(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_logging_23_1
is_logging = ___arg1;
___return_logging_23_1:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_BOOL(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_logging_23_1)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_logging_23_2
#undef ___PH_LBL0
#define ___PH_LBL0 78
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_logging_23_2)
___DEF_P_HLBL(___L1_logging_23_2)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_logging_23_2)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_logging_23_2)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN(int ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_ASSIGN(___result,logging_line(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_INT_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_INT_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_logging_23_2)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_logging_23_,"logging#",___REF_SUB(4),5,0)
,___DEF_LBL_PROC(___H_logging_23_,0,-1)
,___DEF_LBL_RET(___H_logging_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_logging_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_logging_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_logging_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_logging_2d_scheme_2d__3e_c,"jazz:logging-scheme->c",___REF_SUB(23),46,
0)
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_scheme_2d__3e_c,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,8,0x3f04L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f05L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_scheme_2d__3e_c,0,1)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_scheme_2d__3e_c,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_scheme_2d__3e_c,0,1)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_scheme_2d__3e_c,0,2)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_scheme_2d__3e_c,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_3a_logging_2d_c_2d__3e_scheme,"jazz:logging-c->scheme",___REF_SUB(118),17,
0)
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_c_2d__3e_scheme,2,-1)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETI,8,8,0x3f04L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETI,8,0,0x3f0bL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0xbL))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_PROC(___H_jazz_3a_logging_2d_c_2d__3e_scheme,0,1)
,___DEF_LBL_RET(___H_jazz_3a_logging_2d_c_2d__3e_scheme,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_logging_23_0,"logging#0",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_logging_23_0,0,-1)
,___DEF_LBL_RET(___H_logging_23_0,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H_logging_23_1,"logging#1",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_logging_23_1,1,-1)
,___DEF_LBL_RET(___H_logging_23_1,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H_logging_23_2,"logging#2",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_logging_23_2,1,-1)
,___DEF_LBL_RET(___H_logging_23_2,___IFD(___RETN,2,1,0x3L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(9,___G_logging_23_,1)
___DEF_MOD_PRM(6,___G_jazz_3a_logging_2d_scheme_2d__3e_c,7)
___DEF_MOD_PRM(3,___G_jazz_3a_logging_2d_c_2d__3e_scheme,54)
___DEF_MOD_PRM(10,___G_logging_23_0,72)
___DEF_MOD_PRM(11,___G_logging_23_1,75)
___DEF_MOD_PRM(12,___G_logging_23_2,78)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(9,___G_logging_23_,1)
___DEF_MOD_GLO(6,___G_jazz_3a_logging_2d_scheme_2d__3e_c,7)
___DEF_MOD_GLO(3,___G_jazz_3a_logging_2d_c_2d__3e_scheme,54)
___DEF_MOD_GLO(10,___G_logging_23_0,72)
___DEF_MOD_GLO(11,___G_logging_23_1,75)
___DEF_MOD_GLO(12,___G_logging_23_2,78)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_args,"args")
___DEF_MOD_SYM(1,___S_kernel_2e_logging,"kernel.logging")
___DEF_MOD_SYM(2,___S_logging,"logging")
___DEF_MOD_SYM(3,___S_marshall,"marshall")
___DEF_MOD_SYM(4,___S_name,"name")
___DEF_MOD_SYM(5,___S_obj,"obj")
___DEF_MOD_SYM(6,___S_prefix,"prefix")
___DEF_MOD_SYM(7,___S_quote,"quote")
___DEF_MOD_SYM(8,___S_result,"result")
___DEF_MOD_SYM(9,___S_str,"str")
___DEF_MOD_SYM(10,___S_temp_2e_12,"temp.12")
___DEF_MOD_SYM(11,___S_thunk,"thunk")
___DEF_MOD_SYM(12,___S_x_2e_13,"x.13")
___END_MOD_SYM_KEY

#endif
