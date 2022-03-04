#ifdef ___LINKER_INFO
; File: "_profiler.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:profiler"
(("bin:profiler"))
(
"active-profile"
"bin:profiler"
"default-profile"
"default-profiler-depth"
"find-profile"
"find-selected-profile"
"find/new-profile"
"foundation.dialect"
"get-current-profile"
"get-profile-names"
"get-profiles"
"get-selected-profile"
"jazz"
"make-profile-call"
"make-profiler"
"new-profile"
"process-statistics"
"profile-call-count"
"profile-call-count-set!"
"profile-call-duration"
"profile-call-duration-set!"
"profile-calls"
"profile-calls-count"
"profile-calls-count-set!"
"profile-calls-duration"
"profile-calls-duration-set!"
"profile-calls-set!"
"profile-depth"
"profile-frames"
"profile-frames-count"
"profile-frames-count-set!"
"profile-frames-duration"
"profile-frames-duration-set!"
"profile-label"
"profile-process-info"
"profile-process-start-info"
"profile-process-start-info-set!"
"profile-process-stop-info"
"profile-process-stop-info-set!"
"profile-profiler"
"profile-register-call"
"profile-running?"
"profiler"
"profiler-default-depth"
"profiler-ignore-module"
"profiler-ignore-procedure"
"profiler-module-ignore?"
"profiler-on?"
"profiler-procedure-ignore?"
"profiler-real-time"
"profiler-real-time-set!"
"profiler-type"
"profiler.implementation"
"profiler:active-profile"
"profiler:default-profile"
"profiler:default-profiler-depth"
"profiler:find-profile"
"profiler:find-selected-profile"
"profiler:find/new-profile"
"profiler:get-current-profile"
"profiler:get-profile-names"
"profiler:get-profiles"
"profiler:get-selected-profile"
"profiler:make-profile-call"
"profiler:make-profiler"
"profiler:new-profile"
"profiler:process-statistics"
"profiler:profile-call-count"
"profiler:profile-call-count-set!"
"profiler:profile-call-duration"
"profiler:profile-call-duration-set!"
"profiler:profile-calls"
"profiler:profile-calls-count"
"profiler:profile-calls-count-set!"
"profiler:profile-calls-duration"
"profiler:profile-calls-duration-set!"
"profiler:profile-calls-set!"
"profiler:profile-depth"
"profiler:profile-frames"
"profiler:profile-frames-count"
"profiler:profile-frames-count-set!"
"profiler:profile-frames-duration"
"profiler:profile-frames-duration-set!"
"profiler:profile-label"
"profiler:profile-process-info"
"profiler:profile-process-start-info"
"profiler:profile-process-start-info-set!"
"profiler:profile-process-stop-info"
"profiler:profile-process-stop-info-set!"
"profiler:profile-profiler"
"profiler:profile-register-call"
"profiler:profile-running?"
"profiler:profiler-default-depth"
"profiler:profiler-ignore-module"
"profiler:profiler-ignore-procedure"
"profiler:profiler-module-ignore?"
"profiler:profiler-on?"
"profiler:profiler-procedure-ignore?"
"profiler:profiler-real-time"
"profiler:profiler-real-time-set!"
"profiler:profiler-type"
"profiler:register-profile"
"profiler:reset-profile"
"profiler:reset-profiles"
"profiler:set-selected-profile"
"profiler:start-profiler"
"profiler:stop-profiler"
"profiler:unregister-profile"
"profiler:with-profile"
"profiler:with-profiling"
"public"
"register-profile"
"reset-profile"
"reset-profiles"
"set-selected-profile"
"start-profiler"
"stop-profiler"
"unregister-profile"
"with-profile"
"with-profiling"
)
(
)
(
"bin:profiler#"
)
(
)
(
"jazz:load-unit"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:profiler"
#define ___LINKER_ID ___LNK_bin_3a_profiler
#define ___MH_PROC ___H_bin_3a_profiler
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 120
#define ___GLOCOUNT 3
#define ___SUPCOUNT 1
#define ___CNSCOUNT 114
#define ___SUBCOUNT 18
#define ___LBLCOUNT 8
#define ___MODDESCR ___REF_SUB(17)
#include "gambit.h"

___NEED_SYM(___S_active_2d_profile)
___NEED_SYM(___S_bin_3a_profiler)
___NEED_SYM(___S_default_2d_profile)
___NEED_SYM(___S_default_2d_profiler_2d_depth)
___NEED_SYM(___S_find_2d_profile)
___NEED_SYM(___S_find_2d_selected_2d_profile)
___NEED_SYM(___S_find_2f_new_2d_profile)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_current_2d_profile)
___NEED_SYM(___S_get_2d_profile_2d_names)
___NEED_SYM(___S_get_2d_profiles)
___NEED_SYM(___S_get_2d_selected_2d_profile)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_make_2d_profile_2d_call)
___NEED_SYM(___S_make_2d_profiler)
___NEED_SYM(___S_new_2d_profile)
___NEED_SYM(___S_process_2d_statistics)
___NEED_SYM(___S_profile_2d_call_2d_count)
___NEED_SYM(___S_profile_2d_call_2d_count_2d_set_21_)
___NEED_SYM(___S_profile_2d_call_2d_duration)
___NEED_SYM(___S_profile_2d_call_2d_duration_2d_set_21_)
___NEED_SYM(___S_profile_2d_calls)
___NEED_SYM(___S_profile_2d_calls_2d_count)
___NEED_SYM(___S_profile_2d_calls_2d_count_2d_set_21_)
___NEED_SYM(___S_profile_2d_calls_2d_duration)
___NEED_SYM(___S_profile_2d_calls_2d_duration_2d_set_21_)
___NEED_SYM(___S_profile_2d_calls_2d_set_21_)
___NEED_SYM(___S_profile_2d_depth)
___NEED_SYM(___S_profile_2d_frames)
___NEED_SYM(___S_profile_2d_frames_2d_count)
___NEED_SYM(___S_profile_2d_frames_2d_count_2d_set_21_)
___NEED_SYM(___S_profile_2d_frames_2d_duration)
___NEED_SYM(___S_profile_2d_frames_2d_duration_2d_set_21_)
___NEED_SYM(___S_profile_2d_label)
___NEED_SYM(___S_profile_2d_process_2d_info)
___NEED_SYM(___S_profile_2d_process_2d_start_2d_info)
___NEED_SYM(___S_profile_2d_process_2d_start_2d_info_2d_set_21_)
___NEED_SYM(___S_profile_2d_process_2d_stop_2d_info)
___NEED_SYM(___S_profile_2d_process_2d_stop_2d_info_2d_set_21_)
___NEED_SYM(___S_profile_2d_profiler)
___NEED_SYM(___S_profile_2d_register_2d_call)
___NEED_SYM(___S_profile_2d_running_3f_)
___NEED_SYM(___S_profiler)
___NEED_SYM(___S_profiler_2d_default_2d_depth)
___NEED_SYM(___S_profiler_2d_ignore_2d_module)
___NEED_SYM(___S_profiler_2d_ignore_2d_procedure)
___NEED_SYM(___S_profiler_2d_module_2d_ignore_3f_)
___NEED_SYM(___S_profiler_2d_on_3f_)
___NEED_SYM(___S_profiler_2d_procedure_2d_ignore_3f_)
___NEED_SYM(___S_profiler_2d_real_2d_time)
___NEED_SYM(___S_profiler_2d_real_2d_time_2d_set_21_)
___NEED_SYM(___S_profiler_2d_type)
___NEED_SYM(___S_profiler_2e_implementation)
___NEED_SYM(___S_profiler_3a_active_2d_profile)
___NEED_SYM(___S_profiler_3a_default_2d_profile)
___NEED_SYM(___S_profiler_3a_default_2d_profiler_2d_depth)
___NEED_SYM(___S_profiler_3a_find_2d_profile)
___NEED_SYM(___S_profiler_3a_find_2d_selected_2d_profile)
___NEED_SYM(___S_profiler_3a_find_2f_new_2d_profile)
___NEED_SYM(___S_profiler_3a_get_2d_current_2d_profile)
___NEED_SYM(___S_profiler_3a_get_2d_profile_2d_names)
___NEED_SYM(___S_profiler_3a_get_2d_profiles)
___NEED_SYM(___S_profiler_3a_get_2d_selected_2d_profile)
___NEED_SYM(___S_profiler_3a_make_2d_profile_2d_call)
___NEED_SYM(___S_profiler_3a_make_2d_profiler)
___NEED_SYM(___S_profiler_3a_new_2d_profile)
___NEED_SYM(___S_profiler_3a_process_2d_statistics)
___NEED_SYM(___S_profiler_3a_profile_2d_call_2d_count)
___NEED_SYM(___S_profiler_3a_profile_2d_call_2d_count_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_call_2d_duration)
___NEED_SYM(___S_profiler_3a_profile_2d_call_2d_duration_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_calls)
___NEED_SYM(___S_profiler_3a_profile_2d_calls_2d_count)
___NEED_SYM(___S_profiler_3a_profile_2d_calls_2d_count_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_calls_2d_duration)
___NEED_SYM(___S_profiler_3a_profile_2d_calls_2d_duration_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_calls_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_depth)
___NEED_SYM(___S_profiler_3a_profile_2d_frames)
___NEED_SYM(___S_profiler_3a_profile_2d_frames_2d_count)
___NEED_SYM(___S_profiler_3a_profile_2d_frames_2d_count_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_frames_2d_duration)
___NEED_SYM(___S_profiler_3a_profile_2d_frames_2d_duration_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_label)
___NEED_SYM(___S_profiler_3a_profile_2d_process_2d_info)
___NEED_SYM(___S_profiler_3a_profile_2d_process_2d_start_2d_info)
___NEED_SYM(___S_profiler_3a_profile_2d_process_2d_start_2d_info_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_process_2d_stop_2d_info)
___NEED_SYM(___S_profiler_3a_profile_2d_process_2d_stop_2d_info_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profile_2d_profiler)
___NEED_SYM(___S_profiler_3a_profile_2d_register_2d_call)
___NEED_SYM(___S_profiler_3a_profile_2d_running_3f_)
___NEED_SYM(___S_profiler_3a_profiler_2d_default_2d_depth)
___NEED_SYM(___S_profiler_3a_profiler_2d_ignore_2d_module)
___NEED_SYM(___S_profiler_3a_profiler_2d_ignore_2d_procedure)
___NEED_SYM(___S_profiler_3a_profiler_2d_module_2d_ignore_3f_)
___NEED_SYM(___S_profiler_3a_profiler_2d_on_3f_)
___NEED_SYM(___S_profiler_3a_profiler_2d_procedure_2d_ignore_3f_)
___NEED_SYM(___S_profiler_3a_profiler_2d_real_2d_time)
___NEED_SYM(___S_profiler_3a_profiler_2d_real_2d_time_2d_set_21_)
___NEED_SYM(___S_profiler_3a_profiler_2d_type)
___NEED_SYM(___S_profiler_3a_register_2d_profile)
___NEED_SYM(___S_profiler_3a_reset_2d_profile)
___NEED_SYM(___S_profiler_3a_reset_2d_profiles)
___NEED_SYM(___S_profiler_3a_set_2d_selected_2d_profile)
___NEED_SYM(___S_profiler_3a_start_2d_profiler)
___NEED_SYM(___S_profiler_3a_stop_2d_profiler)
___NEED_SYM(___S_profiler_3a_unregister_2d_profile)
___NEED_SYM(___S_profiler_3a_with_2d_profile)
___NEED_SYM(___S_profiler_3a_with_2d_profiling)
___NEED_SYM(___S_public)
___NEED_SYM(___S_register_2d_profile)
___NEED_SYM(___S_reset_2d_profile)
___NEED_SYM(___S_reset_2d_profiles)
___NEED_SYM(___S_set_2d_selected_2d_profile)
___NEED_SYM(___S_start_2d_profiler)
___NEED_SYM(___S_stop_2d_profiler)
___NEED_SYM(___S_unregister_2d_profile)
___NEED_SYM(___S_with_2d_profile)
___NEED_SYM(___S_with_2d_profiling)

