#ifdef ___LINKER_INFO
; File: "IOR.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.presence.remotable.IOR"
(("bin:jazz.presence.remotable.IOR"))
(
"IOR"
"IOR~Class"
"bin:jazz.presence.remotable.IOR"
"category"
"content"
"foundation.dialect"
"get-purpose"
"get-reference"
"get-stub-interface"
"get-uuid"
"get-values"
"initialize"
"jazz"
"jazz.language.runtime.functional"
"jazz.presence.remotable.IOR"
"jazz.presence.remotable.IOR:IOR"
"jazz.presence.remotable.IOR:IOR~Class"
"marshall-object"
"nextmethod"
"object"
"output"
"print"
"protected"
"purpose"
"readably"
"reference"
"self"
"stub-interface"
"unmarshall-object"
"uuid"
"values"
)
(
)
(
"bin:jazz.presence.remotable.IOR#"
"jazz.presence.remotable.IOR:IOR"
"jazz.presence.remotable.IOR:IOR:get-purpose"
"jazz.presence.remotable.IOR:IOR:get-reference"
"jazz.presence.remotable.IOR:IOR:get-stub-interface"
"jazz.presence.remotable.IOR:IOR:get-uuid"
"jazz.presence.remotable.IOR:IOR:get-values"
"jazz.presence.remotable.IOR:IOR:initialize"
"jazz.presence.remotable.IOR:IOR:initialize!node"
"jazz.presence.remotable.IOR:IOR:print"
"jazz.presence.remotable.IOR:IOR:purpose!offset"
"jazz.presence.remotable.IOR:IOR:purpose!slot"
"jazz.presence.remotable.IOR:IOR:reference!offset"
"jazz.presence.remotable.IOR:IOR:reference!slot"
"jazz.presence.remotable.IOR:IOR:stub-interface!offset"
"jazz.presence.remotable.IOR:IOR:stub-interface!slot"
"jazz.presence.remotable.IOR:IOR:uuid!offset"
"jazz.presence.remotable.IOR:IOR:uuid!slot"
"jazz.presence.remotable.IOR:IOR:values!offset"
"jazz.presence.remotable.IOR:IOR:values!slot"
"jazz.presence.remotable.IOR:IOR~Class"
"jazz.presence.remotable.IOR:IOR~Class:marshall-object"
"jazz.presence.remotable.IOR:IOR~Class:unmarshall-object"
"jazz/presence/remotable/IOR_get-purpose!d^4"
"jazz/presence/remotable/IOR_get-reference!d^7"
"jazz/presence/remotable/IOR_get-stub-interface!d^6"
"jazz/presence/remotable/IOR_get-uuid!d^5"
"jazz/presence/remotable/IOR_get-values!d^8"
)
(
"jazz.presence.remotable.IOR:IOR!level"
"jazz.presence.remotable.IOR:IOR:print!node"
"jazz.presence.remotable.IOR:IOR~Class!level"
"jazz.presence.remotable.IOR:IOR~Class:marshall-object!node"
"jazz.presence.remotable.IOR:IOR~Class:unmarshall-object!node"
)
(
"jazz.language.runtime.format:format"
"jazz.language.runtime.functional:category-identifier"
"jazz.language.runtime.functional:serialize-object"
"jazz.language.runtime.object:Object"
"jazz:add-final-method"
"jazz:add-method-node"
"jazz:add-slot"
"jazz:cache-dispatch"
"jazz:class-of"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new-class"
"jazz:reference-name"
"jazz:register-module"
"vector-ref"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.presence.remotable.IOR"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR
#define ___MH_PROC ___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 31
#define ___GLOCOUNT 49
#define ___SUPCOUNT 33
#define ___CNSCOUNT 4
#define ___SUBCOUNT 182
#define ___LBLCOUNT 85
#define ___OFDCOUNT 3
#define ___MODDESCR ___REF_SUB(181)
#include "gambit.h"

___NEED_SYM(___S_IOR)
___NEED_SYM(___S_IOR_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR)
___NEED_SYM(___S_category)
___NEED_SYM(___S_content)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_purpose)
___NEED_SYM(___S_get_2d_reference)
___NEED_SYM(___S_get_2d_stub_2d_interface)
___NEED_SYM(___S_get_2d_uuid)
___NEED_SYM(___S_get_2d_values)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_functional)
___NEED_SYM(___S_jazz_2e_presence_2e_remotable_2e_IOR)
___NEED_SYM(___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
___NEED_SYM(___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
___NEED_SYM(___S_marshall_2d_object)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_object)
___NEED_SYM(___S_output)
___NEED_SYM(___S_print)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_purpose)
___NEED_SYM(___S_readably)
___NEED_SYM(___S_reference)
___NEED_SYM(___S_self)
___NEED_SYM(___S_stub_2d_interface)
___NEED_SYM(___S_unmarshall_2d_object)
___NEED_SYM(___S_uuid)
___NEED_SYM(___S_values)

