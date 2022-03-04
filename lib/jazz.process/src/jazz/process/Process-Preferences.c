#ifdef ___LINKER_INFO
; File: "Process-Preferences.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.process.Process-Preferences"
(("bin:jazz.process.Process-Preferences"))
(
"<install>"
"Process-Preferences"
"Process-Preferences~Class"
"active-context"
"bin:jazz.process.Process-Preferences"
"class-form"
"context"
"current-directory"
"foundation.dialect"
"get-active-context"
"get-class-descriptor"
"get-class-form"
"get-class-forms"
"get-current-directory"
"get-protocols"
"jazz"
"jazz.markup"
"jazz.preferences"
"jazz.process.Process-Preferences"
"jazz.process.Process-Preferences:Process-Preferences"
"jazz.process.Process-Preferences:Process-Preferences~Class"
"jazz.process.Process-Preferences:Process-Preferences~Class:class-form"
"jazz.process.descriptors"
"loaded?"
"nextmethod"
"obj^8"
"protected"
"protocols"
"self"
"set-active-context"
"set-class-form"
"set-current-directory"
"set-protocols"
"symbol"
"val^7"
)
(
"context"
"title"
)
(
"bin:jazz.process.Process-Preferences#"
"jazz.process.Process-Preferences:Process-Preferences"
"jazz.process.Process-Preferences:Process-Preferences:active-context!initialize"
"jazz.process.Process-Preferences:Process-Preferences:active-context!offset"
"jazz.process.Process-Preferences:Process-Preferences:active-context!slot"
"jazz.process.Process-Preferences:Process-Preferences:current-directory!initialize"
"jazz.process.Process-Preferences:Process-Preferences:current-directory!offset"
"jazz.process.Process-Preferences:Process-Preferences:current-directory!slot"
"jazz.process.Process-Preferences:Process-Preferences:get-active-context"
"jazz.process.Process-Preferences:Process-Preferences:get-current-directory"
"jazz.process.Process-Preferences:Process-Preferences:get-protocols"
"jazz.process.Process-Preferences:Process-Preferences:protocols!initialize"
"jazz.process.Process-Preferences:Process-Preferences:protocols!offset"
"jazz.process.Process-Preferences:Process-Preferences:protocols!slot"
"jazz.process.Process-Preferences:Process-Preferences:set-active-context"
"jazz.process.Process-Preferences:Process-Preferences:set-current-directory"
"jazz.process.Process-Preferences:Process-Preferences:set-protocols"
"jazz.process.Process-Preferences:Process-Preferences~Class"
"jazz.process.Process-Preferences:Process-Preferences~Class:class-form"
"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-descriptor"
"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-form"
"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-forms"
"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-forms!node"
"jazz.process.Process-Preferences:Process-Preferences~Class:set-class-form"
"jazz.process.descriptors:Process-Preferences-Descriptor:autoload"
)
(
"jazz.process.Process-Preferences:Process-Preferences!level"
"jazz.process.Process-Preferences:Process-Preferences~Class!level"
"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-descriptor!node"
"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-form!node"
"jazz.process.Process-Preferences:Process-Preferences~Class:set-class-form!node"
)
(
"error"
"jazz.markup:construct-form"
"jazz.markup:get-class-form-with-origin"
"jazz.markup:locators-ref"
"jazz.preferences:Preferences"
"jazz.process.descriptors:Process-Preferences-Descriptor"
"jazz:Class"
"jazz:Unspecified-Value"
"jazz:add-field"
"jazz:add-final-method"
"jazz:add-method-node"
"jazz:add-property"
"jazz:class-of"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:initialize-slots"
"jazz:load-unit"
"jazz:new-class"
"jazz:new-definition"
"jazz:register-module"
"list->table"
"make-vector"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.process.Process-Preferences"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_process_2e_Process_2d_Preferences
#define ___MH_PROC ___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 35
#define ___KEYCOUNT 2
#define ___GLOCOUNT 52
#define ___SUPCOUNT 30
#define ___CNSCOUNT 14
#define ___SUBCOUNT 200
#define ___LBLCOUNT 91
#define ___MODDESCR ___REF_SUB(199)
#include "gambit.h"

___NEED_SYM(___S__3c_install_3e_)
___NEED_SYM(___S_Process_2d_Preferences)
___NEED_SYM(___S_Process_2d_Preferences_7e_Class)
___NEED_SYM(___S_active_2d_context)
___NEED_SYM(___S_bin_3a_jazz_2e_process_2e_Process_2d_Preferences)
___NEED_SYM(___S_class_2d_form)
___NEED_SYM(___S_context)
___NEED_SYM(___S_current_2d_directory)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_active_2d_context)
___NEED_SYM(___S_get_2d_class_2d_descriptor)
___NEED_SYM(___S_get_2d_class_2d_form)
___NEED_SYM(___S_get_2d_class_2d_forms)
___NEED_SYM(___S_get_2d_current_2d_directory)
___NEED_SYM(___S_get_2d_protocols)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_markup)
___NEED_SYM(___S_jazz_2e_preferences)
___NEED_SYM(___S_jazz_2e_process_2e_Process_2d_Preferences)
___NEED_SYM(___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
___NEED_SYM(___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
___NEED_SYM(___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
___NEED_SYM(___S_jazz_2e_process_2e_descriptors)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_obj_5e_8)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_protocols)
___NEED_SYM(___S_self)
___NEED_SYM(___S_set_2d_active_2d_context)
___NEED_SYM(___S_set_2d_class_2d_form)
___NEED_SYM(___S_set_2d_current_2d_directory)
___NEED_SYM(___S_set_2d_protocols)
___NEED_SYM(___S_symbol)
___NEED_SYM(___S_val_5e_7)

___NEED_KEY(___K_context)
___NEED_KEY(___K_title)

___NEED_GLO(___G_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___NEED_GLO(___G_error)
___NEED_GLO(___G_jazz_2e_markup_3a_construct_2d_form)
___NEED_GLO(___G_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin)
___NEED_GLO(___G_jazz_2e_markup_3a_locators_2d_ref)
___NEED_GLO(___G_jazz_2e_preferences_3a_Preferences)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_21_level)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor_21_node)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form_21_node)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
___NEED_GLO(___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form_21_node)
___NEED_GLO(___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor)
___NEED_GLO(___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload)
___NEED_GLO(___G_jazz_3a_Class)
___NEED_GLO(___G_jazz_3a_Unspecified_2d_Value)
___NEED_GLO(___G_jazz_3a_add_2d_field)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_property)
___NEED_GLO(___G_jazz_3a_class_2d_of)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_initialize_2d_slots)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_new_2d_definition)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_list_2d__3e_table)
___NEED_GLO(___G_make_2d_vector)

