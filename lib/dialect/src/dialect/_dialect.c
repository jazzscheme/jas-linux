#ifdef ___LINKER_INFO
; File: "_dialect.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:dialect"
(("bin:dialect"))
(
"backend.runtime"
"backend.scheme.runtime"
"backend.syntax"
"bin:dialect"
"core.class"
"core.exception"
"core.generic"
"dialect"
"dialect.expression"
"dialect.runtime"
"dialect.syntax"
)
(
)
(
"bin:dialect#"
)
(
)
(
"jazz:load-unit"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:dialect"
#define ___LINKER_ID ___LNK_bin_3a_dialect
#define ___MH_PROC ___H_bin_3a_dialect
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 11
#define ___GLOCOUNT 2
#define ___SUPCOUNT 1
#define ___SUBCOUNT 28
#define ___LBLCOUNT 13
#define ___MODDESCR ___REF_SUB(27)
#include "gambit.h"

___NEED_SYM(___S_backend_2e_runtime)
___NEED_SYM(___S_backend_2e_scheme_2e_runtime)
___NEED_SYM(___S_backend_2e_syntax)
___NEED_SYM(___S_bin_3a_dialect)
___NEED_SYM(___S_core_2e_class)
___NEED_SYM(___S_core_2e_exception)
___NEED_SYM(___S_core_2e_generic)
___NEED_SYM(___S_dialect)
___NEED_SYM(___S_dialect_2e_expression)
___NEED_SYM(___S_dialect_2e_runtime)
___NEED_SYM(___S_dialect_2e_syntax)

___NEED_GLO(___G_bin_3a_dialect_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)

___BEGIN_SYM
___DEF_SYM(0,___S_backend_2e_runtime,"backend.runtime")
___DEF_SYM(1,___S_backend_2e_scheme_2e_runtime,"backend.scheme.runtime")
___DEF_SYM(2,___S_backend_2e_syntax,"backend.syntax")
___DEF_SYM(3,___S_bin_3a_dialect,"bin:dialect")
___DEF_SYM(4,___S_core_2e_class,"core.class")
___DEF_SYM(5,___S_core_2e_exception,"core.exception")
___DEF_SYM(6,___S_core_2e_generic,"core.generic")
___DEF_SYM(7,___S_dialect,"dialect")
___DEF_SYM(8,___S_dialect_2e_expression,"dialect.expression")
___DEF_SYM(9,___S_dialect_2e_runtime,"dialect.runtime")
___DEF_SYM(10,___S_dialect_2e_syntax,"dialect.syntax")
___END_SYM

#define ___SYM_backend_2e_runtime ___SYM(0,___S_backend_2e_runtime)
#define ___SYM_backend_2e_scheme_2e_runtime ___SYM(1,___S_backend_2e_scheme_2e_runtime)
#define ___SYM_backend_2e_syntax ___SYM(2,___S_backend_2e_syntax)
#define ___SYM_bin_3a_dialect ___SYM(3,___S_bin_3a_dialect)
#define ___SYM_core_2e_class ___SYM(4,___S_core_2e_class)
#define ___SYM_core_2e_exception ___SYM(5,___S_core_2e_exception)
#define ___SYM_core_2e_generic ___SYM(6,___S_core_2e_generic)
#define ___SYM_dialect ___SYM(7,___S_dialect)
#define ___SYM_dialect_2e_expression ___SYM(8,___S_dialect_2e_expression)
#define ___SYM_dialect_2e_runtime ___SYM(9,___S_dialect_2e_runtime)
#define ___SYM_dialect_2e_syntax ___SYM(10,___S_dialect_2e_syntax)

___BEGIN_GLO
___DEF_GLO(0,"bin:dialect#")
___DEF_GLO(1,"jazz:load-unit")
___END_GLO

#define ___GLO_bin_3a_dialect_23_ ___GLO(0,___G_bin_3a_dialect_23_)
#define ___PRM_bin_3a_dialect_23_ ___PRM(0,___G_bin_3a_dialect_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X1,12UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(7,___S_dialect))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X26,0UL)
               ___VEC0
___DEF_SUB_VEC(___X27,5UL)
               ___VEC1(___REF_SYM(3,___S_bin_3a_dialect))
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
___DEF_M_HLBL(___L0_bin_3a_dialect_23_)
___DEF_M_HLBL(___L1_bin_3a_dialect_23_)
___DEF_M_HLBL(___L2_bin_3a_dialect_23_)
___DEF_M_HLBL(___L3_bin_3a_dialect_23_)
___DEF_M_HLBL(___L4_bin_3a_dialect_23_)
___DEF_M_HLBL(___L5_bin_3a_dialect_23_)
___DEF_M_HLBL(___L6_bin_3a_dialect_23_)
___DEF_M_HLBL(___L7_bin_3a_dialect_23_)
___DEF_M_HLBL(___L8_bin_3a_dialect_23_)
___DEF_M_HLBL(___L9_bin_3a_dialect_23_)
___DEF_M_HLBL(___L10_bin_3a_dialect_23_)
___DEF_M_HLBL(___L11_bin_3a_dialect_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_dialect_23_
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
___DEF_P_HLBL(___L0_bin_3a_dialect_23_)
___DEF_P_HLBL(___L1_bin_3a_dialect_23_)
___DEF_P_HLBL(___L2_bin_3a_dialect_23_)
___DEF_P_HLBL(___L3_bin_3a_dialect_23_)
___DEF_P_HLBL(___L4_bin_3a_dialect_23_)
___DEF_P_HLBL(___L5_bin_3a_dialect_23_)
___DEF_P_HLBL(___L6_bin_3a_dialect_23_)
___DEF_P_HLBL(___L7_bin_3a_dialect_23_)
___DEF_P_HLBL(___L8_bin_3a_dialect_23_)
___DEF_P_HLBL(___L9_bin_3a_dialect_23_)
___DEF_P_HLBL(___L10_bin_3a_dialect_23_)
___DEF_P_HLBL(___L11_bin_3a_dialect_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_dialect_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_dialect_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_core_2e_class)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_dialect_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_dialect_23_)
   ___SET_R1(___SYM_core_2e_generic)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_dialect_23_)
   ___SET_R1(___SYM_core_2e_exception)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_dialect_23_)
   ___SET_R1(___SYM_backend_2e_syntax)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_dialect_23_)
   ___SET_R1(___SYM_backend_2e_runtime)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(6,___L6_bin_3a_dialect_23_)
   ___SET_R1(___SYM_dialect_2e_syntax)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(7,___L7_bin_3a_dialect_23_)
   ___SET_R1(___SYM_dialect_2e_runtime)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(8,___L8_bin_3a_dialect_23_)
   ___SET_R1(___SYM_dialect_2e_expression)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(9,___L9_bin_3a_dialect_23_)
   ___SET_R1(___SYM_backend_2e_scheme_2e_runtime)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(10,___L10_bin_3a_dialect_23_)
   ___POLL(11)
___DEF_SLBL(11,___L11_bin_3a_dialect_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_dialect_23_,"bin:dialect#",___REF_SUB(0),12,0)
,___DEF_LBL_PROC(___H_bin_3a_dialect_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_dialect_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_dialect_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_dialect_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_backend_2e_runtime,"backend.runtime")
___DEF_MOD_SYM(1,___S_backend_2e_scheme_2e_runtime,"backend.scheme.runtime")
___DEF_MOD_SYM(2,___S_backend_2e_syntax,"backend.syntax")
___DEF_MOD_SYM(3,___S_bin_3a_dialect,"bin:dialect")
___DEF_MOD_SYM(4,___S_core_2e_class,"core.class")
___DEF_MOD_SYM(5,___S_core_2e_exception,"core.exception")
___DEF_MOD_SYM(6,___S_core_2e_generic,"core.generic")
___DEF_MOD_SYM(7,___S_dialect,"dialect")
___DEF_MOD_SYM(8,___S_dialect_2e_expression,"dialect.expression")
___DEF_MOD_SYM(9,___S_dialect_2e_runtime,"dialect.runtime")
___DEF_MOD_SYM(10,___S_dialect_2e_syntax,"dialect.syntax")
___END_MOD_SYM_KEY

#endif
