#ifdef ___LINKER_INFO
; File: "_foreign.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.foreign"
(("bin:jazz.foreign"))
(
"USE_CLASSIC_MACOS"
"USE_CreateThread"
"USE_DosStartTimer"
"USE_GetSystemTimeAsFileTime"
"USE_MsgWaitForMultipleObjects"
"USE_POSIX"
"USE_PUMPS"
"USE_QueryPerformanceCounter"
"USE_Sleep"
"USE_VInstall"
"USE_WIN32"
"USE_clock_gettime_monotonic"
"USE_clock_gettime_realtime"
"USE_dos_setvect"
"USE_ftime"
"USE_getclock"
"USE_gettimeofday"
"USE_mach_absolute_time"
"USE_nanosleep"
"USE_poll"
"USE_ppoll"
"USE_select"
"USE_setitimer"
"USE_sleep"
"USE_time"
"___USE_NO_THREAD_SYSTEM"
"___USE_POSIX_THREAD_SYSTEM"
"___USE_WIN32_THREAD_SYSTEM"
"__cplusplus"
"bin:jazz.foreign"
"c-feature?"
"c-features"
"cont"
"exc"
"exception"
"exit-value"
"foundation.dialect"
"g0"
"g2"
"jazz"
"jazz.foreign"
"jazz.foreign:c-feature?"
"jazz.foreign:c-features"
"jazz.foreign:with-callable"
"jazz.foreign:with-callback"
"name"
"port"
"public"
"result"
"thunk"
"with-callable"
"with-callback"
)
(
"test"
)
(
"bin:jazz.foreign#"
"jazz.foreign:c-features"
"jazz.foreign:callback-exception"
"jazz.foreign:current-callable"
"jazz.foreign:debug-non-callable-wrapped-callbacks?"
)
(
"jazz.foreign:c-feature?"
"jazz.foreign:with-callable"
"jazz.foreign:with-callback"
)
(
"##parameterize"
"call-with-output-file"
"display-continuation-backtrace"
"eq?"
"jazz.language.runtime.exception:capture-exception-context"
"jazz.language.runtime.exception:throw"
"jazz:catch-exception-filter"
"jazz:load-unit"
"jazz:quit"
"jazz:register-module"
"jazz:set-exit-callable"
"make-parameter"
"make-table"
"table-ref"
"table-set!"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.foreign"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_foreign
#define ___MH_PROC ___H_bin_3a_jazz_2e_foreign
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 52
#define ___KEYCOUNT 1
#define ___GLOCOUNT 23
#define ___SUPCOUNT 8
#define ___CNSCOUNT 10
#define ___SUBCOUNT 180
#define ___LBLCOUNT 87
#define ___OFDCOUNT 1
#define ___MODDESCR ___REF_SUB(179)
#include "gambit.h"

___NEED_SYM(___S_USE__CLASSIC__MACOS)
___NEED_SYM(___S_USE__CreateThread)
___NEED_SYM(___S_USE__DosStartTimer)
___NEED_SYM(___S_USE__GetSystemTimeAsFileTime)
___NEED_SYM(___S_USE__MsgWaitForMultipleObjects)
___NEED_SYM(___S_USE__POSIX)
___NEED_SYM(___S_USE__PUMPS)
___NEED_SYM(___S_USE__QueryPerformanceCounter)
___NEED_SYM(___S_USE__Sleep)
___NEED_SYM(___S_USE__VInstall)
___NEED_SYM(___S_USE__WIN32)
___NEED_SYM(___S_USE__clock__gettime__monotonic)
___NEED_SYM(___S_USE__clock__gettime__realtime)
___NEED_SYM(___S_USE__dos__setvect)
___NEED_SYM(___S_USE__ftime)
___NEED_SYM(___S_USE__getclock)
___NEED_SYM(___S_USE__gettimeofday)
___NEED_SYM(___S_USE__mach__absolute__time)
___NEED_SYM(___S_USE__nanosleep)
___NEED_SYM(___S_USE__poll)
___NEED_SYM(___S_USE__ppoll)
___NEED_SYM(___S_USE__select)
___NEED_SYM(___S_USE__setitimer)
___NEED_SYM(___S_USE__sleep)
___NEED_SYM(___S_USE__time)
___NEED_SYM(___S_______USE__NO__THREAD__SYSTEM)
___NEED_SYM(___S_______USE__POSIX__THREAD__SYSTEM)
___NEED_SYM(___S_______USE__WIN32__THREAD__SYSTEM)
___NEED_SYM(___S_____cplusplus)
___NEED_SYM(___S_bin_3a_jazz_2e_foreign)
___NEED_SYM(___S_c_2d_feature_3f_)
___NEED_SYM(___S_c_2d_features)
___NEED_SYM(___S_cont)
___NEED_SYM(___S_exc)
___NEED_SYM(___S_exception)
___NEED_SYM(___S_exit_2d_value)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_g0)
___NEED_SYM(___S_g2)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_foreign)
___NEED_SYM(___S_jazz_2e_foreign_3a_c_2d_feature_3f_)
___NEED_SYM(___S_jazz_2e_foreign_3a_c_2d_features)
___NEED_SYM(___S_jazz_2e_foreign_3a_with_2d_callable)
___NEED_SYM(___S_jazz_2e_foreign_3a_with_2d_callback)
___NEED_SYM(___S_name)
___NEED_SYM(___S_port)
___NEED_SYM(___S_public)
___NEED_SYM(___S_result)
___NEED_SYM(___S_thunk)
___NEED_SYM(___S_with_2d_callable)
___NEED_SYM(___S_with_2d_callback)

___NEED_KEY(___K_test)

