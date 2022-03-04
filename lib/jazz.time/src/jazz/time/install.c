#ifdef ___LINKER_INFO
; File: "install.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.time.install"
(("bin:jazz.time.install"))
(
"Date"
"Time"
"arguments"
"bin:jazz.time.install"
"jazz.time"
"jazz.time.install"
"jazz.time:construct-date"
"jazz.time:construct-time"
)
(
)
(
"bin:jazz.time.install#"
)
(
)
(
"##apply"
"jazz:global-ref"
"jazz:load-unit"
"jazz:register-literal-constructor"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.time.install"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_time_2e_install
#define ___MH_PROC ___H_bin_3a_jazz_2e_time_2e_install
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 8
#define ___GLOCOUNT 5
#define ___SUPCOUNT 1
#define ___SUBCOUNT 38
#define ___LBLCOUNT 18
#define ___MODDESCR ___REF_SUB(37)
#include "gambit.h"

___NEED_SYM(___S_Date)
___NEED_SYM(___S_Time)
___NEED_SYM(___S_arguments)
___NEED_SYM(___S_bin_3a_jazz_2e_time_2e_install)
___NEED_SYM(___S_jazz_2e_time)
___NEED_SYM(___S_jazz_2e_time_2e_install)
___NEED_SYM(___S_jazz_2e_time_3a_construct_2d_date)
___NEED_SYM(___S_jazz_2e_time_3a_construct_2d_time)

___NEED_GLO(___G__23__23_apply)
___NEED_GLO(___G_bin_3a_jazz_2e_time_2e_install_23_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_literal_2d_constructor)

___BEGIN_SYM
___DEF_SYM(0,___S_Date,"Date")
___DEF_SYM(1,___S_Time,"Time")
___DEF_SYM(2,___S_arguments,"arguments")
___DEF_SYM(3,___S_bin_3a_jazz_2e_time_2e_install,"bin:jazz.time.install")
___DEF_SYM(4,___S_jazz_2e_time,"jazz.time")
___DEF_SYM(5,___S_jazz_2e_time_2e_install,"jazz.time.install")
___DEF_SYM(6,___S_jazz_2e_time_3a_construct_2d_date,"jazz.time:construct-date")
___DEF_SYM(7,___S_jazz_2e_time_3a_construct_2d_time,"jazz.time:construct-time")
___END_SYM

#define ___SYM_Date ___SYM(0,___S_Date)
#define ___SYM_Time ___SYM(1,___S_Time)
#define ___SYM_arguments ___SYM(2,___S_arguments)
#define ___SYM_bin_3a_jazz_2e_time_2e_install ___SYM(3,___S_bin_3a_jazz_2e_time_2e_install)
#define ___SYM_jazz_2e_time ___SYM(4,___S_jazz_2e_time)
#define ___SYM_jazz_2e_time_2e_install ___SYM(5,___S_jazz_2e_time_2e_install)
#define ___SYM_jazz_2e_time_3a_construct_2d_date ___SYM(6,___S_jazz_2e_time_3a_construct_2d_date)
#define ___SYM_jazz_2e_time_3a_construct_2d_time ___SYM(7,___S_jazz_2e_time_3a_construct_2d_time)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.time.install#")
___DEF_GLO(1,"##apply")
___DEF_GLO(2,"jazz:global-ref")
___DEF_GLO(3,"jazz:load-unit")
___DEF_GLO(4,"jazz:register-literal-constructor")

___END_GLO

#define ___GLO_bin_3a_jazz_2e_time_2e_install_23_ ___GLO(0,___G_bin_3a_jazz_2e_time_2e_install_23_)
#define ___PRM_bin_3a_jazz_2e_time_2e_install_23_ ___PRM(0,___G_bin_3a_jazz_2e_time_2e_install_23_)
#define ___GLO__23__23_apply ___GLO(1,___G__23__23_apply)
#define ___PRM__23__23_apply ___PRM(1,___G__23__23_apply)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(2,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(2,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(3,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(3,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_literal_2d_constructor ___GLO(4,___G_jazz_3a_register_2d_literal_2d_constructor)
#define ___PRM_jazz_3a_register_2d_literal_2d_constructor ___PRM(4,___G_jazz_3a_register_2d_literal_2d_constructor)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X1,17UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X14,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X16,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X18,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X20,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X22,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X26,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X28,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X30,3UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X32,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X34,3UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_time_2e_install))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X36,1UL)
               ___VEC1(___REF_SYM(2,___S_arguments))
               ___VEC0
___DEF_SUB_VEC(___X37,5UL)
               ___VEC1(___REF_SYM(3,___S_bin_3a_jazz_2e_time_2e_install))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_time_2e_install_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_time_2e_install_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_time_2e_install_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_time_2e_install_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_time_2e_install_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_STK(1,___R0)
   ___SET_R3(___LBL(11))
   ___SET_R2(___SYM_jazz_2e_time_3a_construct_2d_date)
   ___SET_R1(___SYM_Date)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(3),4,___G_jazz_3a_register_2d_literal_2d_constructor)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R3(___LBL(5))
   ___SET_R2(___SYM_jazz_2e_time_3a_construct_2d_time)
   ___SET_R1(___SYM_Time)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),4,___G_jazz_3a_register_2d_literal_2d_constructor)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_time_2e_install_23_)
   ___POLL(4)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_time_2e_install_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_time_2e_install_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(5,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___SYM_jazz_2e_time)
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R1(___SYM_jazz_2e_time_3a_construct_2d_time)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R2(___STK(-6))
   ___SET_R0(___LBL(9))
   ___JUMPPRM(___SET_NARGS(2),___PRM__23__23_apply)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_time_2e_install_23_)
   ___POLL(10)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_time_2e_install_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_time_2e_install_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(11,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___SYM_jazz_2e_time)
   ___ADJFP(8)
   ___POLL(12)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R1(___SYM_jazz_2e_time_3a_construct_2d_date)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_time_2e_install_23_)
   ___SET_R2(___STK(-6))
   ___SET_R0(___LBL(15))
   ___JUMPPRM(___SET_NARGS(2),___PRM__23__23_apply)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_time_2e_install_23_)
   ___POLL(16)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_time_2e_install_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_time_2e_install_23_,"bin:jazz.time.install#",___REF_SUB(0),17,
0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_time_2e_install_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_time_2e_install_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_time_2e_install_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_time_2e_install_23_,___IFD(___RETI,8,0,0x3f03L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_time_2e_install_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_time_2e_install_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Date,"Date")
___DEF_MOD_SYM(1,___S_Time,"Time")
___DEF_MOD_SYM(2,___S_arguments,"arguments")
___DEF_MOD_SYM(3,___S_bin_3a_jazz_2e_time_2e_install,"bin:jazz.time.install")
___DEF_MOD_SYM(4,___S_jazz_2e_time,"jazz.time")
___DEF_MOD_SYM(5,___S_jazz_2e_time_2e_install,"jazz.time.install")
___DEF_MOD_SYM(6,___S_jazz_2e_time_3a_construct_2d_date,"jazz.time:construct-date")
___DEF_MOD_SYM(7,___S_jazz_2e_time_3a_construct_2d_time,"jazz.time:construct-time")
___END_MOD_SYM_KEY

#endif