___NEED_GLO(___G_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_category_2d_identifier)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_serialize_2d_object)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_21_level)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print_21_node)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object_21_node)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object_21_node)
___NEED_GLO(___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4)
___NEED_GLO(___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7)
___NEED_GLO(___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6)
___NEED_GLO(___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5)
___NEED_GLO(___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_cache_2d_dispatch)
___NEED_GLO(___G_jazz_3a_class_2d_of)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_reference_2d_name)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_vector_2d_ref)

___BEGIN_SYM
___DEF_SYM(0,___S_IOR,"IOR")
___DEF_SYM(1,___S_IOR_7e_Class,"IOR~Class")
___DEF_SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR,"bin:jazz.presence.remotable.IOR")

___DEF_SYM(3,___S_category,"category")
___DEF_SYM(4,___S_content,"content")
___DEF_SYM(5,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(6,___S_get_2d_purpose,"get-purpose")
___DEF_SYM(7,___S_get_2d_reference,"get-reference")
___DEF_SYM(8,___S_get_2d_stub_2d_interface,"get-stub-interface")
___DEF_SYM(9,___S_get_2d_uuid,"get-uuid")
___DEF_SYM(10,___S_get_2d_values,"get-values")
___DEF_SYM(11,___S_initialize,"initialize")
___DEF_SYM(12,___S_jazz,"jazz")
___DEF_SYM(13,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR,"jazz.presence.remotable.IOR")
___DEF_SYM(15,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR,"jazz.presence.remotable.IOR:IOR")

___DEF_SYM(16,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class,"jazz.presence.remotable.IOR:IOR~Class")

___DEF_SYM(17,___S_marshall_2d_object,"marshall-object")
___DEF_SYM(18,___S_nextmethod,"nextmethod")
___DEF_SYM(19,___S_object,"object")
___DEF_SYM(20,___S_output,"output")
___DEF_SYM(21,___S_print,"print")
___DEF_SYM(22,___S_protected,"protected")
___DEF_SYM(23,___S_purpose,"purpose")
___DEF_SYM(24,___S_readably,"readably")
___DEF_SYM(25,___S_reference,"reference")
___DEF_SYM(26,___S_self,"self")
___DEF_SYM(27,___S_stub_2d_interface,"stub-interface")
___DEF_SYM(28,___S_unmarshall_2d_object,"unmarshall-object")
___DEF_SYM(29,___S_uuid,"uuid")
___DEF_SYM(30,___S_values,"values")
___END_SYM

#define ___SYM_IOR ___SYM(0,___S_IOR)
#define ___SYM_IOR_7e_Class ___SYM(1,___S_IOR_7e_Class)
#define ___SYM_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR ___SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR)
#define ___SYM_category ___SYM(3,___S_category)
#define ___SYM_content ___SYM(4,___S_content)
#define ___SYM_foundation_2e_dialect ___SYM(5,___S_foundation_2e_dialect)
#define ___SYM_get_2d_purpose ___SYM(6,___S_get_2d_purpose)
#define ___SYM_get_2d_reference ___SYM(7,___S_get_2d_reference)
#define ___SYM_get_2d_stub_2d_interface ___SYM(8,___S_get_2d_stub_2d_interface)
#define ___SYM_get_2d_uuid ___SYM(9,___S_get_2d_uuid)
#define ___SYM_get_2d_values ___SYM(10,___S_get_2d_values)
#define ___SYM_initialize ___SYM(11,___S_initialize)
#define ___SYM_jazz ___SYM(12,___S_jazz)
#define ___SYM_jazz_2e_language_2e_runtime_2e_functional ___SYM(13,___S_jazz_2e_language_2e_runtime_2e_functional)
#define ___SYM_jazz_2e_presence_2e_remotable_2e_IOR ___SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR)
#define ___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR ___SYM(15,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
#define ___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class ___SYM(16,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
#define ___SYM_marshall_2d_object ___SYM(17,___S_marshall_2d_object)
#define ___SYM_nextmethod ___SYM(18,___S_nextmethod)
#define ___SYM_object ___SYM(19,___S_object)
#define ___SYM_output ___SYM(20,___S_output)
#define ___SYM_print ___SYM(21,___S_print)
#define ___SYM_protected ___SYM(22,___S_protected)
#define ___SYM_purpose ___SYM(23,___S_purpose)
#define ___SYM_readably ___SYM(24,___S_readably)
#define ___SYM_reference ___SYM(25,___S_reference)
#define ___SYM_self ___SYM(26,___S_self)
#define ___SYM_stub_2d_interface ___SYM(27,___S_stub_2d_interface)
#define ___SYM_unmarshall_2d_object ___SYM(28,___S_unmarshall_2d_object)
#define ___SYM_uuid ___SYM(29,___S_uuid)
#define ___SYM_values ___SYM(30,___S_values)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.presence.remotable.IOR#")
___DEF_GLO(1,"jazz.presence.remotable.IOR:IOR")
___DEF_GLO(2,"jazz.presence.remotable.IOR:IOR!level")

___DEF_GLO(3,"jazz.presence.remotable.IOR:IOR:get-purpose")

___DEF_GLO(4,"jazz.presence.remotable.IOR:IOR:get-reference")

___DEF_GLO(5,"jazz.presence.remotable.IOR:IOR:get-stub-interface")

___DEF_GLO(6,"jazz.presence.remotable.IOR:IOR:get-uuid")

___DEF_GLO(7,"jazz.presence.remotable.IOR:IOR:get-values")

___DEF_GLO(8,"jazz.presence.remotable.IOR:IOR:initialize")

___DEF_GLO(9,"jazz.presence.remotable.IOR:IOR:initialize!node")

___DEF_GLO(10,"jazz.presence.remotable.IOR:IOR:print")

___DEF_GLO(11,"jazz.presence.remotable.IOR:IOR:print!node")

___DEF_GLO(12,"jazz.presence.remotable.IOR:IOR:purpose!offset")

___DEF_GLO(13,"jazz.presence.remotable.IOR:IOR:purpose!slot")

___DEF_GLO(14,"jazz.presence.remotable.IOR:IOR:reference!offset")

___DEF_GLO(15,"jazz.presence.remotable.IOR:IOR:reference!slot")

___DEF_GLO(16,"jazz.presence.remotable.IOR:IOR:stub-interface!offset")

___DEF_GLO(17,"jazz.presence.remotable.IOR:IOR:stub-interface!slot")

___DEF_GLO(18,"jazz.presence.remotable.IOR:IOR:uuid!offset")

___DEF_GLO(19,"jazz.presence.remotable.IOR:IOR:uuid!slot")

___DEF_GLO(20,"jazz.presence.remotable.IOR:IOR:values!offset")

___DEF_GLO(21,"jazz.presence.remotable.IOR:IOR:values!slot")

___DEF_GLO(22,"jazz.presence.remotable.IOR:IOR~Class")

___DEF_GLO(23,"jazz.presence.remotable.IOR:IOR~Class!level")

___DEF_GLO(24,"jazz.presence.remotable.IOR:IOR~Class:marshall-object")

___DEF_GLO(25,"jazz.presence.remotable.IOR:IOR~Class:marshall-object!node")

___DEF_GLO(26,"jazz.presence.remotable.IOR:IOR~Class:unmarshall-object")

___DEF_GLO(27,"jazz.presence.remotable.IOR:IOR~Class:unmarshall-object!node")

___DEF_GLO(28,"jazz/presence/remotable/IOR_get-purpose!d^4")

___DEF_GLO(29,"jazz/presence/remotable/IOR_get-reference!d^7")

___DEF_GLO(30,"jazz/presence/remotable/IOR_get-stub-interface!d^6")

___DEF_GLO(31,"jazz/presence/remotable/IOR_get-uuid!d^5")

___DEF_GLO(32,"jazz/presence/remotable/IOR_get-values!d^8")

___DEF_GLO(33,"jazz.language.runtime.format:format")

___DEF_GLO(34,"jazz.language.runtime.functional:category-identifier")

___DEF_GLO(35,"jazz.language.runtime.functional:serialize-object")

___DEF_GLO(36,"jazz.language.runtime.object:Object")

___DEF_GLO(37,"jazz:add-final-method")
___DEF_GLO(38,"jazz:add-method-node")
___DEF_GLO(39,"jazz:add-slot")
___DEF_GLO(40,"jazz:cache-dispatch")
___DEF_GLO(41,"jazz:class-of")
___DEF_GLO(42,"jazz:global-bound?")
___DEF_GLO(43,"jazz:global-ref")
___DEF_GLO(44,"jazz:load-unit")
___DEF_GLO(45,"jazz:new-class")
___DEF_GLO(46,"jazz:reference-name")
___DEF_GLO(47,"jazz:register-module")
___DEF_GLO(48,"vector-ref")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_ ___GLO(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
#define ___PRM_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_ ___PRM(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR ___GLO(1,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR ___PRM(1,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_21_level ___GLO(2,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_21_level)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_21_level ___PRM(2,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_21_level)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose ___GLO(3,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose ___PRM(3,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference ___GLO(4,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference ___PRM(4,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface ___GLO(5,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface ___PRM(5,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid ___GLO(6,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid ___PRM(6,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values ___GLO(7,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values ___PRM(7,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize ___GLO(8,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize ___PRM(8,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node ___GLO(9,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node ___PRM(9,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print ___GLO(10,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print ___PRM(10,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print_21_node ___GLO(11,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print_21_node)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print_21_node ___PRM(11,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print_21_node)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset ___GLO(12,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset ___PRM(12,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot ___GLO(13,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot ___PRM(13,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset ___GLO(14,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset ___PRM(14,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot ___GLO(15,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot ___PRM(15,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset ___GLO(16,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset ___PRM(16,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot ___GLO(17,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot ___PRM(17,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset ___GLO(18,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset ___PRM(18,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot ___GLO(19,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot ___PRM(19,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset ___GLO(20,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset ___PRM(20,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot ___GLO(21,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot ___PRM(21,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class ___GLO(22,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class ___PRM(22,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_21_level ___GLO(23,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_21_level)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_21_level ___PRM(23,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_21_level)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object ___GLO(24,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object ___PRM(24,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object_21_node ___GLO(25,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object_21_node)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object_21_node ___PRM(25,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object_21_node)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object ___GLO(26,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object ___PRM(26,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object_21_node ___GLO(27,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object_21_node)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object_21_node ___PRM(27,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object_21_node)
#define ___GLO_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4 ___GLO(28,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4)
#define ___PRM_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4 ___PRM(28,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4)
#define ___GLO_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7 ___GLO(29,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7)
#define ___PRM_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7 ___PRM(29,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7)
#define ___GLO_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6 ___GLO(30,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6)
#define ___PRM_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6 ___PRM(30,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6)
#define ___GLO_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5 ___GLO(31,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5)
#define ___PRM_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5 ___PRM(31,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5)
#define ___GLO_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8 ___GLO(32,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8)
#define ___PRM_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8 ___PRM(32,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8)
#define ___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format ___GLO(33,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___PRM_jazz_2e_language_2e_runtime_2e_format_3a_format ___PRM(33,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_category_2d_identifier ___GLO(34,___G_jazz_2e_language_2e_runtime_2e_functional_3a_category_2d_identifier)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_category_2d_identifier ___PRM(34,___G_jazz_2e_language_2e_runtime_2e_functional_3a_category_2d_identifier)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_serialize_2d_object ___GLO(35,___G_jazz_2e_language_2e_runtime_2e_functional_3a_serialize_2d_object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_serialize_2d_object ___PRM(35,___G_jazz_2e_language_2e_runtime_2e_functional_3a_serialize_2d_object)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object ___GLO(36,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object ___PRM(36,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(37,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(37,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(38,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(38,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(39,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(39,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_cache_2d_dispatch ___GLO(40,___G_jazz_3a_cache_2d_dispatch)
#define ___PRM_jazz_3a_cache_2d_dispatch ___PRM(40,___G_jazz_3a_cache_2d_dispatch)
#define ___GLO_jazz_3a_class_2d_of ___GLO(41,___G_jazz_3a_class_2d_of)
#define ___PRM_jazz_3a_class_2d_of ___PRM(41,___G_jazz_3a_class_2d_of)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(42,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(42,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(43,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(43,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(44,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(44,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(45,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(45,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_reference_2d_name ___GLO(46,___G_jazz_3a_reference_2d_name)
#define ___PRM_jazz_3a_reference_2d_name ___PRM(46,___G_jazz_3a_reference_2d_name)
#define ___GLO_jazz_3a_register_2d_module ___GLO(47,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(47,___G_jazz_3a_register_2d_module)
#define ___GLO_vector_2d_ref ___GLO(48,___G_vector_2d_ref)
#define ___PRM_vector_2d_ref ___PRM(48,___G_vector_2d_ref)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_IOR),___REF_SYM(15,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(1,___S_IOR_7e_Class),___REF_SYM(16,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X1,36UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X74,0UL)
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_SUB(109))
               ___VEC0
___DEF_SUB_VEC(___X76,16UL)
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(78))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X79,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X81,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X83,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X85,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X87,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X89,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X91,4UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X93,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X95,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X97,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X99,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X101,4UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X103,4UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X105,4UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X107,4UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(19,___S_object))
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_SUB(126))
               ___VEC0
