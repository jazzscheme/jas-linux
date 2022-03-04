#ifdef ___LINKER_INFO
; File: "Server-Interface.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.network.server.Server-Interface"
(("bin:jazz.network.server.Server-Interface"))
(
"Server-Interface"
"bin:jazz.network.server.Server-Interface"
"foundation.dialect"
"get-state"
"jazz"
"jazz.network.server.Server-Interface"
"jazz.network.server.Server-Interface:Server-Interface"
"protected"
"rest"
"restart"
"self"
"server-alternate-service"
"server-debug?"
"server-hits"
"server-host"
"server-name"
"server-service"
"server-title"
"server-version"
"start"
"stop"
"wait-started"
"wait-stopped"
)
(
)
(
"bin:jazz.network.server.Server-Interface#"
"jazz.network.server.Server-Interface:Server-Interface"
"jazz.network.server.Server-Interface:Server-Interface:get-state"
"jazz.network.server.Server-Interface:Server-Interface:restart"
"jazz.network.server.Server-Interface:Server-Interface:server-alternate-service"
"jazz.network.server.Server-Interface:Server-Interface:server-debug?"
"jazz.network.server.Server-Interface:Server-Interface:server-hits"
"jazz.network.server.Server-Interface:Server-Interface:server-host"
"jazz.network.server.Server-Interface:Server-Interface:server-name"
"jazz.network.server.Server-Interface:Server-Interface:server-service"
"jazz.network.server.Server-Interface:Server-Interface:server-title"
"jazz.network.server.Server-Interface:Server-Interface:server-version"
"jazz.network.server.Server-Interface:Server-Interface:start"
"jazz.network.server.Server-Interface:Server-Interface:stop"
"jazz.network.server.Server-Interface:Server-Interface:wait-started"
"jazz.network.server.Server-Interface:Server-Interface:wait-stopped"
)
(
"jazz.network.server.Server-Interface:Server-Interface!rank"
"jazz.network.server.Server-Interface:Server-Interface:get-state!rank"
"jazz.network.server.Server-Interface:Server-Interface:restart!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-alternate-service!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-debug?!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-hits!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-host!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-name!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-service!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-title!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-version!rank"
"jazz.network.server.Server-Interface:Server-Interface:start!rank"
"jazz.network.server.Server-Interface:Server-Interface:stop!rank"
"jazz.network.server.Server-Interface:Server-Interface:wait-started!rank"
"jazz.network.server.Server-Interface:Server-Interface:wait-stopped!rank"
)
(
"jazz:Interface"
"jazz:add-virtual-method"
"jazz:call-into-abstract"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new-interface"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.network.server.Server-Interface"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface
#define ___MH_PROC ___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 23
#define ___GLOCOUNT 39
#define ___SUPCOUNT 31
#define ___CNSCOUNT 2
#define ___SUBCOUNT 204
#define ___LBLCOUNT 94
#define ___OFDCOUNT 14
#define ___MODDESCR ___REF_SUB(203)
#include "gambit.h"

___NEED_SYM(___S_Server_2d_Interface)
___NEED_SYM(___S_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_state)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_network_2e_server_2e_Server_2d_Interface)
___NEED_SYM(___S_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_restart)
___NEED_SYM(___S_self)
___NEED_SYM(___S_server_2d_alternate_2d_service)
___NEED_SYM(___S_server_2d_debug_3f_)
___NEED_SYM(___S_server_2d_hits)
___NEED_SYM(___S_server_2d_host)
___NEED_SYM(___S_server_2d_name)
___NEED_SYM(___S_server_2d_service)
___NEED_SYM(___S_server_2d_title)
___NEED_SYM(___S_server_2d_version)
___NEED_SYM(___S_start)
___NEED_SYM(___S_stop)
___NEED_SYM(___S_wait_2d_started)
___NEED_SYM(___S_wait_2d_stopped)

