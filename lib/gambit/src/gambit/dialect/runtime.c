#ifdef ___LINKER_INFO
; File: "runtime.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:gambit.dialect.runtime"
(("bin:gambit.dialect.runtime"))
(
"Gambit-Dialect"
"Gambit-Walker"
"autoloads"
"bin:gambit.dialect.runtime"
"bindings"
"declarations"
"dialect"
"dialect-walker"
"errors"
"exports"
"function"
"gambit"
"gambit.dialect.runtime"
"jazz:Gambit-Dialect"
"jazz:Gambit-Walker"
"jazz:Object-Class"
"jazz:Scheme-Dialect"
"jazz:Scheme-Walker"
"jazz:allocate-gambit-dialect"
"jazz:allocate-gambit-walker"
"literals"
"name"
"nextmethod"
"references"
"statics"
"variables"
"walker"
"walker-bindings"
"walker-declarations"
"warnings"
)
(
"test"
)
(
"bin:gambit.dialect.runtime#"
"jazz:Gambit-Dialect"
"jazz:Gambit-Dialect^dialect-walker"
"jazz:Gambit-Walker"
"jazz:Gambit-Walker^walker-bindings"
"jazz:Gambit-Walker^walker-declarations"
"jazz:allocate-gambit-dialect"
"jazz:allocate-gambit-walker"
"jazz:new-gambit-dialect"
"jazz:new-gambit-walker"
)
(
"jazz:Gambit-Dialect!core-level"
"jazz:Gambit-Walker!core-level"
)
(
"##table-set!"
"eq?"
"jazz:Object-Class"
"jazz:Scheme-Dialect"
"jazz:Scheme-Walker"
"jazz:add-core-method-node"
"jazz:class-info"
"jazz:find-nextmethod"
"jazz:get-dialect"
"jazz:get-dialect-bindings"
"jazz:get-dialect-declarations"
"jazz:make-class-info"
"jazz:new-core-class"
"jazz:new-queue"
"jazz:register-dialect"
"jazz:set-core-class"
"make-table"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:gambit.dialect.runtime"
#define ___LINKER_ID ___LNK_bin_3a_gambit_2e_dialect_2e_runtime
#define ___MH_PROC ___H_bin_3a_gambit_2e_dialect_2e_runtime
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 30
#define ___KEYCOUNT 1
#define ___GLOCOUNT 29
#define ___SUPCOUNT 12
#define ___CNSCOUNT 14
#define ___SUBCOUNT 134
#define ___LBLCOUNT 64
#define ___OFDCOUNT 2
#define ___MODDESCR ___REF_SUB(133)
#include "gambit.h"

___NEED_SYM(___S_Gambit_2d_Dialect)
___NEED_SYM(___S_Gambit_2d_Walker)
___NEED_SYM(___S_autoloads)
___NEED_SYM(___S_bin_3a_gambit_2e_dialect_2e_runtime)
___NEED_SYM(___S_bindings)
___NEED_SYM(___S_declarations)
___NEED_SYM(___S_dialect)
___NEED_SYM(___S_dialect_2d_walker)
___NEED_SYM(___S_errors)
___NEED_SYM(___S_exports)
___NEED_SYM(___S_function)
___NEED_SYM(___S_gambit)
___NEED_SYM(___S_gambit_2e_dialect_2e_runtime)
___NEED_SYM(___S_jazz_3a_Gambit_2d_Dialect)
___NEED_SYM(___S_jazz_3a_Gambit_2d_Walker)
___NEED_SYM(___S_jazz_3a_Object_2d_Class)
___NEED_SYM(___S_jazz_3a_Scheme_2d_Dialect)
___NEED_SYM(___S_jazz_3a_Scheme_2d_Walker)
___NEED_SYM(___S_jazz_3a_allocate_2d_gambit_2d_dialect)
___NEED_SYM(___S_jazz_3a_allocate_2d_gambit_2d_walker)
___NEED_SYM(___S_literals)
___NEED_SYM(___S_name)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_references)
___NEED_SYM(___S_statics)
___NEED_SYM(___S_variables)
___NEED_SYM(___S_walker)
___NEED_SYM(___S_walker_2d_bindings)
___NEED_SYM(___S_walker_2d_declarations)
___NEED_SYM(___S_warnings)

___NEED_KEY(___K_test)

___NEED_GLO(___G__23__23_table_2d_set_21_)
___NEED_GLO(___G_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Dialect)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Dialect_21_core_2d_level)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Walker)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Walker_21_core_2d_level)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings)
___NEED_GLO(___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations)
___NEED_GLO(___G_jazz_3a_Object_2d_Class)
___NEED_GLO(___G_jazz_3a_Scheme_2d_Dialect)
___NEED_GLO(___G_jazz_3a_Scheme_2d_Walker)
___NEED_GLO(___G_jazz_3a_add_2d_core_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_allocate_2d_gambit_2d_dialect)
___NEED_GLO(___G_jazz_3a_allocate_2d_gambit_2d_walker)
___NEED_GLO(___G_jazz_3a_class_2d_info)
___NEED_GLO(___G_jazz_3a_find_2d_nextmethod)
___NEED_GLO(___G_jazz_3a_get_2d_dialect)
___NEED_GLO(___G_jazz_3a_get_2d_dialect_2d_bindings)
___NEED_GLO(___G_jazz_3a_get_2d_dialect_2d_declarations)
___NEED_GLO(___G_jazz_3a_make_2d_class_2d_info)
___NEED_GLO(___G_jazz_3a_new_2d_core_2d_class)
___NEED_GLO(___G_jazz_3a_new_2d_gambit_2d_dialect)
___NEED_GLO(___G_jazz_3a_new_2d_gambit_2d_walker)
___NEED_GLO(___G_jazz_3a_new_2d_queue)
___NEED_GLO(___G_jazz_3a_register_2d_dialect)
___NEED_GLO(___G_jazz_3a_set_2d_core_2d_class)
___NEED_GLO(___G_make_2d_table)