___BEGIN_SYM
___DEF_SYM(0,___S__3c_install_3e_,"<install>")
___DEF_SYM(1,___S_Process_2d_Preferences,"Process-Preferences")
___DEF_SYM(2,___S_Process_2d_Preferences_7e_Class,"Process-Preferences~Class")
___DEF_SYM(3,___S_active_2d_context,"active-context")
___DEF_SYM(4,___S_bin_3a_jazz_2e_process_2e_Process_2d_Preferences,"bin:jazz.process.Process-Preferences")

___DEF_SYM(5,___S_class_2d_form,"class-form")
___DEF_SYM(6,___S_context,"context")
___DEF_SYM(7,___S_current_2d_directory,"current-directory")
___DEF_SYM(8,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(9,___S_get_2d_active_2d_context,"get-active-context")
___DEF_SYM(10,___S_get_2d_class_2d_descriptor,"get-class-descriptor")
___DEF_SYM(11,___S_get_2d_class_2d_form,"get-class-form")
___DEF_SYM(12,___S_get_2d_class_2d_forms,"get-class-forms")
___DEF_SYM(13,___S_get_2d_current_2d_directory,"get-current-directory")
___DEF_SYM(14,___S_get_2d_protocols,"get-protocols")
___DEF_SYM(15,___S_jazz,"jazz")
___DEF_SYM(16,___S_jazz_2e_markup,"jazz.markup")
___DEF_SYM(17,___S_jazz_2e_preferences,"jazz.preferences")
___DEF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences,"jazz.process.Process-Preferences")

___DEF_SYM(19,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences,"jazz.process.Process-Preferences:Process-Preferences")

___DEF_SYM(20,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class,"jazz.process.Process-Preferences:Process-Preferences~Class")

___DEF_SYM(21,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form,"jazz.process.Process-Preferences:Process-Preferences~Class:class-form")

___DEF_SYM(22,___S_jazz_2e_process_2e_descriptors,"jazz.process.descriptors")
___DEF_SYM(23,___S_loaded_3f_,"loaded?")
___DEF_SYM(24,___S_nextmethod,"nextmethod")
___DEF_SYM(25,___S_obj_5e_8,"obj^8")
___DEF_SYM(26,___S_protected,"protected")
___DEF_SYM(27,___S_protocols,"protocols")
___DEF_SYM(28,___S_self,"self")
___DEF_SYM(29,___S_set_2d_active_2d_context,"set-active-context")
___DEF_SYM(30,___S_set_2d_class_2d_form,"set-class-form")
___DEF_SYM(31,___S_set_2d_current_2d_directory,"set-current-directory")
___DEF_SYM(32,___S_set_2d_protocols,"set-protocols")
___DEF_SYM(33,___S_symbol,"symbol")
___DEF_SYM(34,___S_val_5e_7,"val^7")
___END_SYM

