#ifdef ___LINKER_INFO
; File: "runtime.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:backend.runtime"
(("bin:backend.runtime"))
(
"Backend"
"backend"
"backend-name"
"backend.runtime"
"backend/name"
"bin:backend.runtime"
"binding"
"bindings"
"emit"
"emitter"
"function"
"hook"
"jazz:Backend"
"jazz:Object"
"jazz:Object-Class"
"jazz:allocate-backend"
"jazz:get-backend-bindings"
"jazz:get-backend-hook"
"jazz:get-backend-name"
"jazz:set-backend-hook"
"name"
"rest"
)
(
"test"
)
(
"bin:backend.runtime#"
"jazz:Backend"
"jazz:Backends"
"jazz:add-backend-binding"
"jazz:allocate-backend"
"jazz:get-backend"
"jazz:get-backend-binding"
"jazz:get-backend-bindings"
"jazz:get-backend-hook"
"jazz:get-backend-name"
"jazz:require-backend"
"jazz:require-backend-binding"
)
(
"jazz:Backend!core-level"
"jazz:emit"
"jazz:new-backend"
"jazz:register-backend"
"jazz:register-emit"
"jazz:set-backend-hook"
)
(
"##table-ref"
"##table-set!"
"apply"
"eq?"
"jazz:Object"
"jazz:Object-Class"
"jazz:add-slot"
"jazz:class-info"
"jazz:class-of"
"jazz:error"
"jazz:make-class-info"
"jazz:new-core-class"
"jazz:set-core-class"
"make-table"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:backend.runtime"
#define ___LINKER_ID ___LNK_bin_3a_backend_2e_runtime
#define ___MH_PROC ___H_bin_3a_backend_2e_runtime
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 22
#define ___KEYCOUNT 1
#define ___GLOCOUNT 32
#define ___SUPCOUNT 18
#define ___CNSCOUNT 21
#define ___SUBCOUNT 186
#define ___LBLCOUNT 84
#define ___OFDCOUNT 1
#define ___MODDESCR ___REF_SUB(185)
#include "gambit.h"

___NEED_SYM(___S_Backend)
___NEED_SYM(___S_backend)
___NEED_SYM(___S_backend_2d_name)
___NEED_SYM(___S_backend_2e_runtime)
___NEED_SYM(___S_backend_2f_name)
___NEED_SYM(___S_bin_3a_backend_2e_runtime)
___NEED_SYM(___S_binding)
___NEED_SYM(___S_bindings)
___NEED_SYM(___S_emit)
___NEED_SYM(___S_emitter)
___NEED_SYM(___S_function)
___NEED_SYM(___S_hook)
___NEED_SYM(___S_jazz_3a_Backend)
___NEED_SYM(___S_jazz_3a_Object)
___NEED_SYM(___S_jazz_3a_Object_2d_Class)
___NEED_SYM(___S_jazz_3a_allocate_2d_backend)
___NEED_SYM(___S_jazz_3a_get_2d_backend_2d_bindings)
___NEED_SYM(___S_jazz_3a_get_2d_backend_2d_hook)
___NEED_SYM(___S_jazz_3a_get_2d_backend_2d_name)
___NEED_SYM(___S_jazz_3a_set_2d_backend_2d_hook)
___NEED_SYM(___S_name)
___NEED_SYM(___S_rest)

___NEED_KEY(___K_test)

___NEED_GLO(___G__23__23_table_2d_ref)
___NEED_GLO(___G__23__23_table_2d_set_21_)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_bin_3a_backend_2e_runtime_23_)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_jazz_3a_Backend)
___NEED_GLO(___G_jazz_3a_Backend_21_core_2d_level)
___NEED_GLO(___G_jazz_3a_Backends)
___NEED_GLO(___G_jazz_3a_Object)
___NEED_GLO(___G_jazz_3a_Object_2d_Class)
___NEED_GLO(___G_jazz_3a_add_2d_backend_2d_binding)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_allocate_2d_backend)
___NEED_GLO(___G_jazz_3a_class_2d_info)
___NEED_GLO(___G_jazz_3a_class_2d_of)
___NEED_GLO(___G_jazz_3a_emit)
___NEED_GLO(___G_jazz_3a_error)
___NEED_GLO(___G_jazz_3a_get_2d_backend)
___NEED_GLO(___G_jazz_3a_get_2d_backend_2d_binding)
___NEED_GLO(___G_jazz_3a_get_2d_backend_2d_bindings)
___NEED_GLO(___G_jazz_3a_get_2d_backend_2d_hook)
___NEED_GLO(___G_jazz_3a_get_2d_backend_2d_name)
___NEED_GLO(___G_jazz_3a_make_2d_class_2d_info)
___NEED_GLO(___G_jazz_3a_new_2d_backend)
___NEED_GLO(___G_jazz_3a_new_2d_core_2d_class)
___NEED_GLO(___G_jazz_3a_register_2d_backend)
___NEED_GLO(___G_jazz_3a_register_2d_emit)
___NEED_GLO(___G_jazz_3a_require_2d_backend)
___NEED_GLO(___G_jazz_3a_require_2d_backend_2d_binding)
___NEED_GLO(___G_jazz_3a_set_2d_backend_2d_hook)
___NEED_GLO(___G_jazz_3a_set_2d_core_2d_class)
___NEED_GLO(___G_make_2d_table)

___BEGIN_SYM
___DEF_SYM(0,___S_Backend,"Backend")
___DEF_SYM(1,___S_backend,"backend")
___DEF_SYM(2,___S_backend_2d_name,"backend-name")
___DEF_SYM(3,___S_backend_2e_runtime,"backend.runtime")
___DEF_SYM(4,___S_backend_2f_name,"backend/name")
___DEF_SYM(5,___S_bin_3a_backend_2e_runtime,"bin:backend.runtime")
___DEF_SYM(6,___S_binding,"binding")
___DEF_SYM(7,___S_bindings,"bindings")
___DEF_SYM(8,___S_emit,"emit")
___DEF_SYM(9,___S_emitter,"emitter")
___DEF_SYM(10,___S_function,"function")
___DEF_SYM(11,___S_hook,"hook")
___DEF_SYM(12,___S_jazz_3a_Backend,"jazz:Backend")
___DEF_SYM(13,___S_jazz_3a_Object,"jazz:Object")
___DEF_SYM(14,___S_jazz_3a_Object_2d_Class,"jazz:Object-Class")
___DEF_SYM(15,___S_jazz_3a_allocate_2d_backend,"jazz:allocate-backend")
___DEF_SYM(16,___S_jazz_3a_get_2d_backend_2d_bindings,"jazz:get-backend-bindings")
___DEF_SYM(17,___S_jazz_3a_get_2d_backend_2d_hook,"jazz:get-backend-hook")
___DEF_SYM(18,___S_jazz_3a_get_2d_backend_2d_name,"jazz:get-backend-name")
___DEF_SYM(19,___S_jazz_3a_set_2d_backend_2d_hook,"jazz:set-backend-hook")
___DEF_SYM(20,___S_name,"name")
___DEF_SYM(21,___S_rest,"rest")
___END_SYM

