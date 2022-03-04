#ifdef ___LINKER_INFO
; File: "marshall.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.language.syntax.marshall"
(("bin:jazz.language.syntax.marshall"))
(
"allocate"
"attribute"
"attributes"
"bin:jazz.language.syntax.marshall"
"class-of"
"content"
"expand-state-marshalling"
"form"
"foundation.dialect"
"jazz.language.runtime.kernel"
"jazz.language.syntax.marshall"
"jazz.language.syntax.marshall:expand-state-marshalling"
"marshall-object"
"meta"
"method"
"object"
"override"
"protected"
"scheme"
"self"
"serialize-object"
"temp.1"
"temp.11"
"temp.13"
"temp.14"
"temp.7"
"unmarshall-object"
"vector"
"vector-ref"
"x.15"
"x.8"
)
(
)
(
"bin:jazz.language.syntax.marshall#"
)
(
"jazz.language.syntax.marshall:expand-state-marshalling"
)
(
"cadr"
"car"
"cdr"
"jazz:current-declaration-name"
"jazz:generate-symbol"
"jazz:load-unit"
"jazz:naturals"
"jazz:register-module"
"length"
"string->symbol"
"string-append"
"symbol->string"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.language.syntax.marshall"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_language_2e_syntax_2e_marshall
#define ___MH_PROC ___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 31
#define ___GLOCOUNT 14
#define ___SUPCOUNT 2
#define ___CNSCOUNT 11
#define ___SUBCOUNT 90
#define ___LBLCOUNT 42
#define ___OFDCOUNT 2
#define ___MODDESCR ___REF_SUB(89)
#include "gambit.h"

___NEED_SYM(___S_allocate)
___NEED_SYM(___S_attribute)
___NEED_SYM(___S_attributes)
___NEED_SYM(___S_bin_3a_jazz_2e_language_2e_syntax_2e_marshall)
___NEED_SYM(___S_class_2d_of)
___NEED_SYM(___S_content)
___NEED_SYM(___S_expand_2d_state_2d_marshalling)
___NEED_SYM(___S_form)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_kernel)
___NEED_SYM(___S_jazz_2e_language_2e_syntax_2e_marshall)
___NEED_SYM(___S_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___NEED_SYM(___S_marshall_2d_object)
___NEED_SYM(___S_meta)
___NEED_SYM(___S_method)
___NEED_SYM(___S_object)
___NEED_SYM(___S_override)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_scheme)
___NEED_SYM(___S_self)
___NEED_SYM(___S_serialize_2d_object)
___NEED_SYM(___S_temp_2e_1)
___NEED_SYM(___S_temp_2e_11)
___NEED_SYM(___S_temp_2e_13)
___NEED_SYM(___S_temp_2e_14)
___NEED_SYM(___S_temp_2e_7)
___NEED_SYM(___S_unmarshall_2d_object)
___NEED_SYM(___S_vector)
___NEED_SYM(___S_vector_2d_ref)
___NEED_SYM(___S_x_2e_15)
___NEED_SYM(___S_x_2e_8)

___NEED_GLO(___G_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___NEED_GLO(___G_cadr)
___NEED_GLO(___G_car)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___NEED_GLO(___G_jazz_3a_current_2d_declaration_2d_name)
___NEED_GLO(___G_jazz_3a_generate_2d_symbol)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_naturals)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_length)
___NEED_GLO(___G_string_2d__3e_symbol)
___NEED_GLO(___G_string_2d_append)
___NEED_GLO(___G_symbol_2d__3e_string)

___BEGIN_SYM
___DEF_SYM(0,___S_allocate,"allocate")
___DEF_SYM(1,___S_attribute,"attribute")
___DEF_SYM(2,___S_attributes,"attributes")
___DEF_SYM(3,___S_bin_3a_jazz_2e_language_2e_syntax_2e_marshall,"bin:jazz.language.syntax.marshall")

