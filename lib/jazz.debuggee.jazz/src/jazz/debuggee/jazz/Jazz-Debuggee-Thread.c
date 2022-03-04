#ifdef ___LINKER_INFO
; File: "Jazz-Debuggee-Thread.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread"
(("bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread"))
(
"Jazz-Debuggee-Thread"
"Jazz-Debuggee-Thread~Class"
"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread"
"box"
"foundation.dialect"
"frame"
"frame-proxy"
"get-debugged-continuation?"
"get-id"
"get-name"
"get-object"
"get-priority"
"get-state"
"get-stops"
"get-thread"
"initialize"
"jazz"
"jazz.debuggee"
"jazz.debuggee.autoload"
"jazz.debuggee.base"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class"
"loaded?"
"nextmethod"
"protected"
"self"
"set-repl-frame"
"set-thread"
"thread"
)
(
)
(
"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread#"
"jazz.debuggee.base:Debuggee-Thread:autoload"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-debugged-continuation?"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-id"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-name"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-priority"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-state"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-stops"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-thread"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:initialize"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:initialize!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:set-repl-frame"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:set-thread"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:thread!offset"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:thread!slot"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class"
"jazz/debuggee/jazz/Jazz-Debuggee-Thread_get-object!d^7"
)
(
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread!level"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-debugged-continuation?!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-id!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-name!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-priority!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-state!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-stops!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:set-repl-frame!node"
"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class!level"
)
(
"jazz.debuggee.base:Debuggee-Thread"
"jazz.debuggee:current-repl-frame"
"jazz.debuggee:debugged-continuations-thread-group"
"jazz.debuggee:thread-active-stops"
"jazz.language.runtime.functional:present-thread-state"
"jazz.language.runtime.functional:thread-post"
"jazz:add-final-method"
"jazz:add-method-node"
"jazz:add-slot"
"jazz:cache-dispatch"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new-class"
"jazz:object->serial"
"jazz:register-module"
"set-box!"
"thread-base-priority"
"thread-name"
"thread-state"
"thread-thread-group"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread
#define ___MH_PROC ___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 30
#define ___GLOCOUNT 48
#define ___SUPCOUNT 27
#define ___CNSCOUNT 6
#define ___SUBCOUNT 194
#define ___LBLCOUNT 91
#define ___MODDESCR ___REF_SUB(193)
#include "gambit.h"

___NEED_SYM(___S_Jazz_2d_Debuggee_2d_Thread)
___NEED_SYM(___S_Jazz_2d_Debuggee_2d_Thread_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread)
___NEED_SYM(___S_box)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_frame)
___NEED_SYM(___S_frame_2d_proxy)
___NEED_SYM(___S_get_2d_debugged_2d_continuation_3f_)
___NEED_SYM(___S_get_2d_id)
___NEED_SYM(___S_get_2d_name)
___NEED_SYM(___S_get_2d_object)
___NEED_SYM(___S_get_2d_priority)
___NEED_SYM(___S_get_2d_state)
___NEED_SYM(___S_get_2d_stops)
___NEED_SYM(___S_get_2d_thread)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_debuggee)
___NEED_SYM(___S_jazz_2e_debuggee_2e_autoload)
___NEED_SYM(___S_jazz_2e_debuggee_2e_base)
___NEED_SYM(___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread)
___NEED_SYM(___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
___NEED_SYM(___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_self)
___NEED_SYM(___S_set_2d_repl_2d_frame)
___NEED_SYM(___S_set_2d_thread)
___NEED_SYM(___S_thread)

___NEED_GLO(___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___NEED_GLO(___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread)
___NEED_GLO(___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_21_level)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f__21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame_21_node)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
___NEED_GLO(___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_debuggee_3a_current_2d_repl_2d_frame)
___NEED_GLO(___G_jazz_2e_debuggee_3a_debugged_2d_continuations_2d_thread_2d_group)
___NEED_GLO(___G_jazz_2e_debuggee_3a_thread_2d_active_2d_stops)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_present_2d_thread_2d_state)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
___NEED_GLO(___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_cache_2d_dispatch)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_object_2d__3e_serial)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_set_2d_box_21_)
___NEED_GLO(___G_thread_2d_base_2d_priority)
___NEED_GLO(___G_thread_2d_name)
___NEED_GLO(___G_thread_2d_state)
___NEED_GLO(___G_thread_2d_thread_2d_group)

