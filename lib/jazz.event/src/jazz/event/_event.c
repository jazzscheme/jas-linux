#ifdef ___LINKER_INFO
; File: "_event.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.event"
(("bin:jazz.event"))
(
"Event"
"Event-Consumer"
"Pulse"
"assert-event-synchronized"
"bin:jazz.event"
"block-event"
"call-event"
"class"
"clone-event"
"construct-event"
"delay-event"
"deliver-event"
"event"
"event-synchronizer"
"event-thread"
"event-thread?"
"evt"
"foundation.dialect"
"get-event-consumer"
"hook"
"hook-event"
"hook-event-access"
"hooks"
"jazz"
"jazz.event"
"jazz.event.Event"
"jazz.event.Event:Event"
"jazz.event.Pulse"
"jazz.event.Pulse:Pulse"
"jazz.event.autoload"
"jazz.event:Event-Consumer"
"jazz.event:assert-event-synchronized"
"jazz.event:block-event"
"jazz.event:call-event"
"jazz.event:clone-event"
"jazz.event:construct-event"
"jazz.event:delay-event"
"jazz.event:event-synchronizer"
"jazz.event:event-thread"
"jazz.event:event-thread?"
"jazz.event:hook-event"
"jazz.event:hook-event-access"
"jazz.event:make-event"
"jazz.event:post-event"
"jazz.event:register-event-access-hook"
"jazz.event:register-event-hook"
"jazz.event:send-event"
"jazz.event:set-assert-event-synchronized"
"jazz.event:set-event-synchronizer"
"jazz.event:synchronize-event"
"jazz.event:unregister-event-access-hook"
"jazz.event:unregister-event-hook"
"jazz.platform"
"keyword"
"kind"
"loaded?"
"make-event"
"modifiers"
"post-event"
"proc"
"properties"
"public"
"register-event-access-hook"
"register-event-hook"
"rest"
"self"
"send-event"
"sender"
"set-assert-event-synchronized"
"set-event-consumer"
"set-event-synchronizer"
"set-property"
"synchronize-event"
"temp.11"
"temp.16"
"thunk"
"unregister-event-access-hook"
"unregister-event-hook"
"value"
)
(
)
(
"bin:jazz.event#"
"jazz.event.Event:Event:autoload"
"jazz.event:*event-access-hooks*"
"jazz.event:*event-hooks*"
"jazz.event:Event-Consumer"
"jazz.event:Event-Consumer:deliver-event"
"jazz.event:Event-Consumer:get-event-consumer"
"jazz.event:Event-Consumer:set-event-consumer"
"jazz.event:event-synchronizer"
"jazz.event:event-thread"
"jazz.event:send-event"
"jazz.platform:modifiers-mask:autoload"
"jazz.platform:parse-event-modifiers:autoload"
"jazz/event_set-property!d^0"
)
(
"jazz.event:Event-Consumer!rank"
"jazz.event:Event-Consumer:deliver-event!rank"
"jazz.event:Event-Consumer:get-event-consumer!rank"
"jazz.event:Event-Consumer:set-event-consumer!rank"
"jazz.event:assert-event-synchronized"
"jazz.event:block-event"
"jazz.event:call-event"
"jazz.event:clone-event"
"jazz.event:construct-event"
"jazz.event:delay-event"
"jazz.event:event-thread?"
"jazz.event:hook-event"
"jazz.event:hook-event-access"
"jazz.event:make-event"
"jazz.event:post-event"
"jazz.event:register-event-access-hook"
"jazz.event:register-event-hook"
"jazz.event:set-assert-event-synchronized"
"jazz.event:set-event-synchronizer"
"jazz.event:synchronize-event"
"jazz.event:unregister-event-access-hook"
"jazz.event:unregister-event-hook"
)
(
"%%jazz.language.runtime.object:copy"
"append"
"apply"
"jazz.event.Event:Event"
"jazz.language.runtime.exception:error"
"jazz.language.runtime.functional:for-each-property"
"jazz.language.runtime.functional:primordial-thread"
"jazz.language.runtime.functional:primordial-thread?"
"jazz.language.runtime.functional:remove!"
"jazz.language.runtime.functional:thread-block"
"jazz.language.runtime.functional:thread-call"
"jazz.language.runtime.functional:thread-execute"
"jazz.language.runtime.functional:thread-post"
"jazz.language.runtime.functional:thread-write"
"jazz.language.runtime.functional:write-delayed-event"
"jazz.platform:modifiers-mask"
"jazz.platform:parse-event-modifiers"
"jazz:Interface"
"jazz:Procedure"
"jazz:add-virtual-method"
"jazz:cache-dispatch"
"jazz:call-into-abstract"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new"
"jazz:new-interface"
"jazz:not-null?"
"jazz:register-module"
"jazz:type-error"
"jazz:unspecified"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.event"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_event
#define ___MH_PROC ___H_bin_3a_jazz_2e_event
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 79
#define ___GLOCOUNT 67
#define ___SUPCOUNT 36
#define ___CNSCOUNT 54
#define ___SUBCOUNT 390
#define ___LBLCOUNT 182
#define ___OFDCOUNT 5
#define ___MODDESCR ___REF_SUB(389)
#include "gambit.h"

___NEED_SYM(___S_Event)
___NEED_SYM(___S_Event_2d_Consumer)
___NEED_SYM(___S_Pulse)
___NEED_SYM(___S_assert_2d_event_2d_synchronized)
___NEED_SYM(___S_bin_3a_jazz_2e_event)
___NEED_SYM(___S_block_2d_event)
___NEED_SYM(___S_call_2d_event)
___NEED_SYM(___S_class)
___NEED_SYM(___S_clone_2d_event)
___NEED_SYM(___S_construct_2d_event)
___NEED_SYM(___S_delay_2d_event)
___NEED_SYM(___S_deliver_2d_event)
___NEED_SYM(___S_event)
___NEED_SYM(___S_event_2d_synchronizer)
___NEED_SYM(___S_event_2d_thread)
___NEED_SYM(___S_event_2d_thread_3f_)
___NEED_SYM(___S_evt)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_event_2d_consumer)
___NEED_SYM(___S_hook)
___NEED_SYM(___S_hook_2d_event)
___NEED_SYM(___S_hook_2d_event_2d_access)
___NEED_SYM(___S_hooks)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_event)
___NEED_SYM(___S_jazz_2e_event_2e_Event)
___NEED_SYM(___S_jazz_2e_event_2e_Event_3a_Event)
___NEED_SYM(___S_jazz_2e_event_2e_Pulse)
___NEED_SYM(___S_jazz_2e_event_2e_Pulse_3a_Pulse)
___NEED_SYM(___S_jazz_2e_event_2e_autoload)
___NEED_SYM(___S_jazz_2e_event_3a_Event_2d_Consumer)
___NEED_SYM(___S_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___NEED_SYM(___S_jazz_2e_event_3a_block_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_call_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_clone_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_construct_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_delay_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_event_2d_synchronizer)
___NEED_SYM(___S_jazz_2e_event_3a_event_2d_thread)
___NEED_SYM(___S_jazz_2e_event_3a_event_2d_thread_3f_)
___NEED_SYM(___S_jazz_2e_event_3a_hook_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_hook_2d_event_2d_access)
___NEED_SYM(___S_jazz_2e_event_3a_make_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_post_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___NEED_SYM(___S_jazz_2e_event_3a_register_2d_event_2d_hook)
___NEED_SYM(___S_jazz_2e_event_3a_send_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___NEED_SYM(___S_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
___NEED_SYM(___S_jazz_2e_event_3a_synchronize_2d_event)
___NEED_SYM(___S_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___NEED_SYM(___S_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___NEED_SYM(___S_jazz_2e_platform)
___NEED_SYM(___S_keyword)
___NEED_SYM(___S_kind)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_make_2d_event)
___NEED_SYM(___S_modifiers)
___NEED_SYM(___S_post_2d_event)
___NEED_SYM(___S_proc)
___NEED_SYM(___S_properties)
___NEED_SYM(___S_public)
___NEED_SYM(___S_register_2d_event_2d_access_2d_hook)
___NEED_SYM(___S_register_2d_event_2d_hook)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_self)
___NEED_SYM(___S_send_2d_event)
___NEED_SYM(___S_sender)
___NEED_SYM(___S_set_2d_assert_2d_event_2d_synchronized)
___NEED_SYM(___S_set_2d_event_2d_consumer)
___NEED_SYM(___S_set_2d_event_2d_synchronizer)
___NEED_SYM(___S_set_2d_property)
___NEED_SYM(___S_synchronize_2d_event)
___NEED_SYM(___S_temp_2e_11)
___NEED_SYM(___S_temp_2e_16)
___NEED_SYM(___S_thunk)
___NEED_SYM(___S_unregister_2d_event_2d_access_2d_hook)
___NEED_SYM(___S_unregister_2d_event_2d_hook)
___NEED_SYM(___S_value)

___NEED_GLO(___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_copy)
___NEED_GLO(___G_append)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_bin_3a_jazz_2e_event_23_)
___NEED_GLO(___G_jazz_2e_event_2e_Event_3a_Event)
___NEED_GLO(___G_jazz_2e_event_2e_Event_3a_Event_3a_autoload)
___NEED_GLO(___G_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_)
___NEED_GLO(___G_jazz_2e_event_3a__2a_event_2d_hooks_2a_)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_21_rank)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event_21_rank)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer_21_rank)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___NEED_GLO(___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer_21_rank)
___NEED_GLO(___G_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___NEED_GLO(___G_jazz_2e_event_3a_block_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_call_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_clone_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_construct_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_delay_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_event_2d_synchronizer)
___NEED_GLO(___G_jazz_2e_event_3a_event_2d_thread)
___NEED_GLO(___G_jazz_2e_event_3a_event_2d_thread_3f_)
___NEED_GLO(___G_jazz_2e_event_3a_hook_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_hook_2d_event_2d_access)
___NEED_GLO(___G_jazz_2e_event_3a_make_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_post_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___NEED_GLO(___G_jazz_2e_event_3a_register_2d_event_2d_hook)
___NEED_GLO(___G_jazz_2e_event_3a_send_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___NEED_GLO(___G_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
___NEED_GLO(___G_jazz_2e_event_3a_synchronize_2d_event)
___NEED_GLO(___G_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___NEED_GLO(___G_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_for_2d_each_2d_property)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_block)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_call)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_execute)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_write)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_write_2d_delayed_2d_event)
___NEED_GLO(___G_jazz_2e_platform_3a_modifiers_2d_mask)
___NEED_GLO(___G_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload)
___NEED_GLO(___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers)
___NEED_GLO(___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload)
___NEED_GLO(___G_jazz_2f_event__set_2d_property_21_d_5e_0)
___NEED_GLO(___G_jazz_3a_Interface)
___NEED_GLO(___G_jazz_3a_Procedure)
___NEED_GLO(___G_jazz_3a_add_2d_virtual_2d_method)
___NEED_GLO(___G_jazz_3a_cache_2d_dispatch)
___NEED_GLO(___G_jazz_3a_call_2d_into_2d_abstract)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new)
___NEED_GLO(___G_jazz_3a_new_2d_interface)
___NEED_GLO(___G_jazz_3a_not_2d_null_3f_)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_type_2d_error)
___NEED_GLO(___G_jazz_3a_unspecified)

