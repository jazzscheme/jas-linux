#ifdef ___LINKER_INFO
; File: "block.c", produced by Gambit v4.8.9
(
408009
(C)
"block"
(("block"))
(
"begin"
"block"
"body"
"expr"
"form-src"
"jazz:kernel-declares"
"jazz:verbose-kernel"
"kernel.block"
"name"
"quote"
)
(
)
(
"block#"
"jazz:generate-symbol-context"
"jazz:source-code"
)
(
"jazz:generate-symbol-for"
"jazz:testing"
"jazz:testing?"
)
(
"##interaction-cte"
"##make-macro-descr"
"##source-code"
"##source?"
"##top-cte-add-macro!"
"cadr"
"cddr"
"jazz:register-macro"
"jazz:verbose-kernel"
"make-parameter"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "block"
#define ___LINKER_ID ___LNK_block
#define ___MH_PROC ___H_block
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 10
#define ___GLOCOUNT 16
#define ___SUPCOUNT 6
#define ___CNSCOUNT 2
#define ___SUBCOUNT 78
#define ___LBLCOUNT 37
#define ___MODDESCR ___REF_SUB(77)
#include "gambit.h"

___NEED_SYM(___S_begin)
___NEED_SYM(___S_block)
___NEED_SYM(___S_body)
___NEED_SYM(___S_expr)
___NEED_SYM(___S_form_2d_src)
___NEED_SYM(___S_jazz_3a_kernel_2d_declares)
___NEED_SYM(___S_jazz_3a_verbose_2d_kernel)
___NEED_SYM(___S_kernel_2e_block)
___NEED_SYM(___S_name)
___NEED_SYM(___S_quote)

___NEED_GLO(___G__23__23_interaction_2d_cte)
___NEED_GLO(___G__23__23_make_2d_macro_2d_descr)
___NEED_GLO(___G__23__23_source_2d_code)
___NEED_GLO(___G__23__23_source_3f_)
___NEED_GLO(___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___NEED_GLO(___G_block_23_)
___NEED_GLO(___G_cadr)
___NEED_GLO(___G_cddr)
___NEED_GLO(___G_jazz_3a_generate_2d_symbol_2d_context)
___NEED_GLO(___G_jazz_3a_generate_2d_symbol_2d_for)
___NEED_GLO(___G_jazz_3a_register_2d_macro)
___NEED_GLO(___G_jazz_3a_source_2d_code)
___NEED_GLO(___G_jazz_3a_testing)
___NEED_GLO(___G_jazz_3a_testing_3f_)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_make_2d_parameter)

___BEGIN_SYM
___DEF_SYM(0,___S_begin,"begin")
___DEF_SYM(1,___S_block,"block")
___DEF_SYM(2,___S_body,"body")
___DEF_SYM(3,___S_expr,"expr")
___DEF_SYM(4,___S_form_2d_src,"form-src")
___DEF_SYM(5,___S_jazz_3a_kernel_2d_declares,"jazz:kernel-declares")
___DEF_SYM(6,___S_jazz_3a_verbose_2d_kernel,"jazz:verbose-kernel")
___DEF_SYM(7,___S_kernel_2e_block,"kernel.block")
___DEF_SYM(8,___S_name,"name")
___DEF_SYM(9,___S_quote,"quote")
___END_SYM

#define ___SYM_begin ___SYM(0,___S_begin)
#define ___SYM_block ___SYM(1,___S_block)
#define ___SYM_body ___SYM(2,___S_body)
#define ___SYM_expr ___SYM(3,___S_expr)
#define ___SYM_form_2d_src ___SYM(4,___S_form_2d_src)
#define ___SYM_jazz_3a_kernel_2d_declares ___SYM(5,___S_jazz_3a_kernel_2d_declares)
#define ___SYM_jazz_3a_verbose_2d_kernel ___SYM(6,___S_jazz_3a_verbose_2d_kernel)
#define ___SYM_kernel_2e_block ___SYM(7,___S_kernel_2e_block)
#define ___SYM_name ___SYM(8,___S_name)
#define ___SYM_quote ___SYM(9,___S_quote)

___BEGIN_GLO
___DEF_GLO(0,"block#")
___DEF_GLO(1,"jazz:generate-symbol-context")
___DEF_GLO(2,"jazz:generate-symbol-for")
___DEF_GLO(3,"jazz:source-code")
___DEF_GLO(4,"jazz:testing")
___DEF_GLO(5,"jazz:testing?")
___DEF_GLO(6,"##interaction-cte")
___DEF_GLO(7,"##make-macro-descr")
___DEF_GLO(8,"##source-code")
___DEF_GLO(9,"##source?")
___DEF_GLO(10,"##top-cte-add-macro!")
___DEF_GLO(11,"cadr")
___DEF_GLO(12,"cddr")
___DEF_GLO(13,"jazz:register-macro")
___DEF_GLO(14,"jazz:verbose-kernel")
___DEF_GLO(15,"make-parameter")
___END_GLO

#define ___GLO_block_23_ ___GLO(0,___G_block_23_)
#define ___PRM_block_23_ ___PRM(0,___G_block_23_)
#define ___GLO_jazz_3a_generate_2d_symbol_2d_context ___GLO(1,___G_jazz_3a_generate_2d_symbol_2d_context)
#define ___PRM_jazz_3a_generate_2d_symbol_2d_context ___PRM(1,___G_jazz_3a_generate_2d_symbol_2d_context)
#define ___GLO_jazz_3a_generate_2d_symbol_2d_for ___GLO(2,___G_jazz_3a_generate_2d_symbol_2d_for)
#define ___PRM_jazz_3a_generate_2d_symbol_2d_for ___PRM(2,___G_jazz_3a_generate_2d_symbol_2d_for)
#define ___GLO_jazz_3a_source_2d_code ___GLO(3,___G_jazz_3a_source_2d_code)
#define ___PRM_jazz_3a_source_2d_code ___PRM(3,___G_jazz_3a_source_2d_code)
#define ___GLO_jazz_3a_testing ___GLO(4,___G_jazz_3a_testing)
#define ___PRM_jazz_3a_testing ___PRM(4,___G_jazz_3a_testing)
#define ___GLO_jazz_3a_testing_3f_ ___GLO(5,___G_jazz_3a_testing_3f_)
#define ___PRM_jazz_3a_testing_3f_ ___PRM(5,___G_jazz_3a_testing_3f_)
#define ___GLO__23__23_interaction_2d_cte ___GLO(6,___G__23__23_interaction_2d_cte)
#define ___PRM__23__23_interaction_2d_cte ___PRM(6,___G__23__23_interaction_2d_cte)
#define ___GLO__23__23_make_2d_macro_2d_descr ___GLO(7,___G__23__23_make_2d_macro_2d_descr)
#define ___PRM__23__23_make_2d_macro_2d_descr ___PRM(7,___G__23__23_make_2d_macro_2d_descr)
#define ___GLO__23__23_source_2d_code ___GLO(8,___G__23__23_source_2d_code)
#define ___PRM__23__23_source_2d_code ___PRM(8,___G__23__23_source_2d_code)
#define ___GLO__23__23_source_3f_ ___GLO(9,___G__23__23_source_3f_)
#define ___PRM__23__23_source_3f_ ___PRM(9,___G__23__23_source_3f_)
#define ___GLO__23__23_top_2d_cte_2d_add_2d_macro_21_ ___GLO(10,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___PRM__23__23_top_2d_cte_2d_add_2d_macro_21_ ___PRM(10,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
#define ___GLO_cadr ___GLO(11,___G_cadr)
#define ___PRM_cadr ___PRM(11,___G_cadr)
#define ___GLO_cddr ___GLO(12,___G_cddr)
#define ___PRM_cddr ___PRM(12,___G_cddr)
#define ___GLO_jazz_3a_register_2d_macro ___GLO(13,___G_jazz_3a_register_2d_macro)
#define ___PRM_jazz_3a_register_2d_macro ___PRM(13,___G_jazz_3a_register_2d_macro)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(14,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(14,___G_jazz_3a_verbose_2d_kernel)
#define ___GLO_make_2d_parameter ___GLO(15,___G_make_2d_parameter)
#define ___PRM_make_2d_parameter ___PRM(15,___G_make_2d_parameter)

___BEGIN_CNS
 ___DEF_CNS(___REF_SYM(5,___S_jazz_3a_kernel_2d_declares),___REF_NUL)
,___DEF_CNS(___REF_SYM(5,___S_jazz_3a_kernel_2d_declares),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X1,30UL)
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
               ___VEC1(___REF_SUB(27))
               ___VEC1(___REF_SUB(29))
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_SUB(39))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,53UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,115,121,110)
               ___STR8(116,97,120,47,98,108,111,99)
               ___STR5(107,46,115,99,109)
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
               ___VEC1(___REF_FIX(131113))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131116))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X25,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(26))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X27,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(28))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X29,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X31,3UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X33,4UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X39,3UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X41,3UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X45,3UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X47,3UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X49,3UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X51,3UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X53,4UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X59,3UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_FIX(98306))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X61,3UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X63,3UL)
               ___VEC1(___REF_SYM(4,___S_form_2d_src))
               ___VEC1(___REF_SYM(8,___S_name))
               ___VEC1(___REF_SYM(2,___S_body))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X65,5UL)
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X68,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393271))
               ___VEC0