___DEF_SUB_VEC(___X111,7UL)
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_SUB(114))
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X114,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X118,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X120,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X122,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X124,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SYM(4,___S_content))
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X128,1UL)
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(130))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X131,0UL)
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_SUB(136))
               ___VEC0
___DEF_SUB_VEC(___X133,1UL)
               ___VEC1(___REF_SUB(134))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(135))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X136,0UL)
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_SUB(141))
               ___VEC0
___DEF_SUB_VEC(___X138,1UL)
               ___VEC1(___REF_SUB(139))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(140))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X141,0UL)
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_SUB(146))
               ___VEC0
___DEF_SUB_VEC(___X143,1UL)
               ___VEC1(___REF_SUB(144))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(145))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X146,0UL)
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X148,1UL)
               ___VEC1(___REF_SUB(149))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(150))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X151,0UL)
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X153,4UL)
               ___VEC1(___REF_SUB(154))
               ___VEC1(___REF_SUB(156))
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_SUB(160))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(155))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X156,12UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_FIX(557056))
               ___VEC1(___REF_FIX(524290))
               ___VEC1(___REF_FIX(491524))
               ___VEC1(___REF_FIX(262144))
               ___VEC1(___REF_FIX(229378))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC1(___REF_FIX(32780))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(262196))
               ___VEC0
