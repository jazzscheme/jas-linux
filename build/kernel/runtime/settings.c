#ifdef ___LINKER_INFO
; File: "settings.c", produced by Gambit v4.8.9
(
408009
(C)
"settings"
(("settings"))
(
"kernel.settings"
"objects"
"settings"
)
(
)
(
"jazz:absolutize-sources?^2331"
"jazz:build-binary-repositories^2343"
"jazz:build-configuration^2351"
"jazz:build-configure^2341"
"jazz:build-jazzini-access?^2345"
"jazz:build-jobs^2349"
"jazz:build-link^2348"
"jazz:build-repository^2327"
"jazz:build-setup^2342"
"jazz:build-single-objects?^2346"
"jazz:build-source-access?^2344"
"jazz:build-target^2350"
"jazz:build-windows-homedir^2347"
"jazz:debug-build?^2340"
"jazz:debug-expansion?^2326"
"jazz:debug-specializers^2355"
"jazz:delay-reporting?^2338"
"jazz:dependencies^2330"
"jazz:done-verbose?^2335"
"jazz:dry-run?^2353"
"jazz:font-engine^2361"
"jazz:force-interpreted?^2356"
"jazz:force-outlines?^2352"
"jazz:jazz-repository^2328"
"jazz:load-verbose?^2333"
"jazz:outline-verbose?^2334"
"jazz:profile-walker?^2360"
"jazz:repositories^2329"
"jazz:save-emit?^2354"
"jazz:unit-verbose?^2332"
"jazz:use-debugger?^2357"
"jazz:use-print?^2339"
"jazz:use-snapshot?^2358"
"jazz:warn-interpreted?^2336"
"jazz:warnings?^2337"
"jazz:worker-repl?^2359"
"settings#"
)
(
"jazz:absolutize-sources?"
"jazz:build-binary-repositories"
"jazz:build-configuration"
"jazz:build-configure"
"jazz:build-jazzini-access?"
"jazz:build-jobs"
"jazz:build-link"
"jazz:build-repository"
"jazz:build-setup"
"jazz:build-single-objects?"
"jazz:build-source-access?"
"jazz:build-target"
"jazz:build-windows-homedir"
"jazz:debug-build?"
"jazz:debug-expansion?"
"jazz:debug-specializers"
"jazz:delay-reporting?"
"jazz:dependencies"
"jazz:done-verbose?"
"jazz:dry-run?"
"jazz:font-engine"
"jazz:force-interpreted?"
"jazz:force-outlines?"
"jazz:jazz-repository"
"jazz:load-verbose?"
"jazz:outline-verbose?"
"jazz:profile-walker?"
"jazz:repositories"
"jazz:save-emit?"
"jazz:unit-verbose?"
"jazz:use-debugger?"
"jazz:use-print?"
"jazz:use-snapshot?"
"jazz:warn-interpreted?"
"jazz:warnings?"
"jazz:worker-repl?"
)
(
"jazz:verbose-kernel"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "settings"
#define ___LINKER_ID ___LNK_settings
#define ___MH_PROC ___H_settings
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 3
#define ___GLOCOUNT 74
#define ___SUPCOUNT 73
#define ___SUBCOUNT 193
#define ___LBLCOUNT 77
#define ___MODDESCR ___REF_SUB(192)
#include "gambit.h"

___NEED_SYM(___S_kernel_2e_settings)
___NEED_SYM(___S_objects)
___NEED_SYM(___S_settings)

___NEED_GLO(___G_jazz_3a_absolutize_2d_sources_3f_)
___NEED_GLO(___G_jazz_3a_absolutize_2d_sources_3f__5e_2331)
___NEED_GLO(___G_jazz_3a_build_2d_binary_2d_repositories)
___NEED_GLO(___G_jazz_3a_build_2d_binary_2d_repositories_5e_2343)
___NEED_GLO(___G_jazz_3a_build_2d_configuration)
___NEED_GLO(___G_jazz_3a_build_2d_configuration_5e_2351)
___NEED_GLO(___G_jazz_3a_build_2d_configure)
___NEED_GLO(___G_jazz_3a_build_2d_configure_5e_2341)
___NEED_GLO(___G_jazz_3a_build_2d_jazzini_2d_access_3f_)
___NEED_GLO(___G_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345)
___NEED_GLO(___G_jazz_3a_build_2d_jobs)
___NEED_GLO(___G_jazz_3a_build_2d_jobs_5e_2349)
___NEED_GLO(___G_jazz_3a_build_2d_link)
___NEED_GLO(___G_jazz_3a_build_2d_link_5e_2348)
___NEED_GLO(___G_jazz_3a_build_2d_repository)
___NEED_GLO(___G_jazz_3a_build_2d_repository_5e_2327)
___NEED_GLO(___G_jazz_3a_build_2d_setup)
___NEED_GLO(___G_jazz_3a_build_2d_setup_5e_2342)
___NEED_GLO(___G_jazz_3a_build_2d_single_2d_objects_3f_)
___NEED_GLO(___G_jazz_3a_build_2d_single_2d_objects_3f__5e_2346)
___NEED_GLO(___G_jazz_3a_build_2d_source_2d_access_3f_)
___NEED_GLO(___G_jazz_3a_build_2d_source_2d_access_3f__5e_2344)
___NEED_GLO(___G_jazz_3a_build_2d_target)
___NEED_GLO(___G_jazz_3a_build_2d_target_5e_2350)
___NEED_GLO(___G_jazz_3a_build_2d_windows_2d_homedir)
___NEED_GLO(___G_jazz_3a_build_2d_windows_2d_homedir_5e_2347)
___NEED_GLO(___G_jazz_3a_debug_2d_build_3f_)
___NEED_GLO(___G_jazz_3a_debug_2d_build_3f__5e_2340)
___NEED_GLO(___G_jazz_3a_debug_2d_expansion_3f_)
___NEED_GLO(___G_jazz_3a_debug_2d_expansion_3f__5e_2326)
___NEED_GLO(___G_jazz_3a_debug_2d_specializers)
___NEED_GLO(___G_jazz_3a_debug_2d_specializers_5e_2355)
___NEED_GLO(___G_jazz_3a_delay_2d_reporting_3f_)
___NEED_GLO(___G_jazz_3a_delay_2d_reporting_3f__5e_2338)
___NEED_GLO(___G_jazz_3a_dependencies)
___NEED_GLO(___G_jazz_3a_dependencies_5e_2330)
___NEED_GLO(___G_jazz_3a_done_2d_verbose_3f_)
___NEED_GLO(___G_jazz_3a_done_2d_verbose_3f__5e_2335)
___NEED_GLO(___G_jazz_3a_dry_2d_run_3f_)
___NEED_GLO(___G_jazz_3a_dry_2d_run_3f__5e_2353)
___NEED_GLO(___G_jazz_3a_font_2d_engine)
___NEED_GLO(___G_jazz_3a_font_2d_engine_5e_2361)
___NEED_GLO(___G_jazz_3a_force_2d_interpreted_3f_)
___NEED_GLO(___G_jazz_3a_force_2d_interpreted_3f__5e_2356)
___NEED_GLO(___G_jazz_3a_force_2d_outlines_3f_)
___NEED_GLO(___G_jazz_3a_force_2d_outlines_3f__5e_2352)
___NEED_GLO(___G_jazz_3a_jazz_2d_repository)
___NEED_GLO(___G_jazz_3a_jazz_2d_repository_5e_2328)
___NEED_GLO(___G_jazz_3a_load_2d_verbose_3f_)
___NEED_GLO(___G_jazz_3a_load_2d_verbose_3f__5e_2333)
___NEED_GLO(___G_jazz_3a_outline_2d_verbose_3f_)
___NEED_GLO(___G_jazz_3a_outline_2d_verbose_3f__5e_2334)
___NEED_GLO(___G_jazz_3a_profile_2d_walker_3f_)
___NEED_GLO(___G_jazz_3a_profile_2d_walker_3f__5e_2360)
___NEED_GLO(___G_jazz_3a_repositories)
___NEED_GLO(___G_jazz_3a_repositories_5e_2329)
___NEED_GLO(___G_jazz_3a_save_2d_emit_3f_)
___NEED_GLO(___G_jazz_3a_save_2d_emit_3f__5e_2354)
___NEED_GLO(___G_jazz_3a_unit_2d_verbose_3f_)
___NEED_GLO(___G_jazz_3a_unit_2d_verbose_3f__5e_2332)
___NEED_GLO(___G_jazz_3a_use_2d_debugger_3f_)
___NEED_GLO(___G_jazz_3a_use_2d_debugger_3f__5e_2357)
___NEED_GLO(___G_jazz_3a_use_2d_print_3f_)
___NEED_GLO(___G_jazz_3a_use_2d_print_3f__5e_2339)
___NEED_GLO(___G_jazz_3a_use_2d_snapshot_3f_)
___NEED_GLO(___G_jazz_3a_use_2d_snapshot_3f__5e_2358)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_jazz_3a_warn_2d_interpreted_3f_)
___NEED_GLO(___G_jazz_3a_warn_2d_interpreted_3f__5e_2336)
___NEED_GLO(___G_jazz_3a_warnings_3f_)
___NEED_GLO(___G_jazz_3a_warnings_3f__5e_2337)
___NEED_GLO(___G_jazz_3a_worker_2d_repl_3f_)
___NEED_GLO(___G_jazz_3a_worker_2d_repl_3f__5e_2359)
___NEED_GLO(___G_settings_23_)

___BEGIN_SYM
___DEF_SYM(0,___S_kernel_2e_settings,"kernel.settings")
___DEF_SYM(1,___S_objects,"objects")
___DEF_SYM(2,___S_settings,"settings")
___END_SYM

#define ___SYM_kernel_2e_settings ___SYM(0,___S_kernel_2e_settings)
#define ___SYM_objects ___SYM(1,___S_objects)
#define ___SYM_settings ___SYM(2,___S_settings)

___BEGIN_GLO
___DEF_GLO(0,"jazz:absolutize-sources?")
___DEF_GLO(1,"jazz:absolutize-sources?^2331")
___DEF_GLO(2,"jazz:build-binary-repositories")
___DEF_GLO(3,"jazz:build-binary-repositories^2343")

___DEF_GLO(4,"jazz:build-configuration")
___DEF_GLO(5,"jazz:build-configuration^2351")
___DEF_GLO(6,"jazz:build-configure")
___DEF_GLO(7,"jazz:build-configure^2341")
___DEF_GLO(8,"jazz:build-jazzini-access?")
___DEF_GLO(9,"jazz:build-jazzini-access?^2345")
___DEF_GLO(10,"jazz:build-jobs")
___DEF_GLO(11,"jazz:build-jobs^2349")
___DEF_GLO(12,"jazz:build-link")
___DEF_GLO(13,"jazz:build-link^2348")
___DEF_GLO(14,"jazz:build-repository")
___DEF_GLO(15,"jazz:build-repository^2327")
___DEF_GLO(16,"jazz:build-setup")
___DEF_GLO(17,"jazz:build-setup^2342")
___DEF_GLO(18,"jazz:build-single-objects?")
___DEF_GLO(19,"jazz:build-single-objects?^2346")
___DEF_GLO(20,"jazz:build-source-access?")
___DEF_GLO(21,"jazz:build-source-access?^2344")
___DEF_GLO(22,"jazz:build-target")
___DEF_GLO(23,"jazz:build-target^2350")
___DEF_GLO(24,"jazz:build-windows-homedir")
___DEF_GLO(25,"jazz:build-windows-homedir^2347")
___DEF_GLO(26,"jazz:debug-build?")
___DEF_GLO(27,"jazz:debug-build?^2340")
___DEF_GLO(28,"jazz:debug-expansion?")
___DEF_GLO(29,"jazz:debug-expansion?^2326")
___DEF_GLO(30,"jazz:debug-specializers")
___DEF_GLO(31,"jazz:debug-specializers^2355")
___DEF_GLO(32,"jazz:delay-reporting?")
___DEF_GLO(33,"jazz:delay-reporting?^2338")
___DEF_GLO(34,"jazz:dependencies")
___DEF_GLO(35,"jazz:dependencies^2330")
___DEF_GLO(36,"jazz:done-verbose?")
___DEF_GLO(37,"jazz:done-verbose?^2335")
___DEF_GLO(38,"jazz:dry-run?")
___DEF_GLO(39,"jazz:dry-run?^2353")
___DEF_GLO(40,"jazz:font-engine")
___DEF_GLO(41,"jazz:font-engine^2361")
___DEF_GLO(42,"jazz:force-interpreted?")
___DEF_GLO(43,"jazz:force-interpreted?^2356")
___DEF_GLO(44,"jazz:force-outlines?")
___DEF_GLO(45,"jazz:force-outlines?^2352")
___DEF_GLO(46,"jazz:jazz-repository")
___DEF_GLO(47,"jazz:jazz-repository^2328")
___DEF_GLO(48,"jazz:load-verbose?")
___DEF_GLO(49,"jazz:load-verbose?^2333")
___DEF_GLO(50,"jazz:outline-verbose?")
___DEF_GLO(51,"jazz:outline-verbose?^2334")
___DEF_GLO(52,"jazz:profile-walker?")
___DEF_GLO(53,"jazz:profile-walker?^2360")
___DEF_GLO(54,"jazz:repositories")
___DEF_GLO(55,"jazz:repositories^2329")
___DEF_GLO(56,"jazz:save-emit?")
___DEF_GLO(57,"jazz:save-emit?^2354")
___DEF_GLO(58,"jazz:unit-verbose?")
___DEF_GLO(59,"jazz:unit-verbose?^2332")
___DEF_GLO(60,"jazz:use-debugger?")
___DEF_GLO(61,"jazz:use-debugger?^2357")
___DEF_GLO(62,"jazz:use-print?")
___DEF_GLO(63,"jazz:use-print?^2339")
___DEF_GLO(64,"jazz:use-snapshot?")
___DEF_GLO(65,"jazz:use-snapshot?^2358")
___DEF_GLO(66,"jazz:warn-interpreted?")
___DEF_GLO(67,"jazz:warn-interpreted?^2336")
___DEF_GLO(68,"jazz:warnings?")
___DEF_GLO(69,"jazz:warnings?^2337")
___DEF_GLO(70,"jazz:worker-repl?")
___DEF_GLO(71,"jazz:worker-repl?^2359")
___DEF_GLO(72,"settings#")
___DEF_GLO(73,"jazz:verbose-kernel")
___END_GLO

#define ___GLO_jazz_3a_absolutize_2d_sources_3f_ ___GLO(0,___G_jazz_3a_absolutize_2d_sources_3f_)
#define ___PRM_jazz_3a_absolutize_2d_sources_3f_ ___PRM(0,___G_jazz_3a_absolutize_2d_sources_3f_)
#define ___GLO_jazz_3a_absolutize_2d_sources_3f__5e_2331 ___GLO(1,___G_jazz_3a_absolutize_2d_sources_3f__5e_2331)
#define ___PRM_jazz_3a_absolutize_2d_sources_3f__5e_2331 ___PRM(1,___G_jazz_3a_absolutize_2d_sources_3f__5e_2331)
#define ___GLO_jazz_3a_build_2d_binary_2d_repositories ___GLO(2,___G_jazz_3a_build_2d_binary_2d_repositories)
#define ___PRM_jazz_3a_build_2d_binary_2d_repositories ___PRM(2,___G_jazz_3a_build_2d_binary_2d_repositories)
#define ___GLO_jazz_3a_build_2d_binary_2d_repositories_5e_2343 ___GLO(3,___G_jazz_3a_build_2d_binary_2d_repositories_5e_2343)
#define ___PRM_jazz_3a_build_2d_binary_2d_repositories_5e_2343 ___PRM(3,___G_jazz_3a_build_2d_binary_2d_repositories_5e_2343)
#define ___GLO_jazz_3a_build_2d_configuration ___GLO(4,___G_jazz_3a_build_2d_configuration)
#define ___PRM_jazz_3a_build_2d_configuration ___PRM(4,___G_jazz_3a_build_2d_configuration)
#define ___GLO_jazz_3a_build_2d_configuration_5e_2351 ___GLO(5,___G_jazz_3a_build_2d_configuration_5e_2351)
#define ___PRM_jazz_3a_build_2d_configuration_5e_2351 ___PRM(5,___G_jazz_3a_build_2d_configuration_5e_2351)
#define ___GLO_jazz_3a_build_2d_configure ___GLO(6,___G_jazz_3a_build_2d_configure)
#define ___PRM_jazz_3a_build_2d_configure ___PRM(6,___G_jazz_3a_build_2d_configure)
#define ___GLO_jazz_3a_build_2d_configure_5e_2341 ___GLO(7,___G_jazz_3a_build_2d_configure_5e_2341)
#define ___PRM_jazz_3a_build_2d_configure_5e_2341 ___PRM(7,___G_jazz_3a_build_2d_configure_5e_2341)
#define ___GLO_jazz_3a_build_2d_jazzini_2d_access_3f_ ___GLO(8,___G_jazz_3a_build_2d_jazzini_2d_access_3f_)
#define ___PRM_jazz_3a_build_2d_jazzini_2d_access_3f_ ___PRM(8,___G_jazz_3a_build_2d_jazzini_2d_access_3f_)
#define ___GLO_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345 ___GLO(9,___G_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345)
#define ___PRM_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345 ___PRM(9,___G_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345)
#define ___GLO_jazz_3a_build_2d_jobs ___GLO(10,___G_jazz_3a_build_2d_jobs)
#define ___PRM_jazz_3a_build_2d_jobs ___PRM(10,___G_jazz_3a_build_2d_jobs)
#define ___GLO_jazz_3a_build_2d_jobs_5e_2349 ___GLO(11,___G_jazz_3a_build_2d_jobs_5e_2349)
#define ___PRM_jazz_3a_build_2d_jobs_5e_2349 ___PRM(11,___G_jazz_3a_build_2d_jobs_5e_2349)
#define ___GLO_jazz_3a_build_2d_link ___GLO(12,___G_jazz_3a_build_2d_link)
#define ___PRM_jazz_3a_build_2d_link ___PRM(12,___G_jazz_3a_build_2d_link)
#define ___GLO_jazz_3a_build_2d_link_5e_2348 ___GLO(13,___G_jazz_3a_build_2d_link_5e_2348)
#define ___PRM_jazz_3a_build_2d_link_5e_2348 ___PRM(13,___G_jazz_3a_build_2d_link_5e_2348)
#define ___GLO_jazz_3a_build_2d_repository ___GLO(14,___G_jazz_3a_build_2d_repository)
#define ___PRM_jazz_3a_build_2d_repository ___PRM(14,___G_jazz_3a_build_2d_repository)
#define ___GLO_jazz_3a_build_2d_repository_5e_2327 ___GLO(15,___G_jazz_3a_build_2d_repository_5e_2327)
#define ___PRM_jazz_3a_build_2d_repository_5e_2327 ___PRM(15,___G_jazz_3a_build_2d_repository_5e_2327)
#define ___GLO_jazz_3a_build_2d_setup ___GLO(16,___G_jazz_3a_build_2d_setup)
#define ___PRM_jazz_3a_build_2d_setup ___PRM(16,___G_jazz_3a_build_2d_setup)
#define ___GLO_jazz_3a_build_2d_setup_5e_2342 ___GLO(17,___G_jazz_3a_build_2d_setup_5e_2342)
#define ___PRM_jazz_3a_build_2d_setup_5e_2342 ___PRM(17,___G_jazz_3a_build_2d_setup_5e_2342)
#define ___GLO_jazz_3a_build_2d_single_2d_objects_3f_ ___GLO(18,___G_jazz_3a_build_2d_single_2d_objects_3f_)
#define ___PRM_jazz_3a_build_2d_single_2d_objects_3f_ ___PRM(18,___G_jazz_3a_build_2d_single_2d_objects_3f_)
#define ___GLO_jazz_3a_build_2d_single_2d_objects_3f__5e_2346 ___GLO(19,___G_jazz_3a_build_2d_single_2d_objects_3f__5e_2346)
#define ___PRM_jazz_3a_build_2d_single_2d_objects_3f__5e_2346 ___PRM(19,___G_jazz_3a_build_2d_single_2d_objects_3f__5e_2346)
#define ___GLO_jazz_3a_build_2d_source_2d_access_3f_ ___GLO(20,___G_jazz_3a_build_2d_source_2d_access_3f_)
#define ___PRM_jazz_3a_build_2d_source_2d_access_3f_ ___PRM(20,___G_jazz_3a_build_2d_source_2d_access_3f_)
#define ___GLO_jazz_3a_build_2d_source_2d_access_3f__5e_2344 ___GLO(21,___G_jazz_3a_build_2d_source_2d_access_3f__5e_2344)
#define ___PRM_jazz_3a_build_2d_source_2d_access_3f__5e_2344 ___PRM(21,___G_jazz_3a_build_2d_source_2d_access_3f__5e_2344)
#define ___GLO_jazz_3a_build_2d_target ___GLO(22,___G_jazz_3a_build_2d_target)
#define ___PRM_jazz_3a_build_2d_target ___PRM(22,___G_jazz_3a_build_2d_target)
#define ___GLO_jazz_3a_build_2d_target_5e_2350 ___GLO(23,___G_jazz_3a_build_2d_target_5e_2350)
#define ___PRM_jazz_3a_build_2d_target_5e_2350 ___PRM(23,___G_jazz_3a_build_2d_target_5e_2350)
#define ___GLO_jazz_3a_build_2d_windows_2d_homedir ___GLO(24,___G_jazz_3a_build_2d_windows_2d_homedir)
#define ___PRM_jazz_3a_build_2d_windows_2d_homedir ___PRM(24,___G_jazz_3a_build_2d_windows_2d_homedir)
#define ___GLO_jazz_3a_build_2d_windows_2d_homedir_5e_2347 ___GLO(25,___G_jazz_3a_build_2d_windows_2d_homedir_5e_2347)
#define ___PRM_jazz_3a_build_2d_windows_2d_homedir_5e_2347 ___PRM(25,___G_jazz_3a_build_2d_windows_2d_homedir_5e_2347)
#define ___GLO_jazz_3a_debug_2d_build_3f_ ___GLO(26,___G_jazz_3a_debug_2d_build_3f_)
#define ___PRM_jazz_3a_debug_2d_build_3f_ ___PRM(26,___G_jazz_3a_debug_2d_build_3f_)
#define ___GLO_jazz_3a_debug_2d_build_3f__5e_2340 ___GLO(27,___G_jazz_3a_debug_2d_build_3f__5e_2340)
#define ___PRM_jazz_3a_debug_2d_build_3f__5e_2340 ___PRM(27,___G_jazz_3a_debug_2d_build_3f__5e_2340)
#define ___GLO_jazz_3a_debug_2d_expansion_3f_ ___GLO(28,___G_jazz_3a_debug_2d_expansion_3f_)
#define ___PRM_jazz_3a_debug_2d_expansion_3f_ ___PRM(28,___G_jazz_3a_debug_2d_expansion_3f_)
#define ___GLO_jazz_3a_debug_2d_expansion_3f__5e_2326 ___GLO(29,___G_jazz_3a_debug_2d_expansion_3f__5e_2326)
#define ___PRM_jazz_3a_debug_2d_expansion_3f__5e_2326 ___PRM(29,___G_jazz_3a_debug_2d_expansion_3f__5e_2326)
#define ___GLO_jazz_3a_debug_2d_specializers ___GLO(30,___G_jazz_3a_debug_2d_specializers)
#define ___PRM_jazz_3a_debug_2d_specializers ___PRM(30,___G_jazz_3a_debug_2d_specializers)
#define ___GLO_jazz_3a_debug_2d_specializers_5e_2355 ___GLO(31,___G_jazz_3a_debug_2d_specializers_5e_2355)
#define ___PRM_jazz_3a_debug_2d_specializers_5e_2355 ___PRM(31,___G_jazz_3a_debug_2d_specializers_5e_2355)
#define ___GLO_jazz_3a_delay_2d_reporting_3f_ ___GLO(32,___G_jazz_3a_delay_2d_reporting_3f_)
#define ___PRM_jazz_3a_delay_2d_reporting_3f_ ___PRM(32,___G_jazz_3a_delay_2d_reporting_3f_)
#define ___GLO_jazz_3a_delay_2d_reporting_3f__5e_2338 ___GLO(33,___G_jazz_3a_delay_2d_reporting_3f__5e_2338)
#define ___PRM_jazz_3a_delay_2d_reporting_3f__5e_2338 ___PRM(33,___G_jazz_3a_delay_2d_reporting_3f__5e_2338)
#define ___GLO_jazz_3a_dependencies ___GLO(34,___G_jazz_3a_dependencies)
#define ___PRM_jazz_3a_dependencies ___PRM(34,___G_jazz_3a_dependencies)
#define ___GLO_jazz_3a_dependencies_5e_2330 ___GLO(35,___G_jazz_3a_dependencies_5e_2330)
#define ___PRM_jazz_3a_dependencies_5e_2330 ___PRM(35,___G_jazz_3a_dependencies_5e_2330)
#define ___GLO_jazz_3a_done_2d_verbose_3f_ ___GLO(36,___G_jazz_3a_done_2d_verbose_3f_)
#define ___PRM_jazz_3a_done_2d_verbose_3f_ ___PRM(36,___G_jazz_3a_done_2d_verbose_3f_)
#define ___GLO_jazz_3a_done_2d_verbose_3f__5e_2335 ___GLO(37,___G_jazz_3a_done_2d_verbose_3f__5e_2335)
#define ___PRM_jazz_3a_done_2d_verbose_3f__5e_2335 ___PRM(37,___G_jazz_3a_done_2d_verbose_3f__5e_2335)
#define ___GLO_jazz_3a_dry_2d_run_3f_ ___GLO(38,___G_jazz_3a_dry_2d_run_3f_)
#define ___PRM_jazz_3a_dry_2d_run_3f_ ___PRM(38,___G_jazz_3a_dry_2d_run_3f_)
#define ___GLO_jazz_3a_dry_2d_run_3f__5e_2353 ___GLO(39,___G_jazz_3a_dry_2d_run_3f__5e_2353)
#define ___PRM_jazz_3a_dry_2d_run_3f__5e_2353 ___PRM(39,___G_jazz_3a_dry_2d_run_3f__5e_2353)
#define ___GLO_jazz_3a_font_2d_engine ___GLO(40,___G_jazz_3a_font_2d_engine)
#define ___PRM_jazz_3a_font_2d_engine ___PRM(40,___G_jazz_3a_font_2d_engine)
#define ___GLO_jazz_3a_font_2d_engine_5e_2361 ___GLO(41,___G_jazz_3a_font_2d_engine_5e_2361)
#define ___PRM_jazz_3a_font_2d_engine_5e_2361 ___PRM(41,___G_jazz_3a_font_2d_engine_5e_2361)
#define ___GLO_jazz_3a_force_2d_interpreted_3f_ ___GLO(42,___G_jazz_3a_force_2d_interpreted_3f_)
#define ___PRM_jazz_3a_force_2d_interpreted_3f_ ___PRM(42,___G_jazz_3a_force_2d_interpreted_3f_)
#define ___GLO_jazz_3a_force_2d_interpreted_3f__5e_2356 ___GLO(43,___G_jazz_3a_force_2d_interpreted_3f__5e_2356)
#define ___PRM_jazz_3a_force_2d_interpreted_3f__5e_2356 ___PRM(43,___G_jazz_3a_force_2d_interpreted_3f__5e_2356)
#define ___GLO_jazz_3a_force_2d_outlines_3f_ ___GLO(44,___G_jazz_3a_force_2d_outlines_3f_)
#define ___PRM_jazz_3a_force_2d_outlines_3f_ ___PRM(44,___G_jazz_3a_force_2d_outlines_3f_)
#define ___GLO_jazz_3a_force_2d_outlines_3f__5e_2352 ___GLO(45,___G_jazz_3a_force_2d_outlines_3f__5e_2352)
#define ___PRM_jazz_3a_force_2d_outlines_3f__5e_2352 ___PRM(45,___G_jazz_3a_force_2d_outlines_3f__5e_2352)
#define ___GLO_jazz_3a_jazz_2d_repository ___GLO(46,___G_jazz_3a_jazz_2d_repository)
#define ___PRM_jazz_3a_jazz_2d_repository ___PRM(46,___G_jazz_3a_jazz_2d_repository)
#define ___GLO_jazz_3a_jazz_2d_repository_5e_2328 ___GLO(47,___G_jazz_3a_jazz_2d_repository_5e_2328)
#define ___PRM_jazz_3a_jazz_2d_repository_5e_2328 ___PRM(47,___G_jazz_3a_jazz_2d_repository_5e_2328)
#define ___GLO_jazz_3a_load_2d_verbose_3f_ ___GLO(48,___G_jazz_3a_load_2d_verbose_3f_)
#define ___PRM_jazz_3a_load_2d_verbose_3f_ ___PRM(48,___G_jazz_3a_load_2d_verbose_3f_)
#define ___GLO_jazz_3a_load_2d_verbose_3f__5e_2333 ___GLO(49,___G_jazz_3a_load_2d_verbose_3f__5e_2333)
#define ___PRM_jazz_3a_load_2d_verbose_3f__5e_2333 ___PRM(49,___G_jazz_3a_load_2d_verbose_3f__5e_2333)
#define ___GLO_jazz_3a_outline_2d_verbose_3f_ ___GLO(50,___G_jazz_3a_outline_2d_verbose_3f_)
#define ___PRM_jazz_3a_outline_2d_verbose_3f_ ___PRM(50,___G_jazz_3a_outline_2d_verbose_3f_)
#define ___GLO_jazz_3a_outline_2d_verbose_3f__5e_2334 ___GLO(51,___G_jazz_3a_outline_2d_verbose_3f__5e_2334)
#define ___PRM_jazz_3a_outline_2d_verbose_3f__5e_2334 ___PRM(51,___G_jazz_3a_outline_2d_verbose_3f__5e_2334)
#define ___GLO_jazz_3a_profile_2d_walker_3f_ ___GLO(52,___G_jazz_3a_profile_2d_walker_3f_)
#define ___PRM_jazz_3a_profile_2d_walker_3f_ ___PRM(52,___G_jazz_3a_profile_2d_walker_3f_)
#define ___GLO_jazz_3a_profile_2d_walker_3f__5e_2360 ___GLO(53,___G_jazz_3a_profile_2d_walker_3f__5e_2360)
#define ___PRM_jazz_3a_profile_2d_walker_3f__5e_2360 ___PRM(53,___G_jazz_3a_profile_2d_walker_3f__5e_2360)
#define ___GLO_jazz_3a_repositories ___GLO(54,___G_jazz_3a_repositories)
#define ___PRM_jazz_3a_repositories ___PRM(54,___G_jazz_3a_repositories)
#define ___GLO_jazz_3a_repositories_5e_2329 ___GLO(55,___G_jazz_3a_repositories_5e_2329)
#define ___PRM_jazz_3a_repositories_5e_2329 ___PRM(55,___G_jazz_3a_repositories_5e_2329)
#define ___GLO_jazz_3a_save_2d_emit_3f_ ___GLO(56,___G_jazz_3a_save_2d_emit_3f_)
#define ___PRM_jazz_3a_save_2d_emit_3f_ ___PRM(56,___G_jazz_3a_save_2d_emit_3f_)
#define ___GLO_jazz_3a_save_2d_emit_3f__5e_2354 ___GLO(57,___G_jazz_3a_save_2d_emit_3f__5e_2354)
#define ___PRM_jazz_3a_save_2d_emit_3f__5e_2354 ___PRM(57,___G_jazz_3a_save_2d_emit_3f__5e_2354)
#define ___GLO_jazz_3a_unit_2d_verbose_3f_ ___GLO(58,___G_jazz_3a_unit_2d_verbose_3f_)
#define ___PRM_jazz_3a_unit_2d_verbose_3f_ ___PRM(58,___G_jazz_3a_unit_2d_verbose_3f_)
#define ___GLO_jazz_3a_unit_2d_verbose_3f__5e_2332 ___GLO(59,___G_jazz_3a_unit_2d_verbose_3f__5e_2332)
#define ___PRM_jazz_3a_unit_2d_verbose_3f__5e_2332 ___PRM(59,___G_jazz_3a_unit_2d_verbose_3f__5e_2332)
#define ___GLO_jazz_3a_use_2d_debugger_3f_ ___GLO(60,___G_jazz_3a_use_2d_debugger_3f_)
#define ___PRM_jazz_3a_use_2d_debugger_3f_ ___PRM(60,___G_jazz_3a_use_2d_debugger_3f_)
#define ___GLO_jazz_3a_use_2d_debugger_3f__5e_2357 ___GLO(61,___G_jazz_3a_use_2d_debugger_3f__5e_2357)
#define ___PRM_jazz_3a_use_2d_debugger_3f__5e_2357 ___PRM(61,___G_jazz_3a_use_2d_debugger_3f__5e_2357)
#define ___GLO_jazz_3a_use_2d_print_3f_ ___GLO(62,___G_jazz_3a_use_2d_print_3f_)
#define ___PRM_jazz_3a_use_2d_print_3f_ ___PRM(62,___G_jazz_3a_use_2d_print_3f_)
#define ___GLO_jazz_3a_use_2d_print_3f__5e_2339 ___GLO(63,___G_jazz_3a_use_2d_print_3f__5e_2339)
#define ___PRM_jazz_3a_use_2d_print_3f__5e_2339 ___PRM(63,___G_jazz_3a_use_2d_print_3f__5e_2339)
#define ___GLO_jazz_3a_use_2d_snapshot_3f_ ___GLO(64,___G_jazz_3a_use_2d_snapshot_3f_)
#define ___PRM_jazz_3a_use_2d_snapshot_3f_ ___PRM(64,___G_jazz_3a_use_2d_snapshot_3f_)
#define ___GLO_jazz_3a_use_2d_snapshot_3f__5e_2358 ___GLO(65,___G_jazz_3a_use_2d_snapshot_3f__5e_2358)
#define ___PRM_jazz_3a_use_2d_snapshot_3f__5e_2358 ___PRM(65,___G_jazz_3a_use_2d_snapshot_3f__5e_2358)
#define ___GLO_jazz_3a_warn_2d_interpreted_3f_ ___GLO(66,___G_jazz_3a_warn_2d_interpreted_3f_)
#define ___PRM_jazz_3a_warn_2d_interpreted_3f_ ___PRM(66,___G_jazz_3a_warn_2d_interpreted_3f_)
#define ___GLO_jazz_3a_warn_2d_interpreted_3f__5e_2336 ___GLO(67,___G_jazz_3a_warn_2d_interpreted_3f__5e_2336)
#define ___PRM_jazz_3a_warn_2d_interpreted_3f__5e_2336 ___PRM(67,___G_jazz_3a_warn_2d_interpreted_3f__5e_2336)
#define ___GLO_jazz_3a_warnings_3f_ ___GLO(68,___G_jazz_3a_warnings_3f_)
#define ___PRM_jazz_3a_warnings_3f_ ___PRM(68,___G_jazz_3a_warnings_3f_)
#define ___GLO_jazz_3a_warnings_3f__5e_2337 ___GLO(69,___G_jazz_3a_warnings_3f__5e_2337)
#define ___PRM_jazz_3a_warnings_3f__5e_2337 ___PRM(69,___G_jazz_3a_warnings_3f__5e_2337)
#define ___GLO_jazz_3a_worker_2d_repl_3f_ ___GLO(70,___G_jazz_3a_worker_2d_repl_3f_)
#define ___PRM_jazz_3a_worker_2d_repl_3f_ ___PRM(70,___G_jazz_3a_worker_2d_repl_3f_)
#define ___GLO_jazz_3a_worker_2d_repl_3f__5e_2359 ___GLO(71,___G_jazz_3a_worker_2d_repl_3f__5e_2359)
#define ___PRM_jazz_3a_worker_2d_repl_3f__5e_2359 ___PRM(71,___G_jazz_3a_worker_2d_repl_3f__5e_2359)
#define ___GLO_settings_23_ ___GLO(72,___G_settings_23_)
#define ___PRM_settings_23_ ___PRM(72,___G_settings_23_)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(73,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(73,___G_jazz_3a_verbose_2d_kernel)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X1,4UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(7))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,57UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,115,101,116)
               ___STR8(116,105,110,103,115,46,115,99)
               ___STR1(109)
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(6))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(216))
               ___VEC0