___DEF_SUB_VEC(___X70,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393271))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393272))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X76,1UL)
               ___VEC1(___REF_SYM(3,___S_expr))
               ___VEC0
___DEF_SUB_VEC(___X77,5UL)
               ___VEC1(___REF_SYM(1,___S_block))
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
,___DEF_SUB(___X75)
,___DEF_SUB(___X76)
,___DEF_SUB(___X77)
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
___DEF_M_HLBL(___L0_block_23_)
___DEF_M_HLBL(___L1_block_23_)
___DEF_M_HLBL(___L2_block_23_)
___DEF_M_HLBL(___L3_block_23_)
___DEF_M_HLBL(___L4_block_23_)
___DEF_M_HLBL(___L5_block_23_)
___DEF_M_HLBL(___L6_block_23_)
___DEF_M_HLBL(___L7_block_23_)
___DEF_M_HLBL(___L8_block_23_)
___DEF_M_HLBL(___L9_block_23_)
___DEF_M_HLBL(___L10_block_23_)
___DEF_M_HLBL(___L11_block_23_)
___DEF_M_HLBL(___L12_block_23_)
___DEF_M_HLBL(___L13_block_23_)
___DEF_M_HLBL(___L14_block_23_)
___DEF_M_HLBL(___L15_block_23_)
___DEF_M_HLBL(___L16_block_23_)
___DEF_M_HLBL(___L17_block_23_)
___DEF_M_HLBL(___L18_block_23_)
___DEF_M_HLBL(___L19_block_23_)
___DEF_M_HLBL(___L20_block_23_)
___DEF_M_HLBL(___L21_block_23_)
___DEF_M_HLBL(___L22_block_23_)
___DEF_M_HLBL(___L23_block_23_)
___DEF_M_HLBL(___L24_block_23_)
___DEF_M_HLBL(___L25_block_23_)
___DEF_M_HLBL(___L26_block_23_)
___DEF_M_HLBL(___L27_block_23_)
___DEF_M_HLBL(___L28_block_23_)
___DEF_M_HLBL(___L29_block_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_source_2d_code)
___DEF_M_HLBL(___L1_jazz_3a_source_2d_code)
___DEF_M_HLBL(___L2_jazz_3a_source_2d_code)
___DEF_M_HLBL(___L3_jazz_3a_source_2d_code)
___DEF_M_HLBL(___L4_jazz_3a_source_2d_code)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_block_23_
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
___DEF_P_HLBL(___L0_block_23_)
___DEF_P_HLBL(___L1_block_23_)
___DEF_P_HLBL(___L2_block_23_)
___DEF_P_HLBL(___L3_block_23_)
___DEF_P_HLBL(___L4_block_23_)
___DEF_P_HLBL(___L5_block_23_)
___DEF_P_HLBL(___L6_block_23_)
___DEF_P_HLBL(___L7_block_23_)
___DEF_P_HLBL(___L8_block_23_)
___DEF_P_HLBL(___L9_block_23_)
___DEF_P_HLBL(___L10_block_23_)
___DEF_P_HLBL(___L11_block_23_)
___DEF_P_HLBL(___L12_block_23_)
___DEF_P_HLBL(___L13_block_23_)
___DEF_P_HLBL(___L14_block_23_)
___DEF_P_HLBL(___L15_block_23_)
___DEF_P_HLBL(___L16_block_23_)
___DEF_P_HLBL(___L17_block_23_)
___DEF_P_HLBL(___L18_block_23_)
___DEF_P_HLBL(___L19_block_23_)
___DEF_P_HLBL(___L20_block_23_)
___DEF_P_HLBL(___L21_block_23_)
___DEF_P_HLBL(___L22_block_23_)
___DEF_P_HLBL(___L23_block_23_)
___DEF_P_HLBL(___L24_block_23_)
___DEF_P_HLBL(___L25_block_23_)
___DEF_P_HLBL(___L26_block_23_)
___DEF_P_HLBL(___L27_block_23_)
___DEF_P_HLBL(___L28_block_23_)
___DEF_P_HLBL(___L29_block_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_block_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_block_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_block)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_block_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),14,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_block_23_)
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_make_2d_parameter)
___DEF_SLBL(3,___L3_block_23_)
   ___SET_GLO(5,___G_jazz_3a_testing_3f_,___R1)
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_make_2d_parameter)
___DEF_SLBL(4,___L4_block_23_)
   ___SET_GLO(4,___G_jazz_3a_testing,___R1)
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_make_2d_parameter)
___DEF_SLBL(5,___L5_block_23_)
   ___SET_GLO(2,___G_jazz_3a_generate_2d_symbol_2d_for,___R1)
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_make_2d_parameter)
___DEF_SLBL(6,___L6_block_23_)
   ___SET_GLO(1,___G_jazz_3a_generate_2d_symbol_2d_context,___R1)
   ___SET_GLO(3,___G_jazz_3a_source_2d_code,___PRC(32))
   ___SET_STK(1,___TRU)
   ___SET_R2(___LBL(20))
   ___SET_R3(___FAL)
   ___SET_R1(___FIX(-1L))
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),7,___G__23__23_make_2d_macro_2d_descr)
___DEF_SLBL(7,___L7_block_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_block)
   ___SET_R1(___GLO__23__23_interaction_2d_cte)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),10,___G__23__23_top_2d_cte_2d_add_2d_macro_21_)
