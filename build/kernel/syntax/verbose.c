#ifdef ___LINKER_INFO
; File: "verbose.c", produced by Gambit v4.8.9
(
408009
(C)
"verbose"
(("verbose"))
(
"f64vec"
"port"
"u64vec"
"unit"
"verbose"
)
(
)
(
"jazz:current-monotonic"
"jazz:current-seconds"
"jazz:kernel-verbose?"
"verbose#"
)
(
"jazz:current-monotonic-frequency"
"jazz:current-monotonic-nanoseconds"
"jazz:kernel-boot"
"jazz:kernel-boot-monotonic"
"jazz:verbose-kernel"
)
(
"##actlog-stop"
"##current-time-point"
"##f64vector"
"##f64vector-ref"
"##get-current-monotonic-time!"
"##get-monotonic-time!"
"##get-monotonic-time-frequency!"
"##u64vector"
"##u64vector-ref"
"console-port"
"display"
"force-output"
"newline"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "verbose"
#define ___LINKER_ID ___LNK_verbose
#define ___MH_PROC ___H_verbose
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 5
#define ___GLOCOUNT 22
#define ___SUPCOUNT 9
#define ___CNSCOUNT 2
#define ___SUBCOUNT 75
#define ___LBLCOUNT 34
#define ___MODDESCR ___REF_SUB(74)
#include "gambit.h"

___NEED_SYM(___S_f64vec)
___NEED_SYM(___S_port)
___NEED_SYM(___S_u64vec)
___NEED_SYM(___S_unit)
___NEED_SYM(___S_verbose)

___NEED_GLO(___G__23__23_actlog_2d_stop)
___NEED_GLO(___G__23__23_current_2d_time_2d_point)
___NEED_GLO(___G__23__23_f64vector)
___NEED_GLO(___G__23__23_f64vector_2d_ref)
___NEED_GLO(___G__23__23_get_2d_current_2d_monotonic_2d_time_21_)
___NEED_GLO(___G__23__23_get_2d_monotonic_2d_time_21_)
___NEED_GLO(___G__23__23_get_2d_monotonic_2d_time_2d_frequency_21_)
___NEED_GLO(___G__23__23_u64vector)
___NEED_GLO(___G__23__23_u64vector_2d_ref)
___NEED_GLO(___G_console_2d_port)
___NEED_GLO(___G_display)
___NEED_GLO(___G_force_2d_output)
___NEED_GLO(___G_jazz_3a_current_2d_monotonic)
___NEED_GLO(___G_jazz_3a_current_2d_monotonic_2d_frequency)
___NEED_GLO(___G_jazz_3a_current_2d_monotonic_2d_nanoseconds)
___NEED_GLO(___G_jazz_3a_current_2d_seconds)
___NEED_GLO(___G_jazz_3a_kernel_2d_boot)
___NEED_GLO(___G_jazz_3a_kernel_2d_boot_2d_monotonic)
___NEED_GLO(___G_jazz_3a_kernel_2d_verbose_3f_)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_newline)
___NEED_GLO(___G_verbose_23_)

___BEGIN_SYM
___DEF_SYM(0,___S_f64vec,"f64vec")
___DEF_SYM(1,___S_port,"port")
___DEF_SYM(2,___S_u64vec,"u64vec")
___DEF_SYM(3,___S_unit,"unit")
___DEF_SYM(4,___S_verbose,"verbose")
___END_SYM

#define ___SYM_f64vec ___SYM(0,___S_f64vec)
#define ___SYM_port ___SYM(1,___S_port)
#define ___SYM_u64vec ___SYM(2,___S_u64vec)
#define ___SYM_unit ___SYM(3,___S_unit)
#define ___SYM_verbose ___SYM(4,___S_verbose)

___BEGIN_GLO
___DEF_GLO(0,"jazz:current-monotonic")
___DEF_GLO(1,"jazz:current-monotonic-frequency")
___DEF_GLO(2,"jazz:current-monotonic-nanoseconds")

___DEF_GLO(3,"jazz:current-seconds")
___DEF_GLO(4,"jazz:kernel-boot")
___DEF_GLO(5,"jazz:kernel-boot-monotonic")
___DEF_GLO(6,"jazz:kernel-verbose?")
___DEF_GLO(7,"jazz:verbose-kernel")
___DEF_GLO(8,"verbose#")
___DEF_GLO(9,"##actlog-stop")
___DEF_GLO(10,"##current-time-point")
___DEF_GLO(11,"##f64vector")
___DEF_GLO(12,"##f64vector-ref")
___DEF_GLO(13,"##get-current-monotonic-time!")
___DEF_GLO(14,"##get-monotonic-time!")
___DEF_GLO(15,"##get-monotonic-time-frequency!")
___DEF_GLO(16,"##u64vector")
___DEF_GLO(17,"##u64vector-ref")
___DEF_GLO(18,"console-port")
___DEF_GLO(19,"display")
___DEF_GLO(20,"force-output")
___DEF_GLO(21,"newline")
___END_GLO

#define ___GLO_jazz_3a_current_2d_monotonic ___GLO(0,___G_jazz_3a_current_2d_monotonic)
#define ___PRM_jazz_3a_current_2d_monotonic ___PRM(0,___G_jazz_3a_current_2d_monotonic)
#define ___GLO_jazz_3a_current_2d_monotonic_2d_frequency ___GLO(1,___G_jazz_3a_current_2d_monotonic_2d_frequency)
#define ___PRM_jazz_3a_current_2d_monotonic_2d_frequency ___PRM(1,___G_jazz_3a_current_2d_monotonic_2d_frequency)
#define ___GLO_jazz_3a_current_2d_monotonic_2d_nanoseconds ___GLO(2,___G_jazz_3a_current_2d_monotonic_2d_nanoseconds)
#define ___PRM_jazz_3a_current_2d_monotonic_2d_nanoseconds ___PRM(2,___G_jazz_3a_current_2d_monotonic_2d_nanoseconds)
#define ___GLO_jazz_3a_current_2d_seconds ___GLO(3,___G_jazz_3a_current_2d_seconds)
#define ___PRM_jazz_3a_current_2d_seconds ___PRM(3,___G_jazz_3a_current_2d_seconds)
#define ___GLO_jazz_3a_kernel_2d_boot ___GLO(4,___G_jazz_3a_kernel_2d_boot)
#define ___PRM_jazz_3a_kernel_2d_boot ___PRM(4,___G_jazz_3a_kernel_2d_boot)
#define ___GLO_jazz_3a_kernel_2d_boot_2d_monotonic ___GLO(5,___G_jazz_3a_kernel_2d_boot_2d_monotonic)
#define ___PRM_jazz_3a_kernel_2d_boot_2d_monotonic ___PRM(5,___G_jazz_3a_kernel_2d_boot_2d_monotonic)
#define ___GLO_jazz_3a_kernel_2d_verbose_3f_ ___GLO(6,___G_jazz_3a_kernel_2d_verbose_3f_)
#define ___PRM_jazz_3a_kernel_2d_verbose_3f_ ___PRM(6,___G_jazz_3a_kernel_2d_verbose_3f_)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(7,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(7,___G_jazz_3a_verbose_2d_kernel)
#define ___GLO_verbose_23_ ___GLO(8,___G_verbose_23_)
#define ___PRM_verbose_23_ ___PRM(8,___G_verbose_23_)
#define ___GLO__23__23_actlog_2d_stop ___GLO(9,___G__23__23_actlog_2d_stop)
#define ___PRM__23__23_actlog_2d_stop ___PRM(9,___G__23__23_actlog_2d_stop)
#define ___GLO__23__23_current_2d_time_2d_point ___GLO(10,___G__23__23_current_2d_time_2d_point)
#define ___PRM__23__23_current_2d_time_2d_point ___PRM(10,___G__23__23_current_2d_time_2d_point)
#define ___GLO__23__23_f64vector ___GLO(11,___G__23__23_f64vector)
#define ___PRM__23__23_f64vector ___PRM(11,___G__23__23_f64vector)
#define ___GLO__23__23_f64vector_2d_ref ___GLO(12,___G__23__23_f64vector_2d_ref)
#define ___PRM__23__23_f64vector_2d_ref ___PRM(12,___G__23__23_f64vector_2d_ref)
#define ___GLO__23__23_get_2d_current_2d_monotonic_2d_time_21_ ___GLO(13,___G__23__23_get_2d_current_2d_monotonic_2d_time_21_)
#define ___PRM__23__23_get_2d_current_2d_monotonic_2d_time_21_ ___PRM(13,___G__23__23_get_2d_current_2d_monotonic_2d_time_21_)
#define ___GLO__23__23_get_2d_monotonic_2d_time_21_ ___GLO(14,___G__23__23_get_2d_monotonic_2d_time_21_)
#define ___PRM__23__23_get_2d_monotonic_2d_time_21_ ___PRM(14,___G__23__23_get_2d_monotonic_2d_time_21_)
#define ___GLO__23__23_get_2d_monotonic_2d_time_2d_frequency_21_ ___GLO(15,___G__23__23_get_2d_monotonic_2d_time_2d_frequency_21_)
#define ___PRM__23__23_get_2d_monotonic_2d_time_2d_frequency_21_ ___PRM(15,___G__23__23_get_2d_monotonic_2d_time_2d_frequency_21_)
#define ___GLO__23__23_u64vector ___GLO(16,___G__23__23_u64vector)
#define ___PRM__23__23_u64vector ___PRM(16,___G__23__23_u64vector)
#define ___GLO__23__23_u64vector_2d_ref ___GLO(17,___G__23__23_u64vector_2d_ref)
#define ___PRM__23__23_u64vector_2d_ref ___PRM(17,___G__23__23_u64vector_2d_ref)
#define ___GLO_console_2d_port ___GLO(18,___G_console_2d_port)
#define ___PRM_console_2d_port ___PRM(18,___G_console_2d_port)
#define ___GLO_display ___GLO(19,___G_display)
#define ___PRM_display ___PRM(19,___G_display)
#define ___GLO_force_2d_output ___GLO(20,___G_force_2d_output)
#define ___PRM_force_2d_output ___PRM(20,___G_force_2d_output)
#define ___GLO_newline ___GLO(21,___G_newline)
#define ___PRM_newline ___PRM(21,___G_newline)

___BEGIN_CNS
 ___DEF_CNS(___REF_FIX(32768),___REF_NUL)
,___DEF_CNS(___REF_FIX(32772),___REF_NUL)
___END_CNS

___DEF_SUB_FLO(___X0,0x0L,0x0L)
___DEF_SUB_VEC(___X1,2UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X2,24UL)
               ___VEC1(___REF_SUB(3))
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
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(4))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X5,55UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,115,121,110)
               ___STR8(116,97,120,47,118,101,114,98)
               ___STR7(111,115,101,46,115,99,109)
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048626))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048626))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048634))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048634))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048642))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048642))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(131152))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(131152))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(131155))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(95))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(262211))
               ___VEC0