___NEED_GLO(___G__23__23_parameterize)
___NEED_GLO(___G_bin_3a_jazz_2e_foreign_23_)
___NEED_GLO(___G_call_2d_with_2d_output_2d_file)
___NEED_GLO(___G_display_2d_continuation_2d_backtrace)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_jazz_2e_foreign_3a_c_2d_feature_3f_)
___NEED_GLO(___G_jazz_2e_foreign_3a_c_2d_features)
___NEED_GLO(___G_jazz_2e_foreign_3a_callback_2d_exception)
___NEED_GLO(___G_jazz_2e_foreign_3a_current_2d_callable)
___NEED_GLO(___G_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_)
___NEED_GLO(___G_jazz_2e_foreign_3a_with_2d_callable)
___NEED_GLO(___G_jazz_2e_foreign_3a_with_2d_callback)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_capture_2d_exception_2d_context)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
___NEED_GLO(___G_jazz_3a_catch_2d_exception_2d_filter)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_quit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_set_2d_exit_2d_callable)
___NEED_GLO(___G_make_2d_parameter)
___NEED_GLO(___G_make_2d_table)
___NEED_GLO(___G_table_2d_ref)
___NEED_GLO(___G_table_2d_set_21_)

___BEGIN_SYM
___DEF_SYM(0,___S_USE__CLASSIC__MACOS,"USE_CLASSIC_MACOS")
___DEF_SYM(1,___S_USE__CreateThread,"USE_CreateThread")
___DEF_SYM(2,___S_USE__DosStartTimer,"USE_DosStartTimer")
___DEF_SYM(3,___S_USE__GetSystemTimeAsFileTime,"USE_GetSystemTimeAsFileTime")
___DEF_SYM(4,___S_USE__MsgWaitForMultipleObjects,"USE_MsgWaitForMultipleObjects")