___DEF_SLBL(8,___L8_block_23_)
   ___SET_R2(___LBL(10))
   ___SET_R1(___SYM_block)
   ___SET_R0(___STK(-3))
   ___POLL(9)
___DEF_SLBL(9,___L9_block_23_)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),13,___G_jazz_3a_register_2d_macro)
___DEF_SLBL(10,___L10_block_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(10,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(11)
___DEF_SLBL(11,___L11_block_23_)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(12,___L12_block_23_)
   ___IF(___NOT(___EQP(___GLO_cadr,___PRM_cadr)))
   ___GOTO(___L30_block_23_)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L30_block_23_)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L31_block_23_)
   ___END_IF
   ___GOTO(___L36_block_23_)
___DEF_GLBL(___L30_block_23_)
   ___SET_R2(___FAL)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L36_block_23_)
   ___END_IF
___DEF_GLBL(___L31_block_23_)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(13,___L13_block_23_)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(14,___L14_block_23_)
   ___IF(___NOT(___EQP(___GLO_cddr,___PRM_cddr)))
   ___GOTO(___L32_block_23_)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L32_block_23_)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L33_block_23_)
   ___END_IF
   ___GOTO(___L35_block_23_)
___DEF_GLBL(___L32_block_23_)
   ___SET_R2(___FAL)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L35_block_23_)
   ___END_IF
