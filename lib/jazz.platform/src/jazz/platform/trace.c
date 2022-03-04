#ifdef ___LINKER_INFO
; File: "trace.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.platform.trace"
(("bin:jazz.platform.trace"))
(
"bin:jazz.platform.trace"
"foundation.dialect"
"jazz"
"jazz.platform.trace"
"jazz.platform.trace:trace-platform"
"jazz.platform.trace:trace-platform?"
"name"
"present"
"public"
"rest"
"temp.3"
"temp.5"
"trace-platform"
"trace-platform?"
"u8vector"
"x.6"
)
(
)
(
"bin:jazz.platform.trace#"
"jazz.platform.trace:trace-platform.setting"
"jazz.platform.trace:trace-platform?.setting"
)
(
"jazz.platform.trace:trace-platform"
"jazz.platform.trace:trace-platform?"
)
(
"apply"
"jazz:load-unit"
"jazz:register-module"
"jazz:terminal"
"map"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.platform.trace"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_platform_2e_trace
#define ___MH_PROC ___H_bin_3a_jazz_2e_platform_2e_trace
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 16
#define ___GLOCOUNT 10
#define ___SUPCOUNT 5
#define ___CNSCOUNT 4
#define ___SUBCOUNT 65
#define ___LBLCOUNT 30
#define ___MODDESCR ___REF_SUB(64)
#include "gambit.h"

___NEED_SYM(___S_bin_3a_jazz_2e_platform_2e_trace)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_platform_2e_trace)
___NEED_SYM(___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
___NEED_SYM(___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
___NEED_SYM(___S_name)
___NEED_SYM(___S_present)
___NEED_SYM(___S_public)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_temp_2e_3)
___NEED_SYM(___S_temp_2e_5)
___NEED_SYM(___S_trace_2d_platform)
___NEED_SYM(___S_trace_2d_platform_3f_)
___NEED_SYM(___S_u8vector)
___NEED_SYM(___S_x_2e_6)

___NEED_GLO(___G_apply)
___NEED_GLO(___G_bin_3a_jazz_2e_platform_2e_trace_23_)
___NEED_GLO(___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
___NEED_GLO(___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___NEED_GLO(___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
___NEED_GLO(___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_terminal)
___NEED_GLO(___G_map)

___BEGIN_SYM
___DEF_SYM(0,___S_bin_3a_jazz_2e_platform_2e_trace,"bin:jazz.platform.trace")
___DEF_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(2,___S_jazz,"jazz")
___DEF_SYM(3,___S_jazz_2e_platform_2e_trace,"jazz.platform.trace")
___DEF_SYM(4,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform,"jazz.platform.trace:trace-platform")

___DEF_SYM(5,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_,"jazz.platform.trace:trace-platform?")

___DEF_SYM(6,___S_name,"name")
___DEF_SYM(7,___S_present,"present")
___DEF_SYM(8,___S_public,"public")
___DEF_SYM(9,___S_rest,"rest")
___DEF_SYM(10,___S_temp_2e_3,"temp.3")
___DEF_SYM(11,___S_temp_2e_5,"temp.5")
___DEF_SYM(12,___S_trace_2d_platform,"trace-platform")
___DEF_SYM(13,___S_trace_2d_platform_3f_,"trace-platform?")
___DEF_SYM(14,___S_u8vector,"u8vector")
___DEF_SYM(15,___S_x_2e_6,"x.6")
___END_SYM

#define ___SYM_bin_3a_jazz_2e_platform_2e_trace ___SYM(0,___S_bin_3a_jazz_2e_platform_2e_trace)
#define ___SYM_foundation_2e_dialect ___SYM(1,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(2,___S_jazz)
#define ___SYM_jazz_2e_platform_2e_trace ___SYM(3,___S_jazz_2e_platform_2e_trace)
#define ___SYM_jazz_2e_platform_2e_trace_3a_trace_2d_platform ___SYM(4,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
#define ___SYM_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_ ___SYM(5,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
#define ___SYM_name ___SYM(6,___S_name)
#define ___SYM_present ___SYM(7,___S_present)
#define ___SYM_public ___SYM(8,___S_public)
#define ___SYM_rest ___SYM(9,___S_rest)
#define ___SYM_temp_2e_3 ___SYM(10,___S_temp_2e_3)
#define ___SYM_temp_2e_5 ___SYM(11,___S_temp_2e_5)
#define ___SYM_trace_2d_platform ___SYM(12,___S_trace_2d_platform)
#define ___SYM_trace_2d_platform_3f_ ___SYM(13,___S_trace_2d_platform_3f_)
#define ___SYM_u8vector ___SYM(14,___S_u8vector)
#define ___SYM_x_2e_6 ___SYM(15,___S_x_2e_6)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.platform.trace#")
___DEF_GLO(1,"jazz.platform.trace:trace-platform")

___DEF_GLO(2,"jazz.platform.trace:trace-platform.setting")

___DEF_GLO(3,"jazz.platform.trace:trace-platform?")

___DEF_GLO(4,"jazz.platform.trace:trace-platform?.setting")

___DEF_GLO(5,"apply")
___DEF_GLO(6,"jazz:load-unit")
___DEF_GLO(7,"jazz:register-module")
___DEF_GLO(8,"jazz:terminal")
___DEF_GLO(9,"map")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_platform_2e_trace_23_ ___GLO(0,___G_bin_3a_jazz_2e_platform_2e_trace_23_)
#define ___PRM_bin_3a_jazz_2e_platform_2e_trace_23_ ___PRM(0,___G_bin_3a_jazz_2e_platform_2e_trace_23_)
#define ___GLO_jazz_2e_platform_2e_trace_3a_trace_2d_platform ___GLO(1,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
#define ___PRM_jazz_2e_platform_2e_trace_3a_trace_2d_platform ___PRM(1,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
#define ___GLO_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting ___GLO(2,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
#define ___PRM_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting ___PRM(2,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
#define ___GLO_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_ ___GLO(3,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
#define ___PRM_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_ ___PRM(3,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
#define ___GLO_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting ___GLO(4,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting)
#define ___PRM_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting ___PRM(4,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting)
#define ___GLO_apply ___GLO(5,___G_apply)
#define ___PRM_apply ___PRM(5,___G_apply)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(6,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(6,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(7,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(7,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_terminal ___GLO(8,___G_jazz_3a_terminal)
#define ___PRM_jazz_3a_terminal ___PRM(8,___G_jazz_3a_terminal)
#define ___GLO_map ___GLO(9,___G_map)
#define ___PRM_map ___PRM(9,___G_map)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(12,___S_trace_2d_platform),___REF_SYM(4,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(13,___S_trace_2d_platform_3f_),___REF_SYM(5,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_))
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
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(46))
               ___VEC0
___DEF_SUB_VEC(___X14,0UL)
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SUB(16))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X16,1UL)
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X19,0UL)
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X21,18UL)
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
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X24,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X26,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X30,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_FIX(360456))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X32,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X34,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_FIX(131082))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X36,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_FIX(131082))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X38,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_FIX(131082))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X40,5UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X42,5UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X44,5UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X46,4UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X48,4UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(262198))
               ___VEC0
