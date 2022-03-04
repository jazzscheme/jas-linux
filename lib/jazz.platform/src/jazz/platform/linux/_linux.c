#ifdef ___LINKER_INFO
; File: "_linux.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.platform.linux"
(("bin:jazz.platform.linux"))
(
"allow-computer-sleep"
"bin:jazz.platform.linux"
"collect-process-threads"
"foundation.dialect"
"jazz"
"jazz.platform.linux"
"jazz.platform.linux.foreign"
"jazz.platform.linux:allow-computer-sleep"
"jazz.platform.linux:collect-process-threads"
"jazz.platform.linux:prevent-computer-sleep"
"jazz.platform.linux:system-memory"
"prevent-computer-sleep"
"protected"
"system-memory"
)
(
)
(
"bin:jazz.platform.linux#"
)
(
"jazz.platform.linux:allow-computer-sleep"
"jazz.platform.linux:collect-process-threads"
"jazz.platform.linux:prevent-computer-sleep"
"jazz.platform.linux:system-memory"
)
(
"jazz:load-unit"
"jazz:register-module"
"jazz:unimplemented"
"jazz:unspecified"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.platform.linux"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_platform_2e_linux
#define ___MH_PROC ___H_bin_3a_jazz_2e_platform_2e_linux
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 14
#define ___GLOCOUNT 9
#define ___SUPCOUNT 5
#define ___CNSCOUNT 9
#define ___SUBCOUNT 56
#define ___LBLCOUNT 25
#define ___MODDESCR ___REF_SUB(55)
#include "gambit.h"

___NEED_SYM(___S_allow_2d_computer_2d_sleep)
___NEED_SYM(___S_bin_3a_jazz_2e_platform_2e_linux)
___NEED_SYM(___S_collect_2d_process_2d_threads)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_platform_2e_linux)
___NEED_SYM(___S_jazz_2e_platform_2e_linux_2e_foreign)
___NEED_SYM(___S_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___NEED_SYM(___S_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
___NEED_SYM(___S_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___NEED_SYM(___S_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___NEED_SYM(___S_prevent_2d_computer_2d_sleep)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_system_2d_memory)

___NEED_GLO(___G_bin_3a_jazz_2e_platform_2e_linux_23_)
___NEED_GLO(___G_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___NEED_GLO(___G_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
___NEED_GLO(___G_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___NEED_GLO(___G_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_unimplemented)
___NEED_GLO(___G_jazz_3a_unspecified)

___BEGIN_SYM
___DEF_SYM(0,___S_allow_2d_computer_2d_sleep,"allow-computer-sleep")
___DEF_SYM(1,___S_bin_3a_jazz_2e_platform_2e_linux,"bin:jazz.platform.linux")
___DEF_SYM(2,___S_collect_2d_process_2d_threads,"collect-process-threads")
___DEF_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(4,___S_jazz,"jazz")
___DEF_SYM(5,___S_jazz_2e_platform_2e_linux,"jazz.platform.linux")
___DEF_SYM(6,___S_jazz_2e_platform_2e_linux_2e_foreign,"jazz.platform.linux.foreign")
___DEF_SYM(7,___S_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,"jazz.platform.linux:allow-computer-sleep")

___DEF_SYM(8,___S_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads,"jazz.platform.linux:collect-process-threads")

___DEF_SYM(9,___S_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,"jazz.platform.linux:prevent-computer-sleep")

___DEF_SYM(10,___S_jazz_2e_platform_2e_linux_3a_system_2d_memory,"jazz.platform.linux:system-memory")

___DEF_SYM(11,___S_prevent_2d_computer_2d_sleep,"prevent-computer-sleep")
___DEF_SYM(12,___S_protected,"protected")
___DEF_SYM(13,___S_system_2d_memory,"system-memory")
___END_SYM

#define ___SYM_allow_2d_computer_2d_sleep ___SYM(0,___S_allow_2d_computer_2d_sleep)
#define ___SYM_bin_3a_jazz_2e_platform_2e_linux ___SYM(1,___S_bin_3a_jazz_2e_platform_2e_linux)
#define ___SYM_collect_2d_process_2d_threads ___SYM(2,___S_collect_2d_process_2d_threads)
#define ___SYM_foundation_2e_dialect ___SYM(3,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(4,___S_jazz)
#define ___SYM_jazz_2e_platform_2e_linux ___SYM(5,___S_jazz_2e_platform_2e_linux)
#define ___SYM_jazz_2e_platform_2e_linux_2e_foreign ___SYM(6,___S_jazz_2e_platform_2e_linux_2e_foreign)
#define ___SYM_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep ___SYM(7,___S_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
#define ___SYM_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads ___SYM(8,___S_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
#define ___SYM_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep ___SYM(9,___S_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
#define ___SYM_jazz_2e_platform_2e_linux_3a_system_2d_memory ___SYM(10,___S_jazz_2e_platform_2e_linux_3a_system_2d_memory)
#define ___SYM_prevent_2d_computer_2d_sleep ___SYM(11,___S_prevent_2d_computer_2d_sleep)
#define ___SYM_protected ___SYM(12,___S_protected)
#define ___SYM_system_2d_memory ___SYM(13,___S_system_2d_memory)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.platform.linux#")
___DEF_GLO(1,"jazz.platform.linux:allow-computer-sleep")

___DEF_GLO(2,"jazz.platform.linux:collect-process-threads")

___DEF_GLO(3,"jazz.platform.linux:prevent-computer-sleep")

___DEF_GLO(4,"jazz.platform.linux:system-memory")

___DEF_GLO(5,"jazz:load-unit")
___DEF_GLO(6,"jazz:register-module")
___DEF_GLO(7,"jazz:unimplemented")
___DEF_GLO(8,"jazz:unspecified")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_platform_2e_linux_23_ ___GLO(0,___G_bin_3a_jazz_2e_platform_2e_linux_23_)
#define ___PRM_bin_3a_jazz_2e_platform_2e_linux_23_ ___PRM(0,___G_bin_3a_jazz_2e_platform_2e_linux_23_)
#define ___GLO_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep ___GLO(1,___G_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
#define ___PRM_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep ___PRM(1,___G_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
#define ___GLO_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads ___GLO(2,___G_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
#define ___PRM_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads ___PRM(2,___G_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
#define ___GLO_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep ___GLO(3,___G_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
#define ___PRM_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep ___PRM(3,___G_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
#define ___GLO_jazz_2e_platform_2e_linux_3a_system_2d_memory ___GLO(4,___G_jazz_2e_platform_2e_linux_3a_system_2d_memory)
#define ___PRM_jazz_2e_platform_2e_linux_3a_system_2d_memory ___PRM(4,___G_jazz_2e_platform_2e_linux_3a_system_2d_memory)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(5,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(5,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(6,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(6,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_unimplemented ___GLO(7,___G_jazz_3a_unimplemented)
#define ___PRM_jazz_3a_unimplemented ___PRM(7,___G_jazz_3a_unimplemented)
#define ___GLO_jazz_3a_unspecified ___GLO(8,___G_jazz_3a_unspecified)
#define ___PRM_jazz_3a_unspecified ___PRM(8,___G_jazz_3a_unspecified)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_allow_2d_computer_2d_sleep),___REF_SYM(7,___S_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(2,___S_collect_2d_process_2d_threads),___REF_SYM(8,___S_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(11,___S_prevent_2d_computer_2d_sleep),___REF_SYM(9,___S_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep))
,___DEF_CNS(___REF_CNS(7),___REF_NUL)
,___DEF_CNS(___REF_SYM(13,___S_system_2d_memory),___REF_SYM(10,___S_jazz_2e_platform_2e_linux_3a_system_2d_memory))
,___DEF_CNS(___REF_SYM(6,___S_jazz_2e_platform_2e_linux_2e_foreign),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X1,7UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_SUB(10))
               ___VEC1(___REF_SUB(12))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X16,0UL)
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SUB(18))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X18,4UL)
               ___VEC1(___REF_SUB(19))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X27,0UL)
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X29,4UL)
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X38,0UL)
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X40,4UL)
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(42))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X49,0UL)
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X51,1UL)
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_platform_2e_linux))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X54,0UL)
               ___VEC0
