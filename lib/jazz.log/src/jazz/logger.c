#ifdef ___LINKER_INFO
; File: "logger.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.logger"
(("bin:jazz.logger"))
(
"Settings"
"bin:jazz.logger"
"cont"
"create-directories"
"date"
"exc"
"expr"
"file"
"foundation.dialect"
"jazz"
"jazz.io"
"jazz.io.literals"
"jazz.logger"
"jazz.logger:logger"
"jazz.logger:logger-backtrace"
"jazz.logger:logger-close"
"jazz.logger:logger-debug"
"jazz.logger:logger-directory"
"jazz.logger:logger-exception"
"jazz.logger:logger-expr"
"jazz.logger:logger-file"
"jazz.logger:logger-line"
"jazz.logger:logger-log"
"jazz.logger:logger-port"
"jazz.logger:logger-prefix"
"jazz.logger:make-logger-file"
"jazz.logger:set-logger-directory"
"jazz.logger:set-logger-prefix"
"jazz.logger:with-logger-output"
"jazz.time"
"line"
"loaded?"
"logger"
"logger-backtrace"
"logger-close"
"logger-debug"
"logger-directory"
"logger-exception"
"logger-expr"
"logger-file"
"logger-line"
"logger-log"
"logger-port"
"logger-prefix"
"make-logger-file"
"port"
"proc"
"public"
"rest"
"set-logger-directory"
"set-logger-prefix"
"time"
"with-logger-output"
)
(
"append"
)
(
"bin:jazz.logger#"
"jazz.io.literals:construct-directory:autoload"
"jazz.logger:*logger-directory*"
"jazz.logger:*logger-file*"
"jazz.logger:*logger-port*"
"jazz.logger:*logger-prefix*"
"jazz.logger:logger-file"
"jazz.logger:logger-log"
"jazz.logger:logger-port"
"jazz.logger:make-logger-file"
"jazz.logger:with-logger-output"
"jazz/logger_create-directories!d^1"
"jazz/logger_lit^0"
)
(
"jazz.logger:logger"
"jazz.logger:logger-backtrace"
"jazz.logger:logger-close"
"jazz.logger:logger-debug"
"jazz.logger:logger-directory"
"jazz.logger:logger-exception"
"jazz.logger:logger-expr"
"jazz.logger:logger-line"
"jazz.logger:logger-prefix"
"jazz.logger:set-logger-directory"
"jazz.logger:set-logger-prefix"
)
(
"apply"
"close-port"
"date->string"
"display-continuation-backtrace"
"display-exception"
"force-output"
"jazz.io.literals:construct-directory"
"jazz.io:path-settings"
"jazz.io:timestamped-file"
"jazz.language.runtime.format:format"
"jazz.time:system-date"
"jazz:cache-dispatch"
"jazz:load-unit"
"jazz:register-module"
"open-output-file"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.logger"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_logger
#define ___MH_PROC ___H_bin_3a_jazz_2e_logger
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 53
#define ___KEYCOUNT 1
#define ___GLOCOUNT 39
#define ___SUPCOUNT 24
#define ___CNSCOUNT 33
#define ___SUBCOUNT 243
#define ___LBLCOUNT 109
#define ___MODDESCR ___REF_SUB(242)
#include "gambit.h"

___NEED_SYM(___S_Settings)
___NEED_SYM(___S_bin_3a_jazz_2e_logger)
___NEED_SYM(___S_cont)
___NEED_SYM(___S_create_2d_directories)
___NEED_SYM(___S_date)
___NEED_SYM(___S_exc)
___NEED_SYM(___S_expr)
___NEED_SYM(___S_file)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_io)
___NEED_SYM(___S_jazz_2e_io_2e_literals)
___NEED_SYM(___S_jazz_2e_logger)
___NEED_SYM(___S_jazz_2e_logger_3a_logger)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_backtrace)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_close)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_debug)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_directory)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_exception)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_expr)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_file)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_line)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_log)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_port)
___NEED_SYM(___S_jazz_2e_logger_3a_logger_2d_prefix)
___NEED_SYM(___S_jazz_2e_logger_3a_make_2d_logger_2d_file)
___NEED_SYM(___S_jazz_2e_logger_3a_set_2d_logger_2d_directory)
___NEED_SYM(___S_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
___NEED_SYM(___S_jazz_2e_logger_3a_with_2d_logger_2d_output)
___NEED_SYM(___S_jazz_2e_time)
___NEED_SYM(___S_line)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_logger)
___NEED_SYM(___S_logger_2d_backtrace)
___NEED_SYM(___S_logger_2d_close)
___NEED_SYM(___S_logger_2d_debug)
___NEED_SYM(___S_logger_2d_directory)
___NEED_SYM(___S_logger_2d_exception)
___NEED_SYM(___S_logger_2d_expr)
___NEED_SYM(___S_logger_2d_file)
___NEED_SYM(___S_logger_2d_line)
___NEED_SYM(___S_logger_2d_log)
___NEED_SYM(___S_logger_2d_port)
___NEED_SYM(___S_logger_2d_prefix)
___NEED_SYM(___S_make_2d_logger_2d_file)
___NEED_SYM(___S_port)
___NEED_SYM(___S_proc)
___NEED_SYM(___S_public)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_set_2d_logger_2d_directory)
___NEED_SYM(___S_set_2d_logger_2d_prefix)
___NEED_SYM(___S_time)
___NEED_SYM(___S_with_2d_logger_2d_output)

___NEED_KEY(___K_append)