___DEF_SUB_VEC(___X32,3UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(393285))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(393286))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048642))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(262203))
               ___VEC0
___DEF_SUB_VEC(___X40,3UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(393277))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(393278))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1048634))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(262195))
               ___VEC0
___DEF_SUB_VEC(___X48,3UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(393269))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(393270))
               ___VEC0
___DEF_SUB_VEC(___X52,4UL)
               ___VEC1(___REF_SYM(2,___S_u64vec))
               ___VEC1(___REF_CNS(0))
               ___VEC1(___REF_SYM(0,___S_f64vec))
               ___VEC1(___REF_CNS(1))
               ___VEC0
___DEF_SUB_STR(___X53,10UL)
               ___STR8(59,32,108,111,97,100,105,110)
               ___STR2(103,32)
___DEF_SUB_STR(___X54,3UL)
               ___STR3(46,46,46)
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X56,8UL)
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(95))
               ___VEC0
___DEF_SUB_VEC(___X59,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1179745))
               ___VEC0
___DEF_SUB_VEC(___X61,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(1179745))
               ___VEC0
___DEF_SUB_VEC(___X63,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(524386))
               ___VEC0
___DEF_SUB_VEC(___X65,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(524387))
               ___VEC0
___DEF_SUB_VEC(___X67,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(524388))
               ___VEC0