___BEGIN_SYM
___DEF_SYM(0,___S_Event,"Event")
___DEF_SYM(1,___S_Event_2d_Consumer,"Event-Consumer")
___DEF_SYM(2,___S_Pulse,"Pulse")
___DEF_SYM(3,___S_assert_2d_event_2d_synchronized,"assert-event-synchronized")
___DEF_SYM(4,___S_bin_3a_jazz_2e_event,"bin:jazz.event")
___DEF_SYM(5,___S_block_2d_event,"block-event")
___DEF_SYM(6,___S_call_2d_event,"call-event")
___DEF_SYM(7,___S_class,"class")
___DEF_SYM(8,___S_clone_2d_event,"clone-event")
___DEF_SYM(9,___S_construct_2d_event,"construct-event")
___DEF_SYM(10,___S_delay_2d_event,"delay-event")
___DEF_SYM(11,___S_deliver_2d_event,"deliver-event")
___DEF_SYM(12,___S_event,"event")
___DEF_SYM(13,___S_event_2d_synchronizer,"event-synchronizer")
___DEF_SYM(14,___S_event_2d_thread,"event-thread")
___DEF_SYM(15,___S_event_2d_thread_3f_,"event-thread?")
___DEF_SYM(16,___S_evt,"evt")
___DEF_SYM(17,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(18,___S_get_2d_event_2d_consumer,"get-event-consumer")
___DEF_SYM(19,___S_hook,"hook")
___DEF_SYM(20,___S_hook_2d_event,"hook-event")
___DEF_SYM(21,___S_hook_2d_event_2d_access,"hook-event-access")
___DEF_SYM(22,___S_hooks,"hooks")
___DEF_SYM(23,___S_jazz,"jazz")
___DEF_SYM(24,___S_jazz_2e_event,"jazz.event")
___DEF_SYM(25,___S_jazz_2e_event_2e_Event,"jazz.event.Event")
___DEF_SYM(26,___S_jazz_2e_event_2e_Event_3a_Event,"jazz.event.Event:Event")
___DEF_SYM(27,___S_jazz_2e_event_2e_Pulse,"jazz.event.Pulse")
___DEF_SYM(28,___S_jazz_2e_event_2e_Pulse_3a_Pulse,"jazz.event.Pulse:Pulse")
___DEF_SYM(29,___S_jazz_2e_event_2e_autoload,"jazz.event.autoload")
___DEF_SYM(30,___S_jazz_2e_event_3a_Event_2d_Consumer,"jazz.event:Event-Consumer")
___DEF_SYM(31,___S_jazz_2e_event_3a_assert_2d_event_2d_synchronized,"jazz.event:assert-event-synchronized")

___DEF_SYM(32,___S_jazz_2e_event_3a_block_2d_event,"jazz.event:block-event")
___DEF_SYM(33,___S_jazz_2e_event_3a_call_2d_event,"jazz.event:call-event")
___DEF_SYM(34,___S_jazz_2e_event_3a_clone_2d_event,"jazz.event:clone-event")
___DEF_SYM(35,___S_jazz_2e_event_3a_construct_2d_event,"jazz.event:construct-event")
___DEF_SYM(36,___S_jazz_2e_event_3a_delay_2d_event,"jazz.event:delay-event")
___DEF_SYM(37,___S_jazz_2e_event_3a_event_2d_synchronizer,"jazz.event:event-synchronizer")

___DEF_SYM(38,___S_jazz_2e_event_3a_event_2d_thread,"jazz.event:event-thread")
___DEF_SYM(39,___S_jazz_2e_event_3a_event_2d_thread_3f_,"jazz.event:event-thread?")
___DEF_SYM(40,___S_jazz_2e_event_3a_hook_2d_event,"jazz.event:hook-event")
___DEF_SYM(41,___S_jazz_2e_event_3a_hook_2d_event_2d_access,"jazz.event:hook-event-access")
___DEF_SYM(42,___S_jazz_2e_event_3a_make_2d_event,"jazz.event:make-event")
___DEF_SYM(43,___S_jazz_2e_event_3a_post_2d_event,"jazz.event:post-event")
___DEF_SYM(44,___S_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,"jazz.event:register-event-access-hook")

___DEF_SYM(45,___S_jazz_2e_event_3a_register_2d_event_2d_hook,"jazz.event:register-event-hook")

___DEF_SYM(46,___S_jazz_2e_event_3a_send_2d_event,"jazz.event:send-event")
___DEF_SYM(47,___S_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,"jazz.event:set-assert-event-synchronized")

___DEF_SYM(48,___S_jazz_2e_event_3a_set_2d_event_2d_synchronizer,"jazz.event:set-event-synchronizer")

___DEF_SYM(49,___S_jazz_2e_event_3a_synchronize_2d_event,"jazz.event:synchronize-event")
___DEF_SYM(50,___S_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,"jazz.event:unregister-event-access-hook")

___DEF_SYM(51,___S_jazz_2e_event_3a_unregister_2d_event_2d_hook,"jazz.event:unregister-event-hook")

___DEF_SYM(52,___S_jazz_2e_platform,"jazz.platform")
___DEF_SYM(53,___S_keyword,"keyword")
___DEF_SYM(54,___S_kind,"kind")
___DEF_SYM(55,___S_loaded_3f_,"loaded?")
___DEF_SYM(56,___S_make_2d_event,"make-event")
___DEF_SYM(57,___S_modifiers,"modifiers")
___DEF_SYM(58,___S_post_2d_event,"post-event")
___DEF_SYM(59,___S_proc,"proc")
___DEF_SYM(60,___S_properties,"properties")
___DEF_SYM(61,___S_public,"public")
___DEF_SYM(62,___S_register_2d_event_2d_access_2d_hook,"register-event-access-hook")
___DEF_SYM(63,___S_register_2d_event_2d_hook,"register-event-hook")
___DEF_SYM(64,___S_rest,"rest")
___DEF_SYM(65,___S_self,"self")
___DEF_SYM(66,___S_send_2d_event,"send-event")
___DEF_SYM(67,___S_sender,"sender")
___DEF_SYM(68,___S_set_2d_assert_2d_event_2d_synchronized,"set-assert-event-synchronized")

___DEF_SYM(69,___S_set_2d_event_2d_consumer,"set-event-consumer")
___DEF_SYM(70,___S_set_2d_event_2d_synchronizer,"set-event-synchronizer")
___DEF_SYM(71,___S_set_2d_property,"set-property")
___DEF_SYM(72,___S_synchronize_2d_event,"synchronize-event")
___DEF_SYM(73,___S_temp_2e_11,"temp.11")
___DEF_SYM(74,___S_temp_2e_16,"temp.16")
___DEF_SYM(75,___S_thunk,"thunk")
___DEF_SYM(76,___S_unregister_2d_event_2d_access_2d_hook,"unregister-event-access-hook")
___DEF_SYM(77,___S_unregister_2d_event_2d_hook,"unregister-event-hook")
___DEF_SYM(78,___S_value,"value")
___END_SYM

#define ___SYM_Event ___SYM(0,___S_Event)
#define ___SYM_Event_2d_Consumer ___SYM(1,___S_Event_2d_Consumer)
#define ___SYM_Pulse ___SYM(2,___S_Pulse)
#define ___SYM_assert_2d_event_2d_synchronized ___SYM(3,___S_assert_2d_event_2d_synchronized)
#define ___SYM_bin_3a_jazz_2e_event ___SYM(4,___S_bin_3a_jazz_2e_event)
#define ___SYM_block_2d_event ___SYM(5,___S_block_2d_event)
#define ___SYM_call_2d_event ___SYM(6,___S_call_2d_event)
#define ___SYM_class ___SYM(7,___S_class)
#define ___SYM_clone_2d_event ___SYM(8,___S_clone_2d_event)
#define ___SYM_construct_2d_event ___SYM(9,___S_construct_2d_event)
#define ___SYM_delay_2d_event ___SYM(10,___S_delay_2d_event)
#define ___SYM_deliver_2d_event ___SYM(11,___S_deliver_2d_event)
#define ___SYM_event ___SYM(12,___S_event)
#define ___SYM_event_2d_synchronizer ___SYM(13,___S_event_2d_synchronizer)
#define ___SYM_event_2d_thread ___SYM(14,___S_event_2d_thread)
#define ___SYM_event_2d_thread_3f_ ___SYM(15,___S_event_2d_thread_3f_)
#define ___SYM_evt ___SYM(16,___S_evt)
#define ___SYM_foundation_2e_dialect ___SYM(17,___S_foundation_2e_dialect)
#define ___SYM_get_2d_event_2d_consumer ___SYM(18,___S_get_2d_event_2d_consumer)
#define ___SYM_hook ___SYM(19,___S_hook)
#define ___SYM_hook_2d_event ___SYM(20,___S_hook_2d_event)
#define ___SYM_hook_2d_event_2d_access ___SYM(21,___S_hook_2d_event_2d_access)
#define ___SYM_hooks ___SYM(22,___S_hooks)
#define ___SYM_jazz ___SYM(23,___S_jazz)
#define ___SYM_jazz_2e_event ___SYM(24,___S_jazz_2e_event)
#define ___SYM_jazz_2e_event_2e_Event ___SYM(25,___S_jazz_2e_event_2e_Event)
#define ___SYM_jazz_2e_event_2e_Event_3a_Event ___SYM(26,___S_jazz_2e_event_2e_Event_3a_Event)
#define ___SYM_jazz_2e_event_2e_Pulse ___SYM(27,___S_jazz_2e_event_2e_Pulse)
#define ___SYM_jazz_2e_event_2e_Pulse_3a_Pulse ___SYM(28,___S_jazz_2e_event_2e_Pulse_3a_Pulse)
#define ___SYM_jazz_2e_event_2e_autoload ___SYM(29,___S_jazz_2e_event_2e_autoload)
#define ___SYM_jazz_2e_event_3a_Event_2d_Consumer ___SYM(30,___S_jazz_2e_event_3a_Event_2d_Consumer)
#define ___SYM_jazz_2e_event_3a_assert_2d_event_2d_synchronized ___SYM(31,___S_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
#define ___SYM_jazz_2e_event_3a_block_2d_event ___SYM(32,___S_jazz_2e_event_3a_block_2d_event)
#define ___SYM_jazz_2e_event_3a_call_2d_event ___SYM(33,___S_jazz_2e_event_3a_call_2d_event)
#define ___SYM_jazz_2e_event_3a_clone_2d_event ___SYM(34,___S_jazz_2e_event_3a_clone_2d_event)
#define ___SYM_jazz_2e_event_3a_construct_2d_event ___SYM(35,___S_jazz_2e_event_3a_construct_2d_event)
#define ___SYM_jazz_2e_event_3a_delay_2d_event ___SYM(36,___S_jazz_2e_event_3a_delay_2d_event)
#define ___SYM_jazz_2e_event_3a_event_2d_synchronizer ___SYM(37,___S_jazz_2e_event_3a_event_2d_synchronizer)
#define ___SYM_jazz_2e_event_3a_event_2d_thread ___SYM(38,___S_jazz_2e_event_3a_event_2d_thread)
#define ___SYM_jazz_2e_event_3a_event_2d_thread_3f_ ___SYM(39,___S_jazz_2e_event_3a_event_2d_thread_3f_)
#define ___SYM_jazz_2e_event_3a_hook_2d_event ___SYM(40,___S_jazz_2e_event_3a_hook_2d_event)
#define ___SYM_jazz_2e_event_3a_hook_2d_event_2d_access ___SYM(41,___S_jazz_2e_event_3a_hook_2d_event_2d_access)
#define ___SYM_jazz_2e_event_3a_make_2d_event ___SYM(42,___S_jazz_2e_event_3a_make_2d_event)
#define ___SYM_jazz_2e_event_3a_post_2d_event ___SYM(43,___S_jazz_2e_event_3a_post_2d_event)
#define ___SYM_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook ___SYM(44,___S_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
#define ___SYM_jazz_2e_event_3a_register_2d_event_2d_hook ___SYM(45,___S_jazz_2e_event_3a_register_2d_event_2d_hook)
#define ___SYM_jazz_2e_event_3a_send_2d_event ___SYM(46,___S_jazz_2e_event_3a_send_2d_event)
#define ___SYM_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized ___SYM(47,___S_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
#define ___SYM_jazz_2e_event_3a_set_2d_event_2d_synchronizer ___SYM(48,___S_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
#define ___SYM_jazz_2e_event_3a_synchronize_2d_event ___SYM(49,___S_jazz_2e_event_3a_synchronize_2d_event)
#define ___SYM_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook ___SYM(50,___S_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
#define ___SYM_jazz_2e_event_3a_unregister_2d_event_2d_hook ___SYM(51,___S_jazz_2e_event_3a_unregister_2d_event_2d_hook)
#define ___SYM_jazz_2e_platform ___SYM(52,___S_jazz_2e_platform)
#define ___SYM_keyword ___SYM(53,___S_keyword)
#define ___SYM_kind ___SYM(54,___S_kind)
#define ___SYM_loaded_3f_ ___SYM(55,___S_loaded_3f_)
#define ___SYM_make_2d_event ___SYM(56,___S_make_2d_event)
#define ___SYM_modifiers ___SYM(57,___S_modifiers)
#define ___SYM_post_2d_event ___SYM(58,___S_post_2d_event)
#define ___SYM_proc ___SYM(59,___S_proc)
#define ___SYM_properties ___SYM(60,___S_properties)
#define ___SYM_public ___SYM(61,___S_public)
#define ___SYM_register_2d_event_2d_access_2d_hook ___SYM(62,___S_register_2d_event_2d_access_2d_hook)
#define ___SYM_register_2d_event_2d_hook ___SYM(63,___S_register_2d_event_2d_hook)
#define ___SYM_rest ___SYM(64,___S_rest)
#define ___SYM_self ___SYM(65,___S_self)
#define ___SYM_send_2d_event ___SYM(66,___S_send_2d_event)
#define ___SYM_sender ___SYM(67,___S_sender)
#define ___SYM_set_2d_assert_2d_event_2d_synchronized ___SYM(68,___S_set_2d_assert_2d_event_2d_synchronized)
#define ___SYM_set_2d_event_2d_consumer ___SYM(69,___S_set_2d_event_2d_consumer)
#define ___SYM_set_2d_event_2d_synchronizer ___SYM(70,___S_set_2d_event_2d_synchronizer)
#define ___SYM_set_2d_property ___SYM(71,___S_set_2d_property)
#define ___SYM_synchronize_2d_event ___SYM(72,___S_synchronize_2d_event)
#define ___SYM_temp_2e_11 ___SYM(73,___S_temp_2e_11)
#define ___SYM_temp_2e_16 ___SYM(74,___S_temp_2e_16)
#define ___SYM_thunk ___SYM(75,___S_thunk)
#define ___SYM_unregister_2d_event_2d_access_2d_hook ___SYM(76,___S_unregister_2d_event_2d_access_2d_hook)
#define ___SYM_unregister_2d_event_2d_hook ___SYM(77,___S_unregister_2d_event_2d_hook)
#define ___SYM_value ___SYM(78,___S_value)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.event#")
___DEF_GLO(1,"jazz.event.Event:Event:autoload")
___DEF_GLO(2,"jazz.event:*event-access-hooks*")
___DEF_GLO(3,"jazz.event:*event-hooks*")
___DEF_GLO(4,"jazz.event:Event-Consumer")
___DEF_GLO(5,"jazz.event:Event-Consumer!rank")
___DEF_GLO(6,"jazz.event:Event-Consumer:deliver-event")

___DEF_GLO(7,"jazz.event:Event-Consumer:deliver-event!rank")

___DEF_GLO(8,"jazz.event:Event-Consumer:get-event-consumer")

___DEF_GLO(9,"jazz.event:Event-Consumer:get-event-consumer!rank")

___DEF_GLO(10,"jazz.event:Event-Consumer:set-event-consumer")

___DEF_GLO(11,"jazz.event:Event-Consumer:set-event-consumer!rank")

___DEF_GLO(12,"jazz.event:assert-event-synchronized")

___DEF_GLO(13,"jazz.event:block-event")
___DEF_GLO(14,"jazz.event:call-event")
___DEF_GLO(15,"jazz.event:clone-event")
___DEF_GLO(16,"jazz.event:construct-event")
___DEF_GLO(17,"jazz.event:delay-event")
___DEF_GLO(18,"jazz.event:event-synchronizer")
___DEF_GLO(19,"jazz.event:event-thread")
___DEF_GLO(20,"jazz.event:event-thread?")
___DEF_GLO(21,"jazz.event:hook-event")
___DEF_GLO(22,"jazz.event:hook-event-access")
___DEF_GLO(23,"jazz.event:make-event")
___DEF_GLO(24,"jazz.event:post-event")
___DEF_GLO(25,"jazz.event:register-event-access-hook")

___DEF_GLO(26,"jazz.event:register-event-hook")
___DEF_GLO(27,"jazz.event:send-event")
___DEF_GLO(28,"jazz.event:set-assert-event-synchronized")

___DEF_GLO(29,"jazz.event:set-event-synchronizer")

___DEF_GLO(30,"jazz.event:synchronize-event")
___DEF_GLO(31,"jazz.event:unregister-event-access-hook")

___DEF_GLO(32,"jazz.event:unregister-event-hook")
___DEF_GLO(33,"jazz.platform:modifiers-mask:autoload")

___DEF_GLO(34,"jazz.platform:parse-event-modifiers:autoload")

___DEF_GLO(35,"jazz/event_set-property!d^0")
___DEF_GLO(36,"%%jazz.language.runtime.object:copy")

___DEF_GLO(37,"append")
___DEF_GLO(38,"apply")
___DEF_GLO(39,"jazz.event.Event:Event")
___DEF_GLO(40,"jazz.language.runtime.exception:error")

___DEF_GLO(41,"jazz.language.runtime.functional:for-each-property")

___DEF_GLO(42,"jazz.language.runtime.functional:primordial-thread")

___DEF_GLO(43,"jazz.language.runtime.functional:primordial-thread?")

___DEF_GLO(44,"jazz.language.runtime.functional:remove!")

___DEF_GLO(45,"jazz.language.runtime.functional:thread-block")

___DEF_GLO(46,"jazz.language.runtime.functional:thread-call")

___DEF_GLO(47,"jazz.language.runtime.functional:thread-execute")

___DEF_GLO(48,"jazz.language.runtime.functional:thread-post")

___DEF_GLO(49,"jazz.language.runtime.functional:thread-write")

___DEF_GLO(50,"jazz.language.runtime.functional:write-delayed-event")

___DEF_GLO(51,"jazz.platform:modifiers-mask")
___DEF_GLO(52,"jazz.platform:parse-event-modifiers")

___DEF_GLO(53,"jazz:Interface")
___DEF_GLO(54,"jazz:Procedure")
___DEF_GLO(55,"jazz:add-virtual-method")
___DEF_GLO(56,"jazz:cache-dispatch")
___DEF_GLO(57,"jazz:call-into-abstract")
___DEF_GLO(58,"jazz:global-bound?")
___DEF_GLO(59,"jazz:global-ref")
___DEF_GLO(60,"jazz:load-unit")
___DEF_GLO(61,"jazz:new")
___DEF_GLO(62,"jazz:new-interface")
___DEF_GLO(63,"jazz:not-null?")
___DEF_GLO(64,"jazz:register-module")
___DEF_GLO(65,"jazz:type-error")
___DEF_GLO(66,"jazz:unspecified")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_event_23_ ___GLO(0,___G_bin_3a_jazz_2e_event_23_)
#define ___PRM_bin_3a_jazz_2e_event_23_ ___PRM(0,___G_bin_3a_jazz_2e_event_23_)
#define ___GLO_jazz_2e_event_2e_Event_3a_Event_3a_autoload ___GLO(1,___G_jazz_2e_event_2e_Event_3a_Event_3a_autoload)
#define ___PRM_jazz_2e_event_2e_Event_3a_Event_3a_autoload ___PRM(1,___G_jazz_2e_event_2e_Event_3a_Event_3a_autoload)
#define ___GLO_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_ ___GLO(2,___G_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_)
#define ___PRM_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_ ___PRM(2,___G_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_)
#define ___GLO_jazz_2e_event_3a__2a_event_2d_hooks_2a_ ___GLO(3,___G_jazz_2e_event_3a__2a_event_2d_hooks_2a_)
#define ___PRM_jazz_2e_event_3a__2a_event_2d_hooks_2a_ ___PRM(3,___G_jazz_2e_event_3a__2a_event_2d_hooks_2a_)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer ___GLO(4,___G_jazz_2e_event_3a_Event_2d_Consumer)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer ___PRM(4,___G_jazz_2e_event_3a_Event_2d_Consumer)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_21_rank ___GLO(5,___G_jazz_2e_event_3a_Event_2d_Consumer_21_rank)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_21_rank ___PRM(5,___G_jazz_2e_event_3a_Event_2d_Consumer_21_rank)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event ___GLO(6,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event ___PRM(6,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event_21_rank ___GLO(7,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event_21_rank)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event_21_rank ___PRM(7,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event_21_rank)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer ___GLO(8,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer ___PRM(8,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer_21_rank ___GLO(9,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer_21_rank)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer_21_rank ___PRM(9,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer_21_rank)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer ___GLO(10,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer ___PRM(10,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
#define ___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer_21_rank ___GLO(11,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer_21_rank)
#define ___PRM_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer_21_rank ___PRM(11,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer_21_rank)
#define ___GLO_jazz_2e_event_3a_assert_2d_event_2d_synchronized ___GLO(12,___G_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
#define ___PRM_jazz_2e_event_3a_assert_2d_event_2d_synchronized ___PRM(12,___G_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
#define ___GLO_jazz_2e_event_3a_block_2d_event ___GLO(13,___G_jazz_2e_event_3a_block_2d_event)
#define ___PRM_jazz_2e_event_3a_block_2d_event ___PRM(13,___G_jazz_2e_event_3a_block_2d_event)
#define ___GLO_jazz_2e_event_3a_call_2d_event ___GLO(14,___G_jazz_2e_event_3a_call_2d_event)
#define ___PRM_jazz_2e_event_3a_call_2d_event ___PRM(14,___G_jazz_2e_event_3a_call_2d_event)
#define ___GLO_jazz_2e_event_3a_clone_2d_event ___GLO(15,___G_jazz_2e_event_3a_clone_2d_event)
#define ___PRM_jazz_2e_event_3a_clone_2d_event ___PRM(15,___G_jazz_2e_event_3a_clone_2d_event)
#define ___GLO_jazz_2e_event_3a_construct_2d_event ___GLO(16,___G_jazz_2e_event_3a_construct_2d_event)
#define ___PRM_jazz_2e_event_3a_construct_2d_event ___PRM(16,___G_jazz_2e_event_3a_construct_2d_event)
#define ___GLO_jazz_2e_event_3a_delay_2d_event ___GLO(17,___G_jazz_2e_event_3a_delay_2d_event)
#define ___PRM_jazz_2e_event_3a_delay_2d_event ___PRM(17,___G_jazz_2e_event_3a_delay_2d_event)
#define ___GLO_jazz_2e_event_3a_event_2d_synchronizer ___GLO(18,___G_jazz_2e_event_3a_event_2d_synchronizer)
#define ___PRM_jazz_2e_event_3a_event_2d_synchronizer ___PRM(18,___G_jazz_2e_event_3a_event_2d_synchronizer)
#define ___GLO_jazz_2e_event_3a_event_2d_thread ___GLO(19,___G_jazz_2e_event_3a_event_2d_thread)
#define ___PRM_jazz_2e_event_3a_event_2d_thread ___PRM(19,___G_jazz_2e_event_3a_event_2d_thread)
#define ___GLO_jazz_2e_event_3a_event_2d_thread_3f_ ___GLO(20,___G_jazz_2e_event_3a_event_2d_thread_3f_)
#define ___PRM_jazz_2e_event_3a_event_2d_thread_3f_ ___PRM(20,___G_jazz_2e_event_3a_event_2d_thread_3f_)
#define ___GLO_jazz_2e_event_3a_hook_2d_event ___GLO(21,___G_jazz_2e_event_3a_hook_2d_event)
#define ___PRM_jazz_2e_event_3a_hook_2d_event ___PRM(21,___G_jazz_2e_event_3a_hook_2d_event)
#define ___GLO_jazz_2e_event_3a_hook_2d_event_2d_access ___GLO(22,___G_jazz_2e_event_3a_hook_2d_event_2d_access)
#define ___PRM_jazz_2e_event_3a_hook_2d_event_2d_access ___PRM(22,___G_jazz_2e_event_3a_hook_2d_event_2d_access)
#define ___GLO_jazz_2e_event_3a_make_2d_event ___GLO(23,___G_jazz_2e_event_3a_make_2d_event)
#define ___PRM_jazz_2e_event_3a_make_2d_event ___PRM(23,___G_jazz_2e_event_3a_make_2d_event)
#define ___GLO_jazz_2e_event_3a_post_2d_event ___GLO(24,___G_jazz_2e_event_3a_post_2d_event)
#define ___PRM_jazz_2e_event_3a_post_2d_event ___PRM(24,___G_jazz_2e_event_3a_post_2d_event)
#define ___GLO_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook ___GLO(25,___G_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
#define ___PRM_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook ___PRM(25,___G_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
#define ___GLO_jazz_2e_event_3a_register_2d_event_2d_hook ___GLO(26,___G_jazz_2e_event_3a_register_2d_event_2d_hook)
#define ___PRM_jazz_2e_event_3a_register_2d_event_2d_hook ___PRM(26,___G_jazz_2e_event_3a_register_2d_event_2d_hook)
#define ___GLO_jazz_2e_event_3a_send_2d_event ___GLO(27,___G_jazz_2e_event_3a_send_2d_event)
#define ___PRM_jazz_2e_event_3a_send_2d_event ___PRM(27,___G_jazz_2e_event_3a_send_2d_event)
#define ___GLO_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized ___GLO(28,___G_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
#define ___PRM_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized ___PRM(28,___G_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
#define ___GLO_jazz_2e_event_3a_set_2d_event_2d_synchronizer ___GLO(29,___G_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
#define ___PRM_jazz_2e_event_3a_set_2d_event_2d_synchronizer ___PRM(29,___G_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
#define ___GLO_jazz_2e_event_3a_synchronize_2d_event ___GLO(30,___G_jazz_2e_event_3a_synchronize_2d_event)
#define ___PRM_jazz_2e_event_3a_synchronize_2d_event ___PRM(30,___G_jazz_2e_event_3a_synchronize_2d_event)
#define ___GLO_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook ___GLO(31,___G_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
#define ___PRM_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook ___PRM(31,___G_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
#define ___GLO_jazz_2e_event_3a_unregister_2d_event_2d_hook ___GLO(32,___G_jazz_2e_event_3a_unregister_2d_event_2d_hook)
#define ___PRM_jazz_2e_event_3a_unregister_2d_event_2d_hook ___PRM(32,___G_jazz_2e_event_3a_unregister_2d_event_2d_hook)
#define ___GLO_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload ___GLO(33,___G_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload)
#define ___PRM_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload ___PRM(33,___G_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload)
#define ___GLO_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload ___GLO(34,___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload)
#define ___PRM_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload ___PRM(34,___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload)
#define ___GLO_jazz_2f_event__set_2d_property_21_d_5e_0 ___GLO(35,___G_jazz_2f_event__set_2d_property_21_d_5e_0)
#define ___PRM_jazz_2f_event__set_2d_property_21_d_5e_0 ___PRM(35,___G_jazz_2f_event__set_2d_property_21_d_5e_0)
#define ___GLO__25__25_jazz_2e_language_2e_runtime_2e_object_3a_copy ___GLO(36,___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_copy)
#define ___PRM__25__25_jazz_2e_language_2e_runtime_2e_object_3a_copy ___PRM(36,___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_copy)
#define ___GLO_append ___GLO(37,___G_append)
#define ___PRM_append ___PRM(37,___G_append)
#define ___GLO_apply ___GLO(38,___G_apply)
#define ___PRM_apply ___PRM(38,___G_apply)
#define ___GLO_jazz_2e_event_2e_Event_3a_Event ___GLO(39,___G_jazz_2e_event_2e_Event_3a_Event)
#define ___PRM_jazz_2e_event_2e_Event_3a_Event ___PRM(39,___G_jazz_2e_event_2e_Event_3a_Event)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_error ___GLO(40,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_error ___PRM(40,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_for_2d_each_2d_property ___GLO(41,___G_jazz_2e_language_2e_runtime_2e_functional_3a_for_2d_each_2d_property)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_for_2d_each_2d_property ___PRM(41,___G_jazz_2e_language_2e_runtime_2e_functional_3a_for_2d_each_2d_property)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread ___GLO(42,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread ___PRM(42,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_ ___GLO(43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_ ___PRM(43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_ ___GLO(44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_ ___PRM(44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_block ___GLO(45,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_block)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_block ___PRM(45,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_block)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_call ___GLO(46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_call)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_call ___PRM(46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_call)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_execute ___GLO(47,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_execute)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_execute ___PRM(47,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_execute)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post ___GLO(48,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post ___PRM(48,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_write ___GLO(49,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_write)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_write ___PRM(49,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_write)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_write_2d_delayed_2d_event ___GLO(50,___G_jazz_2e_language_2e_runtime_2e_functional_3a_write_2d_delayed_2d_event)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_write_2d_delayed_2d_event ___PRM(50,___G_jazz_2e_language_2e_runtime_2e_functional_3a_write_2d_delayed_2d_event)
#define ___GLO_jazz_2e_platform_3a_modifiers_2d_mask ___GLO(51,___G_jazz_2e_platform_3a_modifiers_2d_mask)
#define ___PRM_jazz_2e_platform_3a_modifiers_2d_mask ___PRM(51,___G_jazz_2e_platform_3a_modifiers_2d_mask)
#define ___GLO_jazz_2e_platform_3a_parse_2d_event_2d_modifiers ___GLO(52,___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers)
#define ___PRM_jazz_2e_platform_3a_parse_2d_event_2d_modifiers ___PRM(52,___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers)
#define ___GLO_jazz_3a_Interface ___GLO(53,___G_jazz_3a_Interface)
#define ___PRM_jazz_3a_Interface ___PRM(53,___G_jazz_3a_Interface)
#define ___GLO_jazz_3a_Procedure ___GLO(54,___G_jazz_3a_Procedure)
#define ___PRM_jazz_3a_Procedure ___PRM(54,___G_jazz_3a_Procedure)
#define ___GLO_jazz_3a_add_2d_virtual_2d_method ___GLO(55,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___PRM_jazz_3a_add_2d_virtual_2d_method ___PRM(55,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___GLO_jazz_3a_cache_2d_dispatch ___GLO(56,___G_jazz_3a_cache_2d_dispatch)
#define ___PRM_jazz_3a_cache_2d_dispatch ___PRM(56,___G_jazz_3a_cache_2d_dispatch)
#define ___GLO_jazz_3a_call_2d_into_2d_abstract ___GLO(57,___G_jazz_3a_call_2d_into_2d_abstract)
#define ___PRM_jazz_3a_call_2d_into_2d_abstract ___PRM(57,___G_jazz_3a_call_2d_into_2d_abstract)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(58,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(58,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(59,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(59,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(60,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(60,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new ___GLO(61,___G_jazz_3a_new)
#define ___PRM_jazz_3a_new ___PRM(61,___G_jazz_3a_new)
#define ___GLO_jazz_3a_new_2d_interface ___GLO(62,___G_jazz_3a_new_2d_interface)
#define ___PRM_jazz_3a_new_2d_interface ___PRM(62,___G_jazz_3a_new_2d_interface)
#define ___GLO_jazz_3a_not_2d_null_3f_ ___GLO(63,___G_jazz_3a_not_2d_null_3f_)
#define ___PRM_jazz_3a_not_2d_null_3f_ ___PRM(63,___G_jazz_3a_not_2d_null_3f_)
#define ___GLO_jazz_3a_register_2d_module ___GLO(64,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(64,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_type_2d_error ___GLO(65,___G_jazz_3a_type_2d_error)
#define ___PRM_jazz_3a_type_2d_error ___PRM(65,___G_jazz_3a_type_2d_error)
#define ___GLO_jazz_3a_unspecified ___GLO(66,___G_jazz_3a_unspecified)
#define ___PRM_jazz_3a_unspecified ___PRM(66,___G_jazz_3a_unspecified)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(3))
,___DEF_CNS(___REF_SYM(0,___S_Event),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(25,___S_jazz_2e_event_2e_Event),___REF_SYM(26,___S_jazz_2e_event_2e_Event_3a_Event))
,___DEF_CNS(___REF_CNS(4),___REF_CNS(5))
,___DEF_CNS(___REF_SYM(1,___S_Event_2d_Consumer),___REF_SYM(30,___S_jazz_2e_event_3a_Event_2d_Consumer))
,___DEF_CNS(___REF_CNS(6),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(2,___S_Pulse),___REF_CNS(7))
,___DEF_CNS(___REF_SYM(27,___S_jazz_2e_event_2e_Pulse),___REF_SYM(28,___S_jazz_2e_event_2e_Pulse_3a_Pulse))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(3,___S_assert_2d_event_2d_synchronized),___REF_SYM(31,___S_jazz_2e_event_3a_assert_2d_event_2d_synchronized))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(5,___S_block_2d_event),___REF_SYM(32,___S_jazz_2e_event_3a_block_2d_event))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(6,___S_call_2d_event),___REF_SYM(33,___S_jazz_2e_event_3a_call_2d_event))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(8,___S_clone_2d_event),___REF_SYM(34,___S_jazz_2e_event_3a_clone_2d_event))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(9,___S_construct_2d_event),___REF_SYM(35,___S_jazz_2e_event_3a_construct_2d_event))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(10,___S_delay_2d_event),___REF_SYM(36,___S_jazz_2e_event_3a_delay_2d_event))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(13,___S_event_2d_synchronizer),___REF_SYM(37,___S_jazz_2e_event_3a_event_2d_synchronizer))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(14,___S_event_2d_thread),___REF_SYM(38,___S_jazz_2e_event_3a_event_2d_thread))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(15,___S_event_2d_thread_3f_),___REF_SYM(39,___S_jazz_2e_event_3a_event_2d_thread_3f_))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(20,___S_hook_2d_event),___REF_SYM(40,___S_jazz_2e_event_3a_hook_2d_event))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(21,___S_hook_2d_event_2d_access),___REF_SYM(41,___S_jazz_2e_event_3a_hook_2d_event_2d_access))
,___DEF_CNS(___REF_CNS(31),___REF_CNS(32))
,___DEF_CNS(___REF_SYM(56,___S_make_2d_event),___REF_SYM(42,___S_jazz_2e_event_3a_make_2d_event))
,___DEF_CNS(___REF_CNS(33),___REF_CNS(34))
,___DEF_CNS(___REF_SYM(58,___S_post_2d_event),___REF_SYM(43,___S_jazz_2e_event_3a_post_2d_event))
,___DEF_CNS(___REF_CNS(35),___REF_CNS(36))
,___DEF_CNS(___REF_SYM(62,___S_register_2d_event_2d_access_2d_hook),___REF_SYM(44,___S_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook))
,___DEF_CNS(___REF_CNS(37),___REF_CNS(38))
,___DEF_CNS(___REF_SYM(63,___S_register_2d_event_2d_hook),___REF_SYM(45,___S_jazz_2e_event_3a_register_2d_event_2d_hook))
,___DEF_CNS(___REF_CNS(39),___REF_CNS(40))
,___DEF_CNS(___REF_SYM(66,___S_send_2d_event),___REF_SYM(46,___S_jazz_2e_event_3a_send_2d_event))
,___DEF_CNS(___REF_CNS(41),___REF_CNS(42))
,___DEF_CNS(___REF_SYM(68,___S_set_2d_assert_2d_event_2d_synchronized),___REF_SYM(47,___S_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized))
,___DEF_CNS(___REF_CNS(43),___REF_CNS(44))
,___DEF_CNS(___REF_SYM(70,___S_set_2d_event_2d_synchronizer),___REF_SYM(48,___S_jazz_2e_event_3a_set_2d_event_2d_synchronizer))
,___DEF_CNS(___REF_CNS(45),___REF_CNS(46))
,___DEF_CNS(___REF_SYM(72,___S_synchronize_2d_event),___REF_SYM(49,___S_jazz_2e_event_3a_synchronize_2d_event))
,___DEF_CNS(___REF_CNS(47),___REF_CNS(48))
,___DEF_CNS(___REF_SYM(76,___S_unregister_2d_event_2d_access_2d_hook),___REF_SYM(50,___S_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook))
,___DEF_CNS(___REF_CNS(49),___REF_NUL)
,___DEF_CNS(___REF_SYM(77,___S_unregister_2d_event_2d_hook),___REF_SYM(51,___S_jazz_2e_event_3a_unregister_2d_event_2d_hook))
,___DEF_CNS(___REF_SYM(29,___S_jazz_2e_event_2e_autoload),___REF_NUL)
,___DEF_CNS(___REF_FIX(32769),___REF_NUL)
,___DEF_CNS(___REF_FIX(32770),___REF_NUL)
,___DEF_CNS(___REF_FIX(32772),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X1,28UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(208))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X36,3UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X40,3UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X44,3UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X48,3UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X52,3UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X56,3UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(55,___S_loaded_3f_))
               ___VEC1(___REF_CNS(51))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X60,4UL)
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(62))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X63,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X65,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X67,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(64,___S_rest))
               ___VEC1(___REF_SYM(65,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X71,4UL)
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_SUB(78))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X74,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X76,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X78,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(64,___S_rest))
               ___VEC1(___REF_SYM(65,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X82,4UL)
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X85,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X87,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X89,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(71))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SYM(64,___S_rest))
               ___VEC1(___REF_SYM(65,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(116))
               ___VEC0
___DEF_SUB_VEC(___X93,11UL)
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_SUB(114))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(95))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(87))
               ___VEC0