___NEED_GLO(___G_bin_3a_profiler_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_active_2d_profile,"active-profile")
___DEF_SYM(1,___S_bin_3a_profiler,"bin:profiler")
___DEF_SYM(2,___S_default_2d_profile,"default-profile")
___DEF_SYM(3,___S_default_2d_profiler_2d_depth,"default-profiler-depth")
___DEF_SYM(4,___S_find_2d_profile,"find-profile")
___DEF_SYM(5,___S_find_2d_selected_2d_profile,"find-selected-profile")
___DEF_SYM(6,___S_find_2f_new_2d_profile,"find/new-profile")
___DEF_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(8,___S_get_2d_current_2d_profile,"get-current-profile")
___DEF_SYM(9,___S_get_2d_profile_2d_names,"get-profile-names")
___DEF_SYM(10,___S_get_2d_profiles,"get-profiles")
___DEF_SYM(11,___S_get_2d_selected_2d_profile,"get-selected-profile")
___DEF_SYM(12,___S_jazz,"jazz")
___DEF_SYM(13,___S_make_2d_profile_2d_call,"make-profile-call")
___DEF_SYM(14,___S_make_2d_profiler,"make-profiler")
___DEF_SYM(15,___S_new_2d_profile,"new-profile")
___DEF_SYM(16,___S_process_2d_statistics,"process-statistics")
___DEF_SYM(17,___S_profile_2d_call_2d_count,"profile-call-count")
___DEF_SYM(18,___S_profile_2d_call_2d_count_2d_set_21_,"profile-call-count-set!")
___DEF_SYM(19,___S_profile_2d_call_2d_duration,"profile-call-duration")
___DEF_SYM(20,___S_profile_2d_call_2d_duration_2d_set_21_,"profile-call-duration-set!")
___DEF_SYM(21,___S_profile_2d_calls,"profile-calls")
___DEF_SYM(22,___S_profile_2d_calls_2d_count,"profile-calls-count")
___DEF_SYM(23,___S_profile_2d_calls_2d_count_2d_set_21_,"profile-calls-count-set!")
___DEF_SYM(24,___S_profile_2d_calls_2d_duration,"profile-calls-duration")
___DEF_SYM(25,___S_profile_2d_calls_2d_duration_2d_set_21_,"profile-calls-duration-set!")
___DEF_SYM(26,___S_profile_2d_calls_2d_set_21_,"profile-calls-set!")
___DEF_SYM(27,___S_profile_2d_depth,"profile-depth")
___DEF_SYM(28,___S_profile_2d_frames,"profile-frames")
___DEF_SYM(29,___S_profile_2d_frames_2d_count,"profile-frames-count")
___DEF_SYM(30,___S_profile_2d_frames_2d_count_2d_set_21_,"profile-frames-count-set!")
___DEF_SYM(31,___S_profile_2d_frames_2d_duration,"profile-frames-duration")
___DEF_SYM(32,___S_profile_2d_frames_2d_duration_2d_set_21_,"profile-frames-duration-set!")
___DEF_SYM(33,___S_profile_2d_label,"profile-label")
___DEF_SYM(34,___S_profile_2d_process_2d_info,"profile-process-info")
___DEF_SYM(35,___S_profile_2d_process_2d_start_2d_info,"profile-process-start-info")
___DEF_SYM(36,___S_profile_2d_process_2d_start_2d_info_2d_set_21_,"profile-process-start-info-set!")

___DEF_SYM(37,___S_profile_2d_process_2d_stop_2d_info,"profile-process-stop-info")
___DEF_SYM(38,___S_profile_2d_process_2d_stop_2d_info_2d_set_21_,"profile-process-stop-info-set!")

___DEF_SYM(39,___S_profile_2d_profiler,"profile-profiler")
___DEF_SYM(40,___S_profile_2d_register_2d_call,"profile-register-call")
___DEF_SYM(41,___S_profile_2d_running_3f_,"profile-running?")
___DEF_SYM(42,___S_profiler,"profiler")
___DEF_SYM(43,___S_profiler_2d_default_2d_depth,"profiler-default-depth")
___DEF_SYM(44,___S_profiler_2d_ignore_2d_module,"profiler-ignore-module")
___DEF_SYM(45,___S_profiler_2d_ignore_2d_procedure,"profiler-ignore-procedure")
___DEF_SYM(46,___S_profiler_2d_module_2d_ignore_3f_,"profiler-module-ignore?")
___DEF_SYM(47,___S_profiler_2d_on_3f_,"profiler-on?")
___DEF_SYM(48,___S_profiler_2d_procedure_2d_ignore_3f_,"profiler-procedure-ignore?")
___DEF_SYM(49,___S_profiler_2d_real_2d_time,"profiler-real-time")
___DEF_SYM(50,___S_profiler_2d_real_2d_time_2d_set_21_,"profiler-real-time-set!")
___DEF_SYM(51,___S_profiler_2d_type,"profiler-type")
___DEF_SYM(52,___S_profiler_2e_implementation,"profiler.implementation")
___DEF_SYM(53,___S_profiler_3a_active_2d_profile,"profiler:active-profile")
___DEF_SYM(54,___S_profiler_3a_default_2d_profile,"profiler:default-profile")
___DEF_SYM(55,___S_profiler_3a_default_2d_profiler_2d_depth,"profiler:default-profiler-depth")