___DEF_SUB_VEC(___X11,0UL)
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(13))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X13,1UL)
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X16,0UL)
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SUB(18))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X18,1UL)
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X21,0UL)
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X23,1UL)
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(57))
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
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(60))
               ___VEC0
___DEF_SUB_VEC(___X31,0UL)
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X33,1UL)
               ___VEC1(___REF_SUB(34))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(63))
               ___VEC0
___DEF_SUB_VEC(___X36,0UL)
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X38,1UL)
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(66))
               ___VEC0
___DEF_SUB_VEC(___X41,0UL)
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X43,1UL)
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(75))
               ___VEC0
___DEF_SUB_VEC(___X46,0UL)
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X48,1UL)
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(78))
               ___VEC0
___DEF_SUB_VEC(___X51,0UL)
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X53,1UL)
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(81))
               ___VEC0
___DEF_SUB_VEC(___X56,0UL)
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X58,1UL)
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(60))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(84))
               ___VEC0
___DEF_SUB_VEC(___X61,0UL)
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(66))
               ___VEC0
___DEF_SUB_VEC(___X63,1UL)
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(93))
               ___VEC0
___DEF_SUB_VEC(___X66,0UL)
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X68,1UL)
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(70))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(103))
               ___VEC0
___DEF_SUB_VEC(___X71,0UL)
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(76))
               ___VEC0