___DEF_SUB_VEC(___X96,6UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(327682))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(196696))
               ___VEC0
___DEF_SUB_VEC(___X98,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(196696))
               ___VEC0
___DEF_SUB_VEC(___X100,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131160))
               ___VEC0
___DEF_SUB_VEC(___X102,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131160))
               ___VEC0
___DEF_SUB_VEC(___X104,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131160))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(262233))
               ___VEC0
___DEF_SUB_VEC(___X108,7UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_FIX(557060))
               ___VEC1(___REF_FIX(491526))
               ___VEC1(___REF_FIX(458760))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1114202))
               ___VEC0
___DEF_SUB_VEC(___X110,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1114202))
               ___VEC0
___DEF_SUB_VEC(___X112,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393306))
               ___VEC0
___DEF_SUB_VEC(___X114,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393306))
               ___VEC0
___DEF_SUB_VEC(___X116,5UL)
               ___VEC1(___REF_SYM(64,___S_rest))
               ___VEC1(___REF_SYM(54,___S_kind))
               ___VEC1(___REF_CNS(52))
               ___VEC1(___REF_SYM(60,___S_properties))
               ___VEC1(___REF_SYM(57,___S_modifiers))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X118,6UL)
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(120))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(93))
               ___VEC0
___DEF_SUB_VEC(___X121,9UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_FIX(655360))
               ___VEC1(___REF_FIX(622594))
               ___VEC1(___REF_FIX(589828))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2097246))
               ___VEC0