#define ___SYM__3c_install_3e_ ___SYM(0,___S__3c_install_3e_)
#define ___SYM_Process_2d_Preferences ___SYM(1,___S_Process_2d_Preferences)
#define ___SYM_Process_2d_Preferences_7e_Class ___SYM(2,___S_Process_2d_Preferences_7e_Class)
#define ___SYM_active_2d_context ___SYM(3,___S_active_2d_context)
#define ___SYM_bin_3a_jazz_2e_process_2e_Process_2d_Preferences ___SYM(4,___S_bin_3a_jazz_2e_process_2e_Process_2d_Preferences)
#define ___SYM_class_2d_form ___SYM(5,___S_class_2d_form)
#define ___SYM_context ___SYM(6,___S_context)
#define ___SYM_current_2d_directory ___SYM(7,___S_current_2d_directory)
#define ___SYM_foundation_2e_dialect ___SYM(8,___S_foundation_2e_dialect)
#define ___SYM_get_2d_active_2d_context ___SYM(9,___S_get_2d_active_2d_context)
#define ___SYM_get_2d_class_2d_descriptor ___SYM(10,___S_get_2d_class_2d_descriptor)
#define ___SYM_get_2d_class_2d_form ___SYM(11,___S_get_2d_class_2d_form)
#define ___SYM_get_2d_class_2d_forms ___SYM(12,___S_get_2d_class_2d_forms)
#define ___SYM_get_2d_current_2d_directory ___SYM(13,___S_get_2d_current_2d_directory)
#define ___SYM_get_2d_protocols ___SYM(14,___S_get_2d_protocols)
#define ___SYM_jazz ___SYM(15,___S_jazz)
#define ___SYM_jazz_2e_markup ___SYM(16,___S_jazz_2e_markup)
#define ___SYM_jazz_2e_preferences ___SYM(17,___S_jazz_2e_preferences)
#define ___SYM_jazz_2e_process_2e_Process_2d_Preferences ___SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences)
#define ___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences ___SYM(19,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
#define ___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class ___SYM(20,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
#define ___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form ___SYM(21,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
#define ___SYM_jazz_2e_process_2e_descriptors ___SYM(22,___S_jazz_2e_process_2e_descriptors)
#define ___SYM_loaded_3f_ ___SYM(23,___S_loaded_3f_)
#define ___SYM_nextmethod ___SYM(24,___S_nextmethod)
#define ___SYM_obj_5e_8 ___SYM(25,___S_obj_5e_8)
#define ___SYM_protected ___SYM(26,___S_protected)
#define ___SYM_protocols ___SYM(27,___S_protocols)
#define ___SYM_self ___SYM(28,___S_self)
#define ___SYM_set_2d_active_2d_context ___SYM(29,___S_set_2d_active_2d_context)
#define ___SYM_set_2d_class_2d_form ___SYM(30,___S_set_2d_class_2d_form)
#define ___SYM_set_2d_current_2d_directory ___SYM(31,___S_set_2d_current_2d_directory)
#define ___SYM_set_2d_protocols ___SYM(32,___S_set_2d_protocols)
#define ___SYM_symbol ___SYM(33,___S_symbol)
#define ___SYM_val_5e_7 ___SYM(34,___S_val_5e_7)

___BEGIN_KEY
___DEF_KEY(0,___K_context,"context")
___DEF_KEY(1,___K_title,"title")
___END_KEY

#define ___KEY_context ___KEY(0,___K_context)
#define ___KEY_title ___KEY(1,___K_title)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.process.Process-Preferences#")

___DEF_GLO(1,"jazz.process.Process-Preferences:Process-Preferences")

___DEF_GLO(2,"jazz.process.Process-Preferences:Process-Preferences!level")

___DEF_GLO(3,"jazz.process.Process-Preferences:Process-Preferences:active-context!initialize")

___DEF_GLO(4,"jazz.process.Process-Preferences:Process-Preferences:active-context!offset")

___DEF_GLO(5,"jazz.process.Process-Preferences:Process-Preferences:active-context!slot")

___DEF_GLO(6,"jazz.process.Process-Preferences:Process-Preferences:current-directory!initialize")

___DEF_GLO(7,"jazz.process.Process-Preferences:Process-Preferences:current-directory!offset")

___DEF_GLO(8,"jazz.process.Process-Preferences:Process-Preferences:current-directory!slot")

___DEF_GLO(9,"jazz.process.Process-Preferences:Process-Preferences:get-active-context")

___DEF_GLO(10,"jazz.process.Process-Preferences:Process-Preferences:get-current-directory")

___DEF_GLO(11,"jazz.process.Process-Preferences:Process-Preferences:get-protocols")

___DEF_GLO(12,"jazz.process.Process-Preferences:Process-Preferences:protocols!initialize")

___DEF_GLO(13,"jazz.process.Process-Preferences:Process-Preferences:protocols!offset")

___DEF_GLO(14,"jazz.process.Process-Preferences:Process-Preferences:protocols!slot")

___DEF_GLO(15,"jazz.process.Process-Preferences:Process-Preferences:set-active-context")

___DEF_GLO(16,"jazz.process.Process-Preferences:Process-Preferences:set-current-directory")

___DEF_GLO(17,"jazz.process.Process-Preferences:Process-Preferences:set-protocols")

___DEF_GLO(18,"jazz.process.Process-Preferences:Process-Preferences~Class")

___DEF_GLO(19,"jazz.process.Process-Preferences:Process-Preferences~Class!level")

___DEF_GLO(20,"jazz.process.Process-Preferences:Process-Preferences~Class:class-form")

___DEF_GLO(21,"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-descriptor")

___DEF_GLO(22,"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-descriptor!node")

___DEF_GLO(23,"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-form")

___DEF_GLO(24,"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-form!node")

___DEF_GLO(25,"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-forms")

___DEF_GLO(26,"jazz.process.Process-Preferences:Process-Preferences~Class:get-class-forms!node")

___DEF_GLO(27,"jazz.process.Process-Preferences:Process-Preferences~Class:set-class-form")

___DEF_GLO(28,"jazz.process.Process-Preferences:Process-Preferences~Class:set-class-form!node")

___DEF_GLO(29,"jazz.process.descriptors:Process-Preferences-Descriptor:autoload")

___DEF_GLO(30,"error")
___DEF_GLO(31,"jazz.markup:construct-form")
___DEF_GLO(32,"jazz.markup:get-class-form-with-origin")

