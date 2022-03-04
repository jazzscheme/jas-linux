#ifdef ___LINKER_INFO
; File: "embedded.c", produced by Gambit v4.8.9
(
408009
(C)
"embedded"
(("embedded"))
(
"boot"
"embedded"
"foundation.dialect"
"func"
"jazz"
"jazz.language.runtime.functional:thread-process"
"kernel.embedded"
)
(
"timeout"
)
(
"embedded#"
)
(
"jazz:jazz-heartbeat"
"launch-application"
)
(
"##global-var?"
"jazz:load-unit"
"jazz:run-registered"
"jazz:thread-heartbeat!"
"jazz:verbose-kernel"
"string->symbol"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "embedded"
#define ___LINKER_ID ___LNK_embedded
#define ___MH_PROC ___H_embedded
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 7
#define ___KEYCOUNT 1
#define ___GLOCOUNT 9
#define ___SUPCOUNT 3
#define ___SUBCOUNT 47
#define ___LBLCOUNT 21
#define ___MODDESCR ___REF_SUB(46)
#include "gambit.h"

___NEED_SYM(___S_boot)
___NEED_SYM(___S_embedded)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_func)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process)
___NEED_SYM(___S_kernel_2e_embedded)

___NEED_KEY(___K_timeout)

___NEED_GLO(___G__23__23_global_2d_var_3f_)
___NEED_GLO(___G_embedded_23_)
___NEED_GLO(___G_jazz_3a_jazz_2d_heartbeat)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_run_2d_registered)
___NEED_GLO(___G_jazz_3a_thread_2d_heartbeat_21_)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_launch_2d_application)
___NEED_GLO(___G_string_2d__3e_symbol)

___BEGIN_SYM
___DEF_SYM(0,___S_boot,"boot")
___DEF_SYM(1,___S_embedded,"embedded")
___DEF_SYM(2,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(3,___S_func,"func")
___DEF_SYM(4,___S_jazz,"jazz")
___DEF_SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process,"jazz.language.runtime.functional:thread-process")

___DEF_SYM(6,___S_kernel_2e_embedded,"kernel.embedded")
___END_SYM

#define ___SYM_boot ___SYM(0,___S_boot)
#define ___SYM_embedded ___SYM(1,___S_embedded)
#define ___SYM_foundation_2e_dialect ___SYM(2,___S_foundation_2e_dialect)
#define ___SYM_func ___SYM(3,___S_func)
#define ___SYM_jazz ___SYM(4,___S_jazz)
#define ___SYM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process ___SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process)
#define ___SYM_kernel_2e_embedded ___SYM(6,___S_kernel_2e_embedded)

___BEGIN_KEY
___DEF_KEY(0,___K_timeout,"timeout")
___END_KEY

#define ___KEY_timeout ___KEY(0,___K_timeout)

___BEGIN_GLO
___DEF_GLO(0,"embedded#")
___DEF_GLO(1,"jazz:jazz-heartbeat")
___DEF_GLO(2,"launch-application")
___DEF_GLO(3,"##global-var?")
___DEF_GLO(4,"jazz:load-unit")
___DEF_GLO(5,"jazz:run-registered")
___DEF_GLO(6,"jazz:thread-heartbeat!")
___DEF_GLO(7,"jazz:verbose-kernel")
___DEF_GLO(8,"string->symbol")
___END_GLO

#define ___GLO_embedded_23_ ___GLO(0,___G_embedded_23_)
#define ___PRM_embedded_23_ ___PRM(0,___G_embedded_23_)
#define ___GLO_jazz_3a_jazz_2d_heartbeat ___GLO(1,___G_jazz_3a_jazz_2d_heartbeat)
#define ___PRM_jazz_3a_jazz_2d_heartbeat ___PRM(1,___G_jazz_3a_jazz_2d_heartbeat)
#define ___GLO_launch_2d_application ___GLO(2,___G_launch_2d_application)
#define ___PRM_launch_2d_application ___PRM(2,___G_launch_2d_application)
#define ___GLO__23__23_global_2d_var_3f_ ___GLO(3,___G__23__23_global_2d_var_3f_)
#define ___PRM__23__23_global_2d_var_3f_ ___PRM(3,___G__23__23_global_2d_var_3f_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(4,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(4,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_run_2d_registered ___GLO(5,___G_jazz_3a_run_2d_registered)
#define ___PRM_jazz_3a_run_2d_registered ___PRM(5,___G_jazz_3a_run_2d_registered)
#define ___GLO_jazz_3a_thread_2d_heartbeat_21_ ___GLO(6,___G_jazz_3a_thread_2d_heartbeat_21_)
#define ___PRM_jazz_3a_thread_2d_heartbeat_21_ ___PRM(6,___G_jazz_3a_thread_2d_heartbeat_21_)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(7,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(7,___G_jazz_3a_verbose_2d_kernel)
#define ___GLO_string_2d__3e_symbol ___GLO(8,___G_string_2d__3e_symbol)
#define ___PRM_string_2d__3e_symbol ___PRM(8,___G_string_2d__3e_symbol)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X1,4UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(7))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,57UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,101,109,98)
               ___STR8(101,100,100,101,100,46,115,99)
               ___STR1(109)
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(6))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X11,0UL)
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(13))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X13,7UL)
               ___VEC1(___REF_SUB(14))
               ___VEC1(___REF_SUB(16))
               ___VEC1(___REF_SUB(18))
               ___VEC1(___REF_SUB(20))
               ___VEC1(___REF_SUB(22))
               ___VEC1(___REF_SUB(24))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X16,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(17))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131118))
               ___VEC0