___DEF_SUB_VEC(___X123,6UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2097246))
               ___VEC0
___DEF_SUB_VEC(___X125,6UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2031710))
               ___VEC0
___DEF_SUB_VEC(___X127,6UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131166))
               ___VEC0
___DEF_SUB_VEC(___X129,6UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131166))
               ___VEC0
___DEF_SUB_VEC(___X131,4UL)
               ___VEC1(___REF_SYM(60,___S_properties))
               ___VEC1(___REF_SYM(67,___S_sender))
               ___VEC1(___REF_SYM(54,___S_kind))
               ___VEC1(___REF_SYM(7,___S_class))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_SUB(156))
               ___VEC0
___DEF_SUB_VEC(___X133,11UL)
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
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(135))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(97))
               ___VEC0
___DEF_SUB_VEC(___X136,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(983138))
               ___VEC0
___DEF_SUB_VEC(___X138,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(983138))
               ___VEC0
___DEF_SUB_VEC(___X140,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(262243))
               ___VEC0
___DEF_SUB_VEC(___X142,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(262243))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(145))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(262246))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(147))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1507427))
               ___VEC0
___DEF_SUB_VEC(___X148,6UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_FIX(425990))
               ___VEC1(___REF_FIX(360456))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1638500))
               ___VEC0
___DEF_SUB_VEC(___X150,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1638500))
               ___VEC0
___DEF_SUB_VEC(___X152,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1638500))
               ___VEC0
___DEF_SUB_VEC(___X154,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1638500))
               ___VEC0
___DEF_SUB_VEC(___X156,6UL)
               ___VEC1(___REF_SYM(60,___S_properties))
               ___VEC1(___REF_SYM(16,___S_evt))
               ___VEC1(___REF_SYM(12,___S_event))
               ___VEC1(___REF_CNS(53))
               ___VEC1(___REF_SYM(78,___S_value))
               ___VEC1(___REF_SYM(53,___S_keyword))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_SUB(165))
               ___VEC0
___DEF_SUB_VEC(___X158,3UL)
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_SUB(163))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(160))
               ___VEC0
___DEF_SUB_VEC(___X160,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(114))
               ___VEC0
___DEF_SUB_VEC(___X161,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(162))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1441907))
               ___VEC0
___DEF_SUB_VEC(___X163,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1441907))
               ___VEC0
___DEF_SUB_VEC(___X165,1UL)
               ___VEC1(___REF_SYM(19,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_SUB(176))
               ___VEC0
___DEF_SUB_VEC(___X167,4UL)
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_SUB(174))
               ___VEC0
___DEF_SUB_VEC(___X168,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(169))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(117))
               ___VEC0
___DEF_SUB_VEC(___X170,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1441910))
               ___VEC0
___DEF_SUB_VEC(___X172,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1441910))
               ___VEC0
___DEF_SUB_VEC(___X174,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(175))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131190))
               ___VEC0
___DEF_SUB_VEC(___X176,1UL)
               ___VEC1(___REF_SYM(19,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SUB(178))
               ___VEC1(___REF_SUB(201))
               ___VEC0
___DEF_SUB_VEC(___X178,11UL)
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_SUB(181))
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_SUB(185))
               ___VEC1(___REF_SUB(187))
               ___VEC1(___REF_SUB(189))
               ___VEC1(___REF_SUB(191))
               ___VEC1(___REF_SUB(193))
               ___VEC1(___REF_SUB(195))
               ___VEC1(___REF_SUB(197))
               ___VEC1(___REF_SUB(199))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(121))
               ___VEC0
___DEF_SUB_VEC(___X181,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(182))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X182,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(655483))
               ___VEC0
___DEF_SUB_VEC(___X183,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(184))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X184,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(655483))
               ___VEC0
___DEF_SUB_VEC(___X185,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(186))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393340))
               ___VEC0
___DEF_SUB_VEC(___X187,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(188))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X188,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393340))
               ___VEC0
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(190))
               ___VEC0
___DEF_SUB_VEC(___X190,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393340))
               ___VEC0
___DEF_SUB_VEC(___X191,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(192))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X192,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393340))
               ___VEC0
