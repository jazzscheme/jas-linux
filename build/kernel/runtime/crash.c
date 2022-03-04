#ifdef ___LINKER_INFO
; File: "crash.c", produced by Gambit v4.8.9
(
408009
(C)
"crash"
(("crash"))
(
"crash"
"ignore"
"k"
"kernel.crash"
"port"
)
(
)
(
"crash#"
"crash#0"
"crash#1"
"crash#2"
"jazz:log-backtrace"
)
(
"jazz:call_crash_exit"
"jazz:call_crash_reporter"
"jazz:crash-process"
"jazz:disable-crash-handler"
"jazz:disable-crash-window"
"jazz:enable-crash-handler"
)
(
"current-error-port"
"display"
"display-continuation-backtrace"
"jazz:crash-reporter"
"jazz:exit-no-jobs"
"jazz:set-crash-reporter"
"jazz:verbose-kernel"
"newline"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "crash"
#define ___LINKER_ID ___LNK_crash
#define ___MH_PROC ___H_crash
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 5
#define ___GLOCOUNT 19
#define ___SUPCOUNT 11
#define ___SUBCOUNT 63
#define ___LBLCOUNT 36
#define ___MODDESCR ___REF_SUB(62)
#include "gambit.h"

___NEED_SYM(___S_crash)
___NEED_SYM(___S_ignore)
___NEED_SYM(___S_k)
___NEED_SYM(___S_kernel_2e_crash)
___NEED_SYM(___S_port)

___NEED_GLO(___G_crash_23_)
___NEED_GLO(___G_crash_23_0)
___NEED_GLO(___G_crash_23_1)
___NEED_GLO(___G_crash_23_2)
___NEED_GLO(___G_current_2d_error_2d_port)
___NEED_GLO(___G_display)
___NEED_GLO(___G_display_2d_continuation_2d_backtrace)
___NEED_GLO(___G_jazz_3a_call__crash__exit)
___NEED_GLO(___G_jazz_3a_call__crash__reporter)
___NEED_GLO(___G_jazz_3a_crash_2d_process)
___NEED_GLO(___G_jazz_3a_crash_2d_reporter)
___NEED_GLO(___G_jazz_3a_disable_2d_crash_2d_handler)
___NEED_GLO(___G_jazz_3a_disable_2d_crash_2d_window)
___NEED_GLO(___G_jazz_3a_enable_2d_crash_2d_handler)
___NEED_GLO(___G_jazz_3a_exit_2d_no_2d_jobs)
___NEED_GLO(___G_jazz_3a_log_2d_backtrace)
___NEED_GLO(___G_jazz_3a_set_2d_crash_2d_reporter)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_newline)

___BEGIN_SYM
___DEF_SYM(0,___S_crash,"crash")
___DEF_SYM(1,___S_ignore,"ignore")
___DEF_SYM(2,___S_k,"k")
___DEF_SYM(3,___S_kernel_2e_crash,"kernel.crash")
___DEF_SYM(4,___S_port,"port")
___END_SYM

#define ___SYM_crash ___SYM(0,___S_crash)
#define ___SYM_ignore ___SYM(1,___S_ignore)
#define ___SYM_k ___SYM(2,___S_k)
#define ___SYM_kernel_2e_crash ___SYM(3,___S_kernel_2e_crash)
#define ___SYM_port ___SYM(4,___S_port)

___BEGIN_GLO
___DEF_GLO(0,"crash#")
___DEF_GLO(1,"crash#0")
___DEF_GLO(2,"crash#1")
___DEF_GLO(3,"crash#2")
___DEF_GLO(4,"jazz:call_crash_exit")
___DEF_GLO(5,"jazz:call_crash_reporter")
___DEF_GLO(6,"jazz:crash-process")
___DEF_GLO(7,"jazz:disable-crash-handler")
___DEF_GLO(8,"jazz:disable-crash-window")
___DEF_GLO(9,"jazz:enable-crash-handler")
___DEF_GLO(10,"jazz:log-backtrace")
___DEF_GLO(11,"current-error-port")
___DEF_GLO(12,"display")
___DEF_GLO(13,"display-continuation-backtrace")
___DEF_GLO(14,"jazz:crash-reporter")
___DEF_GLO(15,"jazz:exit-no-jobs")
___DEF_GLO(16,"jazz:set-crash-reporter")
___DEF_GLO(17,"jazz:verbose-kernel")
___DEF_GLO(18,"newline")
___END_GLO

#define ___GLO_crash_23_ ___GLO(0,___G_crash_23_)
#define ___PRM_crash_23_ ___PRM(0,___G_crash_23_)
#define ___GLO_crash_23_0 ___GLO(1,___G_crash_23_0)
#define ___PRM_crash_23_0 ___PRM(1,___G_crash_23_0)
#define ___GLO_crash_23_1 ___GLO(2,___G_crash_23_1)
#define ___PRM_crash_23_1 ___PRM(2,___G_crash_23_1)
#define ___GLO_crash_23_2 ___GLO(3,___G_crash_23_2)
#define ___PRM_crash_23_2 ___PRM(3,___G_crash_23_2)
#define ___GLO_jazz_3a_call__crash__exit ___GLO(4,___G_jazz_3a_call__crash__exit)
#define ___PRM_jazz_3a_call__crash__exit ___PRM(4,___G_jazz_3a_call__crash__exit)
#define ___GLO_jazz_3a_call__crash__reporter ___GLO(5,___G_jazz_3a_call__crash__reporter)
#define ___PRM_jazz_3a_call__crash__reporter ___PRM(5,___G_jazz_3a_call__crash__reporter)
#define ___GLO_jazz_3a_crash_2d_process ___GLO(6,___G_jazz_3a_crash_2d_process)
#define ___PRM_jazz_3a_crash_2d_process ___PRM(6,___G_jazz_3a_crash_2d_process)
#define ___GLO_jazz_3a_disable_2d_crash_2d_handler ___GLO(7,___G_jazz_3a_disable_2d_crash_2d_handler)
#define ___PRM_jazz_3a_disable_2d_crash_2d_handler ___PRM(7,___G_jazz_3a_disable_2d_crash_2d_handler)
#define ___GLO_jazz_3a_disable_2d_crash_2d_window ___GLO(8,___G_jazz_3a_disable_2d_crash_2d_window)
#define ___PRM_jazz_3a_disable_2d_crash_2d_window ___PRM(8,___G_jazz_3a_disable_2d_crash_2d_window)
#define ___GLO_jazz_3a_enable_2d_crash_2d_handler ___GLO(9,___G_jazz_3a_enable_2d_crash_2d_handler)
#define ___PRM_jazz_3a_enable_2d_crash_2d_handler ___PRM(9,___G_jazz_3a_enable_2d_crash_2d_handler)
#define ___GLO_jazz_3a_log_2d_backtrace ___GLO(10,___G_jazz_3a_log_2d_backtrace)
#define ___PRM_jazz_3a_log_2d_backtrace ___PRM(10,___G_jazz_3a_log_2d_backtrace)
#define ___GLO_current_2d_error_2d_port ___GLO(11,___G_current_2d_error_2d_port)
#define ___PRM_current_2d_error_2d_port ___PRM(11,___G_current_2d_error_2d_port)
#define ___GLO_display ___GLO(12,___G_display)
#define ___PRM_display ___PRM(12,___G_display)
#define ___GLO_display_2d_continuation_2d_backtrace ___GLO(13,___G_display_2d_continuation_2d_backtrace)
#define ___PRM_display_2d_continuation_2d_backtrace ___PRM(13,___G_display_2d_continuation_2d_backtrace)
#define ___GLO_jazz_3a_crash_2d_reporter ___GLO(14,___G_jazz_3a_crash_2d_reporter)
#define ___PRM_jazz_3a_crash_2d_reporter ___PRM(14,___G_jazz_3a_crash_2d_reporter)
#define ___GLO_jazz_3a_exit_2d_no_2d_jobs ___GLO(15,___G_jazz_3a_exit_2d_no_2d_jobs)
#define ___PRM_jazz_3a_exit_2d_no_2d_jobs ___PRM(15,___G_jazz_3a_exit_2d_no_2d_jobs)
#define ___GLO_jazz_3a_set_2d_crash_2d_reporter ___GLO(16,___G_jazz_3a_set_2d_crash_2d_reporter)
#define ___PRM_jazz_3a_set_2d_crash_2d_reporter ___PRM(16,___G_jazz_3a_set_2d_crash_2d_reporter)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(17,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(17,___G_jazz_3a_verbose_2d_kernel)
#define ___GLO_newline ___GLO(18,___G_newline)
#define ___PRM_newline ___PRM(18,___G_newline)

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
               ___VEC1(___REF_FIX(38))
               ___VEC0
___DEF_SUB_STR(___X4,54UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,99,114,97)
               ___STR6(115,104,46,115,99,109)
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(6))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(38))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(38))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(56))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(196783))
               ___VEC0
