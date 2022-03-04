#ifdef ___LINKER_INFO
; File: "_runtime.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.language.runtime"
(("bin:jazz.language.runtime"))
(
"bin:jazz.language.runtime"
"foundation.dialect"
"jazz.language.runtime"
"jazz.language.runtime.debug"
"jazz.language.runtime.exception"
"jazz.language.runtime.format"
"jazz.language.runtime.functional"
"jazz.language.runtime.geometry"
"jazz.language.runtime.homogeneous"
"jazz.language.runtime.hubs"
"jazz.language.runtime.kernel"
"jazz.language.runtime.object"
"jazz.language.runtime.output"
"jazz.language.runtime.parse"
"jazz.language.runtime.platform"
"protected"
"scheme"
)
(
)
(
"bin:jazz.language.runtime#"
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
#define ___MODULE_NAME "bin:jazz.language.runtime"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_language_2e_runtime
#define ___MH_PROC ___H_bin_3a_jazz_2e_language_2e_runtime
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 17
#define ___GLOCOUNT 3
#define ___SUPCOUNT 1
#define ___CNSCOUNT 12
#define ___SUBCOUNT 40
#define ___LBLCOUNT 19
#define ___MODDESCR ___REF_SUB(39)
#include "gambit.h"

___NEED_SYM(___S_bin_3a_jazz_2e_language_2e_runtime)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz_2e_language_2e_runtime)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_exception)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_format)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_functional)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_geometry)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_homogeneous)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_hubs)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_kernel)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_object)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_output)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_platform)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_scheme)

___NEED_GLO(___G_bin_3a_jazz_2e_language_2e_runtime_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime,"bin:jazz.language.runtime")
___DEF_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(2,___S_jazz_2e_language_2e_runtime,"jazz.language.runtime")
___DEF_SYM(3,___S_jazz_2e_language_2e_runtime_2e_debug,"jazz.language.runtime.debug")
___DEF_SYM(4,___S_jazz_2e_language_2e_runtime_2e_exception,"jazz.language.runtime.exception")

___DEF_SYM(5,___S_jazz_2e_language_2e_runtime_2e_format,"jazz.language.runtime.format")
___DEF_SYM(6,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_geometry,"jazz.language.runtime.geometry")

___DEF_SYM(8,___S_jazz_2e_language_2e_runtime_2e_homogeneous,"jazz.language.runtime.homogeneous")

___DEF_SYM(9,___S_jazz_2e_language_2e_runtime_2e_hubs,"jazz.language.runtime.hubs")
___DEF_SYM(10,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_SYM(11,___S_jazz_2e_language_2e_runtime_2e_object,"jazz.language.runtime.object")
___DEF_SYM(12,___S_jazz_2e_language_2e_runtime_2e_output,"jazz.language.runtime.output")
___DEF_SYM(13,___S_jazz_2e_language_2e_runtime_2e_parse,"jazz.language.runtime.parse")
___DEF_SYM(14,___S_jazz_2e_language_2e_runtime_2e_platform,"jazz.language.runtime.platform")

___DEF_SYM(15,___S_protected,"protected")
___DEF_SYM(16,___S_scheme,"scheme")
___END_SYM

#define ___SYM_bin_3a_jazz_2e_language_2e_runtime ___SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime)
#define ___SYM_foundation_2e_dialect ___SYM(1,___S_foundation_2e_dialect)
#define ___SYM_jazz_2e_language_2e_runtime ___SYM(2,___S_jazz_2e_language_2e_runtime)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug ___SYM(3,___S_jazz_2e_language_2e_runtime_2e_debug)
#define ___SYM_jazz_2e_language_2e_runtime_2e_exception ___SYM(4,___S_jazz_2e_language_2e_runtime_2e_exception)
#define ___SYM_jazz_2e_language_2e_runtime_2e_format ___SYM(5,___S_jazz_2e_language_2e_runtime_2e_format)
#define ___SYM_jazz_2e_language_2e_runtime_2e_functional ___SYM(6,___S_jazz_2e_language_2e_runtime_2e_functional)
#define ___SYM_jazz_2e_language_2e_runtime_2e_geometry ___SYM(7,___S_jazz_2e_language_2e_runtime_2e_geometry)
#define ___SYM_jazz_2e_language_2e_runtime_2e_homogeneous ___SYM(8,___S_jazz_2e_language_2e_runtime_2e_homogeneous)
#define ___SYM_jazz_2e_language_2e_runtime_2e_hubs ___SYM(9,___S_jazz_2e_language_2e_runtime_2e_hubs)
#define ___SYM_jazz_2e_language_2e_runtime_2e_kernel ___SYM(10,___S_jazz_2e_language_2e_runtime_2e_kernel)
#define ___SYM_jazz_2e_language_2e_runtime_2e_object ___SYM(11,___S_jazz_2e_language_2e_runtime_2e_object)
#define ___SYM_jazz_2e_language_2e_runtime_2e_output ___SYM(12,___S_jazz_2e_language_2e_runtime_2e_output)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse ___SYM(13,___S_jazz_2e_language_2e_runtime_2e_parse)
#define ___SYM_jazz_2e_language_2e_runtime_2e_platform ___SYM(14,___S_jazz_2e_language_2e_runtime_2e_platform)
#define ___SYM_protected ___SYM(15,___S_protected)
#define ___SYM_scheme ___SYM(16,___S_scheme)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.language.runtime#")
___DEF_GLO(1,"jazz:load-unit")
___DEF_GLO(2,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_language_2e_runtime_23_ ___GLO(0,___G_bin_3a_jazz_2e_language_2e_runtime_23_)
#define ___PRM_bin_3a_jazz_2e_language_2e_runtime_23_ ___PRM(0,___G_bin_3a_jazz_2e_language_2e_runtime_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(2,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(2,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_SYM(3,___S_jazz_2e_language_2e_runtime_2e_debug),___REF_CNS(1))
,___DEF_CNS(___REF_SYM(4,___S_jazz_2e_language_2e_runtime_2e_exception),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(5,___S_jazz_2e_language_2e_runtime_2e_format),___REF_CNS(3))
,___DEF_CNS(___REF_SYM(6,___S_jazz_2e_language_2e_runtime_2e_functional),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_geometry),___REF_CNS(5))
,___DEF_CNS(___REF_SYM(8,___S_jazz_2e_language_2e_runtime_2e_homogeneous),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(9,___S_jazz_2e_language_2e_runtime_2e_hubs),___REF_CNS(7))
,___DEF_CNS(___REF_SYM(10,___S_jazz_2e_language_2e_runtime_2e_kernel),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(11,___S_jazz_2e_language_2e_runtime_2e_object),___REF_CNS(9))
,___DEF_CNS(___REF_SYM(12,___S_jazz_2e_language_2e_runtime_2e_output),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(13,___S_jazz_2e_language_2e_runtime_2e_parse),___REF_CNS(11))
,___DEF_CNS(___REF_SYM(14,___S_jazz_2e_language_2e_runtime_2e_platform),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X1,18UL)
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
               ___VEC1(___REF_SUB(26))
               ___VEC1(___REF_SUB(28))
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_language_2e_runtime))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X38,0UL)
               ___VEC0