___DEF_GLO(33,"jazz.markup:locators-ref")
___DEF_GLO(34,"jazz.preferences:Preferences")
___DEF_GLO(35,"jazz.process.descriptors:Process-Preferences-Descriptor")

___DEF_GLO(36,"jazz:Class")
___DEF_GLO(37,"jazz:Unspecified-Value")
___DEF_GLO(38,"jazz:add-field")
___DEF_GLO(39,"jazz:add-final-method")
___DEF_GLO(40,"jazz:add-method-node")
___DEF_GLO(41,"jazz:add-property")
___DEF_GLO(42,"jazz:class-of")
___DEF_GLO(43,"jazz:global-bound?")
___DEF_GLO(44,"jazz:global-ref")
___DEF_GLO(45,"jazz:initialize-slots")
___DEF_GLO(46,"jazz:load-unit")
___DEF_GLO(47,"jazz:new-class")
___DEF_GLO(48,"jazz:new-definition")
___DEF_GLO(49,"jazz:register-module")
___DEF_GLO(50,"list->table")
___DEF_GLO(51,"make-vector")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_ ___GLO(0,___G_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
#define ___PRM_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_ ___PRM(0,___G_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences ___GLO(1,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences ___PRM(1,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_21_level ___GLO(2,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_21_level)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_21_level ___PRM(2,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_21_level)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize ___GLO(3,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize ___PRM(3,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset ___GLO(4,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset ___PRM(4,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot ___GLO(5,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot ___PRM(5,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize ___GLO(6,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize ___PRM(6,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset ___GLO(7,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset ___PRM(7,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot ___GLO(8,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot ___PRM(8,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context ___GLO(9,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context ___PRM(9,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory ___GLO(10,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory ___PRM(10,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols ___GLO(11,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols ___PRM(11,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize ___GLO(12,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize ___PRM(12,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset ___GLO(13,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset ___PRM(13,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot ___GLO(14,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot ___PRM(14,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context ___GLO(15,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context ___PRM(15,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory ___GLO(16,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory ___PRM(16,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols ___GLO(17,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols ___PRM(17,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class ___GLO(18,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class ___PRM(18,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_21_level ___GLO(19,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_21_level)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_21_level ___PRM(19,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_21_level)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form ___GLO(20,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form ___PRM(20,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor ___GLO(21,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor ___PRM(21,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor_21_node ___GLO(22,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor_21_node)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor_21_node ___PRM(22,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor_21_node)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form ___GLO(23,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form ___PRM(23,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form_21_node ___GLO(24,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form_21_node)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form_21_node ___PRM(24,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form_21_node)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms ___GLO(25,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms ___PRM(25,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node ___GLO(26,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node ___PRM(26,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form ___GLO(27,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form ___PRM(27,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
#define ___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form_21_node ___GLO(28,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form_21_node)
#define ___PRM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form_21_node ___PRM(28,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form_21_node)
#define ___GLO_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload ___GLO(29,___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload)
#define ___PRM_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload ___PRM(29,___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload)
#define ___GLO_error ___GLO(30,___G_error)
#define ___PRM_error ___PRM(30,___G_error)
#define ___GLO_jazz_2e_markup_3a_construct_2d_form ___GLO(31,___G_jazz_2e_markup_3a_construct_2d_form)
#define ___PRM_jazz_2e_markup_3a_construct_2d_form ___PRM(31,___G_jazz_2e_markup_3a_construct_2d_form)
#define ___GLO_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin ___GLO(32,___G_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin)
#define ___PRM_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin ___PRM(32,___G_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin)
#define ___GLO_jazz_2e_markup_3a_locators_2d_ref ___GLO(33,___G_jazz_2e_markup_3a_locators_2d_ref)
#define ___PRM_jazz_2e_markup_3a_locators_2d_ref ___PRM(33,___G_jazz_2e_markup_3a_locators_2d_ref)
#define ___GLO_jazz_2e_preferences_3a_Preferences ___GLO(34,___G_jazz_2e_preferences_3a_Preferences)
#define ___PRM_jazz_2e_preferences_3a_Preferences ___PRM(34,___G_jazz_2e_preferences_3a_Preferences)
#define ___GLO_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor ___GLO(35,___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor)
#define ___PRM_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor ___PRM(35,___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor)
#define ___GLO_jazz_3a_Class ___GLO(36,___G_jazz_3a_Class)
#define ___PRM_jazz_3a_Class ___PRM(36,___G_jazz_3a_Class)
#define ___GLO_jazz_3a_Unspecified_2d_Value ___GLO(37,___G_jazz_3a_Unspecified_2d_Value)
#define ___PRM_jazz_3a_Unspecified_2d_Value ___PRM(37,___G_jazz_3a_Unspecified_2d_Value)
#define ___GLO_jazz_3a_add_2d_field ___GLO(38,___G_jazz_3a_add_2d_field)
#define ___PRM_jazz_3a_add_2d_field ___PRM(38,___G_jazz_3a_add_2d_field)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(39,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(39,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(40,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(40,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_property ___GLO(41,___G_jazz_3a_add_2d_property)
#define ___PRM_jazz_3a_add_2d_property ___PRM(41,___G_jazz_3a_add_2d_property)
#define ___GLO_jazz_3a_class_2d_of ___GLO(42,___G_jazz_3a_class_2d_of)
#define ___PRM_jazz_3a_class_2d_of ___PRM(42,___G_jazz_3a_class_2d_of)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(43,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(43,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(44,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(44,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_initialize_2d_slots ___GLO(45,___G_jazz_3a_initialize_2d_slots)
#define ___PRM_jazz_3a_initialize_2d_slots ___PRM(45,___G_jazz_3a_initialize_2d_slots)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(46,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(46,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(47,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(47,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_new_2d_definition ___GLO(48,___G_jazz_3a_new_2d_definition)
#define ___PRM_jazz_3a_new_2d_definition ___PRM(48,___G_jazz_3a_new_2d_definition)
#define ___GLO_jazz_3a_register_2d_module ___GLO(49,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(49,___G_jazz_3a_register_2d_module)
#define ___GLO_list_2d__3e_table ___GLO(50,___G_list_2d__3e_table)
#define ___PRM_list_2d__3e_table ___PRM(50,___G_list_2d__3e_table)
#define ___GLO_make_2d_vector ___GLO(51,___G_make_2d_vector)
#define ___PRM_make_2d_vector ___PRM(51,___G_make_2d_vector)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(1,___S_Process_2d_Preferences),___REF_SYM(19,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(2,___S_Process_2d_Preferences_7e_Class),___REF_SYM(20,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class))
,___DEF_CNS(___REF_SYM(0,___S__3c_install_3e_),___REF_CNS(5))
,___DEF_CNS(___REF_KEY(1,___K_title),___REF_CNS(6))
,___DEF_CNS(___REF_SUB(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(32771),___REF_NUL)
,___DEF_CNS(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences),___REF_CNS(9))
,___DEF_CNS(___REF_SYM(2,___S_Process_2d_Preferences_7e_Class),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(11,___S_get_2d_class_2d_form),___REF_NUL)
,___DEF_CNS(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(2,___S_Process_2d_Preferences_7e_Class),___REF_CNS(13))
,___DEF_CNS(___REF_SYM(12,___S_get_2d_class_2d_forms),___REF_NUL)
___END_CNS

___DEF_SUB_STR(___X0,7UL)
               ___STR7(80,114,111,99,101,115,115)
___DEF_SUB_VEC(___X1,2UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(97))
               ___VEC0
___DEF_SUB_VEC(___X2,47UL)
               ___VEC1(___REF_SUB(3))
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
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
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
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(4))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(6))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(30))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(34))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(42))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131133))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(60))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(62))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(66))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(68))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(70))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(72))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(78))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X83,3UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X85,3UL)
               ___VEC1(___REF_FIX(41))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X87,3UL)
               ___VEC1(___REF_FIX(42))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_FIX(43))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X91,3UL)
               ___VEC1(___REF_FIX(44))
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_FIX(45))
               ___VEC1(___REF_SUB(94))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X95,3UL)
               ___VEC1(___REF_FIX(46))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_FIX(425988))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X97,3UL)
               ___VEC1(___REF_SYM(33,___S_symbol))
               ___VEC1(___REF_SYM(23,___S_loaded_3f_))
               ___VEC1(___REF_CNS(7))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(102))
               ___VEC0