#define ___SYM_Backend ___SYM(0,___S_Backend)
#define ___SYM_backend ___SYM(1,___S_backend)
#define ___SYM_backend_2d_name ___SYM(2,___S_backend_2d_name)
#define ___SYM_backend_2e_runtime ___SYM(3,___S_backend_2e_runtime)
#define ___SYM_backend_2f_name ___SYM(4,___S_backend_2f_name)
#define ___SYM_bin_3a_backend_2e_runtime ___SYM(5,___S_bin_3a_backend_2e_runtime)
#define ___SYM_binding ___SYM(6,___S_binding)
#define ___SYM_bindings ___SYM(7,___S_bindings)
#define ___SYM_emit ___SYM(8,___S_emit)
#define ___SYM_emitter ___SYM(9,___S_emitter)
#define ___SYM_function ___SYM(10,___S_function)
#define ___SYM_hook ___SYM(11,___S_hook)
#define ___SYM_jazz_3a_Backend ___SYM(12,___S_jazz_3a_Backend)
#define ___SYM_jazz_3a_Object ___SYM(13,___S_jazz_3a_Object)
#define ___SYM_jazz_3a_Object_2d_Class ___SYM(14,___S_jazz_3a_Object_2d_Class)
#define ___SYM_jazz_3a_allocate_2d_backend ___SYM(15,___S_jazz_3a_allocate_2d_backend)
#define ___SYM_jazz_3a_get_2d_backend_2d_bindings ___SYM(16,___S_jazz_3a_get_2d_backend_2d_bindings)
#define ___SYM_jazz_3a_get_2d_backend_2d_hook ___SYM(17,___S_jazz_3a_get_2d_backend_2d_hook)
#define ___SYM_jazz_3a_get_2d_backend_2d_name ___SYM(18,___S_jazz_3a_get_2d_backend_2d_name)
#define ___SYM_jazz_3a_set_2d_backend_2d_hook ___SYM(19,___S_jazz_3a_set_2d_backend_2d_hook)
#define ___SYM_name ___SYM(20,___S_name)
#define ___SYM_rest ___SYM(21,___S_rest)

___BEGIN_KEY
___DEF_KEY(0,___K_test,"test")
___END_KEY

#define ___KEY_test ___KEY(0,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"bin:backend.runtime#")
___DEF_GLO(1,"jazz:Backend")
___DEF_GLO(2,"jazz:Backend!core-level")
___DEF_GLO(3,"jazz:Backends")
___DEF_GLO(4,"jazz:add-backend-binding")
___DEF_GLO(5,"jazz:allocate-backend")
___DEF_GLO(6,"jazz:emit")
___DEF_GLO(7,"jazz:get-backend")
___DEF_GLO(8,"jazz:get-backend-binding")
___DEF_GLO(9,"jazz:get-backend-bindings")
___DEF_GLO(10,"jazz:get-backend-hook")
___DEF_GLO(11,"jazz:get-backend-name")
___DEF_GLO(12,"jazz:new-backend")
___DEF_GLO(13,"jazz:register-backend")
___DEF_GLO(14,"jazz:register-emit")
___DEF_GLO(15,"jazz:require-backend")
___DEF_GLO(16,"jazz:require-backend-binding")
___DEF_GLO(17,"jazz:set-backend-hook")
___DEF_GLO(18,"##table-ref")
___DEF_GLO(19,"##table-set!")
___DEF_GLO(20,"apply")
___DEF_GLO(21,"eq?")
___DEF_GLO(22,"jazz:Object")
___DEF_GLO(23,"jazz:Object-Class")
___DEF_GLO(24,"jazz:add-slot")
___DEF_GLO(25,"jazz:class-info")
___DEF_GLO(26,"jazz:class-of")
___DEF_GLO(27,"jazz:error")
___DEF_GLO(28,"jazz:make-class-info")
___DEF_GLO(29,"jazz:new-core-class")
___DEF_GLO(30,"jazz:set-core-class")
___DEF_GLO(31,"make-table")
___END_GLO