___DEF_SYM(56,___S_profiler_3a_find_2d_profile,"profiler:find-profile")
___DEF_SYM(57,___S_profiler_3a_find_2d_selected_2d_profile,"profiler:find-selected-profile")

___DEF_SYM(58,___S_profiler_3a_find_2f_new_2d_profile,"profiler:find/new-profile")
___DEF_SYM(59,___S_profiler_3a_get_2d_current_2d_profile,"profiler:get-current-profile")
___DEF_SYM(60,___S_profiler_3a_get_2d_profile_2d_names,"profiler:get-profile-names")
___DEF_SYM(61,___S_profiler_3a_get_2d_profiles,"profiler:get-profiles")
___DEF_SYM(62,___S_profiler_3a_get_2d_selected_2d_profile,"profiler:get-selected-profile")

___DEF_SYM(63,___S_profiler_3a_make_2d_profile_2d_call,"profiler:make-profile-call")
___DEF_SYM(64,___S_profiler_3a_make_2d_profiler,"profiler:make-profiler")
___DEF_SYM(65,___S_profiler_3a_new_2d_profile,"profiler:new-profile")
___DEF_SYM(66,___S_profiler_3a_process_2d_statistics,"profiler:process-statistics")
___DEF_SYM(67,___S_profiler_3a_profile_2d_call_2d_count,"profiler:profile-call-count")
___DEF_SYM(68,___S_profiler_3a_profile_2d_call_2d_count_2d_set_21_,"profiler:profile-call-count-set!")

___DEF_SYM(69,___S_profiler_3a_profile_2d_call_2d_duration,"profiler:profile-call-duration")

___DEF_SYM(70,___S_profiler_3a_profile_2d_call_2d_duration_2d_set_21_,"profiler:profile-call-duration-set!")

___DEF_SYM(71,___S_profiler_3a_profile_2d_calls,"profiler:profile-calls")
___DEF_SYM(72,___S_profiler_3a_profile_2d_calls_2d_count,"profiler:profile-calls-count")
___DEF_SYM(73,___S_profiler_3a_profile_2d_calls_2d_count_2d_set_21_,"profiler:profile-calls-count-set!")

___DEF_SYM(74,___S_profiler_3a_profile_2d_calls_2d_duration,"profiler:profile-calls-duration")

___DEF_SYM(75,___S_profiler_3a_profile_2d_calls_2d_duration_2d_set_21_,"profiler:profile-calls-duration-set!")

___DEF_SYM(76,___S_profiler_3a_profile_2d_calls_2d_set_21_,"profiler:profile-calls-set!")
___DEF_SYM(77,___S_profiler_3a_profile_2d_depth,"profiler:profile-depth")
___DEF_SYM(78,___S_profiler_3a_profile_2d_frames,"profiler:profile-frames")
___DEF_SYM(79,___S_profiler_3a_profile_2d_frames_2d_count,"profiler:profile-frames-count")

___DEF_SYM(80,___S_profiler_3a_profile_2d_frames_2d_count_2d_set_21_,"profiler:profile-frames-count-set!")

___DEF_SYM(81,___S_profiler_3a_profile_2d_frames_2d_duration,"profiler:profile-frames-duration")

___DEF_SYM(82,___S_profiler_3a_profile_2d_frames_2d_duration_2d_set_21_,"profiler:profile-frames-duration-set!")

___DEF_SYM(83,___S_profiler_3a_profile_2d_label,"profiler:profile-label")
___DEF_SYM(84,___S_profiler_3a_profile_2d_process_2d_info,"profiler:profile-process-info")

___DEF_SYM(85,___S_profiler_3a_profile_2d_process_2d_start_2d_info,"profiler:profile-process-start-info")

___DEF_SYM(86,___S_profiler_3a_profile_2d_process_2d_start_2d_info_2d_set_21_,"profiler:profile-process-start-info-set!")

___DEF_SYM(87,___S_profiler_3a_profile_2d_process_2d_stop_2d_info,"profiler:profile-process-stop-info")

___DEF_SYM(88,___S_profiler_3a_profile_2d_process_2d_stop_2d_info_2d_set_21_,"profiler:profile-process-stop-info-set!")

___DEF_SYM(89,___S_profiler_3a_profile_2d_profiler,"profiler:profile-profiler")
___DEF_SYM(90,___S_profiler_3a_profile_2d_register_2d_call,"profiler:profile-register-call")

___DEF_SYM(91,___S_profiler_3a_profile_2d_running_3f_,"profiler:profile-running?")
___DEF_SYM(92,___S_profiler_3a_profiler_2d_default_2d_depth,"profiler:profiler-default-depth")

___DEF_SYM(93,___S_profiler_3a_profiler_2d_ignore_2d_module,"profiler:profiler-ignore-module")

___DEF_SYM(94,___S_profiler_3a_profiler_2d_ignore_2d_procedure,"profiler:profiler-ignore-procedure")

___DEF_SYM(95,___S_profiler_3a_profiler_2d_module_2d_ignore_3f_,"profiler:profiler-module-ignore?")

___DEF_SYM(96,___S_profiler_3a_profiler_2d_on_3f_,"profiler:profiler-on?")
___DEF_SYM(97,___S_profiler_3a_profiler_2d_procedure_2d_ignore_3f_,"profiler:profiler-procedure-ignore?")

___DEF_SYM(98,___S_profiler_3a_profiler_2d_real_2d_time,"profiler:profiler-real-time")
___DEF_SYM(99,___S_profiler_3a_profiler_2d_real_2d_time_2d_set_21_,"profiler:profiler-real-time-set!")

___DEF_SYM(100,___S_profiler_3a_profiler_2d_type,"profiler:profiler-type")
___DEF_SYM(101,___S_profiler_3a_register_2d_profile,"profiler:register-profile")
___DEF_SYM(102,___S_profiler_3a_reset_2d_profile,"profiler:reset-profile")
___DEF_SYM(103,___S_profiler_3a_reset_2d_profiles,"profiler:reset-profiles")
___DEF_SYM(104,___S_profiler_3a_set_2d_selected_2d_profile,"profiler:set-selected-profile")

___DEF_SYM(105,___S_profiler_3a_start_2d_profiler,"profiler:start-profiler")
___DEF_SYM(106,___S_profiler_3a_stop_2d_profiler,"profiler:stop-profiler")
___DEF_SYM(107,___S_profiler_3a_unregister_2d_profile,"profiler:unregister-profile")
___DEF_SYM(108,___S_profiler_3a_with_2d_profile,"profiler:with-profile")
___DEF_SYM(109,___S_profiler_3a_with_2d_profiling,"profiler:with-profiling")
___DEF_SYM(110,___S_public,"public")
___DEF_SYM(111,___S_register_2d_profile,"register-profile")
___DEF_SYM(112,___S_reset_2d_profile,"reset-profile")
___DEF_SYM(113,___S_reset_2d_profiles,"reset-profiles")
___DEF_SYM(114,___S_set_2d_selected_2d_profile,"set-selected-profile")
___DEF_SYM(115,___S_start_2d_profiler,"start-profiler")
___DEF_SYM(116,___S_stop_2d_profiler,"stop-profiler")
___DEF_SYM(117,___S_unregister_2d_profile,"unregister-profile")
___DEF_SYM(118,___S_with_2d_profile,"with-profile")
___DEF_SYM(119,___S_with_2d_profiling,"with-profiling")
___END_SYM

