#ifdef ___LINKER_INFO
; File: "syntax.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:scheme.backend.scheme.runtime.syntax"
(("bin:scheme.backend.scheme.runtime.syntax"))
(
"%%assert-class"
"%%get-define-locator"
"%%object-ref"
"bin:scheme.backend.scheme.runtime.syntax"
"jazz:Define"
"jazz:Field"
"jazz:Object-Class"
"jazz:allocate-define"
"locator"
"macro"
"name"
"object"
"scheme.backend.scheme.runtime.syntax"
)
(
)
(
"bin:scheme.backend.scheme.runtime.syntax#"
)
(
)
(
"##interaction-cte"
"##make-macro-descr"
"##table-set!"
"##top-cte-add-macro!"
"jazz:class-info"
"jazz:make-class-info"
"jazz:register-macro"
"jazz:with-uniqueness"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:scheme.backend.scheme.runtime.syntax"
#define ___LINKER_ID ___LNK_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax
#define ___MH_PROC ___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 13
#define ___GLOCOUNT 9
#define ___SUPCOUNT 1
#define ___CNSCOUNT 10
#define ___SUBCOUNT 44
#define ___LBLCOUNT 21
#define ___MODDESCR ___REF_SUB(43)
#include "gambit.h"

___NEED_SYM(___S__25__25_assert_2d_class)
___NEED_SYM(___S__25__25_get_2d_define_2d_locator)
___NEED_SYM(___S__25__25_object_2d_ref)
___NEED_SYM(___S_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax)
___NEED_SYM(___S_jazz_3a_Define)
___NEED_SYM(___S_jazz_3a_Field)
___NEED_SYM(___S_jazz_3a_Object_2d_Class)
___NEED_SYM(___S_jazz_3a_allocate_2d_define)
___NEED_SYM(___S_locator)
___NEED_SYM(___S_macro)
___NEED_SYM(___S_name)
___NEED_SYM(___S_object)
___NEED_SYM(___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax)

___NEED_GLO(___G__23__23_interaction_2d_cte)
___NEED_GLO(___G__23__23_make_2d_macro_2d_descr)
___NEED_GLO(___G__23__23_table_2d_set_21_)
___NEED_GLO(___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___NEED_GLO(___G_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___NEED_GLO(___G_jazz_3a_class_2d_info)
___NEED_GLO(___G_jazz_3a_make_2d_class_2d_info)
___NEED_GLO(___G_jazz_3a_register_2d_macro)
___NEED_GLO(___G_jazz_3a_with_2d_uniqueness)

___BEGIN_SYM
___DEF_SYM(0,___S__25__25_assert_2d_class,"%%assert-class")
___DEF_SYM(1,___S__25__25_get_2d_define_2d_locator,"%%get-define-locator")
___DEF_SYM(2,___S__25__25_object_2d_ref,"%%object-ref")
___DEF_SYM(3,___S_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax,"bin:scheme.backend.scheme.runtime.syntax")

___DEF_SYM(4,___S_jazz_3a_Define,"jazz:Define")
___DEF_SYM(5,___S_jazz_3a_Field,"jazz:Field")
___DEF_SYM(6,___S_jazz_3a_Object_2d_Class,"jazz:Object-Class")
___DEF_SYM(7,___S_jazz_3a_allocate_2d_define,"jazz:allocate-define")
___DEF_SYM(8,___S_locator,"locator")
___DEF_SYM(9,___S_macro,"macro")
___DEF_SYM(10,___S_name,"name")
___DEF_SYM(11,___S_object,"object")
___DEF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax,"scheme.backend.scheme.runtime.syntax")

___END_SYM

#define ___SYM__25__25_assert_2d_class ___SYM(0,___S__25__25_assert_2d_class)
#define ___SYM__25__25_get_2d_define_2d_locator ___SYM(1,___S__25__25_get_2d_define_2d_locator)
#define ___SYM__25__25_object_2d_ref ___SYM(2,___S__25__25_object_2d_ref)
#define ___SYM_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax ___SYM(3,___S_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax)
#define ___SYM_jazz_3a_Define ___SYM(4,___S_jazz_3a_Define)
#define ___SYM_jazz_3a_Field ___SYM(5,___S_jazz_3a_Field)
#define ___SYM_jazz_3a_Object_2d_Class ___SYM(6,___S_jazz_3a_Object_2d_Class)
#define ___SYM_jazz_3a_allocate_2d_define ___SYM(7,___S_jazz_3a_allocate_2d_define)
#define ___SYM_locator ___SYM(8,___S_locator)
#define ___SYM_macro ___SYM(9,___S_macro)
#define ___SYM_name ___SYM(10,___S_name)
#define ___SYM_object ___SYM(11,___S_object)
#define ___SYM_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax ___SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax)

___BEGIN_GLO
___DEF_GLO(0,"bin:scheme.backend.scheme.runtime.syntax#")

___DEF_GLO(1,"##interaction-cte")
___DEF_GLO(2,"##make-macro-descr")
___DEF_GLO(3,"##table-set!")
___DEF_GLO(4,"##top-cte-add-macro!")
___DEF_GLO(5,"jazz:class-info")
___DEF_GLO(6,"jazz:make-class-info")
___DEF_GLO(7,"jazz:register-macro")
___DEF_GLO(8,"jazz:with-uniqueness")
___END_GLO

#define ___GLO_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_ ___GLO(0,___G_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
#define ___PRM_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_ ___PRM(0,___G_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
#define ___GLO__23__23_interaction_2d_cte ___GLO(1,___G__23__23_interaction_2d_cte)
#define ___PRM__23__23_interaction_2d_cte ___PRM(1,___G__23__23_interaction_2d_cte)
#define ___GLO__23__23_make_2d_macro_2d_descr ___GLO(2,___G__23__23_make_2d_macro_2d_descr)
#define ___PRM__23__23_make_2d_macro_2d_descr ___PRM(2,___G__23__23_make_2d_macro_2d_descr)
#define ___GLO__23__23_table_2d_set_21_ ___GLO(3,___G__23__23_table_2d_set_21_)
#define ___PRM__23__23_table_2d_set_21_ ___PRM(3,___G__23__23_table_2d_set_21_)
#define ___GLO__23__23_top_2d_cte_2d_add_2d_macro_21_ ___GLO(4,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___PRM__23__23_top_2d_cte_2d_add_2d_macro_21_ ___PRM(4,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___GLO_jazz_3a_class_2d_info ___GLO(5,___G_jazz_3a_class_2d_info)
#define ___PRM_jazz_3a_class_2d_info ___PRM(5,___G_jazz_3a_class_2d_info)
#define ___GLO_jazz_3a_make_2d_class_2d_info ___GLO(6,___G_jazz_3a_make_2d_class_2d_info)
#define ___PRM_jazz_3a_make_2d_class_2d_info ___PRM(6,___G_jazz_3a_make_2d_class_2d_info)
#define ___GLO_jazz_3a_register_2d_macro ___GLO(7,___G_jazz_3a_register_2d_macro)
#define ___PRM_jazz_3a_register_2d_macro ___PRM(7,___G_jazz_3a_register_2d_macro)
#define ___GLO_jazz_3a_with_2d_uniqueness ___GLO(8,___G_jazz_3a_with_2d_uniqueness)
#define ___PRM_jazz_3a_with_2d_uniqueness ___PRM(8,___G_jazz_3a_with_2d_uniqueness)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_NUL)
,___DEF_CNS(___REF_SYM(8,___S_locator),___REF_CNS(2))
,___DEF_CNS(___REF_VOID,___REF_CNS(3))
,___DEF_CNS(___REF_SYM(1,___S__25__25_get_2d_define_2d_locator),___REF_CNS(4))
,___DEF_CNS(___REF_FAL,___REF_NUL)
,___DEF_CNS(___REF_SYM(10,___S_name),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(8,___S_locator),___REF_NUL)
,___DEF_CNS(___REF_SYM(8,___S_locator),___REF_NUL)
,___DEF_CNS(___REF_FIX(2),___REF_NUL)
,___DEF_CNS(___REF_FIX(2),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(42))
               ___VEC0
___DEF_SUB_VEC(___X1,20UL)
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
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X20,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X22,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X24,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X32,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X34,3UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X36,3UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X42,1UL)
               ___VEC1(___REF_SYM(11,___S_object))
               ___VEC0
___DEF_SUB_VEC(___X43,5UL)
               ___VEC1(___REF_SYM(3,___S_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax))
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
___DEF_M_HLBL(___L0_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L1_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L2_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L3_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L4_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L5_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L6_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L7_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L8_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L9_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L10_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L11_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L12_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L13_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L14_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L15_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L16_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L17_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L18_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_M_HLBL(___L19_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L1_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L2_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L3_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L4_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L5_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L6_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L7_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L8_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L9_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L10_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L11_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L12_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L13_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L14_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L15_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L16_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L17_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L18_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___DEF_P_HLBL(___L19_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(5,___FAL)
   ___SET_R2(___LBL(14))
   ___SET_R3(___FAL)
   ___SET_R1(___FIX(2L))
   ___ADJFP(5)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G__23__23_make_2d_macro_2d_descr)
___DEF_SLBL(2,___L2_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM__25__25_get_2d_define_2d_locator)
   ___SET_R1(___GLO__23__23_interaction_2d_cte)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),4,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___DEF_SLBL(3,___L3_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_R2(___LBL(8))
   ___SET_R1(___SYM__25__25_get_2d_define_2d_locator)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),7,___G_jazz_3a_register_2d_macro)
___DEF_SLBL(4,___L4_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_STK(1,___SYM_jazz_3a_Object_2d_Class)
   ___SET_STK(2,___SYM_jazz_3a_Field)
   ___SET_STK(3,___SYM_jazz_3a_allocate_2d_define)
   ___SET_STK(4,___FAL)
   ___SET_STK(5,___SYM_macro)
   ___SET_STK(6,___CNS(0))
   ___SET_R3(___FIX(3L))
   ___SET_R2(___CNS(5))
   ___SET_R1(___CNS(7))
   ___SET_R0(___LBL(5))
   ___ADJFP(6)
   ___JUMPGLOSAFE(___SET_NARGS(9),6,___G_jazz_3a_make_2d_class_2d_info)
___DEF_SLBL(5,___L5_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_jazz_3a_Define)
   ___SET_R1(___GLO_jazz_3a_class_2d_info)
   ___SET_R0(___LBL(6))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),3,___G__23__23_table_2d_set_21_)