___NEED_GLO(___G_apply)
___NEED_GLO(___G_bin_3a_jazz_2e_logger_23_)
___NEED_GLO(___G_close_2d_port)
___NEED_GLO(___G_date_2d__3e_string)
___NEED_GLO(___G_display_2d_continuation_2d_backtrace)
___NEED_GLO(___G_display_2d_exception)
___NEED_GLO(___G_force_2d_output)
___NEED_GLO(___G_jazz_2e_io_2e_literals_3a_construct_2d_directory)
___NEED_GLO(___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
___NEED_GLO(___G_jazz_2e_io_3a_path_2d_settings)
___NEED_GLO(___G_jazz_2e_io_3a_timestamped_2d_file)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___NEED_GLO(___G_jazz_2e_logger_3a__2a_logger_2d_directory_2a_)
___NEED_GLO(___G_jazz_2e_logger_3a__2a_logger_2d_file_2a_)
___NEED_GLO(___G_jazz_2e_logger_3a__2a_logger_2d_port_2a_)
___NEED_GLO(___G_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_)
___NEED_GLO(___G_jazz_2e_logger_3a_logger)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_backtrace)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_close)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_debug)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_directory)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_exception)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_expr)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_file)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_line)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_log)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_port)
___NEED_GLO(___G_jazz_2e_logger_3a_logger_2d_prefix)
___NEED_GLO(___G_jazz_2e_logger_3a_make_2d_logger_2d_file)
___NEED_GLO(___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
___NEED_GLO(___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
___NEED_GLO(___G_jazz_2e_logger_3a_with_2d_logger_2d_output)
___NEED_GLO(___G_jazz_2e_time_3a_system_2d_date)
___NEED_GLO(___G_jazz_2f_logger__create_2d_directories_21_d_5e_1)
___NEED_GLO(___G_jazz_2f_logger__lit_5e_0)
___NEED_GLO(___G_jazz_3a_cache_2d_dispatch)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_open_2d_output_2d_file)

___BEGIN_SYM
___DEF_SYM(0,___S_Settings,"Settings")
___DEF_SYM(1,___S_bin_3a_jazz_2e_logger,"bin:jazz.logger")
___DEF_SYM(2,___S_cont,"cont")
___DEF_SYM(3,___S_create_2d_directories,"create-directories")
___DEF_SYM(4,___S_date,"date")
___DEF_SYM(5,___S_exc,"exc")
___DEF_SYM(6,___S_expr,"expr")
___DEF_SYM(7,___S_file,"file")
___DEF_SYM(8,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(9,___S_jazz,"jazz")
___DEF_SYM(10,___S_jazz_2e_io,"jazz.io")
___DEF_SYM(11,___S_jazz_2e_io_2e_literals,"jazz.io.literals")
___DEF_SYM(12,___S_jazz_2e_logger,"jazz.logger")
___DEF_SYM(13,___S_jazz_2e_logger_3a_logger,"jazz.logger:logger")
___DEF_SYM(14,___S_jazz_2e_logger_3a_logger_2d_backtrace,"jazz.logger:logger-backtrace")
___DEF_SYM(15,___S_jazz_2e_logger_3a_logger_2d_close,"jazz.logger:logger-close")
___DEF_SYM(16,___S_jazz_2e_logger_3a_logger_2d_debug,"jazz.logger:logger-debug")
___DEF_SYM(17,___S_jazz_2e_logger_3a_logger_2d_directory,"jazz.logger:logger-directory")
___DEF_SYM(18,___S_jazz_2e_logger_3a_logger_2d_exception,"jazz.logger:logger-exception")
___DEF_SYM(19,___S_jazz_2e_logger_3a_logger_2d_expr,"jazz.logger:logger-expr")
___DEF_SYM(20,___S_jazz_2e_logger_3a_logger_2d_file,"jazz.logger:logger-file")
___DEF_SYM(21,___S_jazz_2e_logger_3a_logger_2d_line,"jazz.logger:logger-line")
___DEF_SYM(22,___S_jazz_2e_logger_3a_logger_2d_log,"jazz.logger:logger-log")
___DEF_SYM(23,___S_jazz_2e_logger_3a_logger_2d_port,"jazz.logger:logger-port")
___DEF_SYM(24,___S_jazz_2e_logger_3a_logger_2d_prefix,"jazz.logger:logger-prefix")
___DEF_SYM(25,___S_jazz_2e_logger_3a_make_2d_logger_2d_file,"jazz.logger:make-logger-file")
___DEF_SYM(26,___S_jazz_2e_logger_3a_set_2d_logger_2d_directory,"jazz.logger:set-logger-directory")

___DEF_SYM(27,___S_jazz_2e_logger_3a_set_2d_logger_2d_prefix,"jazz.logger:set-logger-prefix")

___DEF_SYM(28,___S_jazz_2e_logger_3a_with_2d_logger_2d_output,"jazz.logger:with-logger-output")

___DEF_SYM(29,___S_jazz_2e_time,"jazz.time")
___DEF_SYM(30,___S_line,"line")
___DEF_SYM(31,___S_loaded_3f_,"loaded?")
___DEF_SYM(32,___S_logger,"logger")
___DEF_SYM(33,___S_logger_2d_backtrace,"logger-backtrace")
___DEF_SYM(34,___S_logger_2d_close,"logger-close")
___DEF_SYM(35,___S_logger_2d_debug,"logger-debug")
___DEF_SYM(36,___S_logger_2d_directory,"logger-directory")
___DEF_SYM(37,___S_logger_2d_exception,"logger-exception")
___DEF_SYM(38,___S_logger_2d_expr,"logger-expr")
___DEF_SYM(39,___S_logger_2d_file,"logger-file")
___DEF_SYM(40,___S_logger_2d_line,"logger-line")
___DEF_SYM(41,___S_logger_2d_log,"logger-log")
___DEF_SYM(42,___S_logger_2d_port,"logger-port")
___DEF_SYM(43,___S_logger_2d_prefix,"logger-prefix")
___DEF_SYM(44,___S_make_2d_logger_2d_file,"make-logger-file")
___DEF_SYM(45,___S_port,"port")
___DEF_SYM(46,___S_proc,"proc")
___DEF_SYM(47,___S_public,"public")
___DEF_SYM(48,___S_rest,"rest")
___DEF_SYM(49,___S_set_2d_logger_2d_directory,"set-logger-directory")
___DEF_SYM(50,___S_set_2d_logger_2d_prefix,"set-logger-prefix")
___DEF_SYM(51,___S_time,"time")
___DEF_SYM(52,___S_with_2d_logger_2d_output,"with-logger-output")
___END_SYM

#define ___SYM_Settings ___SYM(0,___S_Settings)
#define ___SYM_bin_3a_jazz_2e_logger ___SYM(1,___S_bin_3a_jazz_2e_logger)
#define ___SYM_cont ___SYM(2,___S_cont)
#define ___SYM_create_2d_directories ___SYM(3,___S_create_2d_directories)
#define ___SYM_date ___SYM(4,___S_date)
#define ___SYM_exc ___SYM(5,___S_exc)
#define ___SYM_expr ___SYM(6,___S_expr)
#define ___SYM_file ___SYM(7,___S_file)
#define ___SYM_foundation_2e_dialect ___SYM(8,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(9,___S_jazz)
#define ___SYM_jazz_2e_io ___SYM(10,___S_jazz_2e_io)
#define ___SYM_jazz_2e_io_2e_literals ___SYM(11,___S_jazz_2e_io_2e_literals)
#define ___SYM_jazz_2e_logger ___SYM(12,___S_jazz_2e_logger)
#define ___SYM_jazz_2e_logger_3a_logger ___SYM(13,___S_jazz_2e_logger_3a_logger)
#define ___SYM_jazz_2e_logger_3a_logger_2d_backtrace ___SYM(14,___S_jazz_2e_logger_3a_logger_2d_backtrace)
#define ___SYM_jazz_2e_logger_3a_logger_2d_close ___SYM(15,___S_jazz_2e_logger_3a_logger_2d_close)
#define ___SYM_jazz_2e_logger_3a_logger_2d_debug ___SYM(16,___S_jazz_2e_logger_3a_logger_2d_debug)
#define ___SYM_jazz_2e_logger_3a_logger_2d_directory ___SYM(17,___S_jazz_2e_logger_3a_logger_2d_directory)
#define ___SYM_jazz_2e_logger_3a_logger_2d_exception ___SYM(18,___S_jazz_2e_logger_3a_logger_2d_exception)
#define ___SYM_jazz_2e_logger_3a_logger_2d_expr ___SYM(19,___S_jazz_2e_logger_3a_logger_2d_expr)
#define ___SYM_jazz_2e_logger_3a_logger_2d_file ___SYM(20,___S_jazz_2e_logger_3a_logger_2d_file)
#define ___SYM_jazz_2e_logger_3a_logger_2d_line ___SYM(21,___S_jazz_2e_logger_3a_logger_2d_line)
#define ___SYM_jazz_2e_logger_3a_logger_2d_log ___SYM(22,___S_jazz_2e_logger_3a_logger_2d_log)
#define ___SYM_jazz_2e_logger_3a_logger_2d_port ___SYM(23,___S_jazz_2e_logger_3a_logger_2d_port)
#define ___SYM_jazz_2e_logger_3a_logger_2d_prefix ___SYM(24,___S_jazz_2e_logger_3a_logger_2d_prefix)
#define ___SYM_jazz_2e_logger_3a_make_2d_logger_2d_file ___SYM(25,___S_jazz_2e_logger_3a_make_2d_logger_2d_file)
#define ___SYM_jazz_2e_logger_3a_set_2d_logger_2d_directory ___SYM(26,___S_jazz_2e_logger_3a_set_2d_logger_2d_directory)
#define ___SYM_jazz_2e_logger_3a_set_2d_logger_2d_prefix ___SYM(27,___S_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
#define ___SYM_jazz_2e_logger_3a_with_2d_logger_2d_output ___SYM(28,___S_jazz_2e_logger_3a_with_2d_logger_2d_output)
#define ___SYM_jazz_2e_time ___SYM(29,___S_jazz_2e_time)
#define ___SYM_line ___SYM(30,___S_line)
#define ___SYM_loaded_3f_ ___SYM(31,___S_loaded_3f_)
#define ___SYM_logger ___SYM(32,___S_logger)
#define ___SYM_logger_2d_backtrace ___SYM(33,___S_logger_2d_backtrace)
#define ___SYM_logger_2d_close ___SYM(34,___S_logger_2d_close)
#define ___SYM_logger_2d_debug ___SYM(35,___S_logger_2d_debug)
#define ___SYM_logger_2d_directory ___SYM(36,___S_logger_2d_directory)
#define ___SYM_logger_2d_exception ___SYM(37,___S_logger_2d_exception)
#define ___SYM_logger_2d_expr ___SYM(38,___S_logger_2d_expr)
#define ___SYM_logger_2d_file ___SYM(39,___S_logger_2d_file)
#define ___SYM_logger_2d_line ___SYM(40,___S_logger_2d_line)
#define ___SYM_logger_2d_log ___SYM(41,___S_logger_2d_log)
#define ___SYM_logger_2d_port ___SYM(42,___S_logger_2d_port)
#define ___SYM_logger_2d_prefix ___SYM(43,___S_logger_2d_prefix)
#define ___SYM_make_2d_logger_2d_file ___SYM(44,___S_make_2d_logger_2d_file)
#define ___SYM_port ___SYM(45,___S_port)
#define ___SYM_proc ___SYM(46,___S_proc)
#define ___SYM_public ___SYM(47,___S_public)
#define ___SYM_rest ___SYM(48,___S_rest)
#define ___SYM_set_2d_logger_2d_directory ___SYM(49,___S_set_2d_logger_2d_directory)
#define ___SYM_set_2d_logger_2d_prefix ___SYM(50,___S_set_2d_logger_2d_prefix)
#define ___SYM_time ___SYM(51,___S_time)
#define ___SYM_with_2d_logger_2d_output ___SYM(52,___S_with_2d_logger_2d_output)

___BEGIN_KEY
___DEF_KEY(0,___K_append,"append")
___END_KEY

#define ___KEY_append ___KEY(0,___K_append)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.logger#")
___DEF_GLO(1,"jazz.io.literals:construct-directory:autoload")

___DEF_GLO(2,"jazz.logger:*logger-directory*")
___DEF_GLO(3,"jazz.logger:*logger-file*")
___DEF_GLO(4,"jazz.logger:*logger-port*")
___DEF_GLO(5,"jazz.logger:*logger-prefix*")
___DEF_GLO(6,"jazz.logger:logger")
___DEF_GLO(7,"jazz.logger:logger-backtrace")
___DEF_GLO(8,"jazz.logger:logger-close")
___DEF_GLO(9,"jazz.logger:logger-debug")
___DEF_GLO(10,"jazz.logger:logger-directory")
___DEF_GLO(11,"jazz.logger:logger-exception")
___DEF_GLO(12,"jazz.logger:logger-expr")
___DEF_GLO(13,"jazz.logger:logger-file")
___DEF_GLO(14,"jazz.logger:logger-line")
___DEF_GLO(15,"jazz.logger:logger-log")
___DEF_GLO(16,"jazz.logger:logger-port")
___DEF_GLO(17,"jazz.logger:logger-prefix")
___DEF_GLO(18,"jazz.logger:make-logger-file")
___DEF_GLO(19,"jazz.logger:set-logger-directory")
___DEF_GLO(20,"jazz.logger:set-logger-prefix")
___DEF_GLO(21,"jazz.logger:with-logger-output")
___DEF_GLO(22,"jazz/logger_create-directories!d^1")

___DEF_GLO(23,"jazz/logger_lit^0")
___DEF_GLO(24,"apply")
___DEF_GLO(25,"close-port")
___DEF_GLO(26,"date->string")
___DEF_GLO(27,"display-continuation-backtrace")
___DEF_GLO(28,"display-exception")
___DEF_GLO(29,"force-output")
___DEF_GLO(30,"jazz.io.literals:construct-directory")

___DEF_GLO(31,"jazz.io:path-settings")
___DEF_GLO(32,"jazz.io:timestamped-file")
___DEF_GLO(33,"jazz.language.runtime.format:format")

___DEF_GLO(34,"jazz.time:system-date")
___DEF_GLO(35,"jazz:cache-dispatch")
___DEF_GLO(36,"jazz:load-unit")
___DEF_GLO(37,"jazz:register-module")
___DEF_GLO(38,"open-output-file")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_logger_23_ ___GLO(0,___G_bin_3a_jazz_2e_logger_23_)
#define ___PRM_bin_3a_jazz_2e_logger_23_ ___PRM(0,___G_bin_3a_jazz_2e_logger_23_)
#define ___GLO_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload ___GLO(1,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
#define ___PRM_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload ___PRM(1,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
#define ___GLO_jazz_2e_logger_3a__2a_logger_2d_directory_2a_ ___GLO(2,___G_jazz_2e_logger_3a__2a_logger_2d_directory_2a_)
#define ___PRM_jazz_2e_logger_3a__2a_logger_2d_directory_2a_ ___PRM(2,___G_jazz_2e_logger_3a__2a_logger_2d_directory_2a_)
#define ___GLO_jazz_2e_logger_3a__2a_logger_2d_file_2a_ ___GLO(3,___G_jazz_2e_logger_3a__2a_logger_2d_file_2a_)
#define ___PRM_jazz_2e_logger_3a__2a_logger_2d_file_2a_ ___PRM(3,___G_jazz_2e_logger_3a__2a_logger_2d_file_2a_)
#define ___GLO_jazz_2e_logger_3a__2a_logger_2d_port_2a_ ___GLO(4,___G_jazz_2e_logger_3a__2a_logger_2d_port_2a_)
#define ___PRM_jazz_2e_logger_3a__2a_logger_2d_port_2a_ ___PRM(4,___G_jazz_2e_logger_3a__2a_logger_2d_port_2a_)
#define ___GLO_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_ ___GLO(5,___G_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_)
#define ___PRM_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_ ___PRM(5,___G_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_)
#define ___GLO_jazz_2e_logger_3a_logger ___GLO(6,___G_jazz_2e_logger_3a_logger)
#define ___PRM_jazz_2e_logger_3a_logger ___PRM(6,___G_jazz_2e_logger_3a_logger)
#define ___GLO_jazz_2e_logger_3a_logger_2d_backtrace ___GLO(7,___G_jazz_2e_logger_3a_logger_2d_backtrace)
#define ___PRM_jazz_2e_logger_3a_logger_2d_backtrace ___PRM(7,___G_jazz_2e_logger_3a_logger_2d_backtrace)
#define ___GLO_jazz_2e_logger_3a_logger_2d_close ___GLO(8,___G_jazz_2e_logger_3a_logger_2d_close)
#define ___PRM_jazz_2e_logger_3a_logger_2d_close ___PRM(8,___G_jazz_2e_logger_3a_logger_2d_close)
#define ___GLO_jazz_2e_logger_3a_logger_2d_debug ___GLO(9,___G_jazz_2e_logger_3a_logger_2d_debug)
#define ___PRM_jazz_2e_logger_3a_logger_2d_debug ___PRM(9,___G_jazz_2e_logger_3a_logger_2d_debug)
#define ___GLO_jazz_2e_logger_3a_logger_2d_directory ___GLO(10,___G_jazz_2e_logger_3a_logger_2d_directory)
#define ___PRM_jazz_2e_logger_3a_logger_2d_directory ___PRM(10,___G_jazz_2e_logger_3a_logger_2d_directory)
#define ___GLO_jazz_2e_logger_3a_logger_2d_exception ___GLO(11,___G_jazz_2e_logger_3a_logger_2d_exception)
#define ___PRM_jazz_2e_logger_3a_logger_2d_exception ___PRM(11,___G_jazz_2e_logger_3a_logger_2d_exception)
#define ___GLO_jazz_2e_logger_3a_logger_2d_expr ___GLO(12,___G_jazz_2e_logger_3a_logger_2d_expr)
#define ___PRM_jazz_2e_logger_3a_logger_2d_expr ___PRM(12,___G_jazz_2e_logger_3a_logger_2d_expr)
#define ___GLO_jazz_2e_logger_3a_logger_2d_file ___GLO(13,___G_jazz_2e_logger_3a_logger_2d_file)
#define ___PRM_jazz_2e_logger_3a_logger_2d_file ___PRM(13,___G_jazz_2e_logger_3a_logger_2d_file)
#define ___GLO_jazz_2e_logger_3a_logger_2d_line ___GLO(14,___G_jazz_2e_logger_3a_logger_2d_line)
#define ___PRM_jazz_2e_logger_3a_logger_2d_line ___PRM(14,___G_jazz_2e_logger_3a_logger_2d_line)
#define ___GLO_jazz_2e_logger_3a_logger_2d_log ___GLO(15,___G_jazz_2e_logger_3a_logger_2d_log)
#define ___PRM_jazz_2e_logger_3a_logger_2d_log ___PRM(15,___G_jazz_2e_logger_3a_logger_2d_log)
#define ___GLO_jazz_2e_logger_3a_logger_2d_port ___GLO(16,___G_jazz_2e_logger_3a_logger_2d_port)
#define ___PRM_jazz_2e_logger_3a_logger_2d_port ___PRM(16,___G_jazz_2e_logger_3a_logger_2d_port)
#define ___GLO_jazz_2e_logger_3a_logger_2d_prefix ___GLO(17,___G_jazz_2e_logger_3a_logger_2d_prefix)
#define ___PRM_jazz_2e_logger_3a_logger_2d_prefix ___PRM(17,___G_jazz_2e_logger_3a_logger_2d_prefix)
#define ___GLO_jazz_2e_logger_3a_make_2d_logger_2d_file ___GLO(18,___G_jazz_2e_logger_3a_make_2d_logger_2d_file)
#define ___PRM_jazz_2e_logger_3a_make_2d_logger_2d_file ___PRM(18,___G_jazz_2e_logger_3a_make_2d_logger_2d_file)
#define ___GLO_jazz_2e_logger_3a_set_2d_logger_2d_directory ___GLO(19,___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
#define ___PRM_jazz_2e_logger_3a_set_2d_logger_2d_directory ___PRM(19,___G_jazz_2e_logger_3a_set_2d_logger_2d_directory)
#define ___GLO_jazz_2e_logger_3a_set_2d_logger_2d_prefix ___GLO(20,___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
#define ___PRM_jazz_2e_logger_3a_set_2d_logger_2d_prefix ___PRM(20,___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
#define ___GLO_jazz_2e_logger_3a_with_2d_logger_2d_output ___GLO(21,___G_jazz_2e_logger_3a_with_2d_logger_2d_output)
#define ___PRM_jazz_2e_logger_3a_with_2d_logger_2d_output ___PRM(21,___G_jazz_2e_logger_3a_with_2d_logger_2d_output)
#define ___GLO_jazz_2f_logger__create_2d_directories_21_d_5e_1 ___GLO(22,___G_jazz_2f_logger__create_2d_directories_21_d_5e_1)
#define ___PRM_jazz_2f_logger__create_2d_directories_21_d_5e_1 ___PRM(22,___G_jazz_2f_logger__create_2d_directories_21_d_5e_1)
#define ___GLO_jazz_2f_logger__lit_5e_0 ___GLO(23,___G_jazz_2f_logger__lit_5e_0)
#define ___PRM_jazz_2f_logger__lit_5e_0 ___PRM(23,___G_jazz_2f_logger__lit_5e_0)
#define ___GLO_apply ___GLO(24,___G_apply)
#define ___PRM_apply ___PRM(24,___G_apply)
#define ___GLO_close_2d_port ___GLO(25,___G_close_2d_port)
#define ___PRM_close_2d_port ___PRM(25,___G_close_2d_port)
#define ___GLO_date_2d__3e_string ___GLO(26,___G_date_2d__3e_string)
#define ___PRM_date_2d__3e_string ___PRM(26,___G_date_2d__3e_string)
#define ___GLO_display_2d_continuation_2d_backtrace ___GLO(27,___G_display_2d_continuation_2d_backtrace)
#define ___PRM_display_2d_continuation_2d_backtrace ___PRM(27,___G_display_2d_continuation_2d_backtrace)
#define ___GLO_display_2d_exception ___GLO(28,___G_display_2d_exception)
#define ___PRM_display_2d_exception ___PRM(28,___G_display_2d_exception)
#define ___GLO_force_2d_output ___GLO(29,___G_force_2d_output)
#define ___PRM_force_2d_output ___PRM(29,___G_force_2d_output)
#define ___GLO_jazz_2e_io_2e_literals_3a_construct_2d_directory ___GLO(30,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory)
#define ___PRM_jazz_2e_io_2e_literals_3a_construct_2d_directory ___PRM(30,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory)
#define ___GLO_jazz_2e_io_3a_path_2d_settings ___GLO(31,___G_jazz_2e_io_3a_path_2d_settings)
#define ___PRM_jazz_2e_io_3a_path_2d_settings ___PRM(31,___G_jazz_2e_io_3a_path_2d_settings)
#define ___GLO_jazz_2e_io_3a_timestamped_2d_file ___GLO(32,___G_jazz_2e_io_3a_timestamped_2d_file)
#define ___PRM_jazz_2e_io_3a_timestamped_2d_file ___PRM(32,___G_jazz_2e_io_3a_timestamped_2d_file)
#define ___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format ___GLO(33,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___PRM_jazz_2e_language_2e_runtime_2e_format_3a_format ___PRM(33,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___GLO_jazz_2e_time_3a_system_2d_date ___GLO(34,___G_jazz_2e_time_3a_system_2d_date)
#define ___PRM_jazz_2e_time_3a_system_2d_date ___PRM(34,___G_jazz_2e_time_3a_system_2d_date)
#define ___GLO_jazz_3a_cache_2d_dispatch ___GLO(35,___G_jazz_3a_cache_2d_dispatch)
#define ___PRM_jazz_3a_cache_2d_dispatch ___PRM(35,___G_jazz_3a_cache_2d_dispatch)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(36,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(36,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(37,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(37,___G_jazz_3a_register_2d_module)
#define ___GLO_open_2d_output_2d_file ___GLO(38,___G_open_2d_output_2d_file)
#define ___PRM_open_2d_output_2d_file ___PRM(38,___G_open_2d_output_2d_file)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(32,___S_logger),___REF_SYM(13,___S_jazz_2e_logger_3a_logger))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(33,___S_logger_2d_backtrace),___REF_SYM(14,___S_jazz_2e_logger_3a_logger_2d_backtrace))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(34,___S_logger_2d_close),___REF_SYM(15,___S_jazz_2e_logger_3a_logger_2d_close))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(35,___S_logger_2d_debug),___REF_SYM(16,___S_jazz_2e_logger_3a_logger_2d_debug))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(36,___S_logger_2d_directory),___REF_SYM(17,___S_jazz_2e_logger_3a_logger_2d_directory))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(37,___S_logger_2d_exception),___REF_SYM(18,___S_jazz_2e_logger_3a_logger_2d_exception))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(38,___S_logger_2d_expr),___REF_SYM(19,___S_jazz_2e_logger_3a_logger_2d_expr))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(39,___S_logger_2d_file),___REF_SYM(20,___S_jazz_2e_logger_3a_logger_2d_file))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(40,___S_logger_2d_line),___REF_SYM(21,___S_jazz_2e_logger_3a_logger_2d_line))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(41,___S_logger_2d_log),___REF_SYM(22,___S_jazz_2e_logger_3a_logger_2d_log))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(42,___S_logger_2d_port),___REF_SYM(23,___S_jazz_2e_logger_3a_logger_2d_port))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(43,___S_logger_2d_prefix),___REF_SYM(24,___S_jazz_2e_logger_3a_logger_2d_prefix))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(44,___S_make_2d_logger_2d_file),___REF_SYM(25,___S_jazz_2e_logger_3a_make_2d_logger_2d_file))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(49,___S_set_2d_logger_2d_directory),___REF_SYM(26,___S_jazz_2e_logger_3a_set_2d_logger_2d_directory))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(50,___S_set_2d_logger_2d_prefix),___REF_SYM(27,___S_jazz_2e_logger_3a_set_2d_logger_2d_prefix))
,___DEF_CNS(___REF_CNS(31),___REF_NUL)
,___DEF_CNS(___REF_SYM(52,___S_with_2d_logger_2d_output),___REF_SYM(28,___S_jazz_2e_logger_3a_with_2d_logger_2d_output))
,___DEF_CNS(___REF_FIX(32769),___REF_NUL)
___END_CNS

___DEF_SUB_STR(___X0,3UL)
               ___STR3(108,111,103)
___DEF_SUB_VEC(___X1,2UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X2,18UL)
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
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(4))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(6))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(8))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(10))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(14))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(16))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(18))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(20))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(132))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(30))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X33,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X37,3UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(31,___S_loaded_3f_))
               ___VEC1(___REF_CNS(32))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_SUB(44))
               ___VEC0
