#ifdef ___LINKER_INFO
; File: "install.c", produced by Gambit v4.8.9
(
408009
(C)
"install"
(("install"))
(
"install"
"kernel.install"
)
(
)
(
"install#"
"install#0"
)
(
"jazz:executable-directory"
"jazz:executable-path"
"jazz:platform-executable-path"
)
(
"jazz:pathname-dir"
"jazz:pathname-normalize"
"jazz:verbose-kernel"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "install"
#define ___LINKER_ID ___LNK_install
#define ___MH_PROC ___H_install
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 2
#define ___GLOCOUNT 8
#define ___SUPCOUNT 5
#define ___SUBCOUNT 29
#define ___LBLCOUNT 16
#define ___MODDESCR ___REF_SUB(28)
#include "gambit.h"

___NEED_SYM(___S_install)
___NEED_SYM(___S_kernel_2e_install)

___NEED_GLO(___G_install_23_)
___NEED_GLO(___G_install_23_0)
___NEED_GLO(___G_jazz_3a_executable_2d_directory)
___NEED_GLO(___G_jazz_3a_executable_2d_path)
___NEED_GLO(___G_jazz_3a_pathname_2d_dir)
___NEED_GLO(___G_jazz_3a_pathname_2d_normalize)
___NEED_GLO(___G_jazz_3a_platform_2d_executable_2d_path)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)

___BEGIN_SYM
___DEF_SYM(0,___S_install,"install")
___DEF_SYM(1,___S_kernel_2e_install,"kernel.install")
___END_SYM

#define ___SYM_install ___SYM(0,___S_install)
#define ___SYM_kernel_2e_install ___SYM(1,___S_kernel_2e_install)

___BEGIN_GLO
___DEF_GLO(0,"install#")
___DEF_GLO(1,"install#0")
___DEF_GLO(2,"jazz:executable-directory")
___DEF_GLO(3,"jazz:executable-path")
___DEF_GLO(4,"jazz:platform-executable-path")
___DEF_GLO(5,"jazz:pathname-dir")
___DEF_GLO(6,"jazz:pathname-normalize")
___DEF_GLO(7,"jazz:verbose-kernel")
___END_GLO

#define ___GLO_install_23_ ___GLO(0,___G_install_23_)
#define ___PRM_install_23_ ___PRM(0,___G_install_23_)
#define ___GLO_install_23_0 ___GLO(1,___G_install_23_0)
#define ___PRM_install_23_0 ___PRM(1,___G_install_23_0)
#define ___GLO_jazz_3a_executable_2d_directory ___GLO(2,___G_jazz_3a_executable_2d_directory)
#define ___PRM_jazz_3a_executable_2d_directory ___PRM(2,___G_jazz_3a_executable_2d_directory)
#define ___GLO_jazz_3a_executable_2d_path ___GLO(3,___G_jazz_3a_executable_2d_path)
#define ___PRM_jazz_3a_executable_2d_path ___PRM(3,___G_jazz_3a_executable_2d_path)
#define ___GLO_jazz_3a_platform_2d_executable_2d_path ___GLO(4,___G_jazz_3a_platform_2d_executable_2d_path)
#define ___PRM_jazz_3a_platform_2d_executable_2d_path ___PRM(4,___G_jazz_3a_platform_2d_executable_2d_path)
#define ___GLO_jazz_3a_pathname_2d_dir ___GLO(5,___G_jazz_3a_pathname_2d_dir)
#define ___PRM_jazz_3a_pathname_2d_dir ___PRM(5,___G_jazz_3a_pathname_2d_dir)
#define ___GLO_jazz_3a_pathname_2d_normalize ___GLO(6,___G_jazz_3a_pathname_2d_normalize)
#define ___PRM_jazz_3a_pathname_2d_normalize ___PRM(6,___G_jazz_3a_pathname_2d_normalize)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(7,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(7,___G_jazz_3a_verbose_2d_kernel)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X1,12UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(7))
               ___VEC1(___REF_SUB(9))
               ___VEC1(___REF_SUB(11))
               ___VEC1(___REF_SUB(13))
               ___VEC1(___REF_SUB(15))
               ___VEC1(___REF_SUB(17))
               ___VEC1(___REF_SUB(19))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,56UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,105,110,115)
               ___STR8(116,97,108,108,46,115,99,109)
               ___STR0
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
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(105))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(100))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(100))
               ___VEC0