___DEF_SUB_VEC(___X193,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(194))
               ___VEC1(___REF_FIX(360454))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X194,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179773))
               ___VEC0
___DEF_SUB_VEC(___X195,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(196))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X196,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179773))
               ___VEC0
___DEF_SUB_VEC(___X197,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(198))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X198,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179773))
               ___VEC0
___DEF_SUB_VEC(___X199,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(200))
               ___VEC0
___DEF_SUB_VEC(___X200,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131194))
               ___VEC0
___DEF_SUB_VEC(___X201,4UL)
               ___VEC1(___REF_SYM(12,___S_event))
               ___VEC1(___REF_SYM(22,___S_hooks))
               ___VEC1(___REF_SYM(73,___S_temp_2e_11))
               ___VEC1(___REF_SYM(19,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X202,2UL)
               ___VEC1(___REF_SUB(203))
               ___VEC1(___REF_SUB(210))
               ___VEC0
___DEF_SUB_VEC(___X203,3UL)
               ___VEC1(___REF_SUB(204))
               ___VEC1(___REF_SUB(206))
               ___VEC1(___REF_SUB(208))
               ___VEC0
___DEF_SUB_VEC(___X204,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(205))
               ___VEC0
___DEF_SUB_VEC(___X205,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(133))
               ___VEC0
___DEF_SUB_VEC(___X206,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(207))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X207,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1900678))
               ___VEC0
___DEF_SUB_VEC(___X208,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(209))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X209,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1900678))
               ___VEC0
___DEF_SUB_VEC(___X210,1UL)
               ___VEC1(___REF_SYM(19,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X211,2UL)
               ___VEC1(___REF_SUB(212))
               ___VEC1(___REF_SUB(221))
               ___VEC0
___DEF_SUB_VEC(___X212,4UL)
               ___VEC1(___REF_SUB(213))
               ___VEC1(___REF_SUB(215))
               ___VEC1(___REF_SUB(217))
               ___VEC1(___REF_SUB(219))
               ___VEC0
___DEF_SUB_VEC(___X213,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(214))
               ___VEC0
___DEF_SUB_VEC(___X214,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(136))
               ___VEC0
___DEF_SUB_VEC(___X215,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(216))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X216,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1900681))
               ___VEC0
___DEF_SUB_VEC(___X217,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(218))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X218,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1900681))
               ___VEC0
___DEF_SUB_VEC(___X219,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(220))
               ___VEC0
___DEF_SUB_VEC(___X220,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131209))
               ___VEC0
___DEF_SUB_VEC(___X221,1UL)
               ___VEC1(___REF_SYM(19,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X222,2UL)
               ___VEC1(___REF_SUB(223))
               ___VEC1(___REF_SUB(246))
               ___VEC0
___DEF_SUB_VEC(___X223,11UL)
               ___VEC1(___REF_SUB(224))
               ___VEC1(___REF_SUB(226))
               ___VEC1(___REF_SUB(228))
               ___VEC1(___REF_SUB(230))
               ___VEC1(___REF_SUB(232))
               ___VEC1(___REF_SUB(234))
               ___VEC1(___REF_SUB(236))
               ___VEC1(___REF_SUB(238))
               ___VEC1(___REF_SUB(240))
               ___VEC1(___REF_SUB(242))
               ___VEC1(___REF_SUB(244))
               ___VEC0
___DEF_SUB_VEC(___X224,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(225))
               ___VEC0
___DEF_SUB_VEC(___X225,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(140))
               ___VEC0
___DEF_SUB_VEC(___X226,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(227))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X227,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(655502))
               ___VEC0
___DEF_SUB_VEC(___X228,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(229))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(32770))
               ___VEC0
___DEF_SUB_VEC(___X229,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(655502))
               ___VEC0
___DEF_SUB_VEC(___X230,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(231))
               ___VEC0
___DEF_SUB_VEC(___X231,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393359))
               ___VEC0
___DEF_SUB_VEC(___X232,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(233))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X233,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393359))
               ___VEC0
___DEF_SUB_VEC(___X234,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(235))
               ___VEC0
___DEF_SUB_VEC(___X235,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393359))
               ___VEC0
___DEF_SUB_VEC(___X236,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(237))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X237,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(393359))
               ___VEC0
___DEF_SUB_VEC(___X238,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(239))
               ___VEC1(___REF_FIX(360454))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X239,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179792))
               ___VEC0
___DEF_SUB_VEC(___X240,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(241))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X241,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179792))
               ___VEC0
___DEF_SUB_VEC(___X242,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(243))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X243,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179792))
               ___VEC0
___DEF_SUB_VEC(___X244,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(245))
               ___VEC0
___DEF_SUB_VEC(___X245,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131213))
               ___VEC0
___DEF_SUB_VEC(___X246,4UL)
               ___VEC1(___REF_SYM(12,___S_event))
               ___VEC1(___REF_SYM(22,___S_hooks))
               ___VEC1(___REF_SYM(74,___S_temp_2e_16))
               ___VEC1(___REF_SYM(19,___S_hook))
               ___VEC0
___DEF_SUB_VEC(___X247,2UL)
               ___VEC1(___REF_SUB(248))
               ___VEC1(___REF_SUB(257))
               ___VEC0
___DEF_SUB_VEC(___X248,4UL)
               ___VEC1(___REF_SUB(249))
               ___VEC1(___REF_SUB(251))
               ___VEC1(___REF_SUB(253))
               ___VEC1(___REF_SUB(255))
               ___VEC0
___DEF_SUB_VEC(___X249,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(250))
               ___VEC0
___DEF_SUB_VEC(___X250,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(153))
               ___VEC0
___DEF_SUB_VEC(___X251,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(252))
               ___VEC0
___DEF_SUB_VEC(___X252,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131226))
               ___VEC0
___DEF_SUB_VEC(___X253,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(254))
               ___VEC0
___DEF_SUB_VEC(___X254,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131226))
               ___VEC0
___DEF_SUB_VEC(___X255,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(256))
               ___VEC0
___DEF_SUB_VEC(___X256,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131226))
               ___VEC0
___DEF_SUB_VEC(___X257,0UL)
               ___VEC0
___DEF_SUB_VEC(___X258,2UL)
               ___VEC1(___REF_SUB(259))
               ___VEC1(___REF_SUB(268))
               ___VEC0
___DEF_SUB_VEC(___X259,4UL)
               ___VEC1(___REF_SUB(260))
               ___VEC1(___REF_SUB(262))
               ___VEC1(___REF_SUB(264))
               ___VEC1(___REF_SUB(266))
               ___VEC0
___DEF_SUB_VEC(___X260,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(261))
               ___VEC0
___DEF_SUB_VEC(___X261,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(157))
               ___VEC0
___DEF_SUB_VEC(___X262,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(263))
               ___VEC0
___DEF_SUB_VEC(___X263,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1573022))
               ___VEC0
___DEF_SUB_VEC(___X264,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(265))
               ___VEC0
___DEF_SUB_VEC(___X265,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1573022))
               ___VEC0
___DEF_SUB_VEC(___X266,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(267))
               ___VEC0
___DEF_SUB_VEC(___X267,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131230))
               ___VEC0
___DEF_SUB_VEC(___X268,0UL)
               ___VEC0
___DEF_SUB_VEC(___X269,2UL)
               ___VEC1(___REF_SUB(270))
               ___VEC1(___REF_SUB(291))
               ___VEC0
___DEF_SUB_VEC(___X270,10UL)
               ___VEC1(___REF_SUB(271))
               ___VEC1(___REF_SUB(273))
               ___VEC1(___REF_SUB(275))
               ___VEC1(___REF_SUB(277))
               ___VEC1(___REF_SUB(279))
               ___VEC1(___REF_SUB(281))
               ___VEC1(___REF_SUB(283))
               ___VEC1(___REF_SUB(285))
               ___VEC1(___REF_SUB(287))
               ___VEC1(___REF_SUB(289))
               ___VEC0
___DEF_SUB_VEC(___X271,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(272))
               ___VEC0
___DEF_SUB_VEC(___X272,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(163))
               ___VEC0
___DEF_SUB_VEC(___X273,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(274))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X274,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131236))
               ___VEC0
___DEF_SUB_VEC(___X275,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(276))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X276,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131236))
               ___VEC0
___DEF_SUB_VEC(___X277,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(278))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X278,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1048742))
               ___VEC0
___DEF_SUB_VEC(___X279,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(280))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X280,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131238))
               ___VEC0
___DEF_SUB_VEC(___X281,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(282))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X282,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131238))
               ___VEC0
___DEF_SUB_VEC(___X283,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(284))
               ___VEC0
___DEF_SUB_VEC(___X284,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2031782))
               ___VEC0
___DEF_SUB_VEC(___X285,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(286))
               ___VEC0
___DEF_SUB_VEC(___X286,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2031782))
               ___VEC0
___DEF_SUB_VEC(___X287,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(288))
               ___VEC0
___DEF_SUB_VEC(___X288,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2031782))
               ___VEC0
___DEF_SUB_VEC(___X289,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(290))
               ___VEC0
___DEF_SUB_VEC(___X290,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(2031782))
               ___VEC0
___DEF_SUB_VEC(___X291,1UL)
               ___VEC1(___REF_SYM(75,___S_thunk))
               ___VEC0
___DEF_SUB_VEC(___X292,2UL)
               ___VEC1(___REF_SUB(293))
               ___VEC1(___REF_SUB(304))
               ___VEC0
___DEF_SUB_VEC(___X293,5UL)
               ___VEC1(___REF_SUB(294))
               ___VEC1(___REF_SUB(296))
               ___VEC1(___REF_SUB(298))
               ___VEC1(___REF_SUB(300))
               ___VEC1(___REF_SUB(302))
               ___VEC0
___DEF_SUB_VEC(___X294,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(295))
               ___VEC0
___DEF_SUB_VEC(___X295,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(169))
               ___VEC0
___DEF_SUB_VEC(___X296,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(297))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X297,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(983210))
               ___VEC0
___DEF_SUB_VEC(___X298,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(299))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X299,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(983210))
               ___VEC0
___DEF_SUB_VEC(___X300,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(301))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X301,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131242))
               ___VEC0
___DEF_SUB_VEC(___X302,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(303))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X303,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131242))
               ___VEC0
___DEF_SUB_VEC(___X304,1UL)
               ___VEC1(___REF_SYM(75,___S_thunk))
               ___VEC0
___DEF_SUB_VEC(___X305,2UL)
               ___VEC1(___REF_SUB(306))
               ___VEC1(___REF_SUB(317))
               ___VEC0
___DEF_SUB_VEC(___X306,5UL)
               ___VEC1(___REF_SUB(307))
               ___VEC1(___REF_SUB(309))
               ___VEC1(___REF_SUB(311))
               ___VEC1(___REF_SUB(313))
               ___VEC1(___REF_SUB(315))
               ___VEC0
___DEF_SUB_VEC(___X307,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(308))
               ___VEC0
___DEF_SUB_VEC(___X308,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(174))
               ___VEC0
___DEF_SUB_VEC(___X309,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(310))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X310,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1048751))
               ___VEC0
___DEF_SUB_VEC(___X311,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(312))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X312,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1048751))
               ___VEC0
___DEF_SUB_VEC(___X313,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(314))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X314,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131247))
               ___VEC0
___DEF_SUB_VEC(___X315,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X316,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131247))
               ___VEC0
___DEF_SUB_VEC(___X317,1UL)
               ___VEC1(___REF_SYM(75,___S_thunk))
               ___VEC0
___DEF_SUB_VEC(___X318,2UL)
               ___VEC1(___REF_SUB(319))
               ___VEC1(___REF_SUB(330))
               ___VEC0
___DEF_SUB_VEC(___X319,5UL)
               ___VEC1(___REF_SUB(320))
               ___VEC1(___REF_SUB(322))
               ___VEC1(___REF_SUB(324))
               ___VEC1(___REF_SUB(326))
               ___VEC1(___REF_SUB(328))
               ___VEC0
___DEF_SUB_VEC(___X320,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(321))
               ___VEC0
___DEF_SUB_VEC(___X321,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(179))
               ___VEC0
___DEF_SUB_VEC(___X322,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(323))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X323,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179828))
               ___VEC0
___DEF_SUB_VEC(___X324,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(325))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X325,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(1179828))
               ___VEC0
___DEF_SUB_VEC(___X326,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(327))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X327,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131252))
               ___VEC0
___DEF_SUB_VEC(___X328,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(329))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X329,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131252))
               ___VEC0
___DEF_SUB_VEC(___X330,1UL)
               ___VEC1(___REF_SYM(75,___S_thunk))
               ___VEC0
___DEF_SUB_VEC(___X331,2UL)
               ___VEC1(___REF_SUB(332))
               ___VEC1(___REF_SUB(343))
               ___VEC0
___DEF_SUB_VEC(___X332,5UL)
               ___VEC1(___REF_SUB(333))
               ___VEC1(___REF_SUB(335))
               ___VEC1(___REF_SUB(337))
               ___VEC1(___REF_SUB(339))
               ___VEC1(___REF_SUB(341))
               ___VEC0
___DEF_SUB_VEC(___X333,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(334))
               ___VEC0
___DEF_SUB_VEC(___X334,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(184))
               ___VEC0
___DEF_SUB_VEC(___X335,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(336))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X336,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(983225))
               ___VEC0
___DEF_SUB_VEC(___X337,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(338))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X338,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(983225))
               ___VEC0
___DEF_SUB_VEC(___X339,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(340))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X340,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131257))
               ___VEC0
___DEF_SUB_VEC(___X341,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(342))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X342,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131257))
               ___VEC0
___DEF_SUB_VEC(___X343,1UL)
               ___VEC1(___REF_SYM(75,___S_thunk))
               ___VEC0
