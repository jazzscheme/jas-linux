#ifdef ___LINKER_INFO
; File: "debug.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.language.runtime.debug"
(("bin:jazz.language.runtime.debug"))
(
":console"
"advise"
"advise-internal"
"attached-console-port"
"bin:jazz.language.runtime.debug"
"break"
"break-internal"
"cdr^0"
"cdr^1"
"cdr^2"
"cdr^3"
"clear-debug"
"console"
"console-clear-set!"
"console-input-port"
"console-line"
"console-output-port"
"console-port-getter-set!"
"console-string"
"cont"
"continuation-stack"
"count-advice"
"count-advice-internal"
"current-console-port"
"debug"
"debug-advice"
"debug-advice-internal"
"debug-line"
"debug-string"
"debug-thread"
"depth"
"dynamic-environment?"
"execution-backtrace"
"execution-stack"
"force-console"
"foundation.dialect"
"get-continuation-name"
"get-procedure-name"
"identifiers?"
"inspect"
"inspect-internal"
"jazz.debuggee"
"jazz.dialect"
"jazz.language.runtime.debug"
"jazz.language.runtime.debug:advise"
"jazz.language.runtime.debug:attached-console-port"
"jazz.language.runtime.debug:break"
"jazz.language.runtime.debug:clear-debug"
"jazz.language.runtime.debug:console"
"jazz.language.runtime.debug:console-clear-set!"
"jazz.language.runtime.debug:console-input-port"
"jazz.language.runtime.debug:console-line"
"jazz.language.runtime.debug:console-output-port"
"jazz.language.runtime.debug:console-port-getter-set!"
"jazz.language.runtime.debug:console-string"
"jazz.language.runtime.debug:continuation-stack"
"jazz.language.runtime.debug:count-advice"
"jazz.language.runtime.debug:current-console-port"
"jazz.language.runtime.debug:debug"
"jazz.language.runtime.debug:debug-advice"
"jazz.language.runtime.debug:debug-line"
"jazz.language.runtime.debug:debug-string"
"jazz.language.runtime.debug:debug-thread"
"jazz.language.runtime.debug:execution-backtrace"
"jazz.language.runtime.debug:execution-stack"
"jazz.language.runtime.debug:force-console"
"jazz.language.runtime.debug:get-continuation-name"
"jazz.language.runtime.debug:get-procedure-name"
"jazz.language.runtime.debug:inspect"
"jazz.language.runtime.debug:set-platform-log"
"jazz.language.runtime.debug:start-jazz-repl"
"jazz.language.runtime.debug:start-repl"
"jazz.language.runtime.debug:time-advice"
"jazz.language.runtime.debug:trace"
"jazz.language.runtime.debug:unadvise"
"jazz.language.runtime.debug:untrace"
"jazz.language.runtime.format"
"jazz.language.runtime.functional"
"jazz.language.runtime.kernel"
"lexical-environment?"
"line"
"location"
"locations?"
"name"
"output"
"package-variable"
"package-variables"
"post-event"
"procedure"
"protected"
"rest"
"set-platform-log"
"start-jazz-repl"
"start-jazz-repl-internal"
"start-repl"
"start-repl-internal"
"str"
"string"
"temp.16"
"temp.18"
"temp.28"
"thunk"
"time-advice"
"time-advice-internal"
"trace"
"trace-internal"
"unadvise"
"unadvise-internal"
"untrace"
"untrace-internal"
"value"
"variable"
"variables"
"x.19"
"x.29"
)
(
"color"
"depth"
"dynamic-environment?"
"identifiers?"
"lexical-environment?"
"locations?"
"test"
)
(
"bin:jazz.language.runtime.debug#"
"jazz.language.runtime.debug:*console-clear*"
"jazz.language.runtime.debug:*console-port-getter*"
"jazz.language.runtime.debug:attached-console-port"
"jazz.language.runtime.debug:console"
"jazz.language.runtime.debug:console-line"
"jazz.language.runtime.debug:console-mutex"
"jazz.language.runtime.debug:console-string"
"jazz.language.runtime.debug:continuation-stack"
"jazz.language.runtime.debug:current-console-port"
"jazz.language.runtime.debug:debug-thread"
"jazz.language.runtime.debug:get-continuation-name"
"jazz.language.runtime.debug:get-procedure-name"
"jazz.language.runtime.debug:platform-log"
"jazz.language.runtime.debug:procedure-name-cache"
"jazz.language.runtime.debug:with-console-mutex"
)
(
"jazz.language.runtime.debug:advise"
"jazz.language.runtime.debug:break"
"jazz.language.runtime.debug:clear-debug"
"jazz.language.runtime.debug:console-clear-set!"
"jazz.language.runtime.debug:console-input-port"
"jazz.language.runtime.debug:console-output-port"
"jazz.language.runtime.debug:console-port-getter-set!"
"jazz.language.runtime.debug:count-advice"
"jazz.language.runtime.debug:debug"
"jazz.language.runtime.debug:debug-advice"
"jazz.language.runtime.debug:debug-line"
"jazz.language.runtime.debug:debug-string"
"jazz.language.runtime.debug:execution-backtrace"
"jazz.language.runtime.debug:execution-stack"
"jazz.language.runtime.debug:force-console"
"jazz.language.runtime.debug:inspect"
"jazz.language.runtime.debug:set-platform-log"
"jazz.language.runtime.debug:start-jazz-repl"
"jazz.language.runtime.debug:start-repl"
"jazz.language.runtime.debug:time-advice"
"jazz.language.runtime.debug:trace"
"jazz.language.runtime.debug:unadvise"
"jazz.language.runtime.debug:untrace"
)
(
"##table-ref"
"##table-set!"
"append"
"apply"
"car"
"cdr"
"eq?"
"force-output"
"jazz.language.runtime.format:format"
"jazz.language.runtime.functional:primordial-thread"
"jazz.language.runtime.functional:primordial-thread?"
"jazz.language.runtime.functional:register-printer"
"jazz.language.runtime.functional:starts-with?stringstring"
"jazz.language.runtime.functional:thread-post"
"jazz:clear-terminal"
"jazz:continuation-backtrace"
"jazz:continuation-creator"
"jazz:get-continuation-dynamic-environment"
"jazz:get-continuation-lexical-environment"
"jazz:get-continuation-location"
"jazz:get-continuation-stack"
"jazz:load-unit"
"jazz:module-ref"
"jazz:procedure-name"
"jazz:reference-name"
"jazz:register-module"
"jazz:terminal-available?"
"jazz:terminal-port"
"jazz:unspecified"
"make-mutex"
"make-table"
"map"
"mutex-lock!"
"mutex-unlock!"
"string->symbol"
"substring"
"symbol->string"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.language.runtime.debug"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_language_2e_runtime_2e_debug
#define ___MH_PROC ___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 115
#define ___KEYCOUNT 7
#define ___GLOCOUNT 76
#define ___SUPCOUNT 39
#define ___CNSCOUNT 66
#define ___SUBCOUNT 520
#define ___LBLCOUNT 238
#define ___OFDCOUNT 14
#define ___MODDESCR ___REF_SUB(519)
#include "gambit.h"

___NEED_SYM(___S__3a_console)
___NEED_SYM(___S_advise)
___NEED_SYM(___S_advise_2d_internal)
___NEED_SYM(___S_attached_2d_console_2d_port)
___NEED_SYM(___S_bin_3a_jazz_2e_language_2e_runtime_2e_debug)
___NEED_SYM(___S_break)
___NEED_SYM(___S_break_2d_internal)
___NEED_SYM(___S_cdr_5e_0)
___NEED_SYM(___S_cdr_5e_1)
___NEED_SYM(___S_cdr_5e_2)
___NEED_SYM(___S_cdr_5e_3)
___NEED_SYM(___S_clear_2d_debug)
___NEED_SYM(___S_console)
___NEED_SYM(___S_console_2d_clear_2d_set_21_)
___NEED_SYM(___S_console_2d_input_2d_port)
___NEED_SYM(___S_console_2d_line)
___NEED_SYM(___S_console_2d_output_2d_port)
___NEED_SYM(___S_console_2d_port_2d_getter_2d_set_21_)
___NEED_SYM(___S_console_2d_string)
___NEED_SYM(___S_cont)
___NEED_SYM(___S_continuation_2d_stack)
___NEED_SYM(___S_count_2d_advice)
___NEED_SYM(___S_count_2d_advice_2d_internal)
___NEED_SYM(___S_current_2d_console_2d_port)
___NEED_SYM(___S_debug)
___NEED_SYM(___S_debug_2d_advice)
___NEED_SYM(___S_debug_2d_advice_2d_internal)
___NEED_SYM(___S_debug_2d_line)
___NEED_SYM(___S_debug_2d_string)
___NEED_SYM(___S_debug_2d_thread)
___NEED_SYM(___S_depth)
___NEED_SYM(___S_dynamic_2d_environment_3f_)
___NEED_SYM(___S_execution_2d_backtrace)
___NEED_SYM(___S_execution_2d_stack)
___NEED_SYM(___S_force_2d_console)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_continuation_2d_name)
___NEED_SYM(___S_get_2d_procedure_2d_name)
___NEED_SYM(___S_identifiers_3f_)
___NEED_SYM(___S_inspect)
___NEED_SYM(___S_inspect_2d_internal)
___NEED_SYM(___S_jazz_2e_debuggee)
___NEED_SYM(___S_jazz_2e_dialect)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_format)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_functional)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_kernel)
___NEED_SYM(___S_lexical_2d_environment_3f_)
___NEED_SYM(___S_line)
___NEED_SYM(___S_location)
___NEED_SYM(___S_locations_3f_)
___NEED_SYM(___S_name)
___NEED_SYM(___S_output)
___NEED_SYM(___S_package_2d_variable)
___NEED_SYM(___S_package_2d_variables)
___NEED_SYM(___S_post_2d_event)
___NEED_SYM(___S_procedure)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_set_2d_platform_2d_log)
___NEED_SYM(___S_start_2d_jazz_2d_repl)
___NEED_SYM(___S_start_2d_jazz_2d_repl_2d_internal)
___NEED_SYM(___S_start_2d_repl)
___NEED_SYM(___S_start_2d_repl_2d_internal)
___NEED_SYM(___S_str)
___NEED_SYM(___S_string)
___NEED_SYM(___S_temp_2e_16)
___NEED_SYM(___S_temp_2e_18)
___NEED_SYM(___S_temp_2e_28)
___NEED_SYM(___S_thunk)
___NEED_SYM(___S_time_2d_advice)
___NEED_SYM(___S_time_2d_advice_2d_internal)
___NEED_SYM(___S_trace)
___NEED_SYM(___S_trace_2d_internal)
___NEED_SYM(___S_unadvise)
___NEED_SYM(___S_unadvise_2d_internal)
___NEED_SYM(___S_untrace)
___NEED_SYM(___S_untrace_2d_internal)
___NEED_SYM(___S_value)
___NEED_SYM(___S_variable)
___NEED_SYM(___S_variables)
___NEED_SYM(___S_x_2e_19)
___NEED_SYM(___S_x_2e_29)

___NEED_KEY(___K_color)
___NEED_KEY(___K_depth)
___NEED_KEY(___K_dynamic_2d_environment_3f_)
___NEED_KEY(___K_identifiers_3f_)
___NEED_KEY(___K_lexical_2d_environment_3f_)
___NEED_KEY(___K_locations_3f_)
___NEED_KEY(___K_test)

___NEED_GLO(___G__23__23_table_2d_ref)
___NEED_GLO(___G__23__23_table_2d_set_21_)
___NEED_GLO(___G_append)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___NEED_GLO(___G_car)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_force_2d_output)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_register_2d_printer)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_starts_2d_with_3f_stringstring)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
___NEED_GLO(___G_jazz_3a_clear_2d_terminal)
___NEED_GLO(___G_jazz_3a_continuation_2d_backtrace)
___NEED_GLO(___G_jazz_3a_continuation_2d_creator)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_location)
___NEED_GLO(___G_jazz_3a_get_2d_continuation_2d_stack)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_module_2d_ref)
___NEED_GLO(___G_jazz_3a_procedure_2d_name)
___NEED_GLO(___G_jazz_3a_reference_2d_name)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_terminal_2d_available_3f_)
___NEED_GLO(___G_jazz_3a_terminal_2d_port)
___NEED_GLO(___G_jazz_3a_unspecified)
___NEED_GLO(___G_make_2d_mutex)
___NEED_GLO(___G_make_2d_table)
___NEED_GLO(___G_map)
___NEED_GLO(___G_mutex_2d_lock_21_)
___NEED_GLO(___G_mutex_2d_unlock_21_)
___NEED_GLO(___G_string_2d__3e_symbol)
___NEED_GLO(___G_substring)
___NEED_GLO(___G_symbol_2d__3e_string)

___BEGIN_SYM
___DEF_SYM(0,___S__3a_console,":console")
___DEF_SYM(1,___S_advise,"advise")
___DEF_SYM(2,___S_advise_2d_internal,"advise-internal")
___DEF_SYM(3,___S_attached_2d_console_2d_port,"attached-console-port")
___DEF_SYM(4,___S_bin_3a_jazz_2e_language_2e_runtime_2e_debug,"bin:jazz.language.runtime.debug")