___DEF_GLBL(___L33_block_23_)
   ___SET_R1(___CDR(___R2))
___DEF_GLBL(___L34_block_23_)
   ___SET_STK(-6,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_generate_2d_symbol_2d_context)
___DEF_SLBL(15,___L15_block_23_)
   ___BEGIN_ALLOC_LIST(2UL,___STK(-5))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_jazz_3a_verbose_2d_kernel)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___SET_R1(___CONS(___R1,___STK(-6)))
   ___SET_R1(___CONS(___CNS(0),___R1))
   ___SET_R1(___CONS(___SYM_begin,___R1))
   ___CHECK_HEAP(16,4096)
___DEF_SLBL(16,___L16_block_23_)
   ___POLL(17)
___DEF_SLBL(17,___L17_block_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L35_block_23_)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_cddr)
___DEF_SLBL(18,___L18_block_23_)
   ___GOTO(___L34_block_23_)
___DEF_GLBL(___L36_block_23_)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_cadr)
___DEF_SLBL(19,___L19_block_23_)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(20,___L20_block_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(20,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(21)
___DEF_SLBL(21,___L21_block_23_)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(22,___L22_block_23_)
   ___IF(___NOT(___EQP(___GLO_cadr,___PRM_cadr)))
   ___GOTO(___L37_block_23_)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L37_block_23_)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L38_block_23_)
   ___END_IF
   ___GOTO(___L43_block_23_)