___DEF_SUB_VEC(___X73,1UL)
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(107))
               ___VEC0
___DEF_SUB_VEC(___X76,0UL)
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X78,1UL)
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(117))
               ___VEC0
___DEF_SUB_VEC(___X81,0UL)
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X83,1UL)
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(126))
               ___VEC0
___DEF_SUB_VEC(___X86,0UL)
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X88,1UL)
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(129))
               ___VEC0
___DEF_SUB_VEC(___X91,0UL)
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(96))
               ___VEC0
___DEF_SUB_VEC(___X93,1UL)
               ___VEC1(___REF_SUB(94))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(95))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(132))
               ___VEC0
___DEF_SUB_VEC(___X96,0UL)
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X98,1UL)
               ___VEC1(___REF_SUB(99))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(100))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(135))
               ___VEC0
___DEF_SUB_VEC(___X101,0UL)
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(106))
               ___VEC0
___DEF_SUB_VEC(___X103,1UL)
               ___VEC1(___REF_SUB(104))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(105))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(138))
               ___VEC0
___DEF_SUB_VEC(___X106,0UL)
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X108,1UL)
               ___VEC1(___REF_SUB(109))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(110))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(141))
               ___VEC0
___DEF_SUB_VEC(___X111,0UL)
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_SUB(116))
               ___VEC0
