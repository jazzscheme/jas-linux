#ifdef ___LINKER_INFO
; File: "Register.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.presence.register.Register"
(("bin:jazz.presence.register.Register"))
(
"Register"
"Register~Class"
"bin:jazz.presence.register.Register"
"error?"
"find-object"
"foundation.dialect"
"get-manifest"
"jazz"
"jazz.presence.register.Register"
"jazz.presence.register.Register:Register"
"jazz.presence.register.Register:Register~Class"
"jazz.presence.register.stub"
"load-object"
"module-name"
"name"
"new-register-proxy"
"obj^0"
"object"
"objects"
"presence"
"protected"
"register-object"
"require-object"
"self"
"unregister-object"
)
(
"error?"
"test"
)
(
"bin:jazz.presence.register.Register#"
"jazz.presence.register.Register:Register"
"jazz.presence.register.Register:Register:find-object"
"jazz.presence.register.Register:Register:get-manifest"
"jazz.presence.register.Register:Register:load-object"
"jazz.presence.register.Register:Register:objects!initialize"
"jazz.presence.register.Register:Register:objects!offset"
"jazz.presence.register.Register:Register:objects!slot"
"jazz.presence.register.Register:Register:register-object"
"jazz.presence.register.Register:Register:require-object"
"jazz.presence.register.Register:Register:unregister-object"
"jazz.presence.register.Register:Register~Class"
"jazz.presence.register.Register:Register~Class:new-register-proxy"
)
(
"jazz.presence.register.Register:Register!level"
"jazz.presence.register.Register:Register~Class!level"
)
(
"eq?"
"error"
"jazz.language.runtime.exception:error"
"jazz.language.runtime.functional:table-keys"
"jazz.language.runtime.object:Object"
"jazz.presence.register.stub:Register-Local-Proxy"
"jazz:Class"
"jazz:Unspecified-Value"
"jazz:add-final-method"
"jazz:add-slot"
"jazz:class-of"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:initialize-slots"
"jazz:load-unit"
"jazz:new"
"jazz:new-class"
"jazz:register-module"
"jazz:table-clear"
"make-table"
"make-vector"
"table-ref"
"table-set!"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.presence.register.Register"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_presence_2e_register_2e_Register
#define ___MH_PROC ___H_bin_3a_jazz_2e_presence_2e_register_2e_Register
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 25
#define ___KEYCOUNT 2
#define ___GLOCOUNT 38
#define ___SUPCOUNT 15
#define ___CNSCOUNT 4
#define ___SUBCOUNT 174
#define ___LBLCOUNT 79
#define ___MODDESCR ___REF_SUB(173)
#include "gambit.h"

___NEED_SYM(___S_Register)
___NEED_SYM(___S_Register_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_presence_2e_register_2e_Register)
___NEED_SYM(___S_error_3f_)
___NEED_SYM(___S_find_2d_object)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_manifest)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_presence_2e_register_2e_Register)
___NEED_SYM(___S_jazz_2e_presence_2e_register_2e_Register_3a_Register)
___NEED_SYM(___S_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
___NEED_SYM(___S_jazz_2e_presence_2e_register_2e_stub)
___NEED_SYM(___S_load_2d_object)
___NEED_SYM(___S_module_2d_name)
___NEED_SYM(___S_name)
___NEED_SYM(___S_new_2d_register_2d_proxy)
___NEED_SYM(___S_obj_5e_0)
___NEED_SYM(___S_object)
___NEED_SYM(___S_objects)
___NEED_SYM(___S_presence)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_register_2d_object)
___NEED_SYM(___S_require_2d_object)
___NEED_SYM(___S_self)
___NEED_SYM(___S_unregister_2d_object)

___NEED_KEY(___K_error_3f_)
___NEED_KEY(___K_test)

___NEED_GLO(___G_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_table_2d_keys)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_21_level)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___NEED_GLO(___G_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy)
___NEED_GLO(___G_jazz_3a_Class)
___NEED_GLO(___G_jazz_3a_Unspecified_2d_Value)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_class_2d_of)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_initialize_2d_slots)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_table_2d_clear)
___NEED_GLO(___G_make_2d_table)
___NEED_GLO(___G_make_2d_vector)
___NEED_GLO(___G_table_2d_ref)
___NEED_GLO(___G_table_2d_set_21_)