___DEF_SYM(5,___S_USE__POSIX,"USE_POSIX")
___DEF_SYM(6,___S_USE__PUMPS,"USE_PUMPS")
___DEF_SYM(7,___S_USE__QueryPerformanceCounter,"USE_QueryPerformanceCounter")
___DEF_SYM(8,___S_USE__Sleep,"USE_Sleep")
___DEF_SYM(9,___S_USE__VInstall,"USE_VInstall")
___DEF_SYM(10,___S_USE__WIN32,"USE_WIN32")
___DEF_SYM(11,___S_USE__clock__gettime__monotonic,"USE_clock_gettime_monotonic")
___DEF_SYM(12,___S_USE__clock__gettime__realtime,"USE_clock_gettime_realtime")
___DEF_SYM(13,___S_USE__dos__setvect,"USE_dos_setvect")
___DEF_SYM(14,___S_USE__ftime,"USE_ftime")
___DEF_SYM(15,___S_USE__getclock,"USE_getclock")
___DEF_SYM(16,___S_USE__gettimeofday,"USE_gettimeofday")
___DEF_SYM(17,___S_USE__mach__absolute__time,"USE_mach_absolute_time")
___DEF_SYM(18,___S_USE__nanosleep,"USE_nanosleep")
___DEF_SYM(19,___S_USE__poll,"USE_poll")
___DEF_SYM(20,___S_USE__ppoll,"USE_ppoll")
___DEF_SYM(21,___S_USE__select,"USE_select")
___DEF_SYM(22,___S_USE__setitimer,"USE_setitimer")
___DEF_SYM(23,___S_USE__sleep,"USE_sleep")
___DEF_SYM(24,___S_USE__time,"USE_time")
___DEF_SYM(25,___S_______USE__NO__THREAD__SYSTEM,"___USE_NO_THREAD_SYSTEM")
___DEF_SYM(26,___S_______USE__POSIX__THREAD__SYSTEM,"___USE_POSIX_THREAD_SYSTEM")
___DEF_SYM(27,___S_______USE__WIN32__THREAD__SYSTEM,"___USE_WIN32_THREAD_SYSTEM")
___DEF_SYM(28,___S_____cplusplus,"__cplusplus")
___DEF_SYM(29,___S_bin_3a_jazz_2e_foreign,"bin:jazz.foreign")
___DEF_SYM(30,___S_c_2d_feature_3f_,"c-feature?")
___DEF_SYM(31,___S_c_2d_features,"c-features")
___DEF_SYM(32,___S_cont,"cont")
___DEF_SYM(33,___S_exc,"exc")
___DEF_SYM(34,___S_exception,"exception")
___DEF_SYM(35,___S_exit_2d_value,"exit-value")
___DEF_SYM(36,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(37,___S_g0,"g0")
___DEF_SYM(38,___S_g2,"g2")
___DEF_SYM(39,___S_jazz,"jazz")
___DEF_SYM(40,___S_jazz_2e_foreign,"jazz.foreign")
___DEF_SYM(41,___S_jazz_2e_foreign_3a_c_2d_feature_3f_,"jazz.foreign:c-feature?")
___DEF_SYM(42,___S_jazz_2e_foreign_3a_c_2d_features,"jazz.foreign:c-features")
___DEF_SYM(43,___S_jazz_2e_foreign_3a_with_2d_callable,"jazz.foreign:with-callable")
___DEF_SYM(44,___S_jazz_2e_foreign_3a_with_2d_callback,"jazz.foreign:with-callback")
___DEF_SYM(45,___S_name,"name")
___DEF_SYM(46,___S_port,"port")
___DEF_SYM(47,___S_public,"public")
___DEF_SYM(48,___S_result,"result")
___DEF_SYM(49,___S_thunk,"thunk")
___DEF_SYM(50,___S_with_2d_callable,"with-callable")
___DEF_SYM(51,___S_with_2d_callback,"with-callback")
___END_SYM

#define ___SYM_USE__CLASSIC__MACOS ___SYM(0,___S_USE__CLASSIC__MACOS)
#define ___SYM_USE__CreateThread ___SYM(1,___S_USE__CreateThread)
#define ___SYM_USE__DosStartTimer ___SYM(2,___S_USE__DosStartTimer)
#define ___SYM_USE__GetSystemTimeAsFileTime ___SYM(3,___S_USE__GetSystemTimeAsFileTime)
#define ___SYM_USE__MsgWaitForMultipleObjects ___SYM(4,___S_USE__MsgWaitForMultipleObjects)
#define ___SYM_USE__POSIX ___SYM(5,___S_USE__POSIX)
#define ___SYM_USE__PUMPS ___SYM(6,___S_USE__PUMPS)
#define ___SYM_USE__QueryPerformanceCounter ___SYM(7,___S_USE__QueryPerformanceCounter)
#define ___SYM_USE__Sleep ___SYM(8,___S_USE__Sleep)
#define ___SYM_USE__VInstall ___SYM(9,___S_USE__VInstall)
#define ___SYM_USE__WIN32 ___SYM(10,___S_USE__WIN32)
#define ___SYM_USE__clock__gettime__monotonic ___SYM(11,___S_USE__clock__gettime__monotonic)
#define ___SYM_USE__clock__gettime__realtime ___SYM(12,___S_USE__clock__gettime__realtime)
#define ___SYM_USE__dos__setvect ___SYM(13,___S_USE__dos__setvect)
#define ___SYM_USE__ftime ___SYM(14,___S_USE__ftime)
#define ___SYM_USE__getclock ___SYM(15,___S_USE__getclock)
#define ___SYM_USE__gettimeofday ___SYM(16,___S_USE__gettimeofday)
#define ___SYM_USE__mach__absolute__time ___SYM(17,___S_USE__mach__absolute__time)
#define ___SYM_USE__nanosleep ___SYM(18,___S_USE__nanosleep)
#define ___SYM_USE__poll ___SYM(19,___S_USE__poll)
#define ___SYM_USE__ppoll ___SYM(20,___S_USE__ppoll)
#define ___SYM_USE__select ___SYM(21,___S_USE__select)
#define ___SYM_USE__setitimer ___SYM(22,___S_USE__setitimer)
#define ___SYM_USE__sleep ___SYM(23,___S_USE__sleep)
#define ___SYM_USE__time ___SYM(24,___S_USE__time)
#define ___SYM_______USE__NO__THREAD__SYSTEM ___SYM(25,___S_______USE__NO__THREAD__SYSTEM)
#define ___SYM_______USE__POSIX__THREAD__SYSTEM ___SYM(26,___S_______USE__POSIX__THREAD__SYSTEM)
#define ___SYM_______USE__WIN32__THREAD__SYSTEM ___SYM(27,___S_______USE__WIN32__THREAD__SYSTEM)
#define ___SYM_____cplusplus ___SYM(28,___S_____cplusplus)
#define ___SYM_bin_3a_jazz_2e_foreign ___SYM(29,___S_bin_3a_jazz_2e_foreign)
#define ___SYM_c_2d_feature_3f_ ___SYM(30,___S_c_2d_feature_3f_)
#define ___SYM_c_2d_features ___SYM(31,___S_c_2d_features)
#define ___SYM_cont ___SYM(32,___S_cont)
#define ___SYM_exc ___SYM(33,___S_exc)
#define ___SYM_exception ___SYM(34,___S_exception)
#define ___SYM_exit_2d_value ___SYM(35,___S_exit_2d_value)
#define ___SYM_foundation_2e_dialect ___SYM(36,___S_foundation_2e_dialect)
#define ___SYM_g0 ___SYM(37,___S_g0)
#define ___SYM_g2 ___SYM(38,___S_g2)
#define ___SYM_jazz ___SYM(39,___S_jazz)
#define ___SYM_jazz_2e_foreign ___SYM(40,___S_jazz_2e_foreign)
#define ___SYM_jazz_2e_foreign_3a_c_2d_feature_3f_ ___SYM(41,___S_jazz_2e_foreign_3a_c_2d_feature_3f_)
#define ___SYM_jazz_2e_foreign_3a_c_2d_features ___SYM(42,___S_jazz_2e_foreign_3a_c_2d_features)
#define ___SYM_jazz_2e_foreign_3a_with_2d_callable ___SYM(43,___S_jazz_2e_foreign_3a_with_2d_callable)
#define ___SYM_jazz_2e_foreign_3a_with_2d_callback ___SYM(44,___S_jazz_2e_foreign_3a_with_2d_callback)
#define ___SYM_name ___SYM(45,___S_name)
#define ___SYM_port ___SYM(46,___S_port)
#define ___SYM_public ___SYM(47,___S_public)
#define ___SYM_result ___SYM(48,___S_result)
#define ___SYM_thunk ___SYM(49,___S_thunk)
#define ___SYM_with_2d_callable ___SYM(50,___S_with_2d_callable)
#define ___SYM_with_2d_callback ___SYM(51,___S_with_2d_callback)

___BEGIN_KEY
___DEF_KEY(0,___K_test,"test")
___END_KEY

#define ___KEY_test ___KEY(0,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.foreign#")
___DEF_GLO(1,"jazz.foreign:c-feature?")
___DEF_GLO(2,"jazz.foreign:c-features")
___DEF_GLO(3,"jazz.foreign:callback-exception")
___DEF_GLO(4,"jazz.foreign:current-callable")
___DEF_GLO(5,"jazz.foreign:debug-non-callable-wrapped-callbacks?")

___DEF_GLO(6,"jazz.foreign:with-callable")
___DEF_GLO(7,"jazz.foreign:with-callback")
___DEF_GLO(8,"##parameterize")
___DEF_GLO(9,"call-with-output-file")
___DEF_GLO(10,"display-continuation-backtrace")
___DEF_GLO(11,"eq?")
___DEF_GLO(12,"jazz.language.runtime.exception:capture-exception-context")

___DEF_GLO(13,"jazz.language.runtime.exception:throw")

___DEF_GLO(14,"jazz:catch-exception-filter")
___DEF_GLO(15,"jazz:load-unit")
___DEF_GLO(16,"jazz:quit")
___DEF_GLO(17,"jazz:register-module")
___DEF_GLO(18,"jazz:set-exit-callable")
___DEF_GLO(19,"make-parameter")
___DEF_GLO(20,"make-table")
___DEF_GLO(21,"table-ref")
___DEF_GLO(22,"table-set!")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_foreign_23_ ___GLO(0,___G_bin_3a_jazz_2e_foreign_23_)
#define ___PRM_bin_3a_jazz_2e_foreign_23_ ___PRM(0,___G_bin_3a_jazz_2e_foreign_23_)
#define ___GLO_jazz_2e_foreign_3a_c_2d_feature_3f_ ___GLO(1,___G_jazz_2e_foreign_3a_c_2d_feature_3f_)
#define ___PRM_jazz_2e_foreign_3a_c_2d_feature_3f_ ___PRM(1,___G_jazz_2e_foreign_3a_c_2d_feature_3f_)
#define ___GLO_jazz_2e_foreign_3a_c_2d_features ___GLO(2,___G_jazz_2e_foreign_3a_c_2d_features)
#define ___PRM_jazz_2e_foreign_3a_c_2d_features ___PRM(2,___G_jazz_2e_foreign_3a_c_2d_features)
#define ___GLO_jazz_2e_foreign_3a_callback_2d_exception ___GLO(3,___G_jazz_2e_foreign_3a_callback_2d_exception)
#define ___PRM_jazz_2e_foreign_3a_callback_2d_exception ___PRM(3,___G_jazz_2e_foreign_3a_callback_2d_exception)
#define ___GLO_jazz_2e_foreign_3a_current_2d_callable ___GLO(4,___G_jazz_2e_foreign_3a_current_2d_callable)
#define ___PRM_jazz_2e_foreign_3a_current_2d_callable ___PRM(4,___G_jazz_2e_foreign_3a_current_2d_callable)
#define ___GLO_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_ ___GLO(5,___G_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_)
#define ___PRM_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_ ___PRM(5,___G_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_)
#define ___GLO_jazz_2e_foreign_3a_with_2d_callable ___GLO(6,___G_jazz_2e_foreign_3a_with_2d_callable)
#define ___PRM_jazz_2e_foreign_3a_with_2d_callable ___PRM(6,___G_jazz_2e_foreign_3a_with_2d_callable)
#define ___GLO_jazz_2e_foreign_3a_with_2d_callback ___GLO(7,___G_jazz_2e_foreign_3a_with_2d_callback)
#define ___PRM_jazz_2e_foreign_3a_with_2d_callback ___PRM(7,___G_jazz_2e_foreign_3a_with_2d_callback)
#define ___GLO__23__23_parameterize ___GLO(8,___G__23__23_parameterize)
#define ___PRM__23__23_parameterize ___PRM(8,___G__23__23_parameterize)
#define ___GLO_call_2d_with_2d_output_2d_file ___GLO(9,___G_call_2d_with_2d_output_2d_file)
#define ___PRM_call_2d_with_2d_output_2d_file ___PRM(9,___G_call_2d_with_2d_output_2d_file)
#define ___GLO_display_2d_continuation_2d_backtrace ___GLO(10,___G_display_2d_continuation_2d_backtrace)
#define ___PRM_display_2d_continuation_2d_backtrace ___PRM(10,___G_display_2d_continuation_2d_backtrace)
#define ___GLO_eq_3f_ ___GLO(11,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(11,___G_eq_3f_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_capture_2d_exception_2d_context ___GLO(12,___G_jazz_2e_language_2e_runtime_2e_exception_3a_capture_2d_exception_2d_context)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_capture_2d_exception_2d_context ___PRM(12,___G_jazz_2e_language_2e_runtime_2e_exception_3a_capture_2d_exception_2d_context)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_throw ___GLO(13,___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_throw ___PRM(13,___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
#define ___GLO_jazz_3a_catch_2d_exception_2d_filter ___GLO(14,___G_jazz_3a_catch_2d_exception_2d_filter)
#define ___PRM_jazz_3a_catch_2d_exception_2d_filter ___PRM(14,___G_jazz_3a_catch_2d_exception_2d_filter)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(15,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(15,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_quit ___GLO(16,___G_jazz_3a_quit)
#define ___PRM_jazz_3a_quit ___PRM(16,___G_jazz_3a_quit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(17,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(17,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_set_2d_exit_2d_callable ___GLO(18,___G_jazz_3a_set_2d_exit_2d_callable)
#define ___PRM_jazz_3a_set_2d_exit_2d_callable ___PRM(18,___G_jazz_3a_set_2d_exit_2d_callable)
#define ___GLO_make_2d_parameter ___GLO(19,___G_make_2d_parameter)
#define ___PRM_make_2d_parameter ___PRM(19,___G_make_2d_parameter)
#define ___GLO_make_2d_table ___GLO(20,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(20,___G_make_2d_table)
#define ___GLO_table_2d_ref ___GLO(21,___G_table_2d_ref)
#define ___PRM_table_2d_ref ___PRM(21,___G_table_2d_ref)
#define ___GLO_table_2d_set_21_ ___GLO(22,___G_table_2d_set_21_)
#define ___PRM_table_2d_set_21_ ___PRM(22,___G_table_2d_set_21_)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(30,___S_c_2d_feature_3f_),___REF_SYM(41,___S_jazz_2e_foreign_3a_c_2d_feature_3f_))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(31,___S_c_2d_features),___REF_SYM(42,___S_jazz_2e_foreign_3a_c_2d_features))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(50,___S_with_2d_callable),___REF_SYM(43,___S_jazz_2e_foreign_3a_with_2d_callable))
,___DEF_CNS(___REF_CNS(7),___REF_NUL)
,___DEF_CNS(___REF_SYM(51,___S_with_2d_callback),___REF_SYM(44,___S_jazz_2e_foreign_3a_with_2d_callback))
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X1,37UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131138))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(73))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(76))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(77))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(80))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(81))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(82))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(85))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(88))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(89))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(90))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(91))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(92))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(93))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(94))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(97))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(98))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(99))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(102))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(103))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(104))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(107))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(108))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(109))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(110))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(111))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(114))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(115))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(116))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(117))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131199))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(154))
               ___VEC0