___DEF_SUB_VEC(___X13,0UL)
               ___VEC0
___DEF_SUB_STR(___X14,7UL)
               ___STR7(70,114,97,109,101,115,58)
___DEF_SUB_STR(___X15,10UL)
               ___STR8(86,97,114,105,97,98,108,101)
               ___STR2(115,58)
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SUB(17))
               ___VEC1(___REF_SUB(42))
               ___VEC0
___DEF_SUB_VEC(___X17,12UL)
               ___VEC1(___REF_SUB(18))
               ___VEC1(___REF_SUB(20))
               ___VEC1(___REF_SUB(22))
               ___VEC1(___REF_SUB(24))
               ___VEC1(___REF_SUB(26))
               ___VEC1(___REF_SUB(28))
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(41))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262187))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262187))
               ___VEC0
___DEF_SUB_VEC(___X24,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(1179692))
               ___VEC0
___DEF_SUB_VEC(___X26,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(1179692))
               ___VEC0
___DEF_SUB_VEC(___X28,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524333))
               ___VEC0
___DEF_SUB_VEC(___X30,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524334))
               ___VEC0
___DEF_SUB_VEC(___X32,4UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524336))
               ___VEC0
___DEF_SUB_VEC(___X34,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524337))
               ___VEC0
___DEF_SUB_VEC(___X36,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524338))
               ___VEC0