___DEF_SUB_VEC(___X113,1UL)
               ___VEC1(___REF_SUB(114))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(115))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(144))
               ___VEC0
___DEF_SUB_VEC(___X116,0UL)
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_SUB(121))
               ___VEC0
___DEF_SUB_VEC(___X118,1UL)
               ___VEC1(___REF_SUB(119))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(120))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(147))
               ___VEC0
___DEF_SUB_VEC(___X121,0UL)
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(126))
               ___VEC0
___DEF_SUB_VEC(___X123,1UL)
               ___VEC1(___REF_SUB(124))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(150))
               ___VEC0
___DEF_SUB_VEC(___X126,0UL)
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
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(153))
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
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(156))
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
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(159))
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
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(162))
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
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(165))
               ___VEC0
___DEF_SUB_VEC(___X151,0UL)
               ___VEC0
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_SUB(156))
               ___VEC0
___DEF_SUB_VEC(___X153,1UL)
               ___VEC1(___REF_SUB(154))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(155))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(168))
               ___VEC0
___DEF_SUB_VEC(___X156,0UL)
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_SUB(161))
               ___VEC0
___DEF_SUB_VEC(___X158,1UL)
               ___VEC1(___REF_SUB(159))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(160))
               ___VEC0
___DEF_SUB_VEC(___X160,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(177))
               ___VEC0