#define ___SYM_active_2d_profile ___SYM(0,___S_active_2d_profile)
#define ___SYM_bin_3a_profiler ___SYM(1,___S_bin_3a_profiler)
#define ___SYM_default_2d_profile ___SYM(2,___S_default_2d_profile)
#define ___SYM_default_2d_profiler_2d_depth ___SYM(3,___S_default_2d_profiler_2d_depth)
#define ___SYM_find_2d_profile ___SYM(4,___S_find_2d_profile)
#define ___SYM_find_2d_selected_2d_profile ___SYM(5,___S_find_2d_selected_2d_profile)
#define ___SYM_find_2f_new_2d_profile ___SYM(6,___S_find_2f_new_2d_profile)
#define ___SYM_foundation_2e_dialect ___SYM(7,___S_foundation_2e_dialect)
#define ___SYM_get_2d_current_2d_profile ___SYM(8,___S_get_2d_current_2d_profile)
#define ___SYM_get_2d_profile_2d_names ___SYM(9,___S_get_2d_profile_2d_names)
#define ___SYM_get_2d_profiles ___SYM(10,___S_get_2d_profiles)
#define ___SYM_get_2d_selected_2d_profile ___SYM(11,___S_get_2d_selected_2d_profile)
#define ___SYM_jazz ___SYM(12,___S_jazz)
#define ___SYM_make_2d_profile_2d_call ___SYM(13,___S_make_2d_profile_2d_call)
#define ___SYM_make_2d_profiler ___SYM(14,___S_make_2d_profiler)
#define ___SYM_new_2d_profile ___SYM(15,___S_new_2d_profile)
#define ___SYM_process_2d_statistics ___SYM(16,___S_process_2d_statistics)
#define ___SYM_profile_2d_call_2d_count ___SYM(17,___S_profile_2d_call_2d_count)
#define ___SYM_profile_2d_call_2d_count_2d_set_21_ ___SYM(18,___S_profile_2d_call_2d_count_2d_set_21_)
#define ___SYM_profile_2d_call_2d_duration ___SYM(19,___S_profile_2d_call_2d_duration)
#define ___SYM_profile_2d_call_2d_duration_2d_set_21_ ___SYM(20,___S_profile_2d_call_2d_duration_2d_set_21_)
#define ___SYM_profile_2d_calls ___SYM(21,___S_profile_2d_calls)
#define ___SYM_profile_2d_calls_2d_count ___SYM(22,___S_profile_2d_calls_2d_count)
#define ___SYM_profile_2d_calls_2d_count_2d_set_21_ ___SYM(23,___S_profile_2d_calls_2d_count_2d_set_21_)
#define ___SYM_profile_2d_calls_2d_duration ___SYM(24,___S_profile_2d_calls_2d_duration)
#define ___SYM_profile_2d_calls_2d_duration_2d_set_21_ ___SYM(25,___S_profile_2d_calls_2d_duration_2d_set_21_)
#define ___SYM_profile_2d_calls_2d_set_21_ ___SYM(26,___S_profile_2d_calls_2d_set_21_)
#define ___SYM_profile_2d_depth ___SYM(27,___S_profile_2d_depth)
#define ___SYM_profile_2d_frames ___SYM(28,___S_profile_2d_frames)
#define ___SYM_profile_2d_frames_2d_count ___SYM(29,___S_profile_2d_frames_2d_count)
#define ___SYM_profile_2d_frames_2d_count_2d_set_21_ ___SYM(30,___S_profile_2d_frames_2d_count_2d_set_21_)
#define ___SYM_profile_2d_frames_2d_duration ___SYM(31,___S_profile_2d_frames_2d_duration)
#define ___SYM_profile_2d_frames_2d_duration_2d_set_21_ ___SYM(32,___S_profile_2d_frames_2d_duration_2d_set_21_)
#define ___SYM_profile_2d_label ___SYM(33,___S_profile_2d_label)
#define ___SYM_profile_2d_process_2d_info ___SYM(34,___S_profile_2d_process_2d_info)
#define ___SYM_profile_2d_process_2d_start_2d_info ___SYM(35,___S_profile_2d_process_2d_start_2d_info)
#define ___SYM_profile_2d_process_2d_start_2d_info_2d_set_21_ ___SYM(36,___S_profile_2d_process_2d_start_2d_info_2d_set_21_)
#define ___SYM_profile_2d_process_2d_stop_2d_info ___SYM(37,___S_profile_2d_process_2d_stop_2d_info)
#define ___SYM_profile_2d_process_2d_stop_2d_info_2d_set_21_ ___SYM(38,___S_profile_2d_process_2d_stop_2d_info_2d_set_21_)
#define ___SYM_profile_2d_profiler ___SYM(39,___S_profile_2d_profiler)
#define ___SYM_profile_2d_register_2d_call ___SYM(40,___S_profile_2d_register_2d_call)
#define ___SYM_profile_2d_running_3f_ ___SYM(41,___S_profile_2d_running_3f_)
#define ___SYM_profiler ___SYM(42,___S_profiler)
#define ___SYM_profiler_2d_default_2d_depth ___SYM(43,___S_profiler_2d_default_2d_depth)
#define ___SYM_profiler_2d_ignore_2d_module ___SYM(44,___S_profiler_2d_ignore_2d_module)
#define ___SYM_profiler_2d_ignore_2d_procedure ___SYM(45,___S_profiler_2d_ignore_2d_procedure)
#define ___SYM_profiler_2d_module_2d_ignore_3f_ ___SYM(46,___S_profiler_2d_module_2d_ignore_3f_)
#define ___SYM_profiler_2d_on_3f_ ___SYM(47,___S_profiler_2d_on_3f_)
#define ___SYM_profiler_2d_procedure_2d_ignore_3f_ ___SYM(48,___S_profiler_2d_procedure_2d_ignore_3f_)
#define ___SYM_profiler_2d_real_2d_time ___SYM(49,___S_profiler_2d_real_2d_time)
#define ___SYM_profiler_2d_real_2d_time_2d_set_21_ ___SYM(50,___S_profiler_2d_real_2d_time_2d_set_21_)
#define ___SYM_profiler_2d_type ___SYM(51,___S_profiler_2d_type)
#define ___SYM_profiler_2e_implementation ___SYM(52,___S_profiler_2e_implementation)
#define ___SYM_profiler_3a_active_2d_profile ___SYM(53,___S_profiler_3a_active_2d_profile)
#define ___SYM_profiler_3a_default_2d_profile ___SYM(54,___S_profiler_3a_default_2d_profile)
#define ___SYM_profiler_3a_default_2d_profiler_2d_depth ___SYM(55,___S_profiler_3a_default_2d_profiler_2d_depth)
#define ___SYM_profiler_3a_find_2d_profile ___SYM(56,___S_profiler_3a_find_2d_profile)
#define ___SYM_profiler_3a_find_2d_selected_2d_profile ___SYM(57,___S_profiler_3a_find_2d_selected_2d_profile)
#define ___SYM_profiler_3a_find_2f_new_2d_profile ___SYM(58,___S_profiler_3a_find_2f_new_2d_profile)
#define ___SYM_profiler_3a_get_2d_current_2d_profile ___SYM(59,___S_profiler_3a_get_2d_current_2d_profile)
#define ___SYM_profiler_3a_get_2d_profile_2d_names ___SYM(60,___S_profiler_3a_get_2d_profile_2d_names)
#define ___SYM_profiler_3a_get_2d_profiles ___SYM(61,___S_profiler_3a_get_2d_profiles)
#define ___SYM_profiler_3a_get_2d_selected_2d_profile ___SYM(62,___S_profiler_3a_get_2d_selected_2d_profile)
#define ___SYM_profiler_3a_make_2d_profile_2d_call ___SYM(63,___S_profiler_3a_make_2d_profile_2d_call)
#define ___SYM_profiler_3a_make_2d_profiler ___SYM(64,___S_profiler_3a_make_2d_profiler)
#define ___SYM_profiler_3a_new_2d_profile ___SYM(65,___S_profiler_3a_new_2d_profile)
#define ___SYM_profiler_3a_process_2d_statistics ___SYM(66,___S_profiler_3a_process_2d_statistics)
#define ___SYM_profiler_3a_profile_2d_call_2d_count ___SYM(67,___S_profiler_3a_profile_2d_call_2d_count)
#define ___SYM_profiler_3a_profile_2d_call_2d_count_2d_set_21_ ___SYM(68,___S_profiler_3a_profile_2d_call_2d_count_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_call_2d_duration ___SYM(69,___S_profiler_3a_profile_2d_call_2d_duration)
#define ___SYM_profiler_3a_profile_2d_call_2d_duration_2d_set_21_ ___SYM(70,___S_profiler_3a_profile_2d_call_2d_duration_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_calls ___SYM(71,___S_profiler_3a_profile_2d_calls)
#define ___SYM_profiler_3a_profile_2d_calls_2d_count ___SYM(72,___S_profiler_3a_profile_2d_calls_2d_count)
#define ___SYM_profiler_3a_profile_2d_calls_2d_count_2d_set_21_ ___SYM(73,___S_profiler_3a_profile_2d_calls_2d_count_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_calls_2d_duration ___SYM(74,___S_profiler_3a_profile_2d_calls_2d_duration)
#define ___SYM_profiler_3a_profile_2d_calls_2d_duration_2d_set_21_ ___SYM(75,___S_profiler_3a_profile_2d_calls_2d_duration_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_calls_2d_set_21_ ___SYM(76,___S_profiler_3a_profile_2d_calls_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_depth ___SYM(77,___S_profiler_3a_profile_2d_depth)
#define ___SYM_profiler_3a_profile_2d_frames ___SYM(78,___S_profiler_3a_profile_2d_frames)
#define ___SYM_profiler_3a_profile_2d_frames_2d_count ___SYM(79,___S_profiler_3a_profile_2d_frames_2d_count)
#define ___SYM_profiler_3a_profile_2d_frames_2d_count_2d_set_21_ ___SYM(80,___S_profiler_3a_profile_2d_frames_2d_count_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_frames_2d_duration ___SYM(81,___S_profiler_3a_profile_2d_frames_2d_duration)
#define ___SYM_profiler_3a_profile_2d_frames_2d_duration_2d_set_21_ ___SYM(82,___S_profiler_3a_profile_2d_frames_2d_duration_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_label ___SYM(83,___S_profiler_3a_profile_2d_label)
#define ___SYM_profiler_3a_profile_2d_process_2d_info ___SYM(84,___S_profiler_3a_profile_2d_process_2d_info)
#define ___SYM_profiler_3a_profile_2d_process_2d_start_2d_info ___SYM(85,___S_profiler_3a_profile_2d_process_2d_start_2d_info)
#define ___SYM_profiler_3a_profile_2d_process_2d_start_2d_info_2d_set_21_ ___SYM(86,___S_profiler_3a_profile_2d_process_2d_start_2d_info_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_process_2d_stop_2d_info ___SYM(87,___S_profiler_3a_profile_2d_process_2d_stop_2d_info)
#define ___SYM_profiler_3a_profile_2d_process_2d_stop_2d_info_2d_set_21_ ___SYM(88,___S_profiler_3a_profile_2d_process_2d_stop_2d_info_2d_set_21_)
#define ___SYM_profiler_3a_profile_2d_profiler ___SYM(89,___S_profiler_3a_profile_2d_profiler)
#define ___SYM_profiler_3a_profile_2d_register_2d_call ___SYM(90,___S_profiler_3a_profile_2d_register_2d_call)
#define ___SYM_profiler_3a_profile_2d_running_3f_ ___SYM(91,___S_profiler_3a_profile_2d_running_3f_)
#define ___SYM_profiler_3a_profiler_2d_default_2d_depth ___SYM(92,___S_profiler_3a_profiler_2d_default_2d_depth)
#define ___SYM_profiler_3a_profiler_2d_ignore_2d_module ___SYM(93,___S_profiler_3a_profiler_2d_ignore_2d_module)
#define ___SYM_profiler_3a_profiler_2d_ignore_2d_procedure ___SYM(94,___S_profiler_3a_profiler_2d_ignore_2d_procedure)
#define ___SYM_profiler_3a_profiler_2d_module_2d_ignore_3f_ ___SYM(95,___S_profiler_3a_profiler_2d_module_2d_ignore_3f_)
#define ___SYM_profiler_3a_profiler_2d_on_3f_ ___SYM(96,___S_profiler_3a_profiler_2d_on_3f_)
#define ___SYM_profiler_3a_profiler_2d_procedure_2d_ignore_3f_ ___SYM(97,___S_profiler_3a_profiler_2d_procedure_2d_ignore_3f_)
#define ___SYM_profiler_3a_profiler_2d_real_2d_time ___SYM(98,___S_profiler_3a_profiler_2d_real_2d_time)
#define ___SYM_profiler_3a_profiler_2d_real_2d_time_2d_set_21_ ___SYM(99,___S_profiler_3a_profiler_2d_real_2d_time_2d_set_21_)
#define ___SYM_profiler_3a_profiler_2d_type ___SYM(100,___S_profiler_3a_profiler_2d_type)
#define ___SYM_profiler_3a_register_2d_profile ___SYM(101,___S_profiler_3a_register_2d_profile)
#define ___SYM_profiler_3a_reset_2d_profile ___SYM(102,___S_profiler_3a_reset_2d_profile)
#define ___SYM_profiler_3a_reset_2d_profiles ___SYM(103,___S_profiler_3a_reset_2d_profiles)
#define ___SYM_profiler_3a_set_2d_selected_2d_profile ___SYM(104,___S_profiler_3a_set_2d_selected_2d_profile)
#define ___SYM_profiler_3a_start_2d_profiler ___SYM(105,___S_profiler_3a_start_2d_profiler)
#define ___SYM_profiler_3a_stop_2d_profiler ___SYM(106,___S_profiler_3a_stop_2d_profiler)
#define ___SYM_profiler_3a_unregister_2d_profile ___SYM(107,___S_profiler_3a_unregister_2d_profile)
#define ___SYM_profiler_3a_with_2d_profile ___SYM(108,___S_profiler_3a_with_2d_profile)
#define ___SYM_profiler_3a_with_2d_profiling ___SYM(109,___S_profiler_3a_with_2d_profiling)
#define ___SYM_public ___SYM(110,___S_public)
#define ___SYM_register_2d_profile ___SYM(111,___S_register_2d_profile)
#define ___SYM_reset_2d_profile ___SYM(112,___S_reset_2d_profile)
#define ___SYM_reset_2d_profiles ___SYM(113,___S_reset_2d_profiles)
#define ___SYM_set_2d_selected_2d_profile ___SYM(114,___S_set_2d_selected_2d_profile)
#define ___SYM_start_2d_profiler ___SYM(115,___S_start_2d_profiler)
#define ___SYM_stop_2d_profiler ___SYM(116,___S_stop_2d_profiler)
#define ___SYM_unregister_2d_profile ___SYM(117,___S_unregister_2d_profile)
#define ___SYM_with_2d_profile ___SYM(118,___S_with_2d_profile)
#define ___SYM_with_2d_profiling ___SYM(119,___S_with_2d_profiling)