___DEF_SUB_VEC(___X38,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524339))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(524341))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SYM(2,___S_k))
               ___VEC1(___REF_SYM(4,___S_port))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X44,1UL)
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(196715))
               ___VEC0
___DEF_SUB_VEC(___X47,0UL)
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(196718))
               ___VEC0
___DEF_SUB_VEC(___X52,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(196718))
               ___VEC0
___DEF_SUB_VEC(___X54,1UL)
               ___VEC1(___REF_SYM(1,___S_ignore))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(196721))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(60))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(196721))
               ___VEC0
___DEF_SUB_VEC(___X61,0UL)
               ___VEC0
___DEF_SUB_VEC(___X62,5UL)
               ___VEC1(___REF_SYM(0,___S_crash))
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
,___DEF_SUB(___X60)
,___DEF_SUB(___X61)
,___DEF_SUB(___X62)
___END_SUB


#define ___C_LBL_jazz_call_crash_reporter 22
#define ___C_LBL_jazz_call_crash_exit 25

 void jazz_call_crash_reporter ___P((int ___arg1),(___arg1)
int ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_jazz_call_crash_reporter))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

 void jazz_call_crash_exit ___PVOID
{
#define ___NARGS 0
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_jazz_call_crash_exit))
___BEGIN_SFUN_BODY
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

      #include <stdio.h>
      #include <unistd.h>
      #include <sys/types.h>
      #include <signal.h>
      #include <execinfo.h>
      
      static void restore_low_level_unix_signals()
      {
       // core dumping signals
        signal(SIGQUIT, SIG_DFL);
        signal(SIGILL,  SIG_DFL);
        signal(SIGABRT, SIG_DFL);
        signal(SIGFPE,  SIG_DFL);
        signal(SIGBUS,  SIG_DFL);
        signal(SIGSEGV, SIG_DFL);
        signal(SIGSYS,  SIG_DFL);
        signal(SIGTRAP, SIG_DFL);
        }

      static void error_signal_handler(int sig_num)
      {
        restore_low_level_unix_signals();
                                      
        // Dump the C stack which is only really useful if
        // Gambit was built with --enable-debug for symbols
        // void *ret_adrs[100];
        // ___SIZE_T n = backtrace (ret_adrs, sizeof (ret_adrs) / sizeof (void*));
        // backtrace_symbols_fd (ret_adrs, n, STDOUT_FILENO);
        // printf("\n");
        
        jazz_call_crash_reporter(sig_num);
        fflush(stdout);
        jazz_call_crash_exit();
      }

      static void setup_low_level_unix_crash_handler()
      {
        // core dumping signals
        signal(SIGQUIT, error_signal_handler);
        signal(SIGILL,  error_signal_handler);
        signal(SIGABRT, error_signal_handler);
        signal(SIGFPE,  error_signal_handler);
        signal(SIGBUS,  error_signal_handler);
        signal(SIGSEGV, error_signal_handler);
        signal(SIGSYS,  error_signal_handler);
        signal(SIGTRAP, error_signal_handler);
      }

