#ifdef ___LINKER_INFO
; File: "macro.c", produced by Gambit v4.8.9
(
408009
(C)
"macro"
(("macro"))
(
"form"
"macro"
"name"
)
(
"test"
)
(
"jazz:Macros"
"jazz:get-macro"
"jazz:need-macro"
"macro#"
)
(
"jazz:expand-macro"
"jazz:register-macro"
"jazz:walk-for"
)
(
"apply"
"car"
"cdr"
"eq?"
"jazz:error"
"make-parameter"
"make-table"
"table-ref"
"table-set!"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "macro"
#define ___LINKER_ID ___LNK_macro
#define ___MH_PROC ___H_macro
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 3
#define ___KEYCOUNT 1
#define ___GLOCOUNT 16
#define ___SUPCOUNT 7
#define ___SUBCOUNT 60
#define ___LBLCOUNT 26
#define ___MODDESCR ___REF_SUB(59)
#include "gambit.h"

___NEED_SYM(___S_form)
___NEED_SYM(___S_macro)
___NEED_SYM(___S_name)

___NEED_KEY(___K_test)

___NEED_GLO(___G_apply)
___NEED_GLO(___G_car)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_jazz_3a_Macros)
___NEED_GLO(___G_jazz_3a_error)
___NEED_GLO(___G_jazz_3a_expand_2d_macro)
___NEED_GLO(___G_jazz_3a_get_2d_macro)
___NEED_GLO(___G_jazz_3a_need_2d_macro)
___NEED_GLO(___G_jazz_3a_register_2d_macro)
___NEED_GLO(___G_jazz_3a_walk_2d_for)
___NEED_GLO(___G_macro_23_)
___NEED_GLO(___G_make_2d_parameter)
___NEED_GLO(___G_make_2d_table)
___NEED_GLO(___G_table_2d_ref)
___NEED_GLO(___G_table_2d_set_21_)

___BEGIN_SYM
___DEF_SYM(0,___S_form,"form")
___DEF_SYM(1,___S_macro,"macro")
___DEF_SYM(2,___S_name,"name")
___END_SYM

#define ___SYM_form ___SYM(0,___S_form)
#define ___SYM_macro ___SYM(1,___S_macro)
#define ___SYM_name ___SYM(2,___S_name)

___BEGIN_KEY
___DEF_KEY(0,___K_test,"test")
___END_KEY

#define ___KEY_test ___KEY(0,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"jazz:Macros")
___DEF_GLO(1,"jazz:expand-macro")
___DEF_GLO(2,"jazz:get-macro")
___DEF_GLO(3,"jazz:need-macro")
___DEF_GLO(4,"jazz:register-macro")
___DEF_GLO(5,"jazz:walk-for")
___DEF_GLO(6,"macro#")
___DEF_GLO(7,"apply")
___DEF_GLO(8,"car")
___DEF_GLO(9,"cdr")
___DEF_GLO(10,"eq?")
___DEF_GLO(11,"jazz:error")
___DEF_GLO(12,"make-parameter")
___DEF_GLO(13,"make-table")
___DEF_GLO(14,"table-ref")
___DEF_GLO(15,"table-set!")
___END_GLO

#define ___GLO_jazz_3a_Macros ___GLO(0,___G_jazz_3a_Macros)
#define ___PRM_jazz_3a_Macros ___PRM(0,___G_jazz_3a_Macros)
#define ___GLO_jazz_3a_expand_2d_macro ___GLO(1,___G_jazz_3a_expand_2d_macro)
#define ___PRM_jazz_3a_expand_2d_macro ___PRM(1,___G_jazz_3a_expand_2d_macro)
#define ___GLO_jazz_3a_get_2d_macro ___GLO(2,___G_jazz_3a_get_2d_macro)
#define ___PRM_jazz_3a_get_2d_macro ___PRM(2,___G_jazz_3a_get_2d_macro)
#define ___GLO_jazz_3a_need_2d_macro ___GLO(3,___G_jazz_3a_need_2d_macro)
#define ___PRM_jazz_3a_need_2d_macro ___PRM(3,___G_jazz_3a_need_2d_macro)
#define ___GLO_jazz_3a_register_2d_macro ___GLO(4,___G_jazz_3a_register_2d_macro)
#define ___PRM_jazz_3a_register_2d_macro ___PRM(4,___G_jazz_3a_register_2d_macro)
#define ___GLO_jazz_3a_walk_2d_for ___GLO(5,___G_jazz_3a_walk_2d_for)
#define ___PRM_jazz_3a_walk_2d_for ___PRM(5,___G_jazz_3a_walk_2d_for)
#define ___GLO_macro_23_ ___GLO(6,___G_macro_23_)
#define ___PRM_macro_23_ ___PRM(6,___G_macro_23_)
#define ___GLO_apply ___GLO(7,___G_apply)
#define ___PRM_apply ___PRM(7,___G_apply)
#define ___GLO_car ___GLO(8,___G_car)
#define ___PRM_car ___PRM(8,___G_car)
#define ___GLO_cdr ___GLO(9,___G_cdr)
#define ___PRM_cdr ___PRM(9,___G_cdr)
#define ___GLO_eq_3f_ ___GLO(10,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(10,___G_eq_3f_)
#define ___GLO_jazz_3a_error ___GLO(11,___G_jazz_3a_error)
#define ___PRM_jazz_3a_error ___PRM(11,___G_jazz_3a_error)
#define ___GLO_make_2d_parameter ___GLO(12,___G_make_2d_parameter)
#define ___PRM_make_2d_parameter ___PRM(12,___G_make_2d_parameter)
#define ___GLO_make_2d_table ___GLO(13,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(13,___G_make_2d_table)
#define ___GLO_table_2d_ref ___GLO(14,___G_table_2d_ref)
#define ___PRM_table_2d_ref ___PRM(14,___G_table_2d_ref)
#define ___GLO_table_2d_set_21_ ___GLO(15,___G_table_2d_set_21_)
#define ___PRM_table_2d_set_21_ ___PRM(15,___G_table_2d_set_21_)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X1,5UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(7))
               ___VEC1(___REF_SUB(9))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,53UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,115,121,110)
               ___STR8(116,97,120,47,109,97,99,114)
               ___STR5(111,46,115,99,109)
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(6))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131110))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131110))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(59))
               ___VEC0