___BEGIN_SYM
___DEF_SYM(0,___S_Register,"Register")
___DEF_SYM(1,___S_Register_7e_Class,"Register~Class")
___DEF_SYM(2,___S_bin_3a_jazz_2e_presence_2e_register_2e_Register,"bin:jazz.presence.register.Register")

___DEF_SYM(3,___S_error_3f_,"error?")
___DEF_SYM(4,___S_find_2d_object,"find-object")
___DEF_SYM(5,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(6,___S_get_2d_manifest,"get-manifest")
___DEF_SYM(7,___S_jazz,"jazz")
___DEF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register,"jazz.presence.register.Register")

___DEF_SYM(9,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register,"jazz.presence.register.Register:Register")

___DEF_SYM(10,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class,"jazz.presence.register.Register:Register~Class")

___DEF_SYM(11,___S_jazz_2e_presence_2e_register_2e_stub,"jazz.presence.register.stub")
___DEF_SYM(12,___S_load_2d_object,"load-object")
___DEF_SYM(13,___S_module_2d_name,"module-name")
___DEF_SYM(14,___S_name,"name")
___DEF_SYM(15,___S_new_2d_register_2d_proxy,"new-register-proxy")
___DEF_SYM(16,___S_obj_5e_0,"obj^0")
___DEF_SYM(17,___S_object,"object")
___DEF_SYM(18,___S_objects,"objects")
___DEF_SYM(19,___S_presence,"presence")
___DEF_SYM(20,___S_protected,"protected")
___DEF_SYM(21,___S_register_2d_object,"register-object")
___DEF_SYM(22,___S_require_2d_object,"require-object")
___DEF_SYM(23,___S_self,"self")
___DEF_SYM(24,___S_unregister_2d_object,"unregister-object")
___END_SYM

#define ___SYM_Register ___SYM(0,___S_Register)
#define ___SYM_Register_7e_Class ___SYM(1,___S_Register_7e_Class)
#define ___SYM_bin_3a_jazz_2e_presence_2e_register_2e_Register ___SYM(2,___S_bin_3a_jazz_2e_presence_2e_register_2e_Register)
#define ___SYM_error_3f_ ___SYM(3,___S_error_3f_)
#define ___SYM_find_2d_object ___SYM(4,___S_find_2d_object)
#define ___SYM_foundation_2e_dialect ___SYM(5,___S_foundation_2e_dialect)
#define ___SYM_get_2d_manifest ___SYM(6,___S_get_2d_manifest)
#define ___SYM_jazz ___SYM(7,___S_jazz)
#define ___SYM_jazz_2e_presence_2e_register_2e_Register ___SYM(8,___S_jazz_2e_presence_2e_register_2e_Register)
#define ___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register ___SYM(9,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register)
#define ___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class ___SYM(10,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
#define ___SYM_jazz_2e_presence_2e_register_2e_stub ___SYM(11,___S_jazz_2e_presence_2e_register_2e_stub)
#define ___SYM_load_2d_object ___SYM(12,___S_load_2d_object)
#define ___SYM_module_2d_name ___SYM(13,___S_module_2d_name)
#define ___SYM_name ___SYM(14,___S_name)
#define ___SYM_new_2d_register_2d_proxy ___SYM(15,___S_new_2d_register_2d_proxy)
#define ___SYM_obj_5e_0 ___SYM(16,___S_obj_5e_0)
#define ___SYM_object ___SYM(17,___S_object)
#define ___SYM_objects ___SYM(18,___S_objects)
#define ___SYM_presence ___SYM(19,___S_presence)
#define ___SYM_protected ___SYM(20,___S_protected)
#define ___SYM_register_2d_object ___SYM(21,___S_register_2d_object)
#define ___SYM_require_2d_object ___SYM(22,___S_require_2d_object)
#define ___SYM_self ___SYM(23,___S_self)
#define ___SYM_unregister_2d_object ___SYM(24,___S_unregister_2d_object)

