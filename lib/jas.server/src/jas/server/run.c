#ifdef ___LINKER_INFO
; File: "run.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jas.server.run"
(("bin:jas.server.run"))
(
"Home"
"bin:jas.server.run"
"descriptor"
"foundation.dialect"
"jas-server"
"jas.server"
"jas.server.report"
"jas.server.run"
"jazz"
"jazz.debuggee"
"jazz.io"
"jazz.io.literals"
"jazz.logger"
"jazz.snapshot"
"loaded?"
"public"
"snapshots-dir"
)
(
)
(
"bin:jas.server.run#"
"jas.server.run:prepare-logger"
"jas.server.run:prepare-snapshots"
"jas/server/run_lit^0"
"jas/server/run_lit^1"
"jazz.io.literals:construct-directory:autoload"
)
(
)
(
"jas.server.report:send-crash-reports"
"jas.server:start-jas-server"
"jazz.debuggee:get-controller-debugger"
"jazz.debuggee:set-default-context"
"jazz.io.literals:construct-directory"
"jazz.io:Pathname!level"
"jazz.io:Pathname:create-directories!rank"
"jazz.io:initialize-aliases"
"jazz.language.runtime.debug:start-jazz-repl"
"jazz.language.runtime.functional:sleep"
"jazz.logger:set-logger-directory"
"jazz.logger:set-logger-prefix"
"jazz.snapshot:snapshot-max-depth"
"jazz.snapshot:snapshot-prefix"
"jazz.snapshot:snapshots-directory"
"jazz:load-unit"
"jazz:register-module"
"jazz:register-product-run"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jas.server.run"
#define ___LINKER_ID ___LNK_bin_3a_jas_2e_server_2e_run
#define ___MH_PROC ___H_bin_3a_jas_2e_server_2e_run
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 17
#define ___GLOCOUNT 24
#define ___SUPCOUNT 6
#define ___CNSCOUNT 1
#define ___SUBCOUNT 111
#define ___LBLCOUNT 50
#define ___MODDESCR ___REF_SUB(110)
#include "gambit.h"

___NEED_SYM(___S_Home)
___NEED_SYM(___S_bin_3a_jas_2e_server_2e_run)
___NEED_SYM(___S_descriptor)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jas_2d_server)
___NEED_SYM(___S_jas_2e_server)
___NEED_SYM(___S_jas_2e_server_2e_report)
___NEED_SYM(___S_jas_2e_server_2e_run)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_debuggee)
___NEED_SYM(___S_jazz_2e_io)
___NEED_SYM(___S_jazz_2e_io_2e_literals)
___NEED_SYM(___S_jazz_2e_logger)
___NEED_SYM(___S_jazz_2e_snapshot)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_public)
___NEED_SYM(___S_snapshots_2d_dir)

