#ifdef ___LINKER_INFO
; File: "Pulse.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.event.Pulse"
(("bin:jazz.event.Pulse"))
(
"Pulse"
"Pulse~Class"
"bin:jazz.event.Pulse"
"box^5"
"delay"
"destroy"
"execute"
"foundation.dialect"
"get-delay"
"get-execute"
"get-name"
"get-period"
"get-repeat?"
"initialize"
"jazz"
"jazz.event"
"jazz.event.Pulse"
"jazz.event.Pulse:Pulse"
"jazz.event.Pulse:Pulse~Class"
"name"
"nextmethod"
"period"
"protected"
"repeat?"
"rest"
"self"
"set-delay"
"set-execute"
"set-name"
"set-period"
"set-repeat?"
"start-loop"
"terminated?"
"thread"
"timeout"
)
(
"delay"
"repeat?"
)
(
"bin:jazz.event.Pulse#"
"jazz.event.Pulse:Pulse"
"jazz.event.Pulse:Pulse:delay!initialize"
"jazz.event.Pulse:Pulse:delay!offset"
"jazz.event.Pulse:Pulse:delay!slot"
"jazz.event.Pulse:Pulse:destroy"
"jazz.event.Pulse:Pulse:destroy!node"
"jazz.event.Pulse:Pulse:execute!initialize"
"jazz.event.Pulse:Pulse:execute!offset"
"jazz.event.Pulse:Pulse:execute!slot"
"jazz.event.Pulse:Pulse:get-delay"
"jazz.event.Pulse:Pulse:get-execute"
"jazz.event.Pulse:Pulse:get-name"
"jazz.event.Pulse:Pulse:get-period"
"jazz.event.Pulse:Pulse:get-repeat?"
"jazz.event.Pulse:Pulse:initialize"
"jazz.event.Pulse:Pulse:initialize!node"
"jazz.event.Pulse:Pulse:name!initialize"
"jazz.event.Pulse:Pulse:name!offset"
"jazz.event.Pulse:Pulse:name!slot"
"jazz.event.Pulse:Pulse:period!initialize"
"jazz.event.Pulse:Pulse:period!offset"
"jazz.event.Pulse:Pulse:period!slot"
"jazz.event.Pulse:Pulse:repeat?!initialize"
"jazz.event.Pulse:Pulse:repeat?!offset"
"jazz.event.Pulse:Pulse:repeat?!slot"
"jazz.event.Pulse:Pulse:set-delay"
"jazz.event.Pulse:Pulse:set-execute"
"jazz.event.Pulse:Pulse:set-name"
"jazz.event.Pulse:Pulse:set-period"
"jazz.event.Pulse:Pulse:set-repeat?"
"jazz.event.Pulse:Pulse:start-loop"
"jazz.event.Pulse:Pulse:terminated?"
"jazz.event.Pulse:Pulse:thread!initialize"
"jazz.event.Pulse:Pulse:thread!offset"
"jazz.event.Pulse:Pulse:thread!slot"
"jazz.event.Pulse:Pulse~Class"
)
(
"jazz.event.Pulse:Pulse!level"
"jazz.event.Pulse:Pulse~Class!level"
)
(
"jazz.event:synchronize-event"
"jazz.language.runtime.exception:error"
"jazz.language.runtime.functional:box-list"
"jazz.language.runtime.functional:exit-thread"
"jazz.language.runtime.functional:find-keyword"
"jazz.language.runtime.functional:new-thread"
"jazz.language.runtime.functional:sleep"
"jazz.language.runtime.functional:unbox-list"
"jazz.language.runtime.object:Object"
"jazz:add-final-method"
"jazz:add-method-node"
"jazz:add-property"
"jazz:add-slot"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new-class"
"jazz:not-null?"
"jazz:register-module"
"thread-start!"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.event.Pulse"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_event_2e_Pulse
#define ___MH_PROC ___H_bin_3a_jazz_2e_event_2e_Pulse
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 35
#define ___KEYCOUNT 2
#define ___GLOCOUNT 59
#define ___SUPCOUNT 39
#define ___CNSCOUNT 5
#define ___SUBCOUNT 265
#define ___LBLCOUNT 121
#define ___OFDCOUNT 2
#define ___MODDESCR ___REF_SUB(264)
#include "gambit.h"

___NEED_SYM(___S_Pulse)
___NEED_SYM(___S_Pulse_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_event_2e_Pulse)
___NEED_SYM(___S_box_5e_5)
___NEED_SYM(___S_delay)
___NEED_SYM(___S_destroy)
___NEED_SYM(___S_execute)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_delay)
___NEED_SYM(___S_get_2d_execute)
___NEED_SYM(___S_get_2d_name)
___NEED_SYM(___S_get_2d_period)
___NEED_SYM(___S_get_2d_repeat_3f_)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_event)
___NEED_SYM(___S_jazz_2e_event_2e_Pulse)
___NEED_SYM(___S_jazz_2e_event_2e_Pulse_3a_Pulse)
___NEED_SYM(___S_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
___NEED_SYM(___S_name)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_period)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_repeat_3f_)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_self)
___NEED_SYM(___S_set_2d_delay)
___NEED_SYM(___S_set_2d_execute)
___NEED_SYM(___S_set_2d_name)
___NEED_SYM(___S_set_2d_period)
___NEED_SYM(___S_set_2d_repeat_3f_)
___NEED_SYM(___S_start_2d_loop)
___NEED_SYM(___S_terminated_3f_)
___NEED_SYM(___S_thread)
___NEED_SYM(___S_timeout)

___NEED_KEY(___K_delay)
___NEED_KEY(___K_repeat_3f_)

___NEED_GLO(___G_bin_3a_jazz_2e_event_2e_Pulse_23_)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_21_level)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
___NEED_GLO(___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_event_3a_synchronize_2d_event)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_property)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_not_2d_null_3f_)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_thread_2d_start_21_)