___DEF_SUB_VEC(___X344,2UL)
               ___VEC1(___REF_SUB(345))
               ___VEC1(___REF_SUB(348))
               ___VEC0
___DEF_SUB_VEC(___X345,1UL)
               ___VEC1(___REF_SUB(346))
               ___VEC0
___DEF_SUB_VEC(___X346,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(347))
               ___VEC0
___DEF_SUB_VEC(___X347,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(197))
               ___VEC0
___DEF_SUB_VEC(___X348,0UL)
               ___VEC0
___DEF_SUB_VEC(___X349,2UL)
               ___VEC1(___REF_SUB(350))
               ___VEC1(___REF_SUB(359))
               ___VEC0
___DEF_SUB_VEC(___X350,4UL)
               ___VEC1(___REF_SUB(351))
               ___VEC1(___REF_SUB(353))
               ___VEC1(___REF_SUB(355))
               ___VEC1(___REF_SUB(357))
               ___VEC0
___DEF_SUB_VEC(___X351,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(352))
               ___VEC0
___DEF_SUB_VEC(___X352,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(201))
               ___VEC0
___DEF_SUB_VEC(___X353,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(354))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X354,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131274))
               ___VEC0
___DEF_SUB_VEC(___X355,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(356))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X356,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131274))
               ___VEC0
___DEF_SUB_VEC(___X357,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(358))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X358,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131274))
               ___VEC0
___DEF_SUB_VEC(___X359,1UL)
               ___VEC1(___REF_SYM(75,___S_thunk))
               ___VEC0
___DEF_SUB_STR(___X360,37UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,40,112,114,105,109,111)
               ___STR8(114,100,105,97,108,45,116,104)
               ___STR8(114,101,97,100,63,41,32,102)
               ___STR5(97,105,108,101,100)
___DEF_SUB_VEC(___X361,2UL)
               ___VEC1(___REF_SUB(362))
               ___VEC1(___REF_SUB(377))
               ___VEC0
___DEF_SUB_VEC(___X362,7UL)
               ___VEC1(___REF_SUB(363))
               ___VEC1(___REF_SUB(365))
               ___VEC1(___REF_SUB(367))
               ___VEC1(___REF_SUB(369))
               ___VEC1(___REF_SUB(371))
               ___VEC1(___REF_SUB(373))
               ___VEC1(___REF_SUB(375))
               ___VEC0
___DEF_SUB_VEC(___X363,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(364))
               ___VEC0
___DEF_SUB_VEC(___X364,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(205))
               ___VEC0
___DEF_SUB_VEC(___X365,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(366))
               ___VEC0
___DEF_SUB_VEC(___X366,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(655566))
               ___VEC0
___DEF_SUB_VEC(___X367,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(368))
               ___VEC0
___DEF_SUB_VEC(___X368,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(655566))
               ___VEC0
___DEF_SUB_VEC(___X369,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(370))
               ___VEC0
___DEF_SUB_VEC(___X370,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131278))
               ___VEC0
___DEF_SUB_VEC(___X371,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(372))
               ___VEC0
___DEF_SUB_VEC(___X372,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131278))
               ___VEC0
___DEF_SUB_VEC(___X373,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(374))
               ___VEC0
___DEF_SUB_VEC(___X374,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131278))
               ___VEC0
___DEF_SUB_VEC(___X375,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(376))
               ___VEC0
___DEF_SUB_VEC(___X376,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131278))
               ___VEC0
___DEF_SUB_VEC(___X377,0UL)
               ___VEC0
___DEF_SUB_VEC(___X378,2UL)
               ___VEC1(___REF_SUB(379))
               ___VEC1(___REF_SUB(388))
               ___VEC0
___DEF_SUB_VEC(___X379,4UL)
               ___VEC1(___REF_SUB(380))
               ___VEC1(___REF_SUB(382))
               ___VEC1(___REF_SUB(384))
               ___VEC1(___REF_SUB(386))
               ___VEC0
___DEF_SUB_VEC(___X380,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(381))
               ___VEC0
___DEF_SUB_VEC(___X381,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(208))
               ___VEC0
___DEF_SUB_VEC(___X382,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(383))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X383,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131281))
               ___VEC0
___DEF_SUB_VEC(___X384,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(385))
               ___VEC0
___DEF_SUB_VEC(___X385,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131281))
               ___VEC0
___DEF_SUB_VEC(___X386,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(387))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X387,2UL)
               ___VEC1(___REF_SYM(24,___S_jazz_2e_event))
               ___VEC1(___REF_FIX(131281))
               ___VEC0
___DEF_SUB_VEC(___X388,1UL)
               ___VEC1(___REF_SYM(59,___S_proc))
               ___VEC0
___DEF_SUB_VEC(___X389,5UL)
               ___VEC1(___REF_SYM(4,___S_bin_3a_jazz_2e_event))
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
,___DEF_SUB(___X265)
,___DEF_SUB(___X266)
,___DEF_SUB(___X267)
,___DEF_SUB(___X268)
,___DEF_SUB(___X269)
,___DEF_SUB(___X270)
,___DEF_SUB(___X271)
,___DEF_SUB(___X272)
,___DEF_SUB(___X273)
,___DEF_SUB(___X274)
,___DEF_SUB(___X275)
,___DEF_SUB(___X276)
,___DEF_SUB(___X277)
,___DEF_SUB(___X278)
,___DEF_SUB(___X279)
,___DEF_SUB(___X280)
,___DEF_SUB(___X281)
,___DEF_SUB(___X282)
,___DEF_SUB(___X283)
,___DEF_SUB(___X284)
,___DEF_SUB(___X285)
,___DEF_SUB(___X286)
,___DEF_SUB(___X287)
,___DEF_SUB(___X288)
,___DEF_SUB(___X289)
,___DEF_SUB(___X290)
,___DEF_SUB(___X291)
,___DEF_SUB(___X292)
,___DEF_SUB(___X293)
,___DEF_SUB(___X294)
,___DEF_SUB(___X295)
,___DEF_SUB(___X296)
,___DEF_SUB(___X297)
,___DEF_SUB(___X298)
,___DEF_SUB(___X299)
,___DEF_SUB(___X300)
,___DEF_SUB(___X301)
,___DEF_SUB(___X302)
,___DEF_SUB(___X303)
,___DEF_SUB(___X304)
,___DEF_SUB(___X305)
,___DEF_SUB(___X306)
,___DEF_SUB(___X307)
,___DEF_SUB(___X308)
,___DEF_SUB(___X309)
,___DEF_SUB(___X310)
,___DEF_SUB(___X311)
,___DEF_SUB(___X312)
,___DEF_SUB(___X313)
,___DEF_SUB(___X314)
,___DEF_SUB(___X315)
,___DEF_SUB(___X316)
,___DEF_SUB(___X317)
,___DEF_SUB(___X318)
,___DEF_SUB(___X319)
,___DEF_SUB(___X320)
,___DEF_SUB(___X321)
,___DEF_SUB(___X322)
,___DEF_SUB(___X323)
,___DEF_SUB(___X324)
,___DEF_SUB(___X325)
,___DEF_SUB(___X326)
,___DEF_SUB(___X327)
,___DEF_SUB(___X328)
,___DEF_SUB(___X329)
,___DEF_SUB(___X330)
,___DEF_SUB(___X331)
,___DEF_SUB(___X332)
,___DEF_SUB(___X333)
,___DEF_SUB(___X334)
,___DEF_SUB(___X335)
,___DEF_SUB(___X336)
,___DEF_SUB(___X337)
,___DEF_SUB(___X338)
,___DEF_SUB(___X339)
,___DEF_SUB(___X340)
,___DEF_SUB(___X341)
,___DEF_SUB(___X342)
,___DEF_SUB(___X343)
,___DEF_SUB(___X344)
,___DEF_SUB(___X345)
,___DEF_SUB(___X346)
,___DEF_SUB(___X347)
,___DEF_SUB(___X348)
,___DEF_SUB(___X349)
,___DEF_SUB(___X350)
,___DEF_SUB(___X351)
,___DEF_SUB(___X352)
,___DEF_SUB(___X353)
,___DEF_SUB(___X354)
,___DEF_SUB(___X355)
,___DEF_SUB(___X356)
,___DEF_SUB(___X357)
,___DEF_SUB(___X358)
,___DEF_SUB(___X359)
,___DEF_SUB(___X360)
,___DEF_SUB(___X361)
,___DEF_SUB(___X362)
,___DEF_SUB(___X363)
,___DEF_SUB(___X364)
,___DEF_SUB(___X365)
,___DEF_SUB(___X366)
,___DEF_SUB(___X367)
,___DEF_SUB(___X368)
,___DEF_SUB(___X369)
,___DEF_SUB(___X370)
,___DEF_SUB(___X371)
,___DEF_SUB(___X372)
,___DEF_SUB(___X373)
,___DEF_SUB(___X374)
,___DEF_SUB(___X375)
,___DEF_SUB(___X376)
,___DEF_SUB(___X377)
,___DEF_SUB(___X378)
,___DEF_SUB(___X379)
,___DEF_SUB(___X380)
,___DEF_SUB(___X381)
,___DEF_SUB(___X382)
,___DEF_SUB(___X383)
,___DEF_SUB(___X384)
,___DEF_SUB(___X385)
,___DEF_SUB(___X386)
,___DEF_SUB(___X387)
,___DEF_SUB(___X388)
,___DEF_SUB(___X389)
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_event_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L6_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L7_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L8_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L9_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL(___L10_jazz_2e_event_3a_construct_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_make_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_make_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_make_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_make_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_make_2d_event)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_make_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L6_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L7_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L8_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L9_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL(___L10_jazz_2e_event_3a_clone_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_register_2d_event_2d_hook)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_register_2d_event_2d_hook)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_register_2d_event_2d_hook)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L6_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L7_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L8_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L9_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL(___L10_jazz_2e_event_3a_hook_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L6_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L7_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L8_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L9_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL(___L10_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_event_2d_thread)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_event_2d_thread)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_event_2d_thread)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_event_2d_thread)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L6_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L7_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L8_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL(___L9_jazz_2e_event_3a_delay_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_post_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_post_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_post_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_post_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_post_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_block_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_block_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_block_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_block_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_block_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_send_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_send_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_send_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_send_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_send_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_call_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_call_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_call_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_call_2d_event)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_call_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_synchronize_2d_event)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_synchronize_2d_event)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_synchronize_2d_event)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_synchronize_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L4_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L5_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L6_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L1_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L2_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_M_HLBL(___L3_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_event_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_event_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_event_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_event_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_event_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_event_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_event_23_)
   ___SET_R1(___SYM_jazz_2e_event_2e_autoload)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_event_23_)
   ___SET_STK(1,___SYM_jazz_2e_event)
   ___SET_R3(___CNS(0))
   ___SET_R2(___CNS(50))
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),64,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_event_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),24)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(1,___G_jazz_2e_event_2e_Event_3a_Event_3a_autoload,___STK(-2))
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),20)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(33,___G_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload,___STK(-2))
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),16)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(34,___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload,___STK(-2))
   ___SET_GLO(35,___G_jazz_2f_event__set_2d_property_21_d_5e_0,___FAL)
   ___SET_R2(___LBL(15))
   ___SET_R1(___SYM_set_2d_property)
   ___SET_R0(___LBL(7))
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_event_23_)
   ___JUMPGLOSAFE(___SET_NARGS(2),56,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_event_23_)
   ___SET_GLO(35,___G_jazz_2f_event__set_2d_property_21_d_5e_0,___R1)
   ___SET_R1(___SYM_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),58,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_event_23_)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L29_bin_3a_jazz_2e_event_23_)
   ___END_IF
   ___SET_R1(___SYM_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),59,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_event_23_)
   ___GOTO(___L28_bin_3a_jazz_2e_event_23_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_event_23_)