___NEED_GLO(___G_bin_3a_jas_2e_server_2e_run_23_)
___NEED_GLO(___G_jas_2e_server_2e_report_3a_send_2d_crash_2d_reports)
___NEED_GLO(___G_jas_2e_server_2e_run_3a_prepare_2d_logger)
___NEED_GLO(___G_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___NEED_GLO(___G_jas_2e_server_3a_start_2d_jas_2d_server)
___NEED_GLO(___G_jas_2f_server_2f_run__lit_5e_0)
___NEED_GLO(___G_jas_2f_server_2f_run__lit_5e_1)
___NEED_GLO(___G_jazz_2e_debuggee_3a_get_2d_controller_2d_debugger)
___NEED_GLO(___G_jazz_2e_debuggee_3a_set_2d_default_2d_context)
___NEED_GLO(___G_jazz_2e_io_2e_literals_3a_construct_2d_directory)
___NEED_GLO(___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
___NEED_GLO(___G_jazz_2e_io_3a_Pathname_21_level)
___NEED_GLO(___G_jazz_2e_io_3a_Pathname_3a_create_2d_directories_21_rank)
___NEED_GLO(___G_jazz_2e_io_3a_initialize_2d_aliases)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
___NEED_GLO(___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
___NEED_GLO(___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
___NEED_GLO(___G_jazz_2e_snapshot_3a_snapshot_2d_max_2d_depth)
___NEED_GLO(___G_jazz_2e_snapshot_3a_snapshot_2d_prefix)
___NEED_GLO(___G_jazz_2e_snapshot_3a_snapshots_2d_directory)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_register_2d_product_2d_run)

___BEGIN_SYM
___DEF_SYM(0,___S_Home,"Home")
___DEF_SYM(1,___S_bin_3a_jas_2e_server_2e_run,"bin:jas.server.run")
___DEF_SYM(2,___S_descriptor,"descriptor")
___DEF_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(4,___S_jas_2d_server,"jas-server")
___DEF_SYM(5,___S_jas_2e_server,"jas.server")
___DEF_SYM(6,___S_jas_2e_server_2e_report,"jas.server.report")
___DEF_SYM(7,___S_jas_2e_server_2e_run,"jas.server.run")
___DEF_SYM(8,___S_jazz,"jazz")
___DEF_SYM(9,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_SYM(10,___S_jazz_2e_io,"jazz.io")
___DEF_SYM(11,___S_jazz_2e_io_2e_literals,"jazz.io.literals")
___DEF_SYM(12,___S_jazz_2e_logger,"jazz.logger")
___DEF_SYM(13,___S_jazz_2e_snapshot,"jazz.snapshot")
___DEF_SYM(14,___S_loaded_3f_,"loaded?")
___DEF_SYM(15,___S_public,"public")
___DEF_SYM(16,___S_snapshots_2d_dir,"snapshots-dir")
___END_SYM

#define ___SYM_Home ___SYM(0,___S_Home)
#define ___SYM_bin_3a_jas_2e_server_2e_run ___SYM(1,___S_bin_3a_jas_2e_server_2e_run)
#define ___SYM_descriptor ___SYM(2,___S_descriptor)
#define ___SYM_foundation_2e_dialect ___SYM(3,___S_foundation_2e_dialect)
#define ___SYM_jas_2d_server ___SYM(4,___S_jas_2d_server)
#define ___SYM_jas_2e_server ___SYM(5,___S_jas_2e_server)
#define ___SYM_jas_2e_server_2e_report ___SYM(6,___S_jas_2e_server_2e_report)
#define ___SYM_jas_2e_server_2e_run ___SYM(7,___S_jas_2e_server_2e_run)
#define ___SYM_jazz ___SYM(8,___S_jazz)
#define ___SYM_jazz_2e_debuggee ___SYM(9,___S_jazz_2e_debuggee)
#define ___SYM_jazz_2e_io ___SYM(10,___S_jazz_2e_io)
#define ___SYM_jazz_2e_io_2e_literals ___SYM(11,___S_jazz_2e_io_2e_literals)
#define ___SYM_jazz_2e_logger ___SYM(12,___S_jazz_2e_logger)
#define ___SYM_jazz_2e_snapshot ___SYM(13,___S_jazz_2e_snapshot)
#define ___SYM_loaded_3f_ ___SYM(14,___S_loaded_3f_)
#define ___SYM_public ___SYM(15,___S_public)
#define ___SYM_snapshots_2d_dir ___SYM(16,___S_snapshots_2d_dir)

___BEGIN_GLO
___DEF_GLO(0,"bin:jas.server.run#")
___DEF_GLO(1,"jas.server.run:prepare-logger")
___DEF_GLO(2,"jas.server.run:prepare-snapshots")
___DEF_GLO(3,"jas/server/run_lit^0")
___DEF_GLO(4,"jas/server/run_lit^1")
___DEF_GLO(5,"jazz.io.literals:construct-directory:autoload")

___DEF_GLO(6,"jas.server.report:send-crash-reports")

___DEF_GLO(7,"jas.server:start-jas-server")
___DEF_GLO(8,"jazz.debuggee:get-controller-debugger")

___DEF_GLO(9,"jazz.debuggee:set-default-context")

___DEF_GLO(10,"jazz.io.literals:construct-directory")

___DEF_GLO(11,"jazz.io:Pathname!level")
___DEF_GLO(12,"jazz.io:Pathname:create-directories!rank")

___DEF_GLO(13,"jazz.io:initialize-aliases")
___DEF_GLO(14,"jazz.language.runtime.debug:start-jazz-repl")

___DEF_GLO(15,"jazz.language.runtime.functional:sleep")

___DEF_GLO(16,"jazz.logger:set-logger-directory")
___DEF_GLO(17,"jazz.logger:set-logger-prefix")
___DEF_GLO(18,"jazz.snapshot:snapshot-max-depth")
___DEF_GLO(19,"jazz.snapshot:snapshot-prefix")
___DEF_GLO(20,"jazz.snapshot:snapshots-directory")

___DEF_GLO(21,"jazz:load-unit")
___DEF_GLO(22,"jazz:register-module")
___DEF_GLO(23,"jazz:register-product-run")
___END_GLO

#define ___GLO_bin_3a_jas_2e_server_2e_run_23_ ___GLO(0,___G_bin_3a_jas_2e_server_2e_run_23_)
#define ___PRM_bin_3a_jas_2e_server_2e_run_23_ ___PRM(0,___G_bin_3a_jas_2e_server_2e_run_23_)
#define ___GLO_jas_2e_server_2e_run_3a_prepare_2d_logger ___GLO(1,___G_jas_2e_server_2e_run_3a_prepare_2d_logger)
#define ___PRM_jas_2e_server_2e_run_3a_prepare_2d_logger ___PRM(1,___G_jas_2e_server_2e_run_3a_prepare_2d_logger)
#define ___GLO_jas_2e_server_2e_run_3a_prepare_2d_snapshots ___GLO(2,___G_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
#define ___PRM_jas_2e_server_2e_run_3a_prepare_2d_snapshots ___PRM(2,___G_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
#define ___GLO_jas_2f_server_2f_run__lit_5e_0 ___GLO(3,___G_jas_2f_server_2f_run__lit_5e_0)
#define ___PRM_jas_2f_server_2f_run__lit_5e_0 ___PRM(3,___G_jas_2f_server_2f_run__lit_5e_0)
#define ___GLO_jas_2f_server_2f_run__lit_5e_1 ___GLO(4,___G_jas_2f_server_2f_run__lit_5e_1)
#define ___PRM_jas_2f_server_2f_run__lit_5e_1 ___PRM(4,___G_jas_2f_server_2f_run__lit_5e_1)
#define ___GLO_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload ___GLO(5,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
#define ___PRM_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload ___PRM(5,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
#define ___GLO_jas_2e_server_2e_report_3a_send_2d_crash_2d_reports ___GLO(6,___G_jas_2e_server_2e_report_3a_send_2d_crash_2d_reports)
#define ___PRM_jas_2e_server_2e_report_3a_send_2d_crash_2d_reports ___PRM(6,___G_jas_2e_server_2e_report_3a_send_2d_crash_2d_reports)
#define ___GLO_jas_2e_server_3a_start_2d_jas_2d_server ___GLO(7,___G_jas_2e_server_3a_start_2d_jas_2d_server)
#define ___PRM_jas_2e_server_3a_start_2d_jas_2d_server ___PRM(7,___G_jas_2e_server_3a_start_2d_jas_2d_server)
#define ___GLO_jazz_2e_debuggee_3a_get_2d_controller_2d_debugger ___GLO(8,___G_jazz_2e_debuggee_3a_get_2d_controller_2d_debugger)
#define ___PRM_jazz_2e_debuggee_3a_get_2d_controller_2d_debugger ___PRM(8,___G_jazz_2e_debuggee_3a_get_2d_controller_2d_debugger)
#define ___GLO_jazz_2e_debuggee_3a_set_2d_default_2d_context ___GLO(9,___G_jazz_2e_debuggee_3a_set_2d_default_2d_context)
#define ___PRM_jazz_2e_debuggee_3a_set_2d_default_2d_context ___PRM(9,___G_jazz_2e_debuggee_3a_set_2d_default_2d_context)
#define ___GLO_jazz_2e_io_2e_literals_3a_construct_2d_directory ___GLO(10,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory)
#define ___PRM_jazz_2e_io_2e_literals_3a_construct_2d_directory ___PRM(10,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory)
#define ___GLO_jazz_2e_io_3a_Pathname_21_level ___GLO(11,___G_jazz_2e_io_3a_Pathname_21_level)
#define ___PRM_jazz_2e_io_3a_Pathname_21_level ___PRM(11,___G_jazz_2e_io_3a_Pathname_21_level)
#define ___GLO_jazz_2e_io_3a_Pathname_3a_create_2d_directories_21_rank ___GLO(12,___G_jazz_2e_io_3a_Pathname_3a_create_2d_directories_21_rank)
#define ___PRM_jazz_2e_io_3a_Pathname_3a_create_2d_directories_21_rank ___PRM(12,___G_jazz_2e_io_3a_Pathname_3a_create_2d_directories_21_rank)
#define ___GLO_jazz_2e_io_3a_initialize_2d_aliases ___GLO(13,___G_jazz_2e_io_3a_initialize_2d_aliases)
#define ___PRM_jazz_2e_io_3a_initialize_2d_aliases ___PRM(13,___G_jazz_2e_io_3a_initialize_2d_aliases)
#define ___GLO_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl ___GLO(14,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
#define ___PRM_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl ___PRM(14,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_sleep ___GLO(15,___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_sleep ___PRM(15,___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
#define ___GLO_jazz_2e_logger_3a_set_2d_logger_2d_directory ___GLO(16,___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
#define ___PRM_jazz_2e_logger_3a_set_2d_logger_2d_directory ___PRM(16,___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
#define ___GLO_jazz_2e_logger_3a_set_2d_logger_2d_prefix ___GLO(17,___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
#define ___PRM_jazz_2e_logger_3a_set_2d_logger_2d_prefix ___PRM(17,___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
#define ___GLO_jazz_2e_snapshot_3a_snapshot_2d_max_2d_depth ___GLO(18,___G_jazz_2e_snapshot_3a_snapshot_2d_max_2d_depth)
#define ___PRM_jazz_2e_snapshot_3a_snapshot_2d_max_2d_depth ___PRM(18,___G_jazz_2e_snapshot_3a_snapshot_2d_max_2d_depth)
#define ___GLO_jazz_2e_snapshot_3a_snapshot_2d_prefix ___GLO(19,___G_jazz_2e_snapshot_3a_snapshot_2d_prefix)
#define ___PRM_jazz_2e_snapshot_3a_snapshot_2d_prefix ___PRM(19,___G_jazz_2e_snapshot_3a_snapshot_2d_prefix)
#define ___GLO_jazz_2e_snapshot_3a_snapshots_2d_directory ___GLO(20,___G_jazz_2e_snapshot_3a_snapshots_2d_directory)
#define ___PRM_jazz_2e_snapshot_3a_snapshots_2d_directory ___PRM(20,___G_jazz_2e_snapshot_3a_snapshots_2d_directory)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(21,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(21,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(22,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(22,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_register_2d_product_2d_run ___GLO(23,___G_jazz_3a_register_2d_product_2d_run)
#define ___PRM_jazz_3a_register_2d_product_2d_run ___PRM(23,___G_jazz_3a_register_2d_product_2d_run)

___BEGIN_CNS
 ___DEF_CNS(___REF_FIX(32771),___REF_NUL)
___END_CNS

___DEF_SUB_STR(___X0,7UL)
               ___STR7(99,114,97,115,104,101,115)
___DEF_SUB_STR(___X1,4UL)
               ___STR4(46,106,97,115)
___DEF_SUB_STR(___X2,4UL)
               ___STR4(108,111,103,115)
___DEF_SUB_STR(___X3,4UL)
               ___STR4(46,106,97,115)
___DEF_SUB_FLO(___X4,0x7ff00000L,0x0L)
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SUB(6))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X6,35UL)
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
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(30))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(34))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(61))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(42))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(61))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(131134))
               ___VEC0