___BEGIN_KEY
___DEF_KEY(0,___K_error_3f_,"error?")
___DEF_KEY(1,___K_test,"test")
___END_KEY

#define ___KEY_error_3f_ ___KEY(0,___K_error_3f_)
#define ___KEY_test ___KEY(1,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.presence.register.Register#")

___DEF_GLO(1,"jazz.presence.register.Register:Register")

___DEF_GLO(2,"jazz.presence.register.Register:Register!level")

___DEF_GLO(3,"jazz.presence.register.Register:Register:find-object")

___DEF_GLO(4,"jazz.presence.register.Register:Register:get-manifest")

___DEF_GLO(5,"jazz.presence.register.Register:Register:load-object")

___DEF_GLO(6,"jazz.presence.register.Register:Register:objects!initialize")

___DEF_GLO(7,"jazz.presence.register.Register:Register:objects!offset")

___DEF_GLO(8,"jazz.presence.register.Register:Register:objects!slot")

___DEF_GLO(9,"jazz.presence.register.Register:Register:register-object")

___DEF_GLO(10,"jazz.presence.register.Register:Register:require-object")

___DEF_GLO(11,"jazz.presence.register.Register:Register:unregister-object")

___DEF_GLO(12,"jazz.presence.register.Register:Register~Class")

___DEF_GLO(13,"jazz.presence.register.Register:Register~Class!level")

___DEF_GLO(14,"jazz.presence.register.Register:Register~Class:new-register-proxy")

___DEF_GLO(15,"eq?")
___DEF_GLO(16,"error")
___DEF_GLO(17,"jazz.language.runtime.exception:error")

___DEF_GLO(18,"jazz.language.runtime.functional:table-keys")

___DEF_GLO(19,"jazz.language.runtime.object:Object")

___DEF_GLO(20,"jazz.presence.register.stub:Register-Local-Proxy")

