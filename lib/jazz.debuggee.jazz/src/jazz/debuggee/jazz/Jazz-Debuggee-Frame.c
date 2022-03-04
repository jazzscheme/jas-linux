#ifdef ___LINKER_INFO
; File: "Jazz-Debuggee-Frame.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame"
(("bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame"))
(
":all"
":lexical"
"Jazz-Debuggee-Frame"
"Jazz-Debuggee-Frame~Class"
"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame"
"cdr^0"
"cdr^1"
"cont"
"continuation"
"foundation.dialect"
"get-continuation"
"get-hidden?"
"get-id"
"get-interpreted?"
"get-location"
"get-name"
"get-variables"
"hidden?"
"id"
"initialize"
"jazz"
"jazz.debuggee.autoload"
"jazz.debuggee.base"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class"
"jazz.inspector"
"kind"
"loaded?"
"location"
"mutable?"
"name"
"nextmethod"
"protected"
"rank"
"self"
"temp.17"
"temp.18"
"value"
"variable"
"variables"
"x.19"
)
(
"mutable?"
)
(
"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame#"
"jazz.debuggee.base:Debuggee-Frame:autoload"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:continuation!offset"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:continuation!slot"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-continuation"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-hidden?"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-id"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-interpreted?"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-location"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-name"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-variables"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:hidden?!offset"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:hidden?!slot"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:id!offset"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:id!slot"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:initialize"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:initialize!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:location!offset"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:location!slot"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:name!offset"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:name!slot"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class"
)
(
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame!level"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-continuation!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-hidden?!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-id!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-interpreted?!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-location!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-name!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-variables!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class!level"
)
(
"%%jazz.language.runtime.functional:naturals"
"append"
"car"
"cdr"
"jazz.debuggee.base:Debuggee-Frame"
"jazz.inspector:package-info"
"jazz:add-method-node"
"jazz:add-slot"
"jazz:boolean"
"jazz:get-continuation-dynamic-environment"
"jazz:get-continuation-lexical-environment"
"jazz:get-continuation-location"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:interpreted-continuation?"
"jazz:load-unit"
"jazz:new-class"
"jazz:register-module"
"jazz:serial->object"
"length"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame
#define ___MH_PROC ___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 42
#define ___KEYCOUNT 1
#define ___GLOCOUNT 52
#define ___SUPCOUNT 32
#define ___CNSCOUNT 5
#define ___SUBCOUNT 184
#define ___LBLCOUNT 87
#define ___OFDCOUNT 5
#define ___MODDESCR ___REF_SUB(183)
#include "gambit.h"

___NEED_SYM(___S__3a_all)
___NEED_SYM(___S__3a_lexical)
___NEED_SYM(___S_Jazz_2d_Debuggee_2d_Frame)
___NEED_SYM(___S_Jazz_2d_Debuggee_2d_Frame_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame)
___NEED_SYM(___S_cdr_5e_0)
___NEED_SYM(___S_cdr_5e_1)
___NEED_SYM(___S_cont)
___NEED_SYM(___S_continuation)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_continuation)
___NEED_SYM(___S_get_2d_hidden_3f_)
___NEED_SYM(___S_get_2d_id)
___NEED_SYM(___S_get_2d_interpreted_3f_)
___NEED_SYM(___S_get_2d_location)
___NEED_SYM(___S_get_2d_name)
___NEED_SYM(___S_get_2d_variables)
___NEED_SYM(___S_hidden_3f_)
___NEED_SYM(___S_id)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_debuggee_2e_autoload)
___NEED_SYM(___S_jazz_2e_debuggee_2e_base)
___NEED_SYM(___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame)
___NEED_SYM(___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
___NEED_SYM(___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
___NEED_SYM(___S_jazz_2e_inspector)
___NEED_SYM(___S_kind)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_location)
___NEED_SYM(___S_mutable_3f_)
___NEED_SYM(___S_name)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_rank)
___NEED_SYM(___S_self)
___NEED_SYM(___S_temp_2e_17)
___NEED_SYM(___S_temp_2e_18)
___NEED_SYM(___S_value)
___NEED_SYM(___S_variable)
___NEED_SYM(___S_variables)
___NEED_SYM(___S_x_2e_19)

___NEED_KEY(___K_mutable_3f_)

___NEED_GLO(___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_naturals)
___NEED_GLO(___G_append)
___NEED_GLO(___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___NEED_GLO(___G_car)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame)
___NEED_GLO(___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_21_level)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f__21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f__21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_inspector_3a_package_2d_info)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_boolean)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_location)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_interpreted_2d_continuation_3f_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_serial_2d__3e_object)
___NEED_GLO(___G_length)