___NEED_GLO(___G_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f__21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank)
___NEED_GLO(___G_jazz_3a_Interface)
___NEED_GLO(___G_jazz_3a_add_2d_virtual_2d_method)
___NEED_GLO(___G_jazz_3a_call_2d_into_2d_abstract)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_interface)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_Server_2d_Interface,"Server-Interface")
___DEF_SYM(1,___S_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface,"bin:jazz.network.server.Server-Interface")

___DEF_SYM(2,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(3,___S_get_2d_state,"get-state")
___DEF_SYM(4,___S_jazz,"jazz")
___DEF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface,"jazz.network.server.Server-Interface")

___DEF_SYM(6,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,"jazz.network.server.Server-Interface:Server-Interface")

___DEF_SYM(7,___S_protected,"protected")
___DEF_SYM(8,___S_rest,"rest")
___DEF_SYM(9,___S_restart,"restart")
___DEF_SYM(10,___S_self,"self")
___DEF_SYM(11,___S_server_2d_alternate_2d_service,"server-alternate-service")
___DEF_SYM(12,___S_server_2d_debug_3f_,"server-debug?")
___DEF_SYM(13,___S_server_2d_hits,"server-hits")
___DEF_SYM(14,___S_server_2d_host,"server-host")
___DEF_SYM(15,___S_server_2d_name,"server-name")
___DEF_SYM(16,___S_server_2d_service,"server-service")
___DEF_SYM(17,___S_server_2d_title,"server-title")
___DEF_SYM(18,___S_server_2d_version,"server-version")
___DEF_SYM(19,___S_start,"start")
___DEF_SYM(20,___S_stop,"stop")
___DEF_SYM(21,___S_wait_2d_started,"wait-started")
___DEF_SYM(22,___S_wait_2d_stopped,"wait-stopped")
___END_SYM

#define ___SYM_Server_2d_Interface ___SYM(0,___S_Server_2d_Interface)
#define ___SYM_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface ___SYM(1,___S_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface)
#define ___SYM_foundation_2e_dialect ___SYM(2,___S_foundation_2e_dialect)
#define ___SYM_get_2d_state ___SYM(3,___S_get_2d_state)
#define ___SYM_jazz ___SYM(4,___S_jazz)
#define ___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface ___SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface)
#define ___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface ___SYM(6,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
#define ___SYM_protected ___SYM(7,___S_protected)
#define ___SYM_rest ___SYM(8,___S_rest)
#define ___SYM_restart ___SYM(9,___S_restart)
#define ___SYM_self ___SYM(10,___S_self)
#define ___SYM_server_2d_alternate_2d_service ___SYM(11,___S_server_2d_alternate_2d_service)
#define ___SYM_server_2d_debug_3f_ ___SYM(12,___S_server_2d_debug_3f_)
#define ___SYM_server_2d_hits ___SYM(13,___S_server_2d_hits)
#define ___SYM_server_2d_host ___SYM(14,___S_server_2d_host)
#define ___SYM_server_2d_name ___SYM(15,___S_server_2d_name)
#define ___SYM_server_2d_service ___SYM(16,___S_server_2d_service)
#define ___SYM_server_2d_title ___SYM(17,___S_server_2d_title)
#define ___SYM_server_2d_version ___SYM(18,___S_server_2d_version)
#define ___SYM_start ___SYM(19,___S_start)
#define ___SYM_stop ___SYM(20,___S_stop)
#define ___SYM_wait_2d_started ___SYM(21,___S_wait_2d_started)
#define ___SYM_wait_2d_stopped ___SYM(22,___S_wait_2d_stopped)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.network.server.Server-Interface#")

___DEF_GLO(1,"jazz.network.server.Server-Interface:Server-Interface")

___DEF_GLO(2,"jazz.network.server.Server-Interface:Server-Interface!rank")

___DEF_GLO(3,"jazz.network.server.Server-Interface:Server-Interface:get-state")

___DEF_GLO(4,"jazz.network.server.Server-Interface:Server-Interface:get-state!rank")