___BEGIN_SYM
___DEF_SYM(0,___S_Gambit_2d_Dialect,"Gambit-Dialect")
___DEF_SYM(1,___S_Gambit_2d_Walker,"Gambit-Walker")
___DEF_SYM(2,___S_autoloads,"autoloads")
___DEF_SYM(3,___S_bin_3a_gambit_2e_dialect_2e_runtime,"bin:gambit.dialect.runtime")
___DEF_SYM(4,___S_bindings,"bindings")
___DEF_SYM(5,___S_declarations,"declarations")
___DEF_SYM(6,___S_dialect,"dialect")
___DEF_SYM(7,___S_dialect_2d_walker,"dialect-walker")
___DEF_SYM(8,___S_errors,"errors")
___DEF_SYM(9,___S_exports,"exports")
___DEF_SYM(10,___S_function,"function")
___DEF_SYM(11,___S_gambit,"gambit")
___DEF_SYM(12,___S_gambit_2e_dialect_2e_runtime,"gambit.dialect.runtime")
___DEF_SYM(13,___S_jazz_3a_Gambit_2d_Dialect,"jazz:Gambit-Dialect")
___DEF_SYM(14,___S_jazz_3a_Gambit_2d_Walker,"jazz:Gambit-Walker")
___DEF_SYM(15,___S_jazz_3a_Object_2d_Class,"jazz:Object-Class")
___DEF_SYM(16,___S_jazz_3a_Scheme_2d_Dialect,"jazz:Scheme-Dialect")
___DEF_SYM(17,___S_jazz_3a_Scheme_2d_Walker,"jazz:Scheme-Walker")
___DEF_SYM(18,___S_jazz_3a_allocate_2d_gambit_2d_dialect,"jazz:allocate-gambit-dialect")
___DEF_SYM(19,___S_jazz_3a_allocate_2d_gambit_2d_walker,"jazz:allocate-gambit-walker")
___DEF_SYM(20,___S_literals,"literals")
___DEF_SYM(21,___S_name,"name")
___DEF_SYM(22,___S_nextmethod,"nextmethod")
___DEF_SYM(23,___S_references,"references")
___DEF_SYM(24,___S_statics,"statics")
___DEF_SYM(25,___S_variables,"variables")
___DEF_SYM(26,___S_walker,"walker")
___DEF_SYM(27,___S_walker_2d_bindings,"walker-bindings")
___DEF_SYM(28,___S_walker_2d_declarations,"walker-declarations")
___DEF_SYM(29,___S_warnings,"warnings")
___END_SYM

#define ___SYM_Gambit_2d_Dialect ___SYM(0,___S_Gambit_2d_Dialect)
#define ___SYM_Gambit_2d_Walker ___SYM(1,___S_Gambit_2d_Walker)
#define ___SYM_autoloads ___SYM(2,___S_autoloads)
#define ___SYM_bin_3a_gambit_2e_dialect_2e_runtime ___SYM(3,___S_bin_3a_gambit_2e_dialect_2e_runtime)
#define ___SYM_bindings ___SYM(4,___S_bindings)
#define ___SYM_declarations ___SYM(5,___S_declarations)
#define ___SYM_dialect ___SYM(6,___S_dialect)
#define ___SYM_dialect_2d_walker ___SYM(7,___S_dialect_2d_walker)
#define ___SYM_errors ___SYM(8,___S_errors)
#define ___SYM_exports ___SYM(9,___S_exports)
#define ___SYM_function ___SYM(10,___S_function)
#define ___SYM_gambit ___SYM(11,___S_gambit)
#define ___SYM_gambit_2e_dialect_2e_runtime ___SYM(12,___S_gambit_2e_dialect_2e_runtime)
#define ___SYM_jazz_3a_Gambit_2d_Dialect ___SYM(13,___S_jazz_3a_Gambit_2d_Dialect)
#define ___SYM_jazz_3a_Gambit_2d_Walker ___SYM(14,___S_jazz_3a_Gambit_2d_Walker)
#define ___SYM_jazz_3a_Object_2d_Class ___SYM(15,___S_jazz_3a_Object_2d_Class)
#define ___SYM_jazz_3a_Scheme_2d_Dialect ___SYM(16,___S_jazz_3a_Scheme_2d_Dialect)
#define ___SYM_jazz_3a_Scheme_2d_Walker ___SYM(17,___S_jazz_3a_Scheme_2d_Walker)
#define ___SYM_jazz_3a_allocate_2d_gambit_2d_dialect ___SYM(18,___S_jazz_3a_allocate_2d_gambit_2d_dialect)
#define ___SYM_jazz_3a_allocate_2d_gambit_2d_walker ___SYM(19,___S_jazz_3a_allocate_2d_gambit_2d_walker)
#define ___SYM_literals ___SYM(20,___S_literals)
#define ___SYM_name ___SYM(21,___S_name)
#define ___SYM_nextmethod ___SYM(22,___S_nextmethod)
#define ___SYM_references ___SYM(23,___S_references)
#define ___SYM_statics ___SYM(24,___S_statics)
#define ___SYM_variables ___SYM(25,___S_variables)
#define ___SYM_walker ___SYM(26,___S_walker)
#define ___SYM_walker_2d_bindings ___SYM(27,___S_walker_2d_bindings)
#define ___SYM_walker_2d_declarations ___SYM(28,___S_walker_2d_declarations)
#define ___SYM_warnings ___SYM(29,___S_warnings)

___BEGIN_KEY
___DEF_KEY(0,___K_test,"test")
___END_KEY

#define ___KEY_test ___KEY(0,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"bin:gambit.dialect.runtime#")
___DEF_GLO(1,"jazz:Gambit-Dialect")
___DEF_GLO(2,"jazz:Gambit-Dialect!core-level")
___DEF_GLO(3,"jazz:Gambit-Dialect^dialect-walker")