#define ___GLO_bin_3a_backend_2e_runtime_23_ ___GLO(0,___G_bin_3a_backend_2e_runtime_23_)
#define ___PRM_bin_3a_backend_2e_runtime_23_ ___PRM(0,___G_bin_3a_backend_2e_runtime_23_)
#define ___GLO_jazz_3a_Backend ___GLO(1,___G_jazz_3a_Backend)
#define ___PRM_jazz_3a_Backend ___PRM(1,___G_jazz_3a_Backend)
#define ___GLO_jazz_3a_Backend_21_core_2d_level ___GLO(2,___G_jazz_3a_Backend_21_core_2d_level)
#define ___PRM_jazz_3a_Backend_21_core_2d_level ___PRM(2,___G_jazz_3a_Backend_21_core_2d_level)
#define ___GLO_jazz_3a_Backends ___GLO(3,___G_jazz_3a_Backends)
#define ___PRM_jazz_3a_Backends ___PRM(3,___G_jazz_3a_Backends)
#define ___GLO_jazz_3a_add_2d_backend_2d_binding ___GLO(4,___G_jazz_3a_add_2d_backend_2d_binding)
#define ___PRM_jazz_3a_add_2d_backend_2d_binding ___PRM(4,___G_jazz_3a_add_2d_backend_2d_binding)
#define ___GLO_jazz_3a_allocate_2d_backend ___GLO(5,___G_jazz_3a_allocate_2d_backend)
#define ___PRM_jazz_3a_allocate_2d_backend ___PRM(5,___G_jazz_3a_allocate_2d_backend)
#define ___GLO_jazz_3a_emit ___GLO(6,___G_jazz_3a_emit)
#define ___PRM_jazz_3a_emit ___PRM(6,___G_jazz_3a_emit)
#define ___GLO_jazz_3a_get_2d_backend ___GLO(7,___G_jazz_3a_get_2d_backend)
#define ___PRM_jazz_3a_get_2d_backend ___PRM(7,___G_jazz_3a_get_2d_backend)
#define ___GLO_jazz_3a_get_2d_backend_2d_binding ___GLO(8,___G_jazz_3a_get_2d_backend_2d_binding)
#define ___PRM_jazz_3a_get_2d_backend_2d_binding ___PRM(8,___G_jazz_3a_get_2d_backend_2d_binding)
#define ___GLO_jazz_3a_get_2d_backend_2d_bindings ___GLO(9,___G_jazz_3a_get_2d_backend_2d_bindings)
#define ___PRM_jazz_3a_get_2d_backend_2d_bindings ___PRM(9,___G_jazz_3a_get_2d_backend_2d_bindings)
#define ___GLO_jazz_3a_get_2d_backend_2d_hook ___GLO(10,___G_jazz_3a_get_2d_backend_2d_hook)
#define ___PRM_jazz_3a_get_2d_backend_2d_hook ___PRM(10,___G_jazz_3a_get_2d_backend_2d_hook)
#define ___GLO_jazz_3a_get_2d_backend_2d_name ___GLO(11,___G_jazz_3a_get_2d_backend_2d_name)
#define ___PRM_jazz_3a_get_2d_backend_2d_name ___PRM(11,___G_jazz_3a_get_2d_backend_2d_name)
#define ___GLO_jazz_3a_new_2d_backend ___GLO(12,___G_jazz_3a_new_2d_backend)
#define ___PRM_jazz_3a_new_2d_backend ___PRM(12,___G_jazz_3a_new_2d_backend)
#define ___GLO_jazz_3a_register_2d_backend ___GLO(13,___G_jazz_3a_register_2d_backend)
#define ___PRM_jazz_3a_register_2d_backend ___PRM(13,___G_jazz_3a_register_2d_backend)
#define ___GLO_jazz_3a_register_2d_emit ___GLO(14,___G_jazz_3a_register_2d_emit)
#define ___PRM_jazz_3a_register_2d_emit ___PRM(14,___G_jazz_3a_register_2d_emit)
#define ___GLO_jazz_3a_require_2d_backend ___GLO(15,___G_jazz_3a_require_2d_backend)
#define ___PRM_jazz_3a_require_2d_backend ___PRM(15,___G_jazz_3a_require_2d_backend)
#define ___GLO_jazz_3a_require_2d_backend_2d_binding ___GLO(16,___G_jazz_3a_require_2d_backend_2d_binding)
#define ___PRM_jazz_3a_require_2d_backend_2d_binding ___PRM(16,___G_jazz_3a_require_2d_backend_2d_binding)
#define ___GLO_jazz_3a_set_2d_backend_2d_hook ___GLO(17,___G_jazz_3a_set_2d_backend_2d_hook)
#define ___PRM_jazz_3a_set_2d_backend_2d_hook ___PRM(17,___G_jazz_3a_set_2d_backend_2d_hook)
#define ___GLO__23__23_table_2d_ref ___GLO(18,___G__23__23_table_2d_ref)
#define ___PRM__23__23_table_2d_ref ___PRM(18,___G__23__23_table_2d_ref)
#define ___GLO__23__23_table_2d_set_21_ ___GLO(19,___G__23__23_table_2d_set_21_)
#define ___PRM__23__23_table_2d_set_21_ ___PRM(19,___G__23__23_table_2d_set_21_)
#define ___GLO_apply ___GLO(20,___G_apply)
#define ___PRM_apply ___PRM(20,___G_apply)
#define ___GLO_eq_3f_ ___GLO(21,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(21,___G_eq_3f_)
#define ___GLO_jazz_3a_Object ___GLO(22,___G_jazz_3a_Object)
#define ___PRM_jazz_3a_Object ___PRM(22,___G_jazz_3a_Object)
#define ___GLO_jazz_3a_Object_2d_Class ___GLO(23,___G_jazz_3a_Object_2d_Class)
#define ___PRM_jazz_3a_Object_2d_Class ___PRM(23,___G_jazz_3a_Object_2d_Class)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(24,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(24,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_class_2d_info ___GLO(25,___G_jazz_3a_class_2d_info)
#define ___PRM_jazz_3a_class_2d_info ___PRM(25,___G_jazz_3a_class_2d_info)
#define ___GLO_jazz_3a_class_2d_of ___GLO(26,___G_jazz_3a_class_2d_of)
#define ___PRM_jazz_3a_class_2d_of ___PRM(26,___G_jazz_3a_class_2d_of)
#define ___GLO_jazz_3a_error ___GLO(27,___G_jazz_3a_error)
#define ___PRM_jazz_3a_error ___PRM(27,___G_jazz_3a_error)
#define ___GLO_jazz_3a_make_2d_class_2d_info ___GLO(28,___G_jazz_3a_make_2d_class_2d_info)
#define ___PRM_jazz_3a_make_2d_class_2d_info ___PRM(28,___G_jazz_3a_make_2d_class_2d_info)
#define ___GLO_jazz_3a_new_2d_core_2d_class ___GLO(29,___G_jazz_3a_new_2d_core_2d_class)
#define ___PRM_jazz_3a_new_2d_core_2d_class ___PRM(29,___G_jazz_3a_new_2d_core_2d_class)
#define ___GLO_jazz_3a_set_2d_core_2d_class ___GLO(30,___G_jazz_3a_set_2d_core_2d_class)
#define ___PRM_jazz_3a_set_2d_core_2d_class ___PRM(30,___G_jazz_3a_set_2d_core_2d_class)
#define ___GLO_make_2d_table ___GLO(31,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(31,___G_make_2d_table)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(5))
,___DEF_CNS(___REF_SYM(20,___S_name),___REF_CNS(2))
,___DEF_CNS(___REF_VOID,___REF_CNS(3))
,___DEF_CNS(___REF_SYM(18,___S_jazz_3a_get_2d_backend_2d_name),___REF_CNS(4))
,___DEF_CNS(___REF_FAL,___REF_NUL)
,___DEF_CNS(___REF_CNS(6),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(7,___S_bindings),___REF_CNS(7))
,___DEF_CNS(___REF_VOID,___REF_CNS(8))
,___DEF_CNS(___REF_SYM(16,___S_jazz_3a_get_2d_backend_2d_bindings),___REF_CNS(9))
,___DEF_CNS(___REF_FAL,___REF_NUL)
,___DEF_CNS(___REF_CNS(11),___REF_NUL)
,___DEF_CNS(___REF_SYM(11,___S_hook),___REF_CNS(12))
,___DEF_CNS(___REF_VOID,___REF_CNS(13))
,___DEF_CNS(___REF_SYM(17,___S_jazz_3a_get_2d_backend_2d_hook),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(19,___S_jazz_3a_set_2d_backend_2d_hook),___REF_NUL)
,___DEF_CNS(___REF_SYM(20,___S_name),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(7,___S_bindings),___REF_CNS(17))
,___DEF_CNS(___REF_SYM(11,___S_hook),___REF_NUL)
,___DEF_CNS(___REF_SYM(20,___S_name),___REF_CNS(19))
,___DEF_CNS(___REF_SYM(7,___S_bindings),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(11,___S_hook),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X1,12UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131152))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(99))
               ___VEC0