___BEGIN_SYM
___DEF_SYM(0,___S_Jazz_2d_Debuggee_2d_Thread,"Jazz-Debuggee-Thread")
___DEF_SYM(1,___S_Jazz_2d_Debuggee_2d_Thread_7e_Class,"Jazz-Debuggee-Thread~Class")
___DEF_SYM(2,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread")

___DEF_SYM(3,___S_box,"box")
___DEF_SYM(4,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(5,___S_frame,"frame")
___DEF_SYM(6,___S_frame_2d_proxy,"frame-proxy")
___DEF_SYM(7,___S_get_2d_debugged_2d_continuation_3f_,"get-debugged-continuation?")
___DEF_SYM(8,___S_get_2d_id,"get-id")
___DEF_SYM(9,___S_get_2d_name,"get-name")
___DEF_SYM(10,___S_get_2d_object,"get-object")
___DEF_SYM(11,___S_get_2d_priority,"get-priority")
___DEF_SYM(12,___S_get_2d_state,"get-state")
___DEF_SYM(13,___S_get_2d_stops,"get-stops")
___DEF_SYM(14,___S_get_2d_thread,"get-thread")
___DEF_SYM(15,___S_initialize,"initialize")
___DEF_SYM(16,___S_jazz,"jazz")
___DEF_SYM(17,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_SYM(18,___S_jazz_2e_debuggee_2e_autoload,"jazz.debuggee.autoload")
___DEF_SYM(19,___S_jazz_2e_debuggee_2e_base,"jazz.debuggee.base")
___DEF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread,"jazz.debuggee.jazz.Jazz-Debuggee-Thread")

___DEF_SYM(21,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread")

___DEF_SYM(22,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class")

___DEF_SYM(23,___S_loaded_3f_,"loaded?")
___DEF_SYM(24,___S_nextmethod,"nextmethod")
___DEF_SYM(25,___S_protected,"protected")
___DEF_SYM(26,___S_self,"self")
___DEF_SYM(27,___S_set_2d_repl_2d_frame,"set-repl-frame")
___DEF_SYM(28,___S_set_2d_thread,"set-thread")
___DEF_SYM(29,___S_thread,"thread")
___END_SYM

#define ___SYM_Jazz_2d_Debuggee_2d_Thread ___SYM(0,___S_Jazz_2d_Debuggee_2d_Thread)
#define ___SYM_Jazz_2d_Debuggee_2d_Thread_7e_Class ___SYM(1,___S_Jazz_2d_Debuggee_2d_Thread_7e_Class)
#define ___SYM_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread ___SYM(2,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread)
#define ___SYM_box ___SYM(3,___S_box)
#define ___SYM_foundation_2e_dialect ___SYM(4,___S_foundation_2e_dialect)
#define ___SYM_frame ___SYM(5,___S_frame)
#define ___SYM_frame_2d_proxy ___SYM(6,___S_frame_2d_proxy)
#define ___SYM_get_2d_debugged_2d_continuation_3f_ ___SYM(7,___S_get_2d_debugged_2d_continuation_3f_)
#define ___SYM_get_2d_id ___SYM(8,___S_get_2d_id)
#define ___SYM_get_2d_name ___SYM(9,___S_get_2d_name)
#define ___SYM_get_2d_object ___SYM(10,___S_get_2d_object)
#define ___SYM_get_2d_priority ___SYM(11,___S_get_2d_priority)
#define ___SYM_get_2d_state ___SYM(12,___S_get_2d_state)
#define ___SYM_get_2d_stops ___SYM(13,___S_get_2d_stops)
#define ___SYM_get_2d_thread ___SYM(14,___S_get_2d_thread)
#define ___SYM_initialize ___SYM(15,___S_initialize)
#define ___SYM_jazz ___SYM(16,___S_jazz)
#define ___SYM_jazz_2e_debuggee ___SYM(17,___S_jazz_2e_debuggee)
#define ___SYM_jazz_2e_debuggee_2e_autoload ___SYM(18,___S_jazz_2e_debuggee_2e_autoload)
#define ___SYM_jazz_2e_debuggee_2e_base ___SYM(19,___S_jazz_2e_debuggee_2e_base)
#define ___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread ___SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread)
#define ___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread ___SYM(21,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
#define ___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class ___SYM(22,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
#define ___SYM_loaded_3f_ ___SYM(23,___S_loaded_3f_)
#define ___SYM_nextmethod ___SYM(24,___S_nextmethod)
#define ___SYM_protected ___SYM(25,___S_protected)
#define ___SYM_self ___SYM(26,___S_self)
#define ___SYM_set_2d_repl_2d_frame ___SYM(27,___S_set_2d_repl_2d_frame)
#define ___SYM_set_2d_thread ___SYM(28,___S_set_2d_thread)
#define ___SYM_thread ___SYM(29,___S_thread)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread#")

___DEF_GLO(1,"jazz.debuggee.base:Debuggee-Thread:autoload")

___DEF_GLO(2,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread")

___DEF_GLO(3,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread!level")

___DEF_GLO(4,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-debugged-continuation?")

___DEF_GLO(5,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-debugged-continuation?!node")

___DEF_GLO(6,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-id")

___DEF_GLO(7,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-id!node")

___DEF_GLO(8,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-name")

___DEF_GLO(9,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-name!node")

___DEF_GLO(10,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-priority")

___DEF_GLO(11,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-priority!node")

___DEF_GLO(12,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-state")

___DEF_GLO(13,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-state!node")

___DEF_GLO(14,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-stops")

___DEF_GLO(15,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-stops!node")

___DEF_GLO(16,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:get-thread")

___DEF_GLO(17,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:initialize")

___DEF_GLO(18,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:initialize!node")

___DEF_GLO(19,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:set-repl-frame")

___DEF_GLO(20,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:set-repl-frame!node")

___DEF_GLO(21,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:set-thread")

___DEF_GLO(22,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:thread!offset")

___DEF_GLO(23,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread:thread!slot")

___DEF_GLO(24,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class")

___DEF_GLO(25,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class!level")

___DEF_GLO(26,"jazz/debuggee/jazz/Jazz-Debuggee-Thread_get-object!d^7")

___DEF_GLO(27,"jazz.debuggee.base:Debuggee-Thread")

___DEF_GLO(28,"jazz.debuggee:current-repl-frame")
___DEF_GLO(29,"jazz.debuggee:debugged-continuations-thread-group")

___DEF_GLO(30,"jazz.debuggee:thread-active-stops")

___DEF_GLO(31,"jazz.language.runtime.functional:present-thread-state")

___DEF_GLO(32,"jazz.language.runtime.functional:thread-post")

___DEF_GLO(33,"jazz:add-final-method")
___DEF_GLO(34,"jazz:add-method-node")
___DEF_GLO(35,"jazz:add-slot")
___DEF_GLO(36,"jazz:cache-dispatch")
___DEF_GLO(37,"jazz:global-bound?")
___DEF_GLO(38,"jazz:global-ref")
___DEF_GLO(39,"jazz:load-unit")
___DEF_GLO(40,"jazz:new-class")
___DEF_GLO(41,"jazz:object->serial")
___DEF_GLO(42,"jazz:register-module")
___DEF_GLO(43,"set-box!")
___DEF_GLO(44,"thread-base-priority")
___DEF_GLO(45,"thread-name")
___DEF_GLO(46,"thread-state")
___DEF_GLO(47,"thread-thread-group")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_ ___GLO(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
#define ___PRM_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_ ___PRM(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
#define ___GLO_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload ___GLO(1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload)
#define ___PRM_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload ___PRM(1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread ___GLO(2,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread ___PRM(2,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_21_level ___GLO(3,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_21_level)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_21_level ___PRM(3,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_21_level)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_ ___GLO(4,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_ ___PRM(4,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f__21_node ___GLO(5,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f__21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f__21_node ___PRM(5,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f__21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id ___GLO(6,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id ___PRM(6,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id_21_node ___GLO(7,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id_21_node ___PRM(7,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name ___GLO(8,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name ___PRM(8,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name_21_node ___GLO(9,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name_21_node ___PRM(9,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority ___GLO(10,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority ___PRM(10,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority_21_node ___GLO(11,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority_21_node ___PRM(11,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state ___GLO(12,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state ___PRM(12,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state_21_node ___GLO(13,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state_21_node ___PRM(13,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops ___GLO(14,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops ___PRM(14,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops_21_node ___GLO(15,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops_21_node ___PRM(15,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread ___GLO(16,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread ___PRM(16,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize ___GLO(17,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize ___PRM(17,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node ___GLO(18,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node ___PRM(18,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame ___GLO(19,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame ___PRM(19,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame_21_node ___GLO(20,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame_21_node)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame_21_node ___PRM(20,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame_21_node)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread ___GLO(21,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread ___PRM(21,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset ___GLO(22,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset ___PRM(22,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot ___GLO(23,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot ___PRM(23,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class ___GLO(24,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class ___PRM(24,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
#define ___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class_21_level ___GLO(25,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class_21_level)
#define ___PRM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class_21_level ___PRM(25,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class_21_level)
#define ___GLO_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7 ___GLO(26,___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7)
#define ___PRM_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7 ___PRM(26,___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7)
#define ___GLO_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread ___GLO(27,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread)
#define ___PRM_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread ___PRM(27,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread)
#define ___GLO_jazz_2e_debuggee_3a_current_2d_repl_2d_frame ___GLO(28,___G_jazz_2e_debuggee_3a_current_2d_repl_2d_frame)
#define ___PRM_jazz_2e_debuggee_3a_current_2d_repl_2d_frame ___PRM(28,___G_jazz_2e_debuggee_3a_current_2d_repl_2d_frame)
#define ___GLO_jazz_2e_debuggee_3a_debugged_2d_continuations_2d_thread_2d_group ___GLO(29,___G_jazz_2e_debuggee_3a_debugged_2d_continuations_2d_thread_2d_group)
#define ___PRM_jazz_2e_debuggee_3a_debugged_2d_continuations_2d_thread_2d_group ___PRM(29,___G_jazz_2e_debuggee_3a_debugged_2d_continuations_2d_thread_2d_group)
#define ___GLO_jazz_2e_debuggee_3a_thread_2d_active_2d_stops ___GLO(30,___G_jazz_2e_debuggee_3a_thread_2d_active_2d_stops)
#define ___PRM_jazz_2e_debuggee_3a_thread_2d_active_2d_stops ___PRM(30,___G_jazz_2e_debuggee_3a_thread_2d_active_2d_stops)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_present_2d_thread_2d_state ___GLO(31,___G_jazz_2e_language_2e_runtime_2e_functional_3a_present_2d_thread_2d_state)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_present_2d_thread_2d_state ___PRM(31,___G_jazz_2e_language_2e_runtime_2e_functional_3a_present_2d_thread_2d_state)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post ___GLO(32,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post ___PRM(32,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(33,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(33,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(34,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(34,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(35,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(35,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_cache_2d_dispatch ___GLO(36,___G_jazz_3a_cache_2d_dispatch)
#define ___PRM_jazz_3a_cache_2d_dispatch ___PRM(36,___G_jazz_3a_cache_2d_dispatch)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(37,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(37,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(38,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(38,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(39,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(39,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(40,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(40,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_object_2d__3e_serial ___GLO(41,___G_jazz_3a_object_2d__3e_serial)
#define ___PRM_jazz_3a_object_2d__3e_serial ___PRM(41,___G_jazz_3a_object_2d__3e_serial)
#define ___GLO_jazz_3a_register_2d_module ___GLO(42,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(42,___G_jazz_3a_register_2d_module)
#define ___GLO_set_2d_box_21_ ___GLO(43,___G_set_2d_box_21_)
#define ___PRM_set_2d_box_21_ ___PRM(43,___G_set_2d_box_21_)
#define ___GLO_thread_2d_base_2d_priority ___GLO(44,___G_thread_2d_base_2d_priority)
#define ___PRM_thread_2d_base_2d_priority ___PRM(44,___G_thread_2d_base_2d_priority)
#define ___GLO_thread_2d_name ___GLO(45,___G_thread_2d_name)
#define ___PRM_thread_2d_name ___PRM(45,___G_thread_2d_name)
#define ___GLO_thread_2d_state ___GLO(46,___G_thread_2d_state)
#define ___PRM_thread_2d_state ___PRM(46,___G_thread_2d_state)
#define ___GLO_thread_2d_thread_2d_group ___GLO(47,___G_thread_2d_thread_2d_group)
#define ___PRM_thread_2d_thread_2d_group ___PRM(47,___G_thread_2d_thread_2d_group)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_Jazz_2d_Debuggee_2d_Thread),___REF_SYM(21,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(1,___S_Jazz_2d_Debuggee_2d_Thread_7e_Class),___REF_SYM(22,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class))
,___DEF_CNS(___REF_FIX(32769),___REF_NUL)
,___DEF_CNS(___REF_FIX(32772),___REF_NUL)
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
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131127))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131131))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131146))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131150))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131154))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131154))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X66,3UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X70,3UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(23,___S_loaded_3f_))
               ___VEC1(___REF_CNS(4))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X74,1UL)
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X77,0UL)
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X79,1UL)
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X82,0UL)
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_SUB(93))
               ___VEC0
___DEF_SUB_VEC(___X84,4UL)
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X87,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262195))
               ___VEC0
___DEF_SUB_VEC(___X89,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262195))
               ___VEC0
___DEF_SUB_VEC(___X91,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262196))
               ___VEC0
___DEF_SUB_VEC(___X93,3UL)
               ___VEC1(___REF_SYM(24,___S_nextmethod))
               ___VEC1(___REF_SYM(29,___S_thread))
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(104))
               ___VEC0
___DEF_SUB_VEC(___X95,4UL)
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(102))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(97))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131127))
               ___VEC0
___DEF_SUB_VEC(___X98,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262200))
               ___VEC0
___DEF_SUB_VEC(___X100,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262200))
               ___VEC0