___DEF_SUB_VEC(___X41,1UL)
               ___VEC1(___REF_SUB(42))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(58))
               ___VEC0
___DEF_SUB_VEC(___X44,0UL)
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X46,1UL)
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(61))
               ___VEC0
___DEF_SUB_VEC(___X49,0UL)
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X51,1UL)
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(65))
               ___VEC0
___DEF_SUB_VEC(___X54,0UL)
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X56,1UL)
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(58))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(68))
               ___VEC0
___DEF_SUB_VEC(___X59,0UL)
               ___VEC0
___DEF_SUB_STR(___X60,3UL)
               ___STR3(108,111,103)
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X62,6UL)
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(72))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(66))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(917577))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(68))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(917577))
               ___VEC0
___DEF_SUB_VEC(___X69,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262218))
               ___VEC0
___DEF_SUB_VEC(___X71,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262218))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262219))
               ___VEC0
___DEF_SUB_VEC(___X75,1UL)
               ___VEC1(___REF_SYM(7,___S_file))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X77,4UL)
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(78))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(1572944))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131153))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(1572944))
               ___VEC0
___DEF_SUB_VEC(___X86,0UL)
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X88,6UL)
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(84))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(92))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(1572950))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(94))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131159))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(96))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(3735638))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(98))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(3735638))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(100))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(2752598))
               ___VEC0
