#ifdef ___LINKER_INFO
; File: "core.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:dialect.core"
(("bin:dialect.core"))
(
"begin"
"bin:dialect.core"
"dialect.core"
"dialect.core:define-walker-declaration"
"foundation.dialect"
"new-declaration-form"
"new-special-form"
"public"
"quote"
"register-binding"
"register-declaration"
"scheme"
)
(
)
(
"bin:dialect.core#"
)
(
)
(
"##interaction-cte"
"##make-macro-descr"
"##top-cte-add-macro!"
"jazz:load-unit"
"jazz:register-macro"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:dialect.core"
#define ___LINKER_ID ___LNK_bin_3a_dialect_2e_core
#define ___MH_PROC ___H_bin_3a_dialect_2e_core
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 12
#define ___GLOCOUNT 7
#define ___SUPCOUNT 1
#define ___SUBCOUNT 30
#define ___LBLCOUNT 14
#define ___MODDESCR ___REF_SUB(29)
#include "gambit.h"

___NEED_SYM(___S_begin)
___NEED_SYM(___S_bin_3a_dialect_2e_core)
___NEED_SYM(___S_dialect_2e_core)
___NEED_SYM(___S_dialect_2e_core_3a_define_2d_walker_2d_declaration)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_new_2d_declaration_2d_form)
___NEED_SYM(___S_new_2d_special_2d_form)
___NEED_SYM(___S_public)
___NEED_SYM(___S_quote)
___NEED_SYM(___S_register_2d_binding)
___NEED_SYM(___S_register_2d_declaration)
___NEED_SYM(___S_scheme)

___NEED_GLO(___G__23__23_interaction_2d_cte)
___NEED_GLO(___G__23__23_make_2d_macro_2d_descr)
___NEED_GLO(___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___NEED_GLO(___G_bin_3a_dialect_2e_core_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_macro)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_begin,"begin")
___DEF_SYM(1,___S_bin_3a_dialect_2e_core,"bin:dialect.core")
___DEF_SYM(2,___S_dialect_2e_core,"dialect.core")
___DEF_SYM(3,___S_dialect_2e_core_3a_define_2d_walker_2d_declaration,"dialect.core:define-walker-declaration")

