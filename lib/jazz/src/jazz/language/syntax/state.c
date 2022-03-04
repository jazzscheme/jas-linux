#ifdef ___LINKER_INFO
; File: "state.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.language.syntax.state"
(("bin:jazz.language.syntax.state"))
(
"attributes"
"begin"
"bin:jazz.language.syntax.state"
"form"
"foundation.dialect"
"jazz.language.syntax.state"
"jazz.language.syntax.state:state"
"protected"
"scheme"
)
(
)
(
"bin:jazz.language.syntax.state#"
)
(
)
(
"##interaction-cte"
"##make-macro-descr"
"##quasi-append"
"##top-cte-add-macro!"
"cdr"
"jazz.language.syntax.marshall:expand-state-marshalling"
"jazz:load-unit"
"jazz:register-macro"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.language.syntax.state"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_language_2e_syntax_2e_state
#define ___MH_PROC ___H_bin_3a_jazz_2e_language_2e_syntax_2e_state
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 9
#define ___GLOCOUNT 10
#define ___SUPCOUNT 1
#define ___SUBCOUNT 50
#define ___LBLCOUNT 24
#define ___MODDESCR ___REF_SUB(49)
#include "gambit.h"

___NEED_SYM(___S_attributes)
___NEED_SYM(___S_begin)
___NEED_SYM(___S_bin_3a_jazz_2e_language_2e_syntax_2e_state)
___NEED_SYM(___S_form)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz_2e_language_2e_syntax_2e_state)
___NEED_SYM(___S_jazz_2e_language_2e_syntax_2e_state_3a_state)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_scheme)

___NEED_GLO(___G__23__23_interaction_2d_cte)
___NEED_GLO(___G__23__23_make_2d_macro_2d_descr)
___NEED_GLO(___G__23__23_quasi_2d_append)
___NEED_GLO(___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___NEED_GLO(___G_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_macro)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_attributes,"attributes")
___DEF_SYM(1,___S_begin,"begin")
___DEF_SYM(2,___S_bin_3a_jazz_2e_language_2e_syntax_2e_state,"bin:jazz.language.syntax.state")

___DEF_SYM(3,___S_form,"form")
___DEF_SYM(4,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state,"jazz.language.syntax.state")
___DEF_SYM(6,___S_jazz_2e_language_2e_syntax_2e_state_3a_state,"jazz.language.syntax.state:state")

___DEF_SYM(7,___S_protected,"protected")
___DEF_SYM(8,___S_scheme,"scheme")
___END_SYM

#define ___SYM_attributes ___SYM(0,___S_attributes)
#define ___SYM_begin ___SYM(1,___S_begin)
#define ___SYM_bin_3a_jazz_2e_language_2e_syntax_2e_state ___SYM(2,___S_bin_3a_jazz_2e_language_2e_syntax_2e_state)
#define ___SYM_form ___SYM(3,___S_form)
#define ___SYM_foundation_2e_dialect ___SYM(4,___S_foundation_2e_dialect)
#define ___SYM_jazz_2e_language_2e_syntax_2e_state ___SYM(5,___S_jazz_2e_language_2e_syntax_2e_state)
#define ___SYM_jazz_2e_language_2e_syntax_2e_state_3a_state ___SYM(6,___S_jazz_2e_language_2e_syntax_2e_state_3a_state)
#define ___SYM_protected ___SYM(7,___S_protected)
#define ___SYM_scheme ___SYM(8,___S_scheme)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.language.syntax.state#")
___DEF_GLO(1,"##interaction-cte")
___DEF_GLO(2,"##make-macro-descr")
___DEF_GLO(3,"##quasi-append")
___DEF_GLO(4,"##top-cte-add-macro!")
___DEF_GLO(5,"cdr")
___DEF_GLO(6,"jazz.language.syntax.marshall:expand-state-marshalling")