___BEGIN_SYM
___DEF_SYM(0,___S_Pulse,"Pulse")
___DEF_SYM(1,___S_Pulse_7e_Class,"Pulse~Class")
___DEF_SYM(2,___S_bin_3a_jazz_2e_event_2e_Pulse,"bin:jazz.event.Pulse")
___DEF_SYM(3,___S_box_5e_5,"box^5")
___DEF_SYM(4,___S_delay,"delay")
___DEF_SYM(5,___S_destroy,"destroy")
___DEF_SYM(6,___S_execute,"execute")
___DEF_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(8,___S_get_2d_delay,"get-delay")
___DEF_SYM(9,___S_get_2d_execute,"get-execute")
___DEF_SYM(10,___S_get_2d_name,"get-name")
___DEF_SYM(11,___S_get_2d_period,"get-period")
___DEF_SYM(12,___S_get_2d_repeat_3f_,"get-repeat?")
___DEF_SYM(13,___S_initialize,"initialize")
___DEF_SYM(14,___S_jazz,"jazz")
___DEF_SYM(15,___S_jazz_2e_event,"jazz.event")
___DEF_SYM(16,___S_jazz_2e_event_2e_Pulse,"jazz.event.Pulse")
___DEF_SYM(17,___S_jazz_2e_event_2e_Pulse_3a_Pulse,"jazz.event.Pulse:Pulse")
___DEF_SYM(18,___S_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class,"jazz.event.Pulse:Pulse~Class")
___DEF_SYM(19,___S_name,"name")
___DEF_SYM(20,___S_nextmethod,"nextmethod")
___DEF_SYM(21,___S_period,"period")
___DEF_SYM(22,___S_protected,"protected")
___DEF_SYM(23,___S_repeat_3f_,"repeat?")
___DEF_SYM(24,___S_rest,"rest")
___DEF_SYM(25,___S_self,"self")
___DEF_SYM(26,___S_set_2d_delay,"set-delay")
___DEF_SYM(27,___S_set_2d_execute,"set-execute")
___DEF_SYM(28,___S_set_2d_name,"set-name")
___DEF_SYM(29,___S_set_2d_period,"set-period")
___DEF_SYM(30,___S_set_2d_repeat_3f_,"set-repeat?")
___DEF_SYM(31,___S_start_2d_loop,"start-loop")
___DEF_SYM(32,___S_terminated_3f_,"terminated?")
___DEF_SYM(33,___S_thread,"thread")
___DEF_SYM(34,___S_timeout,"timeout")
___END_SYM

#define ___SYM_Pulse ___SYM(0,___S_Pulse)
#define ___SYM_Pulse_7e_Class ___SYM(1,___S_Pulse_7e_Class)
#define ___SYM_bin_3a_jazz_2e_event_2e_Pulse ___SYM(2,___S_bin_3a_jazz_2e_event_2e_Pulse)
#define ___SYM_box_5e_5 ___SYM(3,___S_box_5e_5)
#define ___SYM_delay ___SYM(4,___S_delay)
#define ___SYM_destroy ___SYM(5,___S_destroy)
#define ___SYM_execute ___SYM(6,___S_execute)
#define ___SYM_foundation_2e_dialect ___SYM(7,___S_foundation_2e_dialect)
#define ___SYM_get_2d_delay ___SYM(8,___S_get_2d_delay)
#define ___SYM_get_2d_execute ___SYM(9,___S_get_2d_execute)
#define ___SYM_get_2d_name ___SYM(10,___S_get_2d_name)
#define ___SYM_get_2d_period ___SYM(11,___S_get_2d_period)
#define ___SYM_get_2d_repeat_3f_ ___SYM(12,___S_get_2d_repeat_3f_)
#define ___SYM_initialize ___SYM(13,___S_initialize)
#define ___SYM_jazz ___SYM(14,___S_jazz)
#define ___SYM_jazz_2e_event ___SYM(15,___S_jazz_2e_event)
#define ___SYM_jazz_2e_event_2e_Pulse ___SYM(16,___S_jazz_2e_event_2e_Pulse)
#define ___SYM_jazz_2e_event_2e_Pulse_3a_Pulse ___SYM(17,___S_jazz_2e_event_2e_Pulse_3a_Pulse)
#define ___SYM_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class ___SYM(18,___S_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
#define ___SYM_name ___SYM(19,___S_name)
#define ___SYM_nextmethod ___SYM(20,___S_nextmethod)
#define ___SYM_period ___SYM(21,___S_period)
#define ___SYM_protected ___SYM(22,___S_protected)
#define ___SYM_repeat_3f_ ___SYM(23,___S_repeat_3f_)
#define ___SYM_rest ___SYM(24,___S_rest)
#define ___SYM_self ___SYM(25,___S_self)
#define ___SYM_set_2d_delay ___SYM(26,___S_set_2d_delay)
#define ___SYM_set_2d_execute ___SYM(27,___S_set_2d_execute)
#define ___SYM_set_2d_name ___SYM(28,___S_set_2d_name)
#define ___SYM_set_2d_period ___SYM(29,___S_set_2d_period)
#define ___SYM_set_2d_repeat_3f_ ___SYM(30,___S_set_2d_repeat_3f_)
#define ___SYM_start_2d_loop ___SYM(31,___S_start_2d_loop)
#define ___SYM_terminated_3f_ ___SYM(32,___S_terminated_3f_)
#define ___SYM_thread ___SYM(33,___S_thread)
#define ___SYM_timeout ___SYM(34,___S_timeout)

___BEGIN_KEY
___DEF_KEY(0,___K_delay,"delay")
___DEF_KEY(1,___K_repeat_3f_,"repeat?")
___END_KEY

#define ___KEY_delay ___KEY(0,___K_delay)
#define ___KEY_repeat_3f_ ___KEY(1,___K_repeat_3f_)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.event.Pulse#")
___DEF_GLO(1,"jazz.event.Pulse:Pulse")
___DEF_GLO(2,"jazz.event.Pulse:Pulse!level")
___DEF_GLO(3,"jazz.event.Pulse:Pulse:delay!initialize")

___DEF_GLO(4,"jazz.event.Pulse:Pulse:delay!offset")

___DEF_GLO(5,"jazz.event.Pulse:Pulse:delay!slot")