___DEF_GLO(4,"jazz:Gambit-Walker")
___DEF_GLO(5,"jazz:Gambit-Walker!core-level")
___DEF_GLO(6,"jazz:Gambit-Walker^walker-bindings")

___DEF_GLO(7,"jazz:Gambit-Walker^walker-declarations")

___DEF_GLO(8,"jazz:allocate-gambit-dialect")
___DEF_GLO(9,"jazz:allocate-gambit-walker")
___DEF_GLO(10,"jazz:new-gambit-dialect")
___DEF_GLO(11,"jazz:new-gambit-walker")
___DEF_GLO(12,"##table-set!")
___DEF_GLO(13,"eq?")
___DEF_GLO(14,"jazz:Object-Class")
___DEF_GLO(15,"jazz:Scheme-Dialect")
___DEF_GLO(16,"jazz:Scheme-Walker")
___DEF_GLO(17,"jazz:add-core-method-node")
___DEF_GLO(18,"jazz:class-info")
___DEF_GLO(19,"jazz:find-nextmethod")
___DEF_GLO(20,"jazz:get-dialect")
___DEF_GLO(21,"jazz:get-dialect-bindings")
___DEF_GLO(22,"jazz:get-dialect-declarations")
___DEF_GLO(23,"jazz:make-class-info")
___DEF_GLO(24,"jazz:new-core-class")
___DEF_GLO(25,"jazz:new-queue")
___DEF_GLO(26,"jazz:register-dialect")
___DEF_GLO(27,"jazz:set-core-class")
___DEF_GLO(28,"make-table")
___END_GLO

#define ___GLO_bin_3a_gambit_2e_dialect_2e_runtime_23_ ___GLO(0,___G_bin_3a_gambit_2e_dialect_2e_runtime_23_)
#define ___PRM_bin_3a_gambit_2e_dialect_2e_runtime_23_ ___PRM(0,___G_bin_3a_gambit_2e_dialect_2e_runtime_23_)
#define ___GLO_jazz_3a_Gambit_2d_Dialect ___GLO(1,___G_jazz_3a_Gambit_2d_Dialect)
#define ___PRM_jazz_3a_Gambit_2d_Dialect ___PRM(1,___G_jazz_3a_Gambit_2d_Dialect)
#define ___GLO_jazz_3a_Gambit_2d_Dialect_21_core_2d_level ___GLO(2,___G_jazz_3a_Gambit_2d_Dialect_21_core_2d_level)
#define ___PRM_jazz_3a_Gambit_2d_Dialect_21_core_2d_level ___PRM(2,___G_jazz_3a_Gambit_2d_Dialect_21_core_2d_level)
#define ___GLO_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker ___GLO(3,___G_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker)
#define ___PRM_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker ___PRM(3,___G_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker)
#define ___GLO_jazz_3a_Gambit_2d_Walker ___GLO(4,___G_jazz_3a_Gambit_2d_Walker)
#define ___PRM_jazz_3a_Gambit_2d_Walker ___PRM(4,___G_jazz_3a_Gambit_2d_Walker)
#define ___GLO_jazz_3a_Gambit_2d_Walker_21_core_2d_level ___GLO(5,___G_jazz_3a_Gambit_2d_Walker_21_core_2d_level)
#define ___PRM_jazz_3a_Gambit_2d_Walker_21_core_2d_level ___PRM(5,___G_jazz_3a_Gambit_2d_Walker_21_core_2d_level)
#define ___GLO_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings ___GLO(6,___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings)
#define ___PRM_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings ___PRM(6,___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings)
#define ___GLO_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations ___GLO(7,___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations)
#define ___PRM_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations ___PRM(7,___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations)
#define ___GLO_jazz_3a_allocate_2d_gambit_2d_dialect ___GLO(8,___G_jazz_3a_allocate_2d_gambit_2d_dialect)
#define ___PRM_jazz_3a_allocate_2d_gambit_2d_dialect ___PRM(8,___G_jazz_3a_allocate_2d_gambit_2d_dialect)
#define ___GLO_jazz_3a_allocate_2d_gambit_2d_walker ___GLO(9,___G_jazz_3a_allocate_2d_gambit_2d_walker)
#define ___PRM_jazz_3a_allocate_2d_gambit_2d_walker ___PRM(9,___G_jazz_3a_allocate_2d_gambit_2d_walker)
#define ___GLO_jazz_3a_new_2d_gambit_2d_dialect ___GLO(10,___G_jazz_3a_new_2d_gambit_2d_dialect)
#define ___PRM_jazz_3a_new_2d_gambit_2d_dialect ___PRM(10,___G_jazz_3a_new_2d_gambit_2d_dialect)
#define ___GLO_jazz_3a_new_2d_gambit_2d_walker ___GLO(11,___G_jazz_3a_new_2d_gambit_2d_walker)
#define ___PRM_jazz_3a_new_2d_gambit_2d_walker ___PRM(11,___G_jazz_3a_new_2d_gambit_2d_walker)
#define ___GLO__23__23_table_2d_set_21_ ___GLO(12,___G__23__23_table_2d_set_21_)
#define ___PRM__23__23_table_2d_set_21_ ___PRM(12,___G__23__23_table_2d_set_21_)
#define ___GLO_eq_3f_ ___GLO(13,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(13,___G_eq_3f_)
#define ___GLO_jazz_3a_Object_2d_Class ___GLO(14,___G_jazz_3a_Object_2d_Class)
#define ___PRM_jazz_3a_Object_2d_Class ___PRM(14,___G_jazz_3a_Object_2d_Class)
#define ___GLO_jazz_3a_Scheme_2d_Dialect ___GLO(15,___G_jazz_3a_Scheme_2d_Dialect)
#define ___PRM_jazz_3a_Scheme_2d_Dialect ___PRM(15,___G_jazz_3a_Scheme_2d_Dialect)
#define ___GLO_jazz_3a_Scheme_2d_Walker ___GLO(16,___G_jazz_3a_Scheme_2d_Walker)
#define ___PRM_jazz_3a_Scheme_2d_Walker ___PRM(16,___G_jazz_3a_Scheme_2d_Walker)
#define ___GLO_jazz_3a_add_2d_core_2d_method_2d_node ___GLO(17,___G_jazz_3a_add_2d_core_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_core_2d_method_2d_node ___PRM(17,___G_jazz_3a_add_2d_core_2d_method_2d_node)
#define ___GLO_jazz_3a_class_2d_info ___GLO(18,___G_jazz_3a_class_2d_info)
#define ___PRM_jazz_3a_class_2d_info ___PRM(18,___G_jazz_3a_class_2d_info)
#define ___GLO_jazz_3a_find_2d_nextmethod ___GLO(19,___G_jazz_3a_find_2d_nextmethod)
#define ___PRM_jazz_3a_find_2d_nextmethod ___PRM(19,___G_jazz_3a_find_2d_nextmethod)
#define ___GLO_jazz_3a_get_2d_dialect ___GLO(20,___G_jazz_3a_get_2d_dialect)
#define ___PRM_jazz_3a_get_2d_dialect ___PRM(20,___G_jazz_3a_get_2d_dialect)
#define ___GLO_jazz_3a_get_2d_dialect_2d_bindings ___GLO(21,___G_jazz_3a_get_2d_dialect_2d_bindings)
#define ___PRM_jazz_3a_get_2d_dialect_2d_bindings ___PRM(21,___G_jazz_3a_get_2d_dialect_2d_bindings)
#define ___GLO_jazz_3a_get_2d_dialect_2d_declarations ___GLO(22,___G_jazz_3a_get_2d_dialect_2d_declarations)
#define ___PRM_jazz_3a_get_2d_dialect_2d_declarations ___PRM(22,___G_jazz_3a_get_2d_dialect_2d_declarations)
#define ___GLO_jazz_3a_make_2d_class_2d_info ___GLO(23,___G_jazz_3a_make_2d_class_2d_info)
#define ___PRM_jazz_3a_make_2d_class_2d_info ___PRM(23,___G_jazz_3a_make_2d_class_2d_info)
#define ___GLO_jazz_3a_new_2d_core_2d_class ___GLO(24,___G_jazz_3a_new_2d_core_2d_class)
#define ___PRM_jazz_3a_new_2d_core_2d_class ___PRM(24,___G_jazz_3a_new_2d_core_2d_class)
#define ___GLO_jazz_3a_new_2d_queue ___GLO(25,___G_jazz_3a_new_2d_queue)
#define ___PRM_jazz_3a_new_2d_queue ___PRM(25,___G_jazz_3a_new_2d_queue)
#define ___GLO_jazz_3a_register_2d_dialect ___GLO(26,___G_jazz_3a_register_2d_dialect)
#define ___PRM_jazz_3a_register_2d_dialect ___PRM(26,___G_jazz_3a_register_2d_dialect)
#define ___GLO_jazz_3a_set_2d_core_2d_class ___GLO(27,___G_jazz_3a_set_2d_core_2d_class)
#define ___PRM_jazz_3a_set_2d_core_2d_class ___PRM(27,___G_jazz_3a_set_2d_core_2d_class)
#define ___GLO_make_2d_table ___GLO(28,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(28,___G_make_2d_table)