___BEGIN_SYM
___DEF_SYM(0,___S__3a_all,":all")
___DEF_SYM(1,___S__3a_lexical,":lexical")
___DEF_SYM(2,___S_Jazz_2d_Debuggee_2d_Frame,"Jazz-Debuggee-Frame")
___DEF_SYM(3,___S_Jazz_2d_Debuggee_2d_Frame_7e_Class,"Jazz-Debuggee-Frame~Class")
___DEF_SYM(4,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame")

___DEF_SYM(5,___S_cdr_5e_0,"cdr^0")
___DEF_SYM(6,___S_cdr_5e_1,"cdr^1")
___DEF_SYM(7,___S_cont,"cont")
___DEF_SYM(8,___S_continuation,"continuation")
___DEF_SYM(9,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(10,___S_get_2d_continuation,"get-continuation")
___DEF_SYM(11,___S_get_2d_hidden_3f_,"get-hidden?")
___DEF_SYM(12,___S_get_2d_id,"get-id")
___DEF_SYM(13,___S_get_2d_interpreted_3f_,"get-interpreted?")
___DEF_SYM(14,___S_get_2d_location,"get-location")
___DEF_SYM(15,___S_get_2d_name,"get-name")
___DEF_SYM(16,___S_get_2d_variables,"get-variables")
___DEF_SYM(17,___S_hidden_3f_,"hidden?")
___DEF_SYM(18,___S_id,"id")
___DEF_SYM(19,___S_initialize,"initialize")
___DEF_SYM(20,___S_jazz,"jazz")
___DEF_SYM(21,___S_jazz_2e_debuggee_2e_autoload,"jazz.debuggee.autoload")
___DEF_SYM(22,___S_jazz_2e_debuggee_2e_base,"jazz.debuggee.base")
___DEF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame,"jazz.debuggee.jazz.Jazz-Debuggee-Frame")

___DEF_SYM(24,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame")

___DEF_SYM(25,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class")

___DEF_SYM(26,___S_jazz_2e_inspector,"jazz.inspector")
___DEF_SYM(27,___S_kind,"kind")
___DEF_SYM(28,___S_loaded_3f_,"loaded?")
___DEF_SYM(29,___S_location,"location")
___DEF_SYM(30,___S_mutable_3f_,"mutable?")
___DEF_SYM(31,___S_name,"name")
___DEF_SYM(32,___S_nextmethod,"nextmethod")
___DEF_SYM(33,___S_protected,"protected")
___DEF_SYM(34,___S_rank,"rank")
___DEF_SYM(35,___S_self,"self")
___DEF_SYM(36,___S_temp_2e_17,"temp.17")
___DEF_SYM(37,___S_temp_2e_18,"temp.18")
___DEF_SYM(38,___S_value,"value")
___DEF_SYM(39,___S_variable,"variable")
___DEF_SYM(40,___S_variables,"variables")
___DEF_SYM(41,___S_x_2e_19,"x.19")
___END_SYM

#define ___SYM__3a_all ___SYM(0,___S__3a_all)
#define ___SYM__3a_lexical ___SYM(1,___S__3a_lexical)
#define ___SYM_Jazz_2d_Debuggee_2d_Frame ___SYM(2,___S_Jazz_2d_Debuggee_2d_Frame)
#define ___SYM_Jazz_2d_Debuggee_2d_Frame_7e_Class ___SYM(3,___S_Jazz_2d_Debuggee_2d_Frame_7e_Class)
#define ___SYM_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame ___SYM(4,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame)
#define ___SYM_cdr_5e_0 ___SYM(5,___S_cdr_5e_0)
#define ___SYM_cdr_5e_1 ___SYM(6,___S_cdr_5e_1)
#define ___SYM_cont ___SYM(7,___S_cont)
#define ___SYM_continuation ___SYM(8,___S_continuation)
#define ___SYM_foundation_2e_dialect ___SYM(9,___S_foundation_2e_dialect)
#define ___SYM_get_2d_continuation ___SYM(10,___S_get_2d_continuation)
#define ___SYM_get_2d_hidden_3f_ ___SYM(11,___S_get_2d_hidden_3f_)
#define ___SYM_get_2d_id ___SYM(12,___S_get_2d_id)
#define ___SYM_get_2d_interpreted_3f_ ___SYM(13,___S_get_2d_interpreted_3f_)
#define ___SYM_get_2d_location ___SYM(14,___S_get_2d_location)
#define ___SYM_get_2d_name ___SYM(15,___S_get_2d_name)
#define ___SYM_get_2d_variables ___SYM(16,___S_get_2d_variables)
#define ___SYM_hidden_3f_ ___SYM(17,___S_hidden_3f_)
#define ___SYM_id ___SYM(18,___S_id)
#define ___SYM_initialize ___SYM(19,___S_initialize)
#define ___SYM_jazz ___SYM(20,___S_jazz)
#define ___SYM_jazz_2e_debuggee_2e_autoload ___SYM(21,___S_jazz_2e_debuggee_2e_autoload)
#define ___SYM_jazz_2e_debuggee_2e_base ___SYM(22,___S_jazz_2e_debuggee_2e_base)
#define ___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame ___SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame)
#define ___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame ___SYM(24,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
#define ___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class ___SYM(25,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
#define ___SYM_jazz_2e_inspector ___SYM(26,___S_jazz_2e_inspector)
#define ___SYM_kind ___SYM(27,___S_kind)
#define ___SYM_loaded_3f_ ___SYM(28,___S_loaded_3f_)
#define ___SYM_location ___SYM(29,___S_location)
#define ___SYM_mutable_3f_ ___SYM(30,___S_mutable_3f_)
#define ___SYM_name ___SYM(31,___S_name)
#define ___SYM_nextmethod ___SYM(32,___S_nextmethod)
#define ___SYM_protected ___SYM(33,___S_protected)
#define ___SYM_rank ___SYM(34,___S_rank)
#define ___SYM_self ___SYM(35,___S_self)
#define ___SYM_temp_2e_17 ___SYM(36,___S_temp_2e_17)
#define ___SYM_temp_2e_18 ___SYM(37,___S_temp_2e_18)
#define ___SYM_value ___SYM(38,___S_value)
#define ___SYM_variable ___SYM(39,___S_variable)
#define ___SYM_variables ___SYM(40,___S_variables)
#define ___SYM_x_2e_19 ___SYM(41,___S_x_2e_19)

___BEGIN_KEY
___DEF_KEY(0,___K_mutable_3f_,"mutable?")
___END_KEY

#define ___KEY_mutable_3f_ ___KEY(0,___K_mutable_3f_)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame#")

___DEF_GLO(1,"jazz.debuggee.base:Debuggee-Frame:autoload")

___DEF_GLO(2,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame")

___DEF_GLO(3,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame!level")

___DEF_GLO(4,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:continuation!offset")

___DEF_GLO(5,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:continuation!slot")

___DEF_GLO(6,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-continuation")

___DEF_GLO(7,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-continuation!node")

___DEF_GLO(8,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-hidden?")

___DEF_GLO(9,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-hidden?!node")

___DEF_GLO(10,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-id")

___DEF_GLO(11,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-id!node")

___DEF_GLO(12,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-interpreted?")

___DEF_GLO(13,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-interpreted?!node")

___DEF_GLO(14,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-location")

___DEF_GLO(15,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-location!node")

___DEF_GLO(16,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-name")

___DEF_GLO(17,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-name!node")

___DEF_GLO(18,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-variables")

___DEF_GLO(19,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:get-variables!node")

___DEF_GLO(20,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:hidden?!offset")

___DEF_GLO(21,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:hidden?!slot")

___DEF_GLO(22,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:id!offset")

___DEF_GLO(23,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:id!slot")

___DEF_GLO(24,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:initialize")

___DEF_GLO(25,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:initialize!node")

___DEF_GLO(26,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:location!offset")

___DEF_GLO(27,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:location!slot")

___DEF_GLO(28,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:name!offset")

___DEF_GLO(29,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame:name!slot")

___DEF_GLO(30,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class")

___DEF_GLO(31,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class!level")

___DEF_GLO(32,"%%jazz.language.runtime.functional:naturals")

___DEF_GLO(33,"append")
___DEF_GLO(34,"car")
___DEF_GLO(35,"cdr")
___DEF_GLO(36,"jazz.debuggee.base:Debuggee-Frame")

___DEF_GLO(37,"jazz.inspector:package-info")
___DEF_GLO(38,"jazz:add-method-node")
___DEF_GLO(39,"jazz:add-slot")
___DEF_GLO(40,"jazz:boolean")
___DEF_GLO(41,"jazz:get-continuation-dynamic-environment")

___DEF_GLO(42,"jazz:get-continuation-lexical-environment")

___DEF_GLO(43,"jazz:get-continuation-location")
___DEF_GLO(44,"jazz:global-bound?")
___DEF_GLO(45,"jazz:global-ref")
___DEF_GLO(46,"jazz:interpreted-continuation?")
___DEF_GLO(47,"jazz:load-unit")
___DEF_GLO(48,"jazz:new-class")
___DEF_GLO(49,"jazz:register-module")
___DEF_GLO(50,"jazz:serial->object")
___DEF_GLO(51,"length")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_ ___GLO(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
#define ___PRM_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_ ___PRM(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
#define ___GLO_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload ___GLO(1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload)
#define ___PRM_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload ___PRM(1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame ___GLO(2,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame ___PRM(2,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_21_level ___GLO(3,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_21_level)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_21_level ___PRM(3,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_21_level)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset ___GLO(4,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset ___PRM(4,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot ___GLO(5,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot ___PRM(5,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation ___GLO(6,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation ___PRM(6,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation_21_node ___GLO(7,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation_21_node ___PRM(7,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_ ___GLO(8,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_ ___PRM(8,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f__21_node ___GLO(9,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f__21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f__21_node ___PRM(9,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f__21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id ___GLO(10,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id ___PRM(10,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id_21_node ___GLO(11,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id_21_node ___PRM(11,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_ ___GLO(12,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_ ___PRM(12,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f__21_node ___GLO(13,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f__21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f__21_node ___PRM(13,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f__21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location ___GLO(14,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location ___PRM(14,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location_21_node ___GLO(15,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location_21_node ___PRM(15,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name ___GLO(16,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name ___PRM(16,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name_21_node ___GLO(17,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name_21_node ___PRM(17,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables ___GLO(18,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables ___PRM(18,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables_21_node ___GLO(19,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables_21_node ___PRM(19,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset ___GLO(20,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset ___PRM(20,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot ___GLO(21,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot ___PRM(21,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset ___GLO(22,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset ___PRM(22,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot ___GLO(23,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot ___PRM(23,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize ___GLO(24,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize ___PRM(24,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node ___GLO(25,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node ___PRM(25,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset ___GLO(26,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset ___PRM(26,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot ___GLO(27,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot ___PRM(27,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset ___GLO(28,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset ___PRM(28,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot ___GLO(29,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot ___PRM(29,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class ___GLO(30,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class ___PRM(30,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class_21_level ___GLO(31,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class_21_level)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class_21_level ___PRM(31,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class_21_level)
#define ___GLO__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_naturals ___GLO(32,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_naturals)
#define ___PRM__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_naturals ___PRM(32,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_naturals)
#define ___GLO_append ___GLO(33,___G_append)
#define ___PRM_append ___PRM(33,___G_append)
#define ___GLO_car ___GLO(34,___G_car)
#define ___PRM_car ___PRM(34,___G_car)
#define ___GLO_cdr ___GLO(35,___G_cdr)
#define ___PRM_cdr ___PRM(35,___G_cdr)
#define ___GLO_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame ___GLO(36,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame)
#define ___PRM_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame ___PRM(36,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame)
#define ___GLO_jazz_2e_inspector_3a_package_2d_info ___GLO(37,___G_jazz_2e_inspector_3a_package_2d_info)
#define ___PRM_jazz_2e_inspector_3a_package_2d_info ___PRM(37,___G_jazz_2e_inspector_3a_package_2d_info)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(38,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(38,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(39,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(39,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_boolean ___GLO(40,___G_jazz_3a_boolean)
#define ___PRM_jazz_3a_boolean ___PRM(40,___G_jazz_3a_boolean)
#define ___GLO_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment ___GLO(41,___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
#define ___PRM_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment ___PRM(41,___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
#define ___GLO_jazz_3a_get_2d_continuation_2d_lexical_2d_environment ___GLO(42,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
#define ___PRM_jazz_3a_get_2d_continuation_2d_lexical_2d_environment ___PRM(42,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
#define ___GLO_jazz_3a_get_2d_continuation_2d_location ___GLO(43,___G_jazz_3a_get_2d_continuation_2d_location)
#define ___PRM_jazz_3a_get_2d_continuation_2d_location ___PRM(43,___G_jazz_3a_get_2d_continuation_2d_location)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(44,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(44,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(45,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(45,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_interpreted_2d_continuation_3f_ ___GLO(46,___G_jazz_3a_interpreted_2d_continuation_3f_)
#define ___PRM_jazz_3a_interpreted_2d_continuation_3f_ ___PRM(46,___G_jazz_3a_interpreted_2d_continuation_3f_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(47,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(47,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(48,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(48,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_register_2d_module ___GLO(49,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(49,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_serial_2d__3e_object ___GLO(50,___G_jazz_3a_serial_2d__3e_object)
#define ___PRM_jazz_3a_serial_2d__3e_object ___PRM(50,___G_jazz_3a_serial_2d__3e_object)
#define ___GLO_length ___GLO(51,___G_length)
#define ___PRM_length ___PRM(51,___G_length)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(2,___S_Jazz_2d_Debuggee_2d_Frame),___REF_SYM(24,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(3,___S_Jazz_2d_Debuggee_2d_Frame_7e_Class),___REF_SYM(25,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class))
,___DEF_CNS(___REF_FIX(32769),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(72))
               ___VEC0
___DEF_SUB_VEC(___X1,35UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131143))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131152))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131161))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131168))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131168))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X66,3UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X70,3UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(28,___S_loaded_3f_))
               ___VEC1(___REF_CNS(4))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X74,4UL)
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X77,12UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(78))
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
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X79,9UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_FIX(262144))
               ___VEC1(___REF_FIX(229378))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC1(___REF_FIX(32780))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X81,9UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_FIX(262144))
               ___VEC1(___REF_FIX(229378))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC1(___REF_FIX(32780))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(262204))
               ___VEC0
___DEF_SUB_VEC(___X83,7UL)
               ___VEC1(___REF_SYM(32,___S_nextmethod))
               ___VEC1(___REF_SYM(17,___S_hidden_3f_))
               ___VEC1(___REF_SYM(31,___S_name))
               ___VEC1(___REF_SYM(8,___S_continuation))
               ___VEC1(___REF_SYM(29,___S_location))
               ___VEC1(___REF_SYM(18,___S_id))
               ___VEC1(___REF_SYM(35,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X85,1UL)
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X88,0UL)
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_SUB(93))
               ___VEC0
___DEF_SUB_VEC(___X90,1UL)
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(92))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X93,0UL)
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(98))
               ___VEC0
___DEF_SUB_VEC(___X95,1UL)
               ___VEC1(___REF_SUB(96))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(97))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131143))
               ___VEC0
___DEF_SUB_VEC(___X98,0UL)
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X100,6UL)
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(102))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X103,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1048652))
               ___VEC0
___DEF_SUB_VEC(___X105,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1048652))
               ___VEC0
___DEF_SUB_VEC(___X107,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(983117))
               ___VEC0
___DEF_SUB_VEC(___X109,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(393293))
               ___VEC0
___DEF_SUB_VEC(___X111,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(393293))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(35,___S_self))
               ___VEC1(___REF_SYM(7,___S_cont))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(118))
               ___VEC0
___DEF_SUB_VEC(___X115,1UL)
               ___VEC1(___REF_SUB(116))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131152))
               ___VEC0
___DEF_SUB_VEC(___X118,0UL)
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X120,5UL)
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(122))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131161))
               ___VEC0