___DEF_GLO(5,"jazz.network.server.Server-Interface:Server-Interface:restart")

___DEF_GLO(6,"jazz.network.server.Server-Interface:Server-Interface:restart!rank")

___DEF_GLO(7,"jazz.network.server.Server-Interface:Server-Interface:server-alternate-service")

___DEF_GLO(8,"jazz.network.server.Server-Interface:Server-Interface:server-alternate-service!rank")

___DEF_GLO(9,"jazz.network.server.Server-Interface:Server-Interface:server-debug?")

___DEF_GLO(10,"jazz.network.server.Server-Interface:Server-Interface:server-debug?!rank")

___DEF_GLO(11,"jazz.network.server.Server-Interface:Server-Interface:server-hits")

___DEF_GLO(12,"jazz.network.server.Server-Interface:Server-Interface:server-hits!rank")

___DEF_GLO(13,"jazz.network.server.Server-Interface:Server-Interface:server-host")

___DEF_GLO(14,"jazz.network.server.Server-Interface:Server-Interface:server-host!rank")

___DEF_GLO(15,"jazz.network.server.Server-Interface:Server-Interface:server-name")

___DEF_GLO(16,"jazz.network.server.Server-Interface:Server-Interface:server-name!rank")

___DEF_GLO(17,"jazz.network.server.Server-Interface:Server-Interface:server-service")

___DEF_GLO(18,"jazz.network.server.Server-Interface:Server-Interface:server-service!rank")

___DEF_GLO(19,"jazz.network.server.Server-Interface:Server-Interface:server-title")

___DEF_GLO(20,"jazz.network.server.Server-Interface:Server-Interface:server-title!rank")

___DEF_GLO(21,"jazz.network.server.Server-Interface:Server-Interface:server-version")

___DEF_GLO(22,"jazz.network.server.Server-Interface:Server-Interface:server-version!rank")

___DEF_GLO(23,"jazz.network.server.Server-Interface:Server-Interface:start")

___DEF_GLO(24,"jazz.network.server.Server-Interface:Server-Interface:start!rank")

___DEF_GLO(25,"jazz.network.server.Server-Interface:Server-Interface:stop")

___DEF_GLO(26,"jazz.network.server.Server-Interface:Server-Interface:stop!rank")

___DEF_GLO(27,"jazz.network.server.Server-Interface:Server-Interface:wait-started")

___DEF_GLO(28,"jazz.network.server.Server-Interface:Server-Interface:wait-started!rank")

___DEF_GLO(29,"jazz.network.server.Server-Interface:Server-Interface:wait-stopped")

___DEF_GLO(30,"jazz.network.server.Server-Interface:Server-Interface:wait-stopped!rank")