___DEF_SUB_VEC(___X18,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(19))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131118))
               ___VEC0
___DEF_SUB_VEC(___X20,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(917552))
               ___VEC0
___DEF_SUB_VEC(___X24,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262193))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262194))
               ___VEC0
___DEF_SUB_VEC(___X28,1UL)
               ___VEC1(___REF_SYM(0,___S_boot))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X30,7UL)
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(34))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131131))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131131))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524349))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(655423))
               ___VEC0
___DEF_SUB_VEC(___X41,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(917568))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262205))
               ___VEC0
___DEF_SUB_VEC(___X45,1UL)
               ___VEC1(___REF_SYM(3,___S_func))
               ___VEC0
___DEF_SUB_VEC(___X46,5UL)
               ___VEC1(___REF_SYM(1,___S_embedded))
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
___END_SUB


#define ___C_LBL_launch_application 6
#define ___C_LBL_jazz_heartbeat 14

 void launch_application ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_launch_application))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern void jazz_heartbeat ___PVOID
{
#define ___NARGS 0
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_jazz_heartbeat))
___BEGIN_SFUN_BODY
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}


#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_embedded_23_)
___DEF_M_HLBL(___L1_embedded_23_)
___DEF_M_HLBL(___L2_embedded_23_)
___DEF_M_HLBL(___L3_embedded_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_launch_2d_application)
___DEF_M_HLBL(___L1_launch_2d_application)
___DEF_M_HLBL(___L2_launch_2d_application)
___DEF_M_HLBL(___L3_launch_2d_application)
___DEF_M_HLBL(___L4_launch_2d_application)
___DEF_M_HLBL(___L5_launch_2d_application)
___DEF_M_HLBL(___L6_launch_2d_application)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_jazz_2d_heartbeat)
___DEF_M_HLBL(___L1_jazz_3a_jazz_2d_heartbeat)
___DEF_M_HLBL(___L2_jazz_3a_jazz_2d_heartbeat)
___DEF_M_HLBL(___L3_jazz_3a_jazz_2d_heartbeat)
___DEF_M_HLBL(___L4_jazz_3a_jazz_2d_heartbeat)
___DEF_M_HLBL(___L5_jazz_3a_jazz_2d_heartbeat)
___DEF_M_HLBL(___L6_jazz_3a_jazz_2d_heartbeat)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_embedded_23_
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
___DEF_P_HLBL(___L0_embedded_23_)
___DEF_P_HLBL(___L1_embedded_23_)
___DEF_P_HLBL(___L2_embedded_23_)
___DEF_P_HLBL(___L3_embedded_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_embedded_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_embedded_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_embedded)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_embedded_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_embedded_23_)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_embedded_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_launch_2d_application
#undef ___PH_LBL0
#define ___PH_LBL0 6
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_launch_2d_application)
___DEF_P_HLBL(___L1_launch_2d_application)
___DEF_P_HLBL(___L2_launch_2d_application)
___DEF_P_HLBL(___L3_launch_2d_application)
___DEF_P_HLBL(___L4_launch_2d_application)
___DEF_P_HLBL(___L5_launch_2d_application)
___DEF_P_HLBL(___L6_launch_2d_application)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_launch_2d_application)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_launch_2d_application)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_launch_2d_application)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),4,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_launch_2d_application)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),4,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_launch_2d_application)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(1),___PRM_string_2d__3e_symbol)
___DEF_SLBL(4,___L4_launch_2d_application)
   ___SET_STK(-2,___R1)
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),4,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_launch_2d_application)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(6)
___DEF_SLBL(6,___L6_launch_2d_application)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_jazz_3a_run_2d_registered)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_jazz_2d_heartbeat
#undef ___PH_LBL0
#define ___PH_LBL0 14
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_jazz_2d_heartbeat)
___DEF_P_HLBL(___L1_jazz_3a_jazz_2d_heartbeat)
___DEF_P_HLBL(___L2_jazz_3a_jazz_2d_heartbeat)
___DEF_P_HLBL(___L3_jazz_3a_jazz_2d_heartbeat)
___DEF_P_HLBL(___L4_jazz_3a_jazz_2d_heartbeat)
___DEF_P_HLBL(___L5_jazz_3a_jazz_2d_heartbeat)
___DEF_P_HLBL(___L6_jazz_3a_jazz_2d_heartbeat)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_jazz_2d_heartbeat)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_jazz_2d_heartbeat)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_jazz_2d_heartbeat)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),6,___G_jazz_3a_thread_2d_heartbeat_21_)
___DEF_SLBL(2,___L2_jazz_3a_jazz_2d_heartbeat)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process)
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(1),___PRM__23__23_global_2d_var_3f_)
___DEF_SLBL(3,___L3_jazz_3a_jazz_2d_heartbeat)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L8_jazz_3a_jazz_2d_heartbeat)
   ___END_IF
   ___SET_R1(___GLOBALVARREF(___SYM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process))
   ___IF(___NOT(___UNBOUNDP(___R1)))
   ___GOTO(___L7_jazz_3a_jazz_2d_heartbeat)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_jazz_2d_heartbeat)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L7_jazz_3a_jazz_2d_heartbeat)
   ___SET_R2(___FIX(0L))
   ___SET_STK(-2,___R1)
   ___SET_R1(___KEY_timeout)
   ___SET_R0(___STK(-3))
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_3a_jazz_2d_heartbeat)
   ___ADJFP(-4)
   ___JUMPGENSAFE(___SET_NARGS(2),___STK(2))