___DEF_SUB_VEC(___X123,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1310812))
               ___VEC0
___DEF_SUB_VEC(___X125,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1310812))
               ___VEC0
___DEF_SUB_VEC(___X127,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(655453))
               ___VEC0
___DEF_SUB_VEC(___X129,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(655453))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(35,___S_self))
               ___VEC1(___REF_SYM(7,___S_cont))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_SUB(182))
               ___VEC0
___DEF_SUB_VEC(___X133,24UL)
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_SUB(136))
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_SUB(140))
               ___VEC1(___REF_SUB(142))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_SUB(154))
               ___VEC1(___REF_SUB(156))
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_SUB(162))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(178))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(135))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(131168))
               ___VEC0
___DEF_SUB_VEC(___X136,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1048673))
               ___VEC0
___DEF_SUB_VEC(___X138,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1048673))
               ___VEC0
___DEF_SUB_VEC(___X140,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(2162788))
               ___VEC0
___DEF_SUB_VEC(___X142,6UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1638506))
               ___VEC0
___DEF_SUB_VEC(___X144,6UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(852074))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(147))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X148,4UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X150,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X152,10UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(557068))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229390))
               ___VEC1(___REF_FIX(196624))
               ___VEC1(___REF_FIX(163858))
               ___VEC1(___REF_FIX(131092))
               ___VEC1(___REF_FIX(98326))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(2818152))
               ___VEC0