___DEF_GLO(6,"jazz.event.Pulse:Pulse:destroy")
___DEF_GLO(7,"jazz.event.Pulse:Pulse:destroy!node")

___DEF_GLO(8,"jazz.event.Pulse:Pulse:execute!initialize")

___DEF_GLO(9,"jazz.event.Pulse:Pulse:execute!offset")

___DEF_GLO(10,"jazz.event.Pulse:Pulse:execute!slot")

___DEF_GLO(11,"jazz.event.Pulse:Pulse:get-delay")
___DEF_GLO(12,"jazz.event.Pulse:Pulse:get-execute")

___DEF_GLO(13,"jazz.event.Pulse:Pulse:get-name")
___DEF_GLO(14,"jazz.event.Pulse:Pulse:get-period")

___DEF_GLO(15,"jazz.event.Pulse:Pulse:get-repeat?")

___DEF_GLO(16,"jazz.event.Pulse:Pulse:initialize")

___DEF_GLO(17,"jazz.event.Pulse:Pulse:initialize!node")

___DEF_GLO(18,"jazz.event.Pulse:Pulse:name!initialize")

___DEF_GLO(19,"jazz.event.Pulse:Pulse:name!offset")

___DEF_GLO(20,"jazz.event.Pulse:Pulse:name!slot")
___DEF_GLO(21,"jazz.event.Pulse:Pulse:period!initialize")

___DEF_GLO(22,"jazz.event.Pulse:Pulse:period!offset")

___DEF_GLO(23,"jazz.event.Pulse:Pulse:period!slot")

___DEF_GLO(24,"jazz.event.Pulse:Pulse:repeat?!initialize")

___DEF_GLO(25,"jazz.event.Pulse:Pulse:repeat?!offset")

___DEF_GLO(26,"jazz.event.Pulse:Pulse:repeat?!slot")

___DEF_GLO(27,"jazz.event.Pulse:Pulse:set-delay")
___DEF_GLO(28,"jazz.event.Pulse:Pulse:set-execute")

___DEF_GLO(29,"jazz.event.Pulse:Pulse:set-name")
___DEF_GLO(30,"jazz.event.Pulse:Pulse:set-period")

___DEF_GLO(31,"jazz.event.Pulse:Pulse:set-repeat?")

___DEF_GLO(32,"jazz.event.Pulse:Pulse:start-loop")

___DEF_GLO(33,"jazz.event.Pulse:Pulse:terminated?")

___DEF_GLO(34,"jazz.event.Pulse:Pulse:thread!initialize")

___DEF_GLO(35,"jazz.event.Pulse:Pulse:thread!offset")

___DEF_GLO(36,"jazz.event.Pulse:Pulse:thread!slot")

___DEF_GLO(37,"jazz.event.Pulse:Pulse~Class")
___DEF_GLO(38,"jazz.event.Pulse:Pulse~Class!level")

___DEF_GLO(39,"jazz.event:synchronize-event")
___DEF_GLO(40,"jazz.language.runtime.exception:error")

___DEF_GLO(41,"jazz.language.runtime.functional:box-list")

___DEF_GLO(42,"jazz.language.runtime.functional:exit-thread")

___DEF_GLO(43,"jazz.language.runtime.functional:find-keyword")

___DEF_GLO(44,"jazz.language.runtime.functional:new-thread")

___DEF_GLO(45,"jazz.language.runtime.functional:sleep")

___DEF_GLO(46,"jazz.language.runtime.functional:unbox-list")

___DEF_GLO(47,"jazz.language.runtime.object:Object")