___BEGIN_CNS
 ___DEF_CNS(___REF_SYM(21,___S_name),___REF_CNS(1))
,___DEF_CNS(___REF_SYM(5,___S_declarations),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(4,___S_bindings),___REF_NUL)
,___DEF_CNS(___REF_SYM(5,___S_declarations),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(4,___S_bindings),___REF_CNS(5))
,___DEF_CNS(___REF_SYM(29,___S_warnings),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(8,___S_errors),___REF_CNS(7))
,___DEF_CNS(___REF_SYM(20,___S_literals),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(25,___S_variables),___REF_CNS(9))
,___DEF_CNS(___REF_SYM(24,___S_statics),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(9,___S_exports),___REF_CNS(11))
,___DEF_CNS(___REF_SYM(23,___S_references),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(2,___S_autoloads),___REF_NUL)
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X1,41UL)
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
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(53))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(53))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(75))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(75))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(75))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(80))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(80))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(80))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(90))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(90))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(90))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(80))
               ___VEC0
___DEF_SUB_VEC(___X50,4UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(425986))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(2293841))
               ___VEC0
___DEF_SUB_VEC(___X52,4UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(2293841))
               ___VEC0
___DEF_SUB_VEC(___X54,4UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(524369))
               ___VEC0
___DEF_SUB_VEC(___X56,3UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(524370))
               ___VEC0
___DEF_SUB_VEC(___X58,3UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131153))
               ___VEC0
___DEF_SUB_VEC(___X60,3UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131153))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(75))
               ___VEC0
___DEF_SUB_VEC(___X64,4UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_FIX(425986))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(2555980))
               ___VEC0
___DEF_SUB_VEC(___X66,4UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(2555980))
               ___VEC0
___DEF_SUB_VEC(___X68,4UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(524364))
               ___VEC0
___DEF_SUB_VEC(___X70,3UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(524365))
               ___VEC0
___DEF_SUB_VEC(___X72,3UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131148))
               ___VEC0
___DEF_SUB_VEC(___X74,3UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131148))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(53))
               ___VEC0
___DEF_SUB_VEC(___X78,4UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_FIX(327686))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X80,3UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X82,3UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X84,4UL)
               ___VEC1(___REF_SYM(22,___S_nextmethod))
               ___VEC1(___REF_CNS(13))
               ___VEC1(___REF_SYM(26,___S_walker))
               ___VEC1(___REF_SYM(6,___S_dialect))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X91,0UL)
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(106))
               ___VEC0
___DEF_SUB_VEC(___X93,6UL)
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_SUB(104))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(95))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X96,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(2424882))
               ___VEC0