___DEF_SUB_VEC(___X154,9UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229390))
               ___VEC1(___REF_FIX(196624))
               ___VEC1(___REF_FIX(163858))
               ___VEC1(___REF_FIX(131092))
               ___VEC1(___REF_FIX(98326))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(2818152))
               ___VEC0
___DEF_SUB_VEC(___X156,9UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229390))
               ___VEC1(___REF_FIX(196624))
               ___VEC1(___REF_FIX(163858))
               ___VEC1(___REF_FIX(131092))
               ___VEC1(___REF_FIX(98326))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1114216))
               ___VEC0
___DEF_SUB_VEC(___X158,9UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229390))
               ___VEC1(___REF_FIX(196624))
               ___VEC1(___REF_FIX(163858))
               ___VEC1(___REF_FIX(131092))
               ___VEC1(___REF_FIX(98326))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(1114216))
               ___VEC0
___DEF_SUB_VEC(___X160,8UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_FIX(229388))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163856))
               ___VEC1(___REF_FIX(131092))
               ___VEC1(___REF_FIX(98326))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(983143))
               ___VEC0
___DEF_SUB_VEC(___X162,7UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_FIX(196620))
               ___VEC1(___REF_FIX(163854))
               ___VEC1(___REF_FIX(131088))
               ___VEC1(___REF_FIX(98326))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X163,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(983143))
               ___VEC0