___DEF_SUB_VEC(___X76,0UL)
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X78,4UL)
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(68))
               ___VEC0
___DEF_SUB_VEC(___X81,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131141))
               ___VEC0
___DEF_SUB_VEC(___X83,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131141))
               ___VEC0
___DEF_SUB_VEC(___X85,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131141))
               ___VEC0
___DEF_SUB_VEC(___X87,1UL)
               ___VEC1(___REF_SYM(45,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X89,11UL)
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_SUB(92))
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(110))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(134))
               ___VEC0
___DEF_SUB_VEC(___X92,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32772))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(589960))
               ___VEC0
___DEF_SUB_VEC(___X94,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32772))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(589960))
               ___VEC0
___DEF_SUB_VEC(___X96,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32772))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(589960))
               ___VEC0
___DEF_SUB_VEC(___X98,6UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_FIX(327686))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(655500))
               ___VEC0
___DEF_SUB_VEC(___X100,6UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(655501))
               ___VEC0
___DEF_SUB_VEC(___X102,6UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(655501))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(105))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(589960))
               ___VEC0
___DEF_SUB_VEC(___X106,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_FIX(294922))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(1179785))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(109))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(1179785))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(1179785))
               ___VEC0
___DEF_SUB_VEC(___X112,6UL)
               ___VEC1(___REF_SYM(49,___S_thunk))
               ___VEC1(___REF_SYM(45,___S_name))
               ___VEC1(___REF_SYM(37,___S_g0))
               ___VEC1(___REF_SYM(48,___S_result))
               ___VEC1(___REF_SYM(34,___S_exception))
               ___VEC1(___REF_CNS(8))
               ___VEC0