___BEGIN_GLO
___DEF_GLO(0,"bin:profiler#")
___DEF_GLO(1,"jazz:load-unit")
___DEF_GLO(2,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_profiler_23_ ___GLO(0,___G_bin_3a_profiler_23_)
#define ___PRM_bin_3a_profiler_23_ ___PRM(0,___G_bin_3a_profiler_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(2,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(2,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_active_2d_profile),___REF_SYM(53,___S_profiler_3a_active_2d_profile))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(2,___S_default_2d_profile),___REF_SYM(54,___S_profiler_3a_default_2d_profile))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(3,___S_default_2d_profiler_2d_depth),___REF_SYM(55,___S_profiler_3a_default_2d_profiler_2d_depth))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(4,___S_find_2d_profile),___REF_SYM(56,___S_profiler_3a_find_2d_profile))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(5,___S_find_2d_selected_2d_profile),___REF_SYM(57,___S_profiler_3a_find_2d_selected_2d_profile))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(6,___S_find_2f_new_2d_profile),___REF_SYM(58,___S_profiler_3a_find_2f_new_2d_profile))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(8,___S_get_2d_current_2d_profile),___REF_SYM(59,___S_profiler_3a_get_2d_current_2d_profile))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(9,___S_get_2d_profile_2d_names),___REF_SYM(60,___S_profiler_3a_get_2d_profile_2d_names))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(10,___S_get_2d_profiles),___REF_SYM(61,___S_profiler_3a_get_2d_profiles))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(11,___S_get_2d_selected_2d_profile),___REF_SYM(62,___S_profiler_3a_get_2d_selected_2d_profile))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(13,___S_make_2d_profile_2d_call),___REF_SYM(63,___S_profiler_3a_make_2d_profile_2d_call))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(14,___S_make_2d_profiler),___REF_SYM(64,___S_profiler_3a_make_2d_profiler))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(15,___S_new_2d_profile),___REF_SYM(65,___S_profiler_3a_new_2d_profile))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(16,___S_process_2d_statistics),___REF_SYM(66,___S_profiler_3a_process_2d_statistics))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(17,___S_profile_2d_call_2d_count),___REF_SYM(67,___S_profiler_3a_profile_2d_call_2d_count))
,___DEF_CNS(___REF_CNS(31),___REF_CNS(32))
,___DEF_CNS(___REF_SYM(18,___S_profile_2d_call_2d_count_2d_set_21_),___REF_SYM(68,___S_profiler_3a_profile_2d_call_2d_count_2d_set_21_))
,___DEF_CNS(___REF_CNS(33),___REF_CNS(34))
,___DEF_CNS(___REF_SYM(19,___S_profile_2d_call_2d_duration),___REF_SYM(69,___S_profiler_3a_profile_2d_call_2d_duration))
,___DEF_CNS(___REF_CNS(35),___REF_CNS(36))
,___DEF_CNS(___REF_SYM(20,___S_profile_2d_call_2d_duration_2d_set_21_),___REF_SYM(70,___S_profiler_3a_profile_2d_call_2d_duration_2d_set_21_))
,___DEF_CNS(___REF_CNS(37),___REF_CNS(38))
,___DEF_CNS(___REF_SYM(21,___S_profile_2d_calls),___REF_SYM(71,___S_profiler_3a_profile_2d_calls))
,___DEF_CNS(___REF_CNS(39),___REF_CNS(40))
,___DEF_CNS(___REF_SYM(22,___S_profile_2d_calls_2d_count),___REF_SYM(72,___S_profiler_3a_profile_2d_calls_2d_count))
,___DEF_CNS(___REF_CNS(41),___REF_CNS(42))
,___DEF_CNS(___REF_SYM(23,___S_profile_2d_calls_2d_count_2d_set_21_),___REF_SYM(73,___S_profiler_3a_profile_2d_calls_2d_count_2d_set_21_))
,___DEF_CNS(___REF_CNS(43),___REF_CNS(44))
,___DEF_CNS(___REF_SYM(24,___S_profile_2d_calls_2d_duration),___REF_SYM(74,___S_profiler_3a_profile_2d_calls_2d_duration))
,___DEF_CNS(___REF_CNS(45),___REF_CNS(46))
,___DEF_CNS(___REF_SYM(25,___S_profile_2d_calls_2d_duration_2d_set_21_),___REF_SYM(75,___S_profiler_3a_profile_2d_calls_2d_duration_2d_set_21_))
,___DEF_CNS(___REF_CNS(47),___REF_CNS(48))
,___DEF_CNS(___REF_SYM(26,___S_profile_2d_calls_2d_set_21_),___REF_SYM(76,___S_profiler_3a_profile_2d_calls_2d_set_21_))
,___DEF_CNS(___REF_CNS(49),___REF_CNS(50))
,___DEF_CNS(___REF_SYM(27,___S_profile_2d_depth),___REF_SYM(77,___S_profiler_3a_profile_2d_depth))
,___DEF_CNS(___REF_CNS(51),___REF_CNS(52))
,___DEF_CNS(___REF_SYM(28,___S_profile_2d_frames),___REF_SYM(78,___S_profiler_3a_profile_2d_frames))
,___DEF_CNS(___REF_CNS(53),___REF_CNS(54))
,___DEF_CNS(___REF_SYM(29,___S_profile_2d_frames_2d_count),___REF_SYM(79,___S_profiler_3a_profile_2d_frames_2d_count))
,___DEF_CNS(___REF_CNS(55),___REF_CNS(56))
,___DEF_CNS(___REF_SYM(30,___S_profile_2d_frames_2d_count_2d_set_21_),___REF_SYM(80,___S_profiler_3a_profile_2d_frames_2d_count_2d_set_21_))
,___DEF_CNS(___REF_CNS(57),___REF_CNS(58))
,___DEF_CNS(___REF_SYM(31,___S_profile_2d_frames_2d_duration),___REF_SYM(81,___S_profiler_3a_profile_2d_frames_2d_duration))
,___DEF_CNS(___REF_CNS(59),___REF_CNS(60))
,___DEF_CNS(___REF_SYM(32,___S_profile_2d_frames_2d_duration_2d_set_21_),___REF_SYM(82,___S_profiler_3a_profile_2d_frames_2d_duration_2d_set_21_))
,___DEF_CNS(___REF_CNS(61),___REF_CNS(62))
,___DEF_CNS(___REF_SYM(33,___S_profile_2d_label),___REF_SYM(83,___S_profiler_3a_profile_2d_label))
,___DEF_CNS(___REF_CNS(63),___REF_CNS(64))
,___DEF_CNS(___REF_SYM(34,___S_profile_2d_process_2d_info),___REF_SYM(84,___S_profiler_3a_profile_2d_process_2d_info))
,___DEF_CNS(___REF_CNS(65),___REF_CNS(66))
,___DEF_CNS(___REF_SYM(35,___S_profile_2d_process_2d_start_2d_info),___REF_SYM(85,___S_profiler_3a_profile_2d_process_2d_start_2d_info))
,___DEF_CNS(___REF_CNS(67),___REF_CNS(68))
,___DEF_CNS(___REF_SYM(36,___S_profile_2d_process_2d_start_2d_info_2d_set_21_),___REF_SYM(86,___S_profiler_3a_profile_2d_process_2d_start_2d_info_2d_set_21_))
,___DEF_CNS(___REF_CNS(69),___REF_CNS(70))
,___DEF_CNS(___REF_SYM(37,___S_profile_2d_process_2d_stop_2d_info),___REF_SYM(87,___S_profiler_3a_profile_2d_process_2d_stop_2d_info))
,___DEF_CNS(___REF_CNS(71),___REF_CNS(72))
,___DEF_CNS(___REF_SYM(38,___S_profile_2d_process_2d_stop_2d_info_2d_set_21_),___REF_SYM(88,___S_profiler_3a_profile_2d_process_2d_stop_2d_info_2d_set_21_))
,___DEF_CNS(___REF_CNS(73),___REF_CNS(74))
,___DEF_CNS(___REF_SYM(39,___S_profile_2d_profiler),___REF_SYM(89,___S_profiler_3a_profile_2d_profiler))
,___DEF_CNS(___REF_CNS(75),___REF_CNS(76))
,___DEF_CNS(___REF_SYM(40,___S_profile_2d_register_2d_call),___REF_SYM(90,___S_profiler_3a_profile_2d_register_2d_call))
,___DEF_CNS(___REF_CNS(77),___REF_CNS(78))
,___DEF_CNS(___REF_SYM(41,___S_profile_2d_running_3f_),___REF_SYM(91,___S_profiler_3a_profile_2d_running_3f_))
,___DEF_CNS(___REF_CNS(79),___REF_CNS(80))
,___DEF_CNS(___REF_SYM(43,___S_profiler_2d_default_2d_depth),___REF_SYM(92,___S_profiler_3a_profiler_2d_default_2d_depth))
,___DEF_CNS(___REF_CNS(81),___REF_CNS(82))
,___DEF_CNS(___REF_SYM(44,___S_profiler_2d_ignore_2d_module),___REF_SYM(93,___S_profiler_3a_profiler_2d_ignore_2d_module))
,___DEF_CNS(___REF_CNS(83),___REF_CNS(84))
,___DEF_CNS(___REF_SYM(45,___S_profiler_2d_ignore_2d_procedure),___REF_SYM(94,___S_profiler_3a_profiler_2d_ignore_2d_procedure))
,___DEF_CNS(___REF_CNS(85),___REF_CNS(86))
,___DEF_CNS(___REF_SYM(46,___S_profiler_2d_module_2d_ignore_3f_),___REF_SYM(95,___S_profiler_3a_profiler_2d_module_2d_ignore_3f_))
,___DEF_CNS(___REF_CNS(87),___REF_CNS(88))
,___DEF_CNS(___REF_SYM(47,___S_profiler_2d_on_3f_),___REF_SYM(96,___S_profiler_3a_profiler_2d_on_3f_))
,___DEF_CNS(___REF_CNS(89),___REF_CNS(90))
,___DEF_CNS(___REF_SYM(48,___S_profiler_2d_procedure_2d_ignore_3f_),___REF_SYM(97,___S_profiler_3a_profiler_2d_procedure_2d_ignore_3f_))
,___DEF_CNS(___REF_CNS(91),___REF_CNS(92))
,___DEF_CNS(___REF_SYM(49,___S_profiler_2d_real_2d_time),___REF_SYM(98,___S_profiler_3a_profiler_2d_real_2d_time))
,___DEF_CNS(___REF_CNS(93),___REF_CNS(94))
,___DEF_CNS(___REF_SYM(50,___S_profiler_2d_real_2d_time_2d_set_21_),___REF_SYM(99,___S_profiler_3a_profiler_2d_real_2d_time_2d_set_21_))
,___DEF_CNS(___REF_CNS(95),___REF_CNS(96))
,___DEF_CNS(___REF_SYM(51,___S_profiler_2d_type),___REF_SYM(100,___S_profiler_3a_profiler_2d_type))
,___DEF_CNS(___REF_CNS(97),___REF_CNS(98))
,___DEF_CNS(___REF_SYM(111,___S_register_2d_profile),___REF_SYM(101,___S_profiler_3a_register_2d_profile))
,___DEF_CNS(___REF_CNS(99),___REF_CNS(100))
,___DEF_CNS(___REF_SYM(112,___S_reset_2d_profile),___REF_SYM(102,___S_profiler_3a_reset_2d_profile))
,___DEF_CNS(___REF_CNS(101),___REF_CNS(102))
,___DEF_CNS(___REF_SYM(113,___S_reset_2d_profiles),___REF_SYM(103,___S_profiler_3a_reset_2d_profiles))
,___DEF_CNS(___REF_CNS(103),___REF_CNS(104))
,___DEF_CNS(___REF_SYM(114,___S_set_2d_selected_2d_profile),___REF_SYM(104,___S_profiler_3a_set_2d_selected_2d_profile))
,___DEF_CNS(___REF_CNS(105),___REF_CNS(106))
,___DEF_CNS(___REF_SYM(115,___S_start_2d_profiler),___REF_SYM(105,___S_profiler_3a_start_2d_profiler))
,___DEF_CNS(___REF_CNS(107),___REF_CNS(108))
,___DEF_CNS(___REF_SYM(116,___S_stop_2d_profiler),___REF_SYM(106,___S_profiler_3a_stop_2d_profiler))
,___DEF_CNS(___REF_CNS(109),___REF_CNS(110))
,___DEF_CNS(___REF_SYM(117,___S_unregister_2d_profile),___REF_SYM(107,___S_profiler_3a_unregister_2d_profile))
,___DEF_CNS(___REF_CNS(111),___REF_CNS(112))
,___DEF_CNS(___REF_SYM(118,___S_with_2d_profile),___REF_SYM(108,___S_profiler_3a_with_2d_profile))
,___DEF_CNS(___REF_CNS(113),___REF_NUL)
,___DEF_CNS(___REF_SYM(119,___S_with_2d_profiling),___REF_SYM(109,___S_profiler_3a_with_2d_profiling))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X1,7UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(8))
               ___VEC1(___REF_SUB(10))
               ___VEC1(___REF_SUB(12))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(42,___S_profiler))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,0UL)
               ___VEC0
