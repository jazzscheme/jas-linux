#ifdef ___LINKER_INFO
; File: "autoload.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.process.autoload"
(("bin:jazz.process.autoload"))
(
"Command-Line"
"Process"
"Process-Preferences"
"Quit-Listener"
"Save-Environment-Listener"
"bin:jazz.process.autoload"
"foundation.dialect"
"jazz"
"jazz.process.Command-Line"
"jazz.process.Command-Line:Command-Line"
"jazz.process.Process"
"jazz.process.Process-Preferences"
"jazz.process.Process-Preferences:Process-Preferences"
"jazz.process.Process:Process"
"jazz.process.Quit-Listener"
"jazz.process.Quit-Listener:Quit-Listener"
"jazz.process.Save-Environment-Listener"
"jazz.process.Save-Environment-Listener:Save-Environment-Listener"
"jazz.process.autoload"
"protected"
)
(
)
(
"bin:jazz.process.autoload#"
)
(
)
(
"jazz:load-unit"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.process.autoload"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_process_2e_autoload
#define ___MH_PROC ___H_bin_3a_jazz_2e_process_2e_autoload
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 20
#define ___GLOCOUNT 3
#define ___SUPCOUNT 1
#define ___CNSCOUNT 15
#define ___SUBCOUNT 16
#define ___LBLCOUNT 7
#define ___MODDESCR ___REF_SUB(15)
#include "gambit.h"

___NEED_SYM(___S_Command_2d_Line)
___NEED_SYM(___S_Process)
___NEED_SYM(___S_Process_2d_Preferences)
___NEED_SYM(___S_Quit_2d_Listener)
___NEED_SYM(___S_Save_2d_Environment_2d_Listener)
___NEED_SYM(___S_bin_3a_jazz_2e_process_2e_autoload)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_process_2e_Command_2d_Line)
___NEED_SYM(___S_jazz_2e_process_2e_Command_2d_Line_3a_Command_2d_Line)
___NEED_SYM(___S_jazz_2e_process_2e_Process)
___NEED_SYM(___S_jazz_2e_process_2e_Process_2d_Preferences)
___NEED_SYM(___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
___NEED_SYM(___S_jazz_2e_process_2e_Process_3a_Process)
___NEED_SYM(___S_jazz_2e_process_2e_Quit_2d_Listener)
___NEED_SYM(___S_jazz_2e_process_2e_Quit_2d_Listener_3a_Quit_2d_Listener)
___NEED_SYM(___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener)
___NEED_SYM(___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener_3a_Save_2d_Environment_2d_Listener)
___NEED_SYM(___S_jazz_2e_process_2e_autoload)
___NEED_SYM(___S_protected)

___NEED_GLO(___G_bin_3a_jazz_2e_process_2e_autoload_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_Command_2d_Line,"Command-Line")
___DEF_SYM(1,___S_Process,"Process")
___DEF_SYM(2,___S_Process_2d_Preferences,"Process-Preferences")
___DEF_SYM(3,___S_Quit_2d_Listener,"Quit-Listener")
___DEF_SYM(4,___S_Save_2d_Environment_2d_Listener,"Save-Environment-Listener")
___DEF_SYM(5,___S_bin_3a_jazz_2e_process_2e_autoload,"bin:jazz.process.autoload")
___DEF_SYM(6,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(7,___S_jazz,"jazz")
___DEF_SYM(8,___S_jazz_2e_process_2e_Command_2d_Line,"jazz.process.Command-Line")
___DEF_SYM(9,___S_jazz_2e_process_2e_Command_2d_Line_3a_Command_2d_Line,"jazz.process.Command-Line:Command-Line")

___DEF_SYM(10,___S_jazz_2e_process_2e_Process,"jazz.process.Process")
___DEF_SYM(11,___S_jazz_2e_process_2e_Process_2d_Preferences,"jazz.process.Process-Preferences")

___DEF_SYM(12,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences,"jazz.process.Process-Preferences:Process-Preferences")

___DEF_SYM(13,___S_jazz_2e_process_2e_Process_3a_Process,"jazz.process.Process:Process")
___DEF_SYM(14,___S_jazz_2e_process_2e_Quit_2d_Listener,"jazz.process.Quit-Listener")
___DEF_SYM(15,___S_jazz_2e_process_2e_Quit_2d_Listener_3a_Quit_2d_Listener,"jazz.process.Quit-Listener:Quit-Listener")

___DEF_SYM(16,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener,"jazz.process.Save-Environment-Listener")

___DEF_SYM(17,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener_3a_Save_2d_Environment_2d_Listener,"jazz.process.Save-Environment-Listener:Save-Environment-Listener")

___DEF_SYM(18,___S_jazz_2e_process_2e_autoload,"jazz.process.autoload")
___DEF_SYM(19,___S_protected,"protected")
___END_SYM

#define ___SYM_Command_2d_Line ___SYM(0,___S_Command_2d_Line)
#define ___SYM_Process ___SYM(1,___S_Process)
#define ___SYM_Process_2d_Preferences ___SYM(2,___S_Process_2d_Preferences)
#define ___SYM_Quit_2d_Listener ___SYM(3,___S_Quit_2d_Listener)
#define ___SYM_Save_2d_Environment_2d_Listener ___SYM(4,___S_Save_2d_Environment_2d_Listener)
#define ___SYM_bin_3a_jazz_2e_process_2e_autoload ___SYM(5,___S_bin_3a_jazz_2e_process_2e_autoload)
#define ___SYM_foundation_2e_dialect ___SYM(6,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(7,___S_jazz)
#define ___SYM_jazz_2e_process_2e_Command_2d_Line ___SYM(8,___S_jazz_2e_process_2e_Command_2d_Line)
#define ___SYM_jazz_2e_process_2e_Command_2d_Line_3a_Command_2d_Line ___SYM(9,___S_jazz_2e_process_2e_Command_2d_Line_3a_Command_2d_Line)
#define ___SYM_jazz_2e_process_2e_Process ___SYM(10,___S_jazz_2e_process_2e_Process)
#define ___SYM_jazz_2e_process_2e_Process_2d_Preferences ___SYM(11,___S_jazz_2e_process_2e_Process_2d_Preferences)
#define ___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences ___SYM(12,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
#define ___SYM_jazz_2e_process_2e_Process_3a_Process ___SYM(13,___S_jazz_2e_process_2e_Process_3a_Process)
#define ___SYM_jazz_2e_process_2e_Quit_2d_Listener ___SYM(14,___S_jazz_2e_process_2e_Quit_2d_Listener)
#define ___SYM_jazz_2e_process_2e_Quit_2d_Listener_3a_Quit_2d_Listener ___SYM(15,___S_jazz_2e_process_2e_Quit_2d_Listener_3a_Quit_2d_Listener)
#define ___SYM_jazz_2e_process_2e_Save_2d_Environment_2d_Listener ___SYM(16,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener)
#define ___SYM_jazz_2e_process_2e_Save_2d_Environment_2d_Listener_3a_Save_2d_Environment_2d_Listener ___SYM(17,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener_3a_Save_2d_Environment_2d_Listener)
#define ___SYM_jazz_2e_process_2e_autoload ___SYM(18,___S_jazz_2e_process_2e_autoload)
#define ___SYM_protected ___SYM(19,___S_protected)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.process.autoload#")
___DEF_GLO(1,"jazz:load-unit")
___DEF_GLO(2,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_process_2e_autoload_23_ ___GLO(0,___G_bin_3a_jazz_2e_process_2e_autoload_23_)
#define ___PRM_bin_3a_jazz_2e_process_2e_autoload_23_ ___PRM(0,___G_bin_3a_jazz_2e_process_2e_autoload_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(2,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(2,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(3))
,___DEF_CNS(___REF_SYM(0,___S_Command_2d_Line),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(8,___S_jazz_2e_process_2e_Command_2d_Line),___REF_SYM(9,___S_jazz_2e_process_2e_Command_2d_Line_3a_Command_2d_Line))
,___DEF_CNS(___REF_CNS(4),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(1,___S_Process),___REF_CNS(5))
,___DEF_CNS(___REF_SYM(10,___S_jazz_2e_process_2e_Process),___REF_SYM(13,___S_jazz_2e_process_2e_Process_3a_Process))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(9))
,___DEF_CNS(___REF_SYM(2,___S_Process_2d_Preferences),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(11,___S_jazz_2e_process_2e_Process_2d_Preferences),___REF_SYM(12,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences))
,___DEF_CNS(___REF_CNS(10),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(3,___S_Quit_2d_Listener),___REF_CNS(11))
,___DEF_CNS(___REF_SYM(14,___S_jazz_2e_process_2e_Quit_2d_Listener),___REF_SYM(15,___S_jazz_2e_process_2e_Quit_2d_Listener_3a_Quit_2d_Listener))
,___DEF_CNS(___REF_CNS(13),___REF_NUL)
,___DEF_CNS(___REF_SYM(4,___S_Save_2d_Environment_2d_Listener),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(16,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener),___REF_SYM(17,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener_3a_Save_2d_Environment_2d_Listener))
___END_CNS

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
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_autoload))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_autoload))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_autoload))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_autoload))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_autoload))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_autoload))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,0UL)
               ___VEC0