___DEF_SYM(5,___S_break,"break")
___DEF_SYM(6,___S_break_2d_internal,"break-internal")
___DEF_SYM(7,___S_cdr_5e_0,"cdr^0")
___DEF_SYM(8,___S_cdr_5e_1,"cdr^1")
___DEF_SYM(9,___S_cdr_5e_2,"cdr^2")
___DEF_SYM(10,___S_cdr_5e_3,"cdr^3")
___DEF_SYM(11,___S_clear_2d_debug,"clear-debug")
___DEF_SYM(12,___S_console,"console")
___DEF_SYM(13,___S_console_2d_clear_2d_set_21_,"console-clear-set!")
___DEF_SYM(14,___S_console_2d_input_2d_port,"console-input-port")
___DEF_SYM(15,___S_console_2d_line,"console-line")
___DEF_SYM(16,___S_console_2d_output_2d_port,"console-output-port")
___DEF_SYM(17,___S_console_2d_port_2d_getter_2d_set_21_,"console-port-getter-set!")
___DEF_SYM(18,___S_console_2d_string,"console-string")
___DEF_SYM(19,___S_cont,"cont")
___DEF_SYM(20,___S_continuation_2d_stack,"continuation-stack")
___DEF_SYM(21,___S_count_2d_advice,"count-advice")
___DEF_SYM(22,___S_count_2d_advice_2d_internal,"count-advice-internal")
___DEF_SYM(23,___S_current_2d_console_2d_port,"current-console-port")
___DEF_SYM(24,___S_debug,"debug")
___DEF_SYM(25,___S_debug_2d_advice,"debug-advice")
___DEF_SYM(26,___S_debug_2d_advice_2d_internal,"debug-advice-internal")
___DEF_SYM(27,___S_debug_2d_line,"debug-line")
___DEF_SYM(28,___S_debug_2d_string,"debug-string")
___DEF_SYM(29,___S_debug_2d_thread,"debug-thread")
___DEF_SYM(30,___S_depth,"depth")
___DEF_SYM(31,___S_dynamic_2d_environment_3f_,"dynamic-environment?")
___DEF_SYM(32,___S_execution_2d_backtrace,"execution-backtrace")
___DEF_SYM(33,___S_execution_2d_stack,"execution-stack")
___DEF_SYM(34,___S_force_2d_console,"force-console")
___DEF_SYM(35,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(36,___S_get_2d_continuation_2d_name,"get-continuation-name")
___DEF_SYM(37,___S_get_2d_procedure_2d_name,"get-procedure-name")
___DEF_SYM(38,___S_identifiers_3f_,"identifiers?")
___DEF_SYM(39,___S_inspect,"inspect")
___DEF_SYM(40,___S_inspect_2d_internal,"inspect-internal")
___DEF_SYM(41,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_SYM(42,___S_jazz_2e_dialect,"jazz.dialect")
___DEF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug,"jazz.language.runtime.debug")
___DEF_SYM(44,___S_jazz_2e_language_2e_runtime_2e_debug_3a_advise,"jazz.language.runtime.debug:advise")

___DEF_SYM(45,___S_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,"jazz.language.runtime.debug:attached-console-port")

___DEF_SYM(46,___S_jazz_2e_language_2e_runtime_2e_debug_3a_break,"jazz.language.runtime.debug:break")

___DEF_SYM(47,___S_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,"jazz.language.runtime.debug:clear-debug")

___DEF_SYM(48,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console,"jazz.language.runtime.debug:console")

___DEF_SYM(49,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_,"jazz.language.runtime.debug:console-clear-set!")

___DEF_SYM(50,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port,"jazz.language.runtime.debug:console-input-port")

___DEF_SYM(51,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,"jazz.language.runtime.debug:console-line")

___DEF_SYM(52,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port,"jazz.language.runtime.debug:console-output-port")

___DEF_SYM(53,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_,"jazz.language.runtime.debug:console-port-getter-set!")

___DEF_SYM(54,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,"jazz.language.runtime.debug:console-string")

___DEF_SYM(55,___S_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,"jazz.language.runtime.debug:continuation-stack")

___DEF_SYM(56,___S_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,"jazz.language.runtime.debug:count-advice")

___DEF_SYM(57,___S_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,"jazz.language.runtime.debug:current-console-port")

___DEF_SYM(58,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug,"jazz.language.runtime.debug:debug")

___DEF_SYM(59,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,"jazz.language.runtime.debug:debug-advice")

___DEF_SYM(60,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line,"jazz.language.runtime.debug:debug-line")

___DEF_SYM(61,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string,"jazz.language.runtime.debug:debug-string")

___DEF_SYM(62,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread,"jazz.language.runtime.debug:debug-thread")

___DEF_SYM(63,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,"jazz.language.runtime.debug:execution-backtrace")

___DEF_SYM(64,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,"jazz.language.runtime.debug:execution-stack")

___DEF_SYM(65,___S_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,"jazz.language.runtime.debug:force-console")

___DEF_SYM(66,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,"jazz.language.runtime.debug:get-continuation-name")

___DEF_SYM(67,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,"jazz.language.runtime.debug:get-procedure-name")

___DEF_SYM(68,___S_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,"jazz.language.runtime.debug:inspect")

___DEF_SYM(69,___S_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log,"jazz.language.runtime.debug:set-platform-log")

___DEF_SYM(70,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,"jazz.language.runtime.debug:start-jazz-repl")

___DEF_SYM(71,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,"jazz.language.runtime.debug:start-repl")

___DEF_SYM(72,___S_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,"jazz.language.runtime.debug:time-advice")

___DEF_SYM(73,___S_jazz_2e_language_2e_runtime_2e_debug_3a_trace,"jazz.language.runtime.debug:trace")

___DEF_SYM(74,___S_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,"jazz.language.runtime.debug:unadvise")

___DEF_SYM(75,___S_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,"jazz.language.runtime.debug:untrace")

___DEF_SYM(76,___S_jazz_2e_language_2e_runtime_2e_format,"jazz.language.runtime.format")
___DEF_SYM(77,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_SYM(78,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_SYM(79,___S_lexical_2d_environment_3f_,"lexical-environment?")
___DEF_SYM(80,___S_line,"line")
___DEF_SYM(81,___S_location,"location")
___DEF_SYM(82,___S_locations_3f_,"locations?")
___DEF_SYM(83,___S_name,"name")
___DEF_SYM(84,___S_output,"output")
___DEF_SYM(85,___S_package_2d_variable,"package-variable")
___DEF_SYM(86,___S_package_2d_variables,"package-variables")
___DEF_SYM(87,___S_post_2d_event,"post-event")
___DEF_SYM(88,___S_procedure,"procedure")
___DEF_SYM(89,___S_protected,"protected")
___DEF_SYM(90,___S_rest,"rest")
___DEF_SYM(91,___S_set_2d_platform_2d_log,"set-platform-log")
___DEF_SYM(92,___S_start_2d_jazz_2d_repl,"start-jazz-repl")
___DEF_SYM(93,___S_start_2d_jazz_2d_repl_2d_internal,"start-jazz-repl-internal")
___DEF_SYM(94,___S_start_2d_repl,"start-repl")
___DEF_SYM(95,___S_start_2d_repl_2d_internal,"start-repl-internal")
___DEF_SYM(96,___S_str,"str")
___DEF_SYM(97,___S_string,"string")
___DEF_SYM(98,___S_temp_2e_16,"temp.16")
___DEF_SYM(99,___S_temp_2e_18,"temp.18")
___DEF_SYM(100,___S_temp_2e_28,"temp.28")
___DEF_SYM(101,___S_thunk,"thunk")
___DEF_SYM(102,___S_time_2d_advice,"time-advice")
___DEF_SYM(103,___S_time_2d_advice_2d_internal,"time-advice-internal")
___DEF_SYM(104,___S_trace,"trace")
___DEF_SYM(105,___S_trace_2d_internal,"trace-internal")
___DEF_SYM(106,___S_unadvise,"unadvise")
___DEF_SYM(107,___S_unadvise_2d_internal,"unadvise-internal")
___DEF_SYM(108,___S_untrace,"untrace")
___DEF_SYM(109,___S_untrace_2d_internal,"untrace-internal")
___DEF_SYM(110,___S_value,"value")
___DEF_SYM(111,___S_variable,"variable")
___DEF_SYM(112,___S_variables,"variables")
___DEF_SYM(113,___S_x_2e_19,"x.19")
___DEF_SYM(114,___S_x_2e_29,"x.29")
___END_SYM

#define ___SYM__3a_console ___SYM(0,___S__3a_console)
#define ___SYM_advise ___SYM(1,___S_advise)
#define ___SYM_advise_2d_internal ___SYM(2,___S_advise_2d_internal)
#define ___SYM_attached_2d_console_2d_port ___SYM(3,___S_attached_2d_console_2d_port)
#define ___SYM_bin_3a_jazz_2e_language_2e_runtime_2e_debug ___SYM(4,___S_bin_3a_jazz_2e_language_2e_runtime_2e_debug)
#define ___SYM_break ___SYM(5,___S_break)
#define ___SYM_break_2d_internal ___SYM(6,___S_break_2d_internal)
#define ___SYM_cdr_5e_0 ___SYM(7,___S_cdr_5e_0)
#define ___SYM_cdr_5e_1 ___SYM(8,___S_cdr_5e_1)
#define ___SYM_cdr_5e_2 ___SYM(9,___S_cdr_5e_2)
#define ___SYM_cdr_5e_3 ___SYM(10,___S_cdr_5e_3)
#define ___SYM_clear_2d_debug ___SYM(11,___S_clear_2d_debug)
#define ___SYM_console ___SYM(12,___S_console)
#define ___SYM_console_2d_clear_2d_set_21_ ___SYM(13,___S_console_2d_clear_2d_set_21_)
#define ___SYM_console_2d_input_2d_port ___SYM(14,___S_console_2d_input_2d_port)
#define ___SYM_console_2d_line ___SYM(15,___S_console_2d_line)
#define ___SYM_console_2d_output_2d_port ___SYM(16,___S_console_2d_output_2d_port)
#define ___SYM_console_2d_port_2d_getter_2d_set_21_ ___SYM(17,___S_console_2d_port_2d_getter_2d_set_21_)
#define ___SYM_console_2d_string ___SYM(18,___S_console_2d_string)
#define ___SYM_cont ___SYM(19,___S_cont)
#define ___SYM_continuation_2d_stack ___SYM(20,___S_continuation_2d_stack)
#define ___SYM_count_2d_advice ___SYM(21,___S_count_2d_advice)
#define ___SYM_count_2d_advice_2d_internal ___SYM(22,___S_count_2d_advice_2d_internal)
#define ___SYM_current_2d_console_2d_port ___SYM(23,___S_current_2d_console_2d_port)
#define ___SYM_debug ___SYM(24,___S_debug)
#define ___SYM_debug_2d_advice ___SYM(25,___S_debug_2d_advice)
#define ___SYM_debug_2d_advice_2d_internal ___SYM(26,___S_debug_2d_advice_2d_internal)
#define ___SYM_debug_2d_line ___SYM(27,___S_debug_2d_line)
#define ___SYM_debug_2d_string ___SYM(28,___S_debug_2d_string)
#define ___SYM_debug_2d_thread ___SYM(29,___S_debug_2d_thread)
#define ___SYM_depth ___SYM(30,___S_depth)
#define ___SYM_dynamic_2d_environment_3f_ ___SYM(31,___S_dynamic_2d_environment_3f_)
#define ___SYM_execution_2d_backtrace ___SYM(32,___S_execution_2d_backtrace)
#define ___SYM_execution_2d_stack ___SYM(33,___S_execution_2d_stack)
#define ___SYM_force_2d_console ___SYM(34,___S_force_2d_console)
#define ___SYM_foundation_2e_dialect ___SYM(35,___S_foundation_2e_dialect)
#define ___SYM_get_2d_continuation_2d_name ___SYM(36,___S_get_2d_continuation_2d_name)
#define ___SYM_get_2d_procedure_2d_name ___SYM(37,___S_get_2d_procedure_2d_name)
#define ___SYM_identifiers_3f_ ___SYM(38,___S_identifiers_3f_)
#define ___SYM_inspect ___SYM(39,___S_inspect)
#define ___SYM_inspect_2d_internal ___SYM(40,___S_inspect_2d_internal)
#define ___SYM_jazz_2e_debuggee ___SYM(41,___S_jazz_2e_debuggee)
#define ___SYM_jazz_2e_dialect ___SYM(42,___S_jazz_2e_dialect)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug ___SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_advise ___SYM(44,___S_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port ___SYM(45,___S_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_break ___SYM(46,___S_jazz_2e_language_2e_runtime_2e_debug_3a_break)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug ___SYM(47,___S_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console ___SYM(48,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_ ___SYM(49,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port ___SYM(50,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line ___SYM(51,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port ___SYM(52,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_ ___SYM(53,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string ___SYM(54,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack ___SYM(55,___S_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice ___SYM(56,___S_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port ___SYM(57,___S_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_debug ___SYM(58,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice ___SYM(59,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line ___SYM(60,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string ___SYM(61,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread ___SYM(62,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace ___SYM(63,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack ___SYM(64,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console ___SYM(65,___S_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name ___SYM(66,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name ___SYM(67,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_inspect ___SYM(68,___S_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log ___SYM(69,___S_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl ___SYM(70,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl ___SYM(71,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice ___SYM(72,___S_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_trace ___SYM(73,___S_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise ___SYM(74,___S_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
#define ___SYM_jazz_2e_language_2e_runtime_2e_debug_3a_untrace ___SYM(75,___S_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
#define ___SYM_jazz_2e_language_2e_runtime_2e_format ___SYM(76,___S_jazz_2e_language_2e_runtime_2e_format)
#define ___SYM_jazz_2e_language_2e_runtime_2e_functional ___SYM(77,___S_jazz_2e_language_2e_runtime_2e_functional)
#define ___SYM_jazz_2e_language_2e_runtime_2e_kernel ___SYM(78,___S_jazz_2e_language_2e_runtime_2e_kernel)
#define ___SYM_lexical_2d_environment_3f_ ___SYM(79,___S_lexical_2d_environment_3f_)
#define ___SYM_line ___SYM(80,___S_line)
#define ___SYM_location ___SYM(81,___S_location)
#define ___SYM_locations_3f_ ___SYM(82,___S_locations_3f_)
#define ___SYM_name ___SYM(83,___S_name)
#define ___SYM_output ___SYM(84,___S_output)
#define ___SYM_package_2d_variable ___SYM(85,___S_package_2d_variable)
#define ___SYM_package_2d_variables ___SYM(86,___S_package_2d_variables)
#define ___SYM_post_2d_event ___SYM(87,___S_post_2d_event)
#define ___SYM_procedure ___SYM(88,___S_procedure)
#define ___SYM_protected ___SYM(89,___S_protected)
#define ___SYM_rest ___SYM(90,___S_rest)
#define ___SYM_set_2d_platform_2d_log ___SYM(91,___S_set_2d_platform_2d_log)
#define ___SYM_start_2d_jazz_2d_repl ___SYM(92,___S_start_2d_jazz_2d_repl)
#define ___SYM_start_2d_jazz_2d_repl_2d_internal ___SYM(93,___S_start_2d_jazz_2d_repl_2d_internal)
#define ___SYM_start_2d_repl ___SYM(94,___S_start_2d_repl)
#define ___SYM_start_2d_repl_2d_internal ___SYM(95,___S_start_2d_repl_2d_internal)
#define ___SYM_str ___SYM(96,___S_str)
#define ___SYM_string ___SYM(97,___S_string)
#define ___SYM_temp_2e_16 ___SYM(98,___S_temp_2e_16)
#define ___SYM_temp_2e_18 ___SYM(99,___S_temp_2e_18)
#define ___SYM_temp_2e_28 ___SYM(100,___S_temp_2e_28)
#define ___SYM_thunk ___SYM(101,___S_thunk)
#define ___SYM_time_2d_advice ___SYM(102,___S_time_2d_advice)
#define ___SYM_time_2d_advice_2d_internal ___SYM(103,___S_time_2d_advice_2d_internal)
#define ___SYM_trace ___SYM(104,___S_trace)
#define ___SYM_trace_2d_internal ___SYM(105,___S_trace_2d_internal)
#define ___SYM_unadvise ___SYM(106,___S_unadvise)
#define ___SYM_unadvise_2d_internal ___SYM(107,___S_unadvise_2d_internal)
#define ___SYM_untrace ___SYM(108,___S_untrace)
#define ___SYM_untrace_2d_internal ___SYM(109,___S_untrace_2d_internal)
#define ___SYM_value ___SYM(110,___S_value)
#define ___SYM_variable ___SYM(111,___S_variable)
#define ___SYM_variables ___SYM(112,___S_variables)
#define ___SYM_x_2e_19 ___SYM(113,___S_x_2e_19)
#define ___SYM_x_2e_29 ___SYM(114,___S_x_2e_29)

___BEGIN_KEY
___DEF_KEY(0,___K_color,"color")
___DEF_KEY(1,___K_depth,"depth")
___DEF_KEY(2,___K_dynamic_2d_environment_3f_,"dynamic-environment?")
___DEF_KEY(3,___K_identifiers_3f_,"identifiers?")
___DEF_KEY(4,___K_lexical_2d_environment_3f_,"lexical-environment?")
___DEF_KEY(5,___K_locations_3f_,"locations?")
___DEF_KEY(6,___K_test,"test")
___END_KEY

#define ___KEY_color ___KEY(0,___K_color)
#define ___KEY_depth ___KEY(1,___K_depth)
#define ___KEY_dynamic_2d_environment_3f_ ___KEY(2,___K_dynamic_2d_environment_3f_)
#define ___KEY_identifiers_3f_ ___KEY(3,___K_identifiers_3f_)
#define ___KEY_lexical_2d_environment_3f_ ___KEY(4,___K_lexical_2d_environment_3f_)
#define ___KEY_locations_3f_ ___KEY(5,___K_locations_3f_)
#define ___KEY_test ___KEY(6,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.language.runtime.debug#")
___DEF_GLO(1,"jazz.language.runtime.debug:*console-clear*")

___DEF_GLO(2,"jazz.language.runtime.debug:*console-port-getter*")

___DEF_GLO(3,"jazz.language.runtime.debug:advise")

___DEF_GLO(4,"jazz.language.runtime.debug:attached-console-port")

___DEF_GLO(5,"jazz.language.runtime.debug:break")

___DEF_GLO(6,"jazz.language.runtime.debug:clear-debug")

___DEF_GLO(7,"jazz.language.runtime.debug:console")

___DEF_GLO(8,"jazz.language.runtime.debug:console-clear-set!")

___DEF_GLO(9,"jazz.language.runtime.debug:console-input-port")

___DEF_GLO(10,"jazz.language.runtime.debug:console-line")

___DEF_GLO(11,"jazz.language.runtime.debug:console-mutex")

___DEF_GLO(12,"jazz.language.runtime.debug:console-output-port")

___DEF_GLO(13,"jazz.language.runtime.debug:console-port-getter-set!")

___DEF_GLO(14,"jazz.language.runtime.debug:console-string")

___DEF_GLO(15,"jazz.language.runtime.debug:continuation-stack")

___DEF_GLO(16,"jazz.language.runtime.debug:count-advice")

___DEF_GLO(17,"jazz.language.runtime.debug:current-console-port")

___DEF_GLO(18,"jazz.language.runtime.debug:debug")

___DEF_GLO(19,"jazz.language.runtime.debug:debug-advice")

___DEF_GLO(20,"jazz.language.runtime.debug:debug-line")

___DEF_GLO(21,"jazz.language.runtime.debug:debug-string")

___DEF_GLO(22,"jazz.language.runtime.debug:debug-thread")

___DEF_GLO(23,"jazz.language.runtime.debug:execution-backtrace")

___DEF_GLO(24,"jazz.language.runtime.debug:execution-stack")

___DEF_GLO(25,"jazz.language.runtime.debug:force-console")

___DEF_GLO(26,"jazz.language.runtime.debug:get-continuation-name")

___DEF_GLO(27,"jazz.language.runtime.debug:get-procedure-name")

___DEF_GLO(28,"jazz.language.runtime.debug:inspect")

___DEF_GLO(29,"jazz.language.runtime.debug:platform-log")

___DEF_GLO(30,"jazz.language.runtime.debug:procedure-name-cache")

___DEF_GLO(31,"jazz.language.runtime.debug:set-platform-log")

___DEF_GLO(32,"jazz.language.runtime.debug:start-jazz-repl")

___DEF_GLO(33,"jazz.language.runtime.debug:start-repl")

___DEF_GLO(34,"jazz.language.runtime.debug:time-advice")

___DEF_GLO(35,"jazz.language.runtime.debug:trace")

___DEF_GLO(36,"jazz.language.runtime.debug:unadvise")

___DEF_GLO(37,"jazz.language.runtime.debug:untrace")

___DEF_GLO(38,"jazz.language.runtime.debug:with-console-mutex")

___DEF_GLO(39,"##table-ref")
___DEF_GLO(40,"##table-set!")
___DEF_GLO(41,"append")
___DEF_GLO(42,"apply")
___DEF_GLO(43,"car")
___DEF_GLO(44,"cdr")
___DEF_GLO(45,"eq?")
___DEF_GLO(46,"force-output")
___DEF_GLO(47,"jazz.language.runtime.format:format")

___DEF_GLO(48,"jazz.language.runtime.functional:primordial-thread")

___DEF_GLO(49,"jazz.language.runtime.functional:primordial-thread?")

___DEF_GLO(50,"jazz.language.runtime.functional:register-printer")

___DEF_GLO(51,"jazz.language.runtime.functional:starts-with?stringstring")

___DEF_GLO(52,"jazz.language.runtime.functional:thread-post")

___DEF_GLO(53,"jazz:clear-terminal")
___DEF_GLO(54,"jazz:continuation-backtrace")
___DEF_GLO(55,"jazz:continuation-creator")
___DEF_GLO(56,"jazz:get-continuation-dynamic-environment")

___DEF_GLO(57,"jazz:get-continuation-lexical-environment")

___DEF_GLO(58,"jazz:get-continuation-location")
___DEF_GLO(59,"jazz:get-continuation-stack")
___DEF_GLO(60,"jazz:load-unit")
___DEF_GLO(61,"jazz:module-ref")
___DEF_GLO(62,"jazz:procedure-name")
___DEF_GLO(63,"jazz:reference-name")
___DEF_GLO(64,"jazz:register-module")
___DEF_GLO(65,"jazz:terminal-available?")
___DEF_GLO(66,"jazz:terminal-port")
___DEF_GLO(67,"jazz:unspecified")
___DEF_GLO(68,"make-mutex")
___DEF_GLO(69,"make-table")
___DEF_GLO(70,"map")
___DEF_GLO(71,"mutex-lock!")
___DEF_GLO(72,"mutex-unlock!")
___DEF_GLO(73,"string->symbol")
___DEF_GLO(74,"substring")
___DEF_GLO(75,"symbol->string")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_ ___GLO(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
#define ___PRM_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_ ___PRM(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_ ___GLO(1,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_ ___PRM(1,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_ ___GLO(2,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_ ___PRM(2,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_advise ___GLO(3,___G_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_advise ___PRM(3,___G_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port ___GLO(4,___G_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port ___PRM(4,___G_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_break ___GLO(5,___G_jazz_2e_language_2e_runtime_2e_debug_3a_break)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_break ___PRM(5,___G_jazz_2e_language_2e_runtime_2e_debug_3a_break)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug ___GLO(6,___G_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug ___PRM(6,___G_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console ___GLO(7,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console ___PRM(7,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_ ___GLO(8,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_ ___PRM(8,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port ___GLO(9,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port ___PRM(9,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line ___GLO(10,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line ___PRM(10,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex ___GLO(11,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex ___PRM(11,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port ___GLO(12,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port ___PRM(12,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_ ___GLO(13,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_ ___PRM(13,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string ___GLO(14,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string ___PRM(14,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack ___GLO(15,___G_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack ___PRM(15,___G_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice ___GLO(16,___G_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice ___PRM(16,___G_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port ___GLO(17,___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port ___PRM(17,___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug ___GLO(18,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_debug ___PRM(18,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice ___GLO(19,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice ___PRM(19,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line ___GLO(20,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line ___PRM(20,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string ___GLO(21,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string ___PRM(21,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread ___GLO(22,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread ___PRM(22,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace ___GLO(23,___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace ___PRM(23,___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack ___GLO(24,___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack ___PRM(24,___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console ___GLO(25,___G_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console ___PRM(25,___G_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name ___GLO(26,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name ___PRM(26,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name ___GLO(27,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name ___PRM(27,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_inspect ___GLO(28,___G_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_inspect ___PRM(28,___G_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log ___GLO(29,___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log ___PRM(29,___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache ___GLO(30,___G_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache ___PRM(30,___G_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log ___GLO(31,___G_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log ___PRM(31,___G_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl ___GLO(32,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl ___PRM(32,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl ___GLO(33,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl ___PRM(33,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice ___GLO(34,___G_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice ___PRM(34,___G_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_trace ___GLO(35,___G_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_trace ___PRM(35,___G_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise ___GLO(36,___G_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise ___PRM(36,___G_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_untrace ___GLO(37,___G_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_untrace ___PRM(37,___G_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex ___GLO(38,___G_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex ___PRM(38,___G_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
#define ___GLO__23__23_table_2d_ref ___GLO(39,___G__23__23_table_2d_ref)
#define ___PRM__23__23_table_2d_ref ___PRM(39,___G__23__23_table_2d_ref)
#define ___GLO__23__23_table_2d_set_21_ ___GLO(40,___G__23__23_table_2d_set_21_)
#define ___PRM__23__23_table_2d_set_21_ ___PRM(40,___G__23__23_table_2d_set_21_)
#define ___GLO_append ___GLO(41,___G_append)
#define ___PRM_append ___PRM(41,___G_append)
#define ___GLO_apply ___GLO(42,___G_apply)
#define ___PRM_apply ___PRM(42,___G_apply)
#define ___GLO_car ___GLO(43,___G_car)
#define ___PRM_car ___PRM(43,___G_car)
#define ___GLO_cdr ___GLO(44,___G_cdr)
#define ___PRM_cdr ___PRM(44,___G_cdr)
#define ___GLO_eq_3f_ ___GLO(45,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(45,___G_eq_3f_)
#define ___GLO_force_2d_output ___GLO(46,___G_force_2d_output)
#define ___PRM_force_2d_output ___PRM(46,___G_force_2d_output)
#define ___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format ___GLO(47,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___PRM_jazz_2e_language_2e_runtime_2e_format_3a_format ___PRM(47,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread ___GLO(48,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread ___PRM(48,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_ ___GLO(49,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_ ___PRM(49,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_register_2d_printer ___GLO(50,___G_jazz_2e_language_2e_runtime_2e_functional_3a_register_2d_printer)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_register_2d_printer ___PRM(50,___G_jazz_2e_language_2e_runtime_2e_functional_3a_register_2d_printer)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_starts_2d_with_3f_stringstring ___GLO(51,___G_jazz_2e_language_2e_runtime_2e_functional_3a_starts_2d_with_3f_stringstring)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_starts_2d_with_3f_stringstring ___PRM(51,___G_jazz_2e_language_2e_runtime_2e_functional_3a_starts_2d_with_3f_stringstring)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post ___GLO(52,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post ___PRM(52,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
#define ___GLO_jazz_3a_clear_2d_terminal ___GLO(53,___G_jazz_3a_clear_2d_terminal)
#define ___PRM_jazz_3a_clear_2d_terminal ___PRM(53,___G_jazz_3a_clear_2d_terminal)
#define ___GLO_jazz_3a_continuation_2d_backtrace ___GLO(54,___G_jazz_3a_continuation_2d_backtrace)
#define ___PRM_jazz_3a_continuation_2d_backtrace ___PRM(54,___G_jazz_3a_continuation_2d_backtrace)
#define ___GLO_jazz_3a_continuation_2d_creator ___GLO(55,___G_jazz_3a_continuation_2d_creator)
#define ___PRM_jazz_3a_continuation_2d_creator ___PRM(55,___G_jazz_3a_continuation_2d_creator)
#define ___GLO_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment ___GLO(56,___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
#define ___PRM_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment ___PRM(56,___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
#define ___GLO_jazz_3a_get_2d_continuation_2d_lexical_2d_environment ___GLO(57,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
#define ___PRM_jazz_3a_get_2d_continuation_2d_lexical_2d_environment ___PRM(57,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
#define ___GLO_jazz_3a_get_2d_continuation_2d_location ___GLO(58,___G_jazz_3a_get_2d_continuation_2d_location)
#define ___PRM_jazz_3a_get_2d_continuation_2d_location ___PRM(58,___G_jazz_3a_get_2d_continuation_2d_location)
#define ___GLO_jazz_3a_get_2d_continuation_2d_stack ___GLO(59,___G_jazz_3a_get_2d_continuation_2d_stack)
#define ___PRM_jazz_3a_get_2d_continuation_2d_stack ___PRM(59,___G_jazz_3a_get_2d_continuation_2d_stack)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(60,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(60,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_module_2d_ref ___GLO(61,___G_jazz_3a_module_2d_ref)
#define ___PRM_jazz_3a_module_2d_ref ___PRM(61,___G_jazz_3a_module_2d_ref)
#define ___GLO_jazz_3a_procedure_2d_name ___GLO(62,___G_jazz_3a_procedure_2d_name)
#define ___PRM_jazz_3a_procedure_2d_name ___PRM(62,___G_jazz_3a_procedure_2d_name)
#define ___GLO_jazz_3a_reference_2d_name ___GLO(63,___G_jazz_3a_reference_2d_name)
#define ___PRM_jazz_3a_reference_2d_name ___PRM(63,___G_jazz_3a_reference_2d_name)
#define ___GLO_jazz_3a_register_2d_module ___GLO(64,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(64,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_terminal_2d_available_3f_ ___GLO(65,___G_jazz_3a_terminal_2d_available_3f_)
#define ___PRM_jazz_3a_terminal_2d_available_3f_ ___PRM(65,___G_jazz_3a_terminal_2d_available_3f_)
#define ___GLO_jazz_3a_terminal_2d_port ___GLO(66,___G_jazz_3a_terminal_2d_port)
#define ___PRM_jazz_3a_terminal_2d_port ___PRM(66,___G_jazz_3a_terminal_2d_port)
#define ___GLO_jazz_3a_unspecified ___GLO(67,___G_jazz_3a_unspecified)
#define ___PRM_jazz_3a_unspecified ___PRM(67,___G_jazz_3a_unspecified)
#define ___GLO_make_2d_mutex ___GLO(68,___G_make_2d_mutex)
#define ___PRM_make_2d_mutex ___PRM(68,___G_make_2d_mutex)
#define ___GLO_make_2d_table ___GLO(69,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(69,___G_make_2d_table)
#define ___GLO_map ___GLO(70,___G_map)
#define ___PRM_map ___PRM(70,___G_map)
#define ___GLO_mutex_2d_lock_21_ ___GLO(71,___G_mutex_2d_lock_21_)
#define ___PRM_mutex_2d_lock_21_ ___PRM(71,___G_mutex_2d_lock_21_)
#define ___GLO_mutex_2d_unlock_21_ ___GLO(72,___G_mutex_2d_unlock_21_)
#define ___PRM_mutex_2d_unlock_21_ ___PRM(72,___G_mutex_2d_unlock_21_)
#define ___GLO_string_2d__3e_symbol ___GLO(73,___G_string_2d__3e_symbol)
#define ___PRM_string_2d__3e_symbol ___PRM(73,___G_string_2d__3e_symbol)
#define ___GLO_substring ___GLO(74,___G_substring)
#define ___PRM_substring ___PRM(74,___G_substring)
#define ___GLO_symbol_2d__3e_string ___GLO(75,___G_symbol_2d__3e_string)
#define ___PRM_symbol_2d__3e_string ___PRM(75,___G_symbol_2d__3e_string)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(1,___S_advise),___REF_SYM(44,___S_jazz_2e_language_2e_runtime_2e_debug_3a_advise))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(3,___S_attached_2d_console_2d_port),___REF_SYM(45,___S_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(5,___S_break),___REF_SYM(46,___S_jazz_2e_language_2e_runtime_2e_debug_3a_break))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(11,___S_clear_2d_debug),___REF_SYM(47,___S_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(12,___S_console),___REF_SYM(48,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(13,___S_console_2d_clear_2d_set_21_),___REF_SYM(49,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(14,___S_console_2d_input_2d_port),___REF_SYM(50,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(15,___S_console_2d_line),___REF_SYM(51,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(16,___S_console_2d_output_2d_port),___REF_SYM(52,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(17,___S_console_2d_port_2d_getter_2d_set_21_),___REF_SYM(53,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(18,___S_console_2d_string),___REF_SYM(54,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(20,___S_continuation_2d_stack),___REF_SYM(55,___S_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(21,___S_count_2d_advice),___REF_SYM(56,___S_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(23,___S_current_2d_console_2d_port),___REF_SYM(57,___S_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(24,___S_debug),___REF_SYM(58,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug))
,___DEF_CNS(___REF_CNS(31),___REF_CNS(32))
,___DEF_CNS(___REF_SYM(25,___S_debug_2d_advice),___REF_SYM(59,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice))
,___DEF_CNS(___REF_CNS(33),___REF_CNS(34))
,___DEF_CNS(___REF_SYM(27,___S_debug_2d_line),___REF_SYM(60,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line))
,___DEF_CNS(___REF_CNS(35),___REF_CNS(36))
,___DEF_CNS(___REF_SYM(28,___S_debug_2d_string),___REF_SYM(61,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string))
,___DEF_CNS(___REF_CNS(37),___REF_CNS(38))
,___DEF_CNS(___REF_SYM(29,___S_debug_2d_thread),___REF_SYM(62,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread))
,___DEF_CNS(___REF_CNS(39),___REF_CNS(40))
,___DEF_CNS(___REF_SYM(32,___S_execution_2d_backtrace),___REF_SYM(63,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace))
,___DEF_CNS(___REF_CNS(41),___REF_CNS(42))
,___DEF_CNS(___REF_SYM(33,___S_execution_2d_stack),___REF_SYM(64,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack))
,___DEF_CNS(___REF_CNS(43),___REF_CNS(44))
,___DEF_CNS(___REF_SYM(34,___S_force_2d_console),___REF_SYM(65,___S_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console))
,___DEF_CNS(___REF_CNS(45),___REF_CNS(46))
,___DEF_CNS(___REF_SYM(36,___S_get_2d_continuation_2d_name),___REF_SYM(66,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name))
,___DEF_CNS(___REF_CNS(47),___REF_CNS(48))
,___DEF_CNS(___REF_SYM(37,___S_get_2d_procedure_2d_name),___REF_SYM(67,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name))
,___DEF_CNS(___REF_CNS(49),___REF_CNS(50))
,___DEF_CNS(___REF_SYM(39,___S_inspect),___REF_SYM(68,___S_jazz_2e_language_2e_runtime_2e_debug_3a_inspect))
,___DEF_CNS(___REF_CNS(51),___REF_CNS(52))
,___DEF_CNS(___REF_SYM(91,___S_set_2d_platform_2d_log),___REF_SYM(69,___S_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log))
,___DEF_CNS(___REF_CNS(53),___REF_CNS(54))
,___DEF_CNS(___REF_SYM(92,___S_start_2d_jazz_2d_repl),___REF_SYM(70,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl))
,___DEF_CNS(___REF_CNS(55),___REF_CNS(56))
,___DEF_CNS(___REF_SYM(94,___S_start_2d_repl),___REF_SYM(71,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl))
,___DEF_CNS(___REF_CNS(57),___REF_CNS(58))
,___DEF_CNS(___REF_SYM(102,___S_time_2d_advice),___REF_SYM(72,___S_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice))
,___DEF_CNS(___REF_CNS(59),___REF_CNS(60))
,___DEF_CNS(___REF_SYM(104,___S_trace),___REF_SYM(73,___S_jazz_2e_language_2e_runtime_2e_debug_3a_trace))
,___DEF_CNS(___REF_CNS(61),___REF_CNS(62))
,___DEF_CNS(___REF_SYM(106,___S_unadvise),___REF_SYM(74,___S_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise))
,___DEF_CNS(___REF_CNS(63),___REF_NUL)
,___DEF_CNS(___REF_SYM(108,___S_untrace),___REF_SYM(75,___S_jazz_2e_language_2e_runtime_2e_debug_3a_untrace))
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
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
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(87))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131187))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131263))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(310))
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
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X31,0UL)
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X33,3UL)
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(64))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(720961))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(720961))
               ___VEC0