___DEF_SUB_VEC(___X45,4UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262207))
               ___VEC0
___DEF_SUB_VEC(___X47,3UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262207))
               ___VEC0
___DEF_SUB_VEC(___X49,3UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X51,3UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262209))
               ___VEC0
___DEF_SUB_VEC(___X53,3UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262210))
               ___VEC0
___DEF_SUB_VEC(___X55,3UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262211))
               ___VEC0
___DEF_SUB_VEC(___X57,3UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(852036))
               ___VEC0
___DEF_SUB_VEC(___X59,3UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(393286))
               ___VEC0
___DEF_SUB_VEC(___X61,3UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(393287))
               ___VEC0
___DEF_SUB_VEC(___X63,3UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(393287))
               ___VEC0
___DEF_SUB_VEC(___X65,3UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(524357))
               ___VEC0
___DEF_SUB_VEC(___X67,3UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(524357))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(70))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X71,3UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X75,3UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_FIX(425988))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X77,3UL)
               ___VEC1(___REF_SYM(2,___S_descriptor))
               ___VEC1(___REF_SYM(14,___S_loaded_3f_))
               ___VEC1(___REF_CNS(0))
               ___VEC0
___DEF_SUB_STR(___X78,10UL)
               ___STR8(106,97,115,45,115,101,114,118)
               ___STR2(101,114)
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X80,5UL)
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(48))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X91,0UL)
               ___VEC0