___DEF_SYM(4,___S_class_2d_of,"class-of")
___DEF_SYM(5,___S_content,"content")
___DEF_SYM(6,___S_expand_2d_state_2d_marshalling,"expand-state-marshalling")
___DEF_SYM(7,___S_form,"form")
___DEF_SYM(8,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(9,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall,"jazz.language.syntax.marshall")

___DEF_SYM(11,___S_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,"jazz.language.syntax.marshall:expand-state-marshalling")

___DEF_SYM(12,___S_marshall_2d_object,"marshall-object")
___DEF_SYM(13,___S_meta,"meta")
___DEF_SYM(14,___S_method,"method")
___DEF_SYM(15,___S_object,"object")
___DEF_SYM(16,___S_override,"override")
___DEF_SYM(17,___S_protected,"protected")
___DEF_SYM(18,___S_scheme,"scheme")
___DEF_SYM(19,___S_self,"self")
___DEF_SYM(20,___S_serialize_2d_object,"serialize-object")
___DEF_SYM(21,___S_temp_2e_1,"temp.1")
___DEF_SYM(22,___S_temp_2e_11,"temp.11")
___DEF_SYM(23,___S_temp_2e_13,"temp.13")
___DEF_SYM(24,___S_temp_2e_14,"temp.14")
___DEF_SYM(25,___S_temp_2e_7,"temp.7")
___DEF_SYM(26,___S_unmarshall_2d_object,"unmarshall-object")
___DEF_SYM(27,___S_vector,"vector")
___DEF_SYM(28,___S_vector_2d_ref,"vector-ref")
___DEF_SYM(29,___S_x_2e_15,"x.15")
___DEF_SYM(30,___S_x_2e_8,"x.8")
___END_SYM

#define ___SYM_allocate ___SYM(0,___S_allocate)
#define ___SYM_attribute ___SYM(1,___S_attribute)
#define ___SYM_attributes ___SYM(2,___S_attributes)
#define ___SYM_bin_3a_jazz_2e_language_2e_syntax_2e_marshall ___SYM(3,___S_bin_3a_jazz_2e_language_2e_syntax_2e_marshall)
#define ___SYM_class_2d_of ___SYM(4,___S_class_2d_of)
#define ___SYM_content ___SYM(5,___S_content)
#define ___SYM_expand_2d_state_2d_marshalling ___SYM(6,___S_expand_2d_state_2d_marshalling)
#define ___SYM_form ___SYM(7,___S_form)
#define ___SYM_foundation_2e_dialect ___SYM(8,___S_foundation_2e_dialect)
#define ___SYM_jazz_2e_language_2e_runtime_2e_kernel ___SYM(9,___S_jazz_2e_language_2e_runtime_2e_kernel)
#define ___SYM_jazz_2e_language_2e_syntax_2e_marshall ___SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall)
#define ___SYM_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling ___SYM(11,___S_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
#define ___SYM_marshall_2d_object ___SYM(12,___S_marshall_2d_object)
#define ___SYM_meta ___SYM(13,___S_meta)
#define ___SYM_method ___SYM(14,___S_method)
#define ___SYM_object ___SYM(15,___S_object)
#define ___SYM_override ___SYM(16,___S_override)
#define ___SYM_protected ___SYM(17,___S_protected)
#define ___SYM_scheme ___SYM(18,___S_scheme)
#define ___SYM_self ___SYM(19,___S_self)
#define ___SYM_serialize_2d_object ___SYM(20,___S_serialize_2d_object)
#define ___SYM_temp_2e_1 ___SYM(21,___S_temp_2e_1)
#define ___SYM_temp_2e_11 ___SYM(22,___S_temp_2e_11)
#define ___SYM_temp_2e_13 ___SYM(23,___S_temp_2e_13)
#define ___SYM_temp_2e_14 ___SYM(24,___S_temp_2e_14)
#define ___SYM_temp_2e_7 ___SYM(25,___S_temp_2e_7)
#define ___SYM_unmarshall_2d_object ___SYM(26,___S_unmarshall_2d_object)
#define ___SYM_vector ___SYM(27,___S_vector)
#define ___SYM_vector_2d_ref ___SYM(28,___S_vector_2d_ref)
#define ___SYM_x_2e_15 ___SYM(29,___S_x_2e_15)
#define ___SYM_x_2e_8 ___SYM(30,___S_x_2e_8)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.language.syntax.marshall#")

___DEF_GLO(1,"jazz.language.syntax.marshall:expand-state-marshalling")

___DEF_GLO(2,"cadr")
___DEF_GLO(3,"car")
___DEF_GLO(4,"cdr")
___DEF_GLO(5,"jazz:current-declaration-name")
___DEF_GLO(6,"jazz:generate-symbol")
___DEF_GLO(7,"jazz:load-unit")
___DEF_GLO(8,"jazz:naturals")
___DEF_GLO(9,"jazz:register-module")
___DEF_GLO(10,"length")
___DEF_GLO(11,"string->symbol")
___DEF_GLO(12,"string-append")
___DEF_GLO(13,"symbol->string")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_ ___GLO(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
#define ___PRM_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_ ___PRM(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
#define ___GLO_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling ___GLO(1,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
#define ___PRM_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling ___PRM(1,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
#define ___GLO_cadr ___GLO(2,___G_cadr)
#define ___PRM_cadr ___PRM(2,___G_cadr)
#define ___GLO_car ___GLO(3,___G_car)
#define ___PRM_car ___PRM(3,___G_car)
#define ___GLO_cdr ___GLO(4,___G_cdr)
#define ___PRM_cdr ___PRM(4,___G_cdr)
#define ___GLO_jazz_3a_current_2d_declaration_2d_name ___GLO(5,___G_jazz_3a_current_2d_declaration_2d_name)
#define ___PRM_jazz_3a_current_2d_declaration_2d_name ___PRM(5,___G_jazz_3a_current_2d_declaration_2d_name)
#define ___GLO_jazz_3a_generate_2d_symbol ___GLO(6,___G_jazz_3a_generate_2d_symbol)
#define ___PRM_jazz_3a_generate_2d_symbol ___PRM(6,___G_jazz_3a_generate_2d_symbol)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(7,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(7,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_naturals ___GLO(8,___G_jazz_3a_naturals)
#define ___PRM_jazz_3a_naturals ___PRM(8,___G_jazz_3a_naturals)
#define ___GLO_jazz_3a_register_2d_module ___GLO(9,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(9,___G_jazz_3a_register_2d_module)
#define ___GLO_length ___GLO(10,___G_length)
#define ___PRM_length ___PRM(10,___G_length)
#define ___GLO_string_2d__3e_symbol ___GLO(11,___G_string_2d__3e_symbol)
#define ___PRM_string_2d__3e_symbol ___PRM(11,___G_string_2d__3e_symbol)
#define ___GLO_string_2d_append ___GLO(12,___G_string_2d_append)
#define ___PRM_string_2d_append ___PRM(12,___G_string_2d_append)
#define ___GLO_symbol_2d__3e_string ___GLO(13,___G_symbol_2d__3e_string)
#define ___PRM_symbol_2d__3e_string ___PRM(13,___G_symbol_2d__3e_string)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_NUL)
,___DEF_CNS(___REF_SYM(6,___S_expand_2d_state_2d_marshalling),___REF_SYM(11,___S_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling))
,___DEF_CNS(___REF_SYM(15,___S_object),___REF_NUL)
,___DEF_CNS(___REF_SYM(4,___S_class_2d_of),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(15,___S_object),___REF_NUL)
,___DEF_CNS(___REF_SYM(12,___S_marshall_2d_object),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(19,___S_self),___REF_CNS(7))
,___DEF_CNS(___REF_SYM(15,___S_object),___REF_NUL)
,___DEF_CNS(___REF_SYM(26,___S_unmarshall_2d_object),___REF_CNS(9))
,___DEF_CNS(___REF_SYM(19,___S_self),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(5,___S_content),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X1,7UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_SUB(10))
               ___VEC1(___REF_SUB(12))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(50))
               ___VEC0
___DEF_SUB_VEC(___X16,0UL)
               ___VEC0
___DEF_SUB_STR(___X17,4UL)
               ___STR4(97,116,116,114)
___DEF_SUB_STR(___X18,3UL)
               ___STR3(118,97,108)
___DEF_SUB_STR(___X19,4UL)
               ___STR4(103,101,116,45)
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X21,33UL)
               ___VEC1(___REF_SUB(22))
               ___VEC1(___REF_SUB(24))
               ___VEC1(___REF_SUB(26))
               ___VEC1(___REF_SUB(28))
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(50))
               ___VEC0