___DEF_SUB_VEC(___X26,0UL)
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SUB(28))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X28,1UL)
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(30))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X31,0UL)
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X33,1UL)
               ___VEC1(___REF_SUB(34))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X36,0UL)
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X38,1UL)
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X41,0UL)
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X43,1UL)
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X46,0UL)
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X53,0UL)
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(66))
               ___VEC0
___DEF_SUB_VEC(___X55,5UL)
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(51))
               ___VEC0
___DEF_SUB_VEC(___X58,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(1966132))
               ___VEC0
___DEF_SUB_VEC(___X60,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(1966132))
               ___VEC0
___DEF_SUB_VEC(___X62,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X64,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X66,1UL)
               ___VEC1(___REF_SYM(20,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X68,5UL)
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(70))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(55))
               ___VEC0
___DEF_SUB_VEC(___X71,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(983096))
               ___VEC0
___DEF_SUB_VEC(___X73,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(983096))
               ___VEC0
___DEF_SUB_VEC(___X75,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X77,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(20,___S_name))
               ___VEC1(___REF_SYM(1,___S_backend))
               ___VEC0
___DEF_SUB_STR(___X80,32UL)
               ___STR8(85,110,107,110,111,119,110,32)
               ___STR8(123,97,125,32,98,97,99,107)
               ___STR8(101,110,100,32,98,105,110,100)
               ___STR8(105,110,103,58,32,123,115,125)
               ___STR0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_SUB(97))
               ___VEC0
___DEF_SUB_VEC(___X82,7UL)
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(95))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X85,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393275))
               ___VEC0
___DEF_SUB_VEC(___X87,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393275))
               ___VEC0
___DEF_SUB_VEC(___X89,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393275))
               ___VEC0
___DEF_SUB_VEC(___X91,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(3473468))
               ___VEC0
___DEF_SUB_VEC(___X93,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393276))
               ___VEC0
___DEF_SUB_VEC(___X95,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393276))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(20,___S_name))
               ___VEC1(___REF_SYM(1,___S_backend))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(110))
               ___VEC0
___DEF_SUB_VEC(___X99,5UL)
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_SUB(108))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X102,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(1048640))
               ___VEC0
___DEF_SUB_VEC(___X104,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(1048640))
               ___VEC0
___DEF_SUB_VEC(___X106,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131136))
               ___VEC0
___DEF_SUB_VEC(___X108,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131136))
               ___VEC0
___DEF_SUB_VEC(___X110,3UL)
               ___VEC1(___REF_SYM(6,___S_binding))
               ___VEC1(___REF_SYM(20,___S_name))
               ___VEC1(___REF_SYM(1,___S_backend))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_SUB(127))
               ___VEC0
___DEF_SUB_VEC(___X112,7UL)
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(117))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(114))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(67))
               ___VEC0
___DEF_SUB_VEC(___X115,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(917572))
               ___VEC0
___DEF_SUB_VEC(___X117,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(917572))
               ___VEC0
___DEF_SUB_VEC(___X119,6UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393286))
               ___VEC0
___DEF_SUB_VEC(___X121,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(589895))
               ___VEC0
___DEF_SUB_VEC(___X123,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131143))
               ___VEC0
___DEF_SUB_VEC(___X125,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131143))
               ___VEC0
___DEF_SUB_VEC(___X127,4UL)
               ___VEC1(___REF_SYM(21,___S_rest))
               ___VEC1(___REF_SYM(6,___S_binding))
               ___VEC1(___REF_SYM(1,___S_backend))
               ___VEC1(___REF_SYM(11,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_SUB(138))
               ___VEC0
___DEF_SUB_VEC(___X129,4UL)
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_SUB(136))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(83))
               ___VEC0
___DEF_SUB_VEC(___X132,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X134,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X136,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X138,1UL)
               ___VEC1(___REF_SYM(20,___S_name))
               ___VEC0
___DEF_SUB_STR(___X139,20UL)
               ___STR8(85,110,107,110,111,119,110,32)
               ___STR8(98,97,99,107,101,110,100,58)
               ___STR4(32,123,115,125)
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_SUB(158))
               ___VEC0
___DEF_SUB_VEC(___X141,8UL)
               ___VEC1(___REF_SUB(142))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_SUB(154))
               ___VEC1(___REF_SUB(156))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(143))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(87))
               ___VEC0
___DEF_SUB_VEC(___X144,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393304))
               ___VEC0
___DEF_SUB_VEC(___X146,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393304))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(149))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(393305))
               ___VEC0
___DEF_SUB_VEC(___X150,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(524378))
               ___VEC0
___DEF_SUB_VEC(___X152,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(524378))
               ___VEC0
___DEF_SUB_VEC(___X154,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(524379))
               ___VEC0
___DEF_SUB_VEC(___X156,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(524379))
               ___VEC0
___DEF_SUB_VEC(___X158,1UL)
               ___VEC1(___REF_SYM(4,___S_backend_2f_name))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_SUB(171))
               ___VEC0
___DEF_SUB_VEC(___X160,5UL)
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_SUB(169))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(94))
               ___VEC0
___DEF_SUB_VEC(___X163,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(917599))
               ___VEC0
___DEF_SUB_VEC(___X165,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(917599))
               ___VEC0
___DEF_SUB_VEC(___X167,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X168,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(262240))
               ___VEC0
___DEF_SUB_VEC(___X169,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(262240))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(1,___S_backend))
               ___VEC1(___REF_SYM(20,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_SUB(184))
               ___VEC0
___DEF_SUB_VEC(___X173,5UL)
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(178))
               ___VEC1(___REF_SUB(180))
               ___VEC1(___REF_SUB(182))
               ___VEC0
___DEF_SUB_VEC(___X174,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(175))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(99))
               ___VEC0
___DEF_SUB_VEC(___X176,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(1835108))
               ___VEC0
___DEF_SUB_VEC(___X178,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(1835108))
               ___VEC0
___DEF_SUB_VEC(___X180,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(181))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131172))
               ___VEC0
___DEF_SUB_VEC(___X182,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X183,2UL)
               ___VEC1(___REF_SYM(3,___S_backend_2e_runtime))
               ___VEC1(___REF_FIX(131172))
               ___VEC0