___DEF_GLO(48,"jazz:add-final-method")
___DEF_GLO(49,"jazz:add-method-node")
___DEF_GLO(50,"jazz:add-property")
___DEF_GLO(51,"jazz:add-slot")
___DEF_GLO(52,"jazz:global-bound?")
___DEF_GLO(53,"jazz:global-ref")
___DEF_GLO(54,"jazz:load-unit")
___DEF_GLO(55,"jazz:new-class")
___DEF_GLO(56,"jazz:not-null?")
___DEF_GLO(57,"jazz:register-module")
___DEF_GLO(58,"thread-start!")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_event_2e_Pulse_23_ ___GLO(0,___G_bin_3a_jazz_2e_event_2e_Pulse_23_)
#define ___PRM_bin_3a_jazz_2e_event_2e_Pulse_23_ ___PRM(0,___G_bin_3a_jazz_2e_event_2e_Pulse_23_)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse ___GLO(1,___G_jazz_2e_event_2e_Pulse_3a_Pulse)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse ___PRM(1,___G_jazz_2e_event_2e_Pulse_3a_Pulse)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_21_level ___GLO(2,___G_jazz_2e_event_2e_Pulse_3a_Pulse_21_level)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_21_level ___PRM(2,___G_jazz_2e_event_2e_Pulse_3a_Pulse_21_level)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize ___GLO(3,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize ___PRM(3,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset ___GLO(4,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset ___PRM(4,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot ___GLO(5,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot ___PRM(5,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy ___GLO(6,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy ___PRM(6,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node ___GLO(7,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node ___PRM(7,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize ___GLO(8,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize ___PRM(8,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset ___GLO(9,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset ___PRM(9,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot ___GLO(10,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot ___PRM(10,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay ___GLO(11,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay ___PRM(11,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute ___GLO(12,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute ___PRM(12,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name ___GLO(13,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name ___PRM(13,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period ___GLO(14,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period ___PRM(14,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_ ___GLO(15,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_ ___PRM(15,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize ___GLO(16,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize ___PRM(16,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node ___GLO(17,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node ___PRM(17,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize ___GLO(18,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize ___PRM(18,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset ___GLO(19,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset ___PRM(19,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot ___GLO(20,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot ___PRM(20,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize ___GLO(21,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize ___PRM(21,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset ___GLO(22,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset ___PRM(22,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot ___GLO(23,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot ___PRM(23,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize ___GLO(24,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize ___PRM(24,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset ___GLO(25,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset ___PRM(25,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot ___GLO(26,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot ___PRM(26,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay ___GLO(27,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay ___PRM(27,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute ___GLO(28,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute ___PRM(28,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name ___GLO(29,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name ___PRM(29,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period ___GLO(30,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period ___PRM(30,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_ ___GLO(31,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_ ___PRM(31,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop ___GLO(32,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop ___PRM(32,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_ ___GLO(33,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_ ___PRM(33,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize ___GLO(34,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize ___PRM(34,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset ___GLO(35,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset ___PRM(35,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot ___GLO(36,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot ___PRM(36,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class ___GLO(37,___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class ___PRM(37,___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
#define ___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class_21_level ___GLO(38,___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class_21_level)
#define ___PRM_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class_21_level ___PRM(38,___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class_21_level)
#define ___GLO_jazz_2e_event_3a_synchronize_2d_event ___GLO(39,___G_jazz_2e_event_3a_synchronize_2d_event)
#define ___PRM_jazz_2e_event_3a_synchronize_2d_event ___PRM(39,___G_jazz_2e_event_3a_synchronize_2d_event)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_error ___GLO(40,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_error ___PRM(40,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list ___GLO(41,___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list ___PRM(41,___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread ___GLO(42,___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread ___PRM(42,___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword ___GLO(43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword ___PRM(43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread ___GLO(44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread ___PRM(44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_sleep ___GLO(45,___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_sleep ___PRM(45,___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list ___GLO(46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list ___PRM(46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object ___GLO(47,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object ___PRM(47,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(48,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(48,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(49,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(49,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_property ___GLO(50,___G_jazz_3a_add_2d_property)
#define ___PRM_jazz_3a_add_2d_property ___PRM(50,___G_jazz_3a_add_2d_property)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(51,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(51,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(52,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(52,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(53,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(53,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(54,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(54,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(55,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(55,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_not_2d_null_3f_ ___GLO(56,___G_jazz_3a_not_2d_null_3f_)
#define ___PRM_jazz_3a_not_2d_null_3f_ ___PRM(56,___G_jazz_3a_not_2d_null_3f_)
#define ___GLO_jazz_3a_register_2d_module ___GLO(57,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(57,___G_jazz_3a_register_2d_module)
#define ___GLO_thread_2d_start_21_ ___GLO(58,___G_thread_2d_start_21_)
#define ___PRM_thread_2d_start_21_ ___PRM(58,___G_thread_2d_start_21_)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_Pulse),___REF_SYM(17,___S_jazz_2e_event_2e_Pulse_3a_Pulse))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(1,___S_Pulse_7e_Class),___REF_SYM(18,___S_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class))
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X1,43UL)
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
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131118))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131125))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_FIX(41))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131118))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_FIX(42))
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131118))
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
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131118))
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
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X98,0UL)
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(103))
               ___VEC0
___DEF_SUB_VEC(___X100,1UL)
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(102))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X103,0UL)
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(108))
               ___VEC0
___DEF_SUB_VEC(___X105,1UL)
               ___VEC1(___REF_SUB(106))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X108,0UL)
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X110,1UL)
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X113,0UL)
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
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X118,0UL)
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(123))
               ___VEC0
___DEF_SUB_VEC(___X120,1UL)
               ___VEC1(___REF_SUB(121))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(122))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X123,0UL)
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_SUB(128))
               ___VEC0
___DEF_SUB_VEC(___X125,1UL)
               ___VEC1(___REF_SUB(126))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(127))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X128,0UL)
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(133))
               ___VEC0
___DEF_SUB_VEC(___X130,1UL)
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(132))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X133,0UL)
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_SUB(138))
               ___VEC0
___DEF_SUB_VEC(___X135,1UL)
               ___VEC1(___REF_SUB(136))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(137))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X138,0UL)
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SUB(140))
               ___VEC1(___REF_SUB(143))
               ___VEC0
___DEF_SUB_VEC(___X140,1UL)
               ___VEC1(___REF_SUB(141))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(142))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X143,0UL)
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_SUB(148))
               ___VEC0
___DEF_SUB_VEC(___X145,1UL)
               ___VEC1(___REF_SUB(146))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(147))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X148,0UL)
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_SUB(153))
               ___VEC0
___DEF_SUB_VEC(___X150,1UL)
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(152))
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X153,0UL)
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
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
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
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(43))
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
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131125))
               ___VEC0
___DEF_SUB_VEC(___X168,0UL)
               ___VEC0
___DEF_SUB_STR(___X169,24UL)
               ___STR8(85,110,101,120,112,101,99,116)
               ___STR8(101,100,32,107,101,121,119,111)
               ___STR8(114,100,115,58,32,123,115,125)
               ___STR0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_SUB(200))
               ___VEC0
___DEF_SUB_VEC(___X171,14UL)
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(178))
               ___VEC1(___REF_SUB(180))
               ___VEC1(___REF_SUB(182))
               ___VEC1(___REF_SUB(184))
               ___VEC1(___REF_SUB(186))
               ___VEC1(___REF_SUB(188))
               ___VEC1(___REF_SUB(190))
               ___VEC1(___REF_SUB(192))
               ___VEC1(___REF_SUB(194))
               ___VEC1(___REF_SUB(196))
               ___VEC1(___REF_SUB(198))
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(173))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X174,11UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(557056))
               ___VEC1(___REF_FIX(524290))
               ___VEC1(___REF_FIX(491524))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X176,8UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X178,9UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X180,10UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(181))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X182,11UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X183,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X184,11UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(185))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X185,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X186,11UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(187))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X187,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X188,11UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(189))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X190,11UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(191))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(393274))
               ___VEC0
___DEF_SUB_VEC(___X192,11UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(193))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X193,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1572928))
               ___VEC0
___DEF_SUB_VEC(___X194,11UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(195))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X195,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(393280))
               ___VEC0
___DEF_SUB_VEC(___X196,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(197))
               ___VEC0
___DEF_SUB_VEC(___X197,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X198,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(199))
               ___VEC0