#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_crash_23_)
___DEF_M_HLBL(___L1_crash_23_)
___DEF_M_HLBL(___L2_crash_23_)
___DEF_M_HLBL(___L3_crash_23_)
___DEF_M_HLBL(___L4_crash_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L1_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L2_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L3_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L4_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L5_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L6_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L7_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L8_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L9_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L10_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL(___L11_jazz_3a_log_2d_backtrace)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_disable_2d_crash_2d_window)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_call__crash__reporter)
___DEF_M_HLBL(___L1_jazz_3a_call__crash__reporter)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_call__crash__exit)
___DEF_M_HLBL(___L1_jazz_3a_call__crash__exit)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_crash_23_0)
___DEF_M_HLBL(___L1_crash_23_0)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_crash_23_1)
___DEF_M_HLBL(___L1_crash_23_1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_crash_23_2)
___DEF_M_HLBL(___L1_crash_23_2)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_crash_23_
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
___DEF_P_HLBL(___L0_crash_23_)
___DEF_P_HLBL(___L1_crash_23_)
___DEF_P_HLBL(___L2_crash_23_)
___DEF_P_HLBL(___L3_crash_23_)
___DEF_P_HLBL(___L4_crash_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_crash_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_crash_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_crash)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_crash_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),17,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_crash_23_)
   ___SET_R1(___PRC(7))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),16,___G_jazz_3a_set_2d_crash_2d_reporter)
___DEF_SLBL(3,___L3_crash_23_)
   ___SET_GLO(9,___G_jazz_3a_enable_2d_crash_2d_handler,___PRC(28))
   ___SET_GLO(7,___G_jazz_3a_disable_2d_crash_2d_handler,___PRC(31))
   ___SET_GLO(6,___G_jazz_3a_crash_2d_process,___PRC(34))
   ___SET_R1(___VOID)
   ___POLL(4)
___DEF_SLBL(4,___L4_crash_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_log_2d_backtrace
#undef ___PH_LBL0
#define ___PH_LBL0 7
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L1_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L2_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L3_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L4_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L5_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L6_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L7_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L8_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L9_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L10_jazz_3a_log_2d_backtrace)
___DEF_P_HLBL(___L11_jazz_3a_log_2d_backtrace)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_log_2d_backtrace)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_log_2d_backtrace)
   ___SET_R1(___LBL(2))
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_log_2d_backtrace)
   ___JUMP_CONTINUATION_CAPTURE1(___JUMPNOTSAFE)