___DEF_SUB_VEC(___X102,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262200))
               ___VEC0
___DEF_SUB_VEC(___X104,1UL)
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_SUB(115))
               ___VEC0
___DEF_SUB_VEC(___X106,4UL)
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(108))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131131))
               ___VEC0
___DEF_SUB_VEC(___X109,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262204))
               ___VEC0
___DEF_SUB_VEC(___X111,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262204))
               ___VEC0
___DEF_SUB_VEC(___X113,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(114))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262204))
               ___VEC0
___DEF_SUB_VEC(___X115,1UL)
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_SUB(117))
               ___VEC1(___REF_SUB(128))
               ___VEC0
___DEF_SUB_VEC(___X117,5UL)
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(119))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X120,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(1704000))
               ___VEC0
___DEF_SUB_VEC(___X122,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(1704000))
               ___VEC0
___DEF_SUB_VEC(___X124,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X126,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X128,1UL)
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(139))
               ___VEC0
___DEF_SUB_VEC(___X130,4UL)
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_SUB(137))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(132))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131139))
               ___VEC0
___DEF_SUB_VEC(___X133,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262212))
               ___VEC0
___DEF_SUB_VEC(___X135,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(136))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262212))
               ___VEC0
___DEF_SUB_VEC(___X137,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262212))
               ___VEC0