___DEF_SUB_VEC(___X161,0UL)
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(166))
               ___VEC0
___DEF_SUB_VEC(___X163,1UL)
               ___VEC1(___REF_SUB(164))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(165))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(181))
               ___VEC0
___DEF_SUB_VEC(___X166,0UL)
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(171))
               ___VEC0
___DEF_SUB_VEC(___X168,1UL)
               ___VEC1(___REF_SUB(169))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(170))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(185))
               ___VEC0
___DEF_SUB_VEC(___X171,0UL)
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_SUB(176))
               ___VEC0
___DEF_SUB_VEC(___X173,1UL)
               ___VEC1(___REF_SUB(174))
               ___VEC0
___DEF_SUB_VEC(___X174,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(175))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(189))
               ___VEC0
___DEF_SUB_VEC(___X176,0UL)
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SUB(178))
               ___VEC1(___REF_SUB(181))
               ___VEC0
___DEF_SUB_VEC(___X178,1UL)
               ___VEC1(___REF_SUB(179))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(198))
               ___VEC0
___DEF_SUB_VEC(___X181,0UL)
               ___VEC0
___DEF_SUB_VEC(___X182,2UL)
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_SUB(186))
               ___VEC0
___DEF_SUB_VEC(___X183,1UL)
               ___VEC1(___REF_SUB(184))
               ___VEC0
___DEF_SUB_VEC(___X184,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(185))
               ___VEC0
___DEF_SUB_VEC(___X185,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(207))
               ___VEC0
___DEF_SUB_VEC(___X186,0UL)
               ___VEC0
___DEF_SUB_VEC(___X187,2UL)
               ___VEC1(___REF_SUB(188))
               ___VEC1(___REF_SUB(191))
               ___VEC0
___DEF_SUB_VEC(___X188,1UL)
               ___VEC1(___REF_SUB(189))
               ___VEC0
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(190))
               ___VEC0
___DEF_SUB_VEC(___X190,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(216))
               ___VEC0
___DEF_SUB_VEC(___X191,0UL)
               ___VEC0