___DEF_SUB_VEC(___X158,9UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_FIX(262144))
               ___VEC1(___REF_FIX(229378))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC1(___REF_FIX(32780))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(262196))
               ___VEC0
___DEF_SUB_VEC(___X160,9UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_FIX(262144))
               ___VEC1(___REF_FIX(229378))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC1(___REF_FIX(32780))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X162,7UL)
               ___VEC1(___REF_SYM(18,___S_nextmethod))
               ___VEC1(___REF_SYM(30,___S_values))
               ___VEC1(___REF_SYM(25,___S_reference))
               ___VEC1(___REF_SYM(27,___S_stub_2d_interface))
               ___VEC1(___REF_SYM(29,___S_uuid))
               ___VEC1(___REF_SYM(23,___S_purpose))
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_STR(___X163,26UL)
               ___STR8(126,123,123,97,125,32,123,115)
               ___STR8(125,32,123,115,125,32,123,115)
               ___STR8(125,32,123,115,125,32,123,115)
               ___STR2(125,125)
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X165,7UL)
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(178))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(167))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X168,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(655360))
               ___VEC1(___REF_FIX(622594))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(1769534))
               ___VEC0
___DEF_SUB_VEC(___X170,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(1769534))
               ___VEC0
___DEF_SUB_VEC(___X172,6UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(13,___S_jazz_2e_language_2e_runtime_2e_functional))
               ___VEC1(___REF_FIX(1184623))
               ___VEC0