___DEF_GLO(7,"jazz:load-unit")
___DEF_GLO(8,"jazz:register-macro")
___DEF_GLO(9,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_ ___GLO(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
#define ___PRM_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_ ___PRM(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
#define ___GLO__23__23_interaction_2d_cte ___GLO(1,___G__23__23_interaction_2d_cte)
#define ___PRM__23__23_interaction_2d_cte ___PRM(1,___G__23__23_interaction_2d_cte)
#define ___GLO__23__23_make_2d_macro_2d_descr ___GLO(2,___G__23__23_make_2d_macro_2d_descr)
#define ___PRM__23__23_make_2d_macro_2d_descr ___PRM(2,___G__23__23_make_2d_macro_2d_descr)
#define ___GLO__23__23_quasi_2d_append ___GLO(3,___G__23__23_quasi_2d_append)
#define ___PRM__23__23_quasi_2d_append ___PRM(3,___G__23__23_quasi_2d_append)
#define ___GLO__23__23_top_2d_cte_2d_add_2d_macro_21_ ___GLO(4,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___PRM__23__23_top_2d_cte_2d_add_2d_macro_21_ ___PRM(4,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___GLO_cdr ___GLO(5,___G_cdr)
#define ___PRM_cdr ___PRM(5,___G_cdr)
#define ___GLO_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling ___GLO(6,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
#define ___PRM_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling ___PRM(6,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(7,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(7,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_macro ___GLO(8,___G_jazz_3a_register_2d_macro)
#define ___PRM_jazz_3a_register_2d_macro ___PRM(8,___G_jazz_3a_register_2d_macro)
#define ___GLO_jazz_3a_register_2d_module ___GLO(9,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(9,___G_jazz_3a_register_2d_module)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X1,23UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_SUB(10))
               ___VEC1(___REF_SUB(12))
               ___VEC1(___REF_SUB(14))
               ___VEC1(___REF_SUB(16))
               ___VEC1(___REF_SUB(18))
               ___VEC1(___REF_SUB(20))
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X22,5UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X24,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X26,4UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X28,4UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X30,4UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X32,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X36,5UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X38,4UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X40,4UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X42,4UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X44,4UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X46,3UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(0,___S_attributes))
               ___VEC1(___REF_SYM(3,___S_form))
               ___VEC0
___DEF_SUB_VEC(___X49,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_language_2e_syntax_2e_state))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_STK(1,___SYM_jazz_2e_language_2e_syntax_2e_state)
   ___SET_R3(___NUL)
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),9,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_STK(1,___FAL)
   ___SET_R2(___LBL(16))
   ___SET_R3(___FAL)
   ___SET_R1(___FIX(-1L))
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G__23__23_make_2d_macro_2d_descr)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_jazz_2e_language_2e_syntax_2e_state_3a_state)
   ___SET_R1(___GLO__23__23_interaction_2d_cte)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(3),4,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R2(___LBL(9))
   ___SET_R1(___SYM_jazz_2e_language_2e_syntax_2e_state_3a_state)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),8,___G_jazz_3a_register_2d_macro)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___POLL(8)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(9,0,0,0)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L23_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(10)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R2(___STK(-5))
   ___SET_R0(___LBL(12))
   ___JUMPPRM(___SET_NARGS(2),___PRM__23__23_quasi_2d_append)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R1(___CONS(___SYM_begin,___R1))
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___POLL(14)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L23_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(15))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_GLBL(___L24_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___GOTO(___L24_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(16,0,0,0)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L25_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(17)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_2e_language_2e_syntax_2e_marshall_3a_expand_2d_state_2d_marshalling)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R2(___STK(-5))
   ___SET_R0(___LBL(19))
   ___JUMPPRM(___SET_NARGS(2),___PRM__23__23_quasi_2d_append)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_R1(___CONS(___SYM_begin,___R1))
   ___CHECK_HEAP(20,4096)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___POLL(21)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L25_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(22))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___DEF_GLBL(___L26_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
   ___GOTO(___L26_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,"bin:jazz.language.syntax.state#",
___REF_SUB(0),23,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,___IFD(___RETN,5,0,0x3L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_language_2e_syntax_2e_state_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_attributes,"attributes")
___DEF_MOD_SYM(1,___S_begin,"begin")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_language_2e_syntax_2e_state,"bin:jazz.language.syntax.state")

___DEF_MOD_SYM(3,___S_form,"form")
___DEF_MOD_SYM(4,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(5,___S_jazz_2e_language_2e_syntax_2e_state,"jazz.language.syntax.state")
___DEF_MOD_SYM(6,___S_jazz_2e_language_2e_syntax_2e_state_3a_state,"jazz.language.syntax.state:state")

___DEF_MOD_SYM(7,___S_protected,"protected")
___DEF_MOD_SYM(8,___S_scheme,"scheme")
___END_MOD_SYM_KEY

#endif