___DEF_SUB_VEC(___X99,1UL)
               ___VEC1(___REF_SUB(100))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X102,0UL)
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X104,4UL)
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(106))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X107,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X109,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X111,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X113,1UL)
               ___VEC1(___REF_SYM(28,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(128))
               ___VEC0
___DEF_SUB_VEC(___X115,6UL)
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X118,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X120,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X122,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X124,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X126,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SYM(24,___S_nextmethod))
               ___VEC1(___REF_SYM(28,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_KEY(0,___K_context))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_STR(___X130,35UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,40,37,37,99,108,97)
               ___STR8(115,115,63,32,35,58,118,97)
               ___STR8(108,94,55,41,32,102,97,105)
               ___STR3(108,101,100)
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_SUB(153))
               ___VEC0
___DEF_SUB_VEC(___X132,10UL)
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(134))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131133))
               ___VEC0
___DEF_SUB_VEC(___X135,6UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(136))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(327682))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X137,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X139,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(140))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X141,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(142))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X143,6UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X145,6UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(148))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X149,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X151,5UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(262206))
               ___VEC0
___DEF_SUB_VEC(___X153,4UL)
               ___VEC1(___REF_SYM(6,___S_context))
               ___VEC1(___REF_SYM(28,___S_self))
               ___VEC1(___REF_SYM(34,___S_val_5e_7))
               ___VEC1(___REF_SYM(25,___S_obj_5e_8))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_SUB(158))
               ___VEC0
___DEF_SUB_VEC(___X155,1UL)
               ___VEC1(___REF_SUB(156))
               ___VEC0
___DEF_SUB_VEC(___X156,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(157))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X158,0UL)
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_SUB(163))
               ___VEC0
___DEF_SUB_VEC(___X160,1UL)
               ___VEC1(___REF_SUB(161))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X163,0UL)
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_SUB(168))
               ___VEC0
___DEF_SUB_VEC(___X165,1UL)
               ___VEC1(___REF_SUB(166))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(167))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X168,0UL)
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(173))
               ___VEC0
___DEF_SUB_VEC(___X170,1UL)
               ___VEC1(___REF_SUB(171))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(172))
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X173,0UL)
               ___VEC0