___DEF_SUB_VEC(___X199,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X200,9UL)
               ___VEC1(___REF_SYM(20,___S_nextmethod))
               ___VEC1(___REF_SYM(24,___S_rest))
               ___VEC1(___REF_SYM(6,___S_execute))
               ___VEC1(___REF_SYM(21,___S_period))
               ___VEC1(___REF_SYM(19,___S_name))
               ___VEC1(___REF_SYM(25,___S_self))
               ___VEC1(___REF_SYM(3,___S_box_5e_5))
               ___VEC1(___REF_SYM(4,___S_delay))
               ___VEC1(___REF_SYM(23,___S_repeat_3f_))
               ___VEC0
___DEF_SUB_VEC(___X201,2UL)
               ___VEC1(___REF_SUB(202))
               ___VEC1(___REF_SUB(215))
               ___VEC0
___DEF_SUB_VEC(___X202,6UL)
               ___VEC1(___REF_SUB(203))
               ___VEC1(___REF_SUB(205))
               ___VEC1(___REF_SUB(207))
               ___VEC1(___REF_SUB(209))
               ___VEC1(___REF_SUB(211))
               ___VEC1(___REF_SUB(213))
               ___VEC0
___DEF_SUB_VEC(___X203,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(204))
               ___VEC0
___DEF_SUB_VEC(___X204,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X205,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(206))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X206,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(524359))
               ___VEC0
___DEF_SUB_VEC(___X207,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(208))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X208,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(524359))
               ___VEC0
___DEF_SUB_VEC(___X209,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(210))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X210,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262216))
               ___VEC0
___DEF_SUB_VEC(___X211,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(212))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X212,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262216))
               ___VEC0
___DEF_SUB_VEC(___X213,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(214))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X214,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262216))
               ___VEC0
___DEF_SUB_VEC(___X215,3UL)
               ___VEC1(___REF_SYM(33,___S_thread))
               ___VEC1(___REF_SYM(20,___S_nextmethod))
               ___VEC1(___REF_SYM(25,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X216,2UL)
               ___VEC1(___REF_SUB(217))
               ___VEC1(___REF_SUB(220))
               ___VEC0
___DEF_SUB_VEC(___X217,1UL)
               ___VEC1(___REF_SUB(218))
               ___VEC0
___DEF_SUB_VEC(___X218,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(219))
               ___VEC0
___DEF_SUB_VEC(___X219,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X220,0UL)
               ___VEC0
___DEF_SUB_VEC(___X221,2UL)
               ___VEC1(___REF_SUB(222))
               ___VEC1(___REF_SUB(263))
               ___VEC0
___DEF_SUB_VEC(___X222,20UL)
               ___VEC1(___REF_SUB(223))
               ___VEC1(___REF_SUB(225))
               ___VEC1(___REF_SUB(227))
               ___VEC1(___REF_SUB(229))
               ___VEC1(___REF_SUB(231))
               ___VEC1(___REF_SUB(233))
               ___VEC1(___REF_SUB(235))
               ___VEC1(___REF_SUB(237))
               ___VEC1(___REF_SUB(239))
               ___VEC1(___REF_SUB(241))
               ___VEC1(___REF_SUB(243))
               ___VEC1(___REF_SUB(245))
               ___VEC1(___REF_SUB(247))
               ___VEC1(___REF_SUB(249))
               ___VEC1(___REF_SUB(251))
               ___VEC1(___REF_SUB(253))
               ___VEC1(___REF_SUB(255))
               ___VEC1(___REF_SUB(257))
               ___VEC1(___REF_SUB(259))
               ___VEC1(___REF_SUB(261))
               ___VEC0
___DEF_SUB_VEC(___X223,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(224))
               ___VEC0
___DEF_SUB_VEC(___X224,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X225,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(226))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X226,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(393302))
               ___VEC0
___DEF_SUB_VEC(___X227,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(228))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X228,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(393302))
               ___VEC0
___DEF_SUB_VEC(___X229,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(230))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X230,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(393302))
               ___VEC0
___DEF_SUB_VEC(___X231,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(232))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X232,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262229))
               ___VEC0
___DEF_SUB_VEC(___X233,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(234))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X234,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(262229))
               ___VEC0
___DEF_SUB_VEC(___X235,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(236))
               ___VEC0
___DEF_SUB_VEC(___X236,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(524375))
               ___VEC0
___DEF_SUB_VEC(___X237,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(238))
               ___VEC0
___DEF_SUB_VEC(___X238,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X239,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(240))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X240,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(786522))
               ___VEC0
___DEF_SUB_VEC(___X241,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(242))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X242,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(786522))
               ___VEC0
___DEF_SUB_VEC(___X243,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(244))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X244,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1310811))
               ___VEC0
___DEF_SUB_VEC(___X245,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(246))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X246,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(917596))
               ___VEC0
___DEF_SUB_VEC(___X247,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(248))
               ___VEC0
___DEF_SUB_VEC(___X248,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(917601))
               ___VEC0
___DEF_SUB_VEC(___X249,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(250))
               ___VEC0
___DEF_SUB_VEC(___X250,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(655449))
               ___VEC0
___DEF_SUB_VEC(___X251,4UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(252))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X252,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(917596))
               ___VEC0
___DEF_SUB_VEC(___X253,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(254))
               ___VEC0
___DEF_SUB_VEC(___X254,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1048669))
               ___VEC0
___DEF_SUB_VEC(___X255,3UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(256))
               ___VEC1(___REF_FIX(425988))
               ___VEC0
___DEF_SUB_VEC(___X256,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1704030))
               ___VEC0
___DEF_SUB_VEC(___X257,3UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(258))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X258,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1704030))
               ___VEC0
___DEF_SUB_VEC(___X259,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(260))
               ___VEC0
___DEF_SUB_VEC(___X260,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1048669))
               ___VEC0
___DEF_SUB_VEC(___X261,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(262))
               ___VEC0
___DEF_SUB_VEC(___X262,2UL)
               ___VEC1(___REF_SYM(16,___S_jazz_2e_event_2e_Pulse))
               ___VEC1(___REF_FIX(1376351))
               ___VEC0
___DEF_SUB_VEC(___X263,3UL)
               ___VEC1(___REF_SYM(25,___S_self))
               ___VEC1(___REF_SYM(34,___S_timeout))
               ___VEC1(___REF_CNS(4))
               ___VEC0