___DEF_SUB_VEC(___X139,1UL)
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_SUB(150))
               ___VEC0
___DEF_SUB_VEC(___X141,4UL)
               ___VEC1(___REF_SUB(142))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_SUB(148))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(143))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131146))
               ___VEC0
___DEF_SUB_VEC(___X144,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(589899))
               ___VEC0
___DEF_SUB_VEC(___X146,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(589899))
               ___VEC0
___DEF_SUB_VEC(___X148,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262219))
               ___VEC0
___DEF_SUB_VEC(___X150,1UL)
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_SUB(161))
               ___VEC0
___DEF_SUB_VEC(___X152,4UL)
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_SUB(159))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(154))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131150))
               ___VEC0
___DEF_SUB_VEC(___X155,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(156))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X156,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262223))
               ___VEC0
___DEF_SUB_VEC(___X157,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X158,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262223))
               ___VEC0
___DEF_SUB_VEC(___X159,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X160,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(262223))
               ___VEC0
___DEF_SUB_VEC(___X161,1UL)
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(192))
               ___VEC0
___DEF_SUB_VEC(___X163,14UL)
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
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
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(165))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(131154))
               ___VEC0
___DEF_SUB_VEC(___X166,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(2228307))
               ___VEC0
___DEF_SUB_VEC(___X168,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(2228307))
               ___VEC0