___DEF_SUB_VEC(___X17,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_profiler))
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
___DEF_M_HLBL(___L0_bin_3a_profiler_23_)
___DEF_M_HLBL(___L1_bin_3a_profiler_23_)
___DEF_M_HLBL(___L2_bin_3a_profiler_23_)
___DEF_M_HLBL(___L3_bin_3a_profiler_23_)
___DEF_M_HLBL(___L4_bin_3a_profiler_23_)
___DEF_M_HLBL(___L5_bin_3a_profiler_23_)
___DEF_M_HLBL(___L6_bin_3a_profiler_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_profiler_23_
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
___DEF_P_HLBL(___L0_bin_3a_profiler_23_)
___DEF_P_HLBL(___L1_bin_3a_profiler_23_)
___DEF_P_HLBL(___L2_bin_3a_profiler_23_)
___DEF_P_HLBL(___L3_bin_3a_profiler_23_)
___DEF_P_HLBL(___L4_bin_3a_profiler_23_)
___DEF_P_HLBL(___L5_bin_3a_profiler_23_)
___DEF_P_HLBL(___L6_bin_3a_profiler_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_profiler_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_profiler_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_profiler_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_profiler_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_profiler_23_)
   ___SET_R1(___SYM_profiler_2e_implementation)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_profiler_23_)
   ___SET_STK(1,___SYM_profiler)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_profiler_23_)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_profiler_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_profiler_23_,"bin:profiler#",___REF_SUB(0),7,0)