___DEF_SLBL(6,___L6_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___POLL(7)
___DEF_SLBL(7,___L7_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(8,___L8_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(8,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___LBL(12))
   ___ADJFP(8)
   ___POLL(9)
___DEF_SLBL(9,___L9_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(2),8,___G_jazz_3a_with_2d_uniqueness)
___DEF_SLBL(10,___L10_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___POLL(11)
___DEF_SLBL(11,___L11_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(12,___L12_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(12,1,0,0)
   ___SET_R2(___CONS(___R1,___CNS(8)))
   ___SET_R2(___CONS(___SYM__25__25_object_2d_ref,___R2))
   ___BEGIN_ALLOC_LIST(4UL,___R2)
   ___ADD_LIST_ELEM(1,___SYM_jazz_3a_Define)
   ___ADD_LIST_ELEM(2,___R1)
   ___ADD_LIST_ELEM(3,___SYM__25__25_assert_2d_class)
   ___END_ALLOC_LIST(4)
   ___SET_R2(___GET_LIST(4))
   ___SET_R1(___R2)
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(14,___L14_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(14,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___LBL(18))
   ___ADJFP(8)
   ___POLL(15)
___DEF_SLBL(15,___L15_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(2),8,___G_jazz_3a_with_2d_uniqueness)
___DEF_SLBL(16,___L16_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___POLL(17)
___DEF_SLBL(17,___L17_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(18,___L18_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(18,1,0,0)
   ___SET_R2(___CONS(___R1,___CNS(9)))
   ___SET_R2(___CONS(___SYM__25__25_object_2d_ref,___R2))
   ___BEGIN_ALLOC_LIST(4UL,___R2)
   ___ADD_LIST_ELEM(1,___SYM_jazz_3a_Define)
   ___ADD_LIST_ELEM(2,___R1)
   ___ADD_LIST_ELEM(3,___SYM__25__25_assert_2d_class)
   ___END_ALLOC_LIST(4)
   ___SET_R2(___GET_LIST(4))
   ___SET_R1(___R2)
   ___CHECK_HEAP(19,4096)
___DEF_SLBL(19,___L19_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,"bin:scheme.backend.scheme.runtime.syntax#",
___REF_SUB(0),20,0)
,___DEF_LBL_PROC(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,5,0,0x3f11L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S__25__25_assert_2d_class,"%%assert-class")
___DEF_MOD_SYM(1,___S__25__25_get_2d_define_2d_locator,"%%get-define-locator")
___DEF_MOD_SYM(2,___S__25__25_object_2d_ref,"%%object-ref")
___DEF_MOD_SYM(3,___S_bin_3a_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax,"bin:scheme.backend.scheme.runtime.syntax")

___DEF_MOD_SYM(4,___S_jazz_3a_Define,"jazz:Define")
___DEF_MOD_SYM(5,___S_jazz_3a_Field,"jazz:Field")
___DEF_MOD_SYM(6,___S_jazz_3a_Object_2d_Class,"jazz:Object-Class")
___DEF_MOD_SYM(7,___S_jazz_3a_allocate_2d_define,"jazz:allocate-define")
___DEF_MOD_SYM(8,___S_locator,"locator")
___DEF_MOD_SYM(9,___S_macro,"macro")
___DEF_MOD_SYM(10,___S_name,"name")
___DEF_MOD_SYM(11,___S_object,"object")
___DEF_MOD_SYM(12,___S_scheme_2e_backend_2e_scheme_2e_runtime_2e_syntax,"scheme.backend.scheme.runtime.syntax")

___END_MOD_SYM_KEY

#endif