___DEF_SUB_VEC(___X174,2UL)
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_SUB(178))
               ___VEC0
___DEF_SUB_VEC(___X175,1UL)
               ___VEC1(___REF_SUB(176))
               ___VEC0
___DEF_SUB_VEC(___X176,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(177))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X178,0UL)
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SUB(180))
               ___VEC1(___REF_SUB(183))
               ___VEC0
___DEF_SUB_VEC(___X180,1UL)
               ___VEC1(___REF_SUB(181))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(182))
               ___VEC0
___DEF_SUB_VEC(___X182,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X183,0UL)
               ___VEC0
___DEF_SUB_VEC(___X184,2UL)
               ___VEC1(___REF_SUB(185))
               ___VEC1(___REF_SUB(188))
               ___VEC0
___DEF_SUB_VEC(___X185,1UL)
               ___VEC1(___REF_SUB(186))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(187))
               ___VEC0
___DEF_SUB_VEC(___X187,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X188,0UL)
               ___VEC0
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_SUB(190))
               ___VEC1(___REF_SUB(193))
               ___VEC0
___DEF_SUB_VEC(___X190,1UL)
               ___VEC1(___REF_SUB(191))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(192))
               ___VEC0
___DEF_SUB_VEC(___X192,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X193,0UL)
               ___VEC0
___DEF_SUB_VEC(___X194,2UL)
               ___VEC1(___REF_SUB(195))
               ___VEC1(___REF_SUB(198))
               ___VEC0
___DEF_SUB_VEC(___X195,1UL)
               ___VEC1(___REF_SUB(196))
               ___VEC0
___DEF_SUB_VEC(___X196,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(197))
               ___VEC0
___DEF_SUB_VEC(___X197,2UL)
               ___VEC1(___REF_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X198,0UL)
               ___VEC0