___DEF_SUB_VEC(___X192,5UL)
               ___VEC1(___REF_SYM(2,___S_settings))
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
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_settings_23_)
___DEF_M_HLBL(___L1_settings_23_)
___DEF_M_HLBL(___L2_settings_23_)
___DEF_M_HLBL(___L3_settings_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_debug_2d_expansion_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_repository)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_jazz_2d_repository)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_repositories)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_dependencies)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_absolutize_2d_sources_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_unit_2d_verbose_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_load_2d_verbose_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_outline_2d_verbose_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_done_2d_verbose_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_warn_2d_interpreted_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_warnings_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_delay_2d_reporting_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_use_2d_print_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_debug_2d_build_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_configure)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_setup)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_binary_2d_repositories)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_source_2d_access_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_jazzini_2d_access_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_single_2d_objects_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_windows_2d_homedir)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_link)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_jobs)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_target)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_configuration)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_force_2d_outlines_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_dry_2d_run_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_save_2d_emit_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_debug_2d_specializers)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_force_2d_interpreted_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_use_2d_debugger_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_use_2d_snapshot_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_worker_2d_repl_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_profile_2d_walker_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_font_2d_engine)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_settings_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_settings_23_)
___DEF_P_HLBL(___L1_settings_23_)
___DEF_P_HLBL(___L2_settings_23_)
___DEF_P_HLBL(___L3_settings_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_settings_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_settings_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_settings)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_settings_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),73,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_settings_23_)
   ___SET_GLO(29,___G_jazz_3a_debug_2d_expansion_3f__5e_2326,___FAL)
   ___SET_GLO(15,___G_jazz_3a_build_2d_repository_5e_2327,___FAL)
   ___SET_GLO(47,___G_jazz_3a_jazz_2d_repository_5e_2328,___FAL)
   ___SET_GLO(55,___G_jazz_3a_repositories_5e_2329,___FAL)
   ___SET_GLO(35,___G_jazz_3a_dependencies_5e_2330,___FAL)
   ___SET_GLO(1,___G_jazz_3a_absolutize_2d_sources_3f__5e_2331,___FAL)
   ___SET_GLO(59,___G_jazz_3a_unit_2d_verbose_3f__5e_2332,___FAL)
   ___SET_GLO(49,___G_jazz_3a_load_2d_verbose_3f__5e_2333,___FAL)
   ___SET_GLO(51,___G_jazz_3a_outline_2d_verbose_3f__5e_2334,___FAL)
   ___SET_GLO(37,___G_jazz_3a_done_2d_verbose_3f__5e_2335,___FAL)
   ___SET_GLO(67,___G_jazz_3a_warn_2d_interpreted_3f__5e_2336,___FAL)
   ___SET_GLO(69,___G_jazz_3a_warnings_3f__5e_2337,___FAL)
   ___SET_GLO(33,___G_jazz_3a_delay_2d_reporting_3f__5e_2338,___TRU)
   ___SET_GLO(63,___G_jazz_3a_use_2d_print_3f__5e_2339,___TRU)
   ___SET_GLO(27,___G_jazz_3a_debug_2d_build_3f__5e_2340,___FAL)
   ___SET_GLO(7,___G_jazz_3a_build_2d_configure_5e_2341,___FAL)
   ___SET_GLO(17,___G_jazz_3a_build_2d_setup_5e_2342,___FAL)
   ___SET_GLO(3,___G_jazz_3a_build_2d_binary_2d_repositories_5e_2343,___FAL)
   ___SET_GLO(21,___G_jazz_3a_build_2d_source_2d_access_3f__5e_2344,___TRU)
   ___SET_GLO(9,___G_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345,___TRU)
   ___SET_GLO(19,___G_jazz_3a_build_2d_single_2d_objects_3f__5e_2346,___FAL)
   ___SET_GLO(25,___G_jazz_3a_build_2d_windows_2d_homedir_5e_2347,___FAL)
   ___SET_GLO(13,___G_jazz_3a_build_2d_link_5e_2348,___SYM_objects)
   ___SET_GLO(11,___G_jazz_3a_build_2d_jobs_5e_2349,___FAL)
   ___SET_GLO(23,___G_jazz_3a_build_2d_target_5e_2350,___FAL)
   ___SET_GLO(5,___G_jazz_3a_build_2d_configuration_5e_2351,___FAL)
   ___SET_GLO(45,___G_jazz_3a_force_2d_outlines_3f__5e_2352,___FAL)
   ___SET_GLO(39,___G_jazz_3a_dry_2d_run_3f__5e_2353,___FAL)
   ___SET_GLO(57,___G_jazz_3a_save_2d_emit_3f__5e_2354,___FAL)
   ___SET_GLO(31,___G_jazz_3a_debug_2d_specializers_5e_2355,___NUL)
   ___SET_GLO(43,___G_jazz_3a_force_2d_interpreted_3f__5e_2356,___FAL)
   ___SET_GLO(61,___G_jazz_3a_use_2d_debugger_3f__5e_2357,___TRU)
   ___SET_GLO(65,___G_jazz_3a_use_2d_snapshot_3f__5e_2358,___TRU)
   ___SET_GLO(71,___G_jazz_3a_worker_2d_repl_3f__5e_2359,___FAL)
   ___SET_GLO(53,___G_jazz_3a_profile_2d_walker_3f__5e_2360,___FAL)
   ___SET_GLO(41,___G_jazz_3a_font_2d_engine_5e_2361,___FAL)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_settings_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_debug_2d_expansion_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 6
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_debug_2d_expansion_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_debug_2d_expansion_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_debug_2d_expansion_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_debug_2d_expansion_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_debug_2d_expansion_3f__5e_2326)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_debug_2d_expansion_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(29,___G_jazz_3a_debug_2d_expansion_3f__5e_2326,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_repository
#undef ___PH_LBL0
#define ___PH_LBL0 8
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_repository)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_repository)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_repository)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_repository)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_repository_5e_2327)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_repository)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(15,___G_jazz_3a_build_2d_repository_5e_2327,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_jazz_2d_repository
#undef ___PH_LBL0
#define ___PH_LBL0 10
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_jazz_2d_repository)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_jazz_2d_repository)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_jazz_2d_repository)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_jazz_2d_repository)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_jazz_2d_repository_5e_2328)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_jazz_2d_repository)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(47,___G_jazz_3a_jazz_2d_repository_5e_2328,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_repositories
#undef ___PH_LBL0
#define ___PH_LBL0 12
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_repositories)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_repositories)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_repositories)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_repositories)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_repositories_5e_2329)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_repositories)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(55,___G_jazz_3a_repositories_5e_2329,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_dependencies
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
___DEF_P_HLBL(___L0_jazz_3a_dependencies)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_dependencies)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_dependencies)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_dependencies)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_dependencies_5e_2330)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_dependencies)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(35,___G_jazz_3a_dependencies_5e_2330,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_absolutize_2d_sources_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 16
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_absolutize_2d_sources_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_absolutize_2d_sources_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_absolutize_2d_sources_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_absolutize_2d_sources_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_absolutize_2d_sources_3f__5e_2331)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_absolutize_2d_sources_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(1,___G_jazz_3a_absolutize_2d_sources_3f__5e_2331,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_unit_2d_verbose_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 18
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_unit_2d_verbose_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_unit_2d_verbose_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_unit_2d_verbose_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_unit_2d_verbose_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_unit_2d_verbose_3f__5e_2332)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_unit_2d_verbose_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(59,___G_jazz_3a_unit_2d_verbose_3f__5e_2332,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_load_2d_verbose_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 20
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_load_2d_verbose_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_load_2d_verbose_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_load_2d_verbose_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_load_2d_verbose_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_load_2d_verbose_3f__5e_2333)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_load_2d_verbose_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(49,___G_jazz_3a_load_2d_verbose_3f__5e_2333,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_outline_2d_verbose_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 22
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_outline_2d_verbose_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_outline_2d_verbose_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_outline_2d_verbose_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_outline_2d_verbose_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_outline_2d_verbose_3f__5e_2334)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_outline_2d_verbose_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(51,___G_jazz_3a_outline_2d_verbose_3f__5e_2334,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_done_2d_verbose_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 24
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_done_2d_verbose_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_done_2d_verbose_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_done_2d_verbose_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_done_2d_verbose_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_done_2d_verbose_3f__5e_2335)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_done_2d_verbose_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(37,___G_jazz_3a_done_2d_verbose_3f__5e_2335,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_warn_2d_interpreted_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 26
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_warn_2d_interpreted_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_warn_2d_interpreted_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_warn_2d_interpreted_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_warn_2d_interpreted_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_warn_2d_interpreted_3f__5e_2336)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_warn_2d_interpreted_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(67,___G_jazz_3a_warn_2d_interpreted_3f__5e_2336,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_warnings_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 28
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_warnings_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_warnings_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_warnings_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_warnings_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_warnings_3f__5e_2337)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_warnings_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(69,___G_jazz_3a_warnings_3f__5e_2337,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_delay_2d_reporting_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_delay_2d_reporting_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_delay_2d_reporting_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_delay_2d_reporting_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_delay_2d_reporting_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_delay_2d_reporting_3f__5e_2338)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_delay_2d_reporting_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(33,___G_jazz_3a_delay_2d_reporting_3f__5e_2338,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_use_2d_print_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 32
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_use_2d_print_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_use_2d_print_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_use_2d_print_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_use_2d_print_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_use_2d_print_3f__5e_2339)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_use_2d_print_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(63,___G_jazz_3a_use_2d_print_3f__5e_2339,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_debug_2d_build_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 34
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_debug_2d_build_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_debug_2d_build_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_debug_2d_build_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_debug_2d_build_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_debug_2d_build_3f__5e_2340)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_debug_2d_build_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(27,___G_jazz_3a_debug_2d_build_3f__5e_2340,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_configure
#undef ___PH_LBL0
#define ___PH_LBL0 36
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_configure)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_configure)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_configure)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_configure)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_configure_5e_2341)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_configure)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(7,___G_jazz_3a_build_2d_configure_5e_2341,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_setup
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
___DEF_P_HLBL(___L0_jazz_3a_build_2d_setup)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_setup)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_setup)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_setup)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_setup_5e_2342)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_setup)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(17,___G_jazz_3a_build_2d_setup_5e_2342,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_binary_2d_repositories
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
___DEF_P_HLBL(___L0_jazz_3a_build_2d_binary_2d_repositories)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_binary_2d_repositories)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_binary_2d_repositories)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_binary_2d_repositories)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_binary_2d_repositories_5e_2343)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_binary_2d_repositories)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(3,___G_jazz_3a_build_2d_binary_2d_repositories_5e_2343,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_source_2d_access_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 42
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_source_2d_access_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_source_2d_access_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_source_2d_access_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_source_2d_access_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_source_2d_access_3f__5e_2344)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_source_2d_access_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(21,___G_jazz_3a_build_2d_source_2d_access_3f__5e_2344,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_jazzini_2d_access_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 44
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_jazzini_2d_access_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_jazzini_2d_access_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_jazzini_2d_access_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_jazzini_2d_access_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_jazzini_2d_access_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(9,___G_jazz_3a_build_2d_jazzini_2d_access_3f__5e_2345,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_single_2d_objects_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 46
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_single_2d_objects_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_single_2d_objects_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_single_2d_objects_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_single_2d_objects_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_single_2d_objects_3f__5e_2346)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_single_2d_objects_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(19,___G_jazz_3a_build_2d_single_2d_objects_3f__5e_2346,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_windows_2d_homedir
#undef ___PH_LBL0
#define ___PH_LBL0 48
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_windows_2d_homedir)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_windows_2d_homedir)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_windows_2d_homedir)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_windows_2d_homedir)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_windows_2d_homedir_5e_2347)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_windows_2d_homedir)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(25,___G_jazz_3a_build_2d_windows_2d_homedir_5e_2347,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_link
#undef ___PH_LBL0
#define ___PH_LBL0 50
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_link)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_link)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_link)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_link)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_link_5e_2348)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_link)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(13,___G_jazz_3a_build_2d_link_5e_2348,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_jobs
#undef ___PH_LBL0
#define ___PH_LBL0 52
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_jobs)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_jobs)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_jobs)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_jobs)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_jobs_5e_2349)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_jobs)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(11,___G_jazz_3a_build_2d_jobs_5e_2349,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_target
#undef ___PH_LBL0
#define ___PH_LBL0 54
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_target)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_target)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_target)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_target)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_target_5e_2350)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_target)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(23,___G_jazz_3a_build_2d_target_5e_2350,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_configuration
#undef ___PH_LBL0
#define ___PH_LBL0 56
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_build_2d_configuration)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_configuration)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_build_2d_configuration)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_build_2d_configuration)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_build_2d_configuration_5e_2351)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_build_2d_configuration)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(5,___G_jazz_3a_build_2d_configuration_5e_2351,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_force_2d_outlines_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 58
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_force_2d_outlines_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_force_2d_outlines_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_force_2d_outlines_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_force_2d_outlines_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_force_2d_outlines_3f__5e_2352)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_force_2d_outlines_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(45,___G_jazz_3a_force_2d_outlines_3f__5e_2352,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_dry_2d_run_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 60
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_dry_2d_run_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_dry_2d_run_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_dry_2d_run_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_dry_2d_run_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_dry_2d_run_3f__5e_2353)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_dry_2d_run_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(39,___G_jazz_3a_dry_2d_run_3f__5e_2353,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_save_2d_emit_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 62
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_save_2d_emit_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_save_2d_emit_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_save_2d_emit_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_save_2d_emit_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_save_2d_emit_3f__5e_2354)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_save_2d_emit_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(57,___G_jazz_3a_save_2d_emit_3f__5e_2354,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_debug_2d_specializers
#undef ___PH_LBL0
#define ___PH_LBL0 64
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_debug_2d_specializers)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_debug_2d_specializers)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_debug_2d_specializers)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_debug_2d_specializers)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_debug_2d_specializers_5e_2355)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_debug_2d_specializers)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(31,___G_jazz_3a_debug_2d_specializers_5e_2355,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_force_2d_interpreted_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 66
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_force_2d_interpreted_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_force_2d_interpreted_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_force_2d_interpreted_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_force_2d_interpreted_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_force_2d_interpreted_3f__5e_2356)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_force_2d_interpreted_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(43,___G_jazz_3a_force_2d_interpreted_3f__5e_2356,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_use_2d_debugger_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 68
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_use_2d_debugger_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_use_2d_debugger_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_use_2d_debugger_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_use_2d_debugger_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_use_2d_debugger_3f__5e_2357)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_use_2d_debugger_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(61,___G_jazz_3a_use_2d_debugger_3f__5e_2357,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_use_2d_snapshot_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 70
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_use_2d_snapshot_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_use_2d_snapshot_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_use_2d_snapshot_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_use_2d_snapshot_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_use_2d_snapshot_3f__5e_2358)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_use_2d_snapshot_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(65,___G_jazz_3a_use_2d_snapshot_3f__5e_2358,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_worker_2d_repl_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 72
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_worker_2d_repl_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_worker_2d_repl_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_worker_2d_repl_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_worker_2d_repl_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_worker_2d_repl_3f__5e_2359)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_worker_2d_repl_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(71,___G_jazz_3a_worker_2d_repl_3f__5e_2359,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_profile_2d_walker_3f_
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
___DEF_P_HLBL(___L0_jazz_3a_profile_2d_walker_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_profile_2d_walker_3f_)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_profile_2d_walker_3f_)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_profile_2d_walker_3f_)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_profile_2d_walker_3f__5e_2360)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_profile_2d_walker_3f_)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(53,___G_jazz_3a_profile_2d_walker_3f__5e_2360,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_font_2d_engine
#undef ___PH_LBL0
#define ___PH_LBL0 76
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_font_2d_engine)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_font_2d_engine)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_font_2d_engine)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L1_jazz_3a_font_2d_engine)
   ___END_IF
   ___SET_R1(___GLO_jazz_3a_font_2d_engine_5e_2361)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_3a_font_2d_engine)
   ___SET_R1(___CAR(___R1))
   ___SET_GLO(41,___G_jazz_3a_font_2d_engine_5e_2361,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_settings_23_,"settings#",___REF_SUB(0),4,0)