___DEF_SUB_VEC(___X40,0UL)
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X42,6UL)
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(70))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(720967))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(720968))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(720968))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2162760))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(720968))
               ___VEC0
___DEF_SUB_VEC(___X55,0UL)
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(62))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_SUB(60))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(76))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(76))
               ___VEC0
___DEF_SUB_VEC(___X62,0UL)
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(66))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(79))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(68))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(79))
               ___VEC0
___DEF_SUB_VEC(___X69,0UL)
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
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(83))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1048660))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1048660))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131156))
               ___VEC0
___DEF_SUB_VEC(___X80,0UL)
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X82,1UL)
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(98))
               ___VEC0
___DEF_SUB_VEC(___X85,0UL)
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X87,1UL)
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(110))
               ___VEC0
___DEF_SUB_VEC(___X90,0UL)
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_SUB(105))
               ___VEC0
___DEF_SUB_VEC(___X92,6UL)
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_SUB(103))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(94))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(117))
               ___VEC0
___DEF_SUB_VEC(___X95,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131190))
               ___VEC0
___DEF_SUB_VEC(___X97,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131190))
               ___VEC0
___DEF_SUB_VEC(___X99,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(589943))
               ___VEC0
___DEF_SUB_VEC(___X101,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262264))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(104))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(117))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(101,___S_thunk))
               ___VEC1(___REF_SYM(110,___S_value))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_KEY(0,___K_color))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_STR(___X107,3UL)
               ___STR3(123,97,125)
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_SUB(130))
               ___VEC0