___DEF_SUB_VEC(___X39,5UL)
               ___VEC1(___REF_SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_language_2e_runtime_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_language_2e_runtime_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_language_2e_runtime_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_language_2e_runtime_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_kernel)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_debug)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_exception)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_format)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_functional)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_geometry)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_homogeneous)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_hubs)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_object)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_output)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_parse)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_platform)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___SET_STK(1,___SYM_jazz_2e_language_2e_runtime)
   ___SET_R3(___NUL)
   ___SET_R2(___CNS(0))
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(16))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G_jazz_3a_register_2d_module)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___POLL(17)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_language_2e_runtime_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_language_2e_runtime_23_,"bin:jazz.language.runtime#",___REF_SUB(0)
,18,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_runtime_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_language_2e_runtime_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_language_2e_runtime_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime,"bin:jazz.language.runtime")
___DEF_MOD_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(2,___S_jazz_2e_language_2e_runtime,"jazz.language.runtime")
___DEF_MOD_SYM(3,___S_jazz_2e_language_2e_runtime_2e_debug,"jazz.language.runtime.debug")
___DEF_MOD_SYM(4,___S_jazz_2e_language_2e_runtime_2e_exception,"jazz.language.runtime.exception")

___DEF_MOD_SYM(5,___S_jazz_2e_language_2e_runtime_2e_format,"jazz.language.runtime.format")
___DEF_MOD_SYM(6,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_MOD_SYM(7,___S_jazz_2e_language_2e_runtime_2e_geometry,"jazz.language.runtime.geometry")

___DEF_MOD_SYM(8,___S_jazz_2e_language_2e_runtime_2e_homogeneous,"jazz.language.runtime.homogeneous")

___DEF_MOD_SYM(9,___S_jazz_2e_language_2e_runtime_2e_hubs,"jazz.language.runtime.hubs")
___DEF_MOD_SYM(10,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_MOD_SYM(11,___S_jazz_2e_language_2e_runtime_2e_object,"jazz.language.runtime.object")
___DEF_MOD_SYM(12,___S_jazz_2e_language_2e_runtime_2e_output,"jazz.language.runtime.output")
___DEF_MOD_SYM(13,___S_jazz_2e_language_2e_runtime_2e_parse,"jazz.language.runtime.parse")
___DEF_MOD_SYM(14,___S_jazz_2e_language_2e_runtime_2e_platform,"jazz.language.runtime.platform")

___DEF_MOD_SYM(15,___S_protected,"protected")
___DEF_MOD_SYM(16,___S_scheme,"scheme")
___END_MOD_SYM_KEY

#endif