___DEF_SUB_STR(___X113,10UL)
               ___STR8(126,47,99,97,108,108,98,97)
               ___STR2(99,107)
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(178))
               ___VEC0
___DEF_SUB_VEC(___X115,31UL)
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(132))
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
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(154))
               ___VEC0
___DEF_SUB_VEC(___X118,8UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(327684))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(3342491))
               ___VEC0
___DEF_SUB_VEC(___X120,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(3342491))
               ___VEC0
___DEF_SUB_VEC(___X122,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262305))
               ___VEC0
___DEF_SUB_VEC(___X124,7UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131234))
               ___VEC0
___DEF_SUB_VEC(___X126,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131234))
               ___VEC0
___DEF_SUB_VEC(___X128,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131235))
               ___VEC0
___DEF_SUB_VEC(___X130,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131235))
               ___VEC0
___DEF_SUB_VEC(___X132,5UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(131235))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(135))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262315))
               ___VEC0
___DEF_SUB_VEC(___X136,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262315))
               ___VEC0
___DEF_SUB_VEC(___X138,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262315))
               ___VEC0
___DEF_SUB_VEC(___X140,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262315))
               ___VEC0
___DEF_SUB_VEC(___X142,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(32774))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262315))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(145))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262315))
               ___VEC0
___DEF_SUB_VEC(___X146,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_FIX(294920))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(524461))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(149))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(524461))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(524461))
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(153))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262313))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(155))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262308))
               ___VEC0
___DEF_SUB_VEC(___X156,3UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(393381))
               ___VEC0
___DEF_SUB_VEC(___X158,3UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(393381))
               ___VEC0
___DEF_SUB_VEC(___X160,3UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_FIX(65546))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(393383))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(163))
               ___VEC0
___DEF_SUB_VEC(___X163,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(393384))
               ___VEC0
___DEF_SUB_VEC(___X164,5UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(262300))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(167))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(393373))
               ___VEC0
___DEF_SUB_VEC(___X168,3UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(524446))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(171))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(655519))
               ___VEC0
___DEF_SUB_VEC(___X172,4UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(3735712))
               ___VEC0
___DEF_SUB_VEC(___X174,4UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(786592))
               ___VEC0
___DEF_SUB_VEC(___X176,4UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(40,___S_jazz_2e_foreign))
               ___VEC1(___REF_FIX(786592))
               ___VEC0
___DEF_SUB_VEC(___X178,8UL)
               ___VEC1(___REF_SYM(49,___S_thunk))
               ___VEC1(___REF_SYM(35,___S_exit_2d_value))
               ___VEC1(___REF_SYM(45,___S_name))
               ___VEC1(___REF_SYM(38,___S_g2))
               ___VEC1(___REF_CNS(9))
               ___VEC1(___REF_SYM(33,___S_exc))
               ___VEC1(___REF_SYM(46,___S_port))
               ___VEC1(___REF_SYM(32,___S_cont))
               ___VEC0