___DEF_SUB_VEC(___X184,3UL)
               ___VEC1(___REF_SYM(9,___S_emitter))
               ___VEC1(___REF_SYM(8,___S_emit))
               ___VEC1(___REF_SYM(2,___S_backend_2d_name))
               ___VEC0
___DEF_SUB_VEC(___X185,5UL)
               ___VEC1(___REF_SYM(5,___S_bin_3a_backend_2e_runtime))
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
,___DEF_SUB(___X134)
,___DEF_SUB(___X135)
,___DEF_SUB(___X136)
,___DEF_SUB(___X137)
,___DEF_SUB(___X138)
,___DEF_SUB(___X139)
,___DEF_SUB(___X140)
,___DEF_SUB(___X141)
,___DEF_SUB(___X142)
,___DEF_SUB(___X143)
,___DEF_SUB(___X144)
,___DEF_SUB(___X145)
,___DEF_SUB(___X146)
,___DEF_SUB(___X147)
,___DEF_SUB(___X148)
,___DEF_SUB(___X149)
,___DEF_SUB(___X150)
,___DEF_SUB(___X151)
,___DEF_SUB(___X152)
,___DEF_SUB(___X153)
,___DEF_SUB(___X154)
,___DEF_SUB(___X155)
,___DEF_SUB(___X156)
,___DEF_SUB(___X157)
,___DEF_SUB(___X158)
,___DEF_SUB(___X159)
,___DEF_SUB(___X160)
,___DEF_SUB(___X161)
,___DEF_SUB(___X162)
,___DEF_SUB(___X163)
,___DEF_SUB(___X164)
,___DEF_SUB(___X165)
,___DEF_SUB(___X166)
,___DEF_SUB(___X167)
,___DEF_SUB(___X168)
,___DEF_SUB(___X169)
,___DEF_SUB(___X170)
,___DEF_SUB(___X171)
,___DEF_SUB(___X172)
,___DEF_SUB(___X173)
,___DEF_SUB(___X174)
,___DEF_SUB(___X175)
,___DEF_SUB(___X176)
,___DEF_SUB(___X177)
,___DEF_SUB(___X178)
,___DEF_SUB(___X179)
,___DEF_SUB(___X180)
,___DEF_SUB(___X181)
,___DEF_SUB(___X182)
,___DEF_SUB(___X183)
,___DEF_SUB(___X184)
,___DEF_SUB(___X185)
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
___DEF_M_HLBL(___L0_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L1_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L2_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L3_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L4_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L5_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L6_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L7_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L8_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L9_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L10_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL(___L11_bin_3a_backend_2e_runtime_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_backend_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_backend_2d_bindings)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_backend_2d_hook)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_set_2d_backend_2d_hook)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_allocate_2d_backend)
___DEF_M_HLBL(___L1_jazz_3a_allocate_2d_backend)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_new_2d_backend)
___DEF_M_HLBL(___L1_jazz_3a_new_2d_backend)
___DEF_M_HLBL(___L2_jazz_3a_new_2d_backend)
___DEF_M_HLBL(___L3_jazz_3a_new_2d_backend)
___DEF_M_HLBL(___L4_jazz_3a_new_2d_backend)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_backend_2d_binding)
___DEF_M_HLBL(___L1_jazz_3a_get_2d_backend_2d_binding)
___DEF_M_HLBL(___L2_jazz_3a_get_2d_backend_2d_binding)
___DEF_M_HLBL(___L3_jazz_3a_get_2d_backend_2d_binding)
___DEF_M_HLBL(___L4_jazz_3a_get_2d_backend_2d_binding)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL(___L1_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL(___L2_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL(___L3_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL(___L4_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL(___L5_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL(___L6_jazz_3a_require_2d_backend_2d_binding)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_add_2d_backend_2d_binding)
___DEF_M_HLBL(___L1_jazz_3a_add_2d_backend_2d_binding)
___DEF_M_HLBL(___L2_jazz_3a_add_2d_backend_2d_binding)
___DEF_M_HLBL(___L3_jazz_3a_add_2d_backend_2d_binding)
___DEF_M_HLBL(___L4_jazz_3a_add_2d_backend_2d_binding)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_emit)
___DEF_M_HLBL(___L1_jazz_3a_emit)
___DEF_M_HLBL(___L2_jazz_3a_emit)
___DEF_M_HLBL(___L3_jazz_3a_emit)
___DEF_M_HLBL(___L4_jazz_3a_emit)
___DEF_M_HLBL(___L5_jazz_3a_emit)
___DEF_M_HLBL(___L6_jazz_3a_emit)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_backend)
___DEF_M_HLBL(___L1_jazz_3a_get_2d_backend)
___DEF_M_HLBL(___L2_jazz_3a_get_2d_backend)
___DEF_M_HLBL(___L3_jazz_3a_get_2d_backend)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L1_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L2_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L3_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L4_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L5_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L6_jazz_3a_require_2d_backend)
___DEF_M_HLBL(___L7_jazz_3a_require_2d_backend)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_register_2d_backend)
___DEF_M_HLBL(___L1_jazz_3a_register_2d_backend)
___DEF_M_HLBL(___L2_jazz_3a_register_2d_backend)
___DEF_M_HLBL(___L3_jazz_3a_register_2d_backend)
___DEF_M_HLBL(___L4_jazz_3a_register_2d_backend)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_register_2d_emit)
___DEF_M_HLBL(___L1_jazz_3a_register_2d_emit)
___DEF_M_HLBL(___L2_jazz_3a_register_2d_emit)
___DEF_M_HLBL(___L3_jazz_3a_register_2d_emit)
___DEF_M_HLBL(___L4_jazz_3a_register_2d_emit)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_backend_2e_runtime_23_
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
___DEF_P_HLBL(___L0_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L1_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L2_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L3_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L4_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L5_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L6_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L7_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L8_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L9_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L10_bin_3a_backend_2e_runtime_23_)
___DEF_P_HLBL(___L11_bin_3a_backend_2e_runtime_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_backend_2e_runtime_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_backend_2e_runtime_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(5,___SYM_jazz_3a_Object_2d_Class)
   ___SET_STK(6,___SYM_jazz_3a_Object)
   ___SET_STK(7,___SYM_jazz_3a_allocate_2d_backend)
   ___SET_STK(8,___FAL)
   ___SET_STK(9,___SYM_function)
   ___SET_STK(10,___CNS(0))
   ___SET_R3(___FIX(4L))
   ___SET_R2(___CNS(15))
   ___SET_R1(___CNS(18))
   ___ADJFP(10)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_backend_2e_runtime_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(9),28,___G_jazz_3a_make_2d_class_2d_info)