___DEF_SUB_VEC(___X98,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(2424882))
               ___VEC0
___DEF_SUB_VEC(___X100,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(4063282))
               ___VEC0
___DEF_SUB_VEC(___X102,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X104,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X106,1UL)
               ___VEC1(___REF_SYM(21,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(110))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X113,0UL)
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(132))
               ___VEC0
___DEF_SUB_VEC(___X115,8UL)
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_SUB(130))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(66))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(119))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(3211331))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(121))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(3211331))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(123))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(4325443))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(5439555))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(127))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(7077955))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(12,___S_gambit_2e_dialect_2e_runtime))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X132,0UL)
               ___VEC0
___DEF_SUB_VEC(___X133,5UL)
               ___VEC1(___REF_SYM(3,___S_bin_3a_gambit_2e_dialect_2e_runtime))
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
,___DEF_SUB(___X78)
,___DEF_SUB(___X79)
,___DEF_SUB(___X80)
,___DEF_SUB(___X81)
,___DEF_SUB(___X82)
,___DEF_SUB(___X83)
,___DEF_SUB(___X84)
,___DEF_SUB(___X85)
,___DEF_SUB(___X86)
,___DEF_SUB(___X87)
,___DEF_SUB(___X88)
,___DEF_SUB(___X89)
,___DEF_SUB(___X90)
,___DEF_SUB(___X91)
,___DEF_SUB(___X92)
,___DEF_SUB(___X93)
,___DEF_SUB(___X94)
,___DEF_SUB(___X95)
,___DEF_SUB(___X96)
,___DEF_SUB(___X97)
,___DEF_SUB(___X98)
,___DEF_SUB(___X99)
,___DEF_SUB(___X100)
,___DEF_SUB(___X101)
,___DEF_SUB(___X102)
,___DEF_SUB(___X103)
,___DEF_SUB(___X104)
,___DEF_SUB(___X105)
,___DEF_SUB(___X106)
,___DEF_SUB(___X107)
,___DEF_SUB(___X108)
,___DEF_SUB(___X109)
,___DEF_SUB(___X110)
,___DEF_SUB(___X111)
,___DEF_SUB(___X112)
,___DEF_SUB(___X113)
,___DEF_SUB(___X114)
,___DEF_SUB(___X115)
,___DEF_SUB(___X116)
,___DEF_SUB(___X117)
,___DEF_SUB(___X118)
,___DEF_SUB(___X119)
,___DEF_SUB(___X120)
,___DEF_SUB(___X121)
,___DEF_SUB(___X122)
,___DEF_SUB(___X123)
,___DEF_SUB(___X124)
,___DEF_SUB(___X125)
,___DEF_SUB(___X126)
,___DEF_SUB(___X127)
,___DEF_SUB(___X128)
,___DEF_SUB(___X129)
,___DEF_SUB(___X130)
,___DEF_SUB(___X131)
,___DEF_SUB(___X132)
,___DEF_SUB(___X133)
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
___DEF_M_HLBL(___L0_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L1_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L2_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L3_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L4_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L5_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L6_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L7_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L8_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L9_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L10_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L11_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L12_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L13_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L14_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L15_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L16_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L17_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L18_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L19_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L20_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L21_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L22_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L23_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L24_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L25_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L26_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L27_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L28_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L29_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L30_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L31_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L32_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L33_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L34_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L35_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L36_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L37_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L38_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L39_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL(___L40_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_allocate_2d_gambit_2d_dialect)
___DEF_M_HLBL(___L1_jazz_3a_allocate_2d_gambit_2d_dialect)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_M_HLBL(___L1_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_M_HLBL(___L2_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_M_HLBL(___L3_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_M_HLBL(___L4_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_M_HLBL(___L5_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_allocate_2d_gambit_2d_walker)
___DEF_M_HLBL(___L1_jazz_3a_allocate_2d_gambit_2d_walker)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L1_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L2_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L3_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L4_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L5_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L6_jazz_3a_new_2d_gambit_2d_walker)
___DEF_M_HLBL(___L7_jazz_3a_new_2d_gambit_2d_walker)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_gambit_2e_dialect_2e_runtime_23_
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
___DEF_P_HLBL(___L0_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L1_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L2_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L3_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L4_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L5_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L6_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L7_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L8_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L9_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L10_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L11_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L12_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L13_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L14_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L15_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L16_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L17_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L18_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L19_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L20_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L21_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L22_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L23_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L24_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L25_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L26_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L27_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L28_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L29_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L30_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L31_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L32_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L33_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L34_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L35_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L36_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L37_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L38_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L39_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___DEF_P_HLBL(___L40_bin_3a_gambit_2e_dialect_2e_runtime_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(5,___SYM_jazz_3a_Object_2d_Class)
   ___SET_STK(6,___SYM_jazz_3a_Scheme_2d_Dialect)
   ___SET_STK(7,___SYM_jazz_3a_allocate_2d_gambit_2d_dialect)
   ___SET_STK(8,___FAL)
   ___SET_STK(9,___SYM_function)
   ___SET_STK(10,___NUL)
   ___SET_R3(___FIX(4L))
   ___SET_R2(___CNS(0))
   ___SET_R1(___NUL)
   ___ADJFP(10)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(9),23,___G_jazz_3a_make_2d_class_2d_info)
___DEF_SLBL(2,___L2_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_jazz_3a_Gambit_2d_Dialect)
   ___SET_R1(___GLO_jazz_3a_class_2d_info)
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),12,___G__23__23_table_2d_set_21_)
___DEF_SLBL(3,___L3_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(1,___GLO_jazz_3a_Object_2d_Class)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(4))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_make_2d_table)
___DEF_SLBL(4,___L4_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R2(___R1)
   ___SET_R3(___GLO_jazz_3a_Scheme_2d_Dialect)
   ___SET_R1(___SYM_jazz_3a_Gambit_2d_Dialect)
   ___SET_R0(___LBL(5))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),24,___G_jazz_3a_new_2d_core_2d_class)
___DEF_SLBL(5,___L5_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_GLO(1,___G_jazz_3a_Gambit_2d_Dialect,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_3a_Gambit_2d_Dialect,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_3a_Gambit_2d_Dialect_21_core_2d_level,___R1)
   ___SET_GLO(8,___G_jazz_3a_allocate_2d_gambit_2d_dialect,___PRC(43))
   ___SET_R2(___GLO_jazz_3a_Gambit_2d_Dialect)
   ___SET_R1(___SYM_Gambit_2d_Dialect)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),27,___G_jazz_3a_set_2d_core_2d_class)