___DEF_SLBL(2,___L2_jazz_3a_log_2d_backtrace)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(2,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_log_2d_backtrace)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(0),11,___G_current_2d_error_2d_port)
___DEF_SLBL(4,___L4_jazz_3a_log_2d_backtrace)
   ___SET_STK(-5,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(14))
   ___SET_R0(___LBL(5))
   ___JUMPPRM(___SET_NARGS(2),___PRM_display)
___DEF_SLBL(5,___L5_jazz_3a_log_2d_backtrace)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(6))
   ___JUMPPRM(___SET_NARGS(1),___PRM_newline)
___DEF_SLBL(6,___L6_jazz_3a_log_2d_backtrace)
   ___SET_STK(1,___STK(-6))
   ___SET_STK(2,___STK(-5))
   ___SET_STK(3,___FAL)
   ___SET_R3(___FIX(500L))
   ___SET_R2(___FIX(500L))
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(7))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),13,___G_display_2d_continuation_2d_backtrace)
___DEF_SLBL(7,___L7_jazz_3a_log_2d_backtrace)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(8))
   ___JUMPPRM(___SET_NARGS(1),___PRM_newline)
___DEF_SLBL(8,___L8_jazz_3a_log_2d_backtrace)
   ___SET_R2(___STK(-5))
   ___SET_R1(___SUB(15))
   ___SET_R0(___LBL(9))
   ___JUMPPRM(___SET_NARGS(2),___PRM_display)
___DEF_SLBL(9,___L9_jazz_3a_log_2d_backtrace)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(10))
   ___JUMPPRM(___SET_NARGS(1),___PRM_newline)
___DEF_SLBL(10,___L10_jazz_3a_log_2d_backtrace)
   ___SET_STK(-4,___STK(-7))
   ___SET_STK(-7,___STK(-6))
   ___SET_STK(-6,___STK(-5))
   ___SET_STK(-5,___FAL)
   ___SET_R3(___FIX(500L))
   ___SET_R2(___FIX(500L))
   ___SET_R1(___TRU)
   ___SET_R0(___STK(-4))
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_3a_log_2d_backtrace)
   ___ADJFP(-5)
   ___JUMPGLOSAFE(___SET_NARGS(6),13,___G_display_2d_continuation_2d_backtrace)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_disable_2d_crash_2d_window
#undef ___PH_LBL0
#define ___PH_LBL0 20
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_disable_2d_crash_2d_window)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_disable_2d_crash_2d_window)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_disable_2d_crash_2d_window)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_call__crash__reporter
#undef ___PH_LBL0
#define ___PH_LBL0 22
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_call__crash__reporter)
___DEF_P_HLBL(___L1_jazz_3a_call__crash__reporter)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_call__crash__reporter)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_call__crash__reporter)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_call__crash__reporter)
   ___JUMPGLOSAFE(___SET_NARGS(1),14,___G_jazz_3a_crash_2d_reporter)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_call__crash__exit