___DEF_GLBL(___L8_jazz_3a_jazz_2d_heartbeat)
   ___SET_R1(___VOID)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_3a_jazz_2d_heartbeat)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_embedded_23_,"embedded#",___REF_SUB(0),4,0)
,___DEF_LBL_PROC(___H_embedded_23_,0,-1)
,___DEF_LBL_RET(___H_embedded_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_embedded_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_embedded_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_launch_2d_application,"launch-application",___REF_SUB(12),7,launch_application)
,___DEF_LBL_PROC(___H_launch_2d_application,1,-1)
,___DEF_LBL_RET(___H_launch_2d_application,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_launch_2d_application,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_launch_2d_application,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_launch_2d_application,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_launch_2d_application,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_launch_2d_application,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_3a_jazz_2d_heartbeat,"jazz:jazz-heartbeat",___REF_SUB(29),7,jazz_heartbeat)
,___DEF_LBL_PROC(___H_jazz_3a_jazz_2d_heartbeat,0,-1)
,___DEF_LBL_RET(___H_jazz_3a_jazz_2d_heartbeat,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_3a_jazz_2d_heartbeat,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_jazz_2d_heartbeat,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_jazz_2d_heartbeat,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_3a_jazz_2d_heartbeat,___IFD(___RETI,4,4,0x3f2L))
,___DEF_LBL_RET(___H_jazz_3a_jazz_2d_heartbeat,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_embedded_23_,1)
___DEF_MOD_PRM(2,___G_launch_2d_application,6)
___DEF_MOD_PRM(1,___G_jazz_3a_jazz_2d_heartbeat,14)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_embedded_23_,1)
___DEF_MOD_GLO(2,___G_launch_2d_application,6)
___DEF_MOD_GLO(1,___G_jazz_3a_jazz_2d_heartbeat,14)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_boot,"boot")
___DEF_MOD_SYM(1,___S_embedded,"embedded")
___DEF_MOD_SYM(2,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(3,___S_func,"func")
___DEF_MOD_SYM(4,___S_jazz,"jazz")
___DEF_MOD_SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_process,"jazz.language.runtime.functional:thread-process")

___DEF_MOD_SYM(6,___S_kernel_2e_embedded,"kernel.embedded")
___DEF_MOD_KEY(0,___K_timeout,"timeout")
___END_MOD_SYM_KEY

#endif