___DEF_SUB_VEC(___X69,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(524389))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(72))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(3,___S_unit))
               ___VEC1(___REF_SYM(1,___S_port))
               ___VEC0
___DEF_SUB_VEC(___X74,5UL)
               ___VEC1(___REF_SYM(4,___S_verbose))
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
,___DEF_SUB(___X63)
,___DEF_SUB(___X64)
,___DEF_SUB(___X65)
,___DEF_SUB(___X66)
,___DEF_SUB(___X67)
,___DEF_SUB(___X68)
,___DEF_SUB(___X69)
,___DEF_SUB(___X70)
,___DEF_SUB(___X71)
,___DEF_SUB(___X72)
,___DEF_SUB(___X73)
,___DEF_SUB(___X74)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4 ___D_F64(___F64V1)
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_verbose_23_)
___DEF_M_HLBL(___L1_verbose_23_)
___DEF_M_HLBL(___L2_verbose_23_)
___DEF_M_HLBL(___L3_verbose_23_)
___DEF_M_HLBL(___L4_verbose_23_)
___DEF_M_HLBL(___L5_verbose_23_)
___DEF_M_HLBL(___L6_verbose_23_)
___DEF_M_HLBL(___L7_verbose_23_)
___DEF_M_HLBL(___L8_verbose_23_)
___DEF_M_HLBL(___L9_verbose_23_)
___DEF_M_HLBL(___L10_verbose_23_)
___DEF_M_HLBL(___L11_verbose_23_)
___DEF_M_HLBL(___L12_verbose_23_)
___DEF_M_HLBL(___L13_verbose_23_)
___DEF_M_HLBL(___L14_verbose_23_)
___DEF_M_HLBL(___L15_verbose_23_)
___DEF_M_HLBL(___L16_verbose_23_)
___DEF_M_HLBL(___L17_verbose_23_)
___DEF_M_HLBL(___L18_verbose_23_)
___DEF_M_HLBL(___L19_verbose_23_)
___DEF_M_HLBL(___L20_verbose_23_)
___DEF_M_HLBL(___L21_verbose_23_)
___DEF_M_HLBL(___L22_verbose_23_)
___DEF_M_HLBL(___L23_verbose_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L1_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L2_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L3_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L4_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L5_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L6_jazz_3a_verbose_2d_kernel)
___DEF_M_HLBL(___L7_jazz_3a_verbose_2d_kernel)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_verbose_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_verbose_23_)
___DEF_P_HLBL(___L1_verbose_23_)
___DEF_P_HLBL(___L2_verbose_23_)
___DEF_P_HLBL(___L3_verbose_23_)
___DEF_P_HLBL(___L4_verbose_23_)
___DEF_P_HLBL(___L5_verbose_23_)
___DEF_P_HLBL(___L6_verbose_23_)
___DEF_P_HLBL(___L7_verbose_23_)
___DEF_P_HLBL(___L8_verbose_23_)
___DEF_P_HLBL(___L9_verbose_23_)
___DEF_P_HLBL(___L10_verbose_23_)
___DEF_P_HLBL(___L11_verbose_23_)
___DEF_P_HLBL(___L12_verbose_23_)
___DEF_P_HLBL(___L13_verbose_23_)
___DEF_P_HLBL(___L14_verbose_23_)
___DEF_P_HLBL(___L15_verbose_23_)
___DEF_P_HLBL(___L16_verbose_23_)
___DEF_P_HLBL(___L17_verbose_23_)
___DEF_P_HLBL(___L18_verbose_23_)
___DEF_P_HLBL(___L19_verbose_23_)
___DEF_P_HLBL(___L20_verbose_23_)
___DEF_P_HLBL(___L21_verbose_23_)
___DEF_P_HLBL(___L22_verbose_23_)
___DEF_P_HLBL(___L23_verbose_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_verbose_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_verbose_23_)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_verbose_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),9,___G__23__23_actlog_2d_stop)
___DEF_SLBL(2,___L2_verbose_23_)
   ___SET_GLO(3,___G_jazz_3a_current_2d_seconds,___GLO__23__23_current_2d_time_2d_point)
   ___IF(___NOT(___EQP(___GLO__23__23_f64vector,___PRM__23__23_f64vector)))
   ___GOTO(___L32_verbose_23_)
   ___END_IF
   ___BEGIN_ALLOC_F64VECTOR(1UL)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___END_ALLOC_F64VECTOR(1)
   ___SET_R1(___GET_F64VECTOR(1))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_verbose_23_)
   ___GOTO(___L24_verbose_23_)