___DEF_SUB_VEC(___X50,4UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(262198))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(852018))
               ___VEC0
___DEF_SUB_VEC(___X56,4UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(1638454))
               ___VEC0
___DEF_SUB_VEC(___X58,6UL)
               ___VEC1(___REF_SYM(9,___S_rest))
               ___VEC1(___REF_SYM(6,___S_name))
               ___VEC1(___REF_SYM(10,___S_temp_2e_3))
               ___VEC1(___REF_SYM(7,___S_present))
               ___VEC1(___REF_SYM(11,___S_temp_2e_5))
               ___VEC1(___REF_SYM(15,___S_x_2e_6))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X60,1UL)
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(62))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(3,___S_jazz_2e_platform_2e_trace))
               ___VEC1(___REF_FIX(46))
               ___VEC0
___DEF_SUB_VEC(___X63,0UL)
               ___VEC0
___DEF_SUB_VEC(___X64,5UL)
               ___VEC1(___REF_SYM(0,___S_bin_3a_jazz_2e_platform_2e_trace))
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
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L2_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L3_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L4_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L5_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L6_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L7_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L8_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L9_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L10_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L11_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L12_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L13_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L14_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L15_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L16_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL(___L17_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_platform_2e_trace_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_platform_2e_trace_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_platform_2e_trace_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),6,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___SET_STK(1,___SYM_jazz_2e_platform_2e_trace)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),7,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___SET_GLO(4,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting,___TRU)
   ___SET_GLO(3,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_,___PRC(8))
   ___SET_GLO(2,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___PRC(10))
   ___SET_GLO(1,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform,___PRC(29))
   ___SET_R1(___VOID)
   ___POLL(5)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_platform_2e_trace_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 8
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_)
   ___SET_R2(___CAR(___R1))
   ___SET_GLO(4,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f__2e_setting,___R2)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting
#undef ___PH_LBL0
#define ___PH_LBL0 10
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L2_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L3_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L4_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L5_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L6_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L7_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L8_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L9_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L10_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L11_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L12_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L13_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L14_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L15_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L16_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_P_HLBL(___L17_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(3)
   ___IF(___NOT(___PROCEDUREP(___LBL(15))))
   ___GOTO(___L25_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___END_IF
   ___SET_R2(___LBL(15))
   ___SET_R3(___STK(0))
   ___SET_R1(___STK(0))
   ___SET_R0(___LBL(12))
   ___ADJFP(5)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___GOTO(___L19_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_GLBL(___L18_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R3(___CDR(___R3))
   ___SET_R0(___LBL(10))
   ___ADJFP(8)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_GLBL(___L19_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L18_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L22_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L21_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___END_IF
___DEF_GLBL(___L20_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_R0(___LBL(5))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(5,___L5_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(6))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L20_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___END_IF
___DEF_GLBL(___L21_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(6,___L6_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L22_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R2(___R1)
   ___SET_R1(___STK(3))
   ___SET_R0(___LBL(9))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_SLBL(9,___L9_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_GLBL(___L23_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___GOTO(___L23_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_SLBL(10,___L10_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(12,___L12_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_3a_terminal)
   ___SET_R0(___LBL(13))
   ___JUMPPRM(___SET_NARGS(3),___PRM_apply)
___DEF_SLBL(13,___L13_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___POLL(14)
___DEF_SLBL(14,___L14_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(15,___L15_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(15,1,0,0)
   ___IF(___NOT(___U8VECTORP(___R1)))
   ___GOTO(___L24_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___END_IF
   ___SET_R2(___U8VECTORLENGTH(___R1))
   ___BEGIN_ALLOC_LIST(2UL,___R2)
   ___ADD_LIST_ELEM(1,___SYM_u8vector)
   ___END_ALLOC_LIST(2)
   ___SET_R2(___GET_LIST(2))
   ___SET_R1(___R2)
   ___CHECK_HEAP(16,4096)
___DEF_SLBL(16,___L16_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L24_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L25_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___SET_R1(___LBL(15))
   ___SET_R0(___LBL(17))
   ___ADJFP(5)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_SLBL(17,___L17_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___DEF_GLBL(___L26_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___GOTO(___L26_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform
#undef ___PH_LBL0
#define ___PH_LBL0 29
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
   ___END_IF
   ___SET_R1(___GLO_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_2e_platform_2e_trace_3a_trace_2d_platform)
   ___SET_R2(___CAR(___R1))
   ___SET_GLO(2,___G_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___R2)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_platform_2e_trace_23_,"bin:jazz.platform.trace#",___REF_SUB(0),
6,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_platform_2e_trace_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_trace_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_trace_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_trace_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_trace_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_platform_2e_trace_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_,0,___REF_SUB(15),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,0,___REF_SUB(20),18,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform_2e_setting,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_INTRO(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform,0,___REF_SUB(59),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_platform_2e_trace_3a_trace_2d_platform,1,-1)
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_platform_2e_trace_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_platform_2e_trace_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_bin_3a_jazz_2e_platform_2e_trace,"bin:jazz.platform.trace")
___DEF_MOD_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(2,___S_jazz,"jazz")
___DEF_MOD_SYM(3,___S_jazz_2e_platform_2e_trace,"jazz.platform.trace")
___DEF_MOD_SYM(4,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform,"jazz.platform.trace:trace-platform")

___DEF_MOD_SYM(5,___S_jazz_2e_platform_2e_trace_3a_trace_2d_platform_3f_,"jazz.platform.trace:trace-platform?")

___DEF_MOD_SYM(6,___S_name,"name")
___DEF_MOD_SYM(7,___S_present,"present")
___DEF_MOD_SYM(8,___S_public,"public")
___DEF_MOD_SYM(9,___S_rest,"rest")
___DEF_MOD_SYM(10,___S_temp_2e_3,"temp.3")
___DEF_MOD_SYM(11,___S_temp_2e_5,"temp.5")
___DEF_MOD_SYM(12,___S_trace_2d_platform,"trace-platform")
___DEF_MOD_SYM(13,___S_trace_2d_platform_3f_,"trace-platform?")
___DEF_MOD_SYM(14,___S_u8vector,"u8vector")
___DEF_MOD_SYM(15,___S_x_2e_6,"x.6")
___END_MOD_SYM_KEY

#endif
