#ifdef ___LINKER_INFO
; File: "setup.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.debuggee.setup"
(("bin:jazz.debuggee.setup"))
(
"bin:jazz.debuggee.setup"
"foundation.dialect"
"jazz"
"jazz.debuggee"
"jazz.debuggee.setup"
"public"
)
(
)
(
"bin:jazz.debuggee.setup#"
)
(
)
(
"jazz.debuggee:setup-debuggee"
"jazz:load-unit"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.debuggee.setup"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_debuggee_2e_setup
#define ___MH_PROC ___H_bin_3a_jazz_2e_debuggee_2e_setup
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 6
#define ___GLOCOUNT 4
#define ___SUPCOUNT 1
#define ___SUBCOUNT 20
#define ___LBLCOUNT 9
#define ___MODDESCR ___REF_SUB(19)
#include "gambit.h"

___NEED_SYM(___S_bin_3a_jazz_2e_debuggee_2e_setup)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_debuggee)
___NEED_SYM(___S_jazz_2e_debuggee_2e_setup)
___NEED_SYM(___S_public)

___NEED_GLO(___G_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___NEED_GLO(___G_jazz_2e_debuggee_3a_setup_2d_debuggee)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_bin_3a_jazz_2e_debuggee_2e_setup,"bin:jazz.debuggee.setup")
___DEF_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(2,___S_jazz,"jazz")
___DEF_SYM(3,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_SYM(4,___S_jazz_2e_debuggee_2e_setup,"jazz.debuggee.setup")
___DEF_SYM(5,___S_public,"public")
___END_SYM

#define ___SYM_bin_3a_jazz_2e_debuggee_2e_setup ___SYM(0,___S_bin_3a_jazz_2e_debuggee_2e_setup)
#define ___SYM_foundation_2e_dialect ___SYM(1,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(2,___S_jazz)
#define ___SYM_jazz_2e_debuggee ___SYM(3,___S_jazz_2e_debuggee)
#define ___SYM_jazz_2e_debuggee_2e_setup ___SYM(4,___S_jazz_2e_debuggee_2e_setup)
#define ___SYM_public ___SYM(5,___S_public)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.debuggee.setup#")
___DEF_GLO(1,"jazz.debuggee:setup-debuggee")
___DEF_GLO(2,"jazz:load-unit")
___DEF_GLO(3,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_debuggee_2e_setup_23_ ___GLO(0,___G_bin_3a_jazz_2e_debuggee_2e_setup_23_)
#define ___PRM_bin_3a_jazz_2e_debuggee_2e_setup_23_ ___PRM(0,___G_bin_3a_jazz_2e_debuggee_2e_setup_23_)
#define ___GLO_jazz_2e_debuggee_3a_setup_2d_debuggee ___GLO(1,___G_jazz_2e_debuggee_3a_setup_2d_debuggee)
#define ___PRM_jazz_2e_debuggee_3a_setup_2d_debuggee ___PRM(1,___G_jazz_2e_debuggee_3a_setup_2d_debuggee)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(2,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(2,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(3,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(3,___G_jazz_3a_register_2d_module)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X1,8UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_SUB(10))
               ___VEC1(___REF_SUB(12))
               ___VEC1(___REF_SUB(14))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(4,___S_jazz_2e_debuggee_2e_setup))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X18,0UL)
               ___VEC0
___DEF_SUB_VEC(___X19,5UL)
               ___VEC1(___REF_SYM(0,___S_bin_3a_jazz_2e_debuggee_2e_setup))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_debuggee_2e_setup_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_debuggee_2e_setup_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___SET_STK(1,___SYM_jazz_2e_debuggee_2e_setup)
   ___SET_R3(___NUL)
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),3,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_3a_setup_2d_debuggee)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___POLL(7)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_debuggee_2e_setup_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,"bin:jazz.debuggee.setup#",___REF_SUB(0),
8,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_setup_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_debuggee_2e_setup_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_debuggee_2e_setup_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_bin_3a_jazz_2e_debuggee_2e_setup,"bin:jazz.debuggee.setup")
___DEF_MOD_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(2,___S_jazz,"jazz")
___DEF_MOD_SYM(3,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_MOD_SYM(4,___S_jazz_2e_debuggee_2e_setup,"jazz.debuggee.setup")
___DEF_MOD_SYM(5,___S_public,"public")
___END_MOD_SYM_KEY

#endif