___DEF_SUB_VEC(___X170,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(2228307))
               ___VEC0
___DEF_SUB_VEC(___X172,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(393300))
               ___VEC0
___DEF_SUB_VEC(___X174,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(393300))
               ___VEC0
___DEF_SUB_VEC(___X176,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(393300))
               ___VEC0
___DEF_SUB_VEC(___X178,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(393300))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(181))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(524373))
               ___VEC0
___DEF_SUB_VEC(___X182,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_FIX(425990))
               ___VEC0
___DEF_SUB_VEC(___X183,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(1376342))
               ___VEC0
___DEF_SUB_VEC(___X184,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(185))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X185,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(1376342))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(187))
               ___VEC0
___DEF_SUB_VEC(___X187,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(655446))
               ___VEC0
___DEF_SUB_VEC(___X188,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(189))
               ___VEC1(___REF_FIX(98312))
               ___VEC0
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(917592))
               ___VEC0
___DEF_SUB_VEC(___X190,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(191))
               ___VEC1(___REF_FIX(98312))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
               ___VEC1(___REF_FIX(917592))
               ___VEC0
___DEF_SUB_VEC(___X192,5UL)
               ___VEC1(___REF_SYM(6,___S_frame_2d_proxy))
               ___VEC1(___REF_SYM(26,___S_self))
               ___VEC1(___REF_SYM(5,___S_frame))
               ___VEC1(___REF_CNS(5))
               ___VEC1(___REF_SYM(3,___S_box))
               ___VEC0