___DEF_SUB_VEC(___X174,6UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(13,___S_jazz_2e_language_2e_runtime_2e_functional))
               ___VEC1(___REF_FIX(136047))
               ___VEC0
___DEF_SUB_VEC(___X176,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(262205))
               ___VEC0
___DEF_SUB_VEC(___X178,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR))
               ___VEC1(___REF_FIX(262205))
               ___VEC0
___DEF_SUB_VEC(___X180,4UL)
               ___VEC1(___REF_SYM(24,___S_readably))
               ___VEC1(___REF_SYM(20,___S_output))
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC1(___REF_SYM(3,___S_category))
               ___VEC0
___DEF_SUB_VEC(___X181,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL(___L35_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L7_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L8_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L9_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L10_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L11_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L12_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L13_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L14_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL(___L15_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL(___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_M_HLBL(___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_M_HLBL(___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_M_HLBL(___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_P_HLBL(___L35_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_STK(1,___SYM_jazz_2e_presence_2e_remotable_2e_IOR)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),47,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(28,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4,___FAL)
   ___SET_R2(___LBL(35))
   ___SET_R1(___SYM_get_2d_purpose)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(28,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4,___R1)
   ___SET_GLO(31,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5,___FAL)
   ___SET_R2(___LBL(34))
   ___SET_R1(___SYM_get_2d_uuid)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(31,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5,___R1)
   ___SET_GLO(30,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6,___FAL)
   ___SET_R2(___LBL(33))
   ___SET_R1(___SYM_get_2d_stub_2d_interface)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(30,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6,___R1)
   ___SET_GLO(29,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7,___FAL)
   ___SET_R2(___LBL(32))
   ___SET_R1(___SYM_get_2d_reference)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(29,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7,___R1)
   ___SET_GLO(32,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8,___FAL)
   ___SET_R2(___LBL(31))
   ___SET_R1(___SYM_get_2d_values)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(32,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8,___R1)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L39_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
   ___SET_R0(___LBL(11))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),45,___G_jazz_3a_new_2d_class)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___GOTO(___L36_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_GLBL(___L36_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(22,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class,___FIX(11L)))
   ___SET_GLO(23,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_21_level,___R1)
   ___SET_GLO(24,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___PRC(38))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_R2(___SYM_marshall_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(25,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object_21_node,___R1)
   ___SET_GLO(26,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___PRC(55))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_R2(___SYM_unmarshall_2d_object)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(27,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object_21_node,___R1)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L38_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(16))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),45,___G_jazz_3a_new_2d_class)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___GOTO(___L37_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
___DEF_GLBL(___L37_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(1,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_purpose)
   ___SET_R0(___LBL(18))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(13,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_slot,___FIX(2L)))
   ___SET_GLO(12,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset,___R1)
   ___SET_GLO(3,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose,___PRC(63))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
   ___SET_R2(___SYM_get_2d_purpose)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_uuid)
   ___SET_R0(___LBL(20))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(19,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_slot,___FIX(2L)))
   ___SET_GLO(18,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset,___R1)
   ___SET_GLO(6,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid,___PRC(65))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
   ___SET_R2(___SYM_get_2d_uuid)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_stub_2d_interface)
   ___SET_R0(___LBL(22))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(17,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_slot,___FIX(2L)))
   ___SET_GLO(16,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset,___R1)
   ___SET_GLO(5,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface,___PRC(67))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
   ___SET_R2(___SYM_get_2d_stub_2d_interface)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_reference)
   ___SET_R0(___LBL(24))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(15,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_slot,___FIX(2L)))
   ___SET_GLO(14,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset,___R1)
   ___SET_GLO(4,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference,___PRC(69))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
   ___SET_R2(___SYM_get_2d_reference)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_values)
   ___SET_R0(___LBL(26))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(21,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_slot,___FIX(2L)))
   ___SET_GLO(20,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset,___R1)
   ___SET_GLO(7,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values,___PRC(71))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
   ___SET_R2(___SYM_get_2d_values)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(8,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize,___PRC(73))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(9,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node,___R1)
   ___SET_GLO(10,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___PRC(78))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___SET_R2(___SYM_print)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_GLO(11,___G_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print_21_node,___R1)
   ___SET_R1(___VOID)
   ___POLL(30)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L38_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(1),43,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L39_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),43,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(31,1,0,0)
   ___SET_GLO(32,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(32,1,0,0)
   ___SET_GLO(29,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(33,1,0,0)
   ___SET_GLO(30,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(34,1,0,0)
   ___SET_GLO(31,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(35,___L35_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(35,1,0,0)
   ___SET_GLO(28,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 38
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L7_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L8_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L9_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L10_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L11_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L12_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L13_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L14_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___DEF_P_HLBL(___L15_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_jazz_3a_class_2d_of)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),28,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_purpose_21_d_5e_4)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-3))
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),31,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_uuid_21_d_5e_5)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-2,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(6))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(6,___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-2,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(7))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),30,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_stub_2d_interface_21_d_5e_6)
___DEF_SLBL(7,___L7_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-9))
   ___SET_R0(___LBL(8))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(8,___L8_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-9))
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_reference_21_d_5e_7)
___DEF_SLBL(9,___L9_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-9))
   ___SET_R0(___LBL(10))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-4))