___DEF_SLBL(6,___L6_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_GLO(10,___G_jazz_3a_new_2d_gambit_2d_dialect,___PRC(46))
   ___SET_R2(___SYM_dialect_2d_walker)
   ___SET_R1(___GLO_jazz_3a_Gambit_2d_Dialect)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G_jazz_3a_find_2d_nextmethod)
___DEF_SLBL(7,___L7_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_GLO(3,___G_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker,___LBL(37))
   ___SET_R3(___GLO_jazz_3a_Gambit_2d_Dialect_5e_dialect_2d_walker)
   ___SET_R2(___SYM_dialect_2d_walker)
   ___SET_R1(___GLO_jazz_3a_Gambit_2d_Dialect)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),17,___G_jazz_3a_add_2d_core_2d_method_2d_node)
___DEF_SLBL(8,___L8_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(1,___SYM_jazz_3a_Object_2d_Class)
   ___SET_STK(2,___SYM_jazz_3a_Scheme_2d_Walker)
   ___SET_STK(3,___SYM_jazz_3a_allocate_2d_gambit_2d_walker)
   ___SET_STK(4,___FAL)
   ___SET_STK(5,___SYM_function)
   ___SET_STK(6,___NUL)
   ___SET_R3(___FIX(11L))
   ___SET_R2(___CNS(3))
   ___SET_R1(___NUL)
   ___SET_R0(___LBL(9))
   ___ADJFP(6)
   ___JUMPGLOSAFE(___SET_NARGS(9),23,___G_jazz_3a_make_2d_class_2d_info)
___DEF_SLBL(9,___L9_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_jazz_3a_Gambit_2d_Walker)
   ___SET_R1(___GLO_jazz_3a_class_2d_info)
   ___SET_R0(___LBL(10))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),12,___G__23__23_table_2d_set_21_)
___DEF_SLBL(10,___L10_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(1,___GLO_jazz_3a_Object_2d_Class)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(11))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_make_2d_table)
___DEF_SLBL(11,___L11_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R2(___R1)
   ___SET_R3(___GLO_jazz_3a_Scheme_2d_Walker)
   ___SET_R1(___SYM_jazz_3a_Gambit_2d_Walker)
   ___SET_R0(___LBL(12))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),24,___G_jazz_3a_new_2d_core_2d_class)
___DEF_SLBL(12,___L12_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_GLO(4,___G_jazz_3a_Gambit_2d_Walker,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_3a_Gambit_2d_Walker,___FIX(11L)))
   ___SET_GLO(5,___G_jazz_3a_Gambit_2d_Walker_21_core_2d_level,___R1)
   ___SET_GLO(9,___G_jazz_3a_allocate_2d_gambit_2d_walker,___PRC(53))
   ___SET_R2(___GLO_jazz_3a_Gambit_2d_Walker)
   ___SET_R1(___SYM_Gambit_2d_Walker)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(2),27,___G_jazz_3a_set_2d_core_2d_class)
___DEF_SLBL(13,___L13_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_GLO(11,___G_jazz_3a_new_2d_gambit_2d_walker,___PRC(56))
   ___SET_R2(___SYM_walker_2d_declarations)
   ___SET_R1(___GLO_jazz_3a_Gambit_2d_Walker)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G_jazz_3a_find_2d_nextmethod)
___DEF_SLBL(14,___L14_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),30)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(7,___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations,___STK(-2))
   ___SET_R3(___GLO_jazz_3a_Gambit_2d_Walker_5e_walker_2d_declarations)
   ___SET_R2(___SYM_walker_2d_declarations)
   ___SET_R1(___GLO_jazz_3a_Gambit_2d_Walker)
   ___SET_R0(___LBL(16))
   ___CHECK_HEAP(15,4096)
___DEF_SLBL(15,___L15_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___JUMPGLOSAFE(___SET_NARGS(3),17,___G_jazz_3a_add_2d_core_2d_method_2d_node)
___DEF_SLBL(16,___L16_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R2(___SYM_walker_2d_bindings)
   ___SET_R1(___GLO_jazz_3a_Gambit_2d_Walker)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G_jazz_3a_find_2d_nextmethod)
___DEF_SLBL(17,___L17_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),23)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(6,___G_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings,___STK(-2))
   ___SET_R3(___GLO_jazz_3a_Gambit_2d_Walker_5e_walker_2d_bindings)
   ___SET_R2(___SYM_walker_2d_bindings)
   ___SET_R1(___GLO_jazz_3a_Gambit_2d_Walker)
   ___SET_R0(___LBL(19))
   ___CHECK_HEAP(18,4096)