___DEF_SUB_VEC(___X193,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_M_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L6_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L7_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L8_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L9_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L10_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L11_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L12_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_M_HLBL(___L13_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_autoload)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_STK(1,___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),42,___G_jazz_3a_register_2d_module)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),31)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload,___STK(-2))
   ___SET_GLO(26,___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7,___FAL)
   ___SET_R2(___LBL(30))
   ___SET_R1(___SYM_get_2d_object)
   ___SET_R0(___LBL(8))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___JUMPGLOSAFE(___SET_NARGS(2),36,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(26,___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7,___R1)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),37,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L38_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___END_IF
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),38,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___GOTO(___L35_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_GLBL(___L35_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(24,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class,___FIX(11L)))
   ___SET_GLO(25,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),37,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L37_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
   ___SET_R0(___LBL(13))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R2(___R1)
   ___SET_R3(___NUL)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(14))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),40,___G_jazz_3a_new_2d_class)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___GOTO(___L36_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_GLBL(___L36_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(2,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread,___FIX(11L)))
   ___SET_GLO(3,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_thread)
   ___SET_R0(___LBL(16))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),35,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(23,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_slot,___FIX(2L)))
   ___SET_GLO(22,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset,___R1)
   ___SET_GLO(16,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread,___PRC(37))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
   ___SET_R2(___SYM_get_2d_thread)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),33,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(21,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread,___PRC(39))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
   ___SET_R2(___SYM_set_2d_thread)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(3),33,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(17,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize,___PRC(41))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(18,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node,___R1)
   ___SET_GLO(6,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id,___PRC(46))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
   ___SET_R2(___SYM_get_2d_id)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(7,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id_21_node,___R1)
   ___SET_GLO(8,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name,___PRC(51))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
   ___SET_R2(___SYM_get_2d_name)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(9,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name_21_node,___R1)
   ___SET_GLO(12,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,___PRC(56))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___SET_R2(___SYM_get_2d_state)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(13,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state_21_node,___R1)
   ___SET_GLO(10,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority,___PRC(62))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
   ___SET_R2(___SYM_get_2d_priority)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(11,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority_21_node,___R1)
   ___SET_GLO(4,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_,___PRC(67))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
   ___SET_R2(___SYM_get_2d_debugged_2d_continuation_3f_)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(5,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f__21_node,___R1)
   ___SET_GLO(14,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops,___PRC(72))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
   ___SET_R2(___SYM_get_2d_stops)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(15,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops_21_node,___R1)
   ___SET_GLO(19,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___PRC(77))
   ___SET_R3(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_R2(___SYM_set_2d_repl_2d_frame)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(3),34,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_GLO(20,___G_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame_21_node,___R1)
   ___SET_R1(___VOID)
   ___POLL(27)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L37_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),38,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L38_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R0(___LBL(29))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread_3a_autoload)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R2(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class)
   ___SET_R0(___LBL(11))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),40,___G_jazz_3a_new_2d_class)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(30,1,0,0)
   ___SET_GLO(26,___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(31,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L39_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___END_IF
   ___GOTO(___L40_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L39_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R1(___GLO_jazz_2e_debuggee_2e_base_3a_Debuggee_2d_Thread)
   ___POLL(33)
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L40_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_debuggee_2e_base)
   ___ADJFP(8)
   ___POLL(34)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_)
   ___SET_R0(___LBL(32))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread
#undef ___PH_LBL0
#define ___PH_LBL0 37
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread)
   ___VECTORSET(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 41
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(1),___R3)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
   ___VECTORSET(___STK(-6),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset,___STK(-5)) ___SET_R1(___STK(-6))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id