___DEF_SUB_VEC(___X164,6UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_FIX(163852))
               ___VEC1(___REF_FIX(131086))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(983143))
               ___VEC0
___DEF_SUB_VEC(___X166,5UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_FIX(131086))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(983143))
               ___VEC0
___DEF_SUB_VEC(___X168,4UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65560))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(983143))
               ___VEC0
___DEF_SUB_VEC(___X170,5UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(131098))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X172,5UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(131098))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X174,5UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(131098))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(524390))
               ___VEC0
___DEF_SUB_VEC(___X176,5UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(2687076))
               ___VEC0
___DEF_SUB_VEC(___X178,5UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(2687077))
               ___VEC0
___DEF_SUB_VEC(___X180,5UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(181))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
               ___VEC1(___REF_FIX(2424931))
               ___VEC0
___DEF_SUB_VEC(___X182,14UL)
               ___VEC1(___REF_SYM(27,___S_kind))
               ___VEC1(___REF_SYM(35,___S_self))
               ___VEC1(___REF_SYM(7,___S_cont))
               ___VEC1(___REF_SYM(40,___S_variables))
               ___VEC1(___REF_SYM(37,___S_temp_2e_18))
               ___VEC1(___REF_SYM(36,___S_temp_2e_17))
               ___VEC1(___REF_SYM(5,___S_cdr_5e_0))
               ___VEC1(___REF_SYM(31,___S_name))
               ___VEC1(___REF_SYM(34,___S_rank))
               ___VEC1(___REF_SYM(30,___S_mutable_3f_))
               ___VEC1(___REF_SYM(6,___S_cdr_5e_1))
               ___VEC1(___REF_SYM(38,___S_value))
               ___VEC1(___REF_SYM(39,___S_variable))
               ___VEC1(___REF_SYM(41,___S_x_2e_19))
               ___VEC0