___DEF_SUB_VEC(___X55,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_jazz_2e_platform_2e_linux))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_M_HLBL(___L1_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_M_HLBL(___L2_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_M_HLBL(___L3_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_M_HLBL(___L1_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_M_HLBL(___L2_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_M_HLBL(___L3_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_M_HLBL(___L1_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_M_HLBL(___L2_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_M_HLBL(___L3_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_platform_2e_linux_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_platform_2e_linux_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_platform_2e_linux_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___SET_R1(___SYM_jazz_2e_platform_2e_linux_2e_foreign)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___SET_STK(1,___SYM_jazz_2e_platform_2e_linux)
   ___SET_R3(___CNS(0))
   ___SET_R2(___CNS(8))
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),6,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___SET_GLO(4,___G_jazz_2e_platform_2e_linux_3a_system_2d_memory,___PRC(9))
   ___SET_GLO(3,___G_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,___PRC(14))
   ___SET_GLO(1,___G_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,___PRC(19))
   ___SET_GLO(2,___G_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads,___PRC(24))
   ___SET_R1(___VOID)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_platform_2e_linux_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_linux_3a_system_2d_memory
#undef ___PH_LBL0
#define ___PH_LBL0 9
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_P_HLBL(___L1_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_P_HLBL(___L2_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___DEF_P_HLBL(___L3_jazz_2e_platform_2e_linux_3a_system_2d_memory)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_linux_3a_system_2d_memory)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_linux_3a_system_2d_memory)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_platform_2e_linux_3a_system_2d_memory)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),7,___G_jazz_3a_unimplemented)
___DEF_SLBL(2,___L2_jazz_2e_platform_2e_linux_3a_system_2d_memory)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_platform_2e_linux_3a_system_2d_memory)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep
#undef ___PH_LBL0
#define ___PH_LBL0 14
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_P_HLBL(___L1_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_P_HLBL(___L2_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___DEF_P_HLBL(___L3_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),8,___G_jazz_3a_unspecified)
___DEF_SLBL(2,___L2_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep
#undef ___PH_LBL0
#define ___PH_LBL0 19
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_P_HLBL(___L1_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_P_HLBL(___L2_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___DEF_P_HLBL(___L3_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),8,___G_jazz_3a_unspecified)
___DEF_SLBL(2,___L2_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads
#undef ___PH_LBL0
#define ___PH_LBL0 24
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_platform_2e_linux_23_,"bin:jazz.platform.linux#",___REF_SUB(0),
7,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_platform_2e_linux_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_linux_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_linux_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_linux_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_linux_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_linux_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_linux_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_linux_3a_system_2d_memory,0,___REF_SUB(17),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_linux_3a_system_2d_memory,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_system_2d_memory,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_system_2d_memory,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_system_2d_memory,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,0,___REF_SUB(28),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,0,___REF_SUB(39),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads,0,___REF_SUB(50),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads,0,-1)
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_platform_2e_linux_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_platform_2e_linux_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_allow_2d_computer_2d_sleep,"allow-computer-sleep")
___DEF_MOD_SYM(1,___S_bin_3a_jazz_2e_platform_2e_linux,"bin:jazz.platform.linux")
___DEF_MOD_SYM(2,___S_collect_2d_process_2d_threads,"collect-process-threads")
___DEF_MOD_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(4,___S_jazz,"jazz")
___DEF_MOD_SYM(5,___S_jazz_2e_platform_2e_linux,"jazz.platform.linux")
___DEF_MOD_SYM(6,___S_jazz_2e_platform_2e_linux_2e_foreign,"jazz.platform.linux.foreign")
___DEF_MOD_SYM(7,___S_jazz_2e_platform_2e_linux_3a_allow_2d_computer_2d_sleep,"jazz.platform.linux:allow-computer-sleep")

___DEF_MOD_SYM(8,___S_jazz_2e_platform_2e_linux_3a_collect_2d_process_2d_threads,"jazz.platform.linux:collect-process-threads")

___DEF_MOD_SYM(9,___S_jazz_2e_platform_2e_linux_3a_prevent_2d_computer_2d_sleep,"jazz.platform.linux:prevent-computer-sleep")

___DEF_MOD_SYM(10,___S_jazz_2e_platform_2e_linux_3a_system_2d_memory,"jazz.platform.linux:system-memory")

___DEF_MOD_SYM(11,___S_prevent_2d_computer_2d_sleep,"prevent-computer-sleep")
___DEF_MOD_SYM(12,___S_protected,"protected")
___DEF_MOD_SYM(13,___S_system_2d_memory,"system-memory")
___END_MOD_SYM_KEY

#endif