#undef ___PH_LBL0
#define ___PH_LBL0 46
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_jazz_3a_object_2d__3e_serial)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),45,___G_thread_2d_name)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state
#undef ___PH_LBL0
#define ___PH_LBL0 56
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___DEF_P_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_thread_2d_state)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),31,___G_jazz_2e_language_2e_runtime_2e_functional_3a_present_2d_thread_2d_state)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority
#undef ___PH_LBL0
#define ___PH_LBL0 62
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_thread_2d_base_2d_priority)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 67
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),47,___G_thread_2d_thread_2d_group)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
   ___SET_R1(___BOOLEAN(___EQP(___R1,___GLO_jazz_2e_debuggee_3a_debugged_2d_continuations_2d_thread_2d_group)))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops
#undef ___PH_LBL0
#define ___PH_LBL0 72
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),30,___G_jazz_2e_debuggee_3a_thread_2d_active_2d_stops)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame
#undef ___PH_LBL0
#define ___PH_LBL0 77
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L6_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L7_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L8_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L9_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L10_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L11_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L12_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___DEF_P_HLBL(___L13_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_STK(1,___R1)
   ___SET_R1(___R2)
   ___ADJFP(1)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L14_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_R1(___R2)
   ___ADJFP(7)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),26,___G_jazz_2f_debuggee_2f_jazz_2f_Jazz_2d_Debuggee_2d_Thread__get_2d_object_21_d_5e_7)
___DEF_SLBL(2,___L2_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-4))
___DEF_SLBL(3,___L3_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_R2(___STK(-5))
   ___SET_R0(___STK(-6))
   ___ADJFP(-7)
___DEF_GLBL(___L14_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(4),8)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(4))
   ___SET_R1(___VECTORREF(___STK(0),___GLO_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_thread_21_offset))
   ___SET_R2(___SYM_set_2d_repl_2d_frame)
   ___ADJFP(7)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