___DEF_SUB_VEC(___X109,10UL)
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_SUB(114))
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_SUB(128))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(123))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262269))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(115))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262269))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262269))
               ___VEC0
___DEF_SUB_VEC(___X118,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310846))
               ___VEC0
___DEF_SUB_VEC(___X120,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310846))
               ___VEC0
___DEF_SUB_VEC(___X122,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(98308))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(917633))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393352))
               ___VEC0
___DEF_SUB_VEC(___X126,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(98308))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655490))
               ___VEC0
___DEF_SUB_VEC(___X128,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_FIX(98308))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655495))
               ___VEC0
___DEF_SUB_VEC(___X130,3UL)
               ___VEC1(___REF_SYM(97,___S_string))
               ___VEC1(___REF_CNS(64))
               ___VEC1(___REF_SYM(84,___S_output))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_KEY(0,___K_color))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_STR(___X132,6UL)
               ___STR6(123,97,125,123,37,125)
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_SUB(155))
               ___VEC0
___DEF_SUB_VEC(___X134,10UL)
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_SUB(153))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(136))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(139))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(138))
               ___VEC0
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262285))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(140))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262285))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(142))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262285))
               ___VEC0
___DEF_SUB_VEC(___X143,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310862))
               ___VEC0
___DEF_SUB_VEC(___X145,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310862))
               ___VEC0
___DEF_SUB_VEC(___X147,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_FIX(98308))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(917649))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(150))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393368))
               ___VEC0
___DEF_SUB_VEC(___X151,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_FIX(98308))
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655506))
               ___VEC0
___DEF_SUB_VEC(___X153,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(154))
               ___VEC1(___REF_FIX(98308))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655511))
               ___VEC0
___DEF_SUB_VEC(___X155,3UL)
               ___VEC1(___REF_SYM(97,___S_string))
               ___VEC1(___REF_CNS(65))
               ___VEC1(___REF_SYM(84,___S_output))
               ___VEC0
___DEF_SUB_STR(___X156,21UL)
               ___STR8(123,108,32,100,101,116,97,105)
               ___STR8(108,58,32,58,100,101,115,99)
               ___STR5(114,105,98,101,125)
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_SUB(167))
               ___VEC0
___DEF_SUB_VEC(___X158,4UL)
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(165))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(160))
               ___VEC0
___DEF_SUB_VEC(___X160,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(155))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1048732))
               ___VEC0
___DEF_SUB_VEC(___X163,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(164))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1048732))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(166))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131228))
               ___VEC0
___DEF_SUB_VEC(___X167,0UL)
               ___VEC0
___DEF_SUB_VEC(___X168,2UL)
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_SUB(174))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(172))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(171))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(159))
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(173))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(589984))
               ___VEC0
___DEF_SUB_VEC(___X174,0UL)
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(181))
               ___VEC0
___DEF_SUB_VEC(___X176,2UL)
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_SUB(179))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(178))
               ___VEC0
___DEF_SUB_VEC(___X178,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(163))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(589988))
               ___VEC0
___DEF_SUB_VEC(___X181,0UL)
               ___VEC0
___DEF_SUB_VEC(___X182,2UL)
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_SUB(188))
               ___VEC0
___DEF_SUB_VEC(___X183,2UL)
               ___VEC1(___REF_SUB(184))
               ___VEC1(___REF_SUB(186))
               ___VEC0
___DEF_SUB_VEC(___X184,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(185))
               ___VEC0
___DEF_SUB_VEC(___X185,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(167))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(187))
               ___VEC0
___DEF_SUB_VEC(___X187,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(589992))
               ___VEC0
___DEF_SUB_VEC(___X188,0UL)
               ___VEC0
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_SUB(190))
               ___VEC1(___REF_SUB(209))
               ___VEC0
___DEF_SUB_VEC(___X190,9UL)
               ___VEC1(___REF_SUB(191))
               ___VEC1(___REF_SUB(193))
               ___VEC1(___REF_SUB(195))
               ___VEC1(___REF_SUB(197))
               ___VEC1(___REF_SUB(199))
               ___VEC1(___REF_SUB(201))
               ___VEC1(___REF_SUB(203))
               ___VEC1(___REF_SUB(205))
               ___VEC1(___REF_SUB(207))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(192))
               ___VEC0
___DEF_SUB_VEC(___X192,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(171))
               ___VEC0
___DEF_SUB_VEC(___X193,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(194))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X194,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393388))
               ___VEC0
___DEF_SUB_VEC(___X195,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(196))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X196,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393388))
               ___VEC0
___DEF_SUB_VEC(___X197,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(198))
               ___VEC0
___DEF_SUB_VEC(___X198,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393389))
               ___VEC0
___DEF_SUB_VEC(___X199,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(200))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X200,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1114286))
               ___VEC0
___DEF_SUB_VEC(___X201,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(202))
               ___VEC0
___DEF_SUB_VEC(___X202,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262318))
               ___VEC0
___DEF_SUB_VEC(___X203,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(204))
               ___VEC0
___DEF_SUB_VEC(___X204,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262318))
               ___VEC0
___DEF_SUB_VEC(___X205,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(206))
               ___VEC0
___DEF_SUB_VEC(___X206,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393391))
               ___VEC0
___DEF_SUB_VEC(___X207,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(208))
               ___VEC0
___DEF_SUB_VEC(___X208,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(983216))
               ___VEC0
___DEF_SUB_VEC(___X209,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X210,2UL)
               ___VEC1(___REF_SUB(211))
               ___VEC1(___REF_SUB(218))
               ___VEC0
___DEF_SUB_VEC(___X211,3UL)
               ___VEC1(___REF_SUB(212))
               ___VEC1(___REF_SUB(214))
               ___VEC1(___REF_SUB(216))
               ___VEC0
___DEF_SUB_VEC(___X212,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(213))
               ___VEC0
___DEF_SUB_VEC(___X213,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(179))
               ___VEC0
___DEF_SUB_VEC(___X214,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(215))
               ___VEC0
___DEF_SUB_VEC(___X215,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(721076))
               ___VEC0
___DEF_SUB_VEC(___X216,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(217))
               ___VEC0
___DEF_SUB_VEC(___X217,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(721076))
               ___VEC0
___DEF_SUB_VEC(___X218,0UL)
               ___VEC0
___DEF_SUB_STR(___X219,13UL)
               ___STR8(40,105,110,116,101,114,97,99)
               ___STR5(116,105,111,110,41)
___DEF_SUB_VEC(___X220,2UL)
               ___VEC1(___REF_SUB(221))
               ___VEC1(___REF_SUB(236))
               ___VEC0
___DEF_SUB_VEC(___X221,7UL)
               ___VEC1(___REF_SUB(222))
               ___VEC1(___REF_SUB(224))
               ___VEC1(___REF_SUB(226))
               ___VEC1(___REF_SUB(228))
               ___VEC1(___REF_SUB(230))
               ___VEC1(___REF_SUB(232))
               ___VEC1(___REF_SUB(234))
               ___VEC0
___DEF_SUB_VEC(___X222,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(223))
               ___VEC0
___DEF_SUB_VEC(___X223,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(194))
               ___VEC0
___DEF_SUB_VEC(___X224,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(225))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X225,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655561))
               ___VEC0
___DEF_SUB_VEC(___X226,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(227))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X227,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655561))
               ___VEC0
___DEF_SUB_VEC(___X228,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(229))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X229,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(655561))
               ___VEC0
___DEF_SUB_VEC(___X230,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(231))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X231,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1704138))
               ___VEC0
___DEF_SUB_VEC(___X232,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(233))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X233,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(786637))
               ___VEC0
___DEF_SUB_VEC(___X234,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(235))
               ___VEC0
___DEF_SUB_VEC(___X235,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(786638))
               ___VEC0
___DEF_SUB_VEC(___X236,2UL)
               ___VEC1(___REF_SYM(88,___S_procedure))
               ___VEC1(___REF_SYM(83,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X237,2UL)
               ___VEC1(___REF_SUB(238))
               ___VEC1(___REF_SUB(247))
               ___VEC0
___DEF_SUB_VEC(___X238,4UL)
               ___VEC1(___REF_SUB(239))
               ___VEC1(___REF_SUB(241))
               ___VEC1(___REF_SUB(243))
               ___VEC1(___REF_SUB(245))
               ___VEC0
___DEF_SUB_VEC(___X239,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(240))
               ___VEC0
___DEF_SUB_VEC(___X240,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(210))
               ___VEC0
___DEF_SUB_VEC(___X241,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(242))
               ___VEC0
___DEF_SUB_VEC(___X242,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1442003))
               ___VEC0
___DEF_SUB_VEC(___X243,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(244))
               ___VEC0
___DEF_SUB_VEC(___X244,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1442003))
               ___VEC0
___DEF_SUB_VEC(___X245,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(246))
               ___VEC0
___DEF_SUB_VEC(___X246,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131283))
               ___VEC0
___DEF_SUB_VEC(___X247,0UL)
               ___VEC0
___DEF_SUB_VEC(___X248,10UL)
               ___VEC1(___REF_KEY(2,___K_dynamic_2d_environment_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(4,___K_lexical_2d_environment_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(3,___K_identifiers_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(5,___K_locations_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(1,___K_depth))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_STR(___X249,2UL)
               ___STR2(37,37)
___DEF_SUB_VEC(___X250,2UL)
               ___VEC1(___REF_SUB(251))
               ___VEC1(___REF_SUB(372))
               ___VEC0
___DEF_SUB_VEC(___X251,60UL)
               ___VEC1(___REF_SUB(252))
               ___VEC1(___REF_SUB(254))
               ___VEC1(___REF_SUB(256))
               ___VEC1(___REF_SUB(258))
               ___VEC1(___REF_SUB(260))
               ___VEC1(___REF_SUB(262))
               ___VEC1(___REF_SUB(264))
               ___VEC1(___REF_SUB(266))
               ___VEC1(___REF_SUB(268))
               ___VEC1(___REF_SUB(270))
               ___VEC1(___REF_SUB(272))
               ___VEC1(___REF_SUB(274))
               ___VEC1(___REF_SUB(276))
               ___VEC1(___REF_SUB(278))
               ___VEC1(___REF_SUB(280))
               ___VEC1(___REF_SUB(282))
               ___VEC1(___REF_SUB(284))
               ___VEC1(___REF_SUB(286))
               ___VEC1(___REF_SUB(288))
               ___VEC1(___REF_SUB(290))
               ___VEC1(___REF_SUB(292))
               ___VEC1(___REF_SUB(294))
               ___VEC1(___REF_SUB(296))
               ___VEC1(___REF_SUB(298))
               ___VEC1(___REF_SUB(300))
               ___VEC1(___REF_SUB(302))
               ___VEC1(___REF_SUB(304))
               ___VEC1(___REF_SUB(306))
               ___VEC1(___REF_SUB(308))
               ___VEC1(___REF_SUB(310))
               ___VEC1(___REF_SUB(312))
               ___VEC1(___REF_SUB(314))
               ___VEC1(___REF_SUB(316))
               ___VEC1(___REF_SUB(318))
               ___VEC1(___REF_SUB(320))
               ___VEC1(___REF_SUB(322))
               ___VEC1(___REF_SUB(324))
               ___VEC1(___REF_SUB(326))
               ___VEC1(___REF_SUB(328))
               ___VEC1(___REF_SUB(330))
               ___VEC1(___REF_SUB(332))
               ___VEC1(___REF_SUB(334))
               ___VEC1(___REF_SUB(336))
               ___VEC1(___REF_SUB(338))
               ___VEC1(___REF_SUB(340))
               ___VEC1(___REF_SUB(342))
               ___VEC1(___REF_SUB(344))
               ___VEC1(___REF_SUB(346))
               ___VEC1(___REF_SUB(348))
               ___VEC1(___REF_SUB(350))
               ___VEC1(___REF_SUB(352))
               ___VEC1(___REF_SUB(354))
               ___VEC1(___REF_SUB(356))
               ___VEC1(___REF_SUB(358))
               ___VEC1(___REF_SUB(360))
               ___VEC1(___REF_SUB(362))
               ___VEC1(___REF_SUB(364))
               ___VEC1(___REF_SUB(366))
               ___VEC1(___REF_SUB(368))
               ___VEC1(___REF_SUB(370))
               ___VEC0
___DEF_SUB_VEC(___X252,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(253))
               ___VEC0
___DEF_SUB_VEC(___X253,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(214))
               ___VEC0
___DEF_SUB_VEC(___X254,9UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(255))
               ___VEC1(___REF_FIX(524288))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X255,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(983267))
               ___VEC0
___DEF_SUB_VEC(___X256,8UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(257))
               ___VEC1(___REF_FIX(229376))
               ___VEC1(___REF_FIX(196610))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65544))
               ___VEC1(___REF_FIX(32778))
               ___VEC0
___DEF_SUB_VEC(___X257,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(983267))
               ___VEC0
___DEF_SUB_VEC(___X258,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(259))
               ___VEC0
___DEF_SUB_VEC(___X259,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262380))
               ___VEC0
___DEF_SUB_VEC(___X260,8UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(261))
               ___VEC1(___REF_FIX(229388))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X261,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262380))
               ___VEC0
___DEF_SUB_VEC(___X262,10UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(263))
               ___VEC1(___REF_FIX(622606))
               ___VEC1(___REF_FIX(589826))
               ___VEC1(___REF_FIX(229388))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X263,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262380))
               ___VEC0
___DEF_SUB_VEC(___X264,10UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(265))
               ___VEC1(___REF_FIX(524298))
               ___VEC1(___REF_FIX(491534))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X265,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(3277037))
               ___VEC0