___DEF_SUB_VEC(___X15,5UL)
               ___VEC1(___REF_SYM(5,___S_bin_3a_jazz_2e_process_2e_autoload))
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
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_process_2e_autoload_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_process_2e_autoload_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_process_2e_autoload_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_process_2e_autoload_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___SET_STK(1,___SYM_jazz_2e_process_2e_autoload)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___POLL(5)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_process_2e_autoload_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_process_2e_autoload_23_,"bin:jazz.process.autoload#",___REF_SUB(0)
,6,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_autoload_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_autoload_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_autoload_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_autoload_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_autoload_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_autoload_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_process_2e_autoload_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_process_2e_autoload_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Command_2d_Line,"Command-Line")
___DEF_MOD_SYM(1,___S_Process,"Process")
___DEF_MOD_SYM(2,___S_Process_2d_Preferences,"Process-Preferences")
___DEF_MOD_SYM(3,___S_Quit_2d_Listener,"Quit-Listener")
___DEF_MOD_SYM(4,___S_Save_2d_Environment_2d_Listener,"Save-Environment-Listener")
___DEF_MOD_SYM(5,___S_bin_3a_jazz_2e_process_2e_autoload,"bin:jazz.process.autoload")
___DEF_MOD_SYM(6,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(7,___S_jazz,"jazz")
___DEF_MOD_SYM(8,___S_jazz_2e_process_2e_Command_2d_Line,"jazz.process.Command-Line")
___DEF_MOD_SYM(9,___S_jazz_2e_process_2e_Command_2d_Line_3a_Command_2d_Line,"jazz.process.Command-Line:Command-Line")

___DEF_MOD_SYM(10,___S_jazz_2e_process_2e_Process,"jazz.process.Process")
___DEF_MOD_SYM(11,___S_jazz_2e_process_2e_Process_2d_Preferences,"jazz.process.Process-Preferences")

___DEF_MOD_SYM(12,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences,"jazz.process.Process-Preferences:Process-Preferences")

___DEF_MOD_SYM(13,___S_jazz_2e_process_2e_Process_3a_Process,"jazz.process.Process:Process")
___DEF_MOD_SYM(14,___S_jazz_2e_process_2e_Quit_2d_Listener,"jazz.process.Quit-Listener")
___DEF_MOD_SYM(15,___S_jazz_2e_process_2e_Quit_2d_Listener_3a_Quit_2d_Listener,"jazz.process.Quit-Listener:Quit-Listener")

___DEF_MOD_SYM(16,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener,"jazz.process.Save-Environment-Listener")

___DEF_MOD_SYM(17,___S_jazz_2e_process_2e_Save_2d_Environment_2d_Listener_3a_Save_2d_Environment_2d_Listener,"jazz.process.Save-Environment-Listener:Save-Environment-Listener")

___DEF_MOD_SYM(18,___S_jazz_2e_process_2e_autoload,"jazz.process.autoload")
___DEF_MOD_SYM(19,___S_protected,"protected")
___END_MOD_SYM_KEY

#endif