___DEF_SUB_VEC(___X13,0UL)
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SUB(15))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SUB(16))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(917546))
               ___VEC0
___DEF_SUB_VEC(___X20,0UL)
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SUB(22))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(852014))
               ___VEC0
___DEF_SUB_VEC(___X27,0UL)
               ___VEC0
___DEF_SUB_STR(___X28,25UL)
               ___STR8(85,110,97,98,108,101,32,116)
               ___STR8(111,32,102,105,110,100,32,109)
               ___STR8(97,99,114,111,58,32,123,115)
               ___STR1(125)
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X30,5UL)
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X33,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393266))
               ___VEC0
___DEF_SUB_VEC(___X35,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393266))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393266))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393267))
               ___VEC0
___DEF_SUB_VEC(___X41,1UL)
               ___VEC1(___REF_SYM(2,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X43,7UL)
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X46,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(1703991))
               ___VEC0
___DEF_SUB_VEC(___X48,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(589879))
               ___VEC0
___DEF_SUB_VEC(___X50,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(589879))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(2490423))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131127))
               ___VEC0
___DEF_SUB_VEC(___X56,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(1703991))
               ___VEC0
___DEF_SUB_VEC(___X58,1UL)
               ___VEC1(___REF_SYM(0,___S_form))
               ___VEC0