___DEF_GLO(21,"jazz:Class")
___DEF_GLO(22,"jazz:Unspecified-Value")
___DEF_GLO(23,"jazz:add-final-method")
___DEF_GLO(24,"jazz:add-slot")
___DEF_GLO(25,"jazz:class-of")
___DEF_GLO(26,"jazz:global-bound?")
___DEF_GLO(27,"jazz:global-ref")
___DEF_GLO(28,"jazz:initialize-slots")
___DEF_GLO(29,"jazz:load-unit")
___DEF_GLO(30,"jazz:new")
___DEF_GLO(31,"jazz:new-class")
___DEF_GLO(32,"jazz:register-module")
___DEF_GLO(33,"jazz:table-clear")
___DEF_GLO(34,"make-table")
___DEF_GLO(35,"make-vector")
___DEF_GLO(36,"table-ref")
___DEF_GLO(37,"table-set!")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_ ___GLO(0,___G_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
#define ___PRM_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_ ___PRM(0,___G_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register ___GLO(1,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register ___PRM(1,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_21_level ___GLO(2,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_21_level)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_21_level ___PRM(2,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_21_level)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object ___GLO(3,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object ___PRM(3,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest ___GLO(4,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest ___PRM(4,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object ___GLO(5,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object ___PRM(5,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize ___GLO(6,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize ___PRM(6,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset ___GLO(7,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset ___PRM(7,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot ___GLO(8,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot ___PRM(8,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object ___GLO(9,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object ___PRM(9,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object ___GLO(10,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object ___PRM(10,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object ___GLO(11,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object ___PRM(11,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class ___GLO(12,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class ___PRM(12,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_21_level ___GLO(13,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_21_level)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_21_level ___PRM(13,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_21_level)
#define ___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy ___GLO(14,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
#define ___PRM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy ___PRM(14,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
#define ___GLO_eq_3f_ ___GLO(15,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(15,___G_eq_3f_)
#define ___GLO_error ___GLO(16,___G_error)
#define ___PRM_error ___PRM(16,___G_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_error ___GLO(17,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_error ___PRM(17,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_table_2d_keys ___GLO(18,___G_jazz_2e_language_2e_runtime_2e_functional_3a_table_2d_keys)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_table_2d_keys ___PRM(18,___G_jazz_2e_language_2e_runtime_2e_functional_3a_table_2d_keys)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object ___GLO(19,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object ___PRM(19,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___GLO_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy ___GLO(20,___G_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy)
#define ___PRM_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy ___PRM(20,___G_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy)
#define ___GLO_jazz_3a_Class ___GLO(21,___G_jazz_3a_Class)
#define ___PRM_jazz_3a_Class ___PRM(21,___G_jazz_3a_Class)
#define ___GLO_jazz_3a_Unspecified_2d_Value ___GLO(22,___G_jazz_3a_Unspecified_2d_Value)
#define ___PRM_jazz_3a_Unspecified_2d_Value ___PRM(22,___G_jazz_3a_Unspecified_2d_Value)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(23,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(23,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(24,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(24,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_class_2d_of ___GLO(25,___G_jazz_3a_class_2d_of)
#define ___PRM_jazz_3a_class_2d_of ___PRM(25,___G_jazz_3a_class_2d_of)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(26,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(26,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(27,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(27,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_initialize_2d_slots ___GLO(28,___G_jazz_3a_initialize_2d_slots)
#define ___PRM_jazz_3a_initialize_2d_slots ___PRM(28,___G_jazz_3a_initialize_2d_slots)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(29,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(29,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new ___GLO(30,___G_jazz_3a_new)
#define ___PRM_jazz_3a_new ___PRM(30,___G_jazz_3a_new)
#define ___GLO_jazz_3a_new_2d_class ___GLO(31,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(31,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_register_2d_module ___GLO(32,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(32,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_table_2d_clear ___GLO(33,___G_jazz_3a_table_2d_clear)
#define ___PRM_jazz_3a_table_2d_clear ___PRM(33,___G_jazz_3a_table_2d_clear)
#define ___GLO_make_2d_table ___GLO(34,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(34,___G_make_2d_table)
#define ___GLO_make_2d_vector ___GLO(35,___G_make_2d_vector)
#define ___PRM_make_2d_vector ___PRM(35,___G_make_2d_vector)
#define ___GLO_table_2d_ref ___GLO(36,___G_table_2d_ref)
#define ___PRM_table_2d_ref ___PRM(36,___G_table_2d_ref)
#define ___GLO_table_2d_set_21_ ___GLO(37,___G_table_2d_set_21_)
#define ___PRM_table_2d_set_21_ ___PRM(37,___G_table_2d_set_21_)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_Register),___REF_SYM(9,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(1,___S_Register_7e_Class),___REF_SYM(10,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X1,21UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131130))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131145))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131154))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131168))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131168))
               ___VEC0
___DEF_SUB_VEC(___X44,0UL)
               ___VEC0
___DEF_SUB_STR(___X45,76UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,40,37,37,99,108,97)
               ___STR8(115,115,63,32,106,97,122,122)
               ___STR8(46,112,114,101,115,101,110,99)
               ___STR8(101,46,114,101,103,105,115,116)
               ___STR8(101,114,46,115,116,117,98,58)
               ___STR8(82,101,103,105,115,116,101,114)
               ___STR8(45,76,111,99,97,108,45,80)
               ___STR8(114,111,120,121,41,32,102,97)
               ___STR4(105,108,101,100)
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_SUB(68))
               ___VEC0
___DEF_SUB_VEC(___X47,10UL)
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
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X50,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X52,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X54,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X56,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X58,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X60,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X64,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X66,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262192))
               ___VEC0
___DEF_SUB_VEC(___X68,3UL)
               ___VEC1(___REF_SYM(19,___S_presence))
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC1(___REF_SYM(16,___S_obj_5e_0))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X70,4UL)
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(72))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X73,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X75,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X77,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X79,1UL)
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X81,4UL)
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X84,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X86,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X88,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(14,___S_name))
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_STR(___X91,30UL)
               ___STR8(85,110,97,98,108,101,32,116)
               ___STR8(111,32,102,105,110,100,32,123)
               ___STR8(116,125,32,105,110,32,114,101)
               ___STR6(103,105,115,116,101,114)
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
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131130))
               ___VEC0