___DEF_SUB_VEC(___X101,0UL)
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X103,4UL)
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(110))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(105))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(90))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262236))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(109))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262236))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262237))
               ___VEC0
___DEF_SUB_VEC(___X112,0UL)
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SUB(114))
               ___VEC1(___REF_SUB(127))
               ___VEC0
___DEF_SUB_VEC(___X114,6UL)
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(117))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(116))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(96))
               ___VEC0
___DEF_SUB_VEC(___X117,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(917601))
               ___VEC0
___DEF_SUB_VEC(___X119,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(917601))
               ___VEC0
___DEF_SUB_VEC(___X121,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262242))
               ___VEC0
___DEF_SUB_VEC(___X123,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262243))
               ___VEC0
___DEF_SUB_VEC(___X125,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262243))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(46,___S_proc))
               ___VEC1(___REF_SYM(45,___S_port))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_SUB(144))
               ___VEC0
___DEF_SUB_VEC(___X129,7UL)
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_SUB(136))
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_SUB(140))
               ___VEC1(___REF_SUB(142))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(102))
               ___VEC0
___DEF_SUB_VEC(___X132,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131175))
               ___VEC0
___DEF_SUB_VEC(___X134,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131175))
               ___VEC0
___DEF_SUB_VEC(___X136,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131175))
               ___VEC0