,___DEF_LBL_PROC(___H_bin_3a_profiler_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_profiler_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_profiler_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_profiler_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_profiler_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_profiler_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_profiler_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_profiler_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_profiler_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_active_2d_profile,"active-profile")
___DEF_MOD_SYM(1,___S_bin_3a_profiler,"bin:profiler")
___DEF_MOD_SYM(2,___S_default_2d_profile,"default-profile")
___DEF_MOD_SYM(3,___S_default_2d_profiler_2d_depth,"default-profiler-depth")
___DEF_MOD_SYM(4,___S_find_2d_profile,"find-profile")
___DEF_MOD_SYM(5,___S_find_2d_selected_2d_profile,"find-selected-profile")
___DEF_MOD_SYM(6,___S_find_2f_new_2d_profile,"find/new-profile")
___DEF_MOD_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(8,___S_get_2d_current_2d_profile,"get-current-profile")
___DEF_MOD_SYM(9,___S_get_2d_profile_2d_names,"get-profile-names")
___DEF_MOD_SYM(10,___S_get_2d_profiles,"get-profiles")
___DEF_MOD_SYM(11,___S_get_2d_selected_2d_profile,"get-selected-profile")
___DEF_MOD_SYM(12,___S_jazz,"jazz")
___DEF_MOD_SYM(13,___S_make_2d_profile_2d_call,"make-profile-call")
___DEF_MOD_SYM(14,___S_make_2d_profiler,"make-profiler")
___DEF_MOD_SYM(15,___S_new_2d_profile,"new-profile")
___DEF_MOD_SYM(16,___S_process_2d_statistics,"process-statistics")
___DEF_MOD_SYM(17,___S_profile_2d_call_2d_count,"profile-call-count")
___DEF_MOD_SYM(18,___S_profile_2d_call_2d_count_2d_set_21_,"profile-call-count-set!")
___DEF_MOD_SYM(19,___S_profile_2d_call_2d_duration,"profile-call-duration")
___DEF_MOD_SYM(20,___S_profile_2d_call_2d_duration_2d_set_21_,"profile-call-duration-set!")
___DEF_MOD_SYM(21,___S_profile_2d_calls,"profile-calls")
___DEF_MOD_SYM(22,___S_profile_2d_calls_2d_count,"profile-calls-count")
___DEF_MOD_SYM(23,___S_profile_2d_calls_2d_count_2d_set_21_,"profile-calls-count-set!")
___DEF_MOD_SYM(24,___S_profile_2d_calls_2d_duration,"profile-calls-duration")
___DEF_MOD_SYM(25,___S_profile_2d_calls_2d_duration_2d_set_21_,"profile-calls-duration-set!")
___DEF_MOD_SYM(26,___S_profile_2d_calls_2d_set_21_,"profile-calls-set!")
___DEF_MOD_SYM(27,___S_profile_2d_depth,"profile-depth")
___DEF_MOD_SYM(28,___S_profile_2d_frames,"profile-frames")
___DEF_MOD_SYM(29,___S_profile_2d_frames_2d_count,"profile-frames-count")
___DEF_MOD_SYM(30,___S_profile_2d_frames_2d_count_2d_set_21_,"profile-frames-count-set!")
___DEF_MOD_SYM(31,___S_profile_2d_frames_2d_duration,"profile-frames-duration")
___DEF_MOD_SYM(32,___S_profile_2d_frames_2d_duration_2d_set_21_,"profile-frames-duration-set!")
___DEF_MOD_SYM(33,___S_profile_2d_label,"profile-label")
___DEF_MOD_SYM(34,___S_profile_2d_process_2d_info,"profile-process-info")
___DEF_MOD_SYM(35,___S_profile_2d_process_2d_start_2d_info,"profile-process-start-info")
___DEF_MOD_SYM(36,___S_profile_2d_process_2d_start_2d_info_2d_set_21_,"profile-process-start-info-set!")

___DEF_MOD_SYM(37,___S_profile_2d_process_2d_stop_2d_info,"profile-process-stop-info")
___DEF_MOD_SYM(38,___S_profile_2d_process_2d_stop_2d_info_2d_set_21_,"profile-process-stop-info-set!")

___DEF_MOD_SYM(39,___S_profile_2d_profiler,"profile-profiler")
___DEF_MOD_SYM(40,___S_profile_2d_register_2d_call,"profile-register-call")
___DEF_MOD_SYM(41,___S_profile_2d_running_3f_,"profile-running?")
___DEF_MOD_SYM(42,___S_profiler,"profiler")
___DEF_MOD_SYM(43,___S_profiler_2d_default_2d_depth,"profiler-default-depth")
___DEF_MOD_SYM(44,___S_profiler_2d_ignore_2d_module,"profiler-ignore-module")
___DEF_MOD_SYM(45,___S_profiler_2d_ignore_2d_procedure,"profiler-ignore-procedure")
___DEF_MOD_SYM(46,___S_profiler_2d_module_2d_ignore_3f_,"profiler-module-ignore?")
___DEF_MOD_SYM(47,___S_profiler_2d_on_3f_,"profiler-on?")
___DEF_MOD_SYM(48,___S_profiler_2d_procedure_2d_ignore_3f_,"profiler-procedure-ignore?")
___DEF_MOD_SYM(49,___S_profiler_2d_real_2d_time,"profiler-real-time")
___DEF_MOD_SYM(50,___S_profiler_2d_real_2d_time_2d_set_21_,"profiler-real-time-set!")
___DEF_MOD_SYM(51,___S_profiler_2d_type,"profiler-type")
___DEF_MOD_SYM(52,___S_profiler_2e_implementation,"profiler.implementation")
___DEF_MOD_SYM(53,___S_profiler_3a_active_2d_profile,"profiler:active-profile")
___DEF_MOD_SYM(54,___S_profiler_3a_default_2d_profile,"profiler:default-profile")
___DEF_MOD_SYM(55,___S_profiler_3a_default_2d_profiler_2d_depth,"profiler:default-profiler-depth")

