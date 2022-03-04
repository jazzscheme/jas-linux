#ifdef ___LINKER_INFO
; File: "kernel.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:scheme.core.kernel"
(("bin:scheme.core.kernel"))
(
"add-core-method-node"
"annotate-let"
"bin:scheme.core.kernel"
"compose-helper"
"current-declaration"
"current-declaration-name"
"current-resume"
"current-walker"
"emit"
"emit-expressions"
"emit-one-expression"
"emit-statements-code"
"find-annotated"
"find-annotated-type"
"find-nextmethod"
"foundation.dialect"
"get-and-expressions"
"get-class-level"
"get-declaration-path"
"get-declaration-toplevel"
"get-dialect"
"get-expression-source"
"get-object-slot"
"iterate-module-declaration"
"method-implementation-name"
"new-code"
"new-core-class"
"new-declaration-form"
"new-object"
"new-special-expression"
"new-special-form"
"object-size"
"parse-keywords"
"parse-modifiers"
"public"
"reference-name"
"register-binding"
"register-declaration"
"require-dialect"
"scheme"
"scheme.core.kernel"
"scheme.core.kernel:add-core-method-node"
"scheme.core.kernel:annotate-let"
"scheme.core.kernel:compose-helper"
"scheme.core.kernel:current-declaration"
"scheme.core.kernel:current-declaration-name"
"scheme.core.kernel:current-resume"
"scheme.core.kernel:current-walker"
"scheme.core.kernel:emit"
"scheme.core.kernel:emit-expressions"
"scheme.core.kernel:emit-one-expression"
"scheme.core.kernel:emit-statements-code"
"scheme.core.kernel:find-annotated"
"scheme.core.kernel:find-annotated-type"
"scheme.core.kernel:find-nextmethod"
"scheme.core.kernel:get-and-expressions"
"scheme.core.kernel:get-class-level"
"scheme.core.kernel:get-declaration-path"
"scheme.core.kernel:get-declaration-toplevel"
"scheme.core.kernel:get-dialect"
"scheme.core.kernel:get-expression-source"
"scheme.core.kernel:get-object-slot"
"scheme.core.kernel:iterate-module-declaration"
"scheme.core.kernel:method-implementation-name"
"scheme.core.kernel:new-code"
"scheme.core.kernel:new-core-class"
"scheme.core.kernel:new-declaration-form"
"scheme.core.kernel:new-object"
"scheme.core.kernel:new-special-expression"
"scheme.core.kernel:new-special-form"
"scheme.core.kernel:object-size"
"scheme.core.kernel:parse-keywords"
"scheme.core.kernel:parse-modifiers"
"scheme.core.kernel:reference-name"
"scheme.core.kernel:register-binding"
"scheme.core.kernel:register-declaration"
"scheme.core.kernel:require-dialect"
"scheme.core.kernel:set-core-class"
"scheme.core.kernel:set-object-class"
"scheme.core.kernel:set-object-slot"
"scheme.core.kernel:setup-declaration"
"scheme.core.kernel:tree-fold"
"scheme.core.kernel:tree-fold-list"
"scheme.core.kernel:walk"
"scheme.core.kernel:walk-list"
"set-core-class"
"set-object-class"
"set-object-slot"
"setup-declaration"
"tree-fold"
"tree-fold-list"
"walk"
"walk-list"
)
(
)
(
"bin:scheme.core.kernel#"
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
#define ___MODULE_NAME "bin:scheme.core.kernel"
#define ___LINKER_ID ___LNK_bin_3a_scheme_2e_core_2e_kernel
#define ___MH_PROC ___H_bin_3a_scheme_2e_core_2e_kernel
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 93
#define ___GLOCOUNT 3
#define ___SUPCOUNT 1
#define ___CNSCOUNT 88
#define ___SUBCOUNT 16
#define ___LBLCOUNT 7
#define ___MODDESCR ___REF_SUB(15)
#include "gambit.h"

___NEED_SYM(___S_add_2d_core_2d_method_2d_node)
___NEED_SYM(___S_annotate_2d_let)
___NEED_SYM(___S_bin_3a_scheme_2e_core_2e_kernel)
___NEED_SYM(___S_compose_2d_helper)
___NEED_SYM(___S_current_2d_declaration)
___NEED_SYM(___S_current_2d_declaration_2d_name)
___NEED_SYM(___S_current_2d_resume)
___NEED_SYM(___S_current_2d_walker)
___NEED_SYM(___S_emit)
___NEED_SYM(___S_emit_2d_expressions)
___NEED_SYM(___S_emit_2d_one_2d_expression)
___NEED_SYM(___S_emit_2d_statements_2d_code)
___NEED_SYM(___S_find_2d_annotated)
___NEED_SYM(___S_find_2d_annotated_2d_type)
___NEED_SYM(___S_find_2d_nextmethod)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_and_2d_expressions)
___NEED_SYM(___S_get_2d_class_2d_level)
___NEED_SYM(___S_get_2d_declaration_2d_path)
___NEED_SYM(___S_get_2d_declaration_2d_toplevel)
___NEED_SYM(___S_get_2d_dialect)
___NEED_SYM(___S_get_2d_expression_2d_source)
___NEED_SYM(___S_get_2d_object_2d_slot)
___NEED_SYM(___S_iterate_2d_module_2d_declaration)
___NEED_SYM(___S_method_2d_implementation_2d_name)
___NEED_SYM(___S_new_2d_code)
___NEED_SYM(___S_new_2d_core_2d_class)
___NEED_SYM(___S_new_2d_declaration_2d_form)
___NEED_SYM(___S_new_2d_object)
___NEED_SYM(___S_new_2d_special_2d_expression)
___NEED_SYM(___S_new_2d_special_2d_form)
___NEED_SYM(___S_object_2d_size)
___NEED_SYM(___S_parse_2d_keywords)
___NEED_SYM(___S_parse_2d_modifiers)
___NEED_SYM(___S_public)
___NEED_SYM(___S_reference_2d_name)
___NEED_SYM(___S_register_2d_binding)
___NEED_SYM(___S_register_2d_declaration)
___NEED_SYM(___S_require_2d_dialect)
___NEED_SYM(___S_scheme)
___NEED_SYM(___S_scheme_2e_core_2e_kernel)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_add_2d_core_2d_method_2d_node)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_annotate_2d_let)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_compose_2d_helper)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration_2d_name)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_current_2d_resume)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_current_2d_walker)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_emit)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_emit_2d_expressions)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_emit_2d_one_2d_expression)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_emit_2d_statements_2d_code)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated_2d_type)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_find_2d_nextmethod)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_and_2d_expressions)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_class_2d_level)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_path)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_toplevel)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_dialect)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_expression_2d_source)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_get_2d_object_2d_slot)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_iterate_2d_module_2d_declaration)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_method_2d_implementation_2d_name)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_new_2d_code)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_new_2d_core_2d_class)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_new_2d_declaration_2d_form)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_new_2d_object)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_expression)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_form)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_object_2d_size)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_parse_2d_keywords)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_parse_2d_modifiers)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_reference_2d_name)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_register_2d_binding)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_register_2d_declaration)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_require_2d_dialect)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_set_2d_core_2d_class)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_class)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_slot)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_setup_2d_declaration)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold_2d_list)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_walk)
___NEED_SYM(___S_scheme_2e_core_2e_kernel_3a_walk_2d_list)
___NEED_SYM(___S_set_2d_core_2d_class)
___NEED_SYM(___S_set_2d_object_2d_class)
___NEED_SYM(___S_set_2d_object_2d_slot)
___NEED_SYM(___S_setup_2d_declaration)
___NEED_SYM(___S_tree_2d_fold)
___NEED_SYM(___S_tree_2d_fold_2d_list)
___NEED_SYM(___S_walk)
___NEED_SYM(___S_walk_2d_list)