___DEF_SUB_STR(___X92,10UL)
               ___STR8(74,97,115,45,83,101,114,118)
               ___STR2(101,114)
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_SUB(109))
               ___VEC0
___DEF_SUB_VEC(___X94,7UL)
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(96))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(53))
               ___VEC0
___DEF_SUB_VEC(___X97,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X99,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262199))
               ___VEC0
___DEF_SUB_VEC(___X101,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262200))
               ___VEC0
___DEF_SUB_VEC(___X103,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262201))
               ___VEC0
___DEF_SUB_VEC(___X105,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262202))
               ___VEC0
___DEF_SUB_VEC(___X107,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_SYM(7,___S_jas_2e_server_2e_run))
               ___VEC1(___REF_FIX(262202))
               ___VEC0
___DEF_SUB_VEC(___X109,1UL)
               ___VEC1(___REF_SYM(16,___S_snapshots_2d_dir))
               ___VEC0
___DEF_SUB_VEC(___X110,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_jas_2e_server_2e_run))
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
___DEF_M_HLBL(___L0_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L1_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L2_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L3_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L4_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L5_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L6_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L7_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L8_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L9_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L10_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L11_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L12_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L13_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L14_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L15_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L16_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L17_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L18_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L19_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L20_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L21_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L22_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L23_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L24_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L25_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L26_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L27_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L28_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L29_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L30_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L31_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L32_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L33_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL(___L34_bin_3a_jas_2e_server_2e_run_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_M_HLBL(___L1_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_M_HLBL(___L2_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_M_HLBL(___L3_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_M_HLBL(___L4_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_M_HLBL(___L1_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_M_HLBL(___L2_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_M_HLBL(___L3_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_M_HLBL(___L4_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_M_HLBL(___L5_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_M_HLBL(___L6_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jas_2e_server_2e_run_23_
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
___DEF_P_HLBL(___L0_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L1_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L2_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L3_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L4_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L5_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L6_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L7_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L8_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L9_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L10_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L11_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L12_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L13_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L14_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L15_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L16_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L17_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L18_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L19_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L20_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L21_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L22_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L23_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L24_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L25_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L26_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L27_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L28_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L29_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L30_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L31_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L32_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L33_bin_3a_jas_2e_server_2e_run_23_)
___DEF_P_HLBL(___L34_bin_3a_jas_2e_server_2e_run_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jas_2e_server_2e_run_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jazz_2e_debuggee)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jazz_2e_io)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jazz_2e_logger)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(6,___L6_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jazz_2e_snapshot)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(7,___L7_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jas_2e_server)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(8,___L8_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SYM_jas_2e_server_2e_report)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(9,___L9_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_STK(1,___SYM_jas_2e_server_2e_run)
   ___SET_R3(___NUL)
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(10))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),22,___G_jazz_3a_register_2d_module)
___DEF_SLBL(10,___L10_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),31)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(5,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload,___STK(-2))
   ___SET_R0(___LBL(12))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_bin_3a_jas_2e_server_2e_run_23_)
   ___JUMPGLOSAFE(___SET_NARGS(0),5,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
___DEF_SLBL(12,___L12_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R3(___SUB(0))
   ___SET_R2(___SUB(1))
   ___SET_STK(-2,___R1)
   ___SET_R1(___SYM_Home)
   ___SET_R0(___LBL(13))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-2))
___DEF_SLBL(13,___L13_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_GLO(4,___G_jas_2f_server_2f_run__lit_5e_1,___R1)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(0),5,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
___DEF_SLBL(14,___L14_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R3(___SUB(2))
   ___SET_R2(___SUB(3))
   ___SET_STK(-2,___R1)
   ___SET_R1(___SYM_Home)
   ___SET_R0(___LBL(15))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-2))
___DEF_SLBL(15,___L15_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_GLO(3,___G_jas_2f_server_2f_run__lit_5e_0,___R1)
   ___SET_GLO(1,___G_jas_2e_server_2e_run_3a_prepare_2d_logger,___PRC(37))
   ___SET_GLO(2,___G_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___PRC(43))
   ___SET_R2(___LBL(18))
   ___SET_R1(___SYM_jas_2d_server)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(2),23,___G_jazz_3a_register_2d_product_2d_run)
___DEF_SLBL(16,___L16_bin_3a_jas_2e_server_2e_run_23_)
   ___POLL(17)
___DEF_SLBL(17,___L17_bin_3a_jas_2e_server_2e_run_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(18,___L18_bin_3a_jas_2e_server_2e_run_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(18,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(19)
___DEF_SLBL(19,___L19_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(0),13,___G_jazz_2e_io_3a_initialize_2d_aliases)
___DEF_SLBL(20,___L20_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_SLBL(21,___L21_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(0),2,___G_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_SLBL(22,___L22_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(0),6,___G_jas_2e_server_2e_report_3a_send_2d_crash_2d_reports)
___DEF_SLBL(23,___L23_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(0),7,___G_jas_2e_server_3a_start_2d_jas_2d_server)
___DEF_SLBL(24,___L24_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(0),8,___G_jazz_2e_debuggee_3a_get_2d_controller_2d_debugger)
___DEF_SLBL(25,___L25_bin_3a_jas_2e_server_2e_run_23_)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L35_bin_3a_jas_2e_server_2e_run_23_)
   ___END_IF
   ___SET_R1(___SYM_jas_2e_server)
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_2e_debuggee_3a_set_2d_default_2d_context)
___DEF_SLBL(26,___L26_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(0),14,___G_jazz_2e_language_2e_runtime_2e_debug_3a_start_2d_jazz_2d_repl)
___DEF_SLBL(27,___L27_bin_3a_jas_2e_server_2e_run_23_)
   ___POLL(28)
___DEF_SLBL(28,___L28_bin_3a_jas_2e_server_2e_run_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L35_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___SUB(4))
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_jazz_2e_language_2e_runtime_2e_functional_3a_sleep)
___DEF_SLBL(29,___L29_bin_3a_jas_2e_server_2e_run_23_)
   ___POLL(30)
___DEF_SLBL(30,___L30_bin_3a_jas_2e_server_2e_run_23_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(31,___L31_bin_3a_jas_2e_server_2e_run_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(31,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L36_bin_3a_jas_2e_server_2e_run_23_)
   ___END_IF
   ___GOTO(___L37_bin_3a_jas_2e_server_2e_run_23_)
___DEF_SLBL(32,___L32_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L36_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R1(___GLO_jazz_2e_io_2e_literals_3a_construct_2d_directory)
   ___POLL(33)
___DEF_SLBL(33,___L33_bin_3a_jas_2e_server_2e_run_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L37_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_io_2e_literals)
   ___ADJFP(8)
   ___POLL(34)
___DEF_SLBL(34,___L34_bin_3a_jas_2e_server_2e_run_23_)
   ___SET_R0(___LBL(32))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jas_2e_server_2e_run_3a_prepare_2d_logger
#undef ___PH_LBL0
#define ___PH_LBL0 37
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_P_HLBL(___L1_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_P_HLBL(___L2_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_P_HLBL(___L3_jas_2e_server_2e_run_3a_prepare_2d_logger)
___DEF_P_HLBL(___L4_jas_2e_server_2e_run_3a_prepare_2d_logger)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jas_2e_server_2e_run_3a_prepare_2d_logger)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jas_2e_server_2e_run_3a_prepare_2d_logger)
   ___SET_STK(1,___R0)
   ___SET_R1(___GLO_jas_2f_server_2f_run__lit_5e_0)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jas_2e_server_2e_run_3a_prepare_2d_logger)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),16,___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
___DEF_SLBL(2,___L2_jas_2e_server_2e_run_3a_prepare_2d_logger)
   ___SET_R1(___SUB(78))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),17,___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
___DEF_SLBL(3,___L3_jas_2e_server_2e_run_3a_prepare_2d_logger)
   ___POLL(4)
___DEF_SLBL(4,___L4_jas_2e_server_2e_run_3a_prepare_2d_logger)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots
#undef ___PH_LBL0
#define ___PH_LBL0 43
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_P_HLBL(___L1_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_P_HLBL(___L2_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_P_HLBL(___L3_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_P_HLBL(___L4_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_P_HLBL(___L5_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___DEF_P_HLBL(___L6_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___SET_STK(1,___GLO_jas_2f_server_2f_run__lit_5e_1)
   ___SET_STK(2,___R0)
   ___SET_R1(___STK(1))
   ___SET_R2(___VECTORREF(___STK(1),___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_io_3a_Pathname_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_io_3a_Pathname_3a_create_2d_directories_21_rank))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(2,___L2_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___SET_R1(___STK(-7))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_2e_snapshot_3a_snapshots_2d_directory)
___DEF_SLBL(3,___L3_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___SET_R1(___SUB(92))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_2e_snapshot_3a_snapshot_2d_prefix)
___DEF_SLBL(4,___L4_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___SET_R1(___FIX(1L))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_2e_snapshot_3a_snapshot_2d_max_2d_depth)
___DEF_SLBL(5,___L5_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___POLL(6)
___DEF_SLBL(6,___L6_jas_2e_server_2e_run_3a_prepare_2d_snapshots)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jas_2e_server_2e_run_23_,"bin:jas.server.run#",___REF_SUB(5),35,0)
,___DEF_LBL_PROC(___H_bin_3a_jas_2e_server_2e_run_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jas_2e_server_2e_run_23_,1,-1)
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_jas_2e_server_2e_run_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jas_2e_server_2e_run_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jas_2e_server_2e_run_3a_prepare_2d_logger,0,___REF_SUB(79),5,0)
,___DEF_LBL_PROC(___H_jas_2e_server_2e_run_3a_prepare_2d_logger,0,-1)
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_logger,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_logger,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_logger,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_logger,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,0,___REF_SUB(93),7,0)
,___DEF_LBL_PROC(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,0,-1)
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_jas_2e_server_2e_run_3a_prepare_2d_snapshots,___IFD(___RETI,8,1,0x3f03L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jas_2e_server_2e_run_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jas_2e_server_2e_run_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Home,"Home")
___DEF_MOD_SYM(1,___S_bin_3a_jas_2e_server_2e_run,"bin:jas.server.run")
___DEF_MOD_SYM(2,___S_descriptor,"descriptor")
___DEF_MOD_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(4,___S_jas_2d_server,"jas-server")
___DEF_MOD_SYM(5,___S_jas_2e_server,"jas.server")
___DEF_MOD_SYM(6,___S_jas_2e_server_2e_report,"jas.server.report")
___DEF_MOD_SYM(7,___S_jas_2e_server_2e_run,"jas.server.run")
___DEF_MOD_SYM(8,___S_jazz,"jazz")
___DEF_MOD_SYM(9,___S_jazz_2e_debuggee,"jazz.debuggee")
___DEF_MOD_SYM(10,___S_jazz_2e_io,"jazz.io")
___DEF_MOD_SYM(11,___S_jazz_2e_io_2e_literals,"jazz.io.literals")
___DEF_MOD_SYM(12,___S_jazz_2e_logger,"jazz.logger")
___DEF_MOD_SYM(13,___S_jazz_2e_snapshot,"jazz.snapshot")
___DEF_MOD_SYM(14,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(15,___S_public,"public")
___DEF_MOD_SYM(16,___S_snapshots_2d_dir,"snapshots-dir")
___END_MOD_SYM_KEY

#endif