___DEF_SUB_VEC(___X96,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524347))
               ___VEC0
___DEF_SUB_VEC(___X98,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524347))
               ___VEC0
___DEF_SUB_VEC(___X100,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524347))
               ___VEC0
___DEF_SUB_VEC(___X102,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524348))
               ___VEC0
___DEF_SUB_VEC(___X104,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524348))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SYM(14,___S_name))
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(119))
               ___VEC0
___DEF_SUB_VEC(___X108,5UL)
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(110))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X111,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X113,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(114))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X115,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262209))
               ___VEC0
___DEF_SUB_VEC(___X117,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262209))
               ___VEC0
___DEF_SUB_VEC(___X119,3UL)
               ___VEC1(___REF_SYM(14,___S_name))
               ___VEC1(___REF_SYM(13,___S_module_2d_name))
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_KEY(0,___K_error_3f_))
               ___VEC1(___REF_TRU)
               ___VEC0
___DEF_SUB_STR(___X121,32UL)
               ___STR8(79,98,106,101,99,116,32,123)
               ___STR8(116,125,32,105,115,32,97,108)
               ___STR8(114,101,97,100,121,32,114,101)
               ___STR8(103,105,115,116,101,114,101,100)
               ___STR0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(140))
               ___VEC0
___DEF_SUB_VEC(___X123,8UL)
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_SUB(136))
               ___VEC1(___REF_SUB(138))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131145))
               ___VEC0
___DEF_SUB_VEC(___X126,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524362))
               ___VEC0
___DEF_SUB_VEC(___X128,6UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(524362))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(655437))
               ___VEC0
___DEF_SUB_VEC(___X132,6UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(786508))
               ___VEC0
___DEF_SUB_VEC(___X134,6UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(786508))
               ___VEC0
___DEF_SUB_VEC(___X136,6UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(393294))
               ___VEC0
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(139))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(393295))
               ___VEC0
___DEF_SUB_VEC(___X140,4UL)
               ___VEC1(___REF_SYM(3,___S_error_3f_))
               ___VEC1(___REF_SYM(17,___S_object))
               ___VEC1(___REF_SYM(14,___S_name))
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_KEY(0,___K_error_3f_))
               ___VEC1(___REF_TRU)
               ___VEC0
___DEF_SUB_STR(___X142,28UL)
               ___STR8(79,98,106,101,99,116,32,123)
               ___STR8(116,125,32,105,115,32,110,111)
               ___STR8(116,32,114,101,103,105,115,116)
               ___STR4(101,114,101,100)
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_SUB(161))
               ___VEC0
___DEF_SUB_VEC(___X144,8UL)
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_SUB(159))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(146))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131154))
               ___VEC0
___DEF_SUB_VEC(___X147,6UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(852051))
               ___VEC0
___DEF_SUB_VEC(___X149,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(852051))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(152))
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(655446))
               ___VEC0
___DEF_SUB_VEC(___X153,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(154))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(786517))
               ___VEC0
___DEF_SUB_VEC(___X155,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(156))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X156,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(786517))
               ___VEC0
___DEF_SUB_VEC(___X157,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X158,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(393303))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(160))
               ___VEC0
___DEF_SUB_VEC(___X160,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(393304))
               ___VEC0
___DEF_SUB_VEC(___X161,3UL)
               ___VEC1(___REF_SYM(3,___S_error_3f_))
               ___VEC1(___REF_SYM(14,___S_name))
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(172))
               ___VEC0
___DEF_SUB_VEC(___X163,4UL)
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(165))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(131168))
               ___VEC0
___DEF_SUB_VEC(___X166,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262241))
               ___VEC0
___DEF_SUB_VEC(___X168,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262241))
               ___VEC0
___DEF_SUB_VEC(___X170,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register))
               ___VEC1(___REF_FIX(262241))
               ___VEC0