___DEF_SUB_VEC(___X266,8UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(267))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X267,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(3277037))
               ___VEC0
___DEF_SUB_VEC(___X268,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(269))
               ___VEC0
___DEF_SUB_VEC(___X269,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1573081))
               ___VEC0
___DEF_SUB_VEC(___X270,8UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(271))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X271,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2359533))
               ___VEC0
___DEF_SUB_VEC(___X272,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(273))
               ___VEC1(___REF_FIX(65552))
               ___VEC0
___DEF_SUB_VEC(___X273,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1376486))
               ___VEC0
___DEF_SUB_VEC(___X274,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(275))
               ___VEC1(___REF_FIX(98322))
               ___VEC1(___REF_FIX(65552))
               ___VEC0
___DEF_SUB_VEC(___X275,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2228455))
               ___VEC0
___DEF_SUB_VEC(___X276,4UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(277))
               ___VEC1(___REF_FIX(98322))
               ___VEC1(___REF_FIX(65552))
               ___VEC0
___DEF_SUB_VEC(___X277,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1048807))
               ___VEC0
___DEF_SUB_VEC(___X278,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(279))
               ___VEC0
___DEF_SUB_VEC(___X279,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(917737))
               ___VEC0
___DEF_SUB_VEC(___X280,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(281))
               ___VEC0
___DEF_SUB_VEC(___X281,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2097384))
               ___VEC0
___DEF_SUB_VEC(___X282,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(283))
               ___VEC0
___DEF_SUB_VEC(___X283,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1048808))
               ___VEC0
___DEF_SUB_VEC(___X284,8UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(285))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X285,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1507565))
               ___VEC0
___DEF_SUB_VEC(___X286,9UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(287))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X287,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(3801338))
               ___VEC0
___DEF_SUB_VEC(___X288,9UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(289))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X289,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2556154))
               ___VEC0
___DEF_SUB_VEC(___X290,9UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(291))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X291,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(3801339))
               ___VEC0
___DEF_SUB_VEC(___X292,9UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(293))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X293,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2556155))
               ___VEC0
___DEF_SUB_VEC(___X294,9UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(295))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X295,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2031866))
               ___VEC0
___DEF_SUB_VEC(___X296,9UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(297))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X297,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310970))
               ___VEC0
___DEF_SUB_VEC(___X298,9UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(299))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X299,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310970))
               ___VEC0
___DEF_SUB_VEC(___X300,9UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(301))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X301,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(3277048))
               ___VEC0
___DEF_SUB_VEC(___X302,9UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(303))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X303,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2031864))
               ___VEC0
___DEF_SUB_VEC(___X304,9UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(305))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X305,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310968))
               ___VEC0
___DEF_SUB_VEC(___X306,9UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(307))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X307,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1310968))
               ___VEC0
___DEF_SUB_VEC(___X308,9UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(309))
               ___VEC1(___REF_FIX(458768))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X309,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1900783))
               ___VEC0
___DEF_SUB_VEC(___X310,9UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(311))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X311,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2883826))
               ___VEC0
___DEF_SUB_VEC(___X312,10UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(313))
               ___VEC1(___REF_FIX(458772))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X313,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1966323))
               ___VEC0
___DEF_SUB_VEC(___X314,10UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(315))
               ___VEC1(___REF_FIX(458772))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X315,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1966323))
               ___VEC0
___DEF_SUB_VEC(___X316,9UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(317))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X317,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1442033))
               ___VEC0
___DEF_SUB_VEC(___X318,9UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(319))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X319,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(1442033))
               ___VEC0
___DEF_SUB_VEC(___X320,13UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(321))
               ___VEC1(___REF_FIX(393238))
               ___VEC1(___REF_FIX(360472))
               ___VEC1(___REF_FIX(327706))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X321,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2097397))
               ___VEC0
___DEF_SUB_VEC(___X322,12UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(323))
               ___VEC1(___REF_FIX(360472))
               ___VEC1(___REF_FIX(327706))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X323,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2097397))
               ___VEC0
___DEF_SUB_VEC(___X324,11UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(325))
               ___VEC1(___REF_FIX(327706))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X325,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2097397))
               ___VEC0
___DEF_SUB_VEC(___X326,10UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(327))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X327,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2097397))
               ___VEC0
___DEF_SUB_VEC(___X328,10UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(329))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262160))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X329,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2097397))
               ___VEC0
___DEF_SUB_VEC(___X330,9UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(331))
               ___VEC1(___REF_FIX(262172))
               ___VEC1(___REF_FIX(229388))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X331,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262380))
               ___VEC0
___DEF_SUB_VEC(___X332,9UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(333))
               ___VEC1(___REF_FIX(262172))
               ___VEC1(___REF_FIX(229388))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X333,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262380))
               ___VEC0
___DEF_SUB_VEC(___X334,9UL)
               ___VEC1(___REF_FIX(41))
               ___VEC1(___REF_SUB(335))
               ___VEC1(___REF_FIX(262172))
               ___VEC1(___REF_FIX(229388))
               ___VEC1(___REF_FIX(196622))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X335,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262380))
               ___VEC0
___DEF_SUB_VEC(___X336,2UL)
               ___VEC1(___REF_FIX(42))
               ___VEC1(___REF_SUB(337))
               ___VEC0
___DEF_SUB_VEC(___X337,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131296))
               ___VEC0
___DEF_SUB_VEC(___X338,2UL)
               ___VEC1(___REF_FIX(43))
               ___VEC1(___REF_SUB(339))
               ___VEC0
___DEF_SUB_VEC(___X339,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131296))
               ___VEC0
___DEF_SUB_VEC(___X340,4UL)
               ___VEC1(___REF_FIX(44))
               ___VEC1(___REF_SUB(341))
               ___VEC1(___REF_FIX(98334))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X341,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X342,5UL)
               ___VEC1(___REF_FIX(45))
               ___VEC1(___REF_SUB(343))
               ___VEC1(___REF_FIX(131106))
               ___VEC1(___REF_FIX(98334))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X343,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X344,5UL)
               ___VEC1(___REF_FIX(46))
               ___VEC1(___REF_SUB(345))
               ___VEC1(___REF_FIX(360484))
               ___VEC1(___REF_FIX(98340))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X345,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X346,4UL)
               ___VEC1(___REF_FIX(47))
               ___VEC1(___REF_SUB(347))
               ___VEC1(___REF_FIX(98340))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X347,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X348,5UL)
               ___VEC1(___REF_FIX(48))
               ___VEC1(___REF_SUB(349))
               ___VEC1(___REF_FIX(131110))
               ___VEC1(___REF_FIX(98340))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X349,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X350,5UL)
               ___VEC1(___REF_FIX(49))
               ___VEC1(___REF_SUB(351))
               ___VEC1(___REF_FIX(131110))
               ___VEC1(___REF_FIX(98340))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X351,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X352,5UL)
               ___VEC1(___REF_FIX(50))
               ___VEC1(___REF_SUB(353))
               ___VEC1(___REF_FIX(131110))
               ___VEC1(___REF_FIX(98340))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X353,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X354,5UL)
               ___VEC1(___REF_FIX(51))
               ___VEC1(___REF_SUB(355))
               ___VEC1(___REF_FIX(131106))
               ___VEC1(___REF_FIX(98334))
               ___VEC1(___REF_FIX(65568))
               ___VEC0
___DEF_SUB_VEC(___X355,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X356,2UL)
               ___VEC1(___REF_FIX(52))
               ___VEC1(___REF_SUB(357))
               ___VEC0
___DEF_SUB_VEC(___X357,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131292))
               ___VEC0
___DEF_SUB_VEC(___X358,7UL)
               ___VEC1(___REF_FIX(53))
               ___VEC1(___REF_SUB(359))
               ___VEC1(___REF_FIX(196648))
               ___VEC1(___REF_FIX(163882))
               ___VEC1(___REF_FIX(131088))
               ___VEC1(___REF_FIX(98348))
               ___VEC1(___REF_FIX(65582))
               ___VEC0
___DEF_SUB_VEC(___X359,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262365))
               ___VEC0
___DEF_SUB_VEC(___X360,2UL)
               ___VEC1(___REF_FIX(54))
               ___VEC1(___REF_SUB(361))
               ___VEC0
___DEF_SUB_VEC(___X361,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(393438))
               ___VEC0
___DEF_SUB_VEC(___X362,6UL)
               ___VEC1(___REF_FIX(55))
               ___VEC1(___REF_SUB(363))
               ___VEC1(___REF_FIX(163880))
               ___VEC1(___REF_FIX(131114))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65582))
               ___VEC0
___DEF_SUB_VEC(___X363,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262365))
               ___VEC0
___DEF_SUB_VEC(___X364,5UL)
               ___VEC1(___REF_FIX(56))
               ___VEC1(___REF_SUB(365))
               ___VEC1(___REF_FIX(131114))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65582))
               ___VEC0
___DEF_SUB_VEC(___X365,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262365))
               ___VEC0
___DEF_SUB_VEC(___X366,4UL)
               ___VEC1(___REF_FIX(57))
               ___VEC1(___REF_SUB(367))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65582))
               ___VEC0
___DEF_SUB_VEC(___X367,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262365))
               ___VEC0
___DEF_SUB_VEC(___X368,3UL)
               ___VEC1(___REF_FIX(58))
               ___VEC1(___REF_SUB(369))
               ___VEC1(___REF_FIX(65582))
               ___VEC0
___DEF_SUB_VEC(___X369,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262365))
               ___VEC0
___DEF_SUB_VEC(___X370,2UL)
               ___VEC1(___REF_FIX(59))
               ___VEC1(___REF_SUB(371))
               ___VEC0
___DEF_SUB_VEC(___X371,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262369))
               ___VEC0
___DEF_SUB_VEC(___X372,24UL)
               ___VEC1(___REF_SYM(30,___S_depth))
               ___VEC1(___REF_SYM(82,___S_locations_3f_))
               ___VEC1(___REF_SYM(38,___S_identifiers_3f_))
               ___VEC1(___REF_SYM(79,___S_lexical_2d_environment_3f_))
               ___VEC1(___REF_SYM(31,___S_dynamic_2d_environment_3f_))
               ___VEC1(___REF_SYM(19,___S_cont))
               ___VEC1(___REF_SYM(100,___S_temp_2e_28))
               ___VEC1(___REF_SYM(86,___S_package_2d_variables))
               ___VEC1(___REF_SYM(83,___S_name))
               ___VEC1(___REF_SYM(96,___S_str))
               ___VEC1(___REF_SYM(81,___S_location))
               ___VEC1(___REF_SYM(10,___S_cdr_5e_3))
               ___VEC1(___REF_SYM(80,___S_line))
               ___VEC1(___REF_SYM(9,___S_cdr_5e_2))
               ___VEC1(___REF_SYM(114,___S_x_2e_29))
               ___VEC1(___REF_SYM(112,___S_variables))
               ___VEC1(___REF_SYM(85,___S_package_2d_variable))
               ___VEC1(___REF_SYM(98,___S_temp_2e_16))
               ___VEC1(___REF_SYM(99,___S_temp_2e_18))
               ___VEC1(___REF_SYM(113,___S_x_2e_19))
               ___VEC1(___REF_SYM(110,___S_value))
               ___VEC1(___REF_SYM(7,___S_cdr_5e_0))
               ___VEC1(___REF_SYM(8,___S_cdr_5e_1))
               ___VEC1(___REF_SYM(111,___S_variable))
               ___VEC0
___DEF_SUB_VEC(___X373,10UL)
               ___VEC1(___REF_KEY(2,___K_dynamic_2d_environment_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(4,___K_lexical_2d_environment_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(3,___K_identifiers_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(5,___K_locations_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(1,___K_depth))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_VEC(___X374,2UL)
               ___VEC1(___REF_SUB(375))
               ___VEC1(___REF_SUB(386))
               ___VEC0
___DEF_SUB_VEC(___X375,5UL)
               ___VEC1(___REF_SUB(376))
               ___VEC1(___REF_SUB(378))
               ___VEC1(___REF_SUB(380))
               ___VEC1(___REF_SUB(382))
               ___VEC1(___REF_SUB(384))
               ___VEC0
___DEF_SUB_VEC(___X376,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(377))
               ___VEC0
___DEF_SUB_VEC(___X377,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(255))
               ___VEC0
___DEF_SUB_VEC(___X378,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(379))
               ___VEC0
___DEF_SUB_VEC(___X379,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262401))
               ___VEC0
___DEF_SUB_VEC(___X380,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(381))
               ___VEC0
___DEF_SUB_VEC(___X381,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262401))
               ___VEC0
___DEF_SUB_VEC(___X382,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(383))
               ___VEC0
___DEF_SUB_VEC(___X383,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262401))
               ___VEC0
___DEF_SUB_VEC(___X384,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(385))
               ___VEC0
___DEF_SUB_VEC(___X385,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(10944770))
               ___VEC0
___DEF_SUB_VEC(___X386,0UL)
               ___VEC0
___DEF_SUB_VEC(___X387,2UL)
               ___VEC1(___REF_SUB(388))
               ___VEC1(___REF_SUB(397))
               ___VEC0
___DEF_SUB_VEC(___X388,4UL)
               ___VEC1(___REF_SUB(389))
               ___VEC1(___REF_SUB(391))
               ___VEC1(___REF_SUB(393))
               ___VEC1(___REF_SUB(395))
               ___VEC0
___DEF_SUB_VEC(___X389,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(390))
               ___VEC0
___DEF_SUB_VEC(___X390,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(261))
               ___VEC0
___DEF_SUB_VEC(___X391,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(392))
               ___VEC0
___DEF_SUB_VEC(___X392,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(261))
               ___VEC0
___DEF_SUB_VEC(___X393,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(394))
               ___VEC0
___DEF_SUB_VEC(___X394,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(262407))
               ___VEC0
___DEF_SUB_VEC(___X395,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(396))
               ___VEC0
___DEF_SUB_VEC(___X396,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(2687240))
               ___VEC0
___DEF_SUB_VEC(___X397,0UL)
               ___VEC0
___DEF_SUB_VEC(___X398,2UL)
               ___VEC1(___REF_SUB(399))
               ___VEC1(___REF_SUB(408))
               ___VEC0
___DEF_SUB_VEC(___X399,4UL)
               ___VEC1(___REF_SUB(400))
               ___VEC1(___REF_SUB(402))
               ___VEC1(___REF_SUB(404))
               ___VEC1(___REF_SUB(406))
               ___VEC0
___DEF_SUB_VEC(___X400,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(401))
               ___VEC0
___DEF_SUB_VEC(___X401,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(272))
               ___VEC0
___DEF_SUB_VEC(___X402,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(403))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X403,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590097))
               ___VEC0
___DEF_SUB_VEC(___X404,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(405))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X405,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590097))
               ___VEC0
___DEF_SUB_VEC(___X406,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(407))
               ___VEC0
___DEF_SUB_VEC(___X407,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131345))
               ___VEC0
___DEF_SUB_VEC(___X408,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X409,2UL)
               ___VEC1(___REF_SUB(410))
               ___VEC1(___REF_SUB(419))
               ___VEC0
___DEF_SUB_VEC(___X410,4UL)
               ___VEC1(___REF_SUB(411))
               ___VEC1(___REF_SUB(413))
               ___VEC1(___REF_SUB(415))
               ___VEC1(___REF_SUB(417))
               ___VEC0
___DEF_SUB_VEC(___X411,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(412))
               ___VEC0
___DEF_SUB_VEC(___X412,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(276))
               ___VEC0
___DEF_SUB_VEC(___X413,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(414))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X414,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590101))
               ___VEC0
___DEF_SUB_VEC(___X415,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(416))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X416,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590101))
               ___VEC0
___DEF_SUB_VEC(___X417,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(418))
               ___VEC0
___DEF_SUB_VEC(___X418,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131349))
               ___VEC0
___DEF_SUB_VEC(___X419,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X420,2UL)
               ___VEC1(___REF_SUB(421))
               ___VEC1(___REF_SUB(430))
               ___VEC0
___DEF_SUB_VEC(___X421,4UL)
               ___VEC1(___REF_SUB(422))
               ___VEC1(___REF_SUB(424))
               ___VEC1(___REF_SUB(426))
               ___VEC1(___REF_SUB(428))
               ___VEC0
___DEF_SUB_VEC(___X422,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(423))
               ___VEC0