___DEF_SUB_VEC(___X183,5UL)
               ___VEC1(___REF_SYM(4,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_M_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_M_HLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_M_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L6_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L7_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L8_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L9_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L10_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L11_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L12_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L13_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L14_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L15_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L16_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L17_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L18_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L19_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L20_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L21_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L22_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_M_HLBL(___L23_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),47,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),47,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_autoload)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),47,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___SYM_jazz_2e_inspector)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),47,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_STK(1,___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),49,___G_jazz_3a_register_2d_module)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),31)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload,___STK(-2))
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
   ___SET_R0(___LBL(8))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L38_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___END_IF
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),45,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___GOTO(___L35_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_GLBL(___L35_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(30,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class,___FIX(11L)))
   ___SET_GLO(31,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L37_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
   ___SET_R0(___LBL(12))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R2(___R1)
   ___SET_R3(___NUL)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(13))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),48,___G_jazz_3a_new_2d_class)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___GOTO(___L36_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_GLBL(___L36_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(2,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame,___FIX(11L)))
   ___SET_GLO(3,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_id)
   ___SET_R0(___LBL(15))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(23,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_slot,___FIX(2L)))
   ___SET_GLO(22,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset,___R1)
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_continuation)
   ___SET_R0(___LBL(16))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(5,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_slot,___FIX(2L)))
   ___SET_GLO(4,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset,___R1)
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_name)
   ___SET_R0(___LBL(17))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(29,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_slot,___FIX(2L)))
   ___SET_GLO(28,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset,___R1)
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_hidden_3f_)
   ___SET_R0(___LBL(18))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(21,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_slot,___FIX(2L)))
   ___SET_GLO(20,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset,___R1)
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_location)
   ___SET_R0(___LBL(19))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),39,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(27,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_slot,___FIX(2L)))
   ___SET_GLO(26,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset,___R1)
   ___SET_GLO(24,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize,___PRC(37))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(25,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node,___R1)
   ___SET_GLO(10,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id,___PRC(42))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
   ___SET_R2(___SYM_get_2d_id)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(11,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id_21_node,___R1)
   ___SET_GLO(6,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation,___PRC(44))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
   ___SET_R2(___SYM_get_2d_continuation)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(7,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation_21_node,___R1)
   ___SET_GLO(16,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name,___PRC(46))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
   ___SET_R2(___SYM_get_2d_name)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(17,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name_21_node,___R1)
   ___SET_GLO(12,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,___PRC(48))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___SET_R2(___SYM_get_2d_interpreted_3f_)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(13,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f__21_node,___R1)
   ___SET_GLO(8,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_,___PRC(55))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
   ___SET_R2(___SYM_get_2d_hidden_3f_)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(9,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f__21_node,___R1)
   ___SET_GLO(14,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,___PRC(57))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___SET_R2(___SYM_get_2d_location)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(15,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location_21_node,___R1)
   ___SET_GLO(18,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___PRC(63))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R2(___SYM_get_2d_variables)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(3),38,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_GLO(19,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables_21_node,___R1)
   ___SET_R1(___VOID)
   ___POLL(28)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L37_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),45,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L38_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R0(___LBL(30))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame_3a_autoload)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R2(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class)
   ___SET_R0(___LBL(10))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),48,___G_jazz_3a_new_2d_class)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(31,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L39_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___END_IF
   ___GOTO(___L40_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L39_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Frame)
   ___POLL(33)
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L40_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_base)
   ___ADJFP(8)
   ___POLL(34)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_)
   ___SET_R0(___LBL(32))
   ___JUMPGLOSAFE(___SET_NARGS(1),47,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 37
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
   ___IF_NARGS_EQ(6,___NOTHING)
   ___WRONG_NARGS(0,6,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___STK(-2))
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(1),___R4)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset,___STK(-10))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset,___STK(-9))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset,___STK(-7))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset,___STK(-6))
   ___VECTORSET(___STK(-11),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset,___STK(-5)) ___SET_R1(___STK(-11))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id