___DEF_SUB_VEC(___X138,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131175))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(141))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262248))
               ___VEC0
___DEF_SUB_VEC(___X142,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393321))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_SYM(48,___S_rest))
               ___VEC1(___REF_SYM(45,___S_port))
               ___VEC0
___DEF_SUB_STR(___X145,6UL)
               ___STR6(123,97,125,123,37,125)
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_SUB(156))
               ___VEC0
___DEF_SUB_VEC(___X147,4UL)
               ___VEC1(___REF_SUB(148))
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_SUB(154))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(149))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(108))
               ___VEC0
___DEF_SUB_VEC(___X150,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131181))
               ___VEC0
___DEF_SUB_VEC(___X152,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131181))
               ___VEC0
___DEF_SUB_VEC(___X154,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131181))
               ___VEC0
___DEF_SUB_VEC(___X156,1UL)
               ___VEC1(___REF_SYM(30,___S_line))
               ___VEC0
___DEF_SUB_STR(___X157,17UL)
               ___STR8(126,89,45,126,109,45,126,100)
               ___STR8(32,126,72,58,126,77,58,126)
               ___STR1(83)
___DEF_SUB_STR(___X158,10UL)
               ___STR8(123,97,125,32,123,97,125,123)
               ___STR2(37,125)
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_SUB(175))
               ___VEC0
___DEF_SUB_VEC(___X160,7UL)
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_SUB(173))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(112))
               ___VEC0
___DEF_SUB_VEC(___X163,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_FIX(327680))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(1835121))
               ___VEC0
___DEF_SUB_VEC(___X165,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(1835121))
               ___VEC0
___DEF_SUB_VEC(___X167,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X168,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(917617))
               ___VEC0
___DEF_SUB_VEC(___X169,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(917618))
               ___VEC0
___DEF_SUB_VEC(___X171,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262259))
               ___VEC0
___DEF_SUB_VEC(___X173,5UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X174,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262259))
               ___VEC0
___DEF_SUB_VEC(___X175,3UL)
               ___VEC1(___REF_SYM(48,___S_rest))
               ___VEC1(___REF_SYM(4,___S_date))
               ___VEC1(___REF_SYM(30,___S_line))
               ___VEC0
___DEF_SUB_STR(___X176,6UL)
               ___STR6(123,115,125,123,37,125)
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SUB(178))
               ___VEC1(___REF_SUB(187))
               ___VEC0
___DEF_SUB_VEC(___X178,4UL)
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_SUB(181))
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_SUB(185))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(118))
               ___VEC0
___DEF_SUB_VEC(___X181,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(182))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X182,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131191))
               ___VEC0
___DEF_SUB_VEC(___X183,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(184))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X184,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131191))
               ___VEC0
___DEF_SUB_VEC(___X185,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(186))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131191))
               ___VEC0
___DEF_SUB_VEC(___X187,1UL)
               ___VEC1(___REF_SYM(6,___S_expr))
               ___VEC0
___DEF_SUB_STR(___X188,6UL)
               ___STR6(123,108,125,123,37,125)
___DEF_SUB_VEC(___X189,2UL)
               ___VEC1(___REF_SUB(190))
               ___VEC1(___REF_SUB(199))
               ___VEC0
___DEF_SUB_VEC(___X190,4UL)
               ___VEC1(___REF_SUB(191))
               ___VEC1(___REF_SUB(193))
               ___VEC1(___REF_SUB(195))
               ___VEC1(___REF_SUB(197))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(192))
               ___VEC0
___DEF_SUB_VEC(___X192,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(122))
               ___VEC0
___DEF_SUB_VEC(___X193,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(194))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X194,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131195))
               ___VEC0
___DEF_SUB_VEC(___X195,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(196))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X196,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131195))
               ___VEC0
___DEF_SUB_VEC(___X197,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(198))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X198,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131195))
               ___VEC0
___DEF_SUB_VEC(___X199,1UL)
               ___VEC1(___REF_SYM(48,___S_rest))
               ___VEC0
___DEF_SUB_VEC(___X200,2UL)
               ___VEC1(___REF_SUB(201))
               ___VEC1(___REF_SUB(220))
               ___VEC0