___DEF_SUB_VEC(___X423,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(280))
               ___VEC0
___DEF_SUB_VEC(___X424,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(425))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X425,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590105))
               ___VEC0
___DEF_SUB_VEC(___X426,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(427))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X427,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590105))
               ___VEC0
___DEF_SUB_VEC(___X428,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(429))
               ___VEC0
___DEF_SUB_VEC(___X429,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131353))
               ___VEC0
___DEF_SUB_VEC(___X430,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X431,2UL)
               ___VEC1(___REF_SUB(432))
               ___VEC1(___REF_SUB(441))
               ___VEC0
___DEF_SUB_VEC(___X432,4UL)
               ___VEC1(___REF_SUB(433))
               ___VEC1(___REF_SUB(435))
               ___VEC1(___REF_SUB(437))
               ___VEC1(___REF_SUB(439))
               ___VEC0
___DEF_SUB_VEC(___X433,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(434))
               ___VEC0
___DEF_SUB_VEC(___X434,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(283))
               ___VEC0
___DEF_SUB_VEC(___X435,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(436))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X436,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590108))
               ___VEC0
___DEF_SUB_VEC(___X437,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(438))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X438,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590108))
               ___VEC0
___DEF_SUB_VEC(___X439,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(440))
               ___VEC0
___DEF_SUB_VEC(___X440,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131356))
               ___VEC0
___DEF_SUB_VEC(___X441,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X442,2UL)
               ___VEC1(___REF_SUB(443))
               ___VEC1(___REF_SUB(452))
               ___VEC0
___DEF_SUB_VEC(___X443,4UL)
               ___VEC1(___REF_SUB(444))
               ___VEC1(___REF_SUB(446))
               ___VEC1(___REF_SUB(448))
               ___VEC1(___REF_SUB(450))
               ___VEC0
___DEF_SUB_VEC(___X444,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(445))
               ___VEC0
___DEF_SUB_VEC(___X445,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(287))
               ___VEC0
___DEF_SUB_VEC(___X446,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(447))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X447,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590112))
               ___VEC0
___DEF_SUB_VEC(___X448,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(449))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X449,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590112))
               ___VEC0
___DEF_SUB_VEC(___X450,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(451))
               ___VEC0
___DEF_SUB_VEC(___X451,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131360))
               ___VEC0
___DEF_SUB_VEC(___X452,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X453,2UL)
               ___VEC1(___REF_SUB(454))
               ___VEC1(___REF_SUB(463))
               ___VEC0
___DEF_SUB_VEC(___X454,4UL)
               ___VEC1(___REF_SUB(455))
               ___VEC1(___REF_SUB(457))
               ___VEC1(___REF_SUB(459))
               ___VEC1(___REF_SUB(461))
               ___VEC0
___DEF_SUB_VEC(___X455,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(456))
               ___VEC0
___DEF_SUB_VEC(___X456,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(291))
               ___VEC0
___DEF_SUB_VEC(___X457,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(458))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X458,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590116))
               ___VEC0
___DEF_SUB_VEC(___X459,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(460))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X460,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590116))
               ___VEC0
___DEF_SUB_VEC(___X461,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(462))
               ___VEC0
___DEF_SUB_VEC(___X462,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131364))
               ___VEC0
___DEF_SUB_VEC(___X463,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X464,2UL)
               ___VEC1(___REF_SUB(465))
               ___VEC1(___REF_SUB(474))
               ___VEC0
___DEF_SUB_VEC(___X465,4UL)
               ___VEC1(___REF_SUB(466))
               ___VEC1(___REF_SUB(468))
               ___VEC1(___REF_SUB(470))
               ___VEC1(___REF_SUB(472))
               ___VEC0
___DEF_SUB_VEC(___X466,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(467))
               ___VEC0
___DEF_SUB_VEC(___X467,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(295))
               ___VEC0
___DEF_SUB_VEC(___X468,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(469))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X469,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590120))
               ___VEC0
___DEF_SUB_VEC(___X470,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(471))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X471,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590120))
               ___VEC0
___DEF_SUB_VEC(___X472,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(473))
               ___VEC0
___DEF_SUB_VEC(___X473,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131368))
               ___VEC0
___DEF_SUB_VEC(___X474,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X475,2UL)
               ___VEC1(___REF_SUB(476))
               ___VEC1(___REF_SUB(485))
               ___VEC0
___DEF_SUB_VEC(___X476,4UL)
               ___VEC1(___REF_SUB(477))
               ___VEC1(___REF_SUB(479))
               ___VEC1(___REF_SUB(481))
               ___VEC1(___REF_SUB(483))
               ___VEC0
___DEF_SUB_VEC(___X477,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(478))
               ___VEC0
___DEF_SUB_VEC(___X478,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(299))
               ___VEC0
___DEF_SUB_VEC(___X479,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(480))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X480,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590124))
               ___VEC0
___DEF_SUB_VEC(___X481,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(482))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X482,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590124))
               ___VEC0
___DEF_SUB_VEC(___X483,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(484))
               ___VEC0
___DEF_SUB_VEC(___X484,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131372))
               ___VEC0
___DEF_SUB_VEC(___X485,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X486,2UL)
               ___VEC1(___REF_SUB(487))
               ___VEC1(___REF_SUB(496))
               ___VEC0
___DEF_SUB_VEC(___X487,4UL)
               ___VEC1(___REF_SUB(488))
               ___VEC1(___REF_SUB(490))
               ___VEC1(___REF_SUB(492))
               ___VEC1(___REF_SUB(494))
               ___VEC0
___DEF_SUB_VEC(___X488,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(489))
               ___VEC0
___DEF_SUB_VEC(___X489,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(302))
               ___VEC0
___DEF_SUB_VEC(___X490,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(491))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X491,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590127))
               ___VEC0
___DEF_SUB_VEC(___X492,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(493))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X493,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590127))
               ___VEC0
___DEF_SUB_VEC(___X494,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(495))
               ___VEC0
___DEF_SUB_VEC(___X495,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131375))
               ___VEC0
___DEF_SUB_VEC(___X496,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X497,2UL)
               ___VEC1(___REF_SUB(498))
               ___VEC1(___REF_SUB(507))
               ___VEC0
___DEF_SUB_VEC(___X498,4UL)
               ___VEC1(___REF_SUB(499))
               ___VEC1(___REF_SUB(501))
               ___VEC1(___REF_SUB(503))
               ___VEC1(___REF_SUB(505))
               ___VEC0
___DEF_SUB_VEC(___X499,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(500))
               ___VEC0
___DEF_SUB_VEC(___X500,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(306))
               ___VEC0
___DEF_SUB_VEC(___X501,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(502))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X502,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590131))
               ___VEC0
___DEF_SUB_VEC(___X503,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(504))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X504,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590131))
               ___VEC0
___DEF_SUB_VEC(___X505,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(506))
               ___VEC0
___DEF_SUB_VEC(___X506,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131379))
               ___VEC0
___DEF_SUB_VEC(___X507,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X508,2UL)
               ___VEC1(___REF_SUB(509))
               ___VEC1(___REF_SUB(518))
               ___VEC0
___DEF_SUB_VEC(___X509,4UL)
               ___VEC1(___REF_SUB(510))
               ___VEC1(___REF_SUB(512))
               ___VEC1(___REF_SUB(514))
               ___VEC1(___REF_SUB(516))
               ___VEC0
___DEF_SUB_VEC(___X510,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(511))
               ___VEC0
___DEF_SUB_VEC(___X511,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(310))
               ___VEC0
___DEF_SUB_VEC(___X512,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(513))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X513,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590135))
               ___VEC0
___DEF_SUB_VEC(___X514,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(515))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X515,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(590135))
               ___VEC0
___DEF_SUB_VEC(___X516,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(517))
               ___VEC0
___DEF_SUB_VEC(___X517,2UL)
               ___VEC1(___REF_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug))
               ___VEC1(___REF_FIX(131383))
               ___VEC0
___DEF_SUB_VEC(___X518,1UL)
               ___VEC1(___REF_SYM(90,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X519,5UL)
               ___VEC1(___REF_SYM(4,___S_bin_3a_jazz_2e_language_2e_runtime_2e_debug))
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
,___DEF_SUB(___X390)
,___DEF_SUB(___X391)
,___DEF_SUB(___X392)
,___DEF_SUB(___X393)
,___DEF_SUB(___X394)
,___DEF_SUB(___X395)
,___DEF_SUB(___X396)
,___DEF_SUB(___X397)
,___DEF_SUB(___X398)
,___DEF_SUB(___X399)
,___DEF_SUB(___X400)
,___DEF_SUB(___X401)
,___DEF_SUB(___X402)
,___DEF_SUB(___X403)
,___DEF_SUB(___X404)
,___DEF_SUB(___X405)
,___DEF_SUB(___X406)
,___DEF_SUB(___X407)
,___DEF_SUB(___X408)
,___DEF_SUB(___X409)
,___DEF_SUB(___X410)
,___DEF_SUB(___X411)
,___DEF_SUB(___X412)
,___DEF_SUB(___X413)
,___DEF_SUB(___X414)
,___DEF_SUB(___X415)
,___DEF_SUB(___X416)
,___DEF_SUB(___X417)
,___DEF_SUB(___X418)
,___DEF_SUB(___X419)
,___DEF_SUB(___X420)
,___DEF_SUB(___X421)
,___DEF_SUB(___X422)
,___DEF_SUB(___X423)
,___DEF_SUB(___X424)
,___DEF_SUB(___X425)
,___DEF_SUB(___X426)
,___DEF_SUB(___X427)
,___DEF_SUB(___X428)
,___DEF_SUB(___X429)
,___DEF_SUB(___X430)
,___DEF_SUB(___X431)
,___DEF_SUB(___X432)
,___DEF_SUB(___X433)
,___DEF_SUB(___X434)
,___DEF_SUB(___X435)
,___DEF_SUB(___X436)
,___DEF_SUB(___X437)
,___DEF_SUB(___X438)
,___DEF_SUB(___X439)
,___DEF_SUB(___X440)
,___DEF_SUB(___X441)
,___DEF_SUB(___X442)
,___DEF_SUB(___X443)
,___DEF_SUB(___X444)
,___DEF_SUB(___X445)
,___DEF_SUB(___X446)
,___DEF_SUB(___X447)
,___DEF_SUB(___X448)
,___DEF_SUB(___X449)
,___DEF_SUB(___X450)
,___DEF_SUB(___X451)
,___DEF_SUB(___X452)
,___DEF_SUB(___X453)
,___DEF_SUB(___X454)
,___DEF_SUB(___X455)
,___DEF_SUB(___X456)
,___DEF_SUB(___X457)
,___DEF_SUB(___X458)
,___DEF_SUB(___X459)
,___DEF_SUB(___X460)
,___DEF_SUB(___X461)
,___DEF_SUB(___X462)
,___DEF_SUB(___X463)
,___DEF_SUB(___X464)
,___DEF_SUB(___X465)
,___DEF_SUB(___X466)
,___DEF_SUB(___X467)
,___DEF_SUB(___X468)
,___DEF_SUB(___X469)
,___DEF_SUB(___X470)
,___DEF_SUB(___X471)
,___DEF_SUB(___X472)
,___DEF_SUB(___X473)
,___DEF_SUB(___X474)
,___DEF_SUB(___X475)
,___DEF_SUB(___X476)
,___DEF_SUB(___X477)
,___DEF_SUB(___X478)
,___DEF_SUB(___X479)
,___DEF_SUB(___X480)
,___DEF_SUB(___X481)
,___DEF_SUB(___X482)
,___DEF_SUB(___X483)
,___DEF_SUB(___X484)
,___DEF_SUB(___X485)
,___DEF_SUB(___X486)
,___DEF_SUB(___X487)
,___DEF_SUB(___X488)
,___DEF_SUB(___X489)
,___DEF_SUB(___X490)
,___DEF_SUB(___X491)
,___DEF_SUB(___X492)
,___DEF_SUB(___X493)
,___DEF_SUB(___X494)
,___DEF_SUB(___X495)
,___DEF_SUB(___X496)
,___DEF_SUB(___X497)
,___DEF_SUB(___X498)
,___DEF_SUB(___X499)
,___DEF_SUB(___X500)
,___DEF_SUB(___X501)
,___DEF_SUB(___X502)
,___DEF_SUB(___X503)
,___DEF_SUB(___X504)
,___DEF_SUB(___X505)
,___DEF_SUB(___X506)
,___DEF_SUB(___X507)
,___DEF_SUB(___X508)
,___DEF_SUB(___X509)
,___DEF_SUB(___X510)
,___DEF_SUB(___X511)
,___DEF_SUB(___X512)
,___DEF_SUB(___X513)
,___DEF_SUB(___X514)
,___DEF_SUB(___X515)
,___DEF_SUB(___X516)
,___DEF_SUB(___X517)
,___DEF_SUB(___X518)
,___DEF_SUB(___X519)
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L11_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L12_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L13_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L14_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L15_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L16_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L17_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L18_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L19_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L20_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L21_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L22_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L23_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L24_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L25_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L26_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L27_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L28_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L29_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L30_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L31_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L32_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L33_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L34_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L35_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L36_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L37_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L38_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L39_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L40_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L41_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L42_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L43_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L44_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L45_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L46_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L47_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L48_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L49_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L50_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L51_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L52_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L53_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L54_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L55_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L56_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L57_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L58_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL(___L59_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_R1(___SYM_jazz_2e_dialect)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_kernel)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_format)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_functional)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),60,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_STK(1,___SYM_jazz_2e_language_2e_runtime_2e_debug)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),64,___G_jazz_3a_register_2d_module)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_GLO(2,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_,___FAL)
   ___SET_GLO(13,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_,___PRC(14))
   ___SET_GLO(17,___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,___PRC(16))
   ___SET_GLO(4,___G_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,___PRC(20))
   ___SET_GLO(9,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port,___PRC(27))
   ___SET_GLO(12,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port,___PRC(30))
   ___SET_GLO(25,___G_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,___PRC(33))
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___SET_R1(___SYM__3a_console)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(2),50,___G_jazz_2e_language_2e_runtime_2e_functional_3a_register_2d_printer)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_GLO(29,___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log,___FAL)
   ___SET_GLO(31,___G_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log,___PRC(38))
   ___SET_GLO(1,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_,___FAL)
   ___SET_GLO(8,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_,___PRC(40))
   ___SET_R1(___SYM_console)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),68,___G_make_2d_mutex)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_GLO(11,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex,___R1)
   ___SET_GLO(38,___G_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,___PRC(42))
   ___SET_GLO(14,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___PRC(49))
   ___SET_GLO(10,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___PRC(60))
   ___SET_GLO(7,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console,___PRC(71))
   ___SET_GLO(20,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line,___PRC(76))
   ___SET_GLO(21,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string,___PRC(79))
   ___SET_GLO(22,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread,___PRC(82))
   ___SET_GLO(18,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___PRC(85))
   ___SET_GLO(6,___G_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,___PRC(95))
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(2),69,___G_make_2d_table)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___SET_GLO(30,___G_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache,___R1)
   ___SET_GLO(27,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___PRC(99))
   ___SET_GLO(26,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,___PRC(107))
   ___SET_GLO(15,___G_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___PRC(112))
   ___SET_GLO(24,___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,___PRC(173))
   ___SET_GLO(23,___G_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,___PRC(179))
   ___SET_GLO(5,___G_jazz_2e_language_2e_runtime_2e_debug_3a_break,___PRC(184))
   ___SET_GLO(28,___G_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,___PRC(189))
   ___SET_GLO(3,___G_jazz_2e_language_2e_runtime_2e_debug_3a_advise,___PRC(194))
   ___SET_GLO(36,___G_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,___PRC(199))
   ___SET_GLO(19,___G_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,___PRC(204))
   ___SET_GLO(16,___G_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,___PRC(209))
   ___SET_GLO(34,___G_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,___PRC(214))
   ___SET_GLO(35,___G_jazz_2e_language_2e_runtime_2e_debug_3a_trace,___PRC(219))
   ___SET_GLO(37,___G_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,___PRC(224))
   ___SET_GLO(33,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,___PRC(229))
   ___SET_GLO(32,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,___PRC(234))
   ___SET_R1(___VOID)
   ___POLL(11)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 14
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_)
   ___SET_GLO(2,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 16
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___IF(___NOT(___NOTFALSEP(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)))
   ___GOTO(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___END_IF
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___JUMPGLOSAFE(___SET_NARGS(0),2,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)
___DEF_GLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
   ___JUMPGLOSAFE(___SET_NARGS(0),66,___G_jazz_3a_terminal_2d_port)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 20
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___IF(___NOT(___NOTFALSEP(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)))
   ___GOTO(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___END_IF
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___JUMPGLOSAFE(___SET_NARGS(0),2,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_port_2d_getter_2a_)
___DEF_GLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(0),65,___G_jazz_3a_terminal_2d_available_3f_)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___END_IF
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(0),66,___G_jazz_3a_terminal_2d_port)
___DEF_GLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 27
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port)
   ___JUMPGLOSAFE(___SET_NARGS(0),17,___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port)
   ___JUMPGLOSAFE(___SET_NARGS(0),17,___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),17,___G_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
   ___SET_R0(___STK(-3))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_force_2d_output)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log