___DEF_GLBL(___L28_bin_3a_jazz_2e_event_23_)
   ___SET_GLO(4,___G_jazz_2e_event_3a_Event_2d_Consumer,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_event_3a_Event_2d_Consumer,___FIX(7L)))
   ___SET_GLO(5,___G_jazz_2e_event_3a_Event_2d_Consumer_21_rank,___R1)
   ___SET_GLO(8,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer,___PRC(30))
   ___SET_R3(___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
   ___SET_R2(___SYM_get_2d_event_2d_consumer)
   ___SET_R1(___GLO_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(3),55,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_event_23_)
   ___SET_GLO(9,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer_21_rank,___R1)
   ___SET_GLO(10,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer,___PRC(35))
   ___SET_R3(___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
   ___SET_R2(___SYM_set_2d_event_2d_consumer)
   ___SET_R1(___GLO_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(3),55,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_event_23_)
   ___SET_GLO(11,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer_21_rank,___R1)
   ___SET_GLO(6,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event,___PRC(40))
   ___SET_R3(___GLO_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
   ___SET_R2(___SYM_deliver_2d_event)
   ___SET_R1(___GLO_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(3),55,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_event_23_)
   ___SET_GLO(7,___G_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event_21_rank,___R1)
   ___SET_GLO(16,___G_jazz_2e_event_3a_construct_2d_event,___PRC(45))
   ___SET_GLO(23,___G_jazz_2e_event_3a_make_2d_event,___PRC(57))
   ___SET_GLO(15,___G_jazz_2e_event_3a_clone_2d_event,___PRC(64))
   ___SET_GLO(3,___G_jazz_2e_event_3a__2a_event_2d_hooks_2a_,___NUL)
   ___SET_GLO(26,___G_jazz_2e_event_3a_register_2d_event_2d_hook,___PRC(76))
   ___SET_GLO(32,___G_jazz_2e_event_3a_unregister_2d_event_2d_hook,___PRC(80))
   ___SET_GLO(21,___G_jazz_2e_event_3a_hook_2d_event,___PRC(85))
   ___SET_GLO(2,___G_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_,___NUL)
   ___SET_GLO(25,___G_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,___PRC(97))
   ___SET_GLO(31,___G_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,___PRC(101))
   ___SET_GLO(22,___G_jazz_2e_event_3a_hook_2d_event_2d_access,___PRC(106))
   ___SET_GLO(19,___G_jazz_2e_event_3a_event_2d_thread,___PRC(118))
   ___SET_GLO(20,___G_jazz_2e_event_3a_event_2d_thread_3f_,___PRC(123))
   ___SET_GLO(17,___G_jazz_2e_event_3a_delay_2d_event,___PRC(128))
   ___SET_GLO(24,___G_jazz_2e_event_3a_post_2d_event,___PRC(139))
   ___SET_GLO(13,___G_jazz_2e_event_3a_block_2d_event,___PRC(145))
   ___SET_GLO(27,___G_jazz_2e_event_3a_send_2d_event,___PRC(151))
   ___SET_GLO(14,___G_jazz_2e_event_3a_call_2d_event,___PRC(157))
   ___SET_GLO(18,___G_jazz_2e_event_3a_event_2d_synchronizer,___GLO_jazz_2e_event_3a_send_2d_event)
   ___SET_GLO(29,___G_jazz_2e_event_3a_set_2d_event_2d_synchronizer,___PRC(163))
   ___SET_GLO(30,___G_jazz_2e_event_3a_synchronize_2d_event,___PRC(165))
   ___SET_GLO(12,___G_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___PRC(170))
   ___SET_GLO(28,___G_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,___PRC(178))
   ___SET_R1(___VOID)
   ___POLL(14)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_event_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L29_bin_3a_jazz_2e_event_23_)
   ___SET_R3(___NUL)
   ___SET_R2(___SYM_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R1(___GLO_jazz_3a_Interface)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(3),62,___G_jazz_3a_new_2d_interface)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_event_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(15,1,0,0)
   ___SET_GLO(35,___G_jazz_2f_event__set_2d_property_21_d_5e_0,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_event_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(16,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L30_bin_3a_jazz_2e_event_23_)
   ___END_IF
   ___GOTO(___L31_bin_3a_jazz_2e_event_23_)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L30_bin_3a_jazz_2e_event_23_)
   ___SET_R1(___GLO_jazz_2e_platform_3a_parse_2d_event_2d_modifiers)
   ___POLL(18)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_event_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L31_bin_3a_jazz_2e_event_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_platform)
   ___ADJFP(8)
   ___POLL(19)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_event_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(20,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L32_bin_3a_jazz_2e_event_23_)
   ___END_IF
   ___GOTO(___L33_bin_3a_jazz_2e_event_23_)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L32_bin_3a_jazz_2e_event_23_)
   ___SET_R1(___GLO_jazz_2e_platform_3a_modifiers_2d_mask)
   ___POLL(22)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_event_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L33_bin_3a_jazz_2e_event_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_platform)
   ___ADJFP(8)
   ___POLL(23)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_event_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(24,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L34_bin_3a_jazz_2e_event_23_)
   ___END_IF
   ___GOTO(___L35_bin_3a_jazz_2e_event_23_)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L34_bin_3a_jazz_2e_event_23_)
   ___SET_R1(___GLO_jazz_2e_event_2e_Event_3a_Event)
   ___POLL(26)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_event_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L35_bin_3a_jazz_2e_event_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_event_2e_Event)
   ___ADJFP(8)
   ___POLL(27)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_event_23_)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_get_2d_event_2d_consumer)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),57,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer
#undef ___PH_LBL0
#define ___PH_LBL0 35
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_set_2d_event_2d_consumer)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),57,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 40
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_event_3a_Event_2d_Consumer)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_deliver_2d_event)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),57,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_construct_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L6_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L7_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L8_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L9_jazz_2e_event_3a_construct_2d_event)
___DEF_P_HLBL(___L10_jazz_2e_event_3a_construct_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_construct_2d_event)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_construct_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_construct_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),34,___G_jazz_2e_platform_3a_parse_2d_event_2d_modifiers_3a_autoload)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_construct_2d_event)
   ___SET_STK(-4,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-4),6)
   ___ADD_CLO_ELEM(0,___STK(-6))
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(-4))
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(4))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_construct_2d_event)
   ___JUMPGENSAFE(___SET_NARGS(2),___STK(-4))
___DEF_SLBL(4,___L4_jazz_2e_event_3a_construct_2d_event)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_construct_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(6,___L6_jazz_2e_event_3a_construct_2d_event)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(6,2,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___GLO_jazz_3a_new)
   ___SET_STK(4,___R4)
   ___ADJFP(12)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_event_3a_construct_2d_event)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_event_2e_Event_3a_Event_3a_autoload)
___DEF_SLBL(8,___L8_jazz_2e_event_3a_construct_2d_event)
   ___SET_STK(-2,___R1)
   ___SET_STK(-1,___CLO(___STK(-8),1))
   ___SET_R3(___STK(-9))
   ___SET_R2(___STK(-10))
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(9))
   ___ADJFP(-1)
   ___JUMPPRM(___SET_NARGS(6),___PRM_apply)
___DEF_SLBL(9,___L9_jazz_2e_event_3a_construct_2d_event)
   ___POLL(10)
___DEF_SLBL(10,___L10_jazz_2e_event_3a_construct_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_make_2d_event
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
___DEF_P_HLBL(___L0_jazz_2e_event_3a_make_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_make_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_make_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_make_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_make_2d_event)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_make_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_make_2d_event)
   ___IF_NARGS_EQ(3,___PUSH(___R1) ___SET_R1(___R2) ___SET_R2(___R3) ___SET_R3(___NUL))
   ___GET_REST(0,3,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_make_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(8,___GLO_jazz_3a_new)
   ___SET_STK(9,___STK(0))
   ___SET_STK(10,___R1)
   ___ADJFP(15)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_make_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),33,___G_jazz_2e_platform_3a_modifiers_2d_mask_3a_autoload)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_make_2d_event)
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(0),___R1)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_make_2d_event)
   ___SET_R2(___R1)
   ___SET_R3(___STK(-11))
   ___SET_R1(___STK(-12))
   ___SET_R0(___LBL(4))
   ___ADJFP(-5)
   ___JUMPPRM(___SET_NARGS(6),___PRM_apply)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_make_2d_event)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_make_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_clone_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 64
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L6_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L7_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L8_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L9_jazz_2e_event_3a_clone_2d_event)
___DEF_P_HLBL(___L10_jazz_2e_event_3a_clone_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_clone_2d_event)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_clone_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_clone_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_copy)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_clone_2d_event)
   ___SET_STK(-4,___R1)
   ___SET_STK(-3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-3),6)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(-3))
   ___SET_R2(___STK(-5))
   ___SET_R0(___LBL(4))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_clone_2d_event)
   ___JUMPGLOSAFE(___SET_NARGS(2),41,___G_jazz_2e_language_2e_runtime_2e_functional_3a_for_2d_each_2d_property)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_clone_2d_event)
   ___SET_R1(___STK(-4))
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_clone_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(6,___L6_jazz_2e_event_3a_clone_2d_event)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(6,2,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___ADJFP(8)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_event_3a_clone_2d_event)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),35,___G_jazz_2f_event__set_2d_property_21_d_5e_0)
___DEF_SLBL(8,___L8_jazz_2e_event_3a_clone_2d_event)
   ___SET_R3(___STK(-5))
   ___SET_R2(___STK(-6))
   ___SET_STK(-3,___R1)
   ___SET_R1(___CLO(___STK(-4),1))
   ___SET_R0(___LBL(9))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-3))
___DEF_SLBL(9,___L9_jazz_2e_event_3a_clone_2d_event)
   ___POLL(10)
___DEF_SLBL(10,___L10_jazz_2e_event_3a_clone_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_register_2d_event_2d_hook
#undef ___PH_LBL0
#define ___PH_LBL0 76
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_register_2d_event_2d_hook)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_register_2d_event_2d_hook)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_register_2d_event_2d_hook)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_register_2d_event_2d_hook)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_register_2d_event_2d_hook)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___CONS(___R1,___NUL))
   ___SET_R1(___GLO_jazz_2e_event_3a__2a_event_2d_hooks_2a_)
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_register_2d_event_2d_hook)
   ___JUMPPRM(___SET_NARGS(2),___PRM_append)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_register_2d_event_2d_hook)
   ___SET_GLO(3,___G_jazz_2e_event_3a__2a_event_2d_hooks_2a_,___R1)
   ___SET_R1(___VOID)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_unregister_2d_event_2d_hook
#undef ___PH_LBL0
#define ___PH_LBL0 80
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_unregister_2d_event_2d_hook)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_unregister_2d_event_2d_hook)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_unregister_2d_event_2d_hook)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___GLO_jazz_2e_event_3a__2a_event_2d_hooks_2a_)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_unregister_2d_event_2d_hook)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_unregister_2d_event_2d_hook)
   ___SET_GLO(3,___G_jazz_2e_event_3a__2a_event_2d_hooks_2a_,___R1)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_unregister_2d_event_2d_hook)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_hook_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 85
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L6_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L7_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L8_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L9_jazz_2e_event_3a_hook_2d_event)
___DEF_P_HLBL(___L10_jazz_2e_event_3a_hook_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_hook_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_hook_2d_event)
   ___SET_STK(1,___GLO_jazz_2e_event_3a__2a_event_2d_hooks_2a_)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_hook_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),63,___G_jazz_3a_not_2d_null_3f_)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_hook_2d_event)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L13_jazz_2e_event_3a_hook_2d_event)
   ___END_IF
   ___SET_R2(___STK(-7))
   ___SET_R1(___STK(-5))
   ___SET_R0(___STK(-6))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_hook_2d_event)
   ___GOTO(___L11_jazz_2e_event_3a_hook_2d_event)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_hook_2d_event)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_hook_2d_event)
___DEF_GLBL(___L11_jazz_2e_event_3a_hook_2d_event)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L12_jazz_2e_event_3a_hook_2d_event)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R2(___CAR(___R2))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_event_3a_hook_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_event_3a_hook_2d_event)
   ___SET_R0(___LBL(8))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(8,___L8_jazz_2e_event_3a_hook_2d_event)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_event_3a_hook_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L12_jazz_2e_event_3a_hook_2d_event)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L13_jazz_2e_event_3a_hook_2d_event)
   ___SET_R1(___VOID)
   ___POLL(10)
___DEF_SLBL(10,___L10_jazz_2e_event_3a_hook_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook
#undef ___PH_LBL0
#define ___PH_LBL0 97
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___CONS(___R1,___NUL))
   ___SET_R1(___GLO_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_)
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
   ___JUMPPRM(___SET_NARGS(2),___PRM_append)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook)
   ___SET_GLO(2,___G_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_,___R1)
   ___SET_R1(___VOID)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook
#undef ___PH_LBL0
#define ___PH_LBL0 101
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___GLO_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),44,___G_jazz_2e_language_2e_runtime_2e_functional_3a_remove_21_)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
   ___SET_GLO(2,___G_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_,___R1)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_hook_2d_event_2d_access
#undef ___PH_LBL0
#define ___PH_LBL0 106
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L6_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L7_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L8_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L9_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_P_HLBL(___L10_jazz_2e_event_3a_hook_2d_event_2d_access)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_STK(1,___GLO_jazz_2e_event_3a__2a_event_2d_access_2d_hooks_2a_)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),63,___G_jazz_3a_not_2d_null_3f_)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L13_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___END_IF
   ___SET_R2(___STK(-7))
   ___SET_R1(___STK(-5))
   ___SET_R0(___STK(-6))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___GOTO(___L11_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_hook_2d_event_2d_access)
___DEF_GLBL(___L11_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L12_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R2(___CAR(___R2))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_R0(___LBL(8))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(8,___L8_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L12_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L13_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___SET_R1(___VOID)
   ___POLL(10)
___DEF_SLBL(10,___L10_jazz_2e_event_3a_hook_2d_event_2d_access)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_event_2d_thread
#undef ___PH_LBL0
#define ___PH_LBL0 118
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_event_2d_thread)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_event_2d_thread)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_event_2d_thread)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_event_2d_thread)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_event_2d_thread)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_event_2d_thread)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_event_2d_thread)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),42,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_event_2d_thread)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_event_2d_thread)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_event_2d_thread_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 123
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_event_2d_thread_3f_)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_event_2d_thread_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_event_2d_thread_3f_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_event_2d_thread_3f_)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_event_2d_thread_3f_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_jazz_2e_event_3a_event_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_event_2d_thread_3f_)
   ___SET_R2(___CURRENTTHREAD)
   ___SET_R1(___BOOLEAN(___EQP(___R2,___R1)))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_event_2d_thread_3f_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_delay_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 128
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L6_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L7_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L8_jazz_2e_event_3a_delay_2d_event)
___DEF_P_HLBL(___L9_jazz_2e_event_3a_delay_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_delay_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_delay_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_delay_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),50,___G_jazz_2e_language_2e_runtime_2e_functional_3a_write_2d_delayed_2d_event)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_delay_2d_event)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_jazz_2e_event_3a_event_2d_thread)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_delay_2d_event)
   ___SET_STK(-5,___R1)
   ___SET_R2(___LBL(6))
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),49,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_write)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_delay_2d_event)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_delay_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(6,___L6_jazz_2e_event_3a_delay_2d_event)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(6,0,0,0)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_event_3a_delay_2d_event)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(0),66,___G_jazz_3a_unspecified)
___DEF_SLBL(8,___L8_jazz_2e_event_3a_delay_2d_event)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_event_3a_delay_2d_event)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_post_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 139
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_post_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_post_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_post_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_post_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_post_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_post_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_post_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_post_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_jazz_2e_event_3a_event_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_post_2d_event)
   ___SET_R3(___STK(-6))
   ___SET_R2(___SYM_post_2d_event)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),48,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_post_2d_event)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_post_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_block_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 145
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_block_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_block_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_block_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_block_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_block_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_block_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_block_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_block_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_jazz_2e_event_3a_event_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_block_2d_event)
   ___SET_R3(___STK(-6))
   ___SET_R2(___SYM_block_2d_event)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),45,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_block)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_block_2d_event)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_block_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_send_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 151
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_send_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_send_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_send_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_send_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_send_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_send_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_send_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_send_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_jazz_2e_event_3a_event_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_send_2d_event)
   ___SET_R3(___STK(-6))
   ___SET_R2(___SYM_send_2d_event)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),47,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_execute)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_send_2d_event)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_send_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_call_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 157
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_call_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_call_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_call_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_call_2d_event)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_call_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_call_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_call_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_call_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_jazz_2e_event_3a_event_2d_thread)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_call_2d_event)
   ___SET_R3(___STK(-6))
   ___SET_R2(___SYM_call_2d_event)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),46,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_call)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_call_2d_event)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_call_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_set_2d_event_2d_synchronizer