___DEF_SLBL(18,___L18_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___JUMPGLOSAFE(___SET_NARGS(3),17,___G_jazz_3a_add_2d_core_2d_method_2d_node)
___DEF_SLBL(19,___L19_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R1(___SYM_gambit)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(1),10,___G_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_SLBL(20,___L20_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_gambit)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(2),26,___G_jazz_3a_register_2d_dialect)
___DEF_SLBL(21,___L21_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___POLL(22)
___DEF_SLBL(22,___L22_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(23,___L23_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(23,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R1(___SYM_gambit)
   ___ADJFP(8)
   ___POLL(24)
___DEF_SLBL(24,___L24_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_get_2d_dialect)
___DEF_SLBL(25,___L25_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_get_2d_dialect_2d_bindings)
___DEF_SLBL(26,___L26_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(27))
   ___JUMPGENSAFE(___SET_NARGS(1),___CLO(___STK(-5),1))
___DEF_SLBL(27,___L27_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(28,4096)
___DEF_SLBL(28,___L28_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___POLL(29)
___DEF_SLBL(29,___L29_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(30,___L30_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(30,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R1(___SYM_gambit)
   ___ADJFP(8)
   ___POLL(31)
___DEF_SLBL(31,___L31_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R0(___LBL(32))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_get_2d_dialect)
___DEF_SLBL(32,___L32_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R0(___LBL(33))
   ___JUMPGLOSAFE(___SET_NARGS(1),22,___G_jazz_3a_get_2d_dialect_2d_declarations)
___DEF_SLBL(33,___L33_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(34))
   ___JUMPGENSAFE(___SET_NARGS(1),___CLO(___STK(-5),1))
___DEF_SLBL(34,___L34_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(35,4096)
___DEF_SLBL(35,___L35_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___POLL(36)
___DEF_SLBL(36,___L36_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(37,___L37_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(37,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(38)
___DEF_SLBL(38,___L38_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___SET_R0(___LBL(39))
   ___JUMPGLOSAFE(___SET_NARGS(0),11,___G_jazz_3a_new_2d_gambit_2d_walker)
___DEF_SLBL(39,___L39_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___POLL(40)
___DEF_SLBL(40,___L40_bin_3a_gambit_2e_dialect_2e_runtime_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_allocate_2d_gambit_2d_dialect
#undef ___PH_LBL0
#define ___PH_LBL0 43
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_allocate_2d_gambit_2d_dialect)
___DEF_P_HLBL(___L1_jazz_3a_allocate_2d_gambit_2d_dialect)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_allocate_2d_gambit_2d_dialect)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_3a_allocate_2d_gambit_2d_dialect)
   ___BEGIN_ALLOC_VECTOR(4UL)
   ___ADD_VECTOR_ELEM(0,___GLO_jazz_3a_Gambit_2d_Dialect)
   ___ADD_VECTOR_ELEM(1,___R1)
   ___ADD_VECTOR_ELEM(2,___R2)
   ___ADD_VECTOR_ELEM(3,___R3)
   ___END_ALLOC_VECTOR(4)
   ___SET_R4(___GET_VECTOR(4))
   ___SUBTYPESET(___R4,___FIX(7L)) ___SET_STK(1,___R4)
   ___SET_R1(___STK(1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_3a_allocate_2d_gambit_2d_dialect)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_new_2d_gambit_2d_dialect
#undef ___PH_LBL0
#define ___PH_LBL0 46
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_P_HLBL(___L1_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_P_HLBL(___L2_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_P_HLBL(___L3_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_P_HLBL(___L4_jazz_3a_new_2d_gambit_2d_dialect)
___DEF_P_HLBL(___L5_jazz_3a_new_2d_gambit_2d_dialect)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_new_2d_gambit_2d_dialect)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_new_2d_gambit_2d_dialect)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_new_2d_gambit_2d_dialect)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_make_2d_table)
___DEF_SLBL(2,___L2_jazz_3a_new_2d_gambit_2d_dialect)
   ___SET_STK(-5,___R1)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_make_2d_table)
___DEF_SLBL(3,___L3_jazz_3a_new_2d_gambit_2d_dialect)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-6))
   ___SET_R2(___STK(-5))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(3),8,___G_jazz_3a_allocate_2d_gambit_2d_dialect)
___DEF_SLBL(4,___L4_jazz_3a_new_2d_gambit_2d_dialect)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_3a_new_2d_gambit_2d_dialect)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_allocate_2d_gambit_2d_walker
#undef ___PH_LBL0
#define ___PH_LBL0 53
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_allocate_2d_gambit_2d_walker)
___DEF_P_HLBL(___L1_jazz_3a_allocate_2d_gambit_2d_walker)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_allocate_2d_gambit_2d_walker)
   ___IF_NARGS_EQ(10,___NOTHING)
   ___WRONG_NARGS(0,10,0,0)
___DEF_GLBL(___L_jazz_3a_allocate_2d_gambit_2d_walker)
   ___BEGIN_ALLOC_VECTOR(11UL)
   ___ADD_VECTOR_ELEM(0,___GLO_jazz_3a_Gambit_2d_Walker)
   ___ADD_VECTOR_ELEM(1,___STK(-6))
   ___ADD_VECTOR_ELEM(2,___STK(-5))
   ___ADD_VECTOR_ELEM(3,___STK(-4))
   ___ADD_VECTOR_ELEM(4,___STK(-3))
   ___ADD_VECTOR_ELEM(5,___STK(-2))
   ___ADD_VECTOR_ELEM(6,___STK(-1))
   ___ADD_VECTOR_ELEM(7,___STK(0))
   ___ADD_VECTOR_ELEM(8,___R1)
   ___ADD_VECTOR_ELEM(9,___R2)
   ___ADD_VECTOR_ELEM(10,___R3)
   ___END_ALLOC_VECTOR(11)
   ___SET_R4(___GET_VECTOR(11))
   ___SUBTYPESET(___R4,___FIX(7L)) ___SET_STK(1,___R4)
   ___SET_R1(___STK(1))
   ___ADJFP(-7)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_3a_allocate_2d_gambit_2d_walker)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_new_2d_gambit_2d_walker
#undef ___PH_LBL0
#define ___PH_LBL0 56
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L1_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L2_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L3_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L4_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L5_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L6_jazz_3a_new_2d_gambit_2d_walker)
___DEF_P_HLBL(___L7_jazz_3a_new_2d_gambit_2d_walker)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_new_2d_gambit_2d_walker)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_new_2d_gambit_2d_walker)
   ___SET_STK(1,___R0)
   ___SET_STK(5,___FAL)
   ___SET_STK(6,___FAL)
   ___SET_STK(7,___NUL)
   ___SET_STK(8,___NUL)
   ___SET_STK(9,___NUL)
   ___ADJFP(12)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_new_2d_gambit_2d_walker)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),25,___G_jazz_3a_new_2d_queue)
___DEF_SLBL(2,___L2_jazz_3a_new_2d_gambit_2d_walker)
   ___SET_STK(-2,___R1)
   ___SET_R0(___LBL(3))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(0),25,___G_jazz_3a_new_2d_queue)
___DEF_SLBL(3,___L3_jazz_3a_new_2d_gambit_2d_walker)
   ___SET_STK(-5,___R1)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_make_2d_table)