___DEF_SUB_VEC(___X172,1UL)
               ___VEC1(___REF_SYM(23,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X173,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_presence_2e_register_2e_Register))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL(___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL(___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL(___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_stub)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_STK(1,___SYM_jazz_2e_presence_2e_register_2e_Register)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),32,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),26,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L24_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),31,___G_jazz_3a_new_2d_class)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___GOTO(___L21_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_GLBL(___L21_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(12,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class,___FIX(11L)))
   ___SET_GLO(13,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_21_level,___R1)
   ___SET_GLO(14,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___PRC(23))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R2(___SYM_new_2d_register_2d_proxy)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),26,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L23_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object)
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(11))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),31,___G_jazz_3a_new_2d_class)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___GOTO(___L22_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
___DEF_GLBL(___L22_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(1,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_21_level,___R1)
   ___SET_GLO(6,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize,___PRC(34))
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
   ___SET_R1(___SYM_objects)
   ___SET_R0(___LBL(13))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),24,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(8,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_slot,___FIX(2L)))
   ___SET_GLO(7,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset,___R1)
   ___SET_GLO(3,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object,___PRC(39))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
   ___SET_R2(___SYM_find_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(10,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,___PRC(44))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___SET_R2(___SYM_require_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(5,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,___PRC(51))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___SET_R2(___SYM_load_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(9,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___PRC(57))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___SET_R2(___SYM_register_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(11,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___PRC(66))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___SET_R2(___SYM_unregister_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_GLO(4,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest,___PRC(75))
   ___SET_R3(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
   ___SET_R2(___SYM_get_2d_manifest)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),23,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___POLL(20)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L23_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),27,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L24_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),27,___G_jazz_3a_global_2d_ref)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy
#undef ___PH_LBL0
#define ___PH_LBL0 23
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___DEF_P_HLBL(___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___GLO_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),25,___G_jazz_3a_class_2d_of)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R2(___VECTORREF(___GLO_jazz_3a_Class,___FIX(11L)))
   ___SET_R3(___VECTORREF(___R1,___FIX(11L)))
   ___IF(___NOT(___FIXGE(___R3,___R2)))
   ___GOTO(___L10_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___END_IF
   ___SET_R3(___VECTORREF(___R1,___FIX(4L)))
   ___SET_R3(___VECTORREF(___R3,___R2))
   ___IF(___NOT(___EQP(___R3,___GLO_jazz_3a_Class)))
   ___GOTO(___L10_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___END_IF
   ___SET_R2(___GLO_jazz_3a_Unspecified_2d_Value)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy,___FIX(10L)))
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(2),___PRM_make_2d_vector)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SUBTYPESET(___R1,___FIX(7L)) ___SET_R2(___R1)
   ___VECTORSET(___R2,___FIX(0L),___GLO_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy)
   ___SET_STK(-4,___R2)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),28,___G_jazz_3a_initialize_2d_slots)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),30,___G_jazz_3a_new)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-4))
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_presence_2e_register_2e_stub_3a_Register_2d_Local_2d_Proxy,___FIX(13L)))
   ___SET_R4(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R4(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R0(___LBL(6))
   ___JUMPGENSAFE(___SET_NARGS(3),___R4)
___DEF_SLBL(6,___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R1(___STK(-4))
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L10_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___SET_R1(___SUB(45))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),16,___G_error)
___DEF_SLBL(8,___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 34
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),34,___G_make_2d_table)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset))
   ___SET_R3(___FAL)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(3),36,___G_table_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 44
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___END_IF
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___SET_R2(___STK(-5))
   ___SET_R1(___SUB(91))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),17,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___SET_R2(___STK(-4))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),10,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 57
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___DEF_P_HLBL(___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___IF_NARGS_EQ(3,___PUSH(___R1) ___SET_R1(___R2) ___SET_R2(___R3) ___SET_R3(___TRU))
   ___GET_KEY(0,3,0,1,___SUB(120))
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R2(___R1)
   ___SET_R1(___STK(0))
   ___ADJFP(7)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___END_IF
   ___IF(___NOTFALSEP(___STK(-3)))
   ___GOTO(___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___END_IF
   ___SET_R1(___FAL)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___SET_R2(___STK(-5))
   ___SET_R1(___SUB(121))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),17,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___VECTORREF(___STK(-7),___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_table_2d_set_21_)
___DEF_SLBL(6,___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___SET_R1(___TRU)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 66
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___DEF_P_HLBL(___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___IF_NARGS_EQ(2,___SET_R3(___TRU))
   ___GET_KEY(0,2,0,1,___SUB(141))
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___END_IF
   ___IF(___NOTFALSEP(___STK(-4)))
   ___GOTO(___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___END_IF
   ___SET_R1(___FAL)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L8_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___SET_R2(___STK(-5))
   ___SET_R1(___SUB(142))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),17,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L9_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___SET_R2(___STK(-5))
   ___SET_R1(___VECTORREF(___STK(-6),___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),33,___G_jazz_3a_table_2d_clear)
___DEF_SLBL(6,___L6_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___SET_R1(___TRU)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest
#undef ___PH_LBL0
#define ___PH_LBL0 75
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_2e_language_2e_runtime_2e_functional_3a_table_2d_keys)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,"bin:jazz.presence.register.Register#",
___REF_SUB(0),21,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,0,___REF_SUB(46),10,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class_3a_new_2d_register_2d_proxy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize,0,___REF_SUB(69),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_objects_21_initialize,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object,0,___REF_SUB(80),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_find_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,0,___REF_SUB(92),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_require_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,0,___REF_SUB(107),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,3,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_load_2d_object,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,0,___REF_SUB(122),8,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,4,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETI,8,1,0x3f1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETN,5,1,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETN,5,1,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETI,8,1,0x3f1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETN,5,1,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_register_2d_object,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,0,___REF_SUB(143),8,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,3,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_unregister_2d_object,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest,0,___REF_SUB(162),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_register_2e_Register_3a_Register_3a_get_2d_manifest,___IFD(___RETI,8,0,0x3f03L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_presence_2e_register_2e_Register_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Register,"Register")
___DEF_MOD_SYM(1,___S_Register_7e_Class,"Register~Class")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_presence_2e_register_2e_Register,"bin:jazz.presence.register.Register")

___DEF_MOD_SYM(3,___S_error_3f_,"error?")
___DEF_MOD_SYM(4,___S_find_2d_object,"find-object")
___DEF_MOD_SYM(5,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(6,___S_get_2d_manifest,"get-manifest")
___DEF_MOD_SYM(7,___S_jazz,"jazz")
___DEF_MOD_SYM(8,___S_jazz_2e_presence_2e_register_2e_Register,"jazz.presence.register.Register")

___DEF_MOD_SYM(9,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register,"jazz.presence.register.Register:Register")

___DEF_MOD_SYM(10,___S_jazz_2e_presence_2e_register_2e_Register_3a_Register_7e_Class,"jazz.presence.register.Register:Register~Class")

___DEF_MOD_SYM(11,___S_jazz_2e_presence_2e_register_2e_stub,"jazz.presence.register.stub")
___DEF_MOD_SYM(12,___S_load_2d_object,"load-object")
___DEF_MOD_SYM(13,___S_module_2d_name,"module-name")
___DEF_MOD_SYM(14,___S_name,"name")
___DEF_MOD_SYM(15,___S_new_2d_register_2d_proxy,"new-register-proxy")
___DEF_MOD_SYM(16,___S_obj_5e_0,"obj^0")
___DEF_MOD_SYM(17,___S_object,"object")
___DEF_MOD_SYM(18,___S_objects,"objects")
___DEF_MOD_SYM(19,___S_presence,"presence")
___DEF_MOD_SYM(20,___S_protected,"protected")
___DEF_MOD_SYM(21,___S_register_2d_object,"register-object")
___DEF_MOD_SYM(22,___S_require_2d_object,"require-object")
___DEF_MOD_SYM(23,___S_self,"self")
___DEF_MOD_SYM(24,___S_unregister_2d_object,"unregister-object")
___DEF_MOD_KEY(0,___K_error_3f_,"error?")
___DEF_MOD_KEY(1,___K_test,"test")
___END_MOD_SYM_KEY

#endif