___DEF_SUB_VEC(___X179,5UL)
               ___VEC1(___REF_SYM(29,___S_bin_3a_jazz_2e_foreign))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L35_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL(___L36_bin_3a_jazz_2e_foreign_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_M_HLBL(___L1_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_M_HLBL(___L2_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_M_HLBL(___L3_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L1_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L2_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L3_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L4_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L5_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L6_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L7_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L8_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L9_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL(___L10_jazz_2e_foreign_3a_with_2d_callable)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L1_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L2_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L3_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L4_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L5_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L6_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L7_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L8_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L9_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L10_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L11_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L12_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L13_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L14_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L15_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L16_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L17_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L18_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L19_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L20_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L21_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L22_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L23_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L24_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L25_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L26_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L27_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L28_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L29_jazz_2e_foreign_3a_with_2d_callback)
___DEF_M_HLBL(___L30_jazz_2e_foreign_3a_with_2d_callback)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_foreign_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L35_bin_3a_jazz_2e_foreign_23_)
___DEF_P_HLBL(___L36_bin_3a_jazz_2e_foreign_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_foreign_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_foreign_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_foreign_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_foreign_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_foreign_23_)
   ___SET_STK(1,___SYM_jazz_2e_foreign)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),17,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_foreign_23_)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),20,___G_make_2d_table)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_foreign_23_)
   ___SET_GLO(2,___G_jazz_2e_foreign_3a_c_2d_features,___R1)
   ___SET_GLO(1,___G_jazz_2e_foreign_3a_c_2d_feature_3f_,___PRC(39))
{ ___SCMOBJ ___RESULT;
#ifdef __cplusplus
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_____cplusplus)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_POSIX
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__POSIX)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_WIN32
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__WIN32)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef ___USE_POSIX_THREAD_SYSTEM
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_______USE__POSIX__THREAD__SYSTEM)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef ___USE_WIN32_THREAD_SYSTEM
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_______USE__WIN32__THREAD__SYSTEM)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef ___USE_NO_THREAD_SYSTEM
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_______USE__NO__THREAD__SYSTEM)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_PUMPS
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__PUMPS)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_clock_gettime_realtime
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__clock__gettime__realtime)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_getclock
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__getclock)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_GetSystemTimeAsFileTime
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__GetSystemTimeAsFileTime)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_gettimeofday
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__gettimeofday)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_ftime
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__ftime)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_time
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__time)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_CLASSIC_MACOS
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__CLASSIC__MACOS)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_mach_absolute_time
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__mach__absolute__time)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_QueryPerformanceCounter
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__QueryPerformanceCounter)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_clock_gettime_monotonic
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__clock__gettime__monotonic)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_nanosleep
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__nanosleep)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_Sleep
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__Sleep)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_sleep
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__sleep)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_setitimer
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__setitimer)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_dos_setvect
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__dos__setvect)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_DosStartTimer
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__DosStartTimer)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_VInstall
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__VInstall)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_CreateThread
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__CreateThread)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(30))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_MsgWaitForMultipleObjects
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__MsgWaitForMultipleObjects)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(31))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_poll
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__poll)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(32))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_ppoll
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__ppoll)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(33))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_foreign_23_)
{ ___SCMOBJ ___RESULT;
#ifdef USE_select
___RESULT = ___TRU;
#else
___RESULT = ___FAL;
#endif

   ___SET_R3(___RESULT)
}
   ___SET_R2(___SYM_USE__select)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___SET_R0(___LBL(34))
   ___JUMPGLOSAFE(___SET_NARGS(3),22,___G_table_2d_set_21_)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_foreign_23_)
   ___SET_R1(___FAL)
   ___SET_R0(___LBL(35))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_make_2d_parameter)
___DEF_SLBL(35,___L35_bin_3a_jazz_2e_foreign_23_)
   ___SET_GLO(4,___G_jazz_2e_foreign_3a_current_2d_callable,___R1)
   ___SET_GLO(3,___G_jazz_2e_foreign_3a_callback_2d_exception,___FAL)
   ___SET_GLO(6,___G_jazz_2e_foreign_3a_with_2d_callable,___PRC(44))
   ___SET_GLO(5,___G_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_,___FAL)
   ___SET_GLO(7,___G_jazz_2e_foreign_3a_with_2d_callback,___PRC(56))
   ___SET_R1(___VOID)
   ___POLL(36)
___DEF_SLBL(36,___L36_bin_3a_jazz_2e_foreign_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_foreign_3a_c_2d_feature_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_P_HLBL(___L1_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_P_HLBL(___L2_jazz_2e_foreign_3a_c_2d_feature_3f_)
___DEF_P_HLBL(___L3_jazz_2e_foreign_3a_c_2d_feature_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_foreign_3a_c_2d_feature_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_foreign_3a_c_2d_feature_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_foreign_3a_c_2d_features)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_foreign_3a_c_2d_feature_3f_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),21,___G_table_2d_ref)
___DEF_SLBL(2,___L2_jazz_2e_foreign_3a_c_2d_feature_3f_)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_foreign_3a_c_2d_feature_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_foreign_3a_with_2d_callable
#undef ___PH_LBL0
#define ___PH_LBL0 44
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L1_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L2_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L3_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L4_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L5_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L6_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L7_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L8_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L9_jazz_2e_foreign_3a_with_2d_callable)
___DEF_P_HLBL(___L10_jazz_2e_foreign_3a_with_2d_callable)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_foreign_3a_with_2d_callable)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_foreign_3a_with_2d_callable)
   ___SET_GLO(3,___G_jazz_2e_foreign_3a_callback_2d_exception,___FAL)
   ___SET_STK(1,___GLO_jazz_2e_foreign_3a_current_2d_callable)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R1)
   ___SET_STK(4,___R2)
   ___SET_STK(5,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(5),7)
   ___ADD_CLO_ELEM(0,___R2)
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(5))
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_foreign_3a_with_2d_callable)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_foreign_3a_with_2d_callable)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),8,___G__23__23_parameterize)
___DEF_SLBL(3,___L3_jazz_2e_foreign_3a_with_2d_callable)
   ___SET_STK(-7,___GLO_jazz_2e_foreign_3a_callback_2d_exception)
   ___SET_GLO(3,___G_jazz_2e_foreign_3a_callback_2d_exception,___FAL)
   ___IF(___NOTFALSEP(___STK(-7)))
   ___GOTO(___L11_jazz_2e_foreign_3a_with_2d_callable)
   ___END_IF
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_foreign_3a_with_2d_callable)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L11_jazz_2e_foreign_3a_with_2d_callable)
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-7))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),13,___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
___DEF_SLBL(5,___L5_jazz_2e_foreign_3a_with_2d_callable)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_foreign_3a_with_2d_callable)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_SLBL(7,___L7_jazz_2e_foreign_3a_with_2d_callable)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(7,0,0,0)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_foreign_3a_with_2d_callable)
   ___SET_R0(___LBL(9))
   ___JUMPGENSAFE(___SET_NARGS(0),___CLO(___R4,1))