___DEF_SUB_VEC(___X201,9UL)
               ___VEC1(___REF_SUB(202))
               ___VEC1(___REF_SUB(204))
               ___VEC1(___REF_SUB(206))
               ___VEC1(___REF_SUB(208))
               ___VEC1(___REF_SUB(210))
               ___VEC1(___REF_SUB(212))
               ___VEC1(___REF_SUB(214))
               ___VEC1(___REF_SUB(216))
               ___VEC1(___REF_SUB(218))
               ___VEC0
___DEF_SUB_VEC(___X202,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(203))
               ___VEC0
___DEF_SUB_VEC(___X203,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(126))
               ___VEC0
___DEF_SUB_VEC(___X204,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(205))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X205,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131199))
               ___VEC0
___DEF_SUB_VEC(___X206,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(207))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X207,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131199))
               ___VEC0
___DEF_SUB_VEC(___X208,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(209))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X209,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131199))
               ___VEC0
___DEF_SUB_VEC(___X210,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(211))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X211,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131199))
               ___VEC0
___DEF_SUB_VEC(___X212,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(213))
               ___VEC0
___DEF_SUB_VEC(___X213,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262272))
               ___VEC0
___DEF_SUB_VEC(___X214,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(215))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X215,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393345))
               ___VEC0
___DEF_SUB_VEC(___X216,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(217))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X217,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393345))
               ___VEC0
___DEF_SUB_VEC(___X218,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(219))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X219,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393345))
               ___VEC0
___DEF_SUB_VEC(___X220,2UL)
               ___VEC1(___REF_SYM(5,___S_exc))
               ___VEC1(___REF_SYM(45,___S_port))
               ___VEC0
___DEF_SUB_VEC(___X221,2UL)
               ___VEC1(___REF_SUB(222))
               ___VEC1(___REF_SUB(241))
               ___VEC0
___DEF_SUB_VEC(___X222,9UL)
               ___VEC1(___REF_SUB(223))
               ___VEC1(___REF_SUB(225))
               ___VEC1(___REF_SUB(227))
               ___VEC1(___REF_SUB(229))
               ___VEC1(___REF_SUB(231))
               ___VEC1(___REF_SUB(233))
               ___VEC1(___REF_SUB(235))
               ___VEC1(___REF_SUB(237))
               ___VEC1(___REF_SUB(239))
               ___VEC0
___DEF_SUB_VEC(___X223,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(224))
               ___VEC0
___DEF_SUB_VEC(___X224,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(132))
               ___VEC0
___DEF_SUB_VEC(___X225,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(226))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X226,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131205))
               ___VEC0
___DEF_SUB_VEC(___X227,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(228))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X228,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131205))
               ___VEC0
___DEF_SUB_VEC(___X229,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(230))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X230,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131205))
               ___VEC0
___DEF_SUB_VEC(___X231,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(232))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X232,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(131205))
               ___VEC0
___DEF_SUB_VEC(___X233,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(234))
               ___VEC0
___DEF_SUB_VEC(___X234,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(262278))
               ___VEC0
___DEF_SUB_VEC(___X235,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(236))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X236,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393351))
               ___VEC0
___DEF_SUB_VEC(___X237,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(238))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X238,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393351))
               ___VEC0
___DEF_SUB_VEC(___X239,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(240))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X240,2UL)
               ___VEC1(___REF_SYM(12,___S_jazz_2e_logger))
               ___VEC1(___REF_FIX(393351))
               ___VEC0
___DEF_SUB_VEC(___X241,2UL)
               ___VEC1(___REF_SYM(2,___S_cont))
               ___VEC1(___REF_SYM(45,___S_port))
               ___VEC0
___DEF_SUB_VEC(___X242,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_jazz_2e_logger))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_logger_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_directory)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_set_2d_logger_2d_directory)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_prefix)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_file)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_file)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_file)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_file)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_port)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_port)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_port)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_port)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_logger_2d_port)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_logger_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_close)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_close)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_close)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_close)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL(___L6_jazz_2e_logger_3a_logger_2d_log)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_line)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_line)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_line)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_line)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_logger)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_logger)
___DEF_M_HLBL(___L6_jazz_2e_logger_3a_logger)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_expr)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_expr)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_expr)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_expr)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_debug)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_debug)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_debug)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_debug)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L6_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L7_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL(___L8_jazz_2e_logger_3a_logger_2d_exception)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L1_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L2_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L3_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L4_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L5_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L6_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L7_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_M_HLBL(___L8_jazz_2e_logger_3a_logger_2d_backtrace)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_logger_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_logger_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_logger_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_logger_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_logger_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_logger_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_logger_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_logger_23_)
   ___SET_R1(___SYM_jazz_2e_io)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_logger_23_)
   ___SET_R1(___SYM_jazz_2e_time)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_logger_23_)
   ___SET_R1(___SYM_time)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_logger_23_)
   ___SET_STK(1,___SYM_jazz_2e_logger)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),37,___G_jazz_3a_register_2d_module)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_logger_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),14)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(1,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload,___STK(-2))
   ___SET_R0(___LBL(9))
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_logger_23_)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_jazz_2e_io_2e_literals_3a_construct_2d_directory_3a_autoload)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_logger_23_)
   ___SET_STK(-2,___R1)
   ___SET_R1(___SYM_Settings)
   ___SET_R0(___LBL(10))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_logger_23_)
   ___SET_GLO(23,___G_jazz_2f_logger__lit_5e_0,___R1)
   ___SET_GLO(22,___G_jazz_2f_logger__create_2d_directories_21_d_5e_1,___FAL)
   ___SET_R2(___LBL(13))
   ___SET_R1(___SYM_create_2d_directories)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(2),35,___G_jazz_3a_cache_2d_dispatch)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_logger_23_)
   ___SET_GLO(22,___G_jazz_2f_logger__create_2d_directories_21_d_5e_1,___R1)
   ___SET_GLO(2,___G_jazz_2e_logger_3a__2a_logger_2d_directory_2a_,___GLO_jazz_2f_logger__lit_5e_0)
   ___SET_GLO(3,___G_jazz_2e_logger_3a__2a_logger_2d_file_2a_,___FAL)
   ___SET_GLO(5,___G_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_,___SUB(0))
   ___SET_GLO(4,___G_jazz_2e_logger_3a__2a_logger_2d_port_2a_,___FAL)
   ___SET_GLO(10,___G_jazz_2e_logger_3a_logger_2d_directory,___PRC(20))
   ___SET_GLO(19,___G_jazz_2e_logger_3a_set_2d_logger_2d_directory,___PRC(22))
   ___SET_GLO(17,___G_jazz_2e_logger_3a_logger_2d_prefix,___PRC(24))
   ___SET_GLO(20,___G_jazz_2e_logger_3a_set_2d_logger_2d_prefix,___PRC(26))
   ___SET_GLO(18,___G_jazz_2e_logger_3a_make_2d_logger_2d_file,___PRC(28))
   ___SET_GLO(13,___G_jazz_2e_logger_3a_logger_2d_file,___PRC(35))
   ___SET_GLO(16,___G_jazz_2e_logger_3a_logger_2d_port,___PRC(40))
   ___SET_GLO(8,___G_jazz_2e_logger_3a_logger_2d_close,___PRC(47))
   ___SET_GLO(21,___G_jazz_2e_logger_3a_with_2d_logger_2d_output,___PRC(52))
   ___SET_GLO(15,___G_jazz_2e_logger_3a_logger_2d_log,___PRC(59))
   ___SET_GLO(14,___G_jazz_2e_logger_3a_logger_2d_line,___PRC(67))
   ___SET_GLO(6,___G_jazz_2e_logger_3a_logger,___PRC(72))
   ___SET_GLO(12,___G_jazz_2e_logger_3a_logger_2d_expr,___PRC(80))
   ___SET_GLO(9,___G_jazz_2e_logger_3a_logger_2d_debug,___PRC(85))
   ___SET_GLO(11,___G_jazz_2e_logger_3a_logger_2d_exception,___PRC(90))
   ___SET_GLO(7,___G_jazz_2e_logger_3a_logger_2d_backtrace,___PRC(100))
   ___SET_R1(___VOID)
   ___POLL(12)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_logger_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_logger_23_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(13,1,0,0)
   ___SET_GLO(22,___G_jazz_2f_logger__create_2d_directories_21_d_5e_1,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_logger_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(14,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L18_bin_3a_jazz_2e_logger_23_)
   ___END_IF
   ___GOTO(___L19_bin_3a_jazz_2e_logger_23_)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_logger_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L18_bin_3a_jazz_2e_logger_23_)
   ___SET_R1(___GLO_jazz_2e_io_2e_literals_3a_construct_2d_directory)
   ___POLL(16)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_logger_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L19_bin_3a_jazz_2e_logger_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_io_2e_literals)
   ___ADJFP(8)
   ___POLL(17)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_logger_23_)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_directory
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_directory)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_directory)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_directory)
   ___SET_R1(___GLO_jazz_2e_logger_3a__2a_logger_2d_directory_2a_)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_set_2d_logger_2d_directory
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_set_2d_logger_2d_directory)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_set_2d_logger_2d_directory)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_set_2d_logger_2d_directory)
   ___SET_GLO(2,___G_jazz_2e_logger_3a__2a_logger_2d_directory_2a_,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_prefix
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_prefix)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_prefix)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_prefix)
   ___SET_R1(___GLO_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_set_2d_logger_2d_prefix
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_set_2d_logger_2d_prefix)
   ___SET_GLO(5,___G_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_make_2d_logger_2d_file
#undef ___PH_LBL0
#define ___PH_LBL0 28
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_make_2d_logger_2d_file)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_make_2d_logger_2d_file)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___SET_STK(1,___R0)
   ___SET_R3(___SUB(60))
   ___SET_R2(___GLO_jazz_2e_logger_3a__2a_logger_2d_prefix_2a_)
   ___SET_R1(___GLO_jazz_2e_logger_3a__2a_logger_2d_directory_2a_)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_2e_io_3a_timestamped_2d_file)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___SET_STK(-2,___R1)
   ___SET_R0(___LBL(3))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),22,___G_jazz_2f_logger__create_2d_directories_21_d_5e_1)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___SET_R1(___STK(-6))
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_make_2d_logger_2d_file)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_file
#undef ___PH_LBL0
#define ___PH_LBL0 35
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_file)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_file)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_file)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_file)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_file)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_file)
   ___IF(___NOTFALSEP(___GLO_jazz_2e_logger_3a__2a_logger_2d_file_2a_))
   ___GOTO(___L4_jazz_2e_logger_3a_logger_2d_file)
   ___END_IF
   ___GOTO(___L5_jazz_2e_logger_3a_logger_2d_file)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_file)
   ___SET_GLO(3,___G_jazz_2e_logger_3a__2a_logger_2d_file_2a_,___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L4_jazz_2e_logger_3a_logger_2d_file)
   ___SET_R1(___GLO_jazz_2e_logger_3a__2a_logger_2d_file_2a_)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_file)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L5_jazz_2e_logger_3a_logger_2d_file)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_file)
   ___SET_R0(___LBL(1))
   ___JUMPGLOSAFE(___SET_NARGS(0),18,___G_jazz_2e_logger_3a_make_2d_logger_2d_file)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_port
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_port)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_port)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_port)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_port)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_logger_2d_port)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_logger_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_port)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_port)
   ___IF(___NOTFALSEP(___GLO_jazz_2e_logger_3a__2a_logger_2d_port_2a_))
   ___GOTO(___L6_jazz_2e_logger_3a_logger_2d_port)
   ___END_IF
   ___GOTO(___L7_jazz_2e_logger_3a_logger_2d_port)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_port)
   ___SET_GLO(4,___G_jazz_2e_logger_3a__2a_logger_2d_port_2a_,___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L6_jazz_2e_logger_3a_logger_2d_port)
   ___SET_R1(___GLO_jazz_2e_logger_3a__2a_logger_2d_port_2a_)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_port)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L7_jazz_2e_logger_3a_logger_2d_port)
   ___SET_STK(1,___R0)
   ___ADJFP(4)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_port)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(0),13,___G_jazz_2e_logger_3a_logger_2d_file)
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_logger_2d_port)
   ___SET_R3(___TRU)
   ___SET_R2(___KEY_append)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(3),31,___G_jazz_2e_io_3a_path_2d_settings)
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_logger_2d_port)
   ___SET_R0(___LBL(1))
   ___JUMPPRM(___SET_NARGS(1),___PRM_open_2d_output_2d_file)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_close