___DEF_SYM(4,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(5,___S_new_2d_declaration_2d_form,"new-declaration-form")
___DEF_SYM(6,___S_new_2d_special_2d_form,"new-special-form")
___DEF_SYM(7,___S_public,"public")
___DEF_SYM(8,___S_quote,"quote")
___DEF_SYM(9,___S_register_2d_binding,"register-binding")
___DEF_SYM(10,___S_register_2d_declaration,"register-declaration")
___DEF_SYM(11,___S_scheme,"scheme")
___END_SYM

#define ___SYM_begin ___SYM(0,___S_begin)
#define ___SYM_bin_3a_dialect_2e_core ___SYM(1,___S_bin_3a_dialect_2e_core)
#define ___SYM_dialect_2e_core ___SYM(2,___S_dialect_2e_core)
#define ___SYM_dialect_2e_core_3a_define_2d_walker_2d_declaration ___SYM(3,___S_dialect_2e_core_3a_define_2d_walker_2d_declaration)
#define ___SYM_foundation_2e_dialect ___SYM(4,___S_foundation_2e_dialect)
#define ___SYM_new_2d_declaration_2d_form ___SYM(5,___S_new_2d_declaration_2d_form)
#define ___SYM_new_2d_special_2d_form ___SYM(6,___S_new_2d_special_2d_form)
#define ___SYM_public ___SYM(7,___S_public)
#define ___SYM_quote ___SYM(8,___S_quote)
#define ___SYM_register_2d_binding ___SYM(9,___S_register_2d_binding)
#define ___SYM_register_2d_declaration ___SYM(10,___S_register_2d_declaration)
#define ___SYM_scheme ___SYM(11,___S_scheme)

___BEGIN_GLO
___DEF_GLO(0,"bin:dialect.core#")
___DEF_GLO(1,"##interaction-cte")
___DEF_GLO(2,"##make-macro-descr")
___DEF_GLO(3,"##top-cte-add-macro!")
___DEF_GLO(4,"jazz:load-unit")
___DEF_GLO(5,"jazz:register-macro")
___DEF_GLO(6,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_dialect_2e_core_23_ ___GLO(0,___G_bin_3a_dialect_2e_core_23_)
#define ___PRM_bin_3a_dialect_2e_core_23_ ___PRM(0,___G_bin_3a_dialect_2e_core_23_)
#define ___GLO__23__23_interaction_2d_cte ___GLO(1,___G__23__23_interaction_2d_cte)
#define ___PRM__23__23_interaction_2d_cte ___PRM(1,___G__23__23_interaction_2d_cte)
#define ___GLO__23__23_make_2d_macro_2d_descr ___GLO(2,___G__23__23_make_2d_macro_2d_descr)
#define ___PRM__23__23_make_2d_macro_2d_descr ___PRM(2,___G__23__23_make_2d_macro_2d_descr)
#define ___GLO__23__23_top_2d_cte_2d_add_2d_macro_21_ ___GLO(3,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___PRM__23__23_top_2d_cte_2d_add_2d_macro_21_ ___PRM(3,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(4,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(4,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_macro ___GLO(5,___G_jazz_3a_register_2d_macro)
#define ___PRM_jazz_3a_register_2d_macro ___PRM(5,___G_jazz_3a_register_2d_macro)
#define ___GLO_jazz_3a_register_2d_module ___GLO(6,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(6,___G_jazz_3a_register_2d_module)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X1,13UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(2,___S_dialect_2e_core))
               ___VEC1(___REF_FIX(47))
               ___VEC0
___DEF_SUB_VEC(___X28,0UL)
               ___VEC0
___DEF_SUB_VEC(___X29,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_dialect_2e_core))
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
___DEF_M_HLBL(___L0_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L1_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L2_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L3_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L4_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L5_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L6_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L7_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L8_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L9_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L10_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L11_bin_3a_dialect_2e_core_23_)
___DEF_M_HLBL(___L12_bin_3a_dialect_2e_core_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_dialect_2e_core_23_
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
___DEF_P_HLBL(___L0_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L1_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L2_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L3_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L4_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L5_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L6_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L7_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L8_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L9_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L10_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L11_bin_3a_dialect_2e_core_23_)
___DEF_P_HLBL(___L12_bin_3a_dialect_2e_core_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_dialect_2e_core_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_dialect_2e_core_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_dialect_2e_core_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),4,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_dialect_2e_core_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),4,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_dialect_2e_core_23_)
   ___SET_STK(1,___SYM_dialect_2e_core)
   ___SET_R3(___NUL)
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),6,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_dialect_2e_core_23_)
   ___SET_STK(1,___FAL)
   ___SET_R2(___LBL(11))
   ___SET_R3(___FAL)
   ___SET_R1(___FIX(5L))
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G__23__23_make_2d_macro_2d_descr)
___DEF_SLBL(5,___L5_bin_3a_dialect_2e_core_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_dialect_2e_core_3a_define_2d_walker_2d_declaration)
   ___SET_R1(___GLO__23__23_interaction_2d_cte)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(3),3,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___DEF_SLBL(6,___L6_bin_3a_dialect_2e_core_23_)
   ___SET_R2(___LBL(9))
   ___SET_R1(___SYM_dialect_2e_core_3a_define_2d_walker_2d_declaration)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G_jazz_3a_register_2d_macro)
___DEF_SLBL(7,___L7_bin_3a_dialect_2e_core_23_)
   ___POLL(8)