#undef ___PH_LBL0
#define ___PH_LBL0 163
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_set_2d_event_2d_synchronizer)
   ___SET_GLO(18,___G_jazz_2e_event_3a_event_2d_synchronizer,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_synchronize_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 165
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_synchronize_2d_event)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_synchronize_2d_event)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_synchronize_2d_event)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_synchronize_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_synchronize_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_synchronize_2d_event)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_synchronize_2d_event)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_2e_event_3a_event_2d_synchronizer)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_synchronize_2d_event)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_synchronize_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized
#undef ___PH_LBL0
#define ___PH_LBL0 170
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L4_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L5_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L6_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),43,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L7_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___END_IF
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(0),66,___G_jazz_3a_unspecified)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L7_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___SET_R1(___SUB(360))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),40,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(5,___L5_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_event_3a_assert_2d_event_2d_synchronized)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized
#undef ___PH_LBL0
#define ___PH_LBL0 178
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L1_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L2_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_P_HLBL(___L3_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___IF(___NOT(___PROCEDUREP(___R1)))
   ___GOTO(___L5_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___END_IF
   ___SET_STK(1,___R1)
   ___ADJFP(1)
   ___GOTO(___L4_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
___DEF_SLBL(1,___L1_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___SET_R0(___STK(-7))
   ___SET_STK(-7,___STK(-6))
   ___ADJFP(-7)
___DEF_GLBL(___L4_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___SET_GLO(12,___G_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___R1)
   ___SET_R1(___VOID)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L5_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___GLO_jazz_3a_Procedure)
   ___ADJFP(8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized)
   ___SET_R0(___LBL(1))
   ___JUMPGLOSAFE(___SET_NARGS(2),65,___G_jazz_3a_type_2d_error)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_event_23_,"bin:jazz.event#",___REF_SUB(0),28,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_event_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_event_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer,0,___REF_SUB(59),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_get_2d_event_2d_consumer,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer,0,___REF_SUB(70),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_set_2d_event_2d_consumer,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event,0,___REF_SUB(81),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_Event_2d_Consumer_3a_deliver_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_construct_2d_event,0,___REF_SUB(92),11,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_construct_2d_event,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_construct_2d_event,2,1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___OFD(___RETI,12,0,0x3f10fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETN,9,0,0x10fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_construct_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_make_2d_event,0,___REF_SUB(117),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_make_2d_event,4,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_make_2d_event,___OFD(___RETI,16,1,0x3f071fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_make_2d_event,___IFD(___RETN,13,1,0x71fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_make_2d_event,___IFD(___RETN,13,1,0x71fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_make_2d_event,___IFD(___RETN,5,1,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_make_2d_event,___IFD(___RETI,8,1,0x3f1fL))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_clone_2d_event,0,___REF_SUB(132),11,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_clone_2d_event,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_clone_2d_event,2,1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_clone_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_register_2d_event_2d_hook,0,___REF_SUB(157),3,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_register_2d_event_2d_hook,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_register_2d_event_2d_hook,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_register_2d_event_2d_hook,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_unregister_2d_event_2d_hook,0,___REF_SUB(166),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_unregister_2d_event_2d_hook,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_unregister_2d_event_2d_hook,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_unregister_2d_event_2d_hook,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_unregister_2d_event_2d_hook,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_hook_2d_event,0,___REF_SUB(177),11,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_hook_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,0,___REF_SUB(202),3,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,0,___REF_SUB(211),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_hook_2d_event_2d_access,0,___REF_SUB(222),11,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_hook_2d_event_2d_access,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_hook_2d_event_2d_access,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_event_2d_thread,0,___REF_SUB(247),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_event_2d_thread,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_event_2d_thread,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_event_2d_thread,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_event_2d_thread,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_event_2d_thread_3f_,0,___REF_SUB(258),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_event_2d_thread_3f_,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_event_2d_thread_3f_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_event_2d_thread_3f_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_event_2d_thread_3f_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_delay_2d_event,0,___REF_SUB(269),10,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_delay_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_delay_2d_event,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_delay_2d_event,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_post_2d_event,0,___REF_SUB(292),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_post_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_post_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_post_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_post_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_post_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_block_2d_event,0,___REF_SUB(305),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_block_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_block_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_block_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_block_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_block_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_send_2d_event,0,___REF_SUB(318),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_send_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_send_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_send_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_send_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_send_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_call_2d_event,0,___REF_SUB(331),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_call_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_call_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_call_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_call_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_call_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_set_2d_event_2d_synchronizer,0,___REF_SUB(344),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_set_2d_event_2d_synchronizer,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_synchronize_2d_event,0,___REF_SUB(349),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_synchronize_2d_event,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_synchronize_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_synchronize_2d_event,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_synchronize_2d_event,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,0,___REF_SUB(361),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_assert_2d_event_2d_synchronized,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,0,___REF_SUB(378),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,___IFD(___RETI,8,0,0x3f03L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f10fL)
,___DEF_OFD(___RETI,16,1)
               ___GCMAP1(0x3f071fL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_event_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_event_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Event,"Event")
___DEF_MOD_SYM(1,___S_Event_2d_Consumer,"Event-Consumer")
___DEF_MOD_SYM(2,___S_Pulse,"Pulse")
___DEF_MOD_SYM(3,___S_assert_2d_event_2d_synchronized,"assert-event-synchronized")
___DEF_MOD_SYM(4,___S_bin_3a_jazz_2e_event,"bin:jazz.event")
___DEF_MOD_SYM(5,___S_block_2d_event,"block-event")
___DEF_MOD_SYM(6,___S_call_2d_event,"call-event")
___DEF_MOD_SYM(7,___S_class,"class")
___DEF_MOD_SYM(8,___S_clone_2d_event,"clone-event")
___DEF_MOD_SYM(9,___S_construct_2d_event,"construct-event")
___DEF_MOD_SYM(10,___S_delay_2d_event,"delay-event")
___DEF_MOD_SYM(11,___S_deliver_2d_event,"deliver-event")
___DEF_MOD_SYM(12,___S_event,"event")
___DEF_MOD_SYM(13,___S_event_2d_synchronizer,"event-synchronizer")
___DEF_MOD_SYM(14,___S_event_2d_thread,"event-thread")
___DEF_MOD_SYM(15,___S_event_2d_thread_3f_,"event-thread?")
___DEF_MOD_SYM(16,___S_evt,"evt")
___DEF_MOD_SYM(17,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(18,___S_get_2d_event_2d_consumer,"get-event-consumer")
___DEF_MOD_SYM(19,___S_hook,"hook")
___DEF_MOD_SYM(20,___S_hook_2d_event,"hook-event")
___DEF_MOD_SYM(21,___S_hook_2d_event_2d_access,"hook-event-access")
___DEF_MOD_SYM(22,___S_hooks,"hooks")
___DEF_MOD_SYM(23,___S_jazz,"jazz")
___DEF_MOD_SYM(24,___S_jazz_2e_event,"jazz.event")
___DEF_MOD_SYM(25,___S_jazz_2e_event_2e_Event,"jazz.event.Event")
___DEF_MOD_SYM(26,___S_jazz_2e_event_2e_Event_3a_Event,"jazz.event.Event:Event")
___DEF_MOD_SYM(27,___S_jazz_2e_event_2e_Pulse,"jazz.event.Pulse")
___DEF_MOD_SYM(28,___S_jazz_2e_event_2e_Pulse_3a_Pulse,"jazz.event.Pulse:Pulse")
___DEF_MOD_SYM(29,___S_jazz_2e_event_2e_autoload,"jazz.event.autoload")
___DEF_MOD_SYM(30,___S_jazz_2e_event_3a_Event_2d_Consumer,"jazz.event:Event-Consumer")
___DEF_MOD_SYM(31,___S_jazz_2e_event_3a_assert_2d_event_2d_synchronized,"jazz.event:assert-event-synchronized")

___DEF_MOD_SYM(32,___S_jazz_2e_event_3a_block_2d_event,"jazz.event:block-event")
___DEF_MOD_SYM(33,___S_jazz_2e_event_3a_call_2d_event,"jazz.event:call-event")
___DEF_MOD_SYM(34,___S_jazz_2e_event_3a_clone_2d_event,"jazz.event:clone-event")
___DEF_MOD_SYM(35,___S_jazz_2e_event_3a_construct_2d_event,"jazz.event:construct-event")
___DEF_MOD_SYM(36,___S_jazz_2e_event_3a_delay_2d_event,"jazz.event:delay-event")
___DEF_MOD_SYM(37,___S_jazz_2e_event_3a_event_2d_synchronizer,"jazz.event:event-synchronizer")

___DEF_MOD_SYM(38,___S_jazz_2e_event_3a_event_2d_thread,"jazz.event:event-thread")
___DEF_MOD_SYM(39,___S_jazz_2e_event_3a_event_2d_thread_3f_,"jazz.event:event-thread?")
___DEF_MOD_SYM(40,___S_jazz_2e_event_3a_hook_2d_event,"jazz.event:hook-event")
___DEF_MOD_SYM(41,___S_jazz_2e_event_3a_hook_2d_event_2d_access,"jazz.event:hook-event-access")
___DEF_MOD_SYM(42,___S_jazz_2e_event_3a_make_2d_event,"jazz.event:make-event")
___DEF_MOD_SYM(43,___S_jazz_2e_event_3a_post_2d_event,"jazz.event:post-event")
___DEF_MOD_SYM(44,___S_jazz_2e_event_3a_register_2d_event_2d_access_2d_hook,"jazz.event:register-event-access-hook")

___DEF_MOD_SYM(45,___S_jazz_2e_event_3a_register_2d_event_2d_hook,"jazz.event:register-event-hook")

___DEF_MOD_SYM(46,___S_jazz_2e_event_3a_send_2d_event,"jazz.event:send-event")
___DEF_MOD_SYM(47,___S_jazz_2e_event_3a_set_2d_assert_2d_event_2d_synchronized,"jazz.event:set-assert-event-synchronized")

___DEF_MOD_SYM(48,___S_jazz_2e_event_3a_set_2d_event_2d_synchronizer,"jazz.event:set-event-synchronizer")

___DEF_MOD_SYM(49,___S_jazz_2e_event_3a_synchronize_2d_event,"jazz.event:synchronize-event")
___DEF_MOD_SYM(50,___S_jazz_2e_event_3a_unregister_2d_event_2d_access_2d_hook,"jazz.event:unregister-event-access-hook")

___DEF_MOD_SYM(51,___S_jazz_2e_event_3a_unregister_2d_event_2d_hook,"jazz.event:unregister-event-hook")

___DEF_MOD_SYM(52,___S_jazz_2e_platform,"jazz.platform")
___DEF_MOD_SYM(53,___S_keyword,"keyword")
___DEF_MOD_SYM(54,___S_kind,"kind")
___DEF_MOD_SYM(55,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(56,___S_make_2d_event,"make-event")
___DEF_MOD_SYM(57,___S_modifiers,"modifiers")
___DEF_MOD_SYM(58,___S_post_2d_event,"post-event")
___DEF_MOD_SYM(59,___S_proc,"proc")
___DEF_MOD_SYM(60,___S_properties,"properties")
___DEF_MOD_SYM(61,___S_public,"public")
___DEF_MOD_SYM(62,___S_register_2d_event_2d_access_2d_hook,"register-event-access-hook")
___DEF_MOD_SYM(63,___S_register_2d_event_2d_hook,"register-event-hook")
___DEF_MOD_SYM(64,___S_rest,"rest")
___DEF_MOD_SYM(65,___S_self,"self")
___DEF_MOD_SYM(66,___S_send_2d_event,"send-event")
___DEF_MOD_SYM(67,___S_sender,"sender")
___DEF_MOD_SYM(68,___S_set_2d_assert_2d_event_2d_synchronized,"set-assert-event-synchronized")

___DEF_MOD_SYM(69,___S_set_2d_event_2d_consumer,"set-event-consumer")
___DEF_MOD_SYM(70,___S_set_2d_event_2d_synchronizer,"set-event-synchronizer")
___DEF_MOD_SYM(71,___S_set_2d_property,"set-property")
___DEF_MOD_SYM(72,___S_synchronize_2d_event,"synchronize-event")
___DEF_MOD_SYM(73,___S_temp_2e_11,"temp.11")
___DEF_MOD_SYM(74,___S_temp_2e_16,"temp.16")
___DEF_MOD_SYM(75,___S_thunk,"thunk")
___DEF_MOD_SYM(76,___S_unregister_2d_event_2d_access_2d_hook,"unregister-event-access-hook")
___DEF_MOD_SYM(77,___S_unregister_2d_event_2d_hook,"unregister-event-hook")
___DEF_MOD_SYM(78,___S_value,"value")
___END_MOD_SYM_KEY

#endif