___DEF_SLBL(6,___L6_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_SLBL(8,___L8_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(8,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___ADJFP(8)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(0),28,___G_jazz_2e_debuggee_3a_current_2d_repl_2d_frame)
___DEF_SLBL(10,___L10_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___IF(___BOXP(___R1))
   ___GOTO(___L15_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L15_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___SET_STK(-5,___R1)
   ___SET_R2(___CLO(___STK(-6),1))
   ___SET_R0(___LBL(12))
   ___JUMPPRM(___SET_NARGS(2),___PRM_set_2d_box_21_)
___DEF_SLBL(12,___L12_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread#",
___REF_SUB(0),35,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread,0,___REF_SUB(73),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_thread,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread,0,___REF_SUB(78),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_thread,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize,0,___REF_SUB(83),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_initialize,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id,0,___REF_SUB(94),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_id,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name,0,___REF_SUB(105),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_name,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,0,___REF_SUB(116),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_state,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority,0,___REF_SUB(129),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_priority,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_,0,___REF_SUB(140),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_debugged_2d_continuation_3f_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops,0,___REF_SUB(151),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_get_2d_stops,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,0,___REF_SUB(162),14,0)
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETN,5,1,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_PROC(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,0,1)
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_3a_set_2d_repl_2d_frame,___IFD(___RETI,8,0,0x3f05L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Jazz_2d_Debuggee_2d_Thread,"Jazz-Debuggee-Thread")
___DEF_MOD_SYM(1,___S_Jazz_2d_Debuggee_2d_Thread_7e_Class,"Jazz-Debuggee-Thread~Class")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread,"bin:jazz.debuggee.jazz.Jazz-Debuggee-Thread")

___DEF_MOD_SYM(3,___S_box,"box")
___DEF_MOD_SYM(4,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(5,___S_frame,"frame")
___DEF_MOD_SYM(6,___S_frame_2d_proxy,"frame-proxy")
___DEF_MOD_SYM(7,___S_get_2d_debugged_2d_continuation_3f_,"get-debugged-continuation?")
___DEF_MOD_SYM(8,___S_get_2d_id,"get-id")
___DEF_MOD_SYM(9,___S_get_2d_name,"get-name")
___DEF_MOD_SYM(10,___S_get_2d_object,"get-object")
___DEF_MOD_SYM(11,___S_get_2d_priority,"get-priority")
___DEF_MOD_SYM(12,___S_get_2d_state,"get-state")
___DEF_MOD_SYM(13,___S_get_2d_stops,"get-stops")
___DEF_MOD_SYM(14,___S_get_2d_thread,"get-thread")
___DEF_MOD_SYM(15,___S_initialize,"initialize")
___DEF_MOD_SYM(16,___S_jazz,"jazz")
___DEF_MOD_SYM(17,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_MOD_SYM(18,___S_jazz_2e_debuggee_2e_autoload,"jazz.debuggee.autoload")
___DEF_MOD_SYM(19,___S_jazz_2e_debuggee_2e_base,"jazz.debuggee.base")
___DEF_MOD_SYM(20,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread,"jazz.debuggee.jazz.Jazz-Debuggee-Thread")

___DEF_MOD_SYM(21,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread")

___DEF_MOD_SYM(22,___S_jazz_2e_debuggee_2e_jazz_2e_Jazz_2d_Debuggee_2d_Thread_3a_Jazz_2d_Debuggee_2d_Thread_7e_Class,"jazz.debuggee.jazz.Jazz-Debuggee-Thread:Jazz-Debuggee-Thread~Class")

___DEF_MOD_SYM(23,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(24,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(25,___S_protected,"protected")
___DEF_MOD_SYM(26,___S_self,"self")
___DEF_MOD_SYM(27,___S_set_2d_repl_2d_frame,"set-repl-frame")
___DEF_MOD_SYM(28,___S_set_2d_thread,"set-thread")
___DEF_MOD_SYM(29,___S_thread,"thread")
___END_MOD_SYM_KEY

#endif