___DEF_SLBL(9,___L9_jazz_2e_foreign_3a_with_2d_callable)
   ___POLL(10)
___DEF_SLBL(10,___L10_jazz_2e_foreign_3a_with_2d_callable)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_foreign_3a_with_2d_callback
#undef ___PH_LBL0
#define ___PH_LBL0 56
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L1_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L2_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L3_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L4_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L5_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L6_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L7_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L8_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L9_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L10_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L11_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L12_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L13_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L14_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L15_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L16_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L17_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L18_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L19_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L20_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L21_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L22_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L23_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L24_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L25_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L26_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L27_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L28_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L29_jazz_2e_foreign_3a_with_2d_callback)
___DEF_P_HLBL(___L30_jazz_2e_foreign_3a_with_2d_callback)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_2e_foreign_3a_with_2d_callback)
   ___IF(___NOT(___NOTFALSEP(___GLO_jazz_2e_foreign_3a_debug_2d_non_2d_callable_2d_wrapped_2d_callbacks_3f_)))
   ___GOTO(___L31_jazz_2e_foreign_3a_with_2d_callback)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),4,___G_jazz_2e_foreign_3a_current_2d_callable)
___DEF_SLBL(2,___L2_jazz_2e_foreign_3a_with_2d_callback)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L32_jazz_2e_foreign_3a_with_2d_callback)
   ___END_IF
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___GOTO(___L31_jazz_2e_foreign_3a_with_2d_callback)
___DEF_SLBL(3,___L3_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L31_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___FAL)
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_3a_set_2d_exit_2d_callable)
___DEF_SLBL(5,___L5_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_STK(-3,___LBL(19))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),18)
   ___ADD_CLO_ELEM(0,___STK(-5))
   ___END_SETUP_CLO(1)
   ___SET_STK(-1,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-1),9)
   ___ADD_CLO_ELEM(0,___STK(-4))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(-1))
   ___SET_R2(___STK(-2))
   ___SET_R1(___STK(-3))
   ___SET_R0(___LBL(7))
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_jazz_2e_foreign_3a_with_2d_callback)
   ___JUMPGLOSAFE(___SET_NARGS(3),14,___G_jazz_3a_catch_2d_exception_2d_filter)