#undef ___PH_LBL0
#define ___PH_LBL0 47
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_close)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_close)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_close)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_close)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_close)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_close)
   ___IF(___NOT(___NOTFALSEP(___GLO_jazz_2e_logger_3a__2a_logger_2d_port_2a_)))
   ___GOTO(___L4_jazz_2e_logger_3a_logger_2d_close)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_R1(___GLO_jazz_2e_logger_3a__2a_logger_2d_port_2a_)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_close)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),25,___G_close_2d_port)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_close)
   ___SET_GLO(4,___G_jazz_2e_logger_3a__2a_logger_2d_port_2a_,___FAL)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_close)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L4_jazz_2e_logger_3a_logger_2d_close)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_with_2d_logger_2d_output
#undef ___PH_LBL0
#define ___PH_LBL0 52
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_with_2d_logger_2d_output)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),16,___G_jazz_2e_logger_3a_logger_2d_port)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___SET_STK(-5,___R1)
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_force_2d_output)
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_with_2d_logger_2d_output)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_log
#undef ___PH_LBL0
#define ___PH_LBL0 59
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_log)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_log)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_log)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_log)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_logger_2d_log)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_logger_2d_log)
___DEF_P_HLBL(___L6_jazz_2e_logger_3a_logger_2d_log)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_log)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_log)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(3),5)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(3))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_log)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_log)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_log)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_logger_2d_log)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_logger_2d_log)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(5,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R3(___CLO(___R4,1))
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format)
   ___SET_R0(___LBL(6))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(3),___PRM_apply)
___DEF_SLBL(6,___L6_jazz_2e_logger_3a_logger_2d_log)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_line
#undef ___PH_LBL0
#define ___PH_LBL0 67
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_line)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_line)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_line)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_line)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_line)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_line)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(145))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_line)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),15,___G_jazz_2e_logger_3a_logger_2d_log)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_line)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_line)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger
#undef ___PH_LBL0
#define ___PH_LBL0 72
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_logger)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_logger)
___DEF_P_HLBL(___L6_jazz_2e_logger_3a_logger)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(0),34,___G_jazz_2e_time_3a_system_2d_date)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger)
   ___SET_R2(___SUB(157))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),26,___G_date_2d__3e_string)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger)
   ___SET_STK(-5,___R1)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format)
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_logger)
   ___SET_STK(-4,___R1)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___SUB(158))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(3),15,___G_jazz_2e_logger_3a_logger_2d_log)
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_logger)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_logger_3a_logger)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_expr
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_expr)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_expr)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_expr)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_expr)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_expr)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_expr)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(176))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_expr)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),15,___G_jazz_2e_logger_3a_logger_2d_log)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_expr)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_expr)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_debug
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
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_debug)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_debug)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_debug)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_debug)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_debug)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_debug)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(188))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_debug)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),15,___G_jazz_2e_logger_3a_logger_2d_log)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_debug)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_debug)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_exception
#undef ___PH_LBL0
#define ___PH_LBL0 90
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L6_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L7_jazz_2e_logger_3a_logger_2d_exception)
___DEF_P_HLBL(___L8_jazz_2e_logger_3a_logger_2d_exception)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_exception)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_exception)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(3),5)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(3))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_exception)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_exception)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_exception)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_logger_2d_exception)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_logger_2d_exception)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(5,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_logger_3a_logger_2d_exception)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_display_2d_exception)
___DEF_SLBL(7,___L7_jazz_2e_logger_3a_logger_2d_exception)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_logger_3a_logger_2d_exception)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_logger_3a_logger_2d_backtrace
#undef ___PH_LBL0
#define ___PH_LBL0 100
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L1_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L2_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L3_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L4_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L5_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L6_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L7_jazz_2e_logger_3a_logger_2d_backtrace)
___DEF_P_HLBL(___L8_jazz_2e_logger_3a_logger_2d_backtrace)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_logger_3a_logger_2d_backtrace)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_logger_3a_logger_2d_backtrace)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(3),5)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(3))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_2e_logger_3a_logger_2d_backtrace)
   ___POLL(2)