___DEF_GLO(31,"jazz:Interface")
___DEF_GLO(32,"jazz:add-virtual-method")
___DEF_GLO(33,"jazz:call-into-abstract")
___DEF_GLO(34,"jazz:global-bound?")
___DEF_GLO(35,"jazz:global-ref")
___DEF_GLO(36,"jazz:load-unit")
___DEF_GLO(37,"jazz:new-interface")
___DEF_GLO(38,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_ ___GLO(0,___G_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
#define ___PRM_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_ ___PRM(0,___G_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface ___GLO(1,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface ___PRM(1,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank ___GLO(2,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank ___PRM(2,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state ___GLO(3,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state ___PRM(3,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state_21_rank ___GLO(4,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state_21_rank ___PRM(4,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart ___GLO(5,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart ___PRM(5,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart_21_rank ___GLO(6,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart_21_rank ___PRM(6,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service ___GLO(7,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service ___PRM(7,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank ___GLO(8,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank ___PRM(8,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_ ___GLO(9,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_ ___PRM(9,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f__21_rank ___GLO(10,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f__21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f__21_rank ___PRM(10,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f__21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits ___GLO(11,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits ___PRM(11,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits_21_rank ___GLO(12,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits_21_rank ___PRM(12,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host ___GLO(13,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host ___PRM(13,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank ___GLO(14,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank ___PRM(14,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name ___GLO(15,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name ___PRM(15,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank ___GLO(16,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank ___PRM(16,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service ___GLO(17,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service ___PRM(17,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank ___GLO(18,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank ___PRM(18,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title ___GLO(19,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title ___PRM(19,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title_21_rank ___GLO(20,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title_21_rank ___PRM(20,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version ___GLO(21,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version ___PRM(21,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version_21_rank ___GLO(22,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version_21_rank ___PRM(22,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start ___GLO(23,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start ___PRM(23,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank ___GLO(24,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank ___PRM(24,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop ___GLO(25,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop ___PRM(25,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank ___GLO(26,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank ___PRM(26,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started ___GLO(27,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started ___PRM(27,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank ___GLO(28,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank ___PRM(28,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped ___GLO(29,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped ___PRM(29,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank ___GLO(30,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank ___PRM(30,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank)
#define ___GLO_jazz_3a_Interface ___GLO(31,___G_jazz_3a_Interface)
#define ___PRM_jazz_3a_Interface ___PRM(31,___G_jazz_3a_Interface)
#define ___GLO_jazz_3a_add_2d_virtual_2d_method ___GLO(32,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___PRM_jazz_3a_add_2d_virtual_2d_method ___PRM(32,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___GLO_jazz_3a_call_2d_into_2d_abstract ___GLO(33,___G_jazz_3a_call_2d_into_2d_abstract)
#define ___PRM_jazz_3a_call_2d_into_2d_abstract ___PRM(33,___G_jazz_3a_call_2d_into_2d_abstract)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(34,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(34,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(35,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(35,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(36,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(36,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_interface ___GLO(37,___G_jazz_3a_new_2d_interface)
#define ___PRM_jazz_3a_new_2d_interface ___PRM(37,___G_jazz_3a_new_2d_interface)
#define ___GLO_jazz_3a_register_2d_module ___GLO(38,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(38,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_NUL)
,___DEF_CNS(___REF_SYM(0,___S_Server_2d_Interface),___REF_SYM(6,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(48))
               ___VEC0
___DEF_SUB_VEC(___X1,23UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X48,0UL)
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X50,4UL)
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X53,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X55,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X57,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(70))
               ___VEC0
___DEF_SUB_VEC(___X61,4UL)
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_SUB(68))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X64,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X66,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X68,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X72,4UL)
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X75,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X77,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(78))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X79,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_SUB(92))
               ___VEC0
___DEF_SUB_VEC(___X83,4UL)
               ___VEC1(___REF_SUB(84))
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_SUB(90))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X86,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X88,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X90,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_SUB(94))
               ___VEC1(___REF_SUB(103))
               ___VEC0
___DEF_SUB_VEC(___X94,4UL)
               ___VEC1(___REF_SUB(95))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(96))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X97,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(98))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X99,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X101,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_SUB(114))
               ___VEC0
___DEF_SUB_VEC(___X105,4UL)
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_SUB(108))
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X108,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X110,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X112,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X116,4UL)
               ___VEC1(___REF_SUB(117))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_SUB(123))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(118))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X119,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X121,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X123,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_SUB(136))
               ___VEC0
___DEF_SUB_VEC(___X127,4UL)
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_SUB(134))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X130,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X132,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X134,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SUB(138))
               ___VEC1(___REF_SUB(147))
               ___VEC0
___DEF_SUB_VEC(___X138,4UL)
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_SUB(145))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(140))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X141,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(142))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X143,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(144))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X145,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(146))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X148,2UL)
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_SUB(158))
               ___VEC0
___DEF_SUB_VEC(___X149,4UL)
               ___VEC1(___REF_SUB(150))
               ___VEC1(___REF_SUB(152))
               ___VEC1(___REF_SUB(154))
               ___VEC1(___REF_SUB(156))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X152,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X154,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X156,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X158,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_SUB(169))
               ___VEC0