___DEF_SUB_VEC(___X59,5UL)
               ___VEC1(___REF_SYM(1,___S_macro))
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
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_macro_23_)
___DEF_M_HLBL(___L1_macro_23_)
___DEF_M_HLBL(___L2_macro_23_)
___DEF_M_HLBL(___L3_macro_23_)
___DEF_M_HLBL(___L4_macro_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_register_2d_macro)
___DEF_M_HLBL(___L1_jazz_3a_register_2d_macro)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_macro)
___DEF_M_HLBL(___L1_jazz_3a_get_2d_macro)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_need_2d_macro)
___DEF_M_HLBL(___L1_jazz_3a_need_2d_macro)
___DEF_M_HLBL(___L2_jazz_3a_need_2d_macro)
___DEF_M_HLBL(___L3_jazz_3a_need_2d_macro)
___DEF_M_HLBL(___L4_jazz_3a_need_2d_macro)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_expand_2d_macro)
___DEF_M_HLBL(___L1_jazz_3a_expand_2d_macro)
___DEF_M_HLBL(___L2_jazz_3a_expand_2d_macro)
___DEF_M_HLBL(___L3_jazz_3a_expand_2d_macro)
___DEF_M_HLBL(___L4_jazz_3a_expand_2d_macro)
___DEF_M_HLBL(___L5_jazz_3a_expand_2d_macro)
___DEF_M_HLBL(___L6_jazz_3a_expand_2d_macro)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_macro_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_macro_23_)
___DEF_P_HLBL(___L1_macro_23_)
___DEF_P_HLBL(___L2_macro_23_)
___DEF_P_HLBL(___L3_macro_23_)
___DEF_P_HLBL(___L4_macro_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_macro_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_macro_23_)
   ___SET_STK(1,___R0)
   ___SET_R2(___GLO_eq_3f_)
   ___SET_R1(___KEY_test)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_macro_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),13,___G_make_2d_table)
___DEF_SLBL(2,___L2_macro_23_)
   ___SET_GLO(0,___G_jazz_3a_Macros,___R1)
   ___SET_GLO(4,___G_jazz_3a_register_2d_macro,___PRC(7))
   ___SET_GLO(2,___G_jazz_3a_get_2d_macro,___PRC(10))
   ___SET_GLO(3,___G_jazz_3a_need_2d_macro,___PRC(13))
   ___SET_GLO(1,___G_jazz_3a_expand_2d_macro,___PRC(19))
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_make_2d_parameter)
___DEF_SLBL(3,___L3_macro_23_)
   ___SET_GLO(5,___G_jazz_3a_walk_2d_for,___R1)
   ___SET_R1(___VOID)
   ___POLL(4)
___DEF_SLBL(4,___L4_macro_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_register_2d_macro
#undef ___PH_LBL0
#define ___PH_LBL0 7
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_register_2d_macro)
___DEF_P_HLBL(___L1_jazz_3a_register_2d_macro)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_register_2d_macro)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_register_2d_macro)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_3a_Macros)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_register_2d_macro)
   ___JUMPGLOSAFE(___SET_NARGS(3),15,___G_table_2d_set_21_)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_macro
#undef ___PH_LBL0
#define ___PH_LBL0 10
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_macro)
___DEF_P_HLBL(___L1_jazz_3a_get_2d_macro)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_macro)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_macro)
   ___SET_R2(___R1)
   ___SET_R3(___FAL)
   ___SET_R1(___GLO_jazz_3a_Macros)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_get_2d_macro)
   ___JUMPGLOSAFE(___SET_NARGS(3),14,___G_table_2d_ref)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_need_2d_macro
#undef ___PH_LBL0
#define ___PH_LBL0 13
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_need_2d_macro)
___DEF_P_HLBL(___L1_jazz_3a_need_2d_macro)
___DEF_P_HLBL(___L2_jazz_3a_need_2d_macro)
___DEF_P_HLBL(___L3_jazz_3a_need_2d_macro)
___DEF_P_HLBL(___L4_jazz_3a_need_2d_macro)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_need_2d_macro)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_need_2d_macro)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_need_2d_macro)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_get_2d_macro)
___DEF_SLBL(2,___L2_jazz_3a_need_2d_macro)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L5_jazz_3a_need_2d_macro)
   ___END_IF
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_need_2d_macro)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L5_jazz_3a_need_2d_macro)
   ___SET_R2(___STK(-6))
   ___SET_R1(___SUB(28))
   ___SET_R0(___STK(-7))
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_need_2d_macro)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_3a_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_expand_2d_macro
#undef ___PH_LBL0
#define ___PH_LBL0 19
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_expand_2d_macro)
___DEF_P_HLBL(___L1_jazz_3a_expand_2d_macro)
___DEF_P_HLBL(___L2_jazz_3a_expand_2d_macro)
___DEF_P_HLBL(___L3_jazz_3a_expand_2d_macro)
___DEF_P_HLBL(___L4_jazz_3a_expand_2d_macro)
___DEF_P_HLBL(___L5_jazz_3a_expand_2d_macro)
___DEF_P_HLBL(___L6_jazz_3a_expand_2d_macro)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_expand_2d_macro)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_expand_2d_macro)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(2)
   ___IF(___NOT(___EQP(___GLO_car,___PRM_car)))
   ___GOTO(___L11_jazz_3a_expand_2d_macro)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L10_jazz_3a_expand_2d_macro)
   ___END_IF
   ___SET_R1(___CAR(___R1))
   ___GOTO(___L7_jazz_3a_expand_2d_macro)