,___DEF_LBL_PROC(___H_settings_23_,0,-1)
,___DEF_LBL_RET(___H_settings_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_settings_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_settings_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_debug_2d_expansion_3f_,"jazz:debug-expansion?",___REF_SUB(12),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_debug_2d_expansion_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_repository,"jazz:build-repository",___REF_SUB(17),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_build_2d_repository,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_jazz_2d_repository,"jazz:jazz-repository",___REF_SUB(22),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_jazz_2d_repository,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_repositories,"jazz:repositories",___REF_SUB(27),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_repositories,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_dependencies,"jazz:dependencies",___REF_SUB(32),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_dependencies,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_absolutize_2d_sources_3f_,"jazz:absolutize-sources?",___REF_SUB(37),
1,0)
,___DEF_LBL_PROC(___H_jazz_3a_absolutize_2d_sources_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_unit_2d_verbose_3f_,"jazz:unit-verbose?",___REF_SUB(42),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_unit_2d_verbose_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_load_2d_verbose_3f_,"jazz:load-verbose?",___REF_SUB(47),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_load_2d_verbose_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_outline_2d_verbose_3f_,"jazz:outline-verbose?",___REF_SUB(52),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_outline_2d_verbose_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_done_2d_verbose_3f_,"jazz:done-verbose?",___REF_SUB(57),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_done_2d_verbose_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_warn_2d_interpreted_3f_,"jazz:warn-interpreted?",___REF_SUB(62),1,
0)
,___DEF_LBL_PROC(___H_jazz_3a_warn_2d_interpreted_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_warnings_3f_,"jazz:warnings?",___REF_SUB(67),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_warnings_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_delay_2d_reporting_3f_,"jazz:delay-reporting?",___REF_SUB(72),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_delay_2d_reporting_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_use_2d_print_3f_,"jazz:use-print?",___REF_SUB(77),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_use_2d_print_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_debug_2d_build_3f_,"jazz:debug-build?",___REF_SUB(82),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_debug_2d_build_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_configure,"jazz:build-configure",___REF_SUB(87),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_build_2d_configure,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_setup,"jazz:build-setup",___REF_SUB(92),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_setup,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_binary_2d_repositories,"jazz:build-binary-repositories",
___REF_SUB(97),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_binary_2d_repositories,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_source_2d_access_3f_,"jazz:build-source-access?",___REF_SUB(102)
,1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_source_2d_access_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_jazzini_2d_access_3f_,"jazz:build-jazzini-access?",___REF_SUB(107)
,1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_jazzini_2d_access_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_single_2d_objects_3f_,"jazz:build-single-objects?",___REF_SUB(112)
,1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_single_2d_objects_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_windows_2d_homedir,"jazz:build-windows-homedir",___REF_SUB(117)
,1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_windows_2d_homedir,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_link,"jazz:build-link",___REF_SUB(122),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_link,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_jobs,"jazz:build-jobs",___REF_SUB(127),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_jobs,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_target,"jazz:build-target",___REF_SUB(132),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_target,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_configuration,"jazz:build-configuration",___REF_SUB(137),
1,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_configuration,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_force_2d_outlines_3f_,"jazz:force-outlines?",___REF_SUB(142),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_force_2d_outlines_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_dry_2d_run_3f_,"jazz:dry-run?",___REF_SUB(147),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_dry_2d_run_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_save_2d_emit_3f_,"jazz:save-emit?",___REF_SUB(152),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_save_2d_emit_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_debug_2d_specializers,"jazz:debug-specializers",___REF_SUB(157),1,
0)
,___DEF_LBL_PROC(___H_jazz_3a_debug_2d_specializers,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_force_2d_interpreted_3f_,"jazz:force-interpreted?",___REF_SUB(162),1,
0)
,___DEF_LBL_PROC(___H_jazz_3a_force_2d_interpreted_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_use_2d_debugger_3f_,"jazz:use-debugger?",___REF_SUB(167),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_use_2d_debugger_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_use_2d_snapshot_3f_,"jazz:use-snapshot?",___REF_SUB(172),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_use_2d_snapshot_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_worker_2d_repl_3f_,"jazz:worker-repl?",___REF_SUB(177),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_worker_2d_repl_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_profile_2d_walker_3f_,"jazz:profile-walker?",___REF_SUB(182),1,0)