___DEF_SLBL(10,___L10_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-9))
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_jazz_2f_presence_2f_remotable_2f_IOR__get_2d_values_21_d_5e_8)
___DEF_SLBL(11,___L11_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-9))
   ___SET_R0(___LBL(12))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-3))
___DEF_SLBL(12,___L12_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___BEGIN_ALLOC_VECTOR(5UL)
   ___ADD_VECTOR_ELEM(0,___STK(-7))
   ___ADD_VECTOR_ELEM(1,___STK(-6))
   ___ADD_VECTOR_ELEM(2,___STK(-5))
   ___ADD_VECTOR_ELEM(3,___STK(-4))
   ___ADD_VECTOR_ELEM(4,___R1)
   ___END_ALLOC_VECTOR(5)
   ___SET_R2(___GET_VECTOR(5))
   ___SET_R1(___STK(-8))
   ___SET_R0(___LBL(14))
   ___ADJFP(-4)
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___JUMPGLOSAFE(___SET_NARGS(2),35,___G_jazz_2e_language_2e_runtime_2e_functional_3a_serialize_2d_object)
___DEF_SLBL(14,___L14_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___POLL(15)
___DEF_SLBL(15,___L15_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object
#undef ___PH_LBL0
#define ___PH_LBL0 55
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_P_HLBL(___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___IF(___NOT(___VECTORP(___R2)))
   ___GOTO(___L17_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_R3(___VECTORLENGTH(___R2))
   ___IF(___NOT(___FIXLT(___FIX(0L),___R3)))
   ___GOTO(___L17_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_R3(___VECTORREF(___R2,___FIX(0L)))
   ___IF(___NOT(___VECTORP(___R2)))
   ___GOTO(___L15_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_R4(___VECTORLENGTH(___R2))
   ___IF(___NOT(___FIXLT(___FIX(1L),___R4)))
   ___GOTO(___L15_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_R4(___VECTORREF(___R2,___FIX(1L)))
   ___IF(___NOT(___VECTORP(___R2)))
   ___GOTO(___L13_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_STK(1,___VECTORLENGTH(___R2))
   ___ADJFP(1)
   ___IF(___NOT(___FIXLT(___FIX(2L),___STK(0))))
   ___GOTO(___L12_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_STK(0,___VECTORREF(___R2,___FIX(2L)))
   ___SET_STK(1,___R1)
   ___SET_R1(___STK(0))
   ___ADJFP(1)
   ___IF(___NOT(___VECTORP(___R2)))
   ___GOTO(___L10_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_STK(-1,___VECTORLENGTH(___R2))
   ___IF(___NOT(___FIXLT(___FIX(3L),___STK(-1))))
   ___GOTO(___L10_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_STK(-1,___VECTORREF(___R2,___FIX(3L)))
   ___SET_STK(1,___R1)
   ___SET_R1(___STK(-1))
   ___ADJFP(1)
   ___IF(___NOT(___VECTORP(___R2)))
   ___GOTO(___L7_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
   ___SET_STK(-2,___VECTORLENGTH(___R2))
   ___IF(___FIXLT(___FIX(4L),___STK(-2)))
   ___GOTO(___L9_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___END_IF
___DEF_GLBL(___L7_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_STK(-2,___R0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R4)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(4L))
   ___SET_R0(___LBL(1))
   ___ADJFP(9)
   ___JUMPPRM(___SET_NARGS(2),___PRM_vector_2d_ref)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L8_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___GOTO(___L8_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L9_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_STK(-2,___VECTORREF(___R2,___FIX(4L)))
   ___SET_STK(1,___R1)
   ___SET_R1(___STK(-2))
   ___BEGIN_ALLOC_VECTOR(6UL)
   ___ADD_VECTOR_ELEM(0,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR)
   ___ADD_VECTOR_ELEM(1,___R3)
   ___ADD_VECTOR_ELEM(2,___R4)
   ___ADD_VECTOR_ELEM(3,___STK(0))
   ___ADD_VECTOR_ELEM(4,___STK(1))
   ___ADD_VECTOR_ELEM(5,___R1)
   ___END_ALLOC_VECTOR(6)
   ___SET_R1(___GET_VECTOR(6))
   ___SUBTYPESET(___R1,___FIX(7L)) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___ADJFP(-3)
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L10_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_STK(-1,___R0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R4)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(3L))
   ___SET_R0(___LBL(3))
   ___ADJFP(10)
   ___JUMPPRM(___SET_NARGS(2),___PRM_vector_2d_ref)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L11_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___GOTO(___L11_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L12_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___ADJFP(-1)
___DEF_GLBL(___L13_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(2L))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_vector_2d_ref)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L14_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___GOTO(___L14_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L15_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(5))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_vector_2d_ref)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L16_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___GOTO(___L16_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L17_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(6))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_vector_2d_ref)
___DEF_SLBL(6,___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___DEF_GLBL(___L18_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
   ___GOTO(___L18_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose
#undef ___PH_LBL0
#define ___PH_LBL0 63
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid
#undef ___PH_LBL0
#define ___PH_LBL0 65
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface
#undef ___PH_LBL0
#define ___PH_LBL0 67
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference
#undef ___PH_LBL0
#define ___PH_LBL0 69
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values
#undef ___PH_LBL0
#define ___PH_LBL0 71
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 73
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
   ___IF_NARGS_EQ(6,___NOTHING)
   ___WRONG_NARGS(0,6,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___STK(-2))
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(1),___R4)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset,___STK(-10))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset,___STK(-9))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset,___STK(-7))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset,___STK(-6))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset,___STK(-5)) ___SET_R1(___STK(-11))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print
#undef ___PH_LBL0
#define ___PH_LBL0 78
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_P_HLBL(___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_P_HLBL(___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___DEF_P_HLBL(___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(9,___R2)
   ___SET_STK(10,___SUB(163))
   ___ADJFP(16)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_jazz_3a_class_2d_of)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___SET_STK(-11,___R1)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_jazz_2e_language_2e_runtime_2e_functional_3a_category_2d_identifier)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_reference_2d_name)
___DEF_SLBL(4,___L4_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___SET_STK(-5,___R1)
   ___SET_STK(-4,___VECTORREF(___STK(-14),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_purpose_21_offset))
   ___SET_STK(-3,___VECTORREF(___STK(-14),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_uuid_21_offset))
   ___SET_R3(___VECTORREF(___STK(-14),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_values_21_offset))
   ___SET_R2(___VECTORREF(___STK(-14),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_reference_21_offset))
   ___SET_R1(___VECTORREF(___STK(-14),___GLO_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_stub_2d_interface_21_offset))
   ___SET_R0(___LBL(5))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(8),33,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___DEF_SLBL(5,___L5_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,"bin:jazz.presence.remotable.IOR#",
___REF_SUB(0),36,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,0,___REF_SUB(75),16,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,9,0,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,9,0,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_marshall_2d_object,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,0,___REF_SUB(110),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class_3a_unmarshall_2d_object,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose,0,___REF_SUB(127),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_purpose,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid,0,___REF_SUB(132),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_uuid,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface,0,___REF_SUB(137),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_stub_2d_interface,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference,0,___REF_SUB(142),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_reference,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values,0,___REF_SUB(147),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_get_2d_values,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize,0,___REF_SUB(152),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize,6,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_initialize,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,0,___REF_SUB(164),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,3,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___OFD(___RETI,16,0,0x3f030fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___IFD(___RETN,13,0,0x30fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___IFD(___RETN,13,0,0x31fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___IFD(___RETN,13,0,0x31fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_3a_print,___IFD(___RETI,8,0,0x3f0fL))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,16,0)
               ___GCMAP1(0x3f030fL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_IOR,"IOR")
___DEF_MOD_SYM(1,___S_IOR_7e_Class,"IOR~Class")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_IOR,"bin:jazz.presence.remotable.IOR")

___DEF_MOD_SYM(3,___S_category,"category")
___DEF_MOD_SYM(4,___S_content,"content")
___DEF_MOD_SYM(5,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(6,___S_get_2d_purpose,"get-purpose")
___DEF_MOD_SYM(7,___S_get_2d_reference,"get-reference")
___DEF_MOD_SYM(8,___S_get_2d_stub_2d_interface,"get-stub-interface")
___DEF_MOD_SYM(9,___S_get_2d_uuid,"get-uuid")
___DEF_MOD_SYM(10,___S_get_2d_values,"get-values")
___DEF_MOD_SYM(11,___S_initialize,"initialize")
___DEF_MOD_SYM(12,___S_jazz,"jazz")
___DEF_MOD_SYM(13,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_MOD_SYM(14,___S_jazz_2e_presence_2e_remotable_2e_IOR,"jazz.presence.remotable.IOR")
___DEF_MOD_SYM(15,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR,"jazz.presence.remotable.IOR:IOR")

___DEF_MOD_SYM(16,___S_jazz_2e_presence_2e_remotable_2e_IOR_3a_IOR_7e_Class,"jazz.presence.remotable.IOR:IOR~Class")

___DEF_MOD_SYM(17,___S_marshall_2d_object,"marshall-object")
___DEF_MOD_SYM(18,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(19,___S_object,"object")
___DEF_MOD_SYM(20,___S_output,"output")
___DEF_MOD_SYM(21,___S_print,"print")
___DEF_MOD_SYM(22,___S_protected,"protected")
___DEF_MOD_SYM(23,___S_purpose,"purpose")
___DEF_MOD_SYM(24,___S_readably,"readably")
___DEF_MOD_SYM(25,___S_reference,"reference")
___DEF_MOD_SYM(26,___S_self,"self")
___DEF_MOD_SYM(27,___S_stub_2d_interface,"stub-interface")
___DEF_MOD_SYM(28,___S_unmarshall_2d_object,"unmarshall-object")
___DEF_MOD_SYM(29,___S_uuid,"uuid")
___DEF_MOD_SYM(30,___S_values,"values")
___END_MOD_SYM_KEY

#endif