#undef ___PH_LBL0
#define ___PH_LBL0 42
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_id_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation
#undef ___PH_LBL0
#define ___PH_LBL0 44
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 46
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_name_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 48
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_P_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___DEF_P_HLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),50,___G_jazz_3a_serial_2d__3e_object)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___SET_STK(-5,___R1)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_3a_interpreted_2d_continuation_3f_)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),40,___G_jazz_3a_boolean)
___DEF_SLBL(4,___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 55
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_hidden_3f__21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location
#undef ___PH_LBL0
#define ___PH_LBL0 57
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___DEF_P_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_location_21_offset))
   ___SET_STK(1,___R1)
   ___SET_R1(___R2)
   ___ADJFP(1)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_R1(___VECTORREF(___STK(0),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset))
   ___ADJFP(7)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),50,___G_jazz_3a_serial_2d__3e_object)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___SET_STK(-5,___R1)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),43,___G_jazz_3a_get_2d_continuation_2d_location)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables
#undef ___PH_LBL0
#define ___PH_LBL0 63
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L6_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L7_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L8_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L9_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L10_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L11_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L12_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L13_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L14_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L15_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L16_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L17_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L18_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L19_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L20_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L21_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L22_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_P_HLBL(___L23_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_continuation_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),50,___G_jazz_3a_serial_2d__3e_object)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___IF(___EQP(___STK(-5),___SYM__3a_lexical))
   ___GOTO(___L38_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___IF(___EQP(___STK(-5),___SYM__3a_all))
   ___GOTO(___L37_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_STK(-4,___R1)
   ___SET_R1(___VOID)
   ___GOTO(___L24_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L24_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-3,___R1)
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(1),___PRM_length)
___DEF_SLBL(4,___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R2(___R1)
   ___SET_R1(___FIX(0L))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),32,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_naturals)