___DEF_SUB_VEC(___X24,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1245240))
               ___VEC0
___DEF_SUB_VEC(___X26,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1245240))
               ___VEC0
___DEF_SUB_VEC(___X28,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(983097))
               ___VEC0
___DEF_SUB_VEC(___X30,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2359356))
               ___VEC0
___DEF_SUB_VEC(___X32,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2359356))
               ___VEC0
___DEF_SUB_VEC(___X34,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(3014717))
               ___VEC0
___DEF_SUB_VEC(___X36,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2752564))
               ___VEC0
___DEF_SUB_VEC(___X38,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310772))
               ___VEC0
___DEF_SUB_VEC(___X40,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(262196))
               ___VEC0
___DEF_SUB_VEC(___X42,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(3801140))
               ___VEC0
___DEF_SUB_VEC(___X44,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(3014717))
               ___VEC0
___DEF_SUB_VEC(___X46,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2687036))
               ___VEC0
___DEF_SUB_VEC(___X48,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2687036))
               ___VEC0
___DEF_SUB_VEC(___X50,4UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2359356))
               ___VEC0
___DEF_SUB_VEC(___X52,4UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2359356))
               ___VEC0
___DEF_SUB_VEC(___X54,4UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2359356))
               ___VEC0
___DEF_SUB_VEC(___X56,4UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2359356))
               ___VEC0