___NEED_GLO(___G_bin_3a_scheme_2e_core_2e_kernel_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_add_2d_core_2d_method_2d_node,"add-core-method-node")
___DEF_SYM(1,___S_annotate_2d_let,"annotate-let")
___DEF_SYM(2,___S_bin_3a_scheme_2e_core_2e_kernel,"bin:scheme.core.kernel")
___DEF_SYM(3,___S_compose_2d_helper,"compose-helper")
___DEF_SYM(4,___S_current_2d_declaration,"current-declaration")
___DEF_SYM(5,___S_current_2d_declaration_2d_name,"current-declaration-name")
___DEF_SYM(6,___S_current_2d_resume,"current-resume")
___DEF_SYM(7,___S_current_2d_walker,"current-walker")
___DEF_SYM(8,___S_emit,"emit")
___DEF_SYM(9,___S_emit_2d_expressions,"emit-expressions")
___DEF_SYM(10,___S_emit_2d_one_2d_expression,"emit-one-expression")
___DEF_SYM(11,___S_emit_2d_statements_2d_code,"emit-statements-code")
___DEF_SYM(12,___S_find_2d_annotated,"find-annotated")
___DEF_SYM(13,___S_find_2d_annotated_2d_type,"find-annotated-type")
___DEF_SYM(14,___S_find_2d_nextmethod,"find-nextmethod")
___DEF_SYM(15,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(16,___S_get_2d_and_2d_expressions,"get-and-expressions")
___DEF_SYM(17,___S_get_2d_class_2d_level,"get-class-level")
___DEF_SYM(18,___S_get_2d_declaration_2d_path,"get-declaration-path")
___DEF_SYM(19,___S_get_2d_declaration_2d_toplevel,"get-declaration-toplevel")
___DEF_SYM(20,___S_get_2d_dialect,"get-dialect")
___DEF_SYM(21,___S_get_2d_expression_2d_source,"get-expression-source")
___DEF_SYM(22,___S_get_2d_object_2d_slot,"get-object-slot")
___DEF_SYM(23,___S_iterate_2d_module_2d_declaration,"iterate-module-declaration")
___DEF_SYM(24,___S_method_2d_implementation_2d_name,"method-implementation-name")
___DEF_SYM(25,___S_new_2d_code,"new-code")
___DEF_SYM(26,___S_new_2d_core_2d_class,"new-core-class")
___DEF_SYM(27,___S_new_2d_declaration_2d_form,"new-declaration-form")
___DEF_SYM(28,___S_new_2d_object,"new-object")
___DEF_SYM(29,___S_new_2d_special_2d_expression,"new-special-expression")
___DEF_SYM(30,___S_new_2d_special_2d_form,"new-special-form")
___DEF_SYM(31,___S_object_2d_size,"object-size")
___DEF_SYM(32,___S_parse_2d_keywords,"parse-keywords")
___DEF_SYM(33,___S_parse_2d_modifiers,"parse-modifiers")
___DEF_SYM(34,___S_public,"public")
___DEF_SYM(35,___S_reference_2d_name,"reference-name")
___DEF_SYM(36,___S_register_2d_binding,"register-binding")
___DEF_SYM(37,___S_register_2d_declaration,"register-declaration")
___DEF_SYM(38,___S_require_2d_dialect,"require-dialect")
___DEF_SYM(39,___S_scheme,"scheme")
___DEF_SYM(40,___S_scheme_2e_core_2e_kernel,"scheme.core.kernel")
___DEF_SYM(41,___S_scheme_2e_core_2e_kernel_3a_add_2d_core_2d_method_2d_node,"scheme.core.kernel:add-core-method-node")

___DEF_SYM(42,___S_scheme_2e_core_2e_kernel_3a_annotate_2d_let,"scheme.core.kernel:annotate-let")

___DEF_SYM(43,___S_scheme_2e_core_2e_kernel_3a_compose_2d_helper,"scheme.core.kernel:compose-helper")

___DEF_SYM(44,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration,"scheme.core.kernel:current-declaration")

___DEF_SYM(45,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration_2d_name,"scheme.core.kernel:current-declaration-name")

___DEF_SYM(46,___S_scheme_2e_core_2e_kernel_3a_current_2d_resume,"scheme.core.kernel:current-resume")

___DEF_SYM(47,___S_scheme_2e_core_2e_kernel_3a_current_2d_walker,"scheme.core.kernel:current-walker")

___DEF_SYM(48,___S_scheme_2e_core_2e_kernel_3a_emit,"scheme.core.kernel:emit")
___DEF_SYM(49,___S_scheme_2e_core_2e_kernel_3a_emit_2d_expressions,"scheme.core.kernel:emit-expressions")

___DEF_SYM(50,___S_scheme_2e_core_2e_kernel_3a_emit_2d_one_2d_expression,"scheme.core.kernel:emit-one-expression")

___DEF_SYM(51,___S_scheme_2e_core_2e_kernel_3a_emit_2d_statements_2d_code,"scheme.core.kernel:emit-statements-code")

___DEF_SYM(52,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated,"scheme.core.kernel:find-annotated")

___DEF_SYM(53,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated_2d_type,"scheme.core.kernel:find-annotated-type")

___DEF_SYM(54,___S_scheme_2e_core_2e_kernel_3a_find_2d_nextmethod,"scheme.core.kernel:find-nextmethod")

___DEF_SYM(55,___S_scheme_2e_core_2e_kernel_3a_get_2d_and_2d_expressions,"scheme.core.kernel:get-and-expressions")

___DEF_SYM(56,___S_scheme_2e_core_2e_kernel_3a_get_2d_class_2d_level,"scheme.core.kernel:get-class-level")

___DEF_SYM(57,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_path,"scheme.core.kernel:get-declaration-path")

___DEF_SYM(58,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_toplevel,"scheme.core.kernel:get-declaration-toplevel")

___DEF_SYM(59,___S_scheme_2e_core_2e_kernel_3a_get_2d_dialect,"scheme.core.kernel:get-dialect")

___DEF_SYM(60,___S_scheme_2e_core_2e_kernel_3a_get_2d_expression_2d_source,"scheme.core.kernel:get-expression-source")

___DEF_SYM(61,___S_scheme_2e_core_2e_kernel_3a_get_2d_object_2d_slot,"scheme.core.kernel:get-object-slot")

___DEF_SYM(62,___S_scheme_2e_core_2e_kernel_3a_iterate_2d_module_2d_declaration,"scheme.core.kernel:iterate-module-declaration")

___DEF_SYM(63,___S_scheme_2e_core_2e_kernel_3a_method_2d_implementation_2d_name,"scheme.core.kernel:method-implementation-name")

___DEF_SYM(64,___S_scheme_2e_core_2e_kernel_3a_new_2d_code,"scheme.core.kernel:new-code")
___DEF_SYM(65,___S_scheme_2e_core_2e_kernel_3a_new_2d_core_2d_class,"scheme.core.kernel:new-core-class")

___DEF_SYM(66,___S_scheme_2e_core_2e_kernel_3a_new_2d_declaration_2d_form,"scheme.core.kernel:new-declaration-form")

___DEF_SYM(67,___S_scheme_2e_core_2e_kernel_3a_new_2d_object,"scheme.core.kernel:new-object")

___DEF_SYM(68,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_expression,"scheme.core.kernel:new-special-expression")

___DEF_SYM(69,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_form,"scheme.core.kernel:new-special-form")

___DEF_SYM(70,___S_scheme_2e_core_2e_kernel_3a_object_2d_size,"scheme.core.kernel:object-size")

___DEF_SYM(71,___S_scheme_2e_core_2e_kernel_3a_parse_2d_keywords,"scheme.core.kernel:parse-keywords")

___DEF_SYM(72,___S_scheme_2e_core_2e_kernel_3a_parse_2d_modifiers,"scheme.core.kernel:parse-modifiers")

___DEF_SYM(73,___S_scheme_2e_core_2e_kernel_3a_reference_2d_name,"scheme.core.kernel:reference-name")

___DEF_SYM(74,___S_scheme_2e_core_2e_kernel_3a_register_2d_binding,"scheme.core.kernel:register-binding")

___DEF_SYM(75,___S_scheme_2e_core_2e_kernel_3a_register_2d_declaration,"scheme.core.kernel:register-declaration")

___DEF_SYM(76,___S_scheme_2e_core_2e_kernel_3a_require_2d_dialect,"scheme.core.kernel:require-dialect")

___DEF_SYM(77,___S_scheme_2e_core_2e_kernel_3a_set_2d_core_2d_class,"scheme.core.kernel:set-core-class")

___DEF_SYM(78,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_class,"scheme.core.kernel:set-object-class")

___DEF_SYM(79,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_slot,"scheme.core.kernel:set-object-slot")

___DEF_SYM(80,___S_scheme_2e_core_2e_kernel_3a_setup_2d_declaration,"scheme.core.kernel:setup-declaration")

___DEF_SYM(81,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold,"scheme.core.kernel:tree-fold")
___DEF_SYM(82,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold_2d_list,"scheme.core.kernel:tree-fold-list")

___DEF_SYM(83,___S_scheme_2e_core_2e_kernel_3a_walk,"scheme.core.kernel:walk")
___DEF_SYM(84,___S_scheme_2e_core_2e_kernel_3a_walk_2d_list,"scheme.core.kernel:walk-list")
___DEF_SYM(85,___S_set_2d_core_2d_class,"set-core-class")
___DEF_SYM(86,___S_set_2d_object_2d_class,"set-object-class")
___DEF_SYM(87,___S_set_2d_object_2d_slot,"set-object-slot")
___DEF_SYM(88,___S_setup_2d_declaration,"setup-declaration")
___DEF_SYM(89,___S_tree_2d_fold,"tree-fold")
___DEF_SYM(90,___S_tree_2d_fold_2d_list,"tree-fold-list")
___DEF_SYM(91,___S_walk,"walk")
___DEF_SYM(92,___S_walk_2d_list,"walk-list")
___END_SYM

#define ___SYM_add_2d_core_2d_method_2d_node ___SYM(0,___S_add_2d_core_2d_method_2d_node)
#define ___SYM_annotate_2d_let ___SYM(1,___S_annotate_2d_let)
#define ___SYM_bin_3a_scheme_2e_core_2e_kernel ___SYM(2,___S_bin_3a_scheme_2e_core_2e_kernel)
#define ___SYM_compose_2d_helper ___SYM(3,___S_compose_2d_helper)
#define ___SYM_current_2d_declaration ___SYM(4,___S_current_2d_declaration)
#define ___SYM_current_2d_declaration_2d_name ___SYM(5,___S_current_2d_declaration_2d_name)
#define ___SYM_current_2d_resume ___SYM(6,___S_current_2d_resume)
#define ___SYM_current_2d_walker ___SYM(7,___S_current_2d_walker)
#define ___SYM_emit ___SYM(8,___S_emit)
#define ___SYM_emit_2d_expressions ___SYM(9,___S_emit_2d_expressions)
#define ___SYM_emit_2d_one_2d_expression ___SYM(10,___S_emit_2d_one_2d_expression)
#define ___SYM_emit_2d_statements_2d_code ___SYM(11,___S_emit_2d_statements_2d_code)
#define ___SYM_find_2d_annotated ___SYM(12,___S_find_2d_annotated)
#define ___SYM_find_2d_annotated_2d_type ___SYM(13,___S_find_2d_annotated_2d_type)
#define ___SYM_find_2d_nextmethod ___SYM(14,___S_find_2d_nextmethod)
#define ___SYM_foundation_2e_dialect ___SYM(15,___S_foundation_2e_dialect)
#define ___SYM_get_2d_and_2d_expressions ___SYM(16,___S_get_2d_and_2d_expressions)
#define ___SYM_get_2d_class_2d_level ___SYM(17,___S_get_2d_class_2d_level)
#define ___SYM_get_2d_declaration_2d_path ___SYM(18,___S_get_2d_declaration_2d_path)
#define ___SYM_get_2d_declaration_2d_toplevel ___SYM(19,___S_get_2d_declaration_2d_toplevel)
#define ___SYM_get_2d_dialect ___SYM(20,___S_get_2d_dialect)
#define ___SYM_get_2d_expression_2d_source ___SYM(21,___S_get_2d_expression_2d_source)
#define ___SYM_get_2d_object_2d_slot ___SYM(22,___S_get_2d_object_2d_slot)
#define ___SYM_iterate_2d_module_2d_declaration ___SYM(23,___S_iterate_2d_module_2d_declaration)
#define ___SYM_method_2d_implementation_2d_name ___SYM(24,___S_method_2d_implementation_2d_name)
#define ___SYM_new_2d_code ___SYM(25,___S_new_2d_code)
#define ___SYM_new_2d_core_2d_class ___SYM(26,___S_new_2d_core_2d_class)
#define ___SYM_new_2d_declaration_2d_form ___SYM(27,___S_new_2d_declaration_2d_form)
#define ___SYM_new_2d_object ___SYM(28,___S_new_2d_object)
#define ___SYM_new_2d_special_2d_expression ___SYM(29,___S_new_2d_special_2d_expression)
#define ___SYM_new_2d_special_2d_form ___SYM(30,___S_new_2d_special_2d_form)
#define ___SYM_object_2d_size ___SYM(31,___S_object_2d_size)
#define ___SYM_parse_2d_keywords ___SYM(32,___S_parse_2d_keywords)
#define ___SYM_parse_2d_modifiers ___SYM(33,___S_parse_2d_modifiers)
#define ___SYM_public ___SYM(34,___S_public)
#define ___SYM_reference_2d_name ___SYM(35,___S_reference_2d_name)
#define ___SYM_register_2d_binding ___SYM(36,___S_register_2d_binding)
#define ___SYM_register_2d_declaration ___SYM(37,___S_register_2d_declaration)
#define ___SYM_require_2d_dialect ___SYM(38,___S_require_2d_dialect)
#define ___SYM_scheme ___SYM(39,___S_scheme)
#define ___SYM_scheme_2e_core_2e_kernel ___SYM(40,___S_scheme_2e_core_2e_kernel)
#define ___SYM_scheme_2e_core_2e_kernel_3a_add_2d_core_2d_method_2d_node ___SYM(41,___S_scheme_2e_core_2e_kernel_3a_add_2d_core_2d_method_2d_node)
#define ___SYM_scheme_2e_core_2e_kernel_3a_annotate_2d_let ___SYM(42,___S_scheme_2e_core_2e_kernel_3a_annotate_2d_let)
#define ___SYM_scheme_2e_core_2e_kernel_3a_compose_2d_helper ___SYM(43,___S_scheme_2e_core_2e_kernel_3a_compose_2d_helper)
#define ___SYM_scheme_2e_core_2e_kernel_3a_current_2d_declaration ___SYM(44,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration)
#define ___SYM_scheme_2e_core_2e_kernel_3a_current_2d_declaration_2d_name ___SYM(45,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration_2d_name)
#define ___SYM_scheme_2e_core_2e_kernel_3a_current_2d_resume ___SYM(46,___S_scheme_2e_core_2e_kernel_3a_current_2d_resume)
#define ___SYM_scheme_2e_core_2e_kernel_3a_current_2d_walker ___SYM(47,___S_scheme_2e_core_2e_kernel_3a_current_2d_walker)
#define ___SYM_scheme_2e_core_2e_kernel_3a_emit ___SYM(48,___S_scheme_2e_core_2e_kernel_3a_emit)
#define ___SYM_scheme_2e_core_2e_kernel_3a_emit_2d_expressions ___SYM(49,___S_scheme_2e_core_2e_kernel_3a_emit_2d_expressions)
#define ___SYM_scheme_2e_core_2e_kernel_3a_emit_2d_one_2d_expression ___SYM(50,___S_scheme_2e_core_2e_kernel_3a_emit_2d_one_2d_expression)
#define ___SYM_scheme_2e_core_2e_kernel_3a_emit_2d_statements_2d_code ___SYM(51,___S_scheme_2e_core_2e_kernel_3a_emit_2d_statements_2d_code)
#define ___SYM_scheme_2e_core_2e_kernel_3a_find_2d_annotated ___SYM(52,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated)
#define ___SYM_scheme_2e_core_2e_kernel_3a_find_2d_annotated_2d_type ___SYM(53,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated_2d_type)
#define ___SYM_scheme_2e_core_2e_kernel_3a_find_2d_nextmethod ___SYM(54,___S_scheme_2e_core_2e_kernel_3a_find_2d_nextmethod)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_and_2d_expressions ___SYM(55,___S_scheme_2e_core_2e_kernel_3a_get_2d_and_2d_expressions)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_class_2d_level ___SYM(56,___S_scheme_2e_core_2e_kernel_3a_get_2d_class_2d_level)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_path ___SYM(57,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_path)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_toplevel ___SYM(58,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_toplevel)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_dialect ___SYM(59,___S_scheme_2e_core_2e_kernel_3a_get_2d_dialect)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_expression_2d_source ___SYM(60,___S_scheme_2e_core_2e_kernel_3a_get_2d_expression_2d_source)
#define ___SYM_scheme_2e_core_2e_kernel_3a_get_2d_object_2d_slot ___SYM(61,___S_scheme_2e_core_2e_kernel_3a_get_2d_object_2d_slot)
#define ___SYM_scheme_2e_core_2e_kernel_3a_iterate_2d_module_2d_declaration ___SYM(62,___S_scheme_2e_core_2e_kernel_3a_iterate_2d_module_2d_declaration)
#define ___SYM_scheme_2e_core_2e_kernel_3a_method_2d_implementation_2d_name ___SYM(63,___S_scheme_2e_core_2e_kernel_3a_method_2d_implementation_2d_name)
#define ___SYM_scheme_2e_core_2e_kernel_3a_new_2d_code ___SYM(64,___S_scheme_2e_core_2e_kernel_3a_new_2d_code)
#define ___SYM_scheme_2e_core_2e_kernel_3a_new_2d_core_2d_class ___SYM(65,___S_scheme_2e_core_2e_kernel_3a_new_2d_core_2d_class)
#define ___SYM_scheme_2e_core_2e_kernel_3a_new_2d_declaration_2d_form ___SYM(66,___S_scheme_2e_core_2e_kernel_3a_new_2d_declaration_2d_form)
#define ___SYM_scheme_2e_core_2e_kernel_3a_new_2d_object ___SYM(67,___S_scheme_2e_core_2e_kernel_3a_new_2d_object)
#define ___SYM_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_expression ___SYM(68,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_expression)
#define ___SYM_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_form ___SYM(69,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_form)
#define ___SYM_scheme_2e_core_2e_kernel_3a_object_2d_size ___SYM(70,___S_scheme_2e_core_2e_kernel_3a_object_2d_size)
#define ___SYM_scheme_2e_core_2e_kernel_3a_parse_2d_keywords ___SYM(71,___S_scheme_2e_core_2e_kernel_3a_parse_2d_keywords)
#define ___SYM_scheme_2e_core_2e_kernel_3a_parse_2d_modifiers ___SYM(72,___S_scheme_2e_core_2e_kernel_3a_parse_2d_modifiers)
#define ___SYM_scheme_2e_core_2e_kernel_3a_reference_2d_name ___SYM(73,___S_scheme_2e_core_2e_kernel_3a_reference_2d_name)
#define ___SYM_scheme_2e_core_2e_kernel_3a_register_2d_binding ___SYM(74,___S_scheme_2e_core_2e_kernel_3a_register_2d_binding)
#define ___SYM_scheme_2e_core_2e_kernel_3a_register_2d_declaration ___SYM(75,___S_scheme_2e_core_2e_kernel_3a_register_2d_declaration)
#define ___SYM_scheme_2e_core_2e_kernel_3a_require_2d_dialect ___SYM(76,___S_scheme_2e_core_2e_kernel_3a_require_2d_dialect)
#define ___SYM_scheme_2e_core_2e_kernel_3a_set_2d_core_2d_class ___SYM(77,___S_scheme_2e_core_2e_kernel_3a_set_2d_core_2d_class)
#define ___SYM_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_class ___SYM(78,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_class)
#define ___SYM_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_slot ___SYM(79,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_slot)
#define ___SYM_scheme_2e_core_2e_kernel_3a_setup_2d_declaration ___SYM(80,___S_scheme_2e_core_2e_kernel_3a_setup_2d_declaration)
#define ___SYM_scheme_2e_core_2e_kernel_3a_tree_2d_fold ___SYM(81,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold)
#define ___SYM_scheme_2e_core_2e_kernel_3a_tree_2d_fold_2d_list ___SYM(82,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold_2d_list)
#define ___SYM_scheme_2e_core_2e_kernel_3a_walk ___SYM(83,___S_scheme_2e_core_2e_kernel_3a_walk)
#define ___SYM_scheme_2e_core_2e_kernel_3a_walk_2d_list ___SYM(84,___S_scheme_2e_core_2e_kernel_3a_walk_2d_list)
#define ___SYM_set_2d_core_2d_class ___SYM(85,___S_set_2d_core_2d_class)
#define ___SYM_set_2d_object_2d_class ___SYM(86,___S_set_2d_object_2d_class)
#define ___SYM_set_2d_object_2d_slot ___SYM(87,___S_set_2d_object_2d_slot)
#define ___SYM_setup_2d_declaration ___SYM(88,___S_setup_2d_declaration)
#define ___SYM_tree_2d_fold ___SYM(89,___S_tree_2d_fold)
#define ___SYM_tree_2d_fold_2d_list ___SYM(90,___S_tree_2d_fold_2d_list)
#define ___SYM_walk ___SYM(91,___S_walk)
#define ___SYM_walk_2d_list ___SYM(92,___S_walk_2d_list)

___BEGIN_GLO
___DEF_GLO(0,"bin:scheme.core.kernel#")
___DEF_GLO(1,"jazz:load-unit")
___DEF_GLO(2,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_scheme_2e_core_2e_kernel_23_ ___GLO(0,___G_bin_3a_scheme_2e_core_2e_kernel_23_)
#define ___PRM_bin_3a_scheme_2e_core_2e_kernel_23_ ___PRM(0,___G_bin_3a_scheme_2e_core_2e_kernel_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(2,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(2,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_add_2d_core_2d_method_2d_node),___REF_SYM(41,___S_scheme_2e_core_2e_kernel_3a_add_2d_core_2d_method_2d_node))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(1,___S_annotate_2d_let),___REF_SYM(42,___S_scheme_2e_core_2e_kernel_3a_annotate_2d_let))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(3,___S_compose_2d_helper),___REF_SYM(43,___S_scheme_2e_core_2e_kernel_3a_compose_2d_helper))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(4,___S_current_2d_declaration),___REF_SYM(44,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(5,___S_current_2d_declaration_2d_name),___REF_SYM(45,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration_2d_name))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(6,___S_current_2d_resume),___REF_SYM(46,___S_scheme_2e_core_2e_kernel_3a_current_2d_resume))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(7,___S_current_2d_walker),___REF_SYM(47,___S_scheme_2e_core_2e_kernel_3a_current_2d_walker))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(8,___S_emit),___REF_SYM(48,___S_scheme_2e_core_2e_kernel_3a_emit))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(9,___S_emit_2d_expressions),___REF_SYM(49,___S_scheme_2e_core_2e_kernel_3a_emit_2d_expressions))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(10,___S_emit_2d_one_2d_expression),___REF_SYM(50,___S_scheme_2e_core_2e_kernel_3a_emit_2d_one_2d_expression))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(11,___S_emit_2d_statements_2d_code),___REF_SYM(51,___S_scheme_2e_core_2e_kernel_3a_emit_2d_statements_2d_code))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(12,___S_find_2d_annotated),___REF_SYM(52,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(13,___S_find_2d_annotated_2d_type),___REF_SYM(53,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated_2d_type))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(14,___S_find_2d_nextmethod),___REF_SYM(54,___S_scheme_2e_core_2e_kernel_3a_find_2d_nextmethod))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(16,___S_get_2d_and_2d_expressions),___REF_SYM(55,___S_scheme_2e_core_2e_kernel_3a_get_2d_and_2d_expressions))
,___DEF_CNS(___REF_CNS(31),___REF_CNS(32))
,___DEF_CNS(___REF_SYM(17,___S_get_2d_class_2d_level),___REF_SYM(56,___S_scheme_2e_core_2e_kernel_3a_get_2d_class_2d_level))
,___DEF_CNS(___REF_CNS(33),___REF_CNS(34))
,___DEF_CNS(___REF_SYM(18,___S_get_2d_declaration_2d_path),___REF_SYM(57,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_path))
,___DEF_CNS(___REF_CNS(35),___REF_CNS(36))
,___DEF_CNS(___REF_SYM(19,___S_get_2d_declaration_2d_toplevel),___REF_SYM(58,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_toplevel))
,___DEF_CNS(___REF_CNS(37),___REF_CNS(38))
,___DEF_CNS(___REF_SYM(20,___S_get_2d_dialect),___REF_SYM(59,___S_scheme_2e_core_2e_kernel_3a_get_2d_dialect))
,___DEF_CNS(___REF_CNS(39),___REF_CNS(40))
,___DEF_CNS(___REF_SYM(21,___S_get_2d_expression_2d_source),___REF_SYM(60,___S_scheme_2e_core_2e_kernel_3a_get_2d_expression_2d_source))
,___DEF_CNS(___REF_CNS(41),___REF_CNS(42))
,___DEF_CNS(___REF_SYM(22,___S_get_2d_object_2d_slot),___REF_SYM(61,___S_scheme_2e_core_2e_kernel_3a_get_2d_object_2d_slot))
,___DEF_CNS(___REF_CNS(43),___REF_CNS(44))
,___DEF_CNS(___REF_SYM(23,___S_iterate_2d_module_2d_declaration),___REF_SYM(62,___S_scheme_2e_core_2e_kernel_3a_iterate_2d_module_2d_declaration))
,___DEF_CNS(___REF_CNS(45),___REF_CNS(46))
,___DEF_CNS(___REF_SYM(24,___S_method_2d_implementation_2d_name),___REF_SYM(63,___S_scheme_2e_core_2e_kernel_3a_method_2d_implementation_2d_name))
,___DEF_CNS(___REF_CNS(47),___REF_CNS(48))
,___DEF_CNS(___REF_SYM(25,___S_new_2d_code),___REF_SYM(64,___S_scheme_2e_core_2e_kernel_3a_new_2d_code))
,___DEF_CNS(___REF_CNS(49),___REF_CNS(50))
,___DEF_CNS(___REF_SYM(26,___S_new_2d_core_2d_class),___REF_SYM(65,___S_scheme_2e_core_2e_kernel_3a_new_2d_core_2d_class))
,___DEF_CNS(___REF_CNS(51),___REF_CNS(52))
,___DEF_CNS(___REF_SYM(27,___S_new_2d_declaration_2d_form),___REF_SYM(66,___S_scheme_2e_core_2e_kernel_3a_new_2d_declaration_2d_form))
,___DEF_CNS(___REF_CNS(53),___REF_CNS(54))
,___DEF_CNS(___REF_SYM(28,___S_new_2d_object),___REF_SYM(67,___S_scheme_2e_core_2e_kernel_3a_new_2d_object))
,___DEF_CNS(___REF_CNS(55),___REF_CNS(56))
,___DEF_CNS(___REF_SYM(29,___S_new_2d_special_2d_expression),___REF_SYM(68,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_expression))
,___DEF_CNS(___REF_CNS(57),___REF_CNS(58))
,___DEF_CNS(___REF_SYM(30,___S_new_2d_special_2d_form),___REF_SYM(69,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_form))
,___DEF_CNS(___REF_CNS(59),___REF_CNS(60))
,___DEF_CNS(___REF_SYM(31,___S_object_2d_size),___REF_SYM(70,___S_scheme_2e_core_2e_kernel_3a_object_2d_size))
,___DEF_CNS(___REF_CNS(61),___REF_CNS(62))
,___DEF_CNS(___REF_SYM(32,___S_parse_2d_keywords),___REF_SYM(71,___S_scheme_2e_core_2e_kernel_3a_parse_2d_keywords))
,___DEF_CNS(___REF_CNS(63),___REF_CNS(64))
,___DEF_CNS(___REF_SYM(33,___S_parse_2d_modifiers),___REF_SYM(72,___S_scheme_2e_core_2e_kernel_3a_parse_2d_modifiers))
,___DEF_CNS(___REF_CNS(65),___REF_CNS(66))
,___DEF_CNS(___REF_SYM(35,___S_reference_2d_name),___REF_SYM(73,___S_scheme_2e_core_2e_kernel_3a_reference_2d_name))
,___DEF_CNS(___REF_CNS(67),___REF_CNS(68))
,___DEF_CNS(___REF_SYM(36,___S_register_2d_binding),___REF_SYM(74,___S_scheme_2e_core_2e_kernel_3a_register_2d_binding))
,___DEF_CNS(___REF_CNS(69),___REF_CNS(70))
,___DEF_CNS(___REF_SYM(37,___S_register_2d_declaration),___REF_SYM(75,___S_scheme_2e_core_2e_kernel_3a_register_2d_declaration))
,___DEF_CNS(___REF_CNS(71),___REF_CNS(72))
,___DEF_CNS(___REF_SYM(38,___S_require_2d_dialect),___REF_SYM(76,___S_scheme_2e_core_2e_kernel_3a_require_2d_dialect))
,___DEF_CNS(___REF_CNS(73),___REF_CNS(74))
,___DEF_CNS(___REF_SYM(85,___S_set_2d_core_2d_class),___REF_SYM(77,___S_scheme_2e_core_2e_kernel_3a_set_2d_core_2d_class))
,___DEF_CNS(___REF_CNS(75),___REF_CNS(76))
,___DEF_CNS(___REF_SYM(86,___S_set_2d_object_2d_class),___REF_SYM(78,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_class))
,___DEF_CNS(___REF_CNS(77),___REF_CNS(78))
,___DEF_CNS(___REF_SYM(87,___S_set_2d_object_2d_slot),___REF_SYM(79,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_slot))
,___DEF_CNS(___REF_CNS(79),___REF_CNS(80))
,___DEF_CNS(___REF_SYM(88,___S_setup_2d_declaration),___REF_SYM(80,___S_scheme_2e_core_2e_kernel_3a_setup_2d_declaration))
,___DEF_CNS(___REF_CNS(81),___REF_CNS(82))
,___DEF_CNS(___REF_SYM(89,___S_tree_2d_fold),___REF_SYM(81,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold))
,___DEF_CNS(___REF_CNS(83),___REF_CNS(84))
,___DEF_CNS(___REF_SYM(90,___S_tree_2d_fold_2d_list),___REF_SYM(82,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold_2d_list))
,___DEF_CNS(___REF_CNS(85),___REF_CNS(86))
,___DEF_CNS(___REF_SYM(91,___S_walk),___REF_SYM(83,___S_scheme_2e_core_2e_kernel_3a_walk))
,___DEF_CNS(___REF_CNS(87),___REF_NUL)
,___DEF_CNS(___REF_SYM(92,___S_walk_2d_list),___REF_SYM(84,___S_scheme_2e_core_2e_kernel_3a_walk_2d_list))
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
               ___VEC1(___REF_SYM(40,___S_scheme_2e_core_2e_kernel))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(40,___S_scheme_2e_core_2e_kernel))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(40,___S_scheme_2e_core_2e_kernel))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(40,___S_scheme_2e_core_2e_kernel))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(40,___S_scheme_2e_core_2e_kernel))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(40,___S_scheme_2e_core_2e_kernel))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,0UL)
               ___VEC0