___DEF_SLBL(4,___L4_verbose_23_)
___DEF_GLBL(___L24_verbose_23_)
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),21)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(0,___G_jazz_3a_current_2d_monotonic,___STK(-2))
   ___ADJFP(-2)
   ___CHECK_HEAP(5,4096)
___DEF_SLBL(5,___L5_verbose_23_)
   ___IF(___NOT(___EQP(___GLO__23__23_u64vector,___PRM__23__23_u64vector)))
   ___GOTO(___L30_verbose_23_)
   ___END_IF
   ___BEGIN_ALLOC_U64VECTOR(1UL)
   ___ADD_U64VECTOR_ELEM(0,___FIX(0L))
   ___END_ALLOC_U64VECTOR(1)
   ___SET_R1(___GET_U64VECTOR(1))
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_verbose_23_)
___DEF_GLBL(___L25_verbose_23_)
   ___SET_STK(0,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(0),17)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(2,___G_jazz_3a_current_2d_monotonic_2d_nanoseconds,___STK(0))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_verbose_23_)
   ___IF(___NOT(___EQP(___GLO__23__23_u64vector,___PRM__23__23_u64vector)))
   ___GOTO(___L28_verbose_23_)
   ___END_IF
   ___BEGIN_ALLOC_U64VECTOR(1UL)
   ___ADD_U64VECTOR_ELEM(0,___FIX(0L))
   ___END_ALLOC_U64VECTOR(1)
   ___SET_R1(___GET_U64VECTOR(1))
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_verbose_23_)
___DEF_GLBL(___L26_verbose_23_)
   ___SET_STK(0,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(0),13)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(1,___G_jazz_3a_current_2d_monotonic_2d_frequency,___STK(0))
   ___SET_R0(___LBL(10))
   ___ADJFP(2)
   ___CHECK_HEAP(9,4096)