___DEF_SLBL(2,___L2_jazz_2e_logger_3a_logger_2d_backtrace)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_2e_logger_3a_with_2d_logger_2d_output)
___DEF_SLBL(3,___L3_jazz_2e_logger_3a_logger_2d_backtrace)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_logger_3a_logger_2d_backtrace)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(5,___L5_jazz_2e_logger_3a_logger_2d_backtrace)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(5,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_logger_3a_logger_2d_backtrace)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),27,___G_display_2d_continuation_2d_backtrace)
___DEF_SLBL(7,___L7_jazz_2e_logger_3a_logger_2d_backtrace)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_logger_3a_logger_2d_backtrace)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_logger_23_,"bin:jazz.logger#",___REF_SUB(1),18,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_logger_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_logger_23_,1,-1)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_logger_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_logger_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_directory,0,___REF_SUB(40),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_directory,0,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_set_2d_logger_2d_directory,0,___REF_SUB(45),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_set_2d_logger_2d_directory,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_prefix,0,___REF_SUB(50),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_prefix,0,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_set_2d_logger_2d_prefix,0,___REF_SUB(55),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_set_2d_logger_2d_prefix,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,0,___REF_SUB(61),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_make_2d_logger_2d_file,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_file,0,___REF_SUB(76),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_file,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_file,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_file,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_file,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_port,0,___REF_SUB(87),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_port,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_port,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_port,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_port,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_port,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_port,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_close,0,___REF_SUB(102),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_close,0,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_close,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_close,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_close,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,0,___REF_SUB(113),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_with_2d_logger_2d_output,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_log,0,___REF_SUB(128),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_log,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_log,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_log,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_log,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_log,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_log,1,1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_log,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_line,0,___REF_SUB(146),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_line,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_line,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_line,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_line,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger,0,___REF_SUB(159),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_expr,0,___REF_SUB(177),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_expr,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_expr,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_expr,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_expr,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_debug,0,___REF_SUB(189),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_debug,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_debug,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_debug,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_debug,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_exception,0,___REF_SUB(200),9,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_exception,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_exception,1,1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_exception,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_logger_3a_logger_2d_backtrace,0,___REF_SUB(221),9,0)
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_backtrace,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_logger_3a_logger_2d_backtrace,1,1)
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_logger_3a_logger_2d_backtrace,___IFD(___RETI,8,0,0x3f03L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_logger_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_logger_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Settings,"Settings")
___DEF_MOD_SYM(1,___S_bin_3a_jazz_2e_logger,"bin:jazz.logger")
___DEF_MOD_SYM(2,___S_cont,"cont")
___DEF_MOD_SYM(3,___S_create_2d_directories,"create-directories")
___DEF_MOD_SYM(4,___S_date,"date")
___DEF_MOD_SYM(5,___S_exc,"exc")
___DEF_MOD_SYM(6,___S_expr,"expr")
___DEF_MOD_SYM(7,___S_file,"file")
___DEF_MOD_SYM(8,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(9,___S_jazz,"jazz")
___DEF_MOD_SYM(10,___S_jazz_2e_io,"jazz.io")
___DEF_MOD_SYM(11,___S_jazz_2e_io_2e_literals,"jazz.io.literals")
___DEF_MOD_SYM(12,___S_jazz_2e_logger,"jazz.logger")
___DEF_MOD_SYM(13,___S_jazz_2e_logger_3a_logger,"jazz.logger:logger")
___DEF_MOD_SYM(14,___S_jazz_2e_logger_3a_logger_2d_backtrace,"jazz.logger:logger-backtrace")
___DEF_MOD_SYM(15,___S_jazz_2e_logger_3a_logger_2d_close,"jazz.logger:logger-close")
___DEF_MOD_SYM(16,___S_jazz_2e_logger_3a_logger_2d_debug,"jazz.logger:logger-debug")
___DEF_MOD_SYM(17,___S_jazz_2e_logger_3a_logger_2d_directory,"jazz.logger:logger-directory")
___DEF_MOD_SYM(18,___S_jazz_2e_logger_3a_logger_2d_exception,"jazz.logger:logger-exception")
___DEF_MOD_SYM(19,___S_jazz_2e_logger_3a_logger_2d_expr,"jazz.logger:logger-expr")
___DEF_MOD_SYM(20,___S_jazz_2e_logger_3a_logger_2d_file,"jazz.logger:logger-file")
___DEF_MOD_SYM(21,___S_jazz_2e_logger_3a_logger_2d_line,"jazz.logger:logger-line")
___DEF_MOD_SYM(22,___S_jazz_2e_logger_3a_logger_2d_log,"jazz.logger:logger-log")
___DEF_MOD_SYM(23,___S_jazz_2e_logger_3a_logger_2d_port,"jazz.logger:logger-port")
___DEF_MOD_SYM(24,___S_jazz_2e_logger_3a_logger_2d_prefix,"jazz.logger:logger-prefix")
___DEF_MOD_SYM(25,___S_jazz_2e_logger_3a_make_2d_logger_2d_file,"jazz.logger:make-logger-file")
___DEF_MOD_SYM(26,___S_jazz_2e_logger_3a_set_2d_logger_2d_directory,"jazz.logger:set-logger-directory")

___DEF_MOD_SYM(27,___S_jazz_2e_logger_3a_set_2d_logger_2d_prefix,"jazz.logger:set-logger-prefix")

___DEF_MOD_SYM(28,___S_jazz_2e_logger_3a_with_2d_logger_2d_output,"jazz.logger:with-logger-output")

___DEF_MOD_SYM(29,___S_jazz_2e_time,"jazz.time")
___DEF_MOD_SYM(30,___S_line,"line")
___DEF_MOD_SYM(31,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(32,___S_logger,"logger")
___DEF_MOD_SYM(33,___S_logger_2d_backtrace,"logger-backtrace")
___DEF_MOD_SYM(34,___S_logger_2d_close,"logger-close")
___DEF_MOD_SYM(35,___S_logger_2d_debug,"logger-debug")
___DEF_MOD_SYM(36,___S_logger_2d_directory,"logger-directory")
___DEF_MOD_SYM(37,___S_logger_2d_exception,"logger-exception")
___DEF_MOD_SYM(38,___S_logger_2d_expr,"logger-expr")
___DEF_MOD_SYM(39,___S_logger_2d_file,"logger-file")
___DEF_MOD_SYM(40,___S_logger_2d_line,"logger-line")
___DEF_MOD_SYM(41,___S_logger_2d_log,"logger-log")
___DEF_MOD_SYM(42,___S_logger_2d_port,"logger-port")
___DEF_MOD_SYM(43,___S_logger_2d_prefix,"logger-prefix")
___DEF_MOD_SYM(44,___S_make_2d_logger_2d_file,"make-logger-file")
___DEF_MOD_SYM(45,___S_port,"port")
___DEF_MOD_SYM(46,___S_proc,"proc")
___DEF_MOD_SYM(47,___S_public,"public")
___DEF_MOD_SYM(48,___S_rest,"rest")
___DEF_MOD_SYM(49,___S_set_2d_logger_2d_directory,"set-logger-directory")
___DEF_MOD_SYM(50,___S_set_2d_logger_2d_prefix,"set-logger-prefix")
___DEF_MOD_SYM(51,___S_time,"time")
___DEF_MOD_SYM(52,___S_with_2d_logger_2d_output,"with-logger-output")
___DEF_MOD_KEY(0,___K_append,"append")
___END_MOD_SYM_KEY

#endif
