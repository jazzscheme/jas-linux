#ifdef ___LINKER_INFO
; File: "_scheme.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:backend.scheme"
(("bin:backend.scheme"))
(
"backend.scheme"
"backend.syntax"
"bin:backend.scheme"
"scheme"
)
(
)
(
"bin:backend.scheme#"
)
(
)
(
"jazz:load-unit"
"jazz:new-backend"
"jazz:register-backend"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:backend.scheme"
#define ___LINKER_ID ___LNK_bin_3a_backend_2e_scheme
#define ___MH_PROC ___H_bin_3a_backend_2e_scheme
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 4
#define ___GLOCOUNT 4
#define ___SUPCOUNT 1
#define ___SUBCOUNT 16
#define ___LBLCOUNT 7
#define ___MODDESCR ___REF_SUB(15)
#include "gambit.h"

___NEED_SYM(___S_backend_2e_scheme)
___NEED_SYM(___S_backend_2e_syntax)
___NEED_SYM(___S_bin_3a_backend_2e_scheme)
___NEED_SYM(___S_scheme)

___NEED_GLO(___G_bin_3a_backend_2e_scheme_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_backend)
___NEED_GLO(___G_jazz_3a_register_2d_backend)

___BEGIN_SYM
___DEF_SYM(0,___S_backend_2e_scheme,"backend.scheme")
___DEF_SYM(1,___S_backend_2e_syntax,"backend.syntax")
___DEF_SYM(2,___S_bin_3a_backend_2e_scheme,"bin:backend.scheme")
___DEF_SYM(3,___S_scheme,"scheme")
___END_SYM

#define ___SYM_backend_2e_scheme ___SYM(0,___S_backend_2e_scheme)
#define ___SYM_backend_2e_syntax ___SYM(1,___S_backend_2e_syntax)
#define ___SYM_bin_3a_backend_2e_scheme ___SYM(2,___S_bin_3a_backend_2e_scheme)
#define ___SYM_scheme ___SYM(3,___S_scheme)

___BEGIN_GLO
___DEF_GLO(0,"bin:backend.scheme#")
___DEF_GLO(1,"jazz:load-unit")
___DEF_GLO(2,"jazz:new-backend")
___DEF_GLO(3,"jazz:register-backend")
___END_GLO

#define ___GLO_bin_3a_backend_2e_scheme_23_ ___GLO(0,___G_bin_3a_backend_2e_scheme_23_)
#define ___PRM_bin_3a_backend_2e_scheme_23_ ___PRM(0,___G_bin_3a_backend_2e_scheme_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_backend ___GLO(2,___G_jazz_3a_new_2d_backend)
#define ___PRM_jazz_3a_new_2d_backend ___PRM(2,___G_jazz_3a_new_2d_backend)
#define ___GLO_jazz_3a_register_2d_backend ___GLO(3,___G_jazz_3a_register_2d_backend)
#define ___PRM_jazz_3a_register_2d_backend ___PRM(3,___G_jazz_3a_register_2d_backend)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X1,6UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_SUB(10))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(0,___S_backend_2e_scheme))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(0,___S_backend_2e_scheme))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(0,___S_backend_2e_scheme))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(0,___S_backend_2e_scheme))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(0,___S_backend_2e_scheme))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(0,___S_backend_2e_scheme))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X14,0UL)
               ___VEC0
___DEF_SUB_VEC(___X15,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_backend_2e_scheme))
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
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_bin_3a_backend_2e_scheme_23_)
___DEF_M_HLBL(___L1_bin_3a_backend_2e_scheme_23_)
___DEF_M_HLBL(___L2_bin_3a_backend_2e_scheme_23_)
___DEF_M_HLBL(___L3_bin_3a_backend_2e_scheme_23_)
___DEF_M_HLBL(___L4_bin_3a_backend_2e_scheme_23_)
___DEF_M_HLBL(___L5_bin_3a_backend_2e_scheme_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_backend_2e_scheme_23_
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
___DEF_P_HLBL(___L0_bin_3a_backend_2e_scheme_23_)
___DEF_P_HLBL(___L1_bin_3a_backend_2e_scheme_23_)
___DEF_P_HLBL(___L2_bin_3a_backend_2e_scheme_23_)
___DEF_P_HLBL(___L3_bin_3a_backend_2e_scheme_23_)
___DEF_P_HLBL(___L4_bin_3a_backend_2e_scheme_23_)
___DEF_P_HLBL(___L5_bin_3a_backend_2e_scheme_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_backend_2e_scheme_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_backend_2e_scheme_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_backend_2e_syntax)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_backend_2e_scheme_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_backend_2e_scheme_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_new_2d_backend)
___DEF_SLBL(3,___L3_bin_3a_backend_2e_scheme_23_)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_register_2d_backend)
___DEF_SLBL(4,___L4_bin_3a_backend_2e_scheme_23_)
   ___POLL(5)
___DEF_SLBL(5,___L5_bin_3a_backend_2e_scheme_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_backend_2e_scheme_23_,"bin:backend.scheme#",___REF_SUB(0),6,0)
,___DEF_LBL_PROC(___H_bin_3a_backend_2e_scheme_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_backend_2e_scheme_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_scheme_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_backend_2e_scheme_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_backend_2e_scheme_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_backend_2e_scheme,"backend.scheme")
___DEF_MOD_SYM(1,___S_backend_2e_syntax,"backend.syntax")
___DEF_MOD_SYM(2,___S_bin_3a_backend_2e_scheme,"bin:backend.scheme")
___DEF_MOD_SYM(3,___S_scheme,"scheme")
___END_MOD_SYM_KEY

#endif