___DEF_SLBL(9,___L9_verbose_23_)
   ___JUMPGLOSAFE(___SET_NARGS(0),3,___G_jazz_3a_current_2d_seconds)
___DEF_SLBL(10,___L10_verbose_23_)
   ___SET_GLO(4,___G_jazz_3a_kernel_2d_boot,___R1)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(0),0,___G_jazz_3a_current_2d_monotonic)
___DEF_SLBL(11,___L11_verbose_23_)
   ___SET_GLO(5,___G_jazz_3a_kernel_2d_boot_2d_monotonic,___R1)
   ___SET_GLO(6,___G_jazz_3a_kernel_2d_verbose_3f_,___FAL)
   ___SET_GLO(7,___G_jazz_3a_verbose_2d_kernel,___PRC(26))
   ___SET_R1(___VOID)
   ___POLL(12)
___DEF_SLBL(12,___L12_verbose_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(13,___L13_verbose_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(13,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(14))
   ___ADJFP(8)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),15,___G__23__23_get_2d_monotonic_2d_time_2d_frequency_21_)
___DEF_SLBL(14,___L14_verbose_23_)
   ___IF(___NOT(___EQP(___GLO__23__23_u64vector_2d_ref,___PRM__23__23_u64vector_2d_ref)))
   ___GOTO(___L27_verbose_23_)
   ___END_IF
   ___SET_R0(___CLO(___STK(-6),1))
   ___SET_R1(___U64VECTORREF(___R0,___FIX(0L)))
   ___ADJFP(-7)
   ___CHECK_HEAP(15,4096)
___DEF_SLBL(15,___L15_verbose_23_)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L27_verbose_23_)
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),17,___G__23__23_u64vector_2d_ref)
___DEF_GLBL(___L28_verbose_23_)
   ___SET_R1(___FIX(0L))
   ___SET_R0(___LBL(16))
   ___ADJFP(2)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),16,___G__23__23_u64vector)
___DEF_SLBL(16,___L16_verbose_23_)
   ___ADJFP(-2)
   ___GOTO(___L26_verbose_23_)
___DEF_SLBL(17,___L17_verbose_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(17,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(18))
   ___ADJFP(8)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),14,___G__23__23_get_2d_monotonic_2d_time_21_)
___DEF_SLBL(18,___L18_verbose_23_)
   ___IF(___NOT(___EQP(___GLO__23__23_u64vector_2d_ref,___PRM__23__23_u64vector_2d_ref)))
   ___GOTO(___L29_verbose_23_)
   ___END_IF
   ___SET_R0(___CLO(___STK(-6),1))
   ___SET_R1(___U64VECTORREF(___R0,___FIX(0L)))
   ___ADJFP(-7)
   ___CHECK_HEAP(19,4096)