___DEF_SUB_VEC(___X160,4UL)
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_SUB(167))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X163,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X164,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X165,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X167,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X168,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X171,4UL)
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(178))
               ___VEC0
___DEF_SUB_VEC(___X172,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(173))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X174,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X176,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X178,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_SUB(182))
               ___VEC1(___REF_SUB(191))
               ___VEC0
___DEF_SUB_VEC(___X182,4UL)
               ___VEC1(___REF_SUB(183))
               ___VEC1(___REF_SUB(185))
               ___VEC1(___REF_SUB(187))
               ___VEC1(___REF_SUB(189))
               ___VEC0
___DEF_SUB_VEC(___X183,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(184))
               ___VEC0
___DEF_SUB_VEC(___X184,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X185,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(186))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X187,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(188))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X188,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X189,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(190))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X190,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X192,2UL)
               ___VEC1(___REF_SUB(193))
               ___VEC1(___REF_SUB(202))
               ___VEC0
___DEF_SUB_VEC(___X193,4UL)
               ___VEC1(___REF_SUB(194))
               ___VEC1(___REF_SUB(196))
               ___VEC1(___REF_SUB(198))
               ___VEC1(___REF_SUB(200))
               ___VEC0
___DEF_SUB_VEC(___X194,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(195))
               ___VEC0
___DEF_SUB_VEC(___X195,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X196,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(197))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X197,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X198,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(199))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X199,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X200,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(201))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X201,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X202,2UL)
               ___VEC1(___REF_SYM(8,___S_rest))
               ___VEC1(___REF_SYM(10,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X203,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_STK(1,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_R1(___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L24_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___END_IF
   ___SET_R1(___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),35,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___GOTO(___L23_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
___DEF_GLBL(___L23_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(1,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(7L)))
   ___SET_GLO(2,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank,___R1)
   ___SET_GLO(3,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state,___PRC(25))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
   ___SET_R2(___SYM_get_2d_state)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(4,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state_21_rank,___R1)
   ___SET_GLO(23,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start,___PRC(30))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
   ___SET_R2(___SYM_start)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(24,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank,___R1)
   ___SET_GLO(25,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop,___PRC(35))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
   ___SET_R2(___SYM_stop)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(26,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank,___R1)
   ___SET_GLO(5,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart,___PRC(40))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
   ___SET_R2(___SYM_restart)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(6,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart_21_rank,___R1)
   ___SET_GLO(27,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started,___PRC(45))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
   ___SET_R2(___SYM_wait_2d_started)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(28,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank,___R1)
   ___SET_GLO(29,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped,___PRC(50))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
   ___SET_R2(___SYM_wait_2d_stopped)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(30,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank,___R1)
   ___SET_GLO(15,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name,___PRC(55))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
   ___SET_R2(___SYM_server_2d_name)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(16,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank,___R1)
   ___SET_GLO(19,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title,___PRC(60))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
   ___SET_R2(___SYM_server_2d_title)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(20,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title_21_rank,___R1)
   ___SET_GLO(21,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version,___PRC(65))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
   ___SET_R2(___SYM_server_2d_version)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(22,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version_21_rank,___R1)
   ___SET_GLO(13,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host,___PRC(70))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
   ___SET_R2(___SYM_server_2d_host)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(14,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank,___R1)
   ___SET_GLO(17,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service,___PRC(75))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
   ___SET_R2(___SYM_server_2d_service)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(18,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank,___R1)
   ___SET_GLO(7,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service,___PRC(80))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
   ___SET_R2(___SYM_server_2d_alternate_2d_service)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(8,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank,___R1)
   ___SET_GLO(11,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits,___PRC(85))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
   ___SET_R2(___SYM_server_2d_hits)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(12,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits_21_rank,___R1)
   ___SET_GLO(9,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_,___PRC(90))
   ___SET_R3(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
   ___SET_R2(___SYM_server_2d_debug_3f_)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(3),32,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_GLO(10,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f__21_rank,___R1)
   ___SET_R1(___VOID)
   ___POLL(22)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L24_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_)
   ___SET_R3(___NUL)
   ___SET_R2(___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R1(___GLO_jazz_3a_Interface)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_new_2d_interface)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state
#undef ___PH_LBL0
#define ___PH_LBL0 25
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_get_2d_state)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start
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
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_start)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop
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
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_stop)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart
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
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_restart)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_wait_2d_started)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped
#undef ___PH_LBL0
#define ___PH_LBL0 50
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_wait_2d_stopped)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 55
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_name)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title
#undef ___PH_LBL0
#define ___PH_LBL0 60
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_title)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version
#undef ___PH_LBL0
#define ___PH_LBL0 65
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_version)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host
#undef ___PH_LBL0
#define ___PH_LBL0 70
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_host)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service
#undef ___PH_LBL0
#define ___PH_LBL0 75
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_service)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service
#undef ___PH_LBL0
#define ___PH_LBL0 80
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_alternate_2d_service)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits
#undef ___PH_LBL0
#define ___PH_LBL0 85
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_hits)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 90
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_server_2d_debug_3f_)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),33,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,"bin:jazz.network.server.Server-Interface#",
___REF_SUB(0),23,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state,0,___REF_SUB(49),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_get_2d_state,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start,0,___REF_SUB(60),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop,0,___REF_SUB(71),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart,0,___REF_SUB(82),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_restart,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started,0,___REF_SUB(93),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped,0,___REF_SUB(104),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name,0,___REF_SUB(115),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title,0,___REF_SUB(126),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_title,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version,0,___REF_SUB(137),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_version,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host,0,___REF_SUB(148),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service,0,___REF_SUB(159),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service,0,___REF_SUB(170),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits,0,___REF_SUB(181),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_hits,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_,0,___REF_SUB(192),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_debug_3f_,___IFD(___RETI,8,0,0x3f07L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
,___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Server_2d_Interface,"Server-Interface")
___DEF_MOD_SYM(1,___S_bin_3a_jazz_2e_network_2e_server_2e_Server_2d_Interface,"bin:jazz.network.server.Server-Interface")