___DEF_SUB_VEC(___X15,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_scheme_2e_core_2e_kernel))
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
___DEF_M_HLBL(___L0_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_M_HLBL(___L1_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_M_HLBL(___L2_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_M_HLBL(___L3_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_M_HLBL(___L4_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_M_HLBL(___L5_bin_3a_scheme_2e_core_2e_kernel_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_scheme_2e_core_2e_kernel_23_
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
___DEF_P_HLBL(___L0_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_P_HLBL(___L1_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_P_HLBL(___L2_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_P_HLBL(___L3_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_P_HLBL(___L4_bin_3a_scheme_2e_core_2e_kernel_23_)
___DEF_P_HLBL(___L5_bin_3a_scheme_2e_core_2e_kernel_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___SET_STK(1,___SYM_scheme_2e_core_2e_kernel)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___POLL(5)
___DEF_SLBL(5,___L5_bin_3a_scheme_2e_core_2e_kernel_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_scheme_2e_core_2e_kernel_23_,"bin:scheme.core.kernel#",___REF_SUB(0),6,
0)
,___DEF_LBL_PROC(___H_bin_3a_scheme_2e_core_2e_kernel_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_core_2e_kernel_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_core_2e_kernel_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_core_2e_kernel_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_core_2e_kernel_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_scheme_2e_core_2e_kernel_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_scheme_2e_core_2e_kernel_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_scheme_2e_core_2e_kernel_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_add_2d_core_2d_method_2d_node,"add-core-method-node")
___DEF_MOD_SYM(1,___S_annotate_2d_let,"annotate-let")
___DEF_MOD_SYM(2,___S_bin_3a_scheme_2e_core_2e_kernel,"bin:scheme.core.kernel")
___DEF_MOD_SYM(3,___S_compose_2d_helper,"compose-helper")
___DEF_MOD_SYM(4,___S_current_2d_declaration,"current-declaration")
___DEF_MOD_SYM(5,___S_current_2d_declaration_2d_name,"current-declaration-name")
___DEF_MOD_SYM(6,___S_current_2d_resume,"current-resume")
___DEF_MOD_SYM(7,___S_current_2d_walker,"current-walker")
___DEF_MOD_SYM(8,___S_emit,"emit")
___DEF_MOD_SYM(9,___S_emit_2d_expressions,"emit-expressions")
___DEF_MOD_SYM(10,___S_emit_2d_one_2d_expression,"emit-one-expression")
___DEF_MOD_SYM(11,___S_emit_2d_statements_2d_code,"emit-statements-code")
___DEF_MOD_SYM(12,___S_find_2d_annotated,"find-annotated")
___DEF_MOD_SYM(13,___S_find_2d_annotated_2d_type,"find-annotated-type")
___DEF_MOD_SYM(14,___S_find_2d_nextmethod,"find-nextmethod")
___DEF_MOD_SYM(15,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(16,___S_get_2d_and_2d_expressions,"get-and-expressions")
___DEF_MOD_SYM(17,___S_get_2d_class_2d_level,"get-class-level")
___DEF_MOD_SYM(18,___S_get_2d_declaration_2d_path,"get-declaration-path")
___DEF_MOD_SYM(19,___S_get_2d_declaration_2d_toplevel,"get-declaration-toplevel")
___DEF_MOD_SYM(20,___S_get_2d_dialect,"get-dialect")
___DEF_MOD_SYM(21,___S_get_2d_expression_2d_source,"get-expression-source")
___DEF_MOD_SYM(22,___S_get_2d_object_2d_slot,"get-object-slot")
___DEF_MOD_SYM(23,___S_iterate_2d_module_2d_declaration,"iterate-module-declaration")
___DEF_MOD_SYM(24,___S_method_2d_implementation_2d_name,"method-implementation-name")
___DEF_MOD_SYM(25,___S_new_2d_code,"new-code")
___DEF_MOD_SYM(26,___S_new_2d_core_2d_class,"new-core-class")
___DEF_MOD_SYM(27,___S_new_2d_declaration_2d_form,"new-declaration-form")
___DEF_MOD_SYM(28,___S_new_2d_object,"new-object")
___DEF_MOD_SYM(29,___S_new_2d_special_2d_expression,"new-special-expression")
___DEF_MOD_SYM(30,___S_new_2d_special_2d_form,"new-special-form")
___DEF_MOD_SYM(31,___S_object_2d_size,"object-size")
___DEF_MOD_SYM(32,___S_parse_2d_keywords,"parse-keywords")
___DEF_MOD_SYM(33,___S_parse_2d_modifiers,"parse-modifiers")
___DEF_MOD_SYM(34,___S_public,"public")
___DEF_MOD_SYM(35,___S_reference_2d_name,"reference-name")
___DEF_MOD_SYM(36,___S_register_2d_binding,"register-binding")
___DEF_MOD_SYM(37,___S_register_2d_declaration,"register-declaration")
___DEF_MOD_SYM(38,___S_require_2d_dialect,"require-dialect")
___DEF_MOD_SYM(39,___S_scheme,"scheme")
___DEF_MOD_SYM(40,___S_scheme_2e_core_2e_kernel,"scheme.core.kernel")
___DEF_MOD_SYM(41,___S_scheme_2e_core_2e_kernel_3a_add_2d_core_2d_method_2d_node,"scheme.core.kernel:add-core-method-node")

___DEF_MOD_SYM(42,___S_scheme_2e_core_2e_kernel_3a_annotate_2d_let,"scheme.core.kernel:annotate-let")

___DEF_MOD_SYM(43,___S_scheme_2e_core_2e_kernel_3a_compose_2d_helper,"scheme.core.kernel:compose-helper")

___DEF_MOD_SYM(44,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration,"scheme.core.kernel:current-declaration")

___DEF_MOD_SYM(45,___S_scheme_2e_core_2e_kernel_3a_current_2d_declaration_2d_name,"scheme.core.kernel:current-declaration-name")

___DEF_MOD_SYM(46,___S_scheme_2e_core_2e_kernel_3a_current_2d_resume,"scheme.core.kernel:current-resume")

___DEF_MOD_SYM(47,___S_scheme_2e_core_2e_kernel_3a_current_2d_walker,"scheme.core.kernel:current-walker")

___DEF_MOD_SYM(48,___S_scheme_2e_core_2e_kernel_3a_emit,"scheme.core.kernel:emit")
___DEF_MOD_SYM(49,___S_scheme_2e_core_2e_kernel_3a_emit_2d_expressions,"scheme.core.kernel:emit-expressions")

___DEF_MOD_SYM(50,___S_scheme_2e_core_2e_kernel_3a_emit_2d_one_2d_expression,"scheme.core.kernel:emit-one-expression")

___DEF_MOD_SYM(51,___S_scheme_2e_core_2e_kernel_3a_emit_2d_statements_2d_code,"scheme.core.kernel:emit-statements-code")

___DEF_MOD_SYM(52,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated,"scheme.core.kernel:find-annotated")

___DEF_MOD_SYM(53,___S_scheme_2e_core_2e_kernel_3a_find_2d_annotated_2d_type,"scheme.core.kernel:find-annotated-type")

___DEF_MOD_SYM(54,___S_scheme_2e_core_2e_kernel_3a_find_2d_nextmethod,"scheme.core.kernel:find-nextmethod")

___DEF_MOD_SYM(55,___S_scheme_2e_core_2e_kernel_3a_get_2d_and_2d_expressions,"scheme.core.kernel:get-and-expressions")

___DEF_MOD_SYM(56,___S_scheme_2e_core_2e_kernel_3a_get_2d_class_2d_level,"scheme.core.kernel:get-class-level")

___DEF_MOD_SYM(57,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_path,"scheme.core.kernel:get-declaration-path")

___DEF_MOD_SYM(58,___S_scheme_2e_core_2e_kernel_3a_get_2d_declaration_2d_toplevel,"scheme.core.kernel:get-declaration-toplevel")

___DEF_MOD_SYM(59,___S_scheme_2e_core_2e_kernel_3a_get_2d_dialect,"scheme.core.kernel:get-dialect")

___DEF_MOD_SYM(60,___S_scheme_2e_core_2e_kernel_3a_get_2d_expression_2d_source,"scheme.core.kernel:get-expression-source")

___DEF_MOD_SYM(61,___S_scheme_2e_core_2e_kernel_3a_get_2d_object_2d_slot,"scheme.core.kernel:get-object-slot")

___DEF_MOD_SYM(62,___S_scheme_2e_core_2e_kernel_3a_iterate_2d_module_2d_declaration,"scheme.core.kernel:iterate-module-declaration")

___DEF_MOD_SYM(63,___S_scheme_2e_core_2e_kernel_3a_method_2d_implementation_2d_name,"scheme.core.kernel:method-implementation-name")

___DEF_MOD_SYM(64,___S_scheme_2e_core_2e_kernel_3a_new_2d_code,"scheme.core.kernel:new-code")
___DEF_MOD_SYM(65,___S_scheme_2e_core_2e_kernel_3a_new_2d_core_2d_class,"scheme.core.kernel:new-core-class")

___DEF_MOD_SYM(66,___S_scheme_2e_core_2e_kernel_3a_new_2d_declaration_2d_form,"scheme.core.kernel:new-declaration-form")

___DEF_MOD_SYM(67,___S_scheme_2e_core_2e_kernel_3a_new_2d_object,"scheme.core.kernel:new-object")

___DEF_MOD_SYM(68,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_expression,"scheme.core.kernel:new-special-expression")

___DEF_MOD_SYM(69,___S_scheme_2e_core_2e_kernel_3a_new_2d_special_2d_form,"scheme.core.kernel:new-special-form")

___DEF_MOD_SYM(70,___S_scheme_2e_core_2e_kernel_3a_object_2d_size,"scheme.core.kernel:object-size")

___DEF_MOD_SYM(71,___S_scheme_2e_core_2e_kernel_3a_parse_2d_keywords,"scheme.core.kernel:parse-keywords")

___DEF_MOD_SYM(72,___S_scheme_2e_core_2e_kernel_3a_parse_2d_modifiers,"scheme.core.kernel:parse-modifiers")

___DEF_MOD_SYM(73,___S_scheme_2e_core_2e_kernel_3a_reference_2d_name,"scheme.core.kernel:reference-name")

___DEF_MOD_SYM(74,___S_scheme_2e_core_2e_kernel_3a_register_2d_binding,"scheme.core.kernel:register-binding")

___DEF_MOD_SYM(75,___S_scheme_2e_core_2e_kernel_3a_register_2d_declaration,"scheme.core.kernel:register-declaration")

___DEF_MOD_SYM(76,___S_scheme_2e_core_2e_kernel_3a_require_2d_dialect,"scheme.core.kernel:require-dialect")

___DEF_MOD_SYM(77,___S_scheme_2e_core_2e_kernel_3a_set_2d_core_2d_class,"scheme.core.kernel:set-core-class")

___DEF_MOD_SYM(78,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_class,"scheme.core.kernel:set-object-class")

___DEF_MOD_SYM(79,___S_scheme_2e_core_2e_kernel_3a_set_2d_object_2d_slot,"scheme.core.kernel:set-object-slot")

___DEF_MOD_SYM(80,___S_scheme_2e_core_2e_kernel_3a_setup_2d_declaration,"scheme.core.kernel:setup-declaration")

___DEF_MOD_SYM(81,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold,"scheme.core.kernel:tree-fold")
___DEF_MOD_SYM(82,___S_scheme_2e_core_2e_kernel_3a_tree_2d_fold_2d_list,"scheme.core.kernel:tree-fold-list")

___DEF_MOD_SYM(83,___S_scheme_2e_core_2e_kernel_3a_walk,"scheme.core.kernel:walk")
___DEF_MOD_SYM(84,___S_scheme_2e_core_2e_kernel_3a_walk_2d_list,"scheme.core.kernel:walk-list")
___DEF_MOD_SYM(85,___S_set_2d_core_2d_class,"set-core-class")
___DEF_MOD_SYM(86,___S_set_2d_object_2d_class,"set-object-class")
___DEF_MOD_SYM(87,___S_set_2d_object_2d_slot,"set-object-slot")
___DEF_MOD_SYM(88,___S_setup_2d_declaration,"setup-declaration")
___DEF_MOD_SYM(89,___S_tree_2d_fold,"tree-fold")
___DEF_MOD_SYM(90,___S_tree_2d_fold_2d_list,"tree-fold-list")
___DEF_MOD_SYM(91,___S_walk,"walk")
___DEF_MOD_SYM(92,___S_walk_2d_list,"walk-list")
___END_MOD_SYM_KEY

#endif