___DEF_SUB_VEC(___X58,4UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1245248))
               ___VEC0
___DEF_SUB_VEC(___X60,4UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1245248))
               ___VEC0
___DEF_SUB_VEC(___X62,4UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(2424900))
               ___VEC0
___DEF_SUB_VEC(___X64,4UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1638468))
               ___VEC0
___DEF_SUB_VEC(___X66,4UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310785))
               ___VEC0
___DEF_SUB_VEC(___X68,4UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310785))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1638465))
               ___VEC0
___DEF_SUB_VEC(___X72,5UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_FIX(131088))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310785))
               ___VEC0
___DEF_SUB_VEC(___X74,5UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_FIX(131088))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310785))
               ___VEC0
___DEF_SUB_VEC(___X76,5UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_FIX(131088))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310785))
               ___VEC0
___DEF_SUB_VEC(___X78,5UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_FIX(196626))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310785))
               ___VEC0
___DEF_SUB_VEC(___X80,4UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X82,4UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X84,3UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1310775))
               ___VEC0
___DEF_SUB_VEC(___X86,3UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall))
               ___VEC1(___REF_FIX(1245238))
               ___VEC0
___DEF_SUB_VEC(___X88,10UL)
               ___VEC1(___REF_SYM(2,___S_attributes))
               ___VEC1(___REF_SYM(7,___S_form))
               ___VEC1(___REF_SYM(25,___S_temp_2e_7))
               ___VEC1(___REF_SYM(1,___S_attribute))
               ___VEC1(___REF_SYM(21,___S_temp_2e_1))
               ___VEC1(___REF_SYM(30,___S_x_2e_8))
               ___VEC1(___REF_SYM(24,___S_temp_2e_14))
               ___VEC1(___REF_SYM(23,___S_temp_2e_13))
               ___VEC1(___REF_SYM(29,___S_x_2e_15))
               ___VEC1(___REF_SYM(22,___S_temp_2e_11))
               ___VEC0
___DEF_SUB_VEC(___X89,5UL)
               ___VEC1(___REF_SYM(3,___S_bin_3a_jazz_2e_language_2e_syntax_2e_marshall))
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
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L10_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L11_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L12_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L13_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L14_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L15_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L16_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L17_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L18_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L19_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L20_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L21_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L22_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L23_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L24_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L25_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L26_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L27_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L28_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L29_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L30_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L31_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_M_HLBL(___L32_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_kernel)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___SET_STK(1,___SYM_jazz_2e_language_2e_syntax_2e_marshall)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),9,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___SET_GLO(1,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___PRC(9))
   ___SET_R1(___VOID)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling
#undef ___PH_LBL0
#define ___PH_LBL0 9
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L10_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L11_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L12_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L13_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L14_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L15_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L16_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L17_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L18_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L19_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L20_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L21_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L22_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L23_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L24_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L25_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L26_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L27_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L28_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L29_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L30_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L31_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_P_HLBL(___L32_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L43_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L41_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___SUB(17))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_3a_generate_2d_symbol)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___SUB(18))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_3a_generate_2d_symbol)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(17))
   ___IF(___PAIRP(___R1))
   ___GOTO(___L33_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
   ___GOTO(___L38_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CDR(___STK(-6)))
   ___SET_R0(___LBL(14))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L38_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
___DEF_GLBL(___L33_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___CAR(___R1))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(11))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(2)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L35_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
   ___SET_R1(___CDR(___R1))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L36_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
___DEF_GLBL(___L34_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R2(___CAR(___R1))
   ___SET_R1(___R2)
   ___SET_R0(___LBL(7))
   ___ADJFP(6)
   ___JUMPPRM(___SET_NARGS(1),___PRM_symbol_2d__3e_string)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(19))
   ___SET_R0(___LBL(8))
   ___JUMPPRM(___SET_NARGS(2),___PRM_string_2d_append)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R0(___LBL(9))
   ___JUMPPRM(___SET_NARGS(1),___PRM_string_2d__3e_symbol)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L35_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___FAL)
   ___IF(___PAIRP(___R1))
   ___GOTO(___L34_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
___DEF_GLBL(___L36_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(1,___R1)
   ___SET_R1(___STK(0))
   ___SET_R0(___LBL(10))
   ___ADJFP(6)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cadr)
___DEF_SLBL(10,___L10_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_GLBL(___L37_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___GOTO(___L37_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_SLBL(11,___L11_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___CONS(___R1,___CNS(2)))
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(14,___L14_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___CONS(___STK(-5),___R1))
   ___CHECK_HEAP(15,4096)
___DEF_SLBL(15,___L15_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___POLL(16)
___DEF_SLBL(16,___L16_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L38_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(17,___L17_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___CONS(___SYM_vector,___R1))
   ___BEGIN_ALLOC_LIST(3UL,___R1)
   ___ADD_LIST_ELEM(1,___CNS(3))
   ___ADD_LIST_ELEM(2,___SYM_serialize_2d_object)
   ___END_ALLOC_LIST(3)
   ___SET_R1(___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(5UL,___R1)
   ___ADD_LIST_ELEM(1,___CNS(5))
   ___ADD_LIST_ELEM(2,___SYM_override)
   ___ADD_LIST_ELEM(3,___SYM_meta)
   ___ADD_LIST_ELEM(4,___SYM_method)
   ___END_ALLOC_LIST(5)
   ___SET_R1(___GET_LIST(5))
   ___SET_STK(-4,___R1)
   ___SET_R0(___LBL(19))
   ___CHECK_HEAP(18,4096)
___DEF_SLBL(18,___L18_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___JUMPGLOSAFE(___SET_NARGS(0),5,___G_jazz_3a_current_2d_declaration_2d_name)
___DEF_SLBL(19,___L19_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(20))
   ___JUMPPRM(___SET_NARGS(1),___PRM_length)
___DEF_SLBL(20,___L20_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R2(___R1)
   ___SET_R1(___FIX(0L))
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(2),8,___G_jazz_3a_naturals)
___DEF_SLBL(21,___L21_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(-2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(28))
   ___ADJFP(4)
   ___IF(___PAIRP(___R1))
   ___GOTO(___L39_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
   ___GOTO(___L40_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_SLBL(22,___L22_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___CDR(___STK(-6)))
   ___SET_R0(___LBL(25))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L40_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
___DEF_GLBL(___L39_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L40_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R2(___CAR(___R2))
   ___SET_R1(___CAR(___R1))
   ___SET_R0(___LBL(22))
   ___ADJFP(8)
   ___POLL(23)
___DEF_SLBL(23,___L23_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___BEGIN_ALLOC_LIST(3UL,___R2)
   ___ADD_LIST_ELEM(1,___SYM_content)
   ___ADD_LIST_ELEM(2,___SYM_vector_2d_ref)
   ___END_ALLOC_LIST(3)
   ___SET_R3(___GET_LIST(3))
   ___SET_R1(___R3)
   ___CHECK_HEAP(24,4096)
___DEF_SLBL(24,___L24_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L40_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(25,___L25_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(26,4096)
___DEF_SLBL(26,___L26_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___POLL(27)
___DEF_SLBL(27,___L27_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(28,___L28_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_R1(___CONS(___STK(-7),___R1))
   ___SET_R1(___CONS(___SYM_allocate,___R1))
   ___BEGIN_ALLOC_LIST(5UL,___R1)
   ___ADD_LIST_ELEM(1,___CNS(8))
   ___ADD_LIST_ELEM(2,___SYM_override)
   ___ADD_LIST_ELEM(3,___SYM_meta)
   ___ADD_LIST_ELEM(4,___SYM_method)
   ___END_ALLOC_LIST(5)
   ___SET_R1(___GET_LIST(5))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___STK(-8))
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___CHECK_HEAP(29,4096)
___DEF_SLBL(29,___L29_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___POLL(30)
___DEF_SLBL(30,___L30_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L41_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(31))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(31,___L31_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_GLBL(___L42_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___GOTO(___L42_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_GLBL(___L43_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(32))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(32,___L32_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_GLBL(___L44_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
   ___GOTO(___L44_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,"bin:jazz.language.syntax.marshall#",
___REF_SUB(0),7,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,0,___REF_SUB(20),33,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___OFD(___RETI,12,0,0x3f007L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___OFD(___RETI,12,0,0x3f007L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,___IFD(___RETN,5,0,0x3L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f007L)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f007L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_marshall_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_allocate,"allocate")
___DEF_MOD_SYM(1,___S_attribute,"attribute")
___DEF_MOD_SYM(2,___S_attributes,"attributes")
___DEF_MOD_SYM(3,___S_bin_3a_jazz_2e_language_2e_syntax_2e_marshall,"bin:jazz.language.syntax.marshall")

___DEF_MOD_SYM(4,___S_class_2d_of,"class-of")
___DEF_MOD_SYM(5,___S_content,"content")
___DEF_MOD_SYM(6,___S_expand_2d_state_2d_marshalling,"expand-state-marshalling")
___DEF_MOD_SYM(7,___S_form,"form")
___DEF_MOD_SYM(8,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(9,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_MOD_SYM(10,___S_jazz_2e_language_2e_syntax_2e_marshall,"jazz.language.syntax.marshall")

___DEF_MOD_SYM(11,___S_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling,"jazz.language.syntax.marshall:expand-state-marshalling")

___DEF_MOD_SYM(12,___S_marshall_2d_object,"marshall-object")
___DEF_MOD_SYM(13,___S_meta,"meta")
___DEF_MOD_SYM(14,___S_method,"method")
___DEF_MOD_SYM(15,___S_object,"object")
___DEF_MOD_SYM(16,___S_override,"override")
___DEF_MOD_SYM(17,___S_protected,"protected")
___DEF_MOD_SYM(18,___S_scheme,"scheme")
___DEF_MOD_SYM(19,___S_self,"self")
___DEF_MOD_SYM(20,___S_serialize_2d_object,"serialize-object")
___DEF_MOD_SYM(21,___S_temp_2e_1,"temp.1")
___DEF_MOD_SYM(22,___S_temp_2e_11,"temp.11")
___DEF_MOD_SYM(23,___S_temp_2e_13,"temp.13")
___DEF_MOD_SYM(24,___S_temp_2e_14,"temp.14")
___DEF_MOD_SYM(25,___S_temp_2e_7,"temp.7")
___DEF_MOD_SYM(26,___S_unmarshall_2d_object,"unmarshall-object")
___DEF_MOD_SYM(27,___S_vector,"vector")
___DEF_MOD_SYM(28,___S_vector_2d_ref,"vector-ref")
___DEF_MOD_SYM(29,___S_x_2e_15,"x.15")
___DEF_MOD_SYM(30,___S_x_2e_8,"x.8")
___END_MOD_SYM_KEY

#endif