___DEF_SLBL(8,___L8_bin_3a_dialect_2e_core_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(9,___L9_bin_3a_dialect_2e_core_23_)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(9,4,0,0)
   ___BEGIN_ALLOC_LIST(2UL,___STK(0))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_R4(___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___R3)
   ___ADD_LIST_ELEM(1,___R4)
   ___ADD_LIST_ELEM(2,___SYM_new_2d_special_2d_form)
   ___END_ALLOC_LIST(3)
   ___SET_R4(___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_STK(1,___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___R4)
   ___ADD_LIST_ELEM(1,___STK(1))
   ___ADD_LIST_ELEM(2,___SYM_register_2d_binding)
   ___END_ALLOC_LIST(3)
   ___SET_R4(___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(2UL,___STK(0))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_STK(1,___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___R2)
   ___ADD_LIST_ELEM(1,___STK(1))
   ___ADD_LIST_ELEM(2,___SYM_new_2d_declaration_2d_form)
   ___END_ALLOC_LIST(3)
   ___SET_STK(1,___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_STK(2,___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___STK(1))
   ___ADD_LIST_ELEM(1,___STK(2))
   ___ADD_LIST_ELEM(2,___SYM_register_2d_declaration)
   ___END_ALLOC_LIST(3)
   ___SET_STK(1,___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(3UL,___R4)
   ___ADD_LIST_ELEM(1,___STK(1))
   ___ADD_LIST_ELEM(2,___SYM_begin)
   ___END_ALLOC_LIST(3)
   ___SET_R4(___GET_LIST(3))
   ___SET_R1(___R4)
   ___ADJFP(-1)
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_bin_3a_dialect_2e_core_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(11,___L11_bin_3a_dialect_2e_core_23_)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(11,4,0,0)
   ___BEGIN_ALLOC_LIST(2UL,___STK(0))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_R4(___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___R3)
   ___ADD_LIST_ELEM(1,___R4)
   ___ADD_LIST_ELEM(2,___SYM_new_2d_special_2d_form)
   ___END_ALLOC_LIST(3)
   ___SET_R4(___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_STK(1,___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___R4)
   ___ADD_LIST_ELEM(1,___STK(1))
   ___ADD_LIST_ELEM(2,___SYM_register_2d_binding)
   ___END_ALLOC_LIST(3)
   ___SET_R4(___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(2UL,___STK(0))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_STK(1,___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___R2)
   ___ADD_LIST_ELEM(1,___STK(1))
   ___ADD_LIST_ELEM(2,___SYM_new_2d_declaration_2d_form)
   ___END_ALLOC_LIST(3)
   ___SET_STK(1,___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_STK(2,___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(3UL,___STK(1))
   ___ADD_LIST_ELEM(1,___STK(2))
   ___ADD_LIST_ELEM(2,___SYM_register_2d_declaration)
   ___END_ALLOC_LIST(3)
   ___SET_STK(1,___GET_LIST(3))
   ___BEGIN_ALLOC_LIST(3UL,___R4)
   ___ADD_LIST_ELEM(1,___STK(1))
   ___ADD_LIST_ELEM(2,___SYM_begin)
   ___END_ALLOC_LIST(3)
   ___SET_R4(___GET_LIST(3))
   ___SET_R1(___R4)
   ___ADJFP(-1)
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_bin_3a_dialect_2e_core_23_)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_dialect_2e_core_23_,"bin:dialect.core#",___REF_SUB(0),13,0)
,___DEF_LBL_PROC(___H_bin_3a_dialect_2e_core_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_dialect_2e_core_23_,4,-1)
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_bin_3a_dialect_2e_core_23_,4,-1)
,___DEF_LBL_RET(___H_bin_3a_dialect_2e_core_23_,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_dialect_2e_core_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_dialect_2e_core_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_begin,"begin")
___DEF_MOD_SYM(1,___S_bin_3a_dialect_2e_core,"bin:dialect.core")
___DEF_MOD_SYM(2,___S_dialect_2e_core,"dialect.core")
___DEF_MOD_SYM(3,___S_dialect_2e_core_3a_define_2d_walker_2d_declaration,"dialect.core:define-walker-declaration")

___DEF_MOD_SYM(4,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(5,___S_new_2d_declaration_2d_form,"new-declaration-form")
___DEF_MOD_SYM(6,___S_new_2d_special_2d_form,"new-special-form")
___DEF_MOD_SYM(7,___S_public,"public")
___DEF_MOD_SYM(8,___S_quote,"quote")
___DEF_MOD_SYM(9,___S_register_2d_binding,"register-binding")
___DEF_MOD_SYM(10,___S_register_2d_declaration,"register-declaration")
___DEF_MOD_SYM(11,___S_scheme,"scheme")
___END_MOD_SYM_KEY

#endif