___DEF_SLBL(1,___L1_jazz_3a_expand_2d_macro)
   ___ADJFP(-6)
___DEF_GLBL(___L7_jazz_3a_expand_2d_macro)
   ___ADJFP(6)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_3a_expand_2d_macro)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_need_2d_macro)
___DEF_SLBL(3,___L3_jazz_3a_expand_2d_macro)
   ___SET_STK(-5,___R1)
   ___IF(___NOT(___EQP(___GLO_cdr,___PRM_cdr)))
   ___GOTO(___L9_jazz_3a_expand_2d_macro)
   ___END_IF
   ___IF(___NOT(___PAIRP(___STK(-6))))
   ___GOTO(___L9_jazz_3a_expand_2d_macro)
   ___END_IF
   ___SET_R1(___CDR(___STK(-6)))
   ___GOTO(___L8_jazz_3a_expand_2d_macro)
___DEF_SLBL(4,___L4_jazz_3a_expand_2d_macro)
___DEF_GLBL(___L8_jazz_3a_expand_2d_macro)
   ___SET_R2(___R1)
   ___SET_R0(___STK(-7))
   ___SET_R1(___STK(-5))
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_3a_expand_2d_macro)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),7,___G_apply)
___DEF_GLBL(___L9_jazz_3a_expand_2d_macro)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_cdr)
___DEF_GLBL(___L10_jazz_3a_expand_2d_macro)
   ___SET_STK(0,___R1)
   ___SET_R1(___R1)
   ___GOTO(___L12_jazz_3a_expand_2d_macro)
___DEF_GLBL(___L11_jazz_3a_expand_2d_macro)
   ___SET_STK(0,___R1)
   ___SET_R1(___R1)
___DEF_GLBL(___L12_jazz_3a_expand_2d_macro)
   ___ADJFP(6)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_3a_expand_2d_macro)
   ___SET_R0(___LBL(1))
   ___JUMPGLOSAFE(___SET_NARGS(1),8,___G_car)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_macro_23_,"macro#",___REF_SUB(0),5,0)
,___DEF_LBL_PROC(___H_macro_23_,0,-1)
,___DEF_LBL_RET(___H_macro_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_macro_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_macro_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_macro_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_register_2d_macro,0,___REF_SUB(14),2,0)
,___DEF_LBL_PROC(___H_jazz_3a_register_2d_macro,2,-1)
,___DEF_LBL_RET(___H_jazz_3a_register_2d_macro,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_macro,0,___REF_SUB(21),2,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_macro,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_get_2d_macro,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_need_2d_macro,0,___REF_SUB(29),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_need_2d_macro,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_need_2d_macro,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_need_2d_macro,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_need_2d_macro,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_3a_need_2d_macro,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_3a_expand_2d_macro,0,___REF_SUB(42),7,0)
,___DEF_LBL_PROC(___H_jazz_3a_expand_2d_macro,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_expand_2d_macro,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_expand_2d_macro,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_expand_2d_macro,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_expand_2d_macro,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_expand_2d_macro,___IFD(___RETI,8,8,0x3f04L))
,___DEF_LBL_RET(___H_jazz_3a_expand_2d_macro,___IFD(___RETI,8,0,0x3f03L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(6,___G_macro_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(6,___G_macro_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_form,"form")
___DEF_MOD_SYM(1,___S_macro,"macro")
___DEF_MOD_SYM(2,___S_name,"name")
___DEF_MOD_KEY(0,___K_test,"test")
___END_MOD_SYM_KEY

#endif