___DEF_SLBL(2,___L2_bin_3a_backend_2e_runtime_23_)
   ___SET_R3(___R1)
   ___SET_R2(___SYM_jazz_3a_Backend)
   ___SET_R1(___GLO_jazz_3a_class_2d_info)
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),19,___G__23__23_table_2d_set_21_)
___DEF_SLBL(3,___L3_bin_3a_backend_2e_runtime_23_)
   ___SET_GLO(11,___G_jazz_3a_get_2d_backend_2d_name,___PRC(14))
   ___SET_GLO(9,___G_jazz_3a_get_2d_backend_2d_bindings,___PRC(16))
   ___SET_GLO(10,___G_jazz_3a_get_2d_backend_2d_hook,___PRC(18))
   ___SET_GLO(17,___G_jazz_3a_set_2d_backend_2d_hook,___PRC(20))
   ___SET_STK(1,___GLO_jazz_3a_Object_2d_Class)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(4))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(2),31,___G_make_2d_table)
___DEF_SLBL(4,___L4_bin_3a_backend_2e_runtime_23_)
   ___SET_R2(___R1)
   ___SET_R3(___GLO_jazz_3a_Object)
   ___SET_R1(___SYM_jazz_3a_Backend)
   ___SET_R0(___LBL(5))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),29,___G_jazz_3a_new_2d_core_2d_class)
___DEF_SLBL(5,___L5_bin_3a_backend_2e_runtime_23_)
   ___SET_GLO(1,___G_jazz_3a_Backend,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_3a_Backend,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_3a_Backend_21_core_2d_level,___R1)
   ___SET_GLO(5,___G_jazz_3a_allocate_2d_backend,___PRC(22))
   ___SET_STK(1,___GLO_jazz_3a_Backend)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_name)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),24,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(6,___L6_bin_3a_backend_2e_runtime_23_)
   ___SET_STK(1,___GLO_jazz_3a_Backend)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_bindings)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),24,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(7,___L7_bin_3a_backend_2e_runtime_23_)
   ___SET_STK(1,___GLO_jazz_3a_Backend)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_hook)
   ___SET_R0(___LBL(8))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),24,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(8,___L8_bin_3a_backend_2e_runtime_23_)
   ___SET_R2(___GLO_jazz_3a_Backend)
   ___SET_R1(___SYM_Backend)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(2),30,___G_jazz_3a_set_2d_core_2d_class)
___DEF_SLBL(9,___L9_bin_3a_backend_2e_runtime_23_)
   ___SET_GLO(12,___G_jazz_3a_new_2d_backend,___PRC(25))
   ___SET_GLO(8,___G_jazz_3a_get_2d_backend_2d_binding,___PRC(31))
   ___SET_GLO(16,___G_jazz_3a_require_2d_backend_2d_binding,___PRC(37))
   ___SET_GLO(4,___G_jazz_3a_add_2d_backend_2d_binding,___PRC(45))
   ___SET_GLO(6,___G_jazz_3a_emit,___PRC(51))
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(2),31,___G_make_2d_table)
___DEF_SLBL(10,___L10_bin_3a_backend_2e_runtime_23_)
   ___SET_GLO(3,___G_jazz_3a_Backends,___R1)
   ___SET_GLO(7,___G_jazz_3a_get_2d_backend,___PRC(59))
   ___SET_GLO(15,___G_jazz_3a_require_2d_backend,___PRC(64))
   ___SET_GLO(13,___G_jazz_3a_register_2d_backend,___PRC(73))
   ___SET_GLO(14,___G_jazz_3a_register_2d_emit,___PRC(79))
   ___SET_R1(___VOID)
   ___POLL(11)
___DEF_SLBL(11,___L11_bin_3a_backend_2e_runtime_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_backend_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 14
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_backend_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_backend_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_backend_2d_name)
   ___SET_R2(___VECTORREF(___R1,___FIX(1L)))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_backend_2d_bindings
#undef ___PH_LBL0
#define ___PH_LBL0 16
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_backend_2d_bindings)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_backend_2d_bindings)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_backend_2d_bindings)
   ___SET_R2(___VECTORREF(___R1,___FIX(2L)))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_backend_2d_hook
#undef ___PH_LBL0
#define ___PH_LBL0 18
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_backend_2d_hook)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_backend_2d_hook)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_backend_2d_hook)
   ___SET_R2(___VECTORREF(___R1,___FIX(3L)))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_set_2d_backend_2d_hook
#undef ___PH_LBL0
#define ___PH_LBL0 20
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_set_2d_backend_2d_hook)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_set_2d_backend_2d_hook)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_set_2d_backend_2d_hook)
   ___VECTORSET(___R1,___FIX(3L),___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_allocate_2d_backend
#undef ___PH_LBL0
#define ___PH_LBL0 22
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_allocate_2d_backend)
___DEF_P_HLBL(___L1_jazz_3a_allocate_2d_backend)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_allocate_2d_backend)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_3a_allocate_2d_backend)
   ___BEGIN_ALLOC_VECTOR(4UL)
   ___ADD_VECTOR_ELEM(0,___GLO_jazz_3a_Backend)
   ___ADD_VECTOR_ELEM(1,___R1)
   ___ADD_VECTOR_ELEM(2,___R2)
   ___ADD_VECTOR_ELEM(3,___R3)
   ___END_ALLOC_VECTOR(4)
   ___SET_R4(___GET_VECTOR(4))
   ___SUBTYPESET(___R4,___FIX(7L)) ___SET_STK(1,___R4)
   ___SET_R1(___STK(1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_3a_allocate_2d_backend)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_new_2d_backend
#undef ___PH_LBL0
#define ___PH_LBL0 25
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_new_2d_backend)
___DEF_P_HLBL(___L1_jazz_3a_new_2d_backend)
___DEF_P_HLBL(___L2_jazz_3a_new_2d_backend)
___DEF_P_HLBL(___L3_jazz_3a_new_2d_backend)
___DEF_P_HLBL(___L4_jazz_3a_new_2d_backend)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_new_2d_backend)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_new_2d_backend)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_new_2d_backend)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),31,___G_make_2d_table)
___DEF_SLBL(2,___L2_jazz_3a_new_2d_backend)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-6))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),5,___G_jazz_3a_allocate_2d_backend)
___DEF_SLBL(3,___L3_jazz_3a_new_2d_backend)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_new_2d_backend)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_backend_2d_binding
#undef ___PH_LBL0
#define ___PH_LBL0 31
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_backend_2d_binding)
___DEF_P_HLBL(___L1_jazz_3a_get_2d_backend_2d_binding)
___DEF_P_HLBL(___L2_jazz_3a_get_2d_backend_2d_binding)
___DEF_P_HLBL(___L3_jazz_3a_get_2d_backend_2d_binding)
___DEF_P_HLBL(___L4_jazz_3a_get_2d_backend_2d_binding)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_backend_2d_binding)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_backend_2d_binding)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_get_2d_backend_2d_binding)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_3a_get_2d_backend_2d_bindings)
___DEF_SLBL(2,___L2_jazz_3a_get_2d_backend_2d_binding)
   ___SET_R2(___STK(-5))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),18,___G__23__23_table_2d_ref)