___DEF_SLBL(5,___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-3))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___IF(___PAIRP(___R1))
   ___GOTO(___L25_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___GOTO(___L36_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_SLBL(7,___L7_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___CDR(___STK(-6)))
   ___SET_R0(___LBL(18))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L36_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
___DEF_GLBL(___L25_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L36_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R2(___CAR(___R2))
   ___SET_R1(___CAR(___R1))
   ___SET_R0(___LBL(7))
   ___ADJFP(8)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L34_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_R3(___CAR(___R1))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L32_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_R4(___CDR(___R1))
   ___IF(___NOT(___PAIRP(___R4)))
   ___GOTO(___L30_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_STK(1,___CAR(___R4))
   ___SET_STK(2,___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(2)
   ___IF(___NOT(___PAIRP(___R4)))
   ___GOTO(___L28_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_STK(-1,___CDR(___R4))
   ___SET_STK(1,___R1)
   ___SET_R1(___STK(-1))
   ___ADJFP(1)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L26_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___END_IF
   ___SET_STK(-2,___CAR(___R1))
   ___SET_STK(1,___R1)
   ___SET_R1(___STK(-2))
   ___SET_STK(-2,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R3(___R1)
   ___SET_R1(___STK(0))
   ___SET_R2(___KEY_mutable_3f_)
   ___ADJFP(9)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_2e_inspector_3a_package_2d_info)
___DEF_SLBL(10,___L10_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___BEGIN_ALLOC_LIST(3UL,___STK(-6))
   ___ADD_LIST_ELEM(1,___STK(-5))
   ___ADD_LIST_ELEM(2,___FAL)
   ___END_ALLOC_LIST(3)
   ___SET_R2(___GET_LIST(3))
   ___SET_R1(___CONS(___R2,___R1))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___POLL(12)
___DEF_SLBL(12,___L12_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L26_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-2,___R0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R4)
   ___SET_R0(___LBL(13))
   ___ADJFP(9)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(13,___L13_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L27_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___GOTO(___L27_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L28_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-1,___R0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R4)
   ___SET_R1(___R4)
   ___SET_R0(___LBL(14))
   ___ADJFP(10)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(14,___L14_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L29_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___GOTO(___L29_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L30_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___R4)
   ___SET_R0(___LBL(15))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(15,___L15_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L31_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___GOTO(___L31_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L32_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R0(___LBL(16))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(16,___L16_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L33_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___GOTO(___L33_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L34_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(17))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(17,___L17_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L35_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___GOTO(___L35_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___DEF_GLBL(___L36_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(18,___L18_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(19,4096)
___DEF_SLBL(19,___L19_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___POLL(20)
___DEF_SLBL(20,___L20_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L37_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-4,___R1)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
___DEF_SLBL(21,___L21_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
___DEF_SLBL(22,___L22_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-3))
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(2),___PRM_append)
___DEF_GLBL(___L38_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___SET_STK(-4,___R1)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
___DEF_SLBL(23,___L23_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
   ___GOTO(___L24_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame#",
___REF_SUB(0),35,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize,0,___REF_SUB(73),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize,6,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_initialize,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id,0,___REF_SUB(84),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_id,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation,0,___REF_SUB(89),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_continuation,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name,0,___REF_SUB(94),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,0,___REF_SUB(99),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_interpreted_3f_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_,0,___REF_SUB(114),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_hidden_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,0,___REF_SUB(119),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_location,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,0,___REF_SUB(132),24,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___OFD(___RETI,12,0,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,9,0,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___OFD(___RETI,12,0,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___OFD(___RETI,12,0,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_3a_get_2d_variables,___IFD(___RETN,5,0,0xfL))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f0ffL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S__3a_all,":all")
___DEF_MOD_SYM(1,___S__3a_lexical,":lexical")
___DEF_MOD_SYM(2,___S_Jazz_2d_Debuggee_2d_Frame,"Jazz-Debuggee-Frame")
___DEF_MOD_SYM(3,___S_Jazz_2d_Debuggee_2d_Frame_7e_Class,"Jazz-Debuggee-Frame~Class")
___DEF_MOD_SYM(4,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Frame")

___DEF_MOD_SYM(5,___S_cdr_5e_0,"cdr^0")
___DEF_MOD_SYM(6,___S_cdr_5e_1,"cdr^1")
___DEF_MOD_SYM(7,___S_cont,"cont")
___DEF_MOD_SYM(8,___S_continuation,"continuation")
___DEF_MOD_SYM(9,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(10,___S_get_2d_continuation,"get-continuation")
___DEF_MOD_SYM(11,___S_get_2d_hidden_3f_,"get-hidden?")
___DEF_MOD_SYM(12,___S_get_2d_id,"get-id")
___DEF_MOD_SYM(13,___S_get_2d_interpreted_3f_,"get-interpreted?")
___DEF_MOD_SYM(14,___S_get_2d_location,"get-location")
___DEF_MOD_SYM(15,___S_get_2d_name,"get-name")
___DEF_MOD_SYM(16,___S_get_2d_variables,"get-variables")
___DEF_MOD_SYM(17,___S_hidden_3f_,"hidden?")
___DEF_MOD_SYM(18,___S_id,"id")
___DEF_MOD_SYM(19,___S_initialize,"initialize")
___DEF_MOD_SYM(20,___S_jazz,"jazz")
___DEF_MOD_SYM(21,___S_jazz_2e_debuggee_2e_autoload,"jazz.debuggee.autoload")
___DEF_MOD_SYM(22,___S_jazz_2e_debuggee_2e_base,"jazz.debuggee.base")
___DEF_MOD_SYM(23,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame,"jazz.debuggee.jazz.Jazz-Debuggee-Frame")

___DEF_MOD_SYM(24,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame")

___DEF_MOD_SYM(25,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Frame_3a_Jazz_2d_Debuggee_2d_Frame_7e_Class,"jazz.debuggee.jazz.Jazz-Debuggee-Frame:Jazz-Debuggee-Frame~Class")

___DEF_MOD_SYM(26,___S_jazz_2e_inspector,"jazz.inspector")
___DEF_MOD_SYM(27,___S_kind,"kind")
___DEF_MOD_SYM(28,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(29,___S_location,"location")
___DEF_MOD_SYM(30,___S_mutable_3f_,"mutable?")
___DEF_MOD_SYM(31,___S_name,"name")
___DEF_MOD_SYM(32,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(33,___S_protected,"protected")
___DEF_MOD_SYM(34,___S_rank,"rank")
___DEF_MOD_SYM(35,___S_self,"self")
___DEF_MOD_SYM(36,___S_temp_2e_17,"temp.17")
___DEF_MOD_SYM(37,___S_temp_2e_18,"temp.18")
___DEF_MOD_SYM(38,___S_value,"value")
___DEF_MOD_SYM(39,___S_variable,"variable")
___DEF_MOD_SYM(40,___S_variables,"variables")
___DEF_MOD_SYM(41,___S_x_2e_19,"x.19")
___DEF_MOD_KEY(0,___K_mutable_3f_,"mutable?")
___END_MOD_SYM_KEY

#endif