___DEF_MOD_SYM(56,___S_profiler_3a_find_2d_profile,"profiler:find-profile")
___DEF_MOD_SYM(57,___S_profiler_3a_find_2d_selected_2d_profile,"profiler:find-selected-profile")

___DEF_MOD_SYM(58,___S_profiler_3a_find_2f_new_2d_profile,"profiler:find/new-profile")
___DEF_MOD_SYM(59,___S_profiler_3a_get_2d_current_2d_profile,"profiler:get-current-profile")
___DEF_MOD_SYM(60,___S_profiler_3a_get_2d_profile_2d_names,"profiler:get-profile-names")
___DEF_MOD_SYM(61,___S_profiler_3a_get_2d_profiles,"profiler:get-profiles")
___DEF_MOD_SYM(62,___S_profiler_3a_get_2d_selected_2d_profile,"profiler:get-selected-profile")

___DEF_MOD_SYM(63,___S_profiler_3a_make_2d_profile_2d_call,"profiler:make-profile-call")
___DEF_MOD_SYM(64,___S_profiler_3a_make_2d_profiler,"profiler:make-profiler")
___DEF_MOD_SYM(65,___S_profiler_3a_new_2d_profile,"profiler:new-profile")
___DEF_MOD_SYM(66,___S_profiler_3a_process_2d_statistics,"profiler:process-statistics")
___DEF_MOD_SYM(67,___S_profiler_3a_profile_2d_call_2d_count,"profiler:profile-call-count")
___DEF_MOD_SYM(68,___S_profiler_3a_profile_2d_call_2d_count_2d_set_21_,"profiler:profile-call-count-set!")

___DEF_MOD_SYM(69,___S_profiler_3a_profile_2d_call_2d_duration,"profiler:profile-call-duration")

___DEF_MOD_SYM(70,___S_profiler_3a_profile_2d_call_2d_duration_2d_set_21_,"profiler:profile-call-duration-set!")

___DEF_MOD_SYM(71,___S_profiler_3a_profile_2d_calls,"profiler:profile-calls")
___DEF_MOD_SYM(72,___S_profiler_3a_profile_2d_calls_2d_count,"profiler:profile-calls-count")
___DEF_MOD_SYM(73,___S_profiler_3a_profile_2d_calls_2d_count_2d_set_21_,"profiler:profile-calls-count-set!")

___DEF_MOD_SYM(74,___S_profiler_3a_profile_2d_calls_2d_duration,"profiler:profile-calls-duration")

___DEF_MOD_SYM(75,___S_profiler_3a_profile_2d_calls_2d_duration_2d_set_21_,"profiler:profile-calls-duration-set!")

___DEF_MOD_SYM(76,___S_profiler_3a_profile_2d_calls_2d_set_21_,"profiler:profile-calls-set!")
___DEF_MOD_SYM(77,___S_profiler_3a_profile_2d_depth,"profiler:profile-depth")
___DEF_MOD_SYM(78,___S_profiler_3a_profile_2d_frames,"profiler:profile-frames")
___DEF_MOD_SYM(79,___S_profiler_3a_profile_2d_frames_2d_count,"profiler:profile-frames-count")

___DEF_MOD_SYM(80,___S_profiler_3a_profile_2d_frames_2d_count_2d_set_21_,"profiler:profile-frames-count-set!")

___DEF_MOD_SYM(81,___S_profiler_3a_profile_2d_frames_2d_duration,"profiler:profile-frames-duration")

___DEF_MOD_SYM(82,___S_profiler_3a_profile_2d_frames_2d_duration_2d_set_21_,"profiler:profile-frames-duration-set!")

___DEF_MOD_SYM(83,___S_profiler_3a_profile_2d_label,"profiler:profile-label")
___DEF_MOD_SYM(84,___S_profiler_3a_profile_2d_process_2d_info,"profiler:profile-process-info")

___DEF_MOD_SYM(85,___S_profiler_3a_profile_2d_process_2d_start_2d_info,"profiler:profile-process-start-info")

___DEF_MOD_SYM(86,___S_profiler_3a_profile_2d_process_2d_start_2d_info_2d_set_21_,"profiler:profile-process-start-info-set!")

___DEF_MOD_SYM(87,___S_profiler_3a_profile_2d_process_2d_stop_2d_info,"profiler:profile-process-stop-info")

___DEF_MOD_SYM(88,___S_profiler_3a_profile_2d_process_2d_stop_2d_info_2d_set_21_,"profiler:profile-process-stop-info-set!")

___DEF_MOD_SYM(89,___S_profiler_3a_profile_2d_profiler,"profiler:profile-profiler")
___DEF_MOD_SYM(90,___S_profiler_3a_profile_2d_register_2d_call,"profiler:profile-register-call")

___DEF_MOD_SYM(91,___S_profiler_3a_profile_2d_running_3f_,"profiler:profile-running?")
___DEF_MOD_SYM(92,___S_profiler_3a_profiler_2d_default_2d_depth,"profiler:profiler-default-depth")

___DEF_MOD_SYM(93,___S_profiler_3a_profiler_2d_ignore_2d_module,"profiler:profiler-ignore-module")

___DEF_MOD_SYM(94,___S_profiler_3a_profiler_2d_ignore_2d_procedure,"profiler:profiler-ignore-procedure")

___DEF_MOD_SYM(95,___S_profiler_3a_profiler_2d_module_2d_ignore_3f_,"profiler:profiler-module-ignore?")

___DEF_MOD_SYM(96,___S_profiler_3a_profiler_2d_on_3f_,"profiler:profiler-on?")
___DEF_MOD_SYM(97,___S_profiler_3a_profiler_2d_procedure_2d_ignore_3f_,"profiler:profiler-procedure-ignore?")

___DEF_MOD_SYM(98,___S_profiler_3a_profiler_2d_real_2d_time,"profiler:profiler-real-time")
___DEF_MOD_SYM(99,___S_profiler_3a_profiler_2d_real_2d_time_2d_set_21_,"profiler:profiler-real-time-set!")

___DEF_MOD_SYM(100,___S_profiler_3a_profiler_2d_type,"profiler:profiler-type")
___DEF_MOD_SYM(101,___S_profiler_3a_register_2d_profile,"profiler:register-profile")
___DEF_MOD_SYM(102,___S_profiler_3a_reset_2d_profile,"profiler:reset-profile")
___DEF_MOD_SYM(103,___S_profiler_3a_reset_2d_profiles,"profiler:reset-profiles")
___DEF_MOD_SYM(104,___S_profiler_3a_set_2d_selected_2d_profile,"profiler:set-selected-profile")

___DEF_MOD_SYM(105,___S_profiler_3a_start_2d_profiler,"profiler:start-profiler")
___DEF_MOD_SYM(106,___S_profiler_3a_stop_2d_profiler,"profiler:stop-profiler")
___DEF_MOD_SYM(107,___S_profiler_3a_unregister_2d_profile,"profiler:unregister-profile")
___DEF_MOD_SYM(108,___S_profiler_3a_with_2d_profile,"profiler:with-profile")
___DEF_MOD_SYM(109,___S_profiler_3a_with_2d_profiling,"profiler:with-profiling")
___DEF_MOD_SYM(110,___S_public,"public")
___DEF_MOD_SYM(111,___S_register_2d_profile,"register-profile")
___DEF_MOD_SYM(112,___S_reset_2d_profile,"reset-profile")
___DEF_MOD_SYM(113,___S_reset_2d_profiles,"reset-profiles")
___DEF_MOD_SYM(114,___S_set_2d_selected_2d_profile,"set-selected-profile")
___DEF_MOD_SYM(115,___S_start_2d_profiler,"start-profiler")
___DEF_MOD_SYM(116,___S_stop_2d_profiler,"stop-profiler")
___DEF_MOD_SYM(117,___S_unregister_2d_profile,"unregister-profile")
___DEF_MOD_SYM(118,___S_with_2d_profile,"with-profile")
___DEF_MOD_SYM(119,___S_with_2d_profiling,"with-profiling")
___END_MOD_SYM_KEY

#endif