___DEF_SLBL(3,___L3_jazz_3a_get_2d_backend_2d_binding)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_get_2d_backend_2d_binding)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_require_2d_backend_2d_binding
#undef ___PH_LBL0
#define ___PH_LBL0 37
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_require_2d_backend_2d_binding)
___DEF_P_HLBL(___L1_jazz_3a_require_2d_backend_2d_binding)
___DEF_P_HLBL(___L2_jazz_3a_require_2d_backend_2d_binding)
___DEF_P_HLBL(___L3_jazz_3a_require_2d_backend_2d_binding)
___DEF_P_HLBL(___L4_jazz_3a_require_2d_backend_2d_binding)
___DEF_P_HLBL(___L5_jazz_3a_require_2d_backend_2d_binding)
___DEF_P_HLBL(___L6_jazz_3a_require_2d_backend_2d_binding)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_require_2d_backend_2d_binding)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_require_2d_backend_2d_binding)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_require_2d_backend_2d_binding)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),8,___G_jazz_3a_get_2d_backend_2d_binding)
___DEF_SLBL(2,___L2_jazz_3a_require_2d_backend_2d_binding)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L7_jazz_3a_require_2d_backend_2d_binding)
   ___END_IF
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_require_2d_backend_2d_binding)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L7_jazz_3a_require_2d_backend_2d_binding)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_jazz_3a_get_2d_backend_2d_name)
___DEF_SLBL(4,___L4_jazz_3a_require_2d_backend_2d_binding)
   ___SET_R2(___R1)
   ___SET_R3(___STK(-5))
   ___SET_R1(___SUB(80))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(3),27,___G_jazz_3a_error)
___DEF_SLBL(5,___L5_jazz_3a_require_2d_backend_2d_binding)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_3a_require_2d_backend_2d_binding)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_add_2d_backend_2d_binding
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_add_2d_backend_2d_binding)
___DEF_P_HLBL(___L1_jazz_3a_add_2d_backend_2d_binding)
___DEF_P_HLBL(___L2_jazz_3a_add_2d_backend_2d_binding)
___DEF_P_HLBL(___L3_jazz_3a_add_2d_backend_2d_binding)
___DEF_P_HLBL(___L4_jazz_3a_add_2d_backend_2d_binding)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_add_2d_backend_2d_binding)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_3a_add_2d_backend_2d_binding)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_add_2d_backend_2d_binding)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_3a_get_2d_backend_2d_bindings)
___DEF_SLBL(2,___L2_jazz_3a_add_2d_backend_2d_binding)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),19,___G__23__23_table_2d_set_21_)
___DEF_SLBL(3,___L3_jazz_3a_add_2d_backend_2d_binding)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_add_2d_backend_2d_binding)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_emit
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_emit)
___DEF_P_HLBL(___L1_jazz_3a_emit)
___DEF_P_HLBL(___L2_jazz_3a_emit)
___DEF_P_HLBL(___L3_jazz_3a_emit)
___DEF_P_HLBL(___L4_jazz_3a_emit)
___DEF_P_HLBL(___L5_jazz_3a_emit)
___DEF_P_HLBL(___L6_jazz_3a_emit)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_emit)
   ___IF_NARGS_EQ(2,___SET_R3(___NUL))
   ___GET_REST(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_emit)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_emit)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),10,___G_jazz_3a_get_2d_backend_2d_hook)
___DEF_SLBL(2,___L2_jazz_3a_emit)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L7_jazz_3a_emit)
   ___END_IF
   ___SET_STK(-3,___R1)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-3))
___DEF_SLBL(3,___L3_jazz_3a_emit)
   ___SET_R1(___STK(-3))
___DEF_GLBL(___L7_jazz_3a_emit)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),16,___G_jazz_3a_require_2d_backend_2d_binding)
___DEF_SLBL(4,___L4_jazz_3a_emit)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-6))
   ___SET_R0(___LBL(5))
   ___JUMPPRM(___SET_NARGS(3),___PRM_apply)
___DEF_SLBL(5,___L5_jazz_3a_emit)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_3a_emit)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_backend
#undef ___PH_LBL0
#define ___PH_LBL0 59
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_backend)
___DEF_P_HLBL(___L1_jazz_3a_get_2d_backend)
___DEF_P_HLBL(___L2_jazz_3a_get_2d_backend)
___DEF_P_HLBL(___L3_jazz_3a_get_2d_backend)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_backend)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_backend)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R3(___FAL)
   ___SET_R1(___GLO_jazz_3a_Backends)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_get_2d_backend)
   ___SET_R0(___LBL(2))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),18,___G__23__23_table_2d_ref)
___DEF_SLBL(2,___L2_jazz_3a_get_2d_backend)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_get_2d_backend)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_require_2d_backend
#undef ___PH_LBL0
#define ___PH_LBL0 64
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L1_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L2_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L3_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L4_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L5_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L6_jazz_3a_require_2d_backend)
___DEF_P_HLBL(___L7_jazz_3a_require_2d_backend)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_require_2d_backend)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_require_2d_backend)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_require_2d_backend)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),26,___G_jazz_3a_class_2d_of)
___DEF_SLBL(2,___L2_jazz_3a_require_2d_backend)
   ___SET_R2(___VECTORREF(___GLO_jazz_3a_Backend,___FIX(11L)))
   ___SET_R3(___VECTORREF(___R1,___FIX(11L)))
   ___IF(___NOT(___FIXGE(___R3,___R2)))
   ___GOTO(___L8_jazz_3a_require_2d_backend)
   ___END_IF
   ___SET_R3(___VECTORREF(___R1,___FIX(4L)))
   ___SET_R3(___VECTORREF(___R3,___R2))
   ___IF(___NOT(___EQP(___R3,___GLO_jazz_3a_Backend)))
   ___GOTO(___L8_jazz_3a_require_2d_backend)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_require_2d_backend)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L8_jazz_3a_require_2d_backend)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_jazz_3a_get_2d_backend)