___DEF_SUB_VEC(___X264,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_event_2e_Pulse))
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
,___DEF_SUB(___X200)
,___DEF_SUB(___X201)
,___DEF_SUB(___X202)
,___DEF_SUB(___X203)
,___DEF_SUB(___X204)
,___DEF_SUB(___X205)
,___DEF_SUB(___X206)
,___DEF_SUB(___X207)
,___DEF_SUB(___X208)
,___DEF_SUB(___X209)
,___DEF_SUB(___X210)
,___DEF_SUB(___X211)
,___DEF_SUB(___X212)
,___DEF_SUB(___X213)
,___DEF_SUB(___X214)
,___DEF_SUB(___X215)
,___DEF_SUB(___X216)
,___DEF_SUB(___X217)
,___DEF_SUB(___X218)
,___DEF_SUB(___X219)
,___DEF_SUB(___X220)
,___DEF_SUB(___X221)
,___DEF_SUB(___X222)
,___DEF_SUB(___X223)
,___DEF_SUB(___X224)
,___DEF_SUB(___X225)
,___DEF_SUB(___X226)
,___DEF_SUB(___X227)
,___DEF_SUB(___X228)
,___DEF_SUB(___X229)
,___DEF_SUB(___X230)
,___DEF_SUB(___X231)
,___DEF_SUB(___X232)
,___DEF_SUB(___X233)
,___DEF_SUB(___X234)
,___DEF_SUB(___X235)
,___DEF_SUB(___X236)
,___DEF_SUB(___X237)
,___DEF_SUB(___X238)
,___DEF_SUB(___X239)
,___DEF_SUB(___X240)
,___DEF_SUB(___X241)
,___DEF_SUB(___X242)
,___DEF_SUB(___X243)
,___DEF_SUB(___X244)
,___DEF_SUB(___X245)
,___DEF_SUB(___X246)
,___DEF_SUB(___X247)
,___DEF_SUB(___X248)
,___DEF_SUB(___X249)
,___DEF_SUB(___X250)
,___DEF_SUB(___X251)
,___DEF_SUB(___X252)
,___DEF_SUB(___X253)
,___DEF_SUB(___X254)
,___DEF_SUB(___X255)
,___DEF_SUB(___X256)
,___DEF_SUB(___X257)
,___DEF_SUB(___X258)
,___DEF_SUB(___X259)
,___DEF_SUB(___X260)
,___DEF_SUB(___X261)
,___DEF_SUB(___X262)
,___DEF_SUB(___X263)
,___DEF_SUB(___X264)
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L35_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L36_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L37_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L38_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L39_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L40_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L41_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL(___L42_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L7_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L8_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L9_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L10_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L11_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L12_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL(___L13_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_M_HLBL(___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_M_HLBL(___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_M_HLBL(___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_M_HLBL(___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_M_HLBL(___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L7_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L8_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L9_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L10_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L11_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L12_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L13_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L14_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L15_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L16_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L17_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L18_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_M_HLBL(___L19_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_event_2e_Pulse_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L35_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L36_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L37_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L38_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L39_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L40_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L41_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_P_HLBL(___L42_bin_3a_jazz_2e_event_2e_Pulse_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),54,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),54,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_R1(___SYM_jazz_2e_event)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),54,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_STK(1,___SYM_jazz_2e_event_2e_Pulse)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),57,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_R1(___SYM_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),52,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L46_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),55,___G_jazz_3a_new_2d_class)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___GOTO(___L43_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_GLBL(___L43_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(37,___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class,___FIX(11L)))
   ___SET_GLO(38,___G_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),52,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L45_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object)
   ___SET_R1(___SYM_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(10))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),55,___G_jazz_3a_new_2d_class)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___GOTO(___L44_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_event_2e_Pulse_23_)
___DEF_GLBL(___L44_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(1,___G_jazz_2e_event_2e_Pulse_3a_Pulse,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_event_2e_Pulse_3a_Pulse_21_level,___R1)
   ___SET_GLO(18,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize,___PRC(45))
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_STK(2,___SYM_name)
   ___SET_STK(3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
   ___SET_STK(-2,___LBL(42))
   ___SET_R3(___LBL(41))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(12))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),50,___G_jazz_3a_add_2d_property)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(20,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_slot,___FIX(2L)))
   ___SET_GLO(19,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset,___R1)
   ___SET_GLO(13,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name,___PRC(47))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
   ___SET_R2(___SYM_get_2d_name)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(29,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name,___PRC(49))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
   ___SET_R2(___SYM_set_2d_name)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(3,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize,___PRC(51))
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_STK(2,___SYM_delay)
   ___SET_STK(3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
   ___SET_STK(-2,___LBL(40))
   ___SET_R3(___LBL(39))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(15))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),50,___G_jazz_3a_add_2d_property)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(5,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_slot,___FIX(2L)))
   ___SET_GLO(4,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset,___R1)
   ___SET_GLO(11,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay,___PRC(53))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
   ___SET_R2(___SYM_get_2d_delay)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(27,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay,___PRC(55))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
   ___SET_R2(___SYM_set_2d_delay)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(21,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize,___PRC(57))
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_STK(2,___SYM_period)
   ___SET_STK(3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
   ___SET_STK(-2,___LBL(38))
   ___SET_R3(___LBL(37))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(18))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),50,___G_jazz_3a_add_2d_property)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(23,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_slot,___FIX(2L)))
   ___SET_GLO(22,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset,___R1)
   ___SET_GLO(14,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period,___PRC(59))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
   ___SET_R2(___SYM_get_2d_period)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(30,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period,___PRC(61))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
   ___SET_R2(___SYM_set_2d_period)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(24,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize,___PRC(63))
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_STK(2,___SYM_repeat_3f_)
   ___SET_STK(3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
   ___SET_STK(-2,___LBL(36))
   ___SET_R3(___LBL(35))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(21))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),50,___G_jazz_3a_add_2d_property)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(26,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_slot,___FIX(2L)))
   ___SET_GLO(25,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset,___R1)
   ___SET_GLO(15,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_,___PRC(65))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
   ___SET_R2(___SYM_get_2d_repeat_3f_)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(31,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_,___PRC(67))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
   ___SET_R2(___SYM_set_2d_repeat_3f_)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(8,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize,___PRC(69))
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_STK(2,___SYM_execute)
   ___SET_STK(3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
   ___SET_STK(-2,___LBL(34))
   ___SET_R3(___LBL(33))
   ___SET_R1(___TRU)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(24))
   ___ADJFP(3)
   ___JUMPGLOSAFE(___SET_NARGS(6),50,___G_jazz_3a_add_2d_property)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(10,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_slot,___FIX(2L)))
   ___SET_GLO(9,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset,___R1)
   ___SET_GLO(12,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute,___PRC(71))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
   ___SET_R2(___SYM_get_2d_execute)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(28,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute,___PRC(73))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
   ___SET_R2(___SYM_set_2d_execute)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(34,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize,___PRC(75))
   ___SET_STK(1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
   ___SET_R1(___SYM_thread)
   ___SET_R0(___LBL(27))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),51,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(36,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_slot,___FIX(2L)))
   ___SET_GLO(35,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset,___R1)
   ___SET_GLO(16,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___PRC(77))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(3),49,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(17,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node,___R1)
   ___SET_GLO(6,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,___PRC(92))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___SET_R2(___SYM_destroy)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(3),49,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(7,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node,___R1)
   ___SET_GLO(33,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_,___PRC(99))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
   ___SET_R2(___SYM_terminated_3f_)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(30))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_GLO(32,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___PRC(101))
   ___SET_R3(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R2(___SYM_start_2d_loop)
   ___SET_R1(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(31))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___POLL(32)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(33,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(34,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(35,___L35_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(35,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(36,___L36_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(36,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(37,___L37_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(37,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(38,___L38_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(38,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(39,___L39_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(39,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(40,___L40_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(40,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(41,___L41_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(41,2,0,0)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(42,___L42_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(42,1,0,0)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L45_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_R1(___SYM_jazz_2e_event_2e_Pulse_3a_Pulse)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),53,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L46_bin_3a_jazz_2e_event_2e_Pulse_23_)
   ___SET_R1(___SYM_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),53,___G_jazz_3a_global_2d_ref)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 47
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 49
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay
#undef ___PH_LBL0
#define ___PH_LBL0 53
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay
#undef ___PH_LBL0
#define ___PH_LBL0 55
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 57
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period
#undef ___PH_LBL0
#define ___PH_LBL0 59
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period
#undef ___PH_LBL0
#define ___PH_LBL0 61
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 63
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_
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
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 67
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 69
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute
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
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute
#undef ___PH_LBL0
#define ___PH_LBL0 73
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute)
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 75
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 77
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L7_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L8_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L9_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L10_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L11_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L12_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_P_HLBL(___L13_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___IF_NARGS_EQ(4,___PUSH(___R1) ___SET_R1(___R2) ___SET_R2(___R3) ___SET_R3(___NUL))
   ___GET_REST(0,4,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___R3)
   ___ADJFP(10)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
___DEF_SLBL(2,___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_STK(-4,___R1)
   ___SET_STK(1,___KEY_delay)
   ___SET_R2(___LBL(13))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(3))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(3,___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_STK(-3,___R1)
   ___SET_STK(1,___KEY_repeat_3f_)
   ___SET_R2(___LBL(12))
   ___SET_R1(___STK(-4))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(4,___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_STK(-2,___R1)
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
___DEF_SLBL(5,___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),56,___G_jazz_3a_not_2d_null_3f_)
___DEF_SLBL(6,___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L14_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___END_IF
   ___SET_R1(___STK(-8))
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
___DEF_SLBL(7,___L7_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(169))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(8,___L8_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
___DEF_GLBL(___L14_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___SET_R1(___STK(-15))
   ___SET_R0(___LBL(9))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-9))
___DEF_SLBL(9,___L9_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___VECTORSET(___STK(-15),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset,___STK(-14))
   ___VECTORSET(___STK(-15),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset,___STK(-12))
   ___VECTORSET(___STK(-15),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset,___STK(-7))
   ___VECTORSET(___STK(-15),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset,___STK(-6))
   ___VECTORSET(___STK(-15),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset,___STK(-11))
   ___SET_R1(___STK(-15))
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_SLBL(10,___L10_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___VECTORSET(___STK(-15),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset,___R1) ___SET_R1(___STK(-15))
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___ADJFP(-16)
   ___JUMPPRM(___NOTHING,___STK(3))
___DEF_SLBL(12,___L12_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(12,0,0,0)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(13,___L13_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(13,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy
#undef ___PH_LBL0
#define ___PH_LBL0 92
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_P_HLBL(___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_P_HLBL(___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_P_HLBL(___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_P_HLBL(___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___DEF_P_HLBL(___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy_21_node,___FIX(4L)))
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset))))
   ___GOTO(___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___END_IF
   ___SET_R3(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset))
   ___VECTORSET(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset,___FAL)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(4,___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 99
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_offset))
   ___SET_R2(___BOOLEAN(___FALSEP(___R2)))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop
#undef ___PH_LBL0
#define ___PH_LBL0 101
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L7_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L8_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L9_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L10_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L11_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L12_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L13_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L14_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L15_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L16_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L17_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L18_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_P_HLBL(___L19_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(3),6)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(3))
   ___SET_R2(___VECTORREF(___STK(2),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_offset))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
___DEF_SLBL(3,___L3_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),58,___G_thread_2d_start_21_)
___DEF_SLBL(4,___L4_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(6,___L6_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(6,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___SET_R1(___VECTORREF(___R3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_offset))
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L20_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___END_IF
   ___SET_R3(___CLO(___R4,1))
   ___SET_R2(___VECTORREF(___R3,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset))
   ___SET_R1(___R2)
___DEF_GLBL(___L20_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_GLBL(___L21_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___ADJFP(8)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),45,___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
___DEF_SLBL(9,___L9_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
___DEF_SLBL(10,___L10_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L24_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___END_IF
   ___IF(___NOTFALSEP(___VECTORREF(___STK(-6),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset)))
   ___GOTO(___L22_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___END_IF
   ___GOTO(___L23_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_SLBL(11,___L11_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___STK(-6),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_offset))))
   ___GOTO(___L23_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___END_IF
___DEF_GLBL(___L22_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R2(___VECTORREF(___STK(-6),___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_offset))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(12)
___DEF_SLBL(12,___L12_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___GOTO(___L21_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
___DEF_GLBL(___L23_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R1(___VOID)
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L24_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_STK(-4,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-4),15)
   ___ADD_CLO_ELEM(0,___STK(-6))
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(11))
   ___CHECK_HEAP(14,4096)
___DEF_SLBL(14,___L14_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_2e_event_3a_synchronize_2d_event)
___DEF_SLBL(15,___L15_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(15,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___ADJFP(8)
   ___POLL(16)
___DEF_SLBL(16,___L16_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_)
___DEF_SLBL(17,___L17_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L25_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(18)
___DEF_SLBL(18,___L18_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L25_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___SET_R0(___STK(-7))
   ___SET_R4(___CLO(___STK(-6),1))
   ___SET_R1(___VECTORREF(___R4,___GLO_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_offset))
   ___POLL(19)
___DEF_SLBL(19,___L19_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop)
   ___ADJFP(-8)
   ___JUMPGENSAFE(___SET_NARGS(0),___R1)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,"bin:jazz.event.Pulse#",___REF_SUB(0),43,0)

,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,2,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_2e_Pulse_23_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize,0,___REF_SUB(89),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_name_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name,0,___REF_SUB(94),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name,0,___REF_SUB(99),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_name,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize,0,___REF_SUB(104),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_delay_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay,0,___REF_SUB(109),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_delay,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay,0,___REF_SUB(114),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_delay,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize,0,___REF_SUB(119),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_period_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period,0,___REF_SUB(124),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_period,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period,0,___REF_SUB(129),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_period,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize,0,___REF_SUB(134),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_repeat_3f__21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_,0,___REF_SUB(139),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_repeat_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_,0,___REF_SUB(144),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_repeat_3f_,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize,0,___REF_SUB(149),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_execute_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute,0,___REF_SUB(154),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_get_2d_execute,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute,0,___REF_SUB(159),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_set_2d_execute,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize,0,___REF_SUB(164),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_thread_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,0,___REF_SUB(170),14,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,5,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___OFD(___RETI,12,2,0x3f07fL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,9,2,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,9,2,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,9,2,0x1ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,13,2,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,13,2,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,13,2,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,13,2,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,13,2,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___IFD(___RETN,13,2,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,___OFD(___RETI,16,2,0x3f03ffL))
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_initialize,0,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,0,___REF_SUB(201),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_destroy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_,0,___REF_SUB(216),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_terminated_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,0,___REF_SUB(221),20,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,0,1)
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_PROC(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,0,1)
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_event_2e_Pulse_3a_Pulse_3a_start_2d_loop,___IFD(___RETI,8,8,0x3f00L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,2)
               ___GCMAP1(0x3f07fL)
,___DEF_OFD(___RETI,16,2)
               ___GCMAP1(0x3f03ffL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_event_2e_Pulse_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_event_2e_Pulse_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Pulse,"Pulse")
___DEF_MOD_SYM(1,___S_Pulse_7e_Class,"Pulse~Class")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_event_2e_Pulse,"bin:jazz.event.Pulse")
___DEF_MOD_SYM(3,___S_box_5e_5,"box^5")
___DEF_MOD_SYM(4,___S_delay,"delay")
___DEF_MOD_SYM(5,___S_destroy,"destroy")
___DEF_MOD_SYM(6,___S_execute,"execute")
___DEF_MOD_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(8,___S_get_2d_delay,"get-delay")
___DEF_MOD_SYM(9,___S_get_2d_execute,"get-execute")
___DEF_MOD_SYM(10,___S_get_2d_name,"get-name")
___DEF_MOD_SYM(11,___S_get_2d_period,"get-period")
___DEF_MOD_SYM(12,___S_get_2d_repeat_3f_,"get-repeat?")
___DEF_MOD_SYM(13,___S_initialize,"initialize")
___DEF_MOD_SYM(14,___S_jazz,"jazz")
___DEF_MOD_SYM(15,___S_jazz_2e_event,"jazz.event")
___DEF_MOD_SYM(16,___S_jazz_2e_event_2e_Pulse,"jazz.event.Pulse")
___DEF_MOD_SYM(17,___S_jazz_2e_event_2e_Pulse_3a_Pulse,"jazz.event.Pulse:Pulse")
___DEF_MOD_SYM(18,___S_jazz_2e_event_2e_Pulse_3a_Pulse_7e_Class,"jazz.event.Pulse:Pulse~Class")
___DEF_MOD_SYM(19,___S_name,"name")
___DEF_MOD_SYM(20,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(21,___S_period,"period")
___DEF_MOD_SYM(22,___S_protected,"protected")
___DEF_MOD_SYM(23,___S_repeat_3f_,"repeat?")
___DEF_MOD_SYM(24,___S_rest,"rest")
___DEF_MOD_SYM(25,___S_self,"self")
___DEF_MOD_SYM(26,___S_set_2d_delay,"set-delay")
___DEF_MOD_SYM(27,___S_set_2d_execute,"set-execute")
___DEF_MOD_SYM(28,___S_set_2d_name,"set-name")
___DEF_MOD_SYM(29,___S_set_2d_period,"set-period")
___DEF_MOD_SYM(30,___S_set_2d_repeat_3f_,"set-repeat?")
___DEF_MOD_SYM(31,___S_start_2d_loop,"start-loop")
___DEF_MOD_SYM(32,___S_terminated_3f_,"terminated?")
___DEF_MOD_SYM(33,___S_thread,"thread")
___DEF_MOD_SYM(34,___S_timeout,"timeout")
___DEF_MOD_KEY(0,___K_delay,"delay")
___DEF_MOD_KEY(1,___K_repeat_3f_,"repeat?")
___END_MOD_SYM_KEY

#endif