___DEF_GLBL(___L37_block_23_)
   ___SET_R2(___FAL)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L43_block_23_)
   ___END_IF
___DEF_GLBL(___L38_block_23_)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(23,___L23_block_23_)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___DEF_SLBL(24,___L24_block_23_)
   ___IF(___NOT(___EQP(___GLO_cddr,___PRM_cddr)))
   ___GOTO(___L39_block_23_)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L39_block_23_)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L40_block_23_)
   ___END_IF
   ___GOTO(___L42_block_23_)
___DEF_GLBL(___L39_block_23_)
   ___SET_R2(___FAL)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L42_block_23_)
   ___END_IF
___DEF_GLBL(___L40_block_23_)
   ___SET_R1(___CDR(___R2))
___DEF_GLBL(___L41_block_23_)
   ___SET_STK(-6,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_generate_2d_symbol_2d_context)
___DEF_SLBL(25,___L25_block_23_)
   ___BEGIN_ALLOC_LIST(2UL,___STK(-5))
   ___ADD_LIST_ELEM(1,___SYM_quote)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_jazz_3a_verbose_2d_kernel)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___SET_R1(___CONS(___R1,___STK(-6)))
   ___SET_R1(___CONS(___CNS(1),___R1))
   ___SET_R1(___CONS(___SYM_begin,___R1))
   ___CHECK_HEAP(26,4096)
___DEF_SLBL(26,___L26_block_23_)
   ___POLL(27)
___DEF_SLBL(27,___L27_block_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L42_block_23_)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_cddr)
___DEF_SLBL(28,___L28_block_23_)
   ___GOTO(___L41_block_23_)
___DEF_GLBL(___L43_block_23_)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_cadr)
___DEF_SLBL(29,___L29_block_23_)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_jazz_3a_source_2d_code)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_source_2d_code
#undef ___PH_LBL0
#define ___PH_LBL0 32
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_source_2d_code)
___DEF_P_HLBL(___L1_jazz_3a_source_2d_code)
___DEF_P_HLBL(___L2_jazz_3a_source_2d_code)
___DEF_P_HLBL(___L3_jazz_3a_source_2d_code)
___DEF_P_HLBL(___L4_jazz_3a_source_2d_code)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_source_2d_code)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_source_2d_code)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_source_2d_code)
   ___SET_R0(___LBL(2))
   ___JUMPGLONOTSAFE(___SET_NARGS(1),9,___G__23__23_source_3f_)
___DEF_SLBL(2,___L2_jazz_3a_source_2d_code)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L5_jazz_3a_source_2d_code)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_source_2d_code)
   ___ADJFP(-8)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),8,___G__23__23_source_2d_code)
___DEF_GLBL(___L5_jazz_3a_source_2d_code)
   ___SET_R1(___STK(-6))
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_source_2d_code)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_block_23_,"block#",___REF_SUB(0),30,0)
,___DEF_LBL_PROC(___H_block_23_,0,-1)
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_block_23_,1,-1)
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_PROC(___H_block_23_,1,-1)
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_block_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_3a_source_2d_code,0,___REF_SUB(64),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_source_2d_code,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_source_2d_code,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_source_2d_code,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_source_2d_code,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_3a_source_2d_code,___IFD(___RETI,8,0,0x3f01L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_block_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_block_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_begin,"begin")
___DEF_MOD_SYM(1,___S_block,"block")
___DEF_MOD_SYM(2,___S_body,"body")
___DEF_MOD_SYM(3,___S_expr,"expr")
___DEF_MOD_SYM(4,___S_form_2d_src,"form-src")
___DEF_MOD_SYM(5,___S_jazz_3a_kernel_2d_declares,"jazz:kernel-declares")
___DEF_MOD_SYM(6,___S_jazz_3a_verbose_2d_kernel,"jazz:verbose-kernel")
___DEF_MOD_SYM(7,___S_kernel_2e_block,"kernel.block")
___DEF_MOD_SYM(8,___S_name,"name")
___DEF_MOD_SYM(9,___S_quote,"quote")
___END_MOD_SYM_KEY

#endif