#undef ___PH_LBL0
#define ___PH_LBL0 25
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_call__crash__exit)
___DEF_P_HLBL(___L1_jazz_3a_call__crash__exit)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_call__crash__exit)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_call__crash__exit)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_call__crash__exit)
   ___JUMPGLOSAFE(___SET_NARGS(0),15,___G_jazz_3a_exit_2d_no_2d_jobs)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_crash_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 28
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_crash_23_0)
___DEF_P_HLBL(___L1_crash_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_crash_23_0)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_crash_23_0)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
setup_low_level_unix_crash_handler();
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_crash_23_0)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_crash_23_1
#undef ___PH_LBL0
#define ___PH_LBL0 31
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_crash_23_1)
___DEF_P_HLBL(___L1_crash_23_1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_crash_23_1)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_crash_23_1)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
restore_low_level_unix_signals();
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_crash_23_1)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_crash_23_2
#undef ___PH_LBL0
#define ___PH_LBL0 34
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_crash_23_2)
___DEF_P_HLBL(___L1_crash_23_2)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_crash_23_2)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_crash_23_2)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_crash_23_2
raise(SIGSEGV);
___return_crash_23_2:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_crash_23_2)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_crash_23_,"crash#",___REF_SUB(0),5,0)
,___DEF_LBL_PROC(___H_crash_23_,0,-1)
,___DEF_LBL_RET(___H_crash_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_crash_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_crash_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_crash_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_log_2d_backtrace,"jazz:log-backtrace",___REF_SUB(16),12,0)
,___DEF_LBL_PROC(___H_jazz_3a_log_2d_backtrace,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_jazz_3a_log_2d_backtrace,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_log_2d_backtrace,___IFD(___RETI,8,8,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_3a_disable_2d_crash_2d_window,"jazz:disable-crash-window",___REF_SUB(43)
,1,0)
,___DEF_LBL_PROC(___H_jazz_3a_disable_2d_crash_2d_window,0,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_call__crash__reporter,"jazz:call_crash_reporter",___REF_SUB(48),
2,jazz_call_crash_reporter)
,___DEF_LBL_PROC(___H_jazz_3a_call__crash__reporter,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_call__crash__reporter,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_call__crash__exit,"jazz:call_crash_exit",___REF_SUB(55),2,jazz_call_crash_exit)

,___DEF_LBL_PROC(___H_jazz_3a_call__crash__exit,0,-1)
,___DEF_LBL_RET(___H_jazz_3a_call__crash__exit,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_crash_23_0,"crash#0",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_crash_23_0,0,-1)
,___DEF_LBL_RET(___H_crash_23_0,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H_crash_23_1,"crash#1",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_crash_23_1,0,-1)
,___DEF_LBL_RET(___H_crash_23_1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H_crash_23_2,"crash#2",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_crash_23_2,0,-1)
,___DEF_LBL_RET(___H_crash_23_2,___IFD(___RETN,1,0,0x1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_crash_23_,1)
___DEF_MOD_PRM(10,___G_jazz_3a_log_2d_backtrace,7)
___DEF_MOD_PRM(8,___G_jazz_3a_disable_2d_crash_2d_window,20)
___DEF_MOD_PRM(5,___G_jazz_3a_call__crash__reporter,22)
___DEF_MOD_PRM(4,___G_jazz_3a_call__crash__exit,25)
___DEF_MOD_PRM(1,___G_crash_23_0,28)
___DEF_MOD_PRM(2,___G_crash_23_1,31)
___DEF_MOD_PRM(3,___G_crash_23_2,34)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
setup_low_level_unix_crash_handler();
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_crash_23_,1)
___DEF_MOD_GLO(10,___G_jazz_3a_log_2d_backtrace,7)
___DEF_MOD_GLO(8,___G_jazz_3a_disable_2d_crash_2d_window,20)
___DEF_MOD_GLO(5,___G_jazz_3a_call__crash__reporter,22)
___DEF_MOD_GLO(4,___G_jazz_3a_call__crash__exit,25)
___DEF_MOD_GLO(1,___G_crash_23_0,28)
___DEF_MOD_GLO(2,___G_crash_23_1,31)
___DEF_MOD_GLO(3,___G_crash_23_2,34)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_crash,"crash")
___DEF_MOD_SYM(1,___S_ignore,"ignore")
___DEF_MOD_SYM(2,___S_k,"k")
___DEF_MOD_SYM(3,___S_kernel_2e_crash,"kernel.crash")
___DEF_MOD_SYM(4,___S_port,"port")
___END_MOD_SYM_KEY

#endif