___DEF_SUB_VEC(___X27,0UL)
               ___VEC0
___DEF_SUB_VEC(___X28,5UL)
               ___VEC1(___REF_SYM(0,___S_install))
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
___END_SUB



#include <unistd.h>
#include <stdio.h>

#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_install_23_)
___DEF_M_HLBL(___L1_install_23_)
___DEF_M_HLBL(___L2_install_23_)
___DEF_M_HLBL(___L3_install_23_)
___DEF_M_HLBL(___L4_install_23_)
___DEF_M_HLBL(___L5_install_23_)
___DEF_M_HLBL(___L6_install_23_)
___DEF_M_HLBL(___L7_install_23_)
___DEF_M_HLBL(___L8_install_23_)
___DEF_M_HLBL(___L9_install_23_)
___DEF_M_HLBL(___L10_install_23_)
___DEF_M_HLBL(___L11_install_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_install_23_0)
___DEF_M_HLBL(___L1_install_23_0)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_install_23_
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
___DEF_P_HLBL(___L0_install_23_)
___DEF_P_HLBL(___L1_install_23_)
___DEF_P_HLBL(___L2_install_23_)
___DEF_P_HLBL(___L3_install_23_)
___DEF_P_HLBL(___L4_install_23_)
___DEF_P_HLBL(___L5_install_23_)
___DEF_P_HLBL(___L6_install_23_)
___DEF_P_HLBL(___L7_install_23_)
___DEF_P_HLBL(___L8_install_23_)
___DEF_P_HLBL(___L9_install_23_)
___DEF_P_HLBL(___L10_install_23_)
___DEF_P_HLBL(___L11_install_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_install_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_install_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_install)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_install_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_install_23_)
   ___SET_GLO(4,___G_jazz_3a_platform_2d_executable_2d_path,___PRC(14))
   ___SET_GLO(3,___G_jazz_3a_executable_2d_path,___LBL(10))
   ___SET_GLO(2,___G_jazz_3a_executable_2d_directory,___LBL(4))
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_install_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(4,___L4_install_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(4,0,0,0)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(5)
___DEF_SLBL(5,___L5_install_23_)
   ___SET_R0(___LBL(6))
   ___JUMPINT(___SET_NARGS(0),___PRC(14),___L_install_23_0)
___DEF_SLBL(6,___L6_install_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L12_install_23_)
   ___END_IF
   ___SET_R1(___FAL)
   ___POLL(7)
___DEF_SLBL(7,___L7_install_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L12_install_23_)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_3a_pathname_2d_normalize)
___DEF_SLBL(8,___L8_install_23_)
   ___SET_R0(___STK(-3))
   ___POLL(9)
___DEF_SLBL(9,___L9_install_23_)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_jazz_3a_pathname_2d_dir)
___DEF_SLBL(10,___L10_install_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(10,0,0,0)
   ___POLL(11)
___DEF_SLBL(11,___L11_install_23_)
   ___JUMPINT(___SET_NARGS(0),___PRC(14),___L_install_23_0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_install_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 14
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_install_23_0)
___DEF_P_HLBL(___L1_install_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_install_23_0)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_install_23_0)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN(char* ___result)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_install_23_0; } while (0)
char link[64];
             char path[1024];
             pid_t pid;
             int result;
             pid = getpid();
             result = snprintf(link, sizeof(link), "/proc/%i/exe", pid);
             if (result >= 0) {
               result = readlink(link, path, sizeof(path));
               if( result < 0 || result >= (int)sizeof(path) )
                 ___return(0);
               else {
                 path[result] = 0;
                 ___return(path);
               }
             }
             else
               ___return(0);
___return_install_23_0:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_install_23_0)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_install_23_,"install#",___REF_SUB(0),12,0)
,___DEF_LBL_PROC(___H_install_23_,0,-1)
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_install_23_,0,-1)
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_install_23_,0,-1)
,___DEF_LBL_RET(___H_install_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_install_23_0,"install#0",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_install_23_0,0,-1)
,___DEF_LBL_RET(___H_install_23_0,___IFD(___RETN,1,0,0x1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_install_23_,1)
___DEF_MOD_PRM(1,___G_install_23_0,14)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_install_23_,1)
___DEF_MOD_GLO(1,___G_install_23_0,14)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_install,"install")
___DEF_MOD_SYM(1,___S_kernel_2e_install,"kernel.install")
___END_MOD_SYM_KEY

#endif