___DEF_MOD_SYM(2,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(3,___S_get_2d_state,"get-state")
___DEF_MOD_SYM(4,___S_jazz,"jazz")
___DEF_MOD_SYM(5,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface,"jazz.network.server.Server-Interface")

___DEF_MOD_SYM(6,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,"jazz.network.server.Server-Interface:Server-Interface")

___DEF_MOD_SYM(7,___S_protected,"protected")
___DEF_MOD_SYM(8,___S_rest,"rest")
___DEF_MOD_SYM(9,___S_restart,"restart")
___DEF_MOD_SYM(10,___S_self,"self")
___DEF_MOD_SYM(11,___S_server_2d_alternate_2d_service,"server-alternate-service")
___DEF_MOD_SYM(12,___S_server_2d_debug_3f_,"server-debug?")
___DEF_MOD_SYM(13,___S_server_2d_hits,"server-hits")
___DEF_MOD_SYM(14,___S_server_2d_host,"server-host")
___DEF_MOD_SYM(15,___S_server_2d_name,"server-name")
___DEF_MOD_SYM(16,___S_server_2d_service,"server-service")
___DEF_MOD_SYM(17,___S_server_2d_title,"server-title")
___DEF_MOD_SYM(18,___S_server_2d_version,"server-version")
___DEF_MOD_SYM(19,___S_start,"start")
___DEF_MOD_SYM(20,___S_stop,"stop")
___DEF_MOD_SYM(21,___S_wait_2d_started,"wait-started")
___DEF_MOD_SYM(22,___S_wait_2d_stopped,"wait-stopped")
___END_MOD_SYM_KEY

#endif