___DEF_SUB_VEC(___X199,5UL)
               ___VEC1(___REF_SYM(4,___S_bin_3a_jazz_2e_process_2e_Process_2d_Preferences))
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
,___DEF_SUB(___X186)
,___DEF_SUB(___X187)
,___DEF_SUB(___X188)
,___DEF_SUB(___X189)
,___DEF_SUB(___X190)
,___DEF_SUB(___X191)
,___DEF_SUB(___X192)
,___DEF_SUB(___X193)
,___DEF_SUB(___X194)
,___DEF_SUB(___X195)
,___DEF_SUB(___X196)
,___DEF_SUB(___X197)
,___DEF_SUB(___X198)
,___DEF_SUB(___X199)
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L35_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L36_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L37_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L38_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L39_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L40_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L41_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L42_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L43_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L44_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L45_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL(___L46_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_M_HLBL(___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_M_HLBL(___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_M_HLBL(___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_M_HLBL(___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_M_HLBL(___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_M_HLBL(___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_M_HLBL(___L4_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_M_HLBL(___L5_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L4_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L5_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L6_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L7_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L8_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL(___L9_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L35_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L36_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L37_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L38_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L39_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L40_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L41_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L42_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L43_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L44_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L45_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_P_HLBL(___L46_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___SYM_jazz_2e_markup)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___SYM_jazz_2e_preferences)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_STK(1,___SYM_jazz_2e_process_2e_Process_2d_Preferences)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),49,___G_jazz_3a_register_2d_module)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),43)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(29,___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload,___STK(-2))
   ___SET_R1(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(8))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___JUMPGLOSAFE(___SET_NARGS(1),43,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L50_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_preferences_3a_Preferences,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_preferences_3a_Preferences,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(9))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),47,___G_jazz_3a_new_2d_class)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___GOTO(___L47_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_GLBL(___L47_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(18,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class,___FIX(11L)))
   ___SET_GLO(19,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_21_level,___R1)
   ___SET_R1(___NUL)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),50,___G_list_2d__3e_table)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),39)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(-2))
   ___SET_R1(___CNS(4))
   ___SET_R0(___LBL(13))
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___JUMPGLOSAFE(___SET_NARGS(2),31,___G_jazz_2e_markup_3a_construct_2d_form)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(20,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form,___R1)
   ___SET_R2(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
   ___SET_R1(___SYM_class_2d_form)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(2),48,___G_jazz_3a_new_2d_definition)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(2),38,___G_jazz_3a_add_2d_field)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(27,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form,___PRC(49))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
   ___SET_R2(___SYM_set_2d_class_2d_form)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(28,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form_21_node,___R1)
   ___SET_GLO(23,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form,___PRC(51))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
   ___SET_R2(___SYM_get_2d_class_2d_form)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(24,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form_21_node,___R1)
   ___SET_GLO(25,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,___PRC(56))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___SET_R2(___SYM_get_2d_class_2d_forms)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(26,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node,___R1)
   ___SET_GLO(21,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___PRC(63))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_R2(___SYM_get_2d_class_2d_descriptor)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(22,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor_21_node,___R1)
   ___SET_R1(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(1),43,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L49_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_preferences_3a_Preferences)
   ___SET_R1(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(21))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),47,___G_jazz_3a_new_2d_class)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___GOTO(___L48_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_GLBL(___L48_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(1,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_21_level,___R1)
   ___SET_GLO(3,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize,___PRC(74))
   ___SET_STK(1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_STK(2,___SYM_active_2d_context)
   ___SET_STK(3,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
   ___SET_STK(-2,___LBL(38))
   ___SET_R3(___LBL(37))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(23))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),41,___G_jazz_3a_add_2d_property)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(5,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_slot,___FIX(2L)))
   ___SET_GLO(4,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset,___R1)
   ___SET_GLO(9,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context,___PRC(76))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
   ___SET_R2(___SYM_get_2d_active_2d_context)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(3),39,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(15,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context,___PRC(78))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
   ___SET_R2(___SYM_set_2d_active_2d_context)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),39,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(6,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize,___PRC(80))
   ___SET_STK(1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_STK(2,___SYM_current_2d_directory)
   ___SET_STK(3,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
   ___SET_STK(-2,___LBL(36))
   ___SET_R3(___LBL(35))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(26))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),41,___G_jazz_3a_add_2d_property)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(8,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_slot,___FIX(2L)))
   ___SET_GLO(7,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset,___R1)
   ___SET_GLO(10,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory,___PRC(82))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
   ___SET_R2(___SYM_get_2d_current_2d_directory)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(3),39,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(16,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory,___PRC(84))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
   ___SET_R2(___SYM_set_2d_current_2d_directory)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(3),39,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(12,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize,___PRC(86))
   ___SET_STK(1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_STK(2,___SYM_protocols)
   ___SET_STK(3,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
   ___SET_STK(-2,___LBL(34))
   ___SET_R3(___LBL(33))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(29))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),41,___G_jazz_3a_add_2d_property)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(14,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_slot,___FIX(2L)))
   ___SET_GLO(13,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset,___R1)
   ___SET_GLO(11,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols,___PRC(88))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
   ___SET_R2(___SYM_get_2d_protocols)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(30))
   ___JUMPGLOSAFE(___SET_NARGS(3),39,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_GLO(17,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols,___PRC(90))
   ___SET_R3(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
   ___SET_R2(___SYM_set_2d_protocols)
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(31))
   ___JUMPGLOSAFE(___SET_NARGS(3),39,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___POLL(32)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(33,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(34,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(35,___L35_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(35,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(36,___L36_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(36,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(37,___L37_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(37,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(38,___L38_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(38,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L49_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(39,___L39_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(39,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___ADJFP(8)
   ___POLL(40)
___DEF_SLBL(40,___L40_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R0(___LBL(41))
   ___JUMPGLOSAFE(___SET_NARGS(2),33,___G_jazz_2e_markup_3a_locators_2d_ref)
___DEF_SLBL(41,___L41_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___POLL(42)
___DEF_SLBL(42,___L42_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L50_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___SYM_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(43,___L43_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(43,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L51_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___END_IF
   ___GOTO(___L52_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
___DEF_SLBL(44,___L44_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L51_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R1(___GLO_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor)
   ___POLL(45)
___DEF_SLBL(45,___L45_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L52_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_process_2e_descriptors)
   ___ADJFP(8)
   ___POLL(46)
___DEF_SLBL(46,___L46_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_)
   ___SET_R0(___LBL(44))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form
#undef ___PH_LBL0
#define ___PH_LBL0 49
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form)
   ___SET_GLO(20,___G_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form,___R2)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_P_HLBL(___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_P_HLBL(___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___DEF_P_HLBL(___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___CNS(8))
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),32,___G_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin)
___DEF_SLBL(2,___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms
#undef ___PH_LBL0
#define ___PH_LBL0 56
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_P_HLBL(___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_P_HLBL(___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_P_HLBL(___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_P_HLBL(___L4_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___DEF_P_HLBL(___L5_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R2(___CNS(11))
   ___SET_R1(___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),32,___G_jazz_2e_markup_3a_get_2d_class_2d_form_2d_with_2d_origin)
___DEF_SLBL(2,___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(3,___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor
#undef ___PH_LBL0
#define ___PH_LBL0 63
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L4_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L5_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L6_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L7_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L8_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___DEF_P_HLBL(___L9_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___IF_NARGS_EQ(1,___SET_R2(___FAL))
   ___GET_KEY(0,1,0,1,___SUB(129))
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),29,___G_jazz_2e_process_2e_descriptors_3a_Process_2d_Preferences_2d_Descriptor_3a_autoload)
___DEF_SLBL(2,___L2_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_STK(-4,___R1)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_jazz_3a_class_2d_of)
___DEF_SLBL(3,___L3_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_R2(___VECTORREF(___GLO_jazz_3a_Class,___FIX(11L)))
   ___SET_R3(___VECTORREF(___R1,___FIX(11L)))
   ___IF(___NOT(___FIXGE(___R3,___R2)))
   ___GOTO(___L10_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___END_IF
   ___SET_R3(___VECTORREF(___R1,___FIX(4L)))
   ___SET_R3(___VECTORREF(___R3,___R2))
   ___IF(___NOT(___EQP(___R3,___GLO_jazz_3a_Class)))
   ___GOTO(___L10_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___END_IF
   ___SET_R1(___VECTORREF(___STK(-4),___FIX(10L)))
   ___SET_R2(___GLO_jazz_3a_Unspecified_2d_Value)
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM_make_2d_vector)
___DEF_SLBL(4,___L4_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SUBTYPESET(___R1,___FIX(7L)) ___SET_R2(___R1)
   ___VECTORSET(___R2,___FIX(0L),___STK(-4))
   ___SET_STK(-3,___R2)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),45,___G_jazz_3a_initialize_2d_slots)
___DEF_SLBL(5,___L5_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_R1(___STK(-3))
   ___SET_R2(___VECTORREF(___STK(-4),___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(0L)))
   ___SET_R0(___LBL(6))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(6,___L6_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_R1(___STK(-3))
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L10_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___SET_R1(___SUB(130))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),30,___G_error)
___DEF_SLBL(8,___L8_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 74
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context
#undef ___PH_LBL0
#define ___PH_LBL0 76
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context
#undef ___PH_LBL0
#define ___PH_LBL0 78
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context)
   ___VECTORSET(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 80
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory
#undef ___PH_LBL0
#define ___PH_LBL0 82
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory
#undef ___PH_LBL0
#define ___PH_LBL0 84
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory)
   ___VECTORSET(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 86
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols
#undef ___PH_LBL0
#define ___PH_LBL0 88
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols
#undef ___PH_LBL0
#define ___PH_LBL0 90
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols)
   ___VECTORSET(___R1,___GLO_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,"bin:jazz.process.Process-Preferences#",
___REF_SUB(1),47,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,1,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form,0,___REF_SUB(98),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_set_2d_class_2d_form,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form,0,___REF_SUB(103),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_form,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,0,___REF_SUB(114),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_forms,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,0,___REF_SUB(131),10,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_get_2d_class_2d_descriptor,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize,0,___REF_SUB(154),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_active_2d_context_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context,0,___REF_SUB(159),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_active_2d_context,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context,0,___REF_SUB(164),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_active_2d_context,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize,0,___REF_SUB(169),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_current_2d_directory_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory,0,___REF_SUB(174),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_current_2d_directory,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory,0,___REF_SUB(179),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_current_2d_directory,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize,0,___REF_SUB(184),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_protocols_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols,0,___REF_SUB(189),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_get_2d_protocols,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols,0,___REF_SUB(194),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_3a_set_2d_protocols,2,-1)
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_process_2e_Process_2d_Preferences_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S__3c_install_3e_,"<install>")
___DEF_MOD_SYM(1,___S_Process_2d_Preferences,"Process-Preferences")
___DEF_MOD_SYM(2,___S_Process_2d_Preferences_7e_Class,"Process-Preferences~Class")
___DEF_MOD_SYM(3,___S_active_2d_context,"active-context")
___DEF_MOD_SYM(4,___S_bin_3a_jazz_2e_process_2e_Process_2d_Preferences,"bin:jazz.process.Process-Preferences")

___DEF_MOD_SYM(5,___S_class_2d_form,"class-form")
___DEF_MOD_SYM(6,___S_context,"context")
___DEF_MOD_SYM(7,___S_current_2d_directory,"current-directory")
___DEF_MOD_SYM(8,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(9,___S_get_2d_active_2d_context,"get-active-context")
___DEF_MOD_SYM(10,___S_get_2d_class_2d_descriptor,"get-class-descriptor")
___DEF_MOD_SYM(11,___S_get_2d_class_2d_form,"get-class-form")
___DEF_MOD_SYM(12,___S_get_2d_class_2d_forms,"get-class-forms")
___DEF_MOD_SYM(13,___S_get_2d_current_2d_directory,"get-current-directory")
___DEF_MOD_SYM(14,___S_get_2d_protocols,"get-protocols")
___DEF_MOD_SYM(15,___S_jazz,"jazz")
___DEF_MOD_SYM(16,___S_jazz_2e_markup,"jazz.markup")
___DEF_MOD_SYM(17,___S_jazz_2e_preferences,"jazz.preferences")
___DEF_MOD_SYM(18,___S_jazz_2e_process_2e_Process_2d_Preferences,"jazz.process.Process-Preferences")

___DEF_MOD_SYM(19,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences,"jazz.process.Process-Preferences:Process-Preferences")

___DEF_MOD_SYM(20,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class,"jazz.process.Process-Preferences:Process-Preferences~Class")

___DEF_MOD_SYM(21,___S_jazz_2e_process_2e_Process_2d_Preferences_3a_Process_2d_Preferences_7e_Class_3a_class_2d_form,"jazz.process.Process-Preferences:Process-Preferences~Class:class-form")

___DEF_MOD_SYM(22,___S_jazz_2e_process_2e_descriptors,"jazz.process.descriptors")
___DEF_MOD_SYM(23,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(24,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(25,___S_obj_5e_8,"obj^8")
___DEF_MOD_SYM(26,___S_protected,"protected")
___DEF_MOD_SYM(27,___S_protocols,"protocols")
___DEF_MOD_SYM(28,___S_self,"self")
___DEF_MOD_SYM(29,___S_set_2d_active_2d_context,"set-active-context")
___DEF_MOD_SYM(30,___S_set_2d_class_2d_form,"set-class-form")
___DEF_MOD_SYM(31,___S_set_2d_current_2d_directory,"set-current-directory")
___DEF_MOD_SYM(32,___S_set_2d_protocols,"set-protocols")
___DEF_MOD_SYM(33,___S_symbol,"symbol")
___DEF_MOD_SYM(34,___S_val_5e_7,"val^7")
___DEF_MOD_KEY(0,___K_context,"context")
___DEF_MOD_KEY(1,___K_title,"title")
___END_MOD_SYM_KEY

#endif