___DEF_SLBL(4,___L4_jazz_3a_require_2d_backend)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L9_jazz_3a_require_2d_backend)
   ___END_IF
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_3a_require_2d_backend)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L9_jazz_3a_require_2d_backend)
   ___SET_R2(___STK(-6))
   ___SET_R1(___SUB(139))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),27,___G_jazz_3a_error)
___DEF_SLBL(6,___L6_jazz_3a_require_2d_backend)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_3a_require_2d_backend)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_register_2d_backend
#undef ___PH_LBL0
#define ___PH_LBL0 73
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_register_2d_backend)
___DEF_P_HLBL(___L1_jazz_3a_register_2d_backend)
___DEF_P_HLBL(___L2_jazz_3a_register_2d_backend)
___DEF_P_HLBL(___L3_jazz_3a_register_2d_backend)
___DEF_P_HLBL(___L4_jazz_3a_register_2d_backend)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_register_2d_backend)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_register_2d_backend)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_register_2d_backend)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_jazz_3a_get_2d_backend_2d_name)
___DEF_SLBL(2,___L2_jazz_3a_register_2d_backend)
   ___SET_STK(-5,___R1)
   ___SET_R3(___STK(-6))
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_3a_Backends)
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),19,___G__23__23_table_2d_set_21_)
___DEF_SLBL(3,___L3_jazz_3a_register_2d_backend)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_register_2d_backend)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_register_2d_emit
#undef ___PH_LBL0
#define ___PH_LBL0 79
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_register_2d_emit)
___DEF_P_HLBL(___L1_jazz_3a_register_2d_emit)
___DEF_P_HLBL(___L2_jazz_3a_register_2d_emit)
___DEF_P_HLBL(___L3_jazz_3a_register_2d_emit)
___DEF_P_HLBL(___L4_jazz_3a_register_2d_emit)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_register_2d_emit)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_3a_register_2d_emit)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_register_2d_emit)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_jazz_3a_require_2d_backend)
___DEF_SLBL(2,___L2_jazz_3a_register_2d_emit)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),4,___G_jazz_3a_add_2d_backend_2d_binding)
___DEF_SLBL(3,___L3_jazz_3a_register_2d_emit)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_register_2d_emit)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_backend_2e_runtime_23_,"bin:backend.runtime#",___REF_SUB(0),12,0)

,___DEF_LBL_PROC(___H_bin_3a_backend_2e_runtime_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___OFD(___RETI,10,0,0x3f3f1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_backend_2e_runtime_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_backend_2d_name,0,___REF_SUB(27),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_backend_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_backend_2d_bindings,0,___REF_SUB(32),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_backend_2d_bindings,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_backend_2d_hook,0,___REF_SUB(37),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_backend_2d_hook,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_set_2d_backend_2d_hook,0,___REF_SUB(42),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_set_2d_backend_2d_hook,2,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_allocate_2d_backend,0,___REF_SUB(47),2,0)
,___DEF_LBL_PROC(___H_jazz_3a_allocate_2d_backend,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_allocate_2d_backend,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_new_2d_backend,0,___REF_SUB(54),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_new_2d_backend,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_new_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_backend_2d_binding,0,___REF_SUB(67),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_backend_2d_binding,2,-1)
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend_2d_binding,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend_2d_binding,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_3a_require_2d_backend_2d_binding,0,___REF_SUB(81),7,0)
,___DEF_LBL_PROC(___H_jazz_3a_require_2d_backend_2d_binding,2,-1)
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend_2d_binding,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend_2d_binding,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend_2d_binding,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_3a_add_2d_backend_2d_binding,0,___REF_SUB(98),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_add_2d_backend_2d_binding,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_add_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_3a_add_2d_backend_2d_binding,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_add_2d_backend_2d_binding,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_add_2d_backend_2d_binding,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_3a_emit,0,___REF_SUB(111),7,0)
,___DEF_LBL_PROC(___H_jazz_3a_emit,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_emit,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_3a_emit,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_emit,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_3a_emit,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_emit,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_emit,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_backend,0,___REF_SUB(128),4,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_backend,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_get_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_3a_require_2d_backend,0,___REF_SUB(140),8,0)
,___DEF_LBL_PROC(___H_jazz_3a_require_2d_backend,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_require_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_3a_register_2d_backend,0,___REF_SUB(159),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_register_2d_backend,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_register_2d_backend,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_backend,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_backend,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_backend,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_3a_register_2d_emit,0,___REF_SUB(172),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_register_2d_emit,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_register_2d_emit,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_emit,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_emit,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_emit,___IFD(___RETI,8,0,0x3f0fL))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,10,0)
               ___GCMAP1(0x3f3f1L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_backend_2e_runtime_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_backend_2e_runtime_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Backend,"Backend")
___DEF_MOD_SYM(1,___S_backend,"backend")
___DEF_MOD_SYM(2,___S_backend_2d_name,"backend-name")
___DEF_MOD_SYM(3,___S_backend_2e_runtime,"backend.runtime")
___DEF_MOD_SYM(4,___S_backend_2f_name,"backend/name")
___DEF_MOD_SYM(5,___S_bin_3a_backend_2e_runtime,"bin:backend.runtime")
___DEF_MOD_SYM(6,___S_binding,"binding")
___DEF_MOD_SYM(7,___S_bindings,"bindings")
___DEF_MOD_SYM(8,___S_emit,"emit")
___DEF_MOD_SYM(9,___S_emitter,"emitter")
___DEF_MOD_SYM(10,___S_function,"function")
___DEF_MOD_SYM(11,___S_hook,"hook")
___DEF_MOD_SYM(12,___S_jazz_3a_Backend,"jazz:Backend")
___DEF_MOD_SYM(13,___S_jazz_3a_Object,"jazz:Object")
___DEF_MOD_SYM(14,___S_jazz_3a_Object_2d_Class,"jazz:Object-Class")
___DEF_MOD_SYM(15,___S_jazz_3a_allocate_2d_backend,"jazz:allocate-backend")
___DEF_MOD_SYM(16,___S_jazz_3a_get_2d_backend_2d_bindings,"jazz:get-backend-bindings")
___DEF_MOD_SYM(17,___S_jazz_3a_get_2d_backend_2d_hook,"jazz:get-backend-hook")
___DEF_MOD_SYM(18,___S_jazz_3a_get_2d_backend_2d_name,"jazz:get-backend-name")
___DEF_MOD_SYM(19,___S_jazz_3a_set_2d_backend_2d_hook,"jazz:set-backend-hook")
___DEF_MOD_SYM(20,___S_name,"name")
___DEF_MOD_SYM(21,___S_rest,"rest")
___DEF_MOD_KEY(0,___K_test,"test")
___END_MOD_SYM_KEY

#endif