___DEF_SLBL(4,___L4_jazz_3a_new_2d_gambit_2d_walker)
   ___SET_STK(-14,___R1)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_make_2d_table)
___DEF_SLBL(5,___L5_jazz_3a_new_2d_gambit_2d_walker)
   ___SET_R2(___R1)
   ___SET_R3(___NUL)
   ___SET_R1(___STK(-14))
   ___SET_R0(___LBL(6))
   ___ADJFP(-5)
   ___JUMPGLOSAFE(___SET_NARGS(10),9,___G_jazz_3a_allocate_2d_gambit_2d_walker)
___DEF_SLBL(6,___L6_jazz_3a_new_2d_gambit_2d_walker)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_3a_new_2d_gambit_2d_walker)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,"bin:gambit.dialect.runtime#",___REF_SUB(
0),41,0)
,___DEF_LBL_PROC(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___OFD(___RETI,10,0,0x3f3f1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,1,1)
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0xbL))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,1,1)
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0xbL))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_gambit_2e_dialect_2e_runtime_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_3a_allocate_2d_gambit_2d_dialect,0,___REF_SUB(85),2,0)
,___DEF_LBL_PROC(___H_jazz_3a_allocate_2d_gambit_2d_dialect,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_allocate_2d_gambit_2d_dialect,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_new_2d_gambit_2d_dialect,0,___REF_SUB(92),6,0)
,___DEF_LBL_PROC(___H_jazz_3a_new_2d_gambit_2d_dialect,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_dialect,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_dialect,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_dialect,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_dialect,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_dialect,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_3a_allocate_2d_gambit_2d_walker,0,___REF_SUB(107),2,0)
,___DEF_LBL_PROC(___H_jazz_3a_allocate_2d_gambit_2d_walker,10,-1)
,___DEF_LBL_RET(___H_jazz_3a_allocate_2d_gambit_2d_walker,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_new_2d_gambit_2d_walker,0,___REF_SUB(114),8,0)
,___DEF_LBL_PROC(___H_jazz_3a_new_2d_gambit_2d_walker,0,-1)
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___OFD(___RETI,12,0,0x3f1f1L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___IFD(___RETN,9,0,0x1f1L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___IFD(___RETN,13,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___IFD(___RETN,13,0,0x7f1L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___IFD(___RETN,13,0,0x7f3L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_gambit_2d_walker,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,10,0)
               ___GCMAP1(0x3f3f1L)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f1f1L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_gambit_2e_dialect_2e_runtime_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_gambit_2e_dialect_2e_runtime_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Gambit_2d_Dialect,"Gambit-Dialect")
___DEF_MOD_SYM(1,___S_Gambit_2d_Walker,"Gambit-Walker")
___DEF_MOD_SYM(2,___S_autoloads,"autoloads")
___DEF_MOD_SYM(3,___S_bin_3a_gambit_2e_dialect_2e_runtime,"bin:gambit.dialect.runtime")
___DEF_MOD_SYM(4,___S_bindings,"bindings")
___DEF_MOD_SYM(5,___S_declarations,"declarations")
___DEF_MOD_SYM(6,___S_dialect,"dialect")
___DEF_MOD_SYM(7,___S_dialect_2d_walker,"dialect-walker")
___DEF_MOD_SYM(8,___S_errors,"errors")
___DEF_MOD_SYM(9,___S_exports,"exports")
___DEF_MOD_SYM(10,___S_function,"function")
___DEF_MOD_SYM(11,___S_gambit,"gambit")
___DEF_MOD_SYM(12,___S_gambit_2e_dialect_2e_runtime,"gambit.dialect.runtime")
___DEF_MOD_SYM(13,___S_jazz_3a_Gambit_2d_Dialect,"jazz:Gambit-Dialect")
___DEF_MOD_SYM(14,___S_jazz_3a_Gambit_2d_Walker,"jazz:Gambit-Walker")
___DEF_MOD_SYM(15,___S_jazz_3a_Object_2d_Class,"jazz:Object-Class")
___DEF_MOD_SYM(16,___S_jazz_3a_Scheme_2d_Dialect,"jazz:Scheme-Dialect")
___DEF_MOD_SYM(17,___S_jazz_3a_Scheme_2d_Walker,"jazz:Scheme-Walker")
___DEF_MOD_SYM(18,___S_jazz_3a_allocate_2d_gambit_2d_dialect,"jazz:allocate-gambit-dialect")
___DEF_MOD_SYM(19,___S_jazz_3a_allocate_2d_gambit_2d_walker,"jazz:allocate-gambit-walker")
___DEF_MOD_SYM(20,___S_literals,"literals")
___DEF_MOD_SYM(21,___S_name,"name")
___DEF_MOD_SYM(22,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(23,___S_references,"references")
___DEF_MOD_SYM(24,___S_statics,"statics")
___DEF_MOD_SYM(25,___S_variables,"variables")
___DEF_MOD_SYM(26,___S_walker,"walker")
___DEF_MOD_SYM(27,___S_walker_2d_bindings,"walker-bindings")
___DEF_MOD_SYM(28,___S_walker_2d_declarations,"walker-declarations")
___DEF_MOD_SYM(29,___S_warnings,"warnings")
___DEF_MOD_KEY(0,___K_test,"test")
___END_MOD_SYM_KEY

#endif