#undef ___PH_LBL0
#define ___PH_LBL0 38
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log)
   ___SET_GLO(29,___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 40
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_)
   ___SET_GLO(1,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex
#undef ___PH_LBL0
#define ___PH_LBL0 42
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),71,___G_mutex_2d_lock_21_)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(0),___STK(-6))
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___SET_STK(-5,___R1)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_mutex)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),72,___G_mutex_2d_unlock_21_)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___SET_R1(___STK(-5))
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string
#undef ___PH_LBL0
#define ___PH_LBL0 49
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___IF_NARGS_EQ(1,___SET_R2(___FAL))
   ___GET_KEY(0,1,0,1,___SUB(106))
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_STK(1,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(1),3)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(1),38,___G_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(3,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L12_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___END_IF
   ___IF(___NOTFALSEP(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log))
   ___GOTO(___L11_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___END_IF
   ___GOTO(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_R1(___STK(-5))
___DEF_GLBL(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_R0(___STK(-7))
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(0),67,___G_jazz_3a_unspecified)
___DEF_GLBL(___L11_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log)
___DEF_GLBL(___L12_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_STK(-5,___R1)
   ___SET_R3(___CLO(___STK(-6),1))
   ___SET_R2(___SUB(107))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),47,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_force_2d_output)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___SET_R1(___STK(-5))
   ___GOTO(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line
#undef ___PH_LBL0
#define ___PH_LBL0 60
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___IF_NARGS_EQ(1,___SET_R2(___FAL))
   ___GET_KEY(0,1,0,1,___SUB(131))
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_STK(1,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(1),3)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(1),38,___G_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(3,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L12_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___END_IF
   ___IF(___NOTFALSEP(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log))
   ___GOTO(___L11_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___END_IF
   ___GOTO(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_R1(___STK(-5))
___DEF_GLBL(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_R0(___STK(-7))
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(0),67,___G_jazz_3a_unspecified)
___DEF_GLBL(___L11_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CLO(___STK(-6),1))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_jazz_2e_language_2e_runtime_2e_debug_3a_platform_2d_log)
___DEF_GLBL(___L12_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_STK(-5,___R1)
   ___SET_R3(___CLO(___STK(-6),1))
   ___SET_R2(___SUB(132))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),47,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),46,___G_force_2d_output)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___SET_R1(___STK(-5))
   ___GOTO(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_console
#undef ___PH_LBL0
#define ___PH_LBL0 71
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_console)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_console)
   ___SET_STK(1,___R0)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(156))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_console)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),47,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_console)
   ___SET_R0(___STK(-3))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_console)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),10,___G_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line
#undef ___PH_LBL0
#define ___PH_LBL0 76
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string
#undef ___PH_LBL0
#define ___PH_LBL0 79
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread
#undef ___PH_LBL0
#define ___PH_LBL0 82
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_console)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug
#undef ___PH_LBL0
#define ___PH_LBL0 85
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),49,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread_3f_)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___END_IF
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___DEF_GLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(0),48,___G_jazz_2e_language_2e_runtime_2e_functional_3a_primordial_2d_thread)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___SET_STK(-5,___R1)
   ___SET_STK(-4,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-4),7)
   ___ADD_CLO_ELEM(0,___STK(-6))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(-4))
   ___SET_R2(___SYM_post_2d_event)
   ___SET_R0(___STK(-7))
   ___SET_R1(___STK(-5))
   ___ADJFP(-4)
   ___CHECK_HEAP(5,4096)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(3),52,___G_jazz_2e_language_2e_runtime_2e_functional_3a_thread_2d_post)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(7,0,0,0)
   ___SET_R2(___CLO(___R4,1))
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_debug_3a_debug)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug
#undef ___PH_LBL0
#define ___PH_LBL0 95
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
   ___IF(___NOT(___NOTFALSEP(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_)))
   ___GOTO(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
   ___END_IF
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_language_2e_runtime_2e_debug_3a__2a_console_2d_clear_2a_)
___DEF_GLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug)
   ___JUMPGLOSAFE(___SET_NARGS(0),53,___G_jazz_3a_clear_2d_terminal)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 99
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R3(___FAL)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___SET_R0(___LBL(2))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),39,___G__23__23_table_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___END_IF
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),62,___G_jazz_3a_procedure_2d_name)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___SET_STK(-5,___R1)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_procedure_2d_name_2d_cache)
   ___SET_R0(___LBL(5))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),40,___G__23__23_table_2d_set_21_)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___SET_R1(___STK(-5))
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
   ___SET_R1(___SUB(219))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 107
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),55,___G_jazz_3a_continuation_2d_creator)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
   ___SET_R0(___STK(-3))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),27,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack
#undef ___PH_LBL0
#define ___PH_LBL0 112
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L10_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L11_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L12_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L13_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L14_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L15_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L16_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L17_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L18_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L19_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L20_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L21_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L22_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L23_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L24_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L25_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L26_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L27_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L28_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L29_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L30_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L31_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L32_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L33_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L34_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L35_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L36_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L37_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L38_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L39_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L40_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L41_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L42_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L43_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L44_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L45_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L46_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L47_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L48_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L49_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L50_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L51_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L52_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L53_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L54_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L55_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L56_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L57_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L58_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_P_HLBL(___L59_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF_NARGS_EQ(1,___PUSH(___R1) ___PUSH(___FAL) ___PUSH(___FAL) ___SET_R1(___FAL) ___SET_R2(___FAL)
 ___SET_R3(___FAL))
   ___GET_KEY(0,1,0,5,___SUB(248))
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R2(___R3)
   ___SET_R1(___STK(-2))
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),59,___G_jazz_3a_get_2d_continuation_2d_stack)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-11,___STK(-10))
   ___SET_STK(-10,___STK(-9))
   ___SET_STK(-9,___STK(-7))
   ___SET_R3(___R1)
   ___SET_R2(___LBL(42))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-8))
   ___ADJFP(-9)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L60_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___GOTO(___L80_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-4,___R1)
   ___SET_STK(1,___STK(-11))
   ___SET_STK(2,___STK(-10))
   ___SET_STK(3,___STK(-9))
   ___SET_R3(___CDR(___STK(-5)))
   ___SET_R2(___STK(-6))
   ___SET_R1(___STK(-7))
   ___SET_R0(___LBL(39))
   ___ADJFP(3)
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L80_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
___DEF_GLBL(___L60_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(10,___STK(-2))
   ___SET_STK(11,___STK(-1))
   ___SET_STK(12,___STK(0))
   ___SET_R3(___CAR(___R3))
   ___SET_R0(___LBL(4))
   ___ADJFP(12)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R3)
   ___ADJFP(9)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),26,___G_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-9))
   ___SET_R0(___LBL(9))
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L61_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___IF(___NOT(___SYMBOLP(___R2)))
   ___GOTO(___L61_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R1(___R2)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___JUMPGLOSAFE(___SET_NARGS(1),63,___G_jazz_3a_reference_2d_name)
___DEF_GLBL(___L61_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(16))
   ___IF(___NOT(___SYMBOLP(___R1)))
   ___GOTO(___L63_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(10))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_symbol_2d__3e_string)
___DEF_SLBL(10,___L10_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-5,___R1)
   ___SET_R2(___SUB(249))
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(2),51,___G_jazz_2e_language_2e_runtime_2e_functional_3a_starts_2d_with_3f_stringstring)
___DEF_SLBL(12,___L12_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L62_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L62_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R3(___STRINGLENGTH(___STK(-5)))
   ___SET_R1(___STK(-5))
   ___SET_R2(___FIX(2L))
   ___SET_R0(___LBL(14))
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(3),___PRM_substring)
___DEF_SLBL(14,___L14_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___STK(-3))
   ___POLL(15)