,___DEF_LBL_PROC(___H_jazz_3a_profile_2d_walker_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_font_2d_engine,"jazz:font-engine",___REF_SUB(187),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_font_2d_engine,1,-1)
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(72,___G_settings_23_,1)
___DEF_MOD_PRM(28,___G_jazz_3a_debug_2d_expansion_3f_,6)
___DEF_MOD_PRM(14,___G_jazz_3a_build_2d_repository,8)
___DEF_MOD_PRM(46,___G_jazz_3a_jazz_2d_repository,10)
___DEF_MOD_PRM(54,___G_jazz_3a_repositories,12)
___DEF_MOD_PRM(34,___G_jazz_3a_dependencies,14)
___DEF_MOD_PRM(0,___G_jazz_3a_absolutize_2d_sources_3f_,16)
___DEF_MOD_PRM(58,___G_jazz_3a_unit_2d_verbose_3f_,18)
___DEF_MOD_PRM(48,___G_jazz_3a_load_2d_verbose_3f_,20)
___DEF_MOD_PRM(50,___G_jazz_3a_outline_2d_verbose_3f_,22)
___DEF_MOD_PRM(36,___G_jazz_3a_done_2d_verbose_3f_,24)
___DEF_MOD_PRM(66,___G_jazz_3a_warn_2d_interpreted_3f_,26)
___DEF_MOD_PRM(68,___G_jazz_3a_warnings_3f_,28)
___DEF_MOD_PRM(32,___G_jazz_3a_delay_2d_reporting_3f_,30)
___DEF_MOD_PRM(62,___G_jazz_3a_use_2d_print_3f_,32)
___DEF_MOD_PRM(26,___G_jazz_3a_debug_2d_build_3f_,34)
___DEF_MOD_PRM(6,___G_jazz_3a_build_2d_configure,36)
___DEF_MOD_PRM(16,___G_jazz_3a_build_2d_setup,38)
___DEF_MOD_PRM(2,___G_jazz_3a_build_2d_binary_2d_repositories,40)
___DEF_MOD_PRM(20,___G_jazz_3a_build_2d_source_2d_access_3f_,42)
___DEF_MOD_PRM(8,___G_jazz_3a_build_2d_jazzini_2d_access_3f_,44)
___DEF_MOD_PRM(18,___G_jazz_3a_build_2d_single_2d_objects_3f_,46)
___DEF_MOD_PRM(24,___G_jazz_3a_build_2d_windows_2d_homedir,48)
___DEF_MOD_PRM(12,___G_jazz_3a_build_2d_link,50)
___DEF_MOD_PRM(10,___G_jazz_3a_build_2d_jobs,52)
___DEF_MOD_PRM(22,___G_jazz_3a_build_2d_target,54)
___DEF_MOD_PRM(4,___G_jazz_3a_build_2d_configuration,56)
___DEF_MOD_PRM(44,___G_jazz_3a_force_2d_outlines_3f_,58)
___DEF_MOD_PRM(38,___G_jazz_3a_dry_2d_run_3f_,60)
___DEF_MOD_PRM(56,___G_jazz_3a_save_2d_emit_3f_,62)
___DEF_MOD_PRM(30,___G_jazz_3a_debug_2d_specializers,64)
___DEF_MOD_PRM(42,___G_jazz_3a_force_2d_interpreted_3f_,66)
___DEF_MOD_PRM(60,___G_jazz_3a_use_2d_debugger_3f_,68)
___DEF_MOD_PRM(64,___G_jazz_3a_use_2d_snapshot_3f_,70)
___DEF_MOD_PRM(70,___G_jazz_3a_worker_2d_repl_3f_,72)
___DEF_MOD_PRM(52,___G_jazz_3a_profile_2d_walker_3f_,74)
___DEF_MOD_PRM(40,___G_jazz_3a_font_2d_engine,76)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(72,___G_settings_23_,1)
___DEF_MOD_GLO(28,___G_jazz_3a_debug_2d_expansion_3f_,6)
___DEF_MOD_GLO(14,___G_jazz_3a_build_2d_repository,8)
___DEF_MOD_GLO(46,___G_jazz_3a_jazz_2d_repository,10)
___DEF_MOD_GLO(54,___G_jazz_3a_repositories,12)
___DEF_MOD_GLO(34,___G_jazz_3a_dependencies,14)
___DEF_MOD_GLO(0,___G_jazz_3a_absolutize_2d_sources_3f_,16)
___DEF_MOD_GLO(58,___G_jazz_3a_unit_2d_verbose_3f_,18)
___DEF_MOD_GLO(48,___G_jazz_3a_load_2d_verbose_3f_,20)
___DEF_MOD_GLO(50,___G_jazz_3a_outline_2d_verbose_3f_,22)
___DEF_MOD_GLO(36,___G_jazz_3a_done_2d_verbose_3f_,24)
___DEF_MOD_GLO(66,___G_jazz_3a_warn_2d_interpreted_3f_,26)
___DEF_MOD_GLO(68,___G_jazz_3a_warnings_3f_,28)
___DEF_MOD_GLO(32,___G_jazz_3a_delay_2d_reporting_3f_,30)
___DEF_MOD_GLO(62,___G_jazz_3a_use_2d_print_3f_,32)
___DEF_MOD_GLO(26,___G_jazz_3a_debug_2d_build_3f_,34)
___DEF_MOD_GLO(6,___G_jazz_3a_build_2d_configure,36)
___DEF_MOD_GLO(16,___G_jazz_3a_build_2d_setup,38)
___DEF_MOD_GLO(2,___G_jazz_3a_build_2d_binary_2d_repositories,40)
___DEF_MOD_GLO(20,___G_jazz_3a_build_2d_source_2d_access_3f_,42)
___DEF_MOD_GLO(8,___G_jazz_3a_build_2d_jazzini_2d_access_3f_,44)
___DEF_MOD_GLO(18,___G_jazz_3a_build_2d_single_2d_objects_3f_,46)
___DEF_MOD_GLO(24,___G_jazz_3a_build_2d_windows_2d_homedir,48)
___DEF_MOD_GLO(12,___G_jazz_3a_build_2d_link,50)
___DEF_MOD_GLO(10,___G_jazz_3a_build_2d_jobs,52)
___DEF_MOD_GLO(22,___G_jazz_3a_build_2d_target,54)
___DEF_MOD_GLO(4,___G_jazz_3a_build_2d_configuration,56)
___DEF_MOD_GLO(44,___G_jazz_3a_force_2d_outlines_3f_,58)
___DEF_MOD_GLO(38,___G_jazz_3a_dry_2d_run_3f_,60)
___DEF_MOD_GLO(56,___G_jazz_3a_save_2d_emit_3f_,62)
___DEF_MOD_GLO(30,___G_jazz_3a_debug_2d_specializers,64)
___DEF_MOD_GLO(42,___G_jazz_3a_force_2d_interpreted_3f_,66)
___DEF_MOD_GLO(60,___G_jazz_3a_use_2d_debugger_3f_,68)
___DEF_MOD_GLO(64,___G_jazz_3a_use_2d_snapshot_3f_,70)
___DEF_MOD_GLO(70,___G_jazz_3a_worker_2d_repl_3f_,72)
___DEF_MOD_GLO(52,___G_jazz_3a_profile_2d_walker_3f_,74)
___DEF_MOD_GLO(40,___G_jazz_3a_font_2d_engine,76)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_kernel_2e_settings,"kernel.settings")
___DEF_MOD_SYM(1,___S_objects,"objects")
___DEF_MOD_SYM(2,___S_settings,"settings")
___END_MOD_SYM_KEY

#endif