___DEF_SLBL(19,___L19_verbose_23_)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L29_verbose_23_)
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),17,___G__23__23_u64vector_2d_ref)
___DEF_GLBL(___L30_verbose_23_)
   ___SET_R1(___FIX(0L))
   ___SET_R0(___LBL(20))
   ___ADJFP(2)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),16,___G__23__23_u64vector)
___DEF_SLBL(20,___L20_verbose_23_)
   ___ADJFP(-2)
   ___GOTO(___L25_verbose_23_)
___DEF_SLBL(21,___L21_verbose_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(21,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(22))
   ___ADJFP(8)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),13,___G__23__23_get_2d_current_2d_monotonic_2d_time_21_)
___DEF_SLBL(22,___L22_verbose_23_)
   ___IF(___NOT(___EQP(___GLO__23__23_f64vector_2d_ref,___PRM__23__23_f64vector_2d_ref)))
   ___GOTO(___L31_verbose_23_)
   ___END_IF
   ___SET_R0(___CLO(___STK(-6),1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R0,___FIX(0L)))
   ___SET_R1(___F64BOX(___F64V1))
   ___ADJFP(-7)
   ___CHECK_HEAP(23,4096)
___DEF_SLBL(23,___L23_verbose_23_)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L31_verbose_23_)
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),12,___G__23__23_f64vector_2d_ref)
___DEF_GLBL(___L32_verbose_23_)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(4))
   ___JUMPGLONOTSAFE(___SET_NARGS(1),11,___G__23__23_f64vector)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_verbose_2d_kernel
#undef ___PH_LBL0
#define ___PH_LBL0 26
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L1_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L2_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L3_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L4_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L5_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L6_jazz_3a_verbose_2d_kernel)
___DEF_P_HLBL(___L7_jazz_3a_verbose_2d_kernel)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_verbose_2d_kernel)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_verbose_2d_kernel)
   ___IF(___NOT(___NOTFALSEP(___GLO_jazz_3a_kernel_2d_verbose_3f_)))
   ___GOTO(___L8_jazz_3a_verbose_2d_kernel)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_verbose_2d_kernel)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),18,___G_console_2d_port)
___DEF_SLBL(2,___L2_jazz_3a_verbose_2d_kernel)
   ___SET_STK(-5,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(53))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G_display)
___DEF_SLBL(3,___L3_jazz_3a_verbose_2d_kernel)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G_display)
___DEF_SLBL(4,___L4_jazz_3a_verbose_2d_kernel)
   ___SET_R2(___STK(-5))
   ___SET_R1(___SUB(54))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G_display)
___DEF_SLBL(5,___L5_jazz_3a_verbose_2d_kernel)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_newline)
___DEF_SLBL(6,___L6_jazz_3a_verbose_2d_kernel)
   ___SET_R1(___STK(-5))
   ___SET_R0(___STK(-7))
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_3a_verbose_2d_kernel)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_force_2d_output)
___DEF_GLBL(___L8_jazz_3a_verbose_2d_kernel)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_verbose_23_,"verbose#",___REF_SUB(1),24,0)
,___DEF_LBL_PROC(___H_verbose_23_,0,-1)
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,2,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,2,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,2,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,2,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_verbose_23_,0,1)
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,1,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_PROC(___H_verbose_23_,0,1)
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,1,0,0x3f1L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_PROC(___H_verbose_23_,0,1)
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_verbose_23_,___IFD(___RETI,1,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_verbose_2d_kernel,0,___REF_SUB(55),8,0)
,___DEF_LBL_PROC(___H_jazz_3a_verbose_2d_kernel,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_verbose_2d_kernel,___IFD(___RETI,8,8,0x3f00L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(8,___G_verbose_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(8,___G_verbose_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_f64vec,"f64vec")
___DEF_MOD_SYM(1,___S_port,"port")
___DEF_MOD_SYM(2,___S_u64vec,"u64vec")
___DEF_MOD_SYM(3,___S_unit,"unit")
___DEF_MOD_SYM(4,___S_verbose,"verbose")
___END_MOD_SYM_KEY

#endif