___DEF_SLBL(7,___L7_jazz_2e_foreign_3a_with_2d_callback)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_foreign_3a_with_2d_callback)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(9,___L9_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(9,0,0,0)
   ___SET_STK(1,___GLO_jazz_2e_foreign_3a_current_2d_callable)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(3),14)
   ___ADD_CLO_ELEM(0,___CLO(___R4,1))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(3))
   ___SET_R1(___STK(1))
   ___SET_R2(___FAL)
   ___ADJFP(8)
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_jazz_2e_foreign_3a_with_2d_callback)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(3),8,___G__23__23_parameterize)
___DEF_SLBL(12,___L12_jazz_2e_foreign_3a_with_2d_callback)
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_foreign_3a_with_2d_callback)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_SLBL(14,___L14_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(14,0,0,0)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(15)
___DEF_SLBL(15,___L15_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(16))
   ___JUMPGENSAFE(___SET_NARGS(0),___CLO(___R4,1))
___DEF_SLBL(16,___L16_jazz_2e_foreign_3a_with_2d_callback)
   ___POLL(17)
___DEF_SLBL(17,___L17_jazz_2e_foreign_3a_with_2d_callback)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(18,___L18_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(18,1,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(19,___L19_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(19,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(20)
___DEF_SLBL(20,___L20_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_jazz_2e_language_2e_runtime_2e_exception_3a_capture_2d_exception_2d_context)
___DEF_SLBL(21,___L21_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_GLO(3,___G_jazz_2e_foreign_3a_callback_2d_exception,___STK(-6))
   ___SET_R1(___TRU)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_3a_set_2d_exit_2d_callable)
___DEF_SLBL(22,___L22_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R1(___TRU)
   ___POLL(23)
___DEF_SLBL(23,___L23_jazz_2e_foreign_3a_with_2d_callback)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L32_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R2(___LBL(25))
   ___SET_R1(___SUB(113))
   ___SET_R0(___LBL(24))
   ___JUMPPRM(___SET_NARGS(2),___PRM_call_2d_with_2d_output_2d_file)
___DEF_SLBL(24,___L24_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(0),16,___G_jazz_3a_quit)
___DEF_SLBL(25,___L25_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(25,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___LBL(27))
   ___SET_R2(___STK(2))
   ___SET_R0(___LBL(26))
   ___ADJFP(8)
   ___JUMP_CONTINUATION_CAPTURE2(___JUMPNOTSAFE)
___DEF_SLBL(26,___L26_jazz_2e_foreign_3a_with_2d_callback)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(27,___L27_jazz_2e_foreign_3a_with_2d_callback)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(27,2,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___R1)
   ___SET_STK(10,___R2)
   ___SET_STK(11,___TRU)
   ___SET_R3(___FIX(100L))
   ___SET_R2(___FIX(100L))
   ___SET_R1(___FAL)
   ___ADJFP(11)
   ___POLL(28)
___DEF_SLBL(28,___L28_jazz_2e_foreign_3a_with_2d_callback)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(6),10,___G_display_2d_continuation_2d_backtrace)
___DEF_SLBL(29,___L29_jazz_2e_foreign_3a_with_2d_callback)
   ___POLL(30)
___DEF_SLBL(30,___L30_jazz_2e_foreign_3a_with_2d_callback)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_foreign_23_,"bin:jazz.foreign#",___REF_SUB(0),37,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_foreign_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_foreign_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_foreign_3a_c_2d_feature_3f_,0,___REF_SUB(77),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_c_2d_feature_3f_,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_c_2d_feature_3f_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_c_2d_feature_3f_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_c_2d_feature_3f_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_foreign_3a_with_2d_callable,0,___REF_SUB(88),11,0)
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callable,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETN,5,1,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETN,5,1,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETI,8,1,0x3f1fL))
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callable,0,1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callable,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_foreign_3a_with_2d_callback,0,___REF_SUB(114),31,0)
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,3,-1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f3fL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,0,1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,0,1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,1,1)
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_PROC(___H_jazz_2e_foreign_3a_with_2d_callback,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___OFD(___RETI,11,0,0x3f707L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_foreign_3a_with_2d_callback,___IFD(___RETI,8,0,0x3f07L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,11,0)
               ___GCMAP1(0x3f707L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_foreign_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_foreign_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_USE__CLASSIC__MACOS,"USE_CLASSIC_MACOS")
___DEF_MOD_SYM(1,___S_USE__CreateThread,"USE_CreateThread")
___DEF_MOD_SYM(2,___S_USE__DosStartTimer,"USE_DosStartTimer")
___DEF_MOD_SYM(3,___S_USE__GetSystemTimeAsFileTime,"USE_GetSystemTimeAsFileTime")
___DEF_MOD_SYM(4,___S_USE__MsgWaitForMultipleObjects,"USE_MsgWaitForMultipleObjects")

___DEF_MOD_SYM(5,___S_USE__POSIX,"USE_POSIX")
___DEF_MOD_SYM(6,___S_USE__PUMPS,"USE_PUMPS")
___DEF_MOD_SYM(7,___S_USE__QueryPerformanceCounter,"USE_QueryPerformanceCounter")
___DEF_MOD_SYM(8,___S_USE__Sleep,"USE_Sleep")
___DEF_MOD_SYM(9,___S_USE__VInstall,"USE_VInstall")
___DEF_MOD_SYM(10,___S_USE__WIN32,"USE_WIN32")
___DEF_MOD_SYM(11,___S_USE__clock__gettime__monotonic,"USE_clock_gettime_monotonic")
___DEF_MOD_SYM(12,___S_USE__clock__gettime__realtime,"USE_clock_gettime_realtime")
___DEF_MOD_SYM(13,___S_USE__dos__setvect,"USE_dos_setvect")
___DEF_MOD_SYM(14,___S_USE__ftime,"USE_ftime")
___DEF_MOD_SYM(15,___S_USE__getclock,"USE_getclock")
___DEF_MOD_SYM(16,___S_USE__gettimeofday,"USE_gettimeofday")
___DEF_MOD_SYM(17,___S_USE__mach__absolute__time,"USE_mach_absolute_time")
___DEF_MOD_SYM(18,___S_USE__nanosleep,"USE_nanosleep")
___DEF_MOD_SYM(19,___S_USE__poll,"USE_poll")
___DEF_MOD_SYM(20,___S_USE__ppoll,"USE_ppoll")
___DEF_MOD_SYM(21,___S_USE__select,"USE_select")
___DEF_MOD_SYM(22,___S_USE__setitimer,"USE_setitimer")
___DEF_MOD_SYM(23,___S_USE__sleep,"USE_sleep")
___DEF_MOD_SYM(24,___S_USE__time,"USE_time")
___DEF_MOD_SYM(25,___S_______USE__NO__THREAD__SYSTEM,"___USE_NO_THREAD_SYSTEM")
___DEF_MOD_SYM(26,___S_______USE__POSIX__THREAD__SYSTEM,"___USE_POSIX_THREAD_SYSTEM")
___DEF_MOD_SYM(27,___S_______USE__WIN32__THREAD__SYSTEM,"___USE_WIN32_THREAD_SYSTEM")
___DEF_MOD_SYM(28,___S_____cplusplus,"__cplusplus")
___DEF_MOD_SYM(29,___S_bin_3a_jazz_2e_foreign,"bin:jazz.foreign")
___DEF_MOD_SYM(30,___S_c_2d_feature_3f_,"c-feature?")
___DEF_MOD_SYM(31,___S_c_2d_features,"c-features")
___DEF_MOD_SYM(32,___S_cont,"cont")
___DEF_MOD_SYM(33,___S_exc,"exc")
___DEF_MOD_SYM(34,___S_exception,"exception")
___DEF_MOD_SYM(35,___S_exit_2d_value,"exit-value")
___DEF_MOD_SYM(36,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(37,___S_g0,"g0")
___DEF_MOD_SYM(38,___S_g2,"g2")
___DEF_MOD_SYM(39,___S_jazz,"jazz")
___DEF_MOD_SYM(40,___S_jazz_2e_foreign,"jazz.foreign")
___DEF_MOD_SYM(41,___S_jazz_2e_foreign_3a_c_2d_feature_3f_,"jazz.foreign:c-feature?")
___DEF_MOD_SYM(42,___S_jazz_2e_foreign_3a_c_2d_features,"jazz.foreign:c-features")
___DEF_MOD_SYM(43,___S_jazz_2e_foreign_3a_with_2d_callable,"jazz.foreign:with-callable")
___DEF_MOD_SYM(44,___S_jazz_2e_foreign_3a_with_2d_callback,"jazz.foreign:with-callback")
___DEF_MOD_SYM(45,___S_name,"name")
___DEF_MOD_SYM(46,___S_port,"port")
___DEF_MOD_SYM(47,___S_public,"public")
___DEF_MOD_SYM(48,___S_result,"result")
___DEF_MOD_SYM(49,___S_thunk,"thunk")
___DEF_MOD_SYM(50,___S_with_2d_callable,"with-callable")
___DEF_MOD_SYM(51,___S_with_2d_callback,"with-callback")
___DEF_MOD_KEY(0,___K_test,"test")
___END_MOD_SYM_KEY

#endif