___DEF_SLBL(15,___L15_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(1),___PRM_string_2d__3e_symbol)
___DEF_GLBL(___L63_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(16,___L16_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___NOTFALSEP(___STK(-11)))
   ___GOTO(___L64_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___IF(___NOT(___NOTFALSEP(___STK(-10))))
   ___GOTO(___L66_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
___DEF_GLBL(___L64_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___NOT(___NOTFALSEP(___STK(-11))))
   ___GOTO(___L65_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(1),56,___G_jazz_3a_get_2d_continuation_2d_dynamic_2d_environment)
___DEF_SLBL(17,___L17_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(18))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(18,___L18_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(1),57,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
___DEF_SLBL(19,___L19_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(20))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(20,___L20_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-3))
   ___SET_R0(___LBL(21))
   ___JUMPPRM(___SET_NARGS(2),___PRM_append)
___DEF_SLBL(21,___L21_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(22,4096)
___DEF_SLBL(22,___L22_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___POLL(23)
___DEF_SLBL(23,___L23_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___DEF_GLBL(___L65_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(1),57,___G_jazz_3a_get_2d_continuation_2d_lexical_2d_environment)
___DEF_SLBL(24,___L24_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(25))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(25,___L25_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(26,4096)
___DEF_SLBL(26,___L26_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___POLL(27)
___DEF_SLBL(27,___L27_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___DEF_GLBL(___L66_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___NOTFALSEP(___STK(-7)))
   ___GOTO(___L67_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___POLL(28)
___DEF_SLBL(28,___L28_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___DEF_GLBL(___L67_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(1),58,___G_jazz_3a_get_2d_continuation_2d_location)
___DEF_SLBL(29,___L29_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L68_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L78_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L76_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R2(___CDR(___R1))
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L74_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R3(___CAR(___R2))
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L72_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R4(___CDR(___R2))
   ___IF(___NOT(___PAIRP(___R4)))
   ___GOTO(___L70_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R0(___CAR(___R4))
   ___BEGIN_ALLOC_LIST(2UL,___R0)
   ___ADD_LIST_ELEM(1,___R3)
   ___END_ALLOC_LIST(2)
   ___SET_STK(-3,___GET_LIST(2))
   ___SET_R2(___STK(-3))
   ___CHECK_HEAP(30,4096)
___DEF_SLBL(30,___L30_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L69_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L68_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___BEGIN_ALLOC_LIST(2UL,___FAL)
   ___ADD_LIST_ELEM(1,___FAL)
   ___END_ALLOC_LIST(2)
   ___SET_R2(___GET_LIST(2))
   ___CHECK_HEAP(31,4096)
___DEF_SLBL(31,___L31_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L69_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___CONS(___STK(-4),___R2))
   ___CHECK_HEAP(32,4096)
___DEF_SLBL(32,___L32_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___POLL(33)
___DEF_SLBL(33,___L33_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___DEF_GLBL(___L70_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-3,___R1)
   ___SET_STK(-2,___R2)
   ___SET_STK(-1,___R3)
   ___SET_STK(0,___R4)
   ___SET_R1(___R4)
   ___SET_R0(___LBL(34))
   ___ADJFP(4)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(34,___L34_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L71_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L71_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L72_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-3,___R1)
   ___SET_STK(-2,___R2)
   ___SET_STK(-1,___R3)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(35))
   ___ADJFP(4)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(35,___L35_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L73_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L73_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L74_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-3,___R1)
   ___SET_STK(-2,___R2)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(36))
   ___ADJFP(4)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(36,___L36_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L75_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L75_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L76_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-3,___R1)
   ___SET_R0(___LBL(37))
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(37,___L37_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L77_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L77_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L78_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-3,___R1)
   ___SET_R0(___LBL(38))
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(38,___L38_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L79_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L79_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_SLBL(39,___L39_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(40,4096)
___DEF_SLBL(40,___L40_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___POLL(41)
___DEF_SLBL(41,___L41_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(4))
___DEF_GLBL(___L80_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___NUL)
   ___ADJFP(-3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(42,___L42_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(42,1,0,0)
   ___IF(___NOT(___PROCEDUREP(___LBL(52))))
   ___GOTO(___L96_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_STK(1,___R1)
   ___SET_R1(___LBL(52))
   ___SET_R3(___STK(1))
   ___SET_R2(___STK(1))
   ___POLL(43)
___DEF_SLBL(43,___L43_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L82_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L81_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R3(___CDR(___R3))
   ___POLL(44)
___DEF_SLBL(44,___L44_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L82_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L81_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L85_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___POLL(45)
___DEF_SLBL(45,___L45_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L84_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
___DEF_GLBL(___L83_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___ADJFP(8)
   ___POLL(46)
___DEF_SLBL(46,___L46_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R0(___LBL(47))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(47,___L47_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(48))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L83_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
___DEF_GLBL(___L84_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(48,___L48_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(49,4096)
___DEF_SLBL(49,___L49_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___POLL(50)
___DEF_SLBL(50,___L50_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L85_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___POLL(51)
___DEF_SLBL(51,___L51_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_SLBL(52,___L52_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(52,1,0,0)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L94_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R2(___CAR(___R1))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L92_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R3(___CDR(___R1))
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L90_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L88_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_STK(1,___CDR(___R3))
   ___SET_STK(2,___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(2)
   ___IF(___PAIRP(___R1))
   ___GOTO(___L87_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___END_IF
   ___SET_STK(-1,___R0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R4)
   ___SET_R0(___LBL(53))
   ___ADJFP(10)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(53,___L53_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L86_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L86_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L87_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___BEGIN_ALLOC_LIST(2UL,___R4)
   ___ADD_LIST_ELEM(1,___R2)
   ___END_ALLOC_LIST(2)
   ___SET_STK(-1,___GET_LIST(2))
   ___SET_R1(___STK(-1))
   ___ADJFP(-2)
   ___CHECK_HEAP(54,4096)
___DEF_SLBL(54,___L54_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L88_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(55))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(55,___L55_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L89_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L89_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L90_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(56))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(56,___L56_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L91_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L91_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L92_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(57))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(57,___L57_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L93_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L93_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L94_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(58))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(58,___L58_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L95_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___GOTO(___L95_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___DEF_GLBL(___L96_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___SET_R2(___R1)
   ___SET_R1(___LBL(52))
   ___POLL(59)
___DEF_SLBL(59,___L59_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack
#undef ___PH_LBL0
#define ___PH_LBL0 173
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
   ___IF_NARGS_EQ(0,___PUSH(___FAL) ___PUSH(___FAL) ___SET_R1(___FAL) ___SET_R2(___FAL) ___SET_R3(___FAL)
)
   ___GET_KEY(0,0,0,5,___SUB(373))
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
   ___SET_STK(1,___ALLOC_CLO(5UL))
   ___BEGIN_SETUP_CLO(5,___STK(1),3)
   ___ADD_CLO_ELEM(0,___R3)
   ___ADD_CLO_ELEM(1,___STK(-1))
   ___ADD_CLO_ELEM(2,___R1)
   ___ADD_CLO_ELEM(3,___STK(0))
   ___ADD_CLO_ELEM(4,___R2)
   ___END_SETUP_CLO(5)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
   ___ADJFP(-3)
   ___JUMP_CONTINUATION_CAPTURE1(___JUMPNOTSAFE)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(3,1,0,0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___KEY_dynamic_2d_environment_3f_)
   ___SET_STK(3,___CLO(___R4,2))
   ___SET_STK(4,___KEY_lexical_2d_environment_3f_)
   ___SET_STK(5,___CLO(___R4,4))
   ___SET_STK(6,___KEY_identifiers_3f_)
   ___SET_STK(7,___CLO(___R4,3))
   ___SET_STK(8,___KEY_locations_3f_)
   ___SET_R3(___CLO(___R4,1))
   ___SET_R1(___CLO(___R4,5))
   ___SET_R2(___KEY_depth)
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack)
   ___JUMPGLOSAFE(___SET_NARGS(11),15,___G_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace
#undef ___PH_LBL0
#define ___PH_LBL0 179
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
   ___IF_NARGS_EQ(0,___SET_R1(___FAL))
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,0,1,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
   ___SET_STK(1,___R1)
   ___SET_R1(___LBL(2))
   ___SET_R2(___STK(1))
   ___ADJFP(1)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
   ___ADJFP(-1)
   ___JUMP_CONTINUATION_CAPTURE2(___JUMPNOTSAFE)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(2,2,0,0)
   ___SET_STK(1,___R1)
   ___SET_R1(___R2)
   ___SET_R3(___FAL)
   ___SET_R2(___FAL)
   ___ADJFP(1)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace)
   ___JUMPGLOSAFE(___SET_NARGS(4),54,___G_jazz_3a_continuation_2d_backtrace)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_break
#undef ___PH_LBL0
#define ___PH_LBL0 184
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_break)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_break)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_break)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_break_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_break)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_break)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_break)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_inspect
#undef ___PH_LBL0
#define ___PH_LBL0 189
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_inspect_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_inspect)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_advise
#undef ___PH_LBL0
#define ___PH_LBL0 194
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_advise_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_advise)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise
#undef ___PH_LBL0
#define ___PH_LBL0 199
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_unadvise_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice
#undef ___PH_LBL0
#define ___PH_LBL0 204
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_debug_2d_advice_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice
#undef ___PH_LBL0
#define ___PH_LBL0 209
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_count_2d_advice_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice
#undef ___PH_LBL0
#define ___PH_LBL0 214
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_time_2d_advice_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_trace
#undef ___PH_LBL0
#define ___PH_LBL0 219
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_trace_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_trace)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_untrace
#undef ___PH_LBL0
#define ___PH_LBL0 224
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_untrace_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_untrace)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl
#undef ___PH_LBL0
#define ___PH_LBL0 229
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_start_2d_repl_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl
#undef ___PH_LBL0
#define ___PH_LBL0 234
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_start_2d_jazz_2d_repl_2d_internal)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),61,___G_jazz_3a_module_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,"bin:jazz.language.runtime.debug#",
___REF_SUB(0),12,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_,0,___REF_SUB(27),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,0,___REF_SUB(32),3,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,0,___REF_SUB(41),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port,0,___REF_SUB(56),2,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port,0,___REF_SUB(63),2,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,0,___REF_SUB(70),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log,0,___REF_SUB(81),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_,0,___REF_SUB(86),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,0,___REF_SUB(91),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_with_2d_console_2d_mutex,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,0,___REF_SUB(108),10,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,0,1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,0,___REF_SUB(133),10,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,0,1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console,0,___REF_SUB(157),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_console,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line,0,___REF_SUB(168),2,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string,0,___REF_SUB(175),2,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread,0,___REF_SUB(182),2,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,0,___REF_SUB(189),9,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,0,1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,0,___REF_SUB(210),3,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,0,___REF_SUB(220),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,0,___REF_SUB(237),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,0,___REF_SUB(250),60,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,6,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f07fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,3,4,0x3f7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,15,3,0x3f707fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f07fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x1ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x1ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f07fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,13,3,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,13,3,0x7ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,13,3,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x1ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0x1ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,3,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___OFD(___RETI,12,3,0x3f0ffL))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,0,___REF_SUB(374),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,5,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,___IFD(___RETI,3,4,0x3f0L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,___IFD(___RETI,3,4,0x3f0L))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,1,5)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,___IFD(___RETI,8,8,0x3fffL))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,0,___REF_SUB(387),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,___IFD(___RETI,1,4,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_break,0,___REF_SUB(398),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_break,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_break,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_break,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_break,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,0,___REF_SUB(409),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_advise,0,___REF_SUB(420),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_advise,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_advise,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_advise,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_advise,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,0,___REF_SUB(431),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,0,___REF_SUB(442),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,0,___REF_SUB(453),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,0,___REF_SUB(464),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_trace,0,___REF_SUB(475),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_trace,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_trace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_trace,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_trace,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,0,___REF_SUB(486),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,0,___REF_SUB(497),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,0,___REF_SUB(508),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,___IFD(___RETI,8,8,0x3f00L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f07fL)
,___DEF_OFD(___RETI,15,3)
               ___GCMAP1(0x3f707fL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f07fL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f07fL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
,___DEF_OFD(___RETI,12,3)
               ___GCMAP1(0x3f0ffL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_debug_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S__3a_console,":console")
___DEF_MOD_SYM(1,___S_advise,"advise")
___DEF_MOD_SYM(2,___S_advise_2d_internal,"advise-internal")
___DEF_MOD_SYM(3,___S_attached_2d_console_2d_port,"attached-console-port")
___DEF_MOD_SYM(4,___S_bin_3a_jazz_2e_language_2e_runtime_2e_debug,"bin:jazz.language.runtime.debug")

___DEF_MOD_SYM(5,___S_break,"break")
___DEF_MOD_SYM(6,___S_break_2d_internal,"break-internal")
___DEF_MOD_SYM(7,___S_cdr_5e_0,"cdr^0")
___DEF_MOD_SYM(8,___S_cdr_5e_1,"cdr^1")
___DEF_MOD_SYM(9,___S_cdr_5e_2,"cdr^2")
___DEF_MOD_SYM(10,___S_cdr_5e_3,"cdr^3")
___DEF_MOD_SYM(11,___S_clear_2d_debug,"clear-debug")
___DEF_MOD_SYM(12,___S_console,"console")
___DEF_MOD_SYM(13,___S_console_2d_clear_2d_set_21_,"console-clear-set!")
___DEF_MOD_SYM(14,___S_console_2d_input_2d_port,"console-input-port")
___DEF_MOD_SYM(15,___S_console_2d_line,"console-line")
___DEF_MOD_SYM(16,___S_console_2d_output_2d_port,"console-output-port")
___DEF_MOD_SYM(17,___S_console_2d_port_2d_getter_2d_set_21_,"console-port-getter-set!")
___DEF_MOD_SYM(18,___S_console_2d_string,"console-string")
___DEF_MOD_SYM(19,___S_cont,"cont")
___DEF_MOD_SYM(20,___S_continuation_2d_stack,"continuation-stack")
___DEF_MOD_SYM(21,___S_count_2d_advice,"count-advice")
___DEF_MOD_SYM(22,___S_count_2d_advice_2d_internal,"count-advice-internal")
___DEF_MOD_SYM(23,___S_current_2d_console_2d_port,"current-console-port")
___DEF_MOD_SYM(24,___S_debug,"debug")
___DEF_MOD_SYM(25,___S_debug_2d_advice,"debug-advice")
___DEF_MOD_SYM(26,___S_debug_2d_advice_2d_internal,"debug-advice-internal")
___DEF_MOD_SYM(27,___S_debug_2d_line,"debug-line")
___DEF_MOD_SYM(28,___S_debug_2d_string,"debug-string")
___DEF_MOD_SYM(29,___S_debug_2d_thread,"debug-thread")
___DEF_MOD_SYM(30,___S_depth,"depth")
___DEF_MOD_SYM(31,___S_dynamic_2d_environment_3f_,"dynamic-environment?")
___DEF_MOD_SYM(32,___S_execution_2d_backtrace,"execution-backtrace")
___DEF_MOD_SYM(33,___S_execution_2d_stack,"execution-stack")
___DEF_MOD_SYM(34,___S_force_2d_console,"force-console")
___DEF_MOD_SYM(35,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(36,___S_get_2d_continuation_2d_name,"get-continuation-name")
___DEF_MOD_SYM(37,___S_get_2d_procedure_2d_name,"get-procedure-name")
___DEF_MOD_SYM(38,___S_identifiers_3f_,"identifiers?")
___DEF_MOD_SYM(39,___S_inspect,"inspect")
___DEF_MOD_SYM(40,___S_inspect_2d_internal,"inspect-internal")
___DEF_MOD_SYM(41,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_MOD_SYM(42,___S_jazz_2e_dialect,"jazz.dialect")
___DEF_MOD_SYM(43,___S_jazz_2e_language_2e_runtime_2e_debug,"jazz.language.runtime.debug")
___DEF_MOD_SYM(44,___S_jazz_2e_language_2e_runtime_2e_debug_3a_advise,"jazz.language.runtime.debug:advise")

___DEF_MOD_SYM(45,___S_jazz_2e_language_2e_runtime_2e_debug_3a_attached_2d_console_2d_port,"jazz.language.runtime.debug:attached-console-port")

___DEF_MOD_SYM(46,___S_jazz_2e_language_2e_runtime_2e_debug_3a_break,"jazz.language.runtime.debug:break")

___DEF_MOD_SYM(47,___S_jazz_2e_language_2e_runtime_2e_debug_3a_clear_2d_debug,"jazz.language.runtime.debug:clear-debug")

___DEF_MOD_SYM(48,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console,"jazz.language.runtime.debug:console")

___DEF_MOD_SYM(49,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_clear_2d_set_21_,"jazz.language.runtime.debug:console-clear-set!")

___DEF_MOD_SYM(50,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_input_2d_port,"jazz.language.runtime.debug:console-input-port")

___DEF_MOD_SYM(51,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_line,"jazz.language.runtime.debug:console-line")

___DEF_MOD_SYM(52,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_output_2d_port,"jazz.language.runtime.debug:console-output-port")

___DEF_MOD_SYM(53,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_port_2d_getter_2d_set_21_,"jazz.language.runtime.debug:console-port-getter-set!")

___DEF_MOD_SYM(54,___S_jazz_2e_language_2e_runtime_2e_debug_3a_console_2d_string,"jazz.language.runtime.debug:console-string")

___DEF_MOD_SYM(55,___S_jazz_2e_language_2e_runtime_2e_debug_3a_continuation_2d_stack,"jazz.language.runtime.debug:continuation-stack")

___DEF_MOD_SYM(56,___S_jazz_2e_language_2e_runtime_2e_debug_3a_count_2d_advice,"jazz.language.runtime.debug:count-advice")

___DEF_MOD_SYM(57,___S_jazz_2e_language_2e_runtime_2e_debug_3a_current_2d_console_2d_port,"jazz.language.runtime.debug:current-console-port")

___DEF_MOD_SYM(58,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug,"jazz.language.runtime.debug:debug")

___DEF_MOD_SYM(59,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_advice,"jazz.language.runtime.debug:debug-advice")

___DEF_MOD_SYM(60,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_line,"jazz.language.runtime.debug:debug-line")

___DEF_MOD_SYM(61,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_string,"jazz.language.runtime.debug:debug-string")

___DEF_MOD_SYM(62,___S_jazz_2e_language_2e_runtime_2e_debug_3a_debug_2d_thread,"jazz.language.runtime.debug:debug-thread")

___DEF_MOD_SYM(63,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_backtrace,"jazz.language.runtime.debug:execution-backtrace")

___DEF_MOD_SYM(64,___S_jazz_2e_language_2e_runtime_2e_debug_3a_execution_2d_stack,"jazz.language.runtime.debug:execution-stack")

___DEF_MOD_SYM(65,___S_jazz_2e_language_2e_runtime_2e_debug_3a_force_2d_console,"jazz.language.runtime.debug:force-console")

___DEF_MOD_SYM(66,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_continuation_2d_name,"jazz.language.runtime.debug:get-continuation-name")

___DEF_MOD_SYM(67,___S_jazz_2e_language_2e_runtime_2e_debug_3a_get_2d_procedure_2d_name,"jazz.language.runtime.debug:get-procedure-name")

___DEF_MOD_SYM(68,___S_jazz_2e_language_2e_runtime_2e_debug_3a_inspect,"jazz.language.runtime.debug:inspect")

___DEF_MOD_SYM(69,___S_jazz_2e_language_2e_runtime_2e_debug_3a_set_2d_platform_2d_log,"jazz.language.runtime.debug:set-platform-log")

___DEF_MOD_SYM(70,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl,"jazz.language.runtime.debug:start-jazz-repl")

___DEF_MOD_SYM(71,___S_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_repl,"jazz.language.runtime.debug:start-repl")

___DEF_MOD_SYM(72,___S_jazz_2e_language_2e_runtime_2e_debug_3a_time_2d_advice,"jazz.language.runtime.debug:time-advice")

___DEF_MOD_SYM(73,___S_jazz_2e_language_2e_runtime_2e_debug_3a_trace,"jazz.language.runtime.debug:trace")

___DEF_MOD_SYM(74,___S_jazz_2e_language_2e_runtime_2e_debug_3a_unadvise,"jazz.language.runtime.debug:unadvise")

___DEF_MOD_SYM(75,___S_jazz_2e_language_2e_runtime_2e_debug_3a_untrace,"jazz.language.runtime.debug:untrace")

___DEF_MOD_SYM(76,___S_jazz_2e_language_2e_runtime_2e_format,"jazz.language.runtime.format")
___DEF_MOD_SYM(77,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_MOD_SYM(78,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_MOD_SYM(79,___S_lexical_2d_environment_3f_,"lexical-environment?")
___DEF_MOD_SYM(80,___S_line,"line")
___DEF_MOD_SYM(81,___S_location,"location")
___DEF_MOD_SYM(82,___S_locations_3f_,"locations?")
___DEF_MOD_SYM(83,___S_name,"name")
___DEF_MOD_SYM(84,___S_output,"output")
___DEF_MOD_SYM(85,___S_package_2d_variable,"package-variable")
___DEF_MOD_SYM(86,___S_package_2d_variables,"package-variables")
___DEF_MOD_SYM(87,___S_post_2d_event,"post-event")
___DEF_MOD_SYM(88,___S_procedure,"procedure")
___DEF_MOD_SYM(89,___S_protected,"protected")
___DEF_MOD_SYM(90,___S_rest,"rest")
___DEF_MOD_SYM(91,___S_set_2d_platform_2d_log,"set-platform-log")
___DEF_MOD_SYM(92,___S_start_2d_jazz_2d_repl,"start-jazz-repl")
___DEF_MOD_SYM(93,___S_start_2d_jazz_2d_repl_2d_internal,"start-jazz-repl-internal")
___DEF_MOD_SYM(94,___S_start_2d_repl,"start-repl")
___DEF_MOD_SYM(95,___S_start_2d_repl_2d_internal,"start-repl-internal")
___DEF_MOD_SYM(96,___S_str,"str")
___DEF_MOD_SYM(97,___S_string,"string")
___DEF_MOD_SYM(98,___S_temp_2e_16,"temp.16")
___DEF_MOD_SYM(99,___S_temp_2e_18,"temp.18")
___DEF_MOD_SYM(100,___S_temp_2e_28,"temp.28")
___DEF_MOD_SYM(101,___S_thunk,"thunk")
___DEF_MOD_SYM(102,___S_time_2d_advice,"time-advice")
___DEF_MOD_SYM(103,___S_time_2d_advice_2d_internal,"time-advice-internal")
___DEF_MOD_SYM(104,___S_trace,"trace")
___DEF_MOD_SYM(105,___S_trace_2d_internal,"trace-internal")
___DEF_MOD_SYM(106,___S_unadvise,"unadvise")
___DEF_MOD_SYM(107,___S_unadvise_2d_internal,"unadvise-internal")
___DEF_MOD_SYM(108,___S_untrace,"untrace")
___DEF_MOD_SYM(109,___S_untrace_2d_internal,"untrace-internal")
___DEF_MOD_SYM(110,___S_value,"value")
___DEF_MOD_SYM(111,___S_variable,"variable")
___DEF_MOD_SYM(112,___S_variables,"variables")
___DEF_MOD_SYM(113,___S_x_2e_19,"x.19")
___DEF_MOD_SYM(114,___S_x_2e_29,"x.29")
___DEF_MOD_KEY(0,___K_color,"color")
___DEF_MOD_KEY(1,___K_depth,"depth")
___DEF_MOD_KEY(2,___K_dynamic_2d_environment_3f_,"dynamic-environment?")
___DEF_MOD_KEY(3,___K_identifiers_3f_,"identifiers?")
___DEF_MOD_KEY(4,___K_lexical_2d_environment_3f_,"lexical-environment?")
___DEF_MOD_KEY(5,___K_locations_3f_,"locations?")
___DEF_MOD_KEY(6,___K_test,"test")
___END_MOD_SYM_KEY

#endif
