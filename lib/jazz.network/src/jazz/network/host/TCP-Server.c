#ifdef ___LINKER_INFO
; File: "TCP-Server.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.network.host.TCP-Server"
(("bin:jazz.network.host.TCP-Server"))
(
"Server-Interface"
"TCP-Server"
"TCP-Server~Class"
"accept-connection"
"address"
"alternate-service"
"bin:jazz.network.host.TCP-Server"
"box^0"
"close-connection"
"connection-handler"
"connection-name"
"connection-readtable"
"cr-lf"
"create-thread"
"debug?"
"destroy"
"exc"
"exception"
"foundation.dialect"
"get-alternate-service"
"get-debug?"
"get-hits"
"get-host"
"get-name"
"get-reuse-address?"
"get-server-port"
"get-service"
"get-socket-info"
"get-state"
"hits"
"host"
"initialize"
"jazz"
"jazz.network"
"jazz.network.host.TCP-Server"
"jazz.network.host.TCP-Server:TCP-Server"
"jazz.network.host.TCP-Server:TCP-Server~Class"
"jazz.network.server.Server-Interface"
"jazz.version"
"listening-host"
"listening-port"
"loaded?"
"name"
"nextmethod"
"port"
"process-connection"
"protected"
"rest"
"restart"
"reuse-address?"
"self"
"server-alternate-service"
"server-debug?"
"server-hit"
"server-hits"
"server-host"
"server-name"
"server-port"
"server-service"
"server-thread"
"server-title"
"server-version"
"service"
"set-debug?"
"set-reuse-address?"
"set-server-port"
"set-state"
"socket-info"
"start"
"start-listener"
"started"
"started-mutex"
"starting"
"state"
"stop"
"stopped"
"stopped-mutex"
"stopping"
"tcp-connection"
"tcp-server"
"temp.36"
"temp.38"
"temp.39"
"wait-started"
"wait-stopped"
)
(
"alternate-service"
"connection-handler"
"debug?"
"eol-encoding"
"host"
"keep-alive"
"name"
"port-number"
"readtable"
"reuse-address"
"reuse-address?"
"server-address"
"service"
)
(
"bin:jazz.network.host.TCP-Server#"
"jazz.network.host.TCP-Server:TCP-Server"
"jazz.network.host.TCP-Server:TCP-Server!level"
"jazz.network.host.TCP-Server:TCP-Server:accept-connection"
"jazz.network.host.TCP-Server:TCP-Server:accept-connection!rank"
"jazz.network.host.TCP-Server:TCP-Server:alternate-service!offset"
"jazz.network.host.TCP-Server:TCP-Server:alternate-service!slot"
"jazz.network.host.TCP-Server:TCP-Server:close-connection"
"jazz.network.host.TCP-Server:TCP-Server:close-connection!rank"
"jazz.network.host.TCP-Server:TCP-Server:connection-handler!initialize"
"jazz.network.host.TCP-Server:TCP-Server:connection-handler!offset"
"jazz.network.host.TCP-Server:TCP-Server:connection-handler!slot"
"jazz.network.host.TCP-Server:TCP-Server:connection-name"
"jazz.network.host.TCP-Server:TCP-Server:connection-name!rank"
"jazz.network.host.TCP-Server:TCP-Server:connection-readtable"
"jazz.network.host.TCP-Server:TCP-Server:connection-readtable!rank"
"jazz.network.host.TCP-Server:TCP-Server:create-thread"
"jazz.network.host.TCP-Server:TCP-Server:create-thread!rank"
"jazz.network.host.TCP-Server:TCP-Server:debug?!offset"
"jazz.network.host.TCP-Server:TCP-Server:debug?!slot"
"jazz.network.host.TCP-Server:TCP-Server:destroy"
"jazz.network.host.TCP-Server:TCP-Server:destroy!node"
"jazz.network.host.TCP-Server:TCP-Server:get-alternate-service"
"jazz.network.host.TCP-Server:TCP-Server:get-debug?"
"jazz.network.host.TCP-Server:TCP-Server:get-hits"
"jazz.network.host.TCP-Server:TCP-Server:get-host"
"jazz.network.host.TCP-Server:TCP-Server:get-name"
"jazz.network.host.TCP-Server:TCP-Server:get-reuse-address?"
"jazz.network.host.TCP-Server:TCP-Server:get-server-port"
"jazz.network.host.TCP-Server:TCP-Server:get-service"
"jazz.network.host.TCP-Server:TCP-Server:get-socket-info"
"jazz.network.host.TCP-Server:TCP-Server:get-state"
"jazz.network.host.TCP-Server:TCP-Server:hits!initialize"
"jazz.network.host.TCP-Server:TCP-Server:hits!offset"
"jazz.network.host.TCP-Server:TCP-Server:hits!slot"
"jazz.network.host.TCP-Server:TCP-Server:host!offset"
"jazz.network.host.TCP-Server:TCP-Server:host!slot"
"jazz.network.host.TCP-Server:TCP-Server:initialize"
"jazz.network.host.TCP-Server:TCP-Server:initialize!node"
"jazz.network.host.TCP-Server:TCP-Server:listening-host"
"jazz.network.host.TCP-Server:TCP-Server:listening-port"
"jazz.network.host.TCP-Server:TCP-Server:name!offset"
"jazz.network.host.TCP-Server:TCP-Server:name!slot"
"jazz.network.host.TCP-Server:TCP-Server:process-connection"
"jazz.network.host.TCP-Server:TCP-Server:process-connection!rank"
"jazz.network.host.TCP-Server:TCP-Server:restart"
"jazz.network.host.TCP-Server:TCP-Server:reuse-address?!initialize"
"jazz.network.host.TCP-Server:TCP-Server:reuse-address?!offset"
"jazz.network.host.TCP-Server:TCP-Server:reuse-address?!slot"
"jazz.network.host.TCP-Server:TCP-Server:server-alternate-service"
"jazz.network.host.TCP-Server:TCP-Server:server-debug?"
"jazz.network.host.TCP-Server:TCP-Server:server-hit"
"jazz.network.host.TCP-Server:TCP-Server:server-hit!rank"
"jazz.network.host.TCP-Server:TCP-Server:server-hits"
"jazz.network.host.TCP-Server:TCP-Server:server-host"
"jazz.network.host.TCP-Server:TCP-Server:server-name"
"jazz.network.host.TCP-Server:TCP-Server:server-port!initialize"
"jazz.network.host.TCP-Server:TCP-Server:server-port!offset"
"jazz.network.host.TCP-Server:TCP-Server:server-port!slot"
"jazz.network.host.TCP-Server:TCP-Server:server-service"
"jazz.network.host.TCP-Server:TCP-Server:server-thread!offset"
"jazz.network.host.TCP-Server:TCP-Server:server-thread!slot"
"jazz.network.host.TCP-Server:TCP-Server:server-title"
"jazz.network.host.TCP-Server:TCP-Server:server-version"
"jazz.network.host.TCP-Server:TCP-Server:service!offset"
"jazz.network.host.TCP-Server:TCP-Server:service!slot"
"jazz.network.host.TCP-Server:TCP-Server:set-debug?"
"jazz.network.host.TCP-Server:TCP-Server:set-reuse-address?"
"jazz.network.host.TCP-Server:TCP-Server:set-server-port"
"jazz.network.host.TCP-Server:TCP-Server:set-state"
"jazz.network.host.TCP-Server:TCP-Server:socket-info!offset"
"jazz.network.host.TCP-Server:TCP-Server:socket-info!slot"
"jazz.network.host.TCP-Server:TCP-Server:start"
"jazz.network.host.TCP-Server:TCP-Server:start-listener"
"jazz.network.host.TCP-Server:TCP-Server:started-mutex!offset"
"jazz.network.host.TCP-Server:TCP-Server:started-mutex!slot"
"jazz.network.host.TCP-Server:TCP-Server:state!initialize"
"jazz.network.host.TCP-Server:TCP-Server:state!offset"
"jazz.network.host.TCP-Server:TCP-Server:state!slot"
"jazz.network.host.TCP-Server:TCP-Server:stop"
"jazz.network.host.TCP-Server:TCP-Server:stopped-mutex!offset"
"jazz.network.host.TCP-Server:TCP-Server:stopped-mutex!slot"
"jazz.network.host.TCP-Server:TCP-Server:wait-started"
"jazz.network.host.TCP-Server:TCP-Server:wait-stopped"
"jazz.network.host.TCP-Server:TCP-Server~Class"
"jazz.network.server.Server-Interface:Server-Interface:autoload"
"jazz.version:construct-version:autoload"
"jazz/network/host/TCP-Server_lit^1"
)
(
"jazz.network.host.TCP-Server:TCP-Server:get-state!node"
"jazz.network.host.TCP-Server:TCP-Server:restart!node"
"jazz.network.host.TCP-Server:TCP-Server:server-alternate-service!node"
"jazz.network.host.TCP-Server:TCP-Server:server-debug?!node"
"jazz.network.host.TCP-Server:TCP-Server:server-hits!node"
"jazz.network.host.TCP-Server:TCP-Server:server-host!node"
"jazz.network.host.TCP-Server:TCP-Server:server-name!node"
"jazz.network.host.TCP-Server:TCP-Server:server-service!node"
"jazz.network.host.TCP-Server:TCP-Server:server-title!node"
"jazz.network.host.TCP-Server:TCP-Server:server-version!node"
"jazz.network.host.TCP-Server:TCP-Server:start!node"
"jazz.network.host.TCP-Server:TCP-Server:stop!node"
"jazz.network.host.TCP-Server:TCP-Server:wait-started!node"
"jazz.network.host.TCP-Server:TCP-Server:wait-stopped!node"
"jazz.network.host.TCP-Server:TCP-Server~Class!level"
)
(
"##call-with-values"
"+"
"apply"
"close-port"
"dynamic-wind"
"equal?"
"err-code->string"
"jazz.language.runtime.exception:error"
"jazz.language.runtime.exception:throw"
"jazz.language.runtime.functional:->string"
"jazz.language.runtime.functional:box-list"
"jazz.language.runtime.functional:exit-thread"
"jazz.language.runtime.functional:find-keyword"
"jazz.language.runtime.functional:new-thread"
"jazz.language.runtime.functional:unbox-list"
"jazz.language.runtime.object:Object"
"jazz.network.server.Server-Interface:Server-Interface"
"jazz.network.server.Server-Interface:Server-Interface!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-alternate-service!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-host!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-name!rank"
"jazz.network.server.Server-Interface:Server-Interface:server-service!rank"
"jazz.network.server.Server-Interface:Server-Interface:start!rank"
"jazz.network.server.Server-Interface:Server-Interface:stop!rank"
"jazz.network.server.Server-Interface:Server-Interface:wait-started!rank"
"jazz.network.server.Server-Interface:Server-Interface:wait-stopped!rank"
"jazz.network:resolve-host"
"jazz.network:resolve-service"
"jazz.version:construct-version"
"jazz:Type!core-level"
"jazz:Type^of-type?!rank"
"jazz:add-final-method"
"jazz:add-method-node"
"jazz:add-slot"
"jazz:add-virtual-method"
"jazz:catch-exception-filter"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new-class"
"jazz:not-null?"
"jazz:register-module"
"jazz:scheme-readtable"
"jazz:type-error"
"make-mutex"
"mutex-lock!"
"mutex-unlock!"
"open-tcp-server"
"os-exception-code"
"os-exception?"
"read"
"socket-info-address"
"socket-info-port-number"
"tcp-server-socket-info"
"thread-start!"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.network.host.TCP-Server"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server
#define ___MH_PROC ___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 85
#define ___KEYCOUNT 13
#define ___GLOCOUNT 158
#define ___SUPCOUNT 103
#define ___CNSCOUNT 13
#define ___SUBCOUNT 784
#define ___LBLCOUNT 367
#define ___OFDCOUNT 1
#define ___MODDESCR ___REF_SUB(783)
#include "gambit.h"

___NEED_SYM(___S_Server_2d_Interface)
___NEED_SYM(___S_TCP_2d_Server)
___NEED_SYM(___S_TCP_2d_Server_7e_Class)
___NEED_SYM(___S_accept_2d_connection)
___NEED_SYM(___S_address)
___NEED_SYM(___S_alternate_2d_service)
___NEED_SYM(___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server)
___NEED_SYM(___S_box_5e_0)
___NEED_SYM(___S_close_2d_connection)
___NEED_SYM(___S_connection_2d_handler)
___NEED_SYM(___S_connection_2d_name)
___NEED_SYM(___S_connection_2d_readtable)
___NEED_SYM(___S_cr_2d_lf)
___NEED_SYM(___S_create_2d_thread)
___NEED_SYM(___S_debug_3f_)
___NEED_SYM(___S_destroy)
___NEED_SYM(___S_exc)
___NEED_SYM(___S_exception)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_alternate_2d_service)
___NEED_SYM(___S_get_2d_debug_3f_)
___NEED_SYM(___S_get_2d_hits)
___NEED_SYM(___S_get_2d_host)
___NEED_SYM(___S_get_2d_name)
___NEED_SYM(___S_get_2d_reuse_2d_address_3f_)
___NEED_SYM(___S_get_2d_server_2d_port)
___NEED_SYM(___S_get_2d_service)
___NEED_SYM(___S_get_2d_socket_2d_info)
___NEED_SYM(___S_get_2d_state)
___NEED_SYM(___S_hits)
___NEED_SYM(___S_host)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_network)
___NEED_SYM(___S_jazz_2e_network_2e_host_2e_TCP_2d_Server)
___NEED_SYM(___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
___NEED_SYM(___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
___NEED_SYM(___S_jazz_2e_network_2e_server_2e_Server_2d_Interface)
___NEED_SYM(___S_jazz_2e_version)
___NEED_SYM(___S_listening_2d_host)
___NEED_SYM(___S_listening_2d_port)
___NEED_SYM(___S_loaded_3f_)
___NEED_SYM(___S_name)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_port)
___NEED_SYM(___S_process_2d_connection)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_restart)
___NEED_SYM(___S_reuse_2d_address_3f_)
___NEED_SYM(___S_self)
___NEED_SYM(___S_server_2d_alternate_2d_service)
___NEED_SYM(___S_server_2d_debug_3f_)
___NEED_SYM(___S_server_2d_hit)
___NEED_SYM(___S_server_2d_hits)
___NEED_SYM(___S_server_2d_host)
___NEED_SYM(___S_server_2d_name)
___NEED_SYM(___S_server_2d_port)
___NEED_SYM(___S_server_2d_service)
___NEED_SYM(___S_server_2d_thread)
___NEED_SYM(___S_server_2d_title)
___NEED_SYM(___S_server_2d_version)
___NEED_SYM(___S_service)
___NEED_SYM(___S_set_2d_debug_3f_)
___NEED_SYM(___S_set_2d_reuse_2d_address_3f_)
___NEED_SYM(___S_set_2d_server_2d_port)
___NEED_SYM(___S_set_2d_state)
___NEED_SYM(___S_socket_2d_info)
___NEED_SYM(___S_start)
___NEED_SYM(___S_start_2d_listener)
___NEED_SYM(___S_started)
___NEED_SYM(___S_started_2d_mutex)
___NEED_SYM(___S_starting)
___NEED_SYM(___S_state)
___NEED_SYM(___S_stop)
___NEED_SYM(___S_stopped)
___NEED_SYM(___S_stopped_2d_mutex)
___NEED_SYM(___S_stopping)
___NEED_SYM(___S_tcp_2d_connection)
___NEED_SYM(___S_tcp_2d_server)
___NEED_SYM(___S_temp_2e_36)
___NEED_SYM(___S_temp_2e_38)
___NEED_SYM(___S_temp_2e_39)
___NEED_SYM(___S_wait_2d_started)
___NEED_SYM(___S_wait_2d_stopped)

___NEED_KEY(___K_alternate_2d_service)
___NEED_KEY(___K_connection_2d_handler)
___NEED_KEY(___K_debug_3f_)
___NEED_KEY(___K_eol_2d_encoding)
___NEED_KEY(___K_host)
___NEED_KEY(___K_keep_2d_alive)
___NEED_KEY(___K_name)
___NEED_KEY(___K_port_2d_number)
___NEED_KEY(___K_readtable)
___NEED_KEY(___K_reuse_2d_address)
___NEED_KEY(___K_reuse_2d_address_3f_)
___NEED_KEY(___K_server_2d_address)
___NEED_KEY(___K_service)

___NEED_GLO(___G__23__23_call_2d_with_2d_values)
___NEED_GLO(___G__2b_)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___NEED_GLO(___G_close_2d_port)
___NEED_GLO(___G_dynamic_2d_wind)
___NEED_GLO(___G_equal_3f_)
___NEED_GLO(___G_err_2d_code_2d__3e_string)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a__2d__3e_string)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f__21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped_21_node)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank)
___NEED_GLO(___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank)
___NEED_GLO(___G_jazz_2e_network_3a_resolve_2d_host)
___NEED_GLO(___G_jazz_2e_network_3a_resolve_2d_service)
___NEED_GLO(___G_jazz_2e_version_3a_construct_2d_version)
___NEED_GLO(___G_jazz_2e_version_3a_construct_2d_version_3a_autoload)
___NEED_GLO(___G_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1)
___NEED_GLO(___G_jazz_3a_Type_21_core_2d_level)
___NEED_GLO(___G_jazz_3a_Type_5e_of_2d_type_3f__21_rank)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_add_2d_virtual_2d_method)
___NEED_GLO(___G_jazz_3a_catch_2d_exception_2d_filter)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_not_2d_null_3f_)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_scheme_2d_readtable)
___NEED_GLO(___G_jazz_3a_type_2d_error)
___NEED_GLO(___G_make_2d_mutex)
___NEED_GLO(___G_mutex_2d_lock_21_)
___NEED_GLO(___G_mutex_2d_unlock_21_)
___NEED_GLO(___G_open_2d_tcp_2d_server)
___NEED_GLO(___G_os_2d_exception_2d_code)
___NEED_GLO(___G_os_2d_exception_3f_)
___NEED_GLO(___G_read)
___NEED_GLO(___G_socket_2d_info_2d_address)
___NEED_GLO(___G_socket_2d_info_2d_port_2d_number)
___NEED_GLO(___G_tcp_2d_server_2d_socket_2d_info)
___NEED_GLO(___G_thread_2d_start_21_)

___BEGIN_SYM
___DEF_SYM(0,___S_Server_2d_Interface,"Server-Interface")
___DEF_SYM(1,___S_TCP_2d_Server,"TCP-Server")
___DEF_SYM(2,___S_TCP_2d_Server_7e_Class,"TCP-Server~Class")
___DEF_SYM(3,___S_accept_2d_connection,"accept-connection")
___DEF_SYM(4,___S_address,"address")
___DEF_SYM(5,___S_alternate_2d_service,"alternate-service")
___DEF_SYM(6,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server,"bin:jazz.network.host.TCP-Server")

___DEF_SYM(7,___S_box_5e_0,"box^0")
___DEF_SYM(8,___S_close_2d_connection,"close-connection")
___DEF_SYM(9,___S_connection_2d_handler,"connection-handler")
___DEF_SYM(10,___S_connection_2d_name,"connection-name")
___DEF_SYM(11,___S_connection_2d_readtable,"connection-readtable")
___DEF_SYM(12,___S_cr_2d_lf,"cr-lf")
___DEF_SYM(13,___S_create_2d_thread,"create-thread")
___DEF_SYM(14,___S_debug_3f_,"debug?")
___DEF_SYM(15,___S_destroy,"destroy")
___DEF_SYM(16,___S_exc,"exc")
___DEF_SYM(17,___S_exception,"exception")
___DEF_SYM(18,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(19,___S_get_2d_alternate_2d_service,"get-alternate-service")
___DEF_SYM(20,___S_get_2d_debug_3f_,"get-debug?")
___DEF_SYM(21,___S_get_2d_hits,"get-hits")
___DEF_SYM(22,___S_get_2d_host,"get-host")
___DEF_SYM(23,___S_get_2d_name,"get-name")
___DEF_SYM(24,___S_get_2d_reuse_2d_address_3f_,"get-reuse-address?")
___DEF_SYM(25,___S_get_2d_server_2d_port,"get-server-port")
___DEF_SYM(26,___S_get_2d_service,"get-service")
___DEF_SYM(27,___S_get_2d_socket_2d_info,"get-socket-info")
___DEF_SYM(28,___S_get_2d_state,"get-state")
___DEF_SYM(29,___S_hits,"hits")
___DEF_SYM(30,___S_host,"host")
___DEF_SYM(31,___S_initialize,"initialize")
___DEF_SYM(32,___S_jazz,"jazz")
___DEF_SYM(33,___S_jazz_2e_network,"jazz.network")
___DEF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server,"jazz.network.host.TCP-Server")
___DEF_SYM(35,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server,"jazz.network.host.TCP-Server:TCP-Server")

___DEF_SYM(36,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class,"jazz.network.host.TCP-Server:TCP-Server~Class")

___DEF_SYM(37,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface,"jazz.network.server.Server-Interface")

___DEF_SYM(38,___S_jazz_2e_version,"jazz.version")
___DEF_SYM(39,___S_listening_2d_host,"listening-host")
___DEF_SYM(40,___S_listening_2d_port,"listening-port")
___DEF_SYM(41,___S_loaded_3f_,"loaded?")
___DEF_SYM(42,___S_name,"name")
___DEF_SYM(43,___S_nextmethod,"nextmethod")
___DEF_SYM(44,___S_port,"port")
___DEF_SYM(45,___S_process_2d_connection,"process-connection")
___DEF_SYM(46,___S_protected,"protected")
___DEF_SYM(47,___S_rest,"rest")
___DEF_SYM(48,___S_restart,"restart")
___DEF_SYM(49,___S_reuse_2d_address_3f_,"reuse-address?")
___DEF_SYM(50,___S_self,"self")
___DEF_SYM(51,___S_server_2d_alternate_2d_service,"server-alternate-service")
___DEF_SYM(52,___S_server_2d_debug_3f_,"server-debug?")
___DEF_SYM(53,___S_server_2d_hit,"server-hit")
___DEF_SYM(54,___S_server_2d_hits,"server-hits")
___DEF_SYM(55,___S_server_2d_host,"server-host")
___DEF_SYM(56,___S_server_2d_name,"server-name")
___DEF_SYM(57,___S_server_2d_port,"server-port")
___DEF_SYM(58,___S_server_2d_service,"server-service")
___DEF_SYM(59,___S_server_2d_thread,"server-thread")
___DEF_SYM(60,___S_server_2d_title,"server-title")
___DEF_SYM(61,___S_server_2d_version,"server-version")
___DEF_SYM(62,___S_service,"service")
___DEF_SYM(63,___S_set_2d_debug_3f_,"set-debug?")
___DEF_SYM(64,___S_set_2d_reuse_2d_address_3f_,"set-reuse-address?")
___DEF_SYM(65,___S_set_2d_server_2d_port,"set-server-port")
___DEF_SYM(66,___S_set_2d_state,"set-state")
___DEF_SYM(67,___S_socket_2d_info,"socket-info")
___DEF_SYM(68,___S_start,"start")
___DEF_SYM(69,___S_start_2d_listener,"start-listener")
___DEF_SYM(70,___S_started,"started")
___DEF_SYM(71,___S_started_2d_mutex,"started-mutex")
___DEF_SYM(72,___S_starting,"starting")
___DEF_SYM(73,___S_state,"state")
___DEF_SYM(74,___S_stop,"stop")
___DEF_SYM(75,___S_stopped,"stopped")
___DEF_SYM(76,___S_stopped_2d_mutex,"stopped-mutex")
___DEF_SYM(77,___S_stopping,"stopping")
___DEF_SYM(78,___S_tcp_2d_connection,"tcp-connection")
___DEF_SYM(79,___S_tcp_2d_server,"tcp-server")
___DEF_SYM(80,___S_temp_2e_36,"temp.36")
___DEF_SYM(81,___S_temp_2e_38,"temp.38")
___DEF_SYM(82,___S_temp_2e_39,"temp.39")
___DEF_SYM(83,___S_wait_2d_started,"wait-started")
___DEF_SYM(84,___S_wait_2d_stopped,"wait-stopped")
___END_SYM

#define ___SYM_Server_2d_Interface ___SYM(0,___S_Server_2d_Interface)
#define ___SYM_TCP_2d_Server ___SYM(1,___S_TCP_2d_Server)
#define ___SYM_TCP_2d_Server_7e_Class ___SYM(2,___S_TCP_2d_Server_7e_Class)
#define ___SYM_accept_2d_connection ___SYM(3,___S_accept_2d_connection)
#define ___SYM_address ___SYM(4,___S_address)
#define ___SYM_alternate_2d_service ___SYM(5,___S_alternate_2d_service)
#define ___SYM_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server ___SYM(6,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server)
#define ___SYM_box_5e_0 ___SYM(7,___S_box_5e_0)
#define ___SYM_close_2d_connection ___SYM(8,___S_close_2d_connection)
#define ___SYM_connection_2d_handler ___SYM(9,___S_connection_2d_handler)
#define ___SYM_connection_2d_name ___SYM(10,___S_connection_2d_name)
#define ___SYM_connection_2d_readtable ___SYM(11,___S_connection_2d_readtable)
#define ___SYM_cr_2d_lf ___SYM(12,___S_cr_2d_lf)
#define ___SYM_create_2d_thread ___SYM(13,___S_create_2d_thread)
#define ___SYM_debug_3f_ ___SYM(14,___S_debug_3f_)
#define ___SYM_destroy ___SYM(15,___S_destroy)
#define ___SYM_exc ___SYM(16,___S_exc)
#define ___SYM_exception ___SYM(17,___S_exception)
#define ___SYM_foundation_2e_dialect ___SYM(18,___S_foundation_2e_dialect)
#define ___SYM_get_2d_alternate_2d_service ___SYM(19,___S_get_2d_alternate_2d_service)
#define ___SYM_get_2d_debug_3f_ ___SYM(20,___S_get_2d_debug_3f_)
#define ___SYM_get_2d_hits ___SYM(21,___S_get_2d_hits)
#define ___SYM_get_2d_host ___SYM(22,___S_get_2d_host)
#define ___SYM_get_2d_name ___SYM(23,___S_get_2d_name)
#define ___SYM_get_2d_reuse_2d_address_3f_ ___SYM(24,___S_get_2d_reuse_2d_address_3f_)
#define ___SYM_get_2d_server_2d_port ___SYM(25,___S_get_2d_server_2d_port)
#define ___SYM_get_2d_service ___SYM(26,___S_get_2d_service)
#define ___SYM_get_2d_socket_2d_info ___SYM(27,___S_get_2d_socket_2d_info)
#define ___SYM_get_2d_state ___SYM(28,___S_get_2d_state)
#define ___SYM_hits ___SYM(29,___S_hits)
#define ___SYM_host ___SYM(30,___S_host)
#define ___SYM_initialize ___SYM(31,___S_initialize)
#define ___SYM_jazz ___SYM(32,___S_jazz)
#define ___SYM_jazz_2e_network ___SYM(33,___S_jazz_2e_network)
#define ___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server ___SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server)
#define ___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server ___SYM(35,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
#define ___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class ___SYM(36,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
#define ___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface ___SYM(37,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface)
#define ___SYM_jazz_2e_version ___SYM(38,___S_jazz_2e_version)
#define ___SYM_listening_2d_host ___SYM(39,___S_listening_2d_host)
#define ___SYM_listening_2d_port ___SYM(40,___S_listening_2d_port)
#define ___SYM_loaded_3f_ ___SYM(41,___S_loaded_3f_)
#define ___SYM_name ___SYM(42,___S_name)
#define ___SYM_nextmethod ___SYM(43,___S_nextmethod)
#define ___SYM_port ___SYM(44,___S_port)
#define ___SYM_process_2d_connection ___SYM(45,___S_process_2d_connection)
#define ___SYM_protected ___SYM(46,___S_protected)
#define ___SYM_rest ___SYM(47,___S_rest)
#define ___SYM_restart ___SYM(48,___S_restart)
#define ___SYM_reuse_2d_address_3f_ ___SYM(49,___S_reuse_2d_address_3f_)
#define ___SYM_self ___SYM(50,___S_self)
#define ___SYM_server_2d_alternate_2d_service ___SYM(51,___S_server_2d_alternate_2d_service)
#define ___SYM_server_2d_debug_3f_ ___SYM(52,___S_server_2d_debug_3f_)
#define ___SYM_server_2d_hit ___SYM(53,___S_server_2d_hit)
#define ___SYM_server_2d_hits ___SYM(54,___S_server_2d_hits)
#define ___SYM_server_2d_host ___SYM(55,___S_server_2d_host)
#define ___SYM_server_2d_name ___SYM(56,___S_server_2d_name)
#define ___SYM_server_2d_port ___SYM(57,___S_server_2d_port)
#define ___SYM_server_2d_service ___SYM(58,___S_server_2d_service)
#define ___SYM_server_2d_thread ___SYM(59,___S_server_2d_thread)
#define ___SYM_server_2d_title ___SYM(60,___S_server_2d_title)
#define ___SYM_server_2d_version ___SYM(61,___S_server_2d_version)
#define ___SYM_service ___SYM(62,___S_service)
#define ___SYM_set_2d_debug_3f_ ___SYM(63,___S_set_2d_debug_3f_)
#define ___SYM_set_2d_reuse_2d_address_3f_ ___SYM(64,___S_set_2d_reuse_2d_address_3f_)
#define ___SYM_set_2d_server_2d_port ___SYM(65,___S_set_2d_server_2d_port)
#define ___SYM_set_2d_state ___SYM(66,___S_set_2d_state)
#define ___SYM_socket_2d_info ___SYM(67,___S_socket_2d_info)
#define ___SYM_start ___SYM(68,___S_start)
#define ___SYM_start_2d_listener ___SYM(69,___S_start_2d_listener)
#define ___SYM_started ___SYM(70,___S_started)
#define ___SYM_started_2d_mutex ___SYM(71,___S_started_2d_mutex)
#define ___SYM_starting ___SYM(72,___S_starting)
#define ___SYM_state ___SYM(73,___S_state)
#define ___SYM_stop ___SYM(74,___S_stop)
#define ___SYM_stopped ___SYM(75,___S_stopped)
#define ___SYM_stopped_2d_mutex ___SYM(76,___S_stopped_2d_mutex)
#define ___SYM_stopping ___SYM(77,___S_stopping)
#define ___SYM_tcp_2d_connection ___SYM(78,___S_tcp_2d_connection)
#define ___SYM_tcp_2d_server ___SYM(79,___S_tcp_2d_server)
#define ___SYM_temp_2e_36 ___SYM(80,___S_temp_2e_36)
#define ___SYM_temp_2e_38 ___SYM(81,___S_temp_2e_38)
#define ___SYM_temp_2e_39 ___SYM(82,___S_temp_2e_39)
#define ___SYM_wait_2d_started ___SYM(83,___S_wait_2d_started)
#define ___SYM_wait_2d_stopped ___SYM(84,___S_wait_2d_stopped)

___BEGIN_KEY
___DEF_KEY(0,___K_alternate_2d_service,"alternate-service")
___DEF_KEY(1,___K_connection_2d_handler,"connection-handler")
___DEF_KEY(2,___K_debug_3f_,"debug?")
___DEF_KEY(3,___K_eol_2d_encoding,"eol-encoding")
___DEF_KEY(4,___K_host,"host")
___DEF_KEY(5,___K_keep_2d_alive,"keep-alive")
___DEF_KEY(6,___K_name,"name")
___DEF_KEY(7,___K_port_2d_number,"port-number")
___DEF_KEY(8,___K_readtable,"readtable")
___DEF_KEY(9,___K_reuse_2d_address,"reuse-address")
___DEF_KEY(10,___K_reuse_2d_address_3f_,"reuse-address?")
___DEF_KEY(11,___K_server_2d_address,"server-address")
___DEF_KEY(12,___K_service,"service")
___END_KEY

#define ___KEY_alternate_2d_service ___KEY(0,___K_alternate_2d_service)
#define ___KEY_connection_2d_handler ___KEY(1,___K_connection_2d_handler)
#define ___KEY_debug_3f_ ___KEY(2,___K_debug_3f_)
#define ___KEY_eol_2d_encoding ___KEY(3,___K_eol_2d_encoding)
#define ___KEY_host ___KEY(4,___K_host)
#define ___KEY_keep_2d_alive ___KEY(5,___K_keep_2d_alive)
#define ___KEY_name ___KEY(6,___K_name)
#define ___KEY_port_2d_number ___KEY(7,___K_port_2d_number)
#define ___KEY_readtable ___KEY(8,___K_readtable)
#define ___KEY_reuse_2d_address ___KEY(9,___K_reuse_2d_address)
#define ___KEY_reuse_2d_address_3f_ ___KEY(10,___K_reuse_2d_address_3f_)
#define ___KEY_server_2d_address ___KEY(11,___K_server_2d_address)
#define ___KEY_service ___KEY(12,___K_service)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.network.host.TCP-Server#")

___DEF_GLO(1,"jazz.network.host.TCP-Server:TCP-Server")

___DEF_GLO(2,"jazz.network.host.TCP-Server:TCP-Server!level")

___DEF_GLO(3,"jazz.network.host.TCP-Server:TCP-Server:accept-connection")

___DEF_GLO(4,"jazz.network.host.TCP-Server:TCP-Server:accept-connection!rank")

___DEF_GLO(5,"jazz.network.host.TCP-Server:TCP-Server:alternate-service!offset")

___DEF_GLO(6,"jazz.network.host.TCP-Server:TCP-Server:alternate-service!slot")

___DEF_GLO(7,"jazz.network.host.TCP-Server:TCP-Server:close-connection")

___DEF_GLO(8,"jazz.network.host.TCP-Server:TCP-Server:close-connection!rank")

___DEF_GLO(9,"jazz.network.host.TCP-Server:TCP-Server:connection-handler!initialize")

___DEF_GLO(10,"jazz.network.host.TCP-Server:TCP-Server:connection-handler!offset")

___DEF_GLO(11,"jazz.network.host.TCP-Server:TCP-Server:connection-handler!slot")

___DEF_GLO(12,"jazz.network.host.TCP-Server:TCP-Server:connection-name")

___DEF_GLO(13,"jazz.network.host.TCP-Server:TCP-Server:connection-name!rank")

___DEF_GLO(14,"jazz.network.host.TCP-Server:TCP-Server:connection-readtable")

___DEF_GLO(15,"jazz.network.host.TCP-Server:TCP-Server:connection-readtable!rank")

___DEF_GLO(16,"jazz.network.host.TCP-Server:TCP-Server:create-thread")

___DEF_GLO(17,"jazz.network.host.TCP-Server:TCP-Server:create-thread!rank")

___DEF_GLO(18,"jazz.network.host.TCP-Server:TCP-Server:debug?!offset")

___DEF_GLO(19,"jazz.network.host.TCP-Server:TCP-Server:debug?!slot")

___DEF_GLO(20,"jazz.network.host.TCP-Server:TCP-Server:destroy")

___DEF_GLO(21,"jazz.network.host.TCP-Server:TCP-Server:destroy!node")

___DEF_GLO(22,"jazz.network.host.TCP-Server:TCP-Server:get-alternate-service")

___DEF_GLO(23,"jazz.network.host.TCP-Server:TCP-Server:get-debug?")

___DEF_GLO(24,"jazz.network.host.TCP-Server:TCP-Server:get-hits")

___DEF_GLO(25,"jazz.network.host.TCP-Server:TCP-Server:get-host")

___DEF_GLO(26,"jazz.network.host.TCP-Server:TCP-Server:get-name")

___DEF_GLO(27,"jazz.network.host.TCP-Server:TCP-Server:get-reuse-address?")

___DEF_GLO(28,"jazz.network.host.TCP-Server:TCP-Server:get-server-port")

___DEF_GLO(29,"jazz.network.host.TCP-Server:TCP-Server:get-service")

___DEF_GLO(30,"jazz.network.host.TCP-Server:TCP-Server:get-socket-info")

___DEF_GLO(31,"jazz.network.host.TCP-Server:TCP-Server:get-state")

___DEF_GLO(32,"jazz.network.host.TCP-Server:TCP-Server:get-state!node")

___DEF_GLO(33,"jazz.network.host.TCP-Server:TCP-Server:hits!initialize")

___DEF_GLO(34,"jazz.network.host.TCP-Server:TCP-Server:hits!offset")

___DEF_GLO(35,"jazz.network.host.TCP-Server:TCP-Server:hits!slot")

___DEF_GLO(36,"jazz.network.host.TCP-Server:TCP-Server:host!offset")

___DEF_GLO(37,"jazz.network.host.TCP-Server:TCP-Server:host!slot")

___DEF_GLO(38,"jazz.network.host.TCP-Server:TCP-Server:initialize")

___DEF_GLO(39,"jazz.network.host.TCP-Server:TCP-Server:initialize!node")

___DEF_GLO(40,"jazz.network.host.TCP-Server:TCP-Server:listening-host")

___DEF_GLO(41,"jazz.network.host.TCP-Server:TCP-Server:listening-port")

___DEF_GLO(42,"jazz.network.host.TCP-Server:TCP-Server:name!offset")

___DEF_GLO(43,"jazz.network.host.TCP-Server:TCP-Server:name!slot")

___DEF_GLO(44,"jazz.network.host.TCP-Server:TCP-Server:process-connection")

___DEF_GLO(45,"jazz.network.host.TCP-Server:TCP-Server:process-connection!rank")

___DEF_GLO(46,"jazz.network.host.TCP-Server:TCP-Server:restart")

___DEF_GLO(47,"jazz.network.host.TCP-Server:TCP-Server:restart!node")

___DEF_GLO(48,"jazz.network.host.TCP-Server:TCP-Server:reuse-address?!initialize")

___DEF_GLO(49,"jazz.network.host.TCP-Server:TCP-Server:reuse-address?!offset")

___DEF_GLO(50,"jazz.network.host.TCP-Server:TCP-Server:reuse-address?!slot")

___DEF_GLO(51,"jazz.network.host.TCP-Server:TCP-Server:server-alternate-service")

___DEF_GLO(52,"jazz.network.host.TCP-Server:TCP-Server:server-alternate-service!node")

___DEF_GLO(53,"jazz.network.host.TCP-Server:TCP-Server:server-debug?")

___DEF_GLO(54,"jazz.network.host.TCP-Server:TCP-Server:server-debug?!node")

___DEF_GLO(55,"jazz.network.host.TCP-Server:TCP-Server:server-hit")

___DEF_GLO(56,"jazz.network.host.TCP-Server:TCP-Server:server-hit!rank")

___DEF_GLO(57,"jazz.network.host.TCP-Server:TCP-Server:server-hits")

___DEF_GLO(58,"jazz.network.host.TCP-Server:TCP-Server:server-hits!node")

___DEF_GLO(59,"jazz.network.host.TCP-Server:TCP-Server:server-host")

___DEF_GLO(60,"jazz.network.host.TCP-Server:TCP-Server:server-host!node")

___DEF_GLO(61,"jazz.network.host.TCP-Server:TCP-Server:server-name")

___DEF_GLO(62,"jazz.network.host.TCP-Server:TCP-Server:server-name!node")

___DEF_GLO(63,"jazz.network.host.TCP-Server:TCP-Server:server-port!initialize")

___DEF_GLO(64,"jazz.network.host.TCP-Server:TCP-Server:server-port!offset")

___DEF_GLO(65,"jazz.network.host.TCP-Server:TCP-Server:server-port!slot")

___DEF_GLO(66,"jazz.network.host.TCP-Server:TCP-Server:server-service")

___DEF_GLO(67,"jazz.network.host.TCP-Server:TCP-Server:server-service!node")

___DEF_GLO(68,"jazz.network.host.TCP-Server:TCP-Server:server-thread!offset")

___DEF_GLO(69,"jazz.network.host.TCP-Server:TCP-Server:server-thread!slot")

___DEF_GLO(70,"jazz.network.host.TCP-Server:TCP-Server:server-title")

___DEF_GLO(71,"jazz.network.host.TCP-Server:TCP-Server:server-title!node")

___DEF_GLO(72,"jazz.network.host.TCP-Server:TCP-Server:server-version")

___DEF_GLO(73,"jazz.network.host.TCP-Server:TCP-Server:server-version!node")

___DEF_GLO(74,"jazz.network.host.TCP-Server:TCP-Server:service!offset")

___DEF_GLO(75,"jazz.network.host.TCP-Server:TCP-Server:service!slot")

___DEF_GLO(76,"jazz.network.host.TCP-Server:TCP-Server:set-debug?")

___DEF_GLO(77,"jazz.network.host.TCP-Server:TCP-Server:set-reuse-address?")

___DEF_GLO(78,"jazz.network.host.TCP-Server:TCP-Server:set-server-port")

___DEF_GLO(79,"jazz.network.host.TCP-Server:TCP-Server:set-state")

___DEF_GLO(80,"jazz.network.host.TCP-Server:TCP-Server:socket-info!offset")

___DEF_GLO(81,"jazz.network.host.TCP-Server:TCP-Server:socket-info!slot")

___DEF_GLO(82,"jazz.network.host.TCP-Server:TCP-Server:start")

___DEF_GLO(83,"jazz.network.host.TCP-Server:TCP-Server:start!node")

___DEF_GLO(84,"jazz.network.host.TCP-Server:TCP-Server:start-listener")

___DEF_GLO(85,"jazz.network.host.TCP-Server:TCP-Server:started-mutex!offset")

___DEF_GLO(86,"jazz.network.host.TCP-Server:TCP-Server:started-mutex!slot")

___DEF_GLO(87,"jazz.network.host.TCP-Server:TCP-Server:state!initialize")

___DEF_GLO(88,"jazz.network.host.TCP-Server:TCP-Server:state!offset")

___DEF_GLO(89,"jazz.network.host.TCP-Server:TCP-Server:state!slot")

___DEF_GLO(90,"jazz.network.host.TCP-Server:TCP-Server:stop")

___DEF_GLO(91,"jazz.network.host.TCP-Server:TCP-Server:stop!node")

___DEF_GLO(92,"jazz.network.host.TCP-Server:TCP-Server:stopped-mutex!offset")

___DEF_GLO(93,"jazz.network.host.TCP-Server:TCP-Server:stopped-mutex!slot")

___DEF_GLO(94,"jazz.network.host.TCP-Server:TCP-Server:wait-started")

___DEF_GLO(95,"jazz.network.host.TCP-Server:TCP-Server:wait-started!node")

___DEF_GLO(96,"jazz.network.host.TCP-Server:TCP-Server:wait-stopped")

___DEF_GLO(97,"jazz.network.host.TCP-Server:TCP-Server:wait-stopped!node")

___DEF_GLO(98,"jazz.network.host.TCP-Server:TCP-Server~Class")

___DEF_GLO(99,"jazz.network.host.TCP-Server:TCP-Server~Class!level")

___DEF_GLO(100,"jazz.network.server.Server-Interface:Server-Interface:autoload")

___DEF_GLO(101,"jazz.version:construct-version:autoload")

___DEF_GLO(102,"jazz/network/host/TCP-Server_lit^1")

___DEF_GLO(103,"##call-with-values")
___DEF_GLO(104,"+")
___DEF_GLO(105,"apply")
___DEF_GLO(106,"close-port")
___DEF_GLO(107,"dynamic-wind")
___DEF_GLO(108,"equal?")
___DEF_GLO(109,"err-code->string")
___DEF_GLO(110,"jazz.language.runtime.exception:error")

___DEF_GLO(111,"jazz.language.runtime.exception:throw")

___DEF_GLO(112,"jazz.language.runtime.functional:->string")

___DEF_GLO(113,"jazz.language.runtime.functional:box-list")

___DEF_GLO(114,"jazz.language.runtime.functional:exit-thread")

___DEF_GLO(115,"jazz.language.runtime.functional:find-keyword")

___DEF_GLO(116,"jazz.language.runtime.functional:new-thread")

___DEF_GLO(117,"jazz.language.runtime.functional:unbox-list")

___DEF_GLO(118,"jazz.language.runtime.object:Object")

___DEF_GLO(119,"jazz.network.server.Server-Interface:Server-Interface")

___DEF_GLO(120,"jazz.network.server.Server-Interface:Server-Interface!rank")

___DEF_GLO(121,"jazz.network.server.Server-Interface:Server-Interface:server-alternate-service!rank")

___DEF_GLO(122,"jazz.network.server.Server-Interface:Server-Interface:server-host!rank")

___DEF_GLO(123,"jazz.network.server.Server-Interface:Server-Interface:server-name!rank")

___DEF_GLO(124,"jazz.network.server.Server-Interface:Server-Interface:server-service!rank")

___DEF_GLO(125,"jazz.network.server.Server-Interface:Server-Interface:start!rank")

___DEF_GLO(126,"jazz.network.server.Server-Interface:Server-Interface:stop!rank")

___DEF_GLO(127,"jazz.network.server.Server-Interface:Server-Interface:wait-started!rank")

___DEF_GLO(128,"jazz.network.server.Server-Interface:Server-Interface:wait-stopped!rank")

___DEF_GLO(129,"jazz.network:resolve-host")
___DEF_GLO(130,"jazz.network:resolve-service")
___DEF_GLO(131,"jazz.version:construct-version")
___DEF_GLO(132,"jazz:Type!core-level")
___DEF_GLO(133,"jazz:Type^of-type?!rank")
___DEF_GLO(134,"jazz:add-final-method")
___DEF_GLO(135,"jazz:add-method-node")
___DEF_GLO(136,"jazz:add-slot")
___DEF_GLO(137,"jazz:add-virtual-method")
___DEF_GLO(138,"jazz:catch-exception-filter")
___DEF_GLO(139,"jazz:global-bound?")
___DEF_GLO(140,"jazz:global-ref")
___DEF_GLO(141,"jazz:load-unit")
___DEF_GLO(142,"jazz:new-class")
___DEF_GLO(143,"jazz:not-null?")
___DEF_GLO(144,"jazz:register-module")
___DEF_GLO(145,"jazz:scheme-readtable")
___DEF_GLO(146,"jazz:type-error")
___DEF_GLO(147,"make-mutex")
___DEF_GLO(148,"mutex-lock!")
___DEF_GLO(149,"mutex-unlock!")
___DEF_GLO(150,"open-tcp-server")
___DEF_GLO(151,"os-exception-code")
___DEF_GLO(152,"os-exception?")
___DEF_GLO(153,"read")
___DEF_GLO(154,"socket-info-address")
___DEF_GLO(155,"socket-info-port-number")
___DEF_GLO(156,"tcp-server-socket-info")
___DEF_GLO(157,"thread-start!")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_ ___GLO(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
#define ___PRM_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_ ___PRM(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server ___GLO(1,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server ___PRM(1,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level ___GLO(2,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level ___PRM(2,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection ___GLO(3,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection ___PRM(3,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank ___GLO(4,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank ___PRM(4,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset ___GLO(5,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset ___PRM(5,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot ___GLO(6,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot ___PRM(6,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection ___GLO(7,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection ___PRM(7,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank ___GLO(8,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank ___PRM(8,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize ___GLO(9,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize ___PRM(9,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset ___GLO(10,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset ___PRM(10,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot ___GLO(11,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot ___PRM(11,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name ___GLO(12,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name ___PRM(12,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank ___GLO(13,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank ___PRM(13,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable ___GLO(14,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable ___PRM(14,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank ___GLO(15,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank ___PRM(15,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread ___GLO(16,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread ___PRM(16,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank ___GLO(17,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank ___PRM(17,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset ___GLO(18,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset ___PRM(18,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot ___GLO(19,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot ___PRM(19,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy ___GLO(20,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy ___PRM(20,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node ___GLO(21,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node ___PRM(21,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service ___GLO(22,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service ___PRM(22,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_ ___GLO(23,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_ ___PRM(23,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits ___GLO(24,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits ___PRM(24,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host ___GLO(25,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host ___PRM(25,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name ___GLO(26,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name ___PRM(26,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_ ___GLO(27,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_ ___PRM(27,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port ___GLO(28,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port ___PRM(28,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service ___GLO(29,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service ___PRM(29,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info ___GLO(30,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info ___PRM(30,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state ___GLO(31,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state ___PRM(31,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state_21_node ___GLO(32,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state_21_node ___PRM(32,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize ___GLO(33,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize ___PRM(33,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset ___GLO(34,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset ___PRM(34,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot ___GLO(35,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot ___PRM(35,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset ___GLO(36,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset ___PRM(36,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot ___GLO(37,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot ___PRM(37,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize ___GLO(38,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize ___PRM(38,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node ___GLO(39,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node ___PRM(39,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host ___GLO(40,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host ___PRM(40,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port ___GLO(41,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port ___PRM(41,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset ___GLO(42,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset ___PRM(42,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot ___GLO(43,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot ___PRM(43,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection ___GLO(44,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection ___PRM(44,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank ___GLO(45,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank ___PRM(45,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart ___GLO(46,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart ___PRM(46,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart_21_node ___GLO(47,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart_21_node ___PRM(47,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize ___GLO(48,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize ___PRM(48,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset ___GLO(49,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset ___PRM(49,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot ___GLO(50,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot ___PRM(50,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service ___GLO(51,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service ___PRM(51,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service_21_node ___GLO(52,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service_21_node ___PRM(52,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_ ___GLO(53,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_ ___PRM(53,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f__21_node ___GLO(54,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f__21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f__21_node ___PRM(54,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f__21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit ___GLO(55,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit ___PRM(55,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank ___GLO(56,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank ___PRM(56,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits ___GLO(57,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits ___PRM(57,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits_21_node ___GLO(58,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits_21_node ___PRM(58,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host ___GLO(59,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host ___PRM(59,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host_21_node ___GLO(60,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host_21_node ___PRM(60,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name ___GLO(61,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name ___PRM(61,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name_21_node ___GLO(62,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name_21_node ___PRM(62,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize ___GLO(63,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize ___PRM(63,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset ___GLO(64,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset ___PRM(64,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot ___GLO(65,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot ___PRM(65,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service ___GLO(66,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service ___PRM(66,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service_21_node ___GLO(67,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service_21_node ___PRM(67,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset ___GLO(68,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset ___PRM(68,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot ___GLO(69,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot ___PRM(69,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title ___GLO(70,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title ___PRM(70,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title_21_node ___GLO(71,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title_21_node ___PRM(71,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version ___GLO(72,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version ___PRM(72,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version_21_node ___GLO(73,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version_21_node ___PRM(73,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset ___GLO(74,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset ___PRM(74,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot ___GLO(75,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot ___PRM(75,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_ ___GLO(76,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_ ___PRM(76,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_ ___GLO(77,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_ ___PRM(77,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port ___GLO(78,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port ___PRM(78,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state ___GLO(79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state ___PRM(79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset ___GLO(80,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset ___PRM(80,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot ___GLO(81,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot ___PRM(81,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start ___GLO(82,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start ___PRM(82,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_21_node ___GLO(83,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_21_node ___PRM(83,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener ___GLO(84,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener ___PRM(84,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset ___GLO(85,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset ___PRM(85,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot ___GLO(86,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot ___PRM(86,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize ___GLO(87,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize ___PRM(87,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset ___GLO(88,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset ___PRM(88,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot ___GLO(89,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot ___PRM(89,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop ___GLO(90,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop ___PRM(90,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop_21_node ___GLO(91,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop_21_node ___PRM(91,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset ___GLO(92,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset ___PRM(92,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot ___GLO(93,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot ___PRM(93,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started ___GLO(94,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started ___PRM(94,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started_21_node ___GLO(95,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started_21_node ___PRM(95,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped ___GLO(96,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped ___PRM(96,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped_21_node ___GLO(97,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped_21_node)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped_21_node ___PRM(97,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped_21_node)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class ___GLO(98,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class ___PRM(98,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class_21_level ___GLO(99,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class_21_level)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class_21_level ___PRM(99,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class_21_level)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload ___GLO(100,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload ___PRM(100,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload)
#define ___GLO_jazz_2e_version_3a_construct_2d_version_3a_autoload ___GLO(101,___G_jazz_2e_version_3a_construct_2d_version_3a_autoload)
#define ___PRM_jazz_2e_version_3a_construct_2d_version_3a_autoload ___PRM(101,___G_jazz_2e_version_3a_construct_2d_version_3a_autoload)
#define ___GLO_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1 ___GLO(102,___G_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1)
#define ___PRM_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1 ___PRM(102,___G_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1)
#define ___GLO__23__23_call_2d_with_2d_values ___GLO(103,___G__23__23_call_2d_with_2d_values)
#define ___PRM__23__23_call_2d_with_2d_values ___PRM(103,___G__23__23_call_2d_with_2d_values)
#define ___GLO__2b_ ___GLO(104,___G__2b_)
#define ___PRM__2b_ ___PRM(104,___G__2b_)
#define ___GLO_apply ___GLO(105,___G_apply)
#define ___PRM_apply ___PRM(105,___G_apply)
#define ___GLO_close_2d_port ___GLO(106,___G_close_2d_port)
#define ___PRM_close_2d_port ___PRM(106,___G_close_2d_port)
#define ___GLO_dynamic_2d_wind ___GLO(107,___G_dynamic_2d_wind)
#define ___PRM_dynamic_2d_wind ___PRM(107,___G_dynamic_2d_wind)
#define ___GLO_equal_3f_ ___GLO(108,___G_equal_3f_)
#define ___PRM_equal_3f_ ___PRM(108,___G_equal_3f_)
#define ___GLO_err_2d_code_2d__3e_string ___GLO(109,___G_err_2d_code_2d__3e_string)
#define ___PRM_err_2d_code_2d__3e_string ___PRM(109,___G_err_2d_code_2d__3e_string)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_error ___GLO(110,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_error ___PRM(110,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_throw ___GLO(111,___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_throw ___PRM(111,___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a__2d__3e_string ___GLO(112,___G_jazz_2e_language_2e_runtime_2e_functional_3a__2d__3e_string)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a__2d__3e_string ___PRM(112,___G_jazz_2e_language_2e_runtime_2e_functional_3a__2d__3e_string)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list ___GLO(113,___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list ___PRM(113,___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread ___GLO(114,___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread ___PRM(114,___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword ___GLO(115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword ___PRM(115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread ___GLO(116,___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread ___PRM(116,___G_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list ___GLO(117,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list ___PRM(117,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object ___GLO(118,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object ___PRM(118,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface ___GLO(119,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface ___PRM(119,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank ___GLO(120,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank ___PRM(120,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank ___GLO(121,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank ___PRM(121,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank ___GLO(122,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank ___PRM(122,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank ___GLO(123,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank ___PRM(123,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank ___GLO(124,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank ___PRM(124,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank ___GLO(125,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank ___PRM(125,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank ___GLO(126,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank ___PRM(126,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank ___GLO(127,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank ___PRM(127,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank)
#define ___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank ___GLO(128,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank)
#define ___PRM_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank ___PRM(128,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank)
#define ___GLO_jazz_2e_network_3a_resolve_2d_host ___GLO(129,___G_jazz_2e_network_3a_resolve_2d_host)
#define ___PRM_jazz_2e_network_3a_resolve_2d_host ___PRM(129,___G_jazz_2e_network_3a_resolve_2d_host)
#define ___GLO_jazz_2e_network_3a_resolve_2d_service ___GLO(130,___G_jazz_2e_network_3a_resolve_2d_service)
#define ___PRM_jazz_2e_network_3a_resolve_2d_service ___PRM(130,___G_jazz_2e_network_3a_resolve_2d_service)
#define ___GLO_jazz_2e_version_3a_construct_2d_version ___GLO(131,___G_jazz_2e_version_3a_construct_2d_version)
#define ___PRM_jazz_2e_version_3a_construct_2d_version ___PRM(131,___G_jazz_2e_version_3a_construct_2d_version)
#define ___GLO_jazz_3a_Type_21_core_2d_level ___GLO(132,___G_jazz_3a_Type_21_core_2d_level)
#define ___PRM_jazz_3a_Type_21_core_2d_level ___PRM(132,___G_jazz_3a_Type_21_core_2d_level)
#define ___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank ___GLO(133,___G_jazz_3a_Type_5e_of_2d_type_3f__21_rank)
#define ___PRM_jazz_3a_Type_5e_of_2d_type_3f__21_rank ___PRM(133,___G_jazz_3a_Type_5e_of_2d_type_3f__21_rank)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(134,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(134,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(135,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(135,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(136,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(136,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_add_2d_virtual_2d_method ___GLO(137,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___PRM_jazz_3a_add_2d_virtual_2d_method ___PRM(137,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___GLO_jazz_3a_catch_2d_exception_2d_filter ___GLO(138,___G_jazz_3a_catch_2d_exception_2d_filter)
#define ___PRM_jazz_3a_catch_2d_exception_2d_filter ___PRM(138,___G_jazz_3a_catch_2d_exception_2d_filter)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(139,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(139,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(140,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(140,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(141,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(141,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(142,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(142,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_not_2d_null_3f_ ___GLO(143,___G_jazz_3a_not_2d_null_3f_)
#define ___PRM_jazz_3a_not_2d_null_3f_ ___PRM(143,___G_jazz_3a_not_2d_null_3f_)
#define ___GLO_jazz_3a_register_2d_module ___GLO(144,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(144,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_scheme_2d_readtable ___GLO(145,___G_jazz_3a_scheme_2d_readtable)
#define ___PRM_jazz_3a_scheme_2d_readtable ___PRM(145,___G_jazz_3a_scheme_2d_readtable)
#define ___GLO_jazz_3a_type_2d_error ___GLO(146,___G_jazz_3a_type_2d_error)
#define ___PRM_jazz_3a_type_2d_error ___PRM(146,___G_jazz_3a_type_2d_error)
#define ___GLO_make_2d_mutex ___GLO(147,___G_make_2d_mutex)
#define ___PRM_make_2d_mutex ___PRM(147,___G_make_2d_mutex)
#define ___GLO_mutex_2d_lock_21_ ___GLO(148,___G_mutex_2d_lock_21_)
#define ___PRM_mutex_2d_lock_21_ ___PRM(148,___G_mutex_2d_lock_21_)
#define ___GLO_mutex_2d_unlock_21_ ___GLO(149,___G_mutex_2d_unlock_21_)
#define ___PRM_mutex_2d_unlock_21_ ___PRM(149,___G_mutex_2d_unlock_21_)
#define ___GLO_open_2d_tcp_2d_server ___GLO(150,___G_open_2d_tcp_2d_server)
#define ___PRM_open_2d_tcp_2d_server ___PRM(150,___G_open_2d_tcp_2d_server)
#define ___GLO_os_2d_exception_2d_code ___GLO(151,___G_os_2d_exception_2d_code)
#define ___PRM_os_2d_exception_2d_code ___PRM(151,___G_os_2d_exception_2d_code)
#define ___GLO_os_2d_exception_3f_ ___GLO(152,___G_os_2d_exception_3f_)
#define ___PRM_os_2d_exception_3f_ ___PRM(152,___G_os_2d_exception_3f_)
#define ___GLO_read ___GLO(153,___G_read)
#define ___PRM_read ___PRM(153,___G_read)
#define ___GLO_socket_2d_info_2d_address ___GLO(154,___G_socket_2d_info_2d_address)
#define ___PRM_socket_2d_info_2d_address ___PRM(154,___G_socket_2d_info_2d_address)
#define ___GLO_socket_2d_info_2d_port_2d_number ___GLO(155,___G_socket_2d_info_2d_port_2d_number)
#define ___PRM_socket_2d_info_2d_port_2d_number ___PRM(155,___G_socket_2d_info_2d_port_2d_number)
#define ___GLO_tcp_2d_server_2d_socket_2d_info ___GLO(156,___G_tcp_2d_server_2d_socket_2d_info)
#define ___PRM_tcp_2d_server_2d_socket_2d_info ___PRM(156,___G_tcp_2d_server_2d_socket_2d_info)
#define ___GLO_thread_2d_start_21_ ___GLO(157,___G_thread_2d_start_21_)
#define ___PRM_thread_2d_start_21_ ___PRM(157,___G_thread_2d_start_21_)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(1,___S_TCP_2d_Server),___REF_SYM(35,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(2,___S_TCP_2d_Server_7e_Class),___REF_SYM(36,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class))
,___DEF_CNS(___REF_FIX(32769),___REF_NUL)
,___DEF_CNS(___REF_FIX(32768),___REF_NUL)
,___DEF_CNS(___REF_FIX(65536),___REF_CNS(7))
,___DEF_CNS(___REF_FIX(32770),___REF_NUL)
,___DEF_CNS(___REF_FIX(98304),___REF_CNS(9))
,___DEF_CNS(___REF_FIX(65542),___REF_CNS(10))
,___DEF_CNS(___REF_FIX(32770),___REF_NUL)
,___DEF_CNS(___REF_FIX(98304),___REF_CNS(12))
,___DEF_CNS(___REF_FIX(32770),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(162))
               ___VEC0
___DEF_SUB_VEC(___X1,80UL)
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
               ___VEC1(___REF_SUB(88))
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
               ___VEC1(___REF_SUB(112))
               ___VEC1(___REF_SUB(114))
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131119))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131120))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131122))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131125))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131127))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(71))
               ___VEC0
___DEF_SUB_VEC(___X71,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131129))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131130))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X79,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131131))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_FIX(41))
               ___VEC1(___REF_SUB(85))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_FIX(42))
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_FIX(43))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X90,2UL)
               ___VEC1(___REF_FIX(44))
               ___VEC1(___REF_SUB(91))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X92,2UL)
               ___VEC1(___REF_FIX(45))
               ___VEC1(___REF_SUB(93))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131151))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_FIX(46))
               ___VEC1(___REF_SUB(95))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131162))
               ___VEC0
___DEF_SUB_VEC(___X96,2UL)
               ___VEC1(___REF_FIX(47))
               ___VEC1(___REF_SUB(97))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131166))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_FIX(48))
               ___VEC1(___REF_SUB(99))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131175))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_FIX(49))
               ___VEC1(___REF_SUB(101))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131184))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_FIX(50))
               ___VEC1(___REF_SUB(103))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131190))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_FIX(51))
               ___VEC1(___REF_SUB(105))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131198))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_FIX(52))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131203))
               ___VEC0
___DEF_SUB_VEC(___X108,2UL)
               ___VEC1(___REF_FIX(53))
               ___VEC1(___REF_SUB(109))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131208))
               ___VEC0
___DEF_SUB_VEC(___X110,2UL)
               ___VEC1(___REF_FIX(54))
               ___VEC1(___REF_SUB(111))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131218))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_FIX(55))
               ___VEC1(___REF_SUB(113))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131223))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_FIX(56))
               ___VEC1(___REF_SUB(115))
               ___VEC0
___DEF_SUB_VEC(___X115,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131227))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_FIX(57))
               ___VEC1(___REF_SUB(117))
               ___VEC0
___DEF_SUB_VEC(___X117,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131231))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_FIX(58))
               ___VEC1(___REF_SUB(119))
               ___VEC0
___DEF_SUB_VEC(___X119,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131235))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_FIX(59))
               ___VEC1(___REF_SUB(121))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131239))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_FIX(60))
               ___VEC1(___REF_SUB(123))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131243))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_FIX(61))
               ___VEC1(___REF_SUB(125))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131247))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_FIX(62))
               ___VEC1(___REF_SUB(127))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131251))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_FIX(63))
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131255))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_FIX(64))
               ___VEC1(___REF_SUB(131))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131259))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_FIX(65))
               ___VEC1(___REF_SUB(133))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131263))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_FIX(66))
               ___VEC1(___REF_SUB(135))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131330))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_FIX(67))
               ___VEC1(___REF_SUB(137))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131334))
               ___VEC0
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_FIX(68))
               ___VEC1(___REF_SUB(139))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131343))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_FIX(69))
               ___VEC1(___REF_SUB(141))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131347))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_FIX(70))
               ___VEC1(___REF_SUB(143))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131351))
               ___VEC0
___DEF_SUB_VEC(___X144,2UL)
               ___VEC1(___REF_FIX(71))
               ___VEC1(___REF_SUB(145))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131351))
               ___VEC0
___DEF_SUB_VEC(___X146,2UL)
               ___VEC1(___REF_FIX(72))
               ___VEC1(___REF_SUB(147))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X148,3UL)
               ___VEC1(___REF_FIX(73))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X150,2UL)
               ___VEC1(___REF_FIX(74))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X152,3UL)
               ___VEC1(___REF_FIX(75))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_FIX(76))
               ___VEC1(___REF_SUB(155))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X156,3UL)
               ___VEC1(___REF_FIX(77))
               ___VEC1(___REF_SUB(157))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X158,2UL)
               ___VEC1(___REF_FIX(78))
               ___VEC1(___REF_SUB(159))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X160,3UL)
               ___VEC1(___REF_FIX(79))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_FIX(425986))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_SYM(41,___S_loaded_3f_))
               ___VEC1(___REF_CNS(4))
               ___VEC0
___DEF_SUB_VEC(___X163,2UL)
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_SUB(167))
               ___VEC0
___DEF_SUB_VEC(___X164,1UL)
               ___VEC1(___REF_SUB(165))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(166))
               ___VEC0
___DEF_SUB_VEC(___X166,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X167,0UL)
               ___VEC0
___DEF_SUB_VEC(___X168,2UL)
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_SUB(172))
               ___VEC0
___DEF_SUB_VEC(___X169,1UL)
               ___VEC1(___REF_SUB(170))
               ___VEC0
___DEF_SUB_VEC(___X170,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(171))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X172,0UL)
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(177))
               ___VEC0
___DEF_SUB_VEC(___X174,1UL)
               ___VEC1(___REF_SUB(175))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(176))
               ___VEC0
___DEF_SUB_VEC(___X176,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X177,0UL)
               ___VEC0
___DEF_SUB_VEC(___X178,2UL)
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_SUB(182))
               ___VEC0
___DEF_SUB_VEC(___X179,1UL)
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X180,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(181))
               ___VEC0
___DEF_SUB_VEC(___X181,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X182,0UL)
               ___VEC0
___DEF_SUB_VEC(___X183,2UL)
               ___VEC1(___REF_SUB(184))
               ___VEC1(___REF_SUB(187))
               ___VEC0
___DEF_SUB_VEC(___X184,1UL)
               ___VEC1(___REF_SUB(185))
               ___VEC0
___DEF_SUB_VEC(___X185,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(186))
               ___VEC0
___DEF_SUB_VEC(___X186,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X187,0UL)
               ___VEC0
___DEF_SUB_VEC(___X188,2UL)
               ___VEC1(___REF_SUB(189))
               ___VEC1(___REF_SUB(192))
               ___VEC0
___DEF_SUB_VEC(___X189,1UL)
               ___VEC1(___REF_SUB(190))
               ___VEC0
___DEF_SUB_VEC(___X190,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(191))
               ___VEC0
___DEF_SUB_VEC(___X191,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X192,0UL)
               ___VEC0
___DEF_SUB_VEC(___X193,2UL)
               ___VEC1(___REF_SUB(194))
               ___VEC1(___REF_SUB(197))
               ___VEC0
___DEF_SUB_VEC(___X194,1UL)
               ___VEC1(___REF_SUB(195))
               ___VEC0
___DEF_SUB_VEC(___X195,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(196))
               ___VEC0
___DEF_SUB_VEC(___X196,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X197,0UL)
               ___VEC0
___DEF_SUB_VEC(___X198,2UL)
               ___VEC1(___REF_SUB(199))
               ___VEC1(___REF_SUB(202))
               ___VEC0
___DEF_SUB_VEC(___X199,1UL)
               ___VEC1(___REF_SUB(200))
               ___VEC0
___DEF_SUB_VEC(___X200,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(201))
               ___VEC0
___DEF_SUB_VEC(___X201,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X202,0UL)
               ___VEC0
___DEF_SUB_VEC(___X203,2UL)
               ___VEC1(___REF_SUB(204))
               ___VEC1(___REF_SUB(207))
               ___VEC0
___DEF_SUB_VEC(___X204,1UL)
               ___VEC1(___REF_SUB(205))
               ___VEC0
___DEF_SUB_VEC(___X205,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(206))
               ___VEC0
___DEF_SUB_VEC(___X206,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X207,0UL)
               ___VEC0
___DEF_SUB_VEC(___X208,2UL)
               ___VEC1(___REF_SUB(209))
               ___VEC1(___REF_SUB(212))
               ___VEC0
___DEF_SUB_VEC(___X209,1UL)
               ___VEC1(___REF_SUB(210))
               ___VEC0
___DEF_SUB_VEC(___X210,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(211))
               ___VEC0
___DEF_SUB_VEC(___X211,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131129))
               ___VEC0
___DEF_SUB_VEC(___X212,0UL)
               ___VEC0
___DEF_SUB_VEC(___X213,2UL)
               ___VEC1(___REF_SUB(214))
               ___VEC1(___REF_SUB(217))
               ___VEC0
___DEF_SUB_VEC(___X214,1UL)
               ___VEC1(___REF_SUB(215))
               ___VEC0
___DEF_SUB_VEC(___X215,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(216))
               ___VEC0
___DEF_SUB_VEC(___X216,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X217,0UL)
               ___VEC0
___DEF_SUB_VEC(___X218,2UL)
               ___VEC1(___REF_SUB(219))
               ___VEC1(___REF_SUB(222))
               ___VEC0
___DEF_SUB_VEC(___X219,1UL)
               ___VEC1(___REF_SUB(220))
               ___VEC0
___DEF_SUB_VEC(___X220,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(221))
               ___VEC0
___DEF_SUB_VEC(___X221,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X222,0UL)
               ___VEC0
___DEF_SUB_VEC(___X223,2UL)
               ___VEC1(___REF_SUB(224))
               ___VEC1(___REF_SUB(227))
               ___VEC0
___DEF_SUB_VEC(___X224,1UL)
               ___VEC1(___REF_SUB(225))
               ___VEC0
___DEF_SUB_VEC(___X225,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(226))
               ___VEC0
___DEF_SUB_VEC(___X226,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X227,0UL)
               ___VEC0
___DEF_SUB_VEC(___X228,2UL)
               ___VEC1(___REF_SUB(229))
               ___VEC1(___REF_SUB(232))
               ___VEC0
___DEF_SUB_VEC(___X229,1UL)
               ___VEC1(___REF_SUB(230))
               ___VEC0
___DEF_SUB_VEC(___X230,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(231))
               ___VEC0
___DEF_SUB_VEC(___X231,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131131))
               ___VEC0
___DEF_SUB_VEC(___X232,0UL)
               ___VEC0
___DEF_SUB_VEC(___X233,2UL)
               ___VEC1(___REF_SUB(234))
               ___VEC1(___REF_SUB(237))
               ___VEC0
___DEF_SUB_VEC(___X234,1UL)
               ___VEC1(___REF_SUB(235))
               ___VEC0
___DEF_SUB_VEC(___X235,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(236))
               ___VEC0
___DEF_SUB_VEC(___X236,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X237,0UL)
               ___VEC0
___DEF_SUB_VEC(___X238,2UL)
               ___VEC1(___REF_SUB(239))
               ___VEC1(___REF_SUB(242))
               ___VEC0
___DEF_SUB_VEC(___X239,1UL)
               ___VEC1(___REF_SUB(240))
               ___VEC0
___DEF_SUB_VEC(___X240,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(241))
               ___VEC0
___DEF_SUB_VEC(___X241,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(44))
               ___VEC0
___DEF_SUB_VEC(___X242,0UL)
               ___VEC0
___DEF_SUB_VEC(___X243,2UL)
               ___VEC1(___REF_SUB(244))
               ___VEC1(___REF_SUB(247))
               ___VEC0
___DEF_SUB_VEC(___X244,1UL)
               ___VEC1(___REF_SUB(245))
               ___VEC0
___DEF_SUB_VEC(___X245,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(246))
               ___VEC0
___DEF_SUB_VEC(___X246,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X247,0UL)
               ___VEC0
___DEF_SUB_STR(___X248,24UL)
               ___STR8(85,110,101,120,112,101,99,116)
               ___STR8(101,100,32,107,101,121,119,111)
               ___STR8(114,100,115,58,32,123,115,125)
               ___STR0
___DEF_SUB_VEC(___X249,2UL)
               ___VEC1(___REF_SUB(250))
               ___VEC1(___REF_SUB(301))
               ___VEC0
___DEF_SUB_VEC(___X250,25UL)
               ___VEC1(___REF_SUB(251))
               ___VEC1(___REF_SUB(253))
               ___VEC1(___REF_SUB(255))
               ___VEC1(___REF_SUB(257))
               ___VEC1(___REF_SUB(259))
               ___VEC1(___REF_SUB(261))
               ___VEC1(___REF_SUB(263))
               ___VEC1(___REF_SUB(265))
               ___VEC1(___REF_SUB(267))
               ___VEC1(___REF_SUB(269))
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
               ___VEC1(___REF_SUB(291))
               ___VEC1(___REF_SUB(293))
               ___VEC1(___REF_SUB(295))
               ___VEC1(___REF_SUB(297))
               ___VEC1(___REF_SUB(299))
               ___VEC0
___DEF_SUB_VEC(___X251,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(252))
               ___VEC0
___DEF_SUB_VEC(___X252,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X253,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(254))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X254,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X255,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(256))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X256,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X257,6UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(258))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X258,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X259,7UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(260))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X260,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X261,8UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(262))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X262,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X263,9UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(264))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X264,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X265,10UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(266))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X266,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X267,11UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(268))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X268,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X269,12UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(270))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X270,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X271,13UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(272))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X272,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X273,13UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(274))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X274,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X275,13UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(276))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X276,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X277,13UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(278))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X278,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X279,13UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(280))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X280,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393281))
               ___VEC0
___DEF_SUB_VEC(___X281,13UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(282))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X282,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2031688))
               ___VEC0
___DEF_SUB_VEC(___X283,13UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(284))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X284,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2031689))
               ___VEC0
___DEF_SUB_VEC(___X285,13UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(286))
               ___VEC1(___REF_FIX(393236))
               ___VEC1(___REF_FIX(360466))
               ___VEC1(___REF_FIX(327696))
               ___VEC1(___REF_FIX(294926))
               ___VEC1(___REF_FIX(262156))
               ___VEC1(___REF_FIX(229386))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X286,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393292))
               ___VEC0
___DEF_SUB_VEC(___X287,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(288))
               ___VEC0
___DEF_SUB_VEC(___X288,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X289,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(290))
               ___VEC0
___DEF_SUB_VEC(___X290,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X291,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(292))
               ___VEC0
___DEF_SUB_VEC(___X292,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X293,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(294))
               ___VEC0
___DEF_SUB_VEC(___X294,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X295,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(296))
               ___VEC0
___DEF_SUB_VEC(___X296,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X297,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(298))
               ___VEC0
___DEF_SUB_VEC(___X298,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X299,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(300))
               ___VEC0
___DEF_SUB_VEC(___X300,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X301,11UL)
               ___VEC1(___REF_SYM(43,___S_nextmethod))
               ___VEC1(___REF_SYM(47,___S_rest))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC1(___REF_SYM(7,___S_box_5e_0))
               ___VEC1(___REF_SYM(42,___S_name))
               ___VEC1(___REF_SYM(30,___S_host))
               ___VEC1(___REF_SYM(62,___S_service))
               ___VEC1(___REF_SYM(5,___S_alternate_2d_service))
               ___VEC1(___REF_SYM(14,___S_debug_3f_))
               ___VEC1(___REF_SYM(49,___S_reuse_2d_address_3f_))
               ___VEC1(___REF_SYM(9,___S_connection_2d_handler))
               ___VEC0
___DEF_SUB_VEC(___X302,2UL)
               ___VEC1(___REF_SUB(303))
               ___VEC1(___REF_SUB(316))
               ___VEC0
___DEF_SUB_VEC(___X303,6UL)
               ___VEC1(___REF_SUB(304))
               ___VEC1(___REF_SUB(306))
               ___VEC1(___REF_SUB(308))
               ___VEC1(___REF_SUB(310))
               ___VEC1(___REF_SUB(312))
               ___VEC1(___REF_SUB(314))
               ___VEC0
___DEF_SUB_VEC(___X304,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(305))
               ___VEC0
___DEF_SUB_VEC(___X305,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131151))
               ___VEC0
___DEF_SUB_VEC(___X306,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(307))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X307,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393297))
               ___VEC0
___DEF_SUB_VEC(___X308,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(309))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X309,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393297))
               ___VEC0
___DEF_SUB_VEC(___X310,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(311))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X311,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262226))
               ___VEC0
___DEF_SUB_VEC(___X312,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(313))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X313,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262226))
               ___VEC0
___DEF_SUB_VEC(___X314,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(315))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X315,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262226))
               ___VEC0
___DEF_SUB_VEC(___X316,2UL)
               ___VEC1(___REF_SYM(43,___S_nextmethod))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X317,2UL)
               ___VEC1(___REF_SUB(318))
               ___VEC1(___REF_SUB(321))
               ___VEC0
___DEF_SUB_VEC(___X318,1UL)
               ___VEC1(___REF_SUB(319))
               ___VEC0
___DEF_SUB_VEC(___X319,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(320))
               ___VEC0
___DEF_SUB_VEC(___X320,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131162))
               ___VEC0
___DEF_SUB_VEC(___X321,0UL)
               ___VEC0
___DEF_SUB_VEC(___X322,2UL)
               ___VEC1(___REF_SUB(323))
               ___VEC1(___REF_SUB(326))
               ___VEC0
___DEF_SUB_VEC(___X323,1UL)
               ___VEC1(___REF_SUB(324))
               ___VEC0
___DEF_SUB_VEC(___X324,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(325))
               ___VEC0
___DEF_SUB_VEC(___X325,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131166))
               ___VEC0
___DEF_SUB_VEC(___X326,0UL)
               ___VEC0
___DEF_SUB_VEC(___X327,2UL)
               ___VEC1(___REF_SUB(328))
               ___VEC1(___REF_SUB(333))
               ___VEC0
___DEF_SUB_VEC(___X328,2UL)
               ___VEC1(___REF_SUB(329))
               ___VEC1(___REF_SUB(331))
               ___VEC0
___DEF_SUB_VEC(___X329,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(330))
               ___VEC0
___DEF_SUB_VEC(___X330,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131175))
               ___VEC0
___DEF_SUB_VEC(___X331,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(332))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X332,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262248))
               ___VEC0
___DEF_SUB_VEC(___X333,2UL)
               ___VEC1(___REF_SYM(47,___S_rest))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X334,2UL)
               ___VEC1(___REF_SUB(335))
               ___VEC1(___REF_SUB(352))
               ___VEC0
___DEF_SUB_VEC(___X335,8UL)
               ___VEC1(___REF_SUB(336))
               ___VEC1(___REF_SUB(338))
               ___VEC1(___REF_SUB(340))
               ___VEC1(___REF_SUB(342))
               ___VEC1(___REF_SUB(344))
               ___VEC1(___REF_SUB(346))
               ___VEC1(___REF_SUB(348))
               ___VEC1(___REF_SUB(350))
               ___VEC0
___DEF_SUB_VEC(___X336,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(337))
               ___VEC0
___DEF_SUB_VEC(___X337,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131184))
               ___VEC0
___DEF_SUB_VEC(___X338,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(339))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X339,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262257))
               ___VEC0
___DEF_SUB_VEC(___X340,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(341))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X341,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262257))
               ___VEC0
___DEF_SUB_VEC(___X342,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(343))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X343,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262258))
               ___VEC0
___DEF_SUB_VEC(___X344,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(345))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X345,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262259))
               ___VEC0
___DEF_SUB_VEC(___X346,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(347))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X347,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262259))
               ___VEC0
___DEF_SUB_VEC(___X348,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(349))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X349,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262259))
               ___VEC0
___DEF_SUB_VEC(___X350,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(351))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X351,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262259))
               ___VEC0
___DEF_SUB_VEC(___X352,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X353,2UL)
               ___VEC1(___REF_SUB(354))
               ___VEC1(___REF_SUB(373))
               ___VEC0
___DEF_SUB_VEC(___X354,9UL)
               ___VEC1(___REF_SUB(355))
               ___VEC1(___REF_SUB(357))
               ___VEC1(___REF_SUB(359))
               ___VEC1(___REF_SUB(361))
               ___VEC1(___REF_SUB(363))
               ___VEC1(___REF_SUB(365))
               ___VEC1(___REF_SUB(367))
               ___VEC1(___REF_SUB(369))
               ___VEC1(___REF_SUB(371))
               ___VEC0
___DEF_SUB_VEC(___X355,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(356))
               ___VEC0
___DEF_SUB_VEC(___X356,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131190))
               ___VEC0
___DEF_SUB_VEC(___X357,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(358))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X358,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262263))
               ___VEC0
___DEF_SUB_VEC(___X359,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(360))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X360,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262263))
               ___VEC0
___DEF_SUB_VEC(___X361,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(362))
               ___VEC0
___DEF_SUB_VEC(___X362,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131190))
               ___VEC0
___DEF_SUB_VEC(___X363,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(364))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X364,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393337))
               ___VEC0
___DEF_SUB_VEC(___X365,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(366))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X366,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393338))
               ___VEC0
___DEF_SUB_VEC(___X367,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(368))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X368,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393338))
               ___VEC0
___DEF_SUB_VEC(___X369,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(370))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X370,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393338))
               ___VEC0
___DEF_SUB_VEC(___X371,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(372))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X372,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393339))
               ___VEC0
___DEF_SUB_VEC(___X373,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X374,2UL)
               ___VEC1(___REF_SUB(375))
               ___VEC1(___REF_SUB(394))
               ___VEC0
___DEF_SUB_VEC(___X375,9UL)
               ___VEC1(___REF_SUB(376))
               ___VEC1(___REF_SUB(378))
               ___VEC1(___REF_SUB(380))
               ___VEC1(___REF_SUB(382))
               ___VEC1(___REF_SUB(384))
               ___VEC1(___REF_SUB(386))
               ___VEC1(___REF_SUB(388))
               ___VEC1(___REF_SUB(390))
               ___VEC1(___REF_SUB(392))
               ___VEC0
___DEF_SUB_VEC(___X376,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(377))
               ___VEC0
___DEF_SUB_VEC(___X377,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131198))
               ___VEC0
___DEF_SUB_VEC(___X378,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(379))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X379,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262271))
               ___VEC0
___DEF_SUB_VEC(___X380,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(381))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X381,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262271))
               ___VEC0
___DEF_SUB_VEC(___X382,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(383))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X383,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262271))
               ___VEC0
___DEF_SUB_VEC(___X384,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(385))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X385,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262271))
               ___VEC0
___DEF_SUB_VEC(___X386,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(387))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X387,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262272))
               ___VEC0
___DEF_SUB_VEC(___X388,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(389))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X389,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262272))
               ___VEC0
___DEF_SUB_VEC(___X390,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(391))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X391,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262272))
               ___VEC0
___DEF_SUB_VEC(___X392,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(393))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X393,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262272))
               ___VEC0
___DEF_SUB_VEC(___X394,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X395,2UL)
               ___VEC1(___REF_SUB(396))
               ___VEC1(___REF_SUB(407))
               ___VEC0
___DEF_SUB_VEC(___X396,5UL)
               ___VEC1(___REF_SUB(397))
               ___VEC1(___REF_SUB(399))
               ___VEC1(___REF_SUB(401))
               ___VEC1(___REF_SUB(403))
               ___VEC1(___REF_SUB(405))
               ___VEC0
___DEF_SUB_VEC(___X397,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(398))
               ___VEC0
___DEF_SUB_VEC(___X398,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131203))
               ___VEC0
___DEF_SUB_VEC(___X399,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(400))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X400,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262276))
               ___VEC0
___DEF_SUB_VEC(___X401,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(402))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X402,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262276))
               ___VEC0
___DEF_SUB_VEC(___X403,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(404))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X404,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262277))
               ___VEC0
___DEF_SUB_VEC(___X405,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(406))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X406,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262277))
               ___VEC0
___DEF_SUB_VEC(___X407,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X408,2UL)
               ___VEC1(___REF_SUB(409))
               ___VEC1(___REF_SUB(420))
               ___VEC0
___DEF_SUB_VEC(___X409,5UL)
               ___VEC1(___REF_SUB(410))
               ___VEC1(___REF_SUB(412))
               ___VEC1(___REF_SUB(414))
               ___VEC1(___REF_SUB(416))
               ___VEC1(___REF_SUB(418))
               ___VEC0
___DEF_SUB_VEC(___X410,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(411))
               ___VEC0
___DEF_SUB_VEC(___X411,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131208))
               ___VEC0
___DEF_SUB_VEC(___X412,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(413))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X413,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262281))
               ___VEC0
___DEF_SUB_VEC(___X414,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(415))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X415,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262281))
               ___VEC0
___DEF_SUB_VEC(___X416,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(417))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X417,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262282))
               ___VEC0
___DEF_SUB_VEC(___X418,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(419))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X419,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262282))
               ___VEC0
___DEF_SUB_VEC(___X420,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X421,2UL)
               ___VEC1(___REF_SUB(422))
               ___VEC1(___REF_SUB(425))
               ___VEC0
___DEF_SUB_VEC(___X422,1UL)
               ___VEC1(___REF_SUB(423))
               ___VEC0
___DEF_SUB_VEC(___X423,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(424))
               ___VEC0
___DEF_SUB_VEC(___X424,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131218))
               ___VEC0
___DEF_SUB_VEC(___X425,0UL)
               ___VEC0
___DEF_SUB_VEC(___X426,2UL)
               ___VEC1(___REF_SUB(427))
               ___VEC1(___REF_SUB(442))
               ___VEC0
___DEF_SUB_VEC(___X427,7UL)
               ___VEC1(___REF_SUB(428))
               ___VEC1(___REF_SUB(430))
               ___VEC1(___REF_SUB(432))
               ___VEC1(___REF_SUB(434))
               ___VEC1(___REF_SUB(436))
               ___VEC1(___REF_SUB(438))
               ___VEC1(___REF_SUB(440))
               ___VEC0
___DEF_SUB_VEC(___X428,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(429))
               ___VEC0
___DEF_SUB_VEC(___X429,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131223))
               ___VEC0
___DEF_SUB_VEC(___X430,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(431))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X431,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917656))
               ___VEC0
___DEF_SUB_VEC(___X432,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(433))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X433,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917656))
               ___VEC0
___DEF_SUB_VEC(___X434,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(435))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X435,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917656))
               ___VEC0
___DEF_SUB_VEC(___X436,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(437))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X437,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917656))
               ___VEC0
___DEF_SUB_VEC(___X438,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(439))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X439,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262296))
               ___VEC0
___DEF_SUB_VEC(___X440,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(441))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X441,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262296))
               ___VEC0
___DEF_SUB_VEC(___X442,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X443,2UL)
               ___VEC1(___REF_SUB(444))
               ___VEC1(___REF_SUB(447))
               ___VEC0
___DEF_SUB_VEC(___X444,1UL)
               ___VEC1(___REF_SUB(445))
               ___VEC0
___DEF_SUB_VEC(___X445,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(446))
               ___VEC0
___DEF_SUB_VEC(___X446,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131227))
               ___VEC0
___DEF_SUB_VEC(___X447,0UL)
               ___VEC0
___DEF_SUB_VEC(___X448,2UL)
               ___VEC1(___REF_SUB(449))
               ___VEC1(___REF_SUB(452))
               ___VEC0
___DEF_SUB_VEC(___X449,1UL)
               ___VEC1(___REF_SUB(450))
               ___VEC0
___DEF_SUB_VEC(___X450,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(451))
               ___VEC0
___DEF_SUB_VEC(___X451,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131231))
               ___VEC0
___DEF_SUB_VEC(___X452,0UL)
               ___VEC0
___DEF_SUB_VEC(___X453,2UL)
               ___VEC1(___REF_SUB(454))
               ___VEC1(___REF_SUB(457))
               ___VEC0
___DEF_SUB_VEC(___X454,1UL)
               ___VEC1(___REF_SUB(455))
               ___VEC0
___DEF_SUB_VEC(___X455,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(456))
               ___VEC0
___DEF_SUB_VEC(___X456,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131235))
               ___VEC0
___DEF_SUB_VEC(___X457,0UL)
               ___VEC0
___DEF_SUB_VEC(___X458,2UL)
               ___VEC1(___REF_SUB(459))
               ___VEC1(___REF_SUB(462))
               ___VEC0
___DEF_SUB_VEC(___X459,1UL)
               ___VEC1(___REF_SUB(460))
               ___VEC0
___DEF_SUB_VEC(___X460,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(461))
               ___VEC0
___DEF_SUB_VEC(___X461,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131239))
               ___VEC0
___DEF_SUB_VEC(___X462,0UL)
               ___VEC0
___DEF_SUB_VEC(___X463,2UL)
               ___VEC1(___REF_SUB(464))
               ___VEC1(___REF_SUB(467))
               ___VEC0
___DEF_SUB_VEC(___X464,1UL)
               ___VEC1(___REF_SUB(465))
               ___VEC0
___DEF_SUB_VEC(___X465,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(466))
               ___VEC0
___DEF_SUB_VEC(___X466,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131243))
               ___VEC0
___DEF_SUB_VEC(___X467,0UL)
               ___VEC0
___DEF_SUB_VEC(___X468,2UL)
               ___VEC1(___REF_SUB(469))
               ___VEC1(___REF_SUB(472))
               ___VEC0
___DEF_SUB_VEC(___X469,1UL)
               ___VEC1(___REF_SUB(470))
               ___VEC0
___DEF_SUB_VEC(___X470,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(471))
               ___VEC0
___DEF_SUB_VEC(___X471,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131247))
               ___VEC0
___DEF_SUB_VEC(___X472,0UL)
               ___VEC0
___DEF_SUB_VEC(___X473,2UL)
               ___VEC1(___REF_SUB(474))
               ___VEC1(___REF_SUB(481))
               ___VEC0
___DEF_SUB_VEC(___X474,3UL)
               ___VEC1(___REF_SUB(475))
               ___VEC1(___REF_SUB(477))
               ___VEC1(___REF_SUB(479))
               ___VEC0
___DEF_SUB_VEC(___X475,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(476))
               ___VEC0
___DEF_SUB_VEC(___X476,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131251))
               ___VEC0
___DEF_SUB_VEC(___X477,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(478))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X478,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131251))
               ___VEC0
___DEF_SUB_VEC(___X479,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(480))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X480,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131251))
               ___VEC0
___DEF_SUB_VEC(___X481,3UL)
               ___VEC1(___REF_SYM(81,___S_temp_2e_38))
               ___VEC1(___REF_SYM(80,___S_temp_2e_36))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X482,2UL)
               ___VEC1(___REF_SUB(483))
               ___VEC1(___REF_SUB(486))
               ___VEC0
___DEF_SUB_VEC(___X483,1UL)
               ___VEC1(___REF_SUB(484))
               ___VEC0
___DEF_SUB_VEC(___X484,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(485))
               ___VEC0
___DEF_SUB_VEC(___X485,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131255))
               ___VEC0
___DEF_SUB_VEC(___X486,0UL)
               ___VEC0
___DEF_SUB_VEC(___X487,2UL)
               ___VEC1(___REF_SUB(488))
               ___VEC1(___REF_SUB(491))
               ___VEC0
___DEF_SUB_VEC(___X488,1UL)
               ___VEC1(___REF_SUB(489))
               ___VEC0
___DEF_SUB_VEC(___X489,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(490))
               ___VEC0
___DEF_SUB_VEC(___X490,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131259))
               ___VEC0
___DEF_SUB_VEC(___X491,0UL)
               ___VEC0
___DEF_SUB_STR(___X492,22UL)
               ___STR8(65,100,100,114,101,115,115,32)
               ___STR8(97,108,114,101,97,100,121,32)
               ___STR6(105,110,32,117,115,101)
___DEF_SUB_VEC(___X493,2UL)
               ___VEC1(___REF_SUB(494))
               ___VEC1(___REF_SUB(713))
               ___VEC0
___DEF_SUB_VEC(___X494,109UL)
               ___VEC1(___REF_SUB(495))
               ___VEC1(___REF_SUB(497))
               ___VEC1(___REF_SUB(499))
               ___VEC1(___REF_SUB(501))
               ___VEC1(___REF_SUB(503))
               ___VEC1(___REF_SUB(505))
               ___VEC1(___REF_SUB(507))
               ___VEC1(___REF_SUB(509))
               ___VEC1(___REF_SUB(511))
               ___VEC1(___REF_SUB(513))
               ___VEC1(___REF_SUB(515))
               ___VEC1(___REF_SUB(517))
               ___VEC1(___REF_SUB(519))
               ___VEC1(___REF_SUB(521))
               ___VEC1(___REF_SUB(523))
               ___VEC1(___REF_SUB(525))
               ___VEC1(___REF_SUB(527))
               ___VEC1(___REF_SUB(529))
               ___VEC1(___REF_SUB(531))
               ___VEC1(___REF_SUB(533))
               ___VEC1(___REF_SUB(535))
               ___VEC1(___REF_SUB(537))
               ___VEC1(___REF_SUB(539))
               ___VEC1(___REF_SUB(541))
               ___VEC1(___REF_SUB(543))
               ___VEC1(___REF_SUB(545))
               ___VEC1(___REF_SUB(547))
               ___VEC1(___REF_SUB(549))
               ___VEC1(___REF_SUB(551))
               ___VEC1(___REF_SUB(553))
               ___VEC1(___REF_SUB(555))
               ___VEC1(___REF_SUB(557))
               ___VEC1(___REF_SUB(559))
               ___VEC1(___REF_SUB(561))
               ___VEC1(___REF_SUB(563))
               ___VEC1(___REF_SUB(565))
               ___VEC1(___REF_SUB(567))
               ___VEC1(___REF_SUB(569))
               ___VEC1(___REF_SUB(571))
               ___VEC1(___REF_SUB(573))
               ___VEC1(___REF_SUB(575))
               ___VEC1(___REF_SUB(577))
               ___VEC1(___REF_SUB(579))
               ___VEC1(___REF_SUB(581))
               ___VEC1(___REF_SUB(583))
               ___VEC1(___REF_SUB(585))
               ___VEC1(___REF_SUB(587))
               ___VEC1(___REF_SUB(589))
               ___VEC1(___REF_SUB(591))
               ___VEC1(___REF_SUB(593))
               ___VEC1(___REF_SUB(595))
               ___VEC1(___REF_SUB(597))
               ___VEC1(___REF_SUB(599))
               ___VEC1(___REF_SUB(601))
               ___VEC1(___REF_SUB(603))
               ___VEC1(___REF_SUB(605))
               ___VEC1(___REF_SUB(607))
               ___VEC1(___REF_SUB(609))
               ___VEC1(___REF_SUB(611))
               ___VEC1(___REF_SUB(613))
               ___VEC1(___REF_SUB(615))
               ___VEC1(___REF_SUB(617))
               ___VEC1(___REF_SUB(619))
               ___VEC1(___REF_SUB(621))
               ___VEC1(___REF_SUB(623))
               ___VEC1(___REF_SUB(625))
               ___VEC1(___REF_SUB(627))
               ___VEC1(___REF_SUB(629))
               ___VEC1(___REF_SUB(631))
               ___VEC1(___REF_SUB(633))
               ___VEC1(___REF_SUB(635))
               ___VEC1(___REF_SUB(637))
               ___VEC1(___REF_SUB(639))
               ___VEC1(___REF_SUB(641))
               ___VEC1(___REF_SUB(643))
               ___VEC1(___REF_SUB(645))
               ___VEC1(___REF_SUB(647))
               ___VEC1(___REF_SUB(649))
               ___VEC1(___REF_SUB(651))
               ___VEC1(___REF_SUB(653))
               ___VEC1(___REF_SUB(655))
               ___VEC1(___REF_SUB(657))
               ___VEC1(___REF_SUB(659))
               ___VEC1(___REF_SUB(661))
               ___VEC1(___REF_SUB(663))
               ___VEC1(___REF_SUB(665))
               ___VEC1(___REF_SUB(667))
               ___VEC1(___REF_SUB(669))
               ___VEC1(___REF_SUB(671))
               ___VEC1(___REF_SUB(673))
               ___VEC1(___REF_SUB(675))
               ___VEC1(___REF_SUB(677))
               ___VEC1(___REF_SUB(679))
               ___VEC1(___REF_SUB(681))
               ___VEC1(___REF_SUB(683))
               ___VEC1(___REF_SUB(685))
               ___VEC1(___REF_SUB(687))
               ___VEC1(___REF_SUB(689))
               ___VEC1(___REF_SUB(691))
               ___VEC1(___REF_SUB(693))
               ___VEC1(___REF_SUB(695))
               ___VEC1(___REF_SUB(697))
               ___VEC1(___REF_SUB(699))
               ___VEC1(___REF_SUB(701))
               ___VEC1(___REF_SUB(703))
               ___VEC1(___REF_SUB(705))
               ___VEC1(___REF_SUB(707))
               ___VEC1(___REF_SUB(709))
               ___VEC1(___REF_SUB(711))
               ___VEC0
___DEF_SUB_VEC(___X495,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(496))
               ___VEC0
___DEF_SUB_VEC(___X496,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131263))
               ___VEC0
___DEF_SUB_VEC(___X497,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(498))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X498,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2162880))
               ___VEC0
___DEF_SUB_VEC(___X499,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(500))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X500,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2162880))
               ___VEC0
___DEF_SUB_VEC(___X501,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(502))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X502,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2162880))
               ___VEC0
___DEF_SUB_VEC(___X503,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(504))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X504,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2162880))
               ___VEC0
___DEF_SUB_VEC(___X505,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(506))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X506,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1245376))
               ___VEC0
___DEF_SUB_VEC(___X507,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(508))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X508,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1245377))
               ___VEC0
___DEF_SUB_VEC(___X509,4UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(510))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X510,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1245377))
               ___VEC0
___DEF_SUB_VEC(___X511,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(512))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X512,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1245377))
               ___VEC0
___DEF_SUB_VEC(___X513,5UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(514))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X514,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1900738))
               ___VEC0
___DEF_SUB_VEC(___X515,5UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(516))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X516,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1900738))
               ___VEC0
___DEF_SUB_VEC(___X517,5UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(518))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X518,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1900738))
               ___VEC0
___DEF_SUB_VEC(___X519,6UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(520))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X520,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393439))
               ___VEC0
___DEF_SUB_VEC(___X521,6UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(522))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X522,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393439))
               ___VEC0
___DEF_SUB_VEC(___X523,6UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(524))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X524,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393439))
               ___VEC0
___DEF_SUB_VEC(___X525,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(526))
               ___VEC0
___DEF_SUB_VEC(___X526,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393439))
               ___VEC0
___DEF_SUB_VEC(___X527,6UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(528))
               ___VEC1(___REF_FIX(425992))
               ___VEC1(___REF_FIX(360458))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X528,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1048803))
               ___VEC0
___DEF_SUB_VEC(___X529,5UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(530))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X530,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1048803))
               ___VEC0
___DEF_SUB_VEC(___X531,5UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(532))
               ___VEC1(___REF_FIX(425992))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X532,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917732))
               ___VEC0
___DEF_SUB_VEC(___X533,5UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(534))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X534,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917732))
               ___VEC0
___DEF_SUB_VEC(___X535,4UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(536))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X536,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917734))
               ___VEC0
___DEF_SUB_VEC(___X537,4UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(538))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X538,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917734))
               ___VEC0
___DEF_SUB_VEC(___X539,6UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(540))
               ___VEC1(___REF_FIX(425992))
               ___VEC1(___REF_FIX(360458))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X540,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1835240))
               ___VEC0
___DEF_SUB_VEC(___X541,5UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(542))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X542,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1835240))
               ___VEC0
___DEF_SUB_VEC(___X543,5UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(544))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X544,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655593))
               ___VEC0
___DEF_SUB_VEC(___X545,5UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(546))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X546,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655594))
               ___VEC0
___DEF_SUB_VEC(___X547,5UL)
               ___VEC1(___REF_FIX(26))
               ___VEC1(___REF_SUB(548))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X548,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310975))
               ___VEC0
___DEF_SUB_VEC(___X549,5UL)
               ___VEC1(___REF_FIX(27))
               ___VEC1(___REF_SUB(550))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X550,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310975))
               ___VEC0
___DEF_SUB_VEC(___X551,5UL)
               ___VEC1(___REF_FIX(28))
               ___VEC1(___REF_SUB(552))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X552,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310975))
               ___VEC0
___DEF_SUB_VEC(___X553,5UL)
               ___VEC1(___REF_FIX(29))
               ___VEC1(___REF_SUB(554))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X554,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310975))
               ___VEC0
___DEF_SUB_VEC(___X555,5UL)
               ___VEC1(___REF_FIX(30))
               ___VEC1(___REF_SUB(556))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X556,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1179885))
               ___VEC0
___DEF_SUB_VEC(___X557,5UL)
               ___VEC1(___REF_FIX(31))
               ___VEC1(___REF_SUB(558))
               ___VEC1(___REF_FIX(131080))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X558,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1048812))
               ___VEC0
___DEF_SUB_VEC(___X559,4UL)
               ___VEC1(___REF_FIX(32))
               ___VEC1(___REF_SUB(560))
               ___VEC1(___REF_FIX(98314))
               ___VEC1(___REF_FIX(65548))
               ___VEC0
___DEF_SUB_VEC(___X560,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655595))
               ___VEC0
___DEF_SUB_VEC(___X561,2UL)
               ___VEC1(___REF_FIX(33))
               ___VEC1(___REF_SUB(562))
               ___VEC0
___DEF_SUB_VEC(___X562,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310958))
               ___VEC0
___DEF_SUB_VEC(___X563,3UL)
               ___VEC1(___REF_FIX(34))
               ___VEC1(___REF_SUB(564))
               ___VEC1(___REF_FIX(425992))
               ___VEC0
___DEF_SUB_VEC(___X564,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1442032))
               ___VEC0
___DEF_SUB_VEC(___X565,3UL)
               ___VEC1(___REF_FIX(35))
               ___VEC1(___REF_SUB(566))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X566,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1442032))
               ___VEC0
___DEF_SUB_VEC(___X567,3UL)
               ___VEC1(___REF_FIX(36))
               ___VEC1(___REF_SUB(568))
               ___VEC1(___REF_FIX(65544))
               ___VEC0
___DEF_SUB_VEC(___X568,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1442033))
               ___VEC0
___DEF_SUB_VEC(___X569,2UL)
               ___VEC1(___REF_FIX(37))
               ___VEC1(___REF_SUB(570))
               ___VEC0
___DEF_SUB_VEC(___X570,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310958))
               ___VEC0
___DEF_SUB_VEC(___X571,2UL)
               ___VEC1(___REF_FIX(38))
               ___VEC1(___REF_SUB(572))
               ___VEC0
___DEF_SUB_VEC(___X572,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310958))
               ___VEC0
___DEF_SUB_VEC(___X573,2UL)
               ___VEC1(___REF_FIX(39))
               ___VEC1(___REF_SUB(574))
               ___VEC0
___DEF_SUB_VEC(___X574,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310958))
               ___VEC0
___DEF_SUB_VEC(___X575,2UL)
               ___VEC1(___REF_FIX(40))
               ___VEC1(___REF_SUB(576))
               ___VEC0
___DEF_SUB_VEC(___X576,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2556158))
               ___VEC0
___DEF_SUB_VEC(___X577,2UL)
               ___VEC1(___REF_FIX(41))
               ___VEC1(___REF_SUB(578))
               ___VEC0
___DEF_SUB_VEC(___X578,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310958))
               ___VEC0
___DEF_SUB_VEC(___X579,2UL)
               ___VEC1(___REF_FIX(42))
               ___VEC1(___REF_SUB(580))
               ___VEC0
___DEF_SUB_VEC(___X580,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131263))
               ___VEC0
___DEF_SUB_VEC(___X581,4UL)
               ___VEC1(___REF_FIX(43))
               ___VEC1(___REF_SUB(582))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X582,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1966326))
               ___VEC0
___DEF_SUB_VEC(___X583,2UL)
               ___VEC1(___REF_FIX(44))
               ___VEC1(___REF_SUB(584))
               ___VEC0
___DEF_SUB_VEC(___X584,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1966333))
               ___VEC0
___DEF_SUB_VEC(___X585,3UL)
               ___VEC1(___REF_FIX(45))
               ___VEC1(___REF_SUB(586))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X586,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2621684))
               ___VEC0
___DEF_SUB_VEC(___X587,4UL)
               ___VEC1(___REF_FIX(46))
               ___VEC1(___REF_SUB(588))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X588,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1966325))
               ___VEC0
___DEF_SUB_VEC(___X589,4UL)
               ___VEC1(___REF_FIX(47))
               ___VEC1(___REF_SUB(590))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X590,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1966325))
               ___VEC0
___DEF_SUB_VEC(___X591,4UL)
               ___VEC1(___REF_FIX(48))
               ___VEC1(___REF_SUB(592))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X592,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228476))
               ___VEC0
___DEF_SUB_VEC(___X593,4UL)
               ___VEC1(___REF_FIX(49))
               ___VEC1(___REF_SUB(594))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X594,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228476))
               ___VEC0
___DEF_SUB_VEC(___X595,4UL)
               ___VEC1(___REF_FIX(50))
               ___VEC1(___REF_SUB(596))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X596,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2097399))
               ___VEC0
___DEF_SUB_VEC(___X597,2UL)
               ___VEC1(___REF_FIX(51))
               ___VEC1(___REF_SUB(598))
               ___VEC0
___DEF_SUB_VEC(___X598,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228472))
               ___VEC0
___DEF_SUB_VEC(___X599,2UL)
               ___VEC1(___REF_FIX(52))
               ___VEC1(___REF_SUB(600))
               ___VEC0
___DEF_SUB_VEC(___X600,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228472))
               ___VEC0
___DEF_SUB_VEC(___X601,2UL)
               ___VEC1(___REF_FIX(53))
               ___VEC1(___REF_SUB(602))
               ___VEC0
___DEF_SUB_VEC(___X602,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228472))
               ___VEC0
___DEF_SUB_VEC(___X603,2UL)
               ___VEC1(___REF_FIX(54))
               ___VEC1(___REF_SUB(604))
               ___VEC0
___DEF_SUB_VEC(___X604,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228472))
               ___VEC0
___DEF_SUB_VEC(___X605,2UL)
               ___VEC1(___REF_FIX(55))
               ___VEC1(___REF_SUB(606))
               ___VEC0
___DEF_SUB_VEC(___X606,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131263))
               ___VEC0
___DEF_SUB_VEC(___X607,4UL)
               ___VEC1(___REF_FIX(56))
               ___VEC1(___REF_SUB(608))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X608,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524503))
               ___VEC0
___DEF_SUB_VEC(___X609,4UL)
               ___VEC1(___REF_FIX(57))
               ___VEC1(___REF_SUB(610))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X610,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524503))
               ___VEC0
___DEF_SUB_VEC(___X611,4UL)
               ___VEC1(___REF_FIX(58))
               ___VEC1(___REF_SUB(612))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X612,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524503))
               ___VEC0
___DEF_SUB_VEC(___X613,4UL)
               ___VEC1(___REF_FIX(59))
               ___VEC1(___REF_SUB(614))
               ___VEC1(___REF_FIX(98316))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X614,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524503))
               ___VEC0
___DEF_SUB_VEC(___X615,2UL)
               ___VEC1(___REF_FIX(60))
               ___VEC1(___REF_SUB(616))
               ___VEC0
___DEF_SUB_VEC(___X616,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655580))
               ___VEC0
___DEF_SUB_VEC(___X617,2UL)
               ___VEC1(___REF_FIX(61))
               ___VEC1(___REF_SUB(618))
               ___VEC0
___DEF_SUB_VEC(___X618,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(786653))
               ___VEC0
___DEF_SUB_VEC(___X619,2UL)
               ___VEC1(___REF_FIX(62))
               ___VEC1(___REF_SUB(620))
               ___VEC0
___DEF_SUB_VEC(___X620,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(786653))
               ___VEC0
___DEF_SUB_VEC(___X621,2UL)
               ___VEC1(___REF_FIX(63))
               ___VEC1(___REF_SUB(622))
               ___VEC0
___DEF_SUB_VEC(___X622,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(786653))
               ___VEC0
___DEF_SUB_VEC(___X623,2UL)
               ___VEC1(___REF_FIX(64))
               ___VEC1(___REF_SUB(624))
               ___VEC0
___DEF_SUB_VEC(___X624,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655578))
               ___VEC0
___DEF_SUB_VEC(___X625,2UL)
               ___VEC1(___REF_FIX(65))
               ___VEC1(___REF_SUB(626))
               ___VEC0
___DEF_SUB_VEC(___X626,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655576))
               ___VEC0
___DEF_SUB_VEC(___X627,2UL)
               ___VEC1(___REF_FIX(66))
               ___VEC1(___REF_SUB(628))
               ___VEC0
___DEF_SUB_VEC(___X628,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228472))
               ___VEC0
___DEF_SUB_VEC(___X629,2UL)
               ___VEC1(___REF_FIX(67))
               ___VEC1(___REF_SUB(630))
               ___VEC0
___DEF_SUB_VEC(___X630,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2621690))
               ___VEC0
___DEF_SUB_VEC(___X631,2UL)
               ___VEC1(___REF_FIX(68))
               ___VEC1(___REF_SUB(632))
               ___VEC0
___DEF_SUB_VEC(___X632,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2228472))
               ___VEC0
___DEF_SUB_VEC(___X633,2UL)
               ___VEC1(___REF_FIX(69))
               ___VEC1(___REF_SUB(634))
               ___VEC0
___DEF_SUB_VEC(___X634,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310958))
               ___VEC0
___DEF_SUB_VEC(___X635,2UL)
               ___VEC1(___REF_FIX(70))
               ___VEC1(___REF_SUB(636))
               ___VEC0
___DEF_SUB_VEC(___X636,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393439))
               ___VEC0
___DEF_SUB_VEC(___X637,2UL)
               ___VEC1(___REF_FIX(71))
               ___VEC1(___REF_SUB(638))
               ___VEC0
___DEF_SUB_VEC(___X638,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(721090))
               ___VEC0
___DEF_SUB_VEC(___X639,6UL)
               ___VEC1(___REF_FIX(72))
               ___VEC1(___REF_SUB(640))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X640,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524484))
               ___VEC0
___DEF_SUB_VEC(___X641,6UL)
               ___VEC1(___REF_FIX(73))
               ___VEC1(___REF_SUB(642))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X642,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524484))
               ___VEC0
___DEF_SUB_VEC(___X643,6UL)
               ___VEC1(___REF_FIX(74))
               ___VEC1(___REF_SUB(644))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X644,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524484))
               ___VEC0
___DEF_SUB_VEC(___X645,6UL)
               ___VEC1(___REF_FIX(75))
               ___VEC1(___REF_SUB(646))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32768))
               ___VEC0
___DEF_SUB_VEC(___X646,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(524484))
               ___VEC0
___DEF_SUB_VEC(___X647,2UL)
               ___VEC1(___REF_FIX(76))
               ___VEC1(___REF_SUB(648))
               ___VEC0
___DEF_SUB_VEC(___X648,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655571))
               ___VEC0
___DEF_SUB_VEC(___X649,3UL)
               ___VEC1(___REF_FIX(77))
               ___VEC1(___REF_SUB(650))
               ___VEC1(___REF_FIX(425998))
               ___VEC0
___DEF_SUB_VEC(___X650,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(5243092))
               ___VEC0
___DEF_SUB_VEC(___X651,3UL)
               ___VEC1(___REF_FIX(78))
               ___VEC1(___REF_SUB(652))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X652,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(5243092))
               ___VEC0
___DEF_SUB_VEC(___X653,3UL)
               ___VEC1(___REF_FIX(79))
               ___VEC1(___REF_SUB(654))
               ___VEC1(___REF_FIX(65550))
               ___VEC0
___DEF_SUB_VEC(___X654,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(11010260))
               ___VEC0
___DEF_SUB_VEC(___X655,2UL)
               ___VEC1(___REF_FIX(80))
               ___VEC1(___REF_SUB(656))
               ___VEC0
___DEF_SUB_VEC(___X656,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310932))
               ___VEC0
___DEF_SUB_VEC(___X657,2UL)
               ___VEC1(___REF_FIX(81))
               ___VEC1(___REF_SUB(658))
               ___VEC0
___DEF_SUB_VEC(___X658,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310932))
               ___VEC0
___DEF_SUB_VEC(___X659,2UL)
               ___VEC1(___REF_FIX(82))
               ___VEC1(___REF_SUB(660))
               ___VEC0
___DEF_SUB_VEC(___X660,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(786644))
               ___VEC0
___DEF_SUB_VEC(___X661,2UL)
               ___VEC1(___REF_FIX(83))
               ___VEC1(___REF_SUB(662))
               ___VEC0
___DEF_SUB_VEC(___X662,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(786644))
               ___VEC0
___DEF_SUB_VEC(___X663,2UL)
               ___VEC1(___REF_FIX(84))
               ___VEC1(___REF_SUB(664))
               ___VEC0
___DEF_SUB_VEC(___X664,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655559))
               ___VEC0
___DEF_SUB_VEC(___X665,4UL)
               ___VEC1(___REF_FIX(85))
               ___VEC1(___REF_SUB(666))
               ___VEC1(___REF_FIX(426000))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X666,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1376457))
               ___VEC0
___DEF_SUB_VEC(___X667,4UL)
               ___VEC1(___REF_FIX(86))
               ___VEC1(___REF_SUB(668))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X668,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1376457))
               ___VEC0
___DEF_SUB_VEC(___X669,5UL)
               ___VEC1(___REF_FIX(87))
               ___VEC1(___REF_SUB(670))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(131092))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X670,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1376458))
               ___VEC0
___DEF_SUB_VEC(___X671,2UL)
               ___VEC1(___REF_FIX(88))
               ___VEC1(___REF_SUB(672))
               ___VEC0
___DEF_SUB_VEC(___X672,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917714))
               ___VEC0
___DEF_SUB_VEC(___X673,2UL)
               ___VEC1(___REF_FIX(89))
               ___VEC1(___REF_SUB(674))
               ___VEC0
___DEF_SUB_VEC(___X674,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(917714))
               ___VEC0
___DEF_SUB_VEC(___X675,4UL)
               ___VEC1(___REF_FIX(90))
               ___VEC1(___REF_SUB(676))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X676,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1900746))
               ___VEC0
___DEF_SUB_VEC(___X677,3UL)
               ___VEC1(___REF_FIX(91))
               ___VEC1(___REF_SUB(678))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X678,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1048779))
               ___VEC0
___DEF_SUB_VEC(___X679,3UL)
               ___VEC1(___REF_FIX(92))
               ___VEC1(___REF_SUB(680))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X680,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1048779))
               ___VEC0
___DEF_SUB_VEC(___X681,3UL)
               ___VEC1(___REF_FIX(93))
               ___VEC1(___REF_SUB(682))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X682,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1048779))
               ___VEC0
___DEF_SUB_VEC(___X683,2UL)
               ___VEC1(___REF_FIX(94))
               ___VEC1(___REF_SUB(684))
               ___VEC0
___DEF_SUB_VEC(___X684,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1179856))
               ___VEC0
___DEF_SUB_VEC(___X685,3UL)
               ___VEC1(___REF_FIX(95))
               ___VEC1(___REF_SUB(686))
               ___VEC1(___REF_FIX(426006))
               ___VEC0
___DEF_SUB_VEC(___X686,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(5767377))
               ___VEC0
___DEF_SUB_VEC(___X687,3UL)
               ___VEC1(___REF_FIX(96))
               ___VEC1(___REF_SUB(688))
               ___VEC1(___REF_FIX(65558))
               ___VEC0
___DEF_SUB_VEC(___X688,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(5767377))
               ___VEC0
___DEF_SUB_VEC(___X689,3UL)
               ___VEC1(___REF_FIX(97))
               ___VEC1(___REF_SUB(690))
               ___VEC1(___REF_FIX(65558))
               ___VEC0
___DEF_SUB_VEC(___X690,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(12189905))
               ___VEC0
___DEF_SUB_VEC(___X691,2UL)
               ___VEC1(___REF_FIX(98))
               ___VEC1(___REF_SUB(692))
               ___VEC0
___DEF_SUB_VEC(___X692,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1835217))
               ___VEC0
___DEF_SUB_VEC(___X693,2UL)
               ___VEC1(___REF_FIX(99))
               ___VEC1(___REF_SUB(694))
               ___VEC0
___DEF_SUB_VEC(___X694,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1835217))
               ___VEC0
___DEF_SUB_VEC(___X695,2UL)
               ___VEC1(___REF_FIX(100))
               ___VEC1(___REF_SUB(696))
               ___VEC0
___DEF_SUB_VEC(___X696,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310929))
               ___VEC0
___DEF_SUB_VEC(___X697,2UL)
               ___VEC1(___REF_FIX(101))
               ___VEC1(___REF_SUB(698))
               ___VEC0
___DEF_SUB_VEC(___X698,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310929))
               ___VEC0
___DEF_SUB_VEC(___X699,2UL)
               ___VEC1(___REF_FIX(102))
               ___VEC1(___REF_SUB(700))
               ___VEC0
___DEF_SUB_VEC(___X700,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1179854))
               ___VEC0
___DEF_SUB_VEC(___X701,2UL)
               ___VEC1(___REF_FIX(103))
               ___VEC1(___REF_SUB(702))
               ___VEC0
___DEF_SUB_VEC(___X702,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1310927))
               ___VEC0
___DEF_SUB_VEC(___X703,2UL)
               ___VEC1(___REF_FIX(104))
               ___VEC1(___REF_SUB(704))
               ___VEC0
___DEF_SUB_VEC(___X704,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1179852))
               ___VEC0
___DEF_SUB_VEC(___X705,4UL)
               ___VEC1(___REF_FIX(105))
               ___VEC1(___REF_SUB(706))
               ___VEC1(___REF_FIX(98320))
               ___VEC1(___REF_FIX(65554))
               ___VEC0
___DEF_SUB_VEC(___X706,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(3080394))
               ___VEC0
___DEF_SUB_VEC(___X707,2UL)
               ___VEC1(___REF_FIX(106))
               ___VEC1(___REF_SUB(708))
               ___VEC0
___DEF_SUB_VEC(___X708,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(655557))
               ___VEC0
___DEF_SUB_VEC(___X709,2UL)
               ___VEC1(___REF_FIX(107))
               ___VEC1(___REF_SUB(710))
               ___VEC0
___DEF_SUB_VEC(___X710,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2097375))
               ___VEC0
___DEF_SUB_VEC(___X711,2UL)
               ___VEC1(___REF_FIX(108))
               ___VEC1(___REF_SUB(712))
               ___VEC0
___DEF_SUB_VEC(___X712,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(2097375))
               ___VEC0
___DEF_SUB_VEC(___X713,12UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC1(___REF_SYM(4,___S_address))
               ___VEC1(___REF_SYM(62,___S_service))
               ___VEC1(___REF_SYM(5,___S_alternate_2d_service))
               ___VEC1(___REF_CNS(5))
               ___VEC1(___REF_SYM(17,___S_exception))
               ___VEC1(___REF_SYM(44,___S_port))
               ___VEC1(___REF_CNS(6))
               ___VEC1(___REF_CNS(8))
               ___VEC1(___REF_SYM(16,___S_exc))
               ___VEC1(___REF_SYM(82,___S_temp_2e_39))
               ___VEC1(___REF_CNS(11))
               ___VEC0
___DEF_SUB_STR(___X714,28UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,115,111,99,107,101,116)
               ___STR8(45,105,110,102,111,32,102,97)
               ___STR4(105,108,101,100)
___DEF_SUB_VEC(___X715,2UL)
               ___VEC1(___REF_SUB(716))
               ___VEC1(___REF_SUB(731))
               ___VEC0
___DEF_SUB_VEC(___X716,7UL)
               ___VEC1(___REF_SUB(717))
               ___VEC1(___REF_SUB(719))
               ___VEC1(___REF_SUB(721))
               ___VEC1(___REF_SUB(723))
               ___VEC1(___REF_SUB(725))
               ___VEC1(___REF_SUB(727))
               ___VEC1(___REF_SUB(729))
               ___VEC0
___DEF_SUB_VEC(___X717,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(718))
               ___VEC0
___DEF_SUB_VEC(___X718,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131330))
               ___VEC0
___DEF_SUB_VEC(___X719,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(720))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X720,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1573123))
               ___VEC0
___DEF_SUB_VEC(___X721,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(722))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X722,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1573123))
               ___VEC0
___DEF_SUB_VEC(___X723,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(724))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X724,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1573123))
               ___VEC0
___DEF_SUB_VEC(___X725,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(726))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X726,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262403))
               ___VEC0
___DEF_SUB_VEC(___X727,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(728))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X728,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262403))
               ___VEC0
___DEF_SUB_VEC(___X729,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(730))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X730,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262403))
               ___VEC0
___DEF_SUB_VEC(___X731,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_STR(___X732,28UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,115,111,99,107,101,116)
               ___STR8(45,105,110,102,111,32,102,97)
               ___STR4(105,108,101,100)
___DEF_SUB_VEC(___X733,2UL)
               ___VEC1(___REF_SUB(734))
               ___VEC1(___REF_SUB(749))
               ___VEC0
___DEF_SUB_VEC(___X734,7UL)
               ___VEC1(___REF_SUB(735))
               ___VEC1(___REF_SUB(737))
               ___VEC1(___REF_SUB(739))
               ___VEC1(___REF_SUB(741))
               ___VEC1(___REF_SUB(743))
               ___VEC1(___REF_SUB(745))
               ___VEC1(___REF_SUB(747))
               ___VEC0
___DEF_SUB_VEC(___X735,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(736))
               ___VEC0
___DEF_SUB_VEC(___X736,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131334))
               ___VEC0
___DEF_SUB_VEC(___X737,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(738))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X738,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1573127))
               ___VEC0
___DEF_SUB_VEC(___X739,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(740))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X740,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1573127))
               ___VEC0
___DEF_SUB_VEC(___X741,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(742))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X742,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(1573127))
               ___VEC0
___DEF_SUB_VEC(___X743,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(744))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X744,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262407))
               ___VEC0
___DEF_SUB_VEC(___X745,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(746))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X746,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262407))
               ___VEC0
___DEF_SUB_VEC(___X747,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(748))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X748,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262407))
               ___VEC0
___DEF_SUB_VEC(___X749,1UL)
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X750,2UL)
               ___VEC1(___REF_SUB(751))
               ___VEC1(___REF_SUB(760))
               ___VEC0
___DEF_SUB_VEC(___X751,4UL)
               ___VEC1(___REF_SUB(752))
               ___VEC1(___REF_SUB(754))
               ___VEC1(___REF_SUB(756))
               ___VEC1(___REF_SUB(758))
               ___VEC0
___DEF_SUB_VEC(___X752,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(753))
               ___VEC0
___DEF_SUB_VEC(___X753,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131343))
               ___VEC0
___DEF_SUB_VEC(___X754,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(755))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X755,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262416))
               ___VEC0
___DEF_SUB_VEC(___X756,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(757))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X757,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262416))
               ___VEC0
___DEF_SUB_VEC(___X758,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(759))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X759,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262416))
               ___VEC0
___DEF_SUB_VEC(___X760,2UL)
               ___VEC1(___REF_SYM(44,___S_port))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X761,2UL)
               ___VEC1(___REF_SUB(762))
               ___VEC1(___REF_SUB(771))
               ___VEC0
___DEF_SUB_VEC(___X762,4UL)
               ___VEC1(___REF_SUB(763))
               ___VEC1(___REF_SUB(765))
               ___VEC1(___REF_SUB(767))
               ___VEC1(___REF_SUB(769))
               ___VEC0
___DEF_SUB_VEC(___X763,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(764))
               ___VEC0
___DEF_SUB_VEC(___X764,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131347))
               ___VEC0
___DEF_SUB_VEC(___X765,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(766))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X766,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262420))
               ___VEC0
___DEF_SUB_VEC(___X767,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(768))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X768,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262420))
               ___VEC0
___DEF_SUB_VEC(___X769,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(770))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X770,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(262420))
               ___VEC0
___DEF_SUB_VEC(___X771,2UL)
               ___VEC1(___REF_SYM(44,___S_port))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X772,2UL)
               ___VEC1(___REF_SUB(773))
               ___VEC1(___REF_SUB(782))
               ___VEC0
___DEF_SUB_VEC(___X773,4UL)
               ___VEC1(___REF_SUB(774))
               ___VEC1(___REF_SUB(776))
               ___VEC1(___REF_SUB(778))
               ___VEC1(___REF_SUB(780))
               ___VEC0
___DEF_SUB_VEC(___X774,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(775))
               ___VEC0
___DEF_SUB_VEC(___X775,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(131351))
               ___VEC0
___DEF_SUB_VEC(___X776,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(777))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X777,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393497))
               ___VEC0
___DEF_SUB_VEC(___X778,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(779))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X779,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393497))
               ___VEC0
___DEF_SUB_VEC(___X780,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(781))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X781,2UL)
               ___VEC1(___REF_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server))
               ___VEC1(___REF_FIX(393497))
               ___VEC0
___DEF_SUB_VEC(___X782,2UL)
               ___VEC1(___REF_SYM(44,___S_port))
               ___VEC1(___REF_SYM(50,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X783,5UL)
               ___VEC1(___REF_SYM(6,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server))
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
,___DEF_SUB(___X520)
,___DEF_SUB(___X521)
,___DEF_SUB(___X522)
,___DEF_SUB(___X523)
,___DEF_SUB(___X524)
,___DEF_SUB(___X525)
,___DEF_SUB(___X526)
,___DEF_SUB(___X527)
,___DEF_SUB(___X528)
,___DEF_SUB(___X529)
,___DEF_SUB(___X530)
,___DEF_SUB(___X531)
,___DEF_SUB(___X532)
,___DEF_SUB(___X533)
,___DEF_SUB(___X534)
,___DEF_SUB(___X535)
,___DEF_SUB(___X536)
,___DEF_SUB(___X537)
,___DEF_SUB(___X538)
,___DEF_SUB(___X539)
,___DEF_SUB(___X540)
,___DEF_SUB(___X541)
,___DEF_SUB(___X542)
,___DEF_SUB(___X543)
,___DEF_SUB(___X544)
,___DEF_SUB(___X545)
,___DEF_SUB(___X546)
,___DEF_SUB(___X547)
,___DEF_SUB(___X548)
,___DEF_SUB(___X549)
,___DEF_SUB(___X550)
,___DEF_SUB(___X551)
,___DEF_SUB(___X552)
,___DEF_SUB(___X553)
,___DEF_SUB(___X554)
,___DEF_SUB(___X555)
,___DEF_SUB(___X556)
,___DEF_SUB(___X557)
,___DEF_SUB(___X558)
,___DEF_SUB(___X559)
,___DEF_SUB(___X560)
,___DEF_SUB(___X561)
,___DEF_SUB(___X562)
,___DEF_SUB(___X563)
,___DEF_SUB(___X564)
,___DEF_SUB(___X565)
,___DEF_SUB(___X566)
,___DEF_SUB(___X567)
,___DEF_SUB(___X568)
,___DEF_SUB(___X569)
,___DEF_SUB(___X570)
,___DEF_SUB(___X571)
,___DEF_SUB(___X572)
,___DEF_SUB(___X573)
,___DEF_SUB(___X574)
,___DEF_SUB(___X575)
,___DEF_SUB(___X576)
,___DEF_SUB(___X577)
,___DEF_SUB(___X578)
,___DEF_SUB(___X579)
,___DEF_SUB(___X580)
,___DEF_SUB(___X581)
,___DEF_SUB(___X582)
,___DEF_SUB(___X583)
,___DEF_SUB(___X584)
,___DEF_SUB(___X585)
,___DEF_SUB(___X586)
,___DEF_SUB(___X587)
,___DEF_SUB(___X588)
,___DEF_SUB(___X589)
,___DEF_SUB(___X590)
,___DEF_SUB(___X591)
,___DEF_SUB(___X592)
,___DEF_SUB(___X593)
,___DEF_SUB(___X594)
,___DEF_SUB(___X595)
,___DEF_SUB(___X596)
,___DEF_SUB(___X597)
,___DEF_SUB(___X598)
,___DEF_SUB(___X599)
,___DEF_SUB(___X600)
,___DEF_SUB(___X601)
,___DEF_SUB(___X602)
,___DEF_SUB(___X603)
,___DEF_SUB(___X604)
,___DEF_SUB(___X605)
,___DEF_SUB(___X606)
,___DEF_SUB(___X607)
,___DEF_SUB(___X608)
,___DEF_SUB(___X609)
,___DEF_SUB(___X610)
,___DEF_SUB(___X611)
,___DEF_SUB(___X612)
,___DEF_SUB(___X613)
,___DEF_SUB(___X614)
,___DEF_SUB(___X615)
,___DEF_SUB(___X616)
,___DEF_SUB(___X617)
,___DEF_SUB(___X618)
,___DEF_SUB(___X619)
,___DEF_SUB(___X620)
,___DEF_SUB(___X621)
,___DEF_SUB(___X622)
,___DEF_SUB(___X623)
,___DEF_SUB(___X624)
,___DEF_SUB(___X625)
,___DEF_SUB(___X626)
,___DEF_SUB(___X627)
,___DEF_SUB(___X628)
,___DEF_SUB(___X629)
,___DEF_SUB(___X630)
,___DEF_SUB(___X631)
,___DEF_SUB(___X632)
,___DEF_SUB(___X633)
,___DEF_SUB(___X634)
,___DEF_SUB(___X635)
,___DEF_SUB(___X636)
,___DEF_SUB(___X637)
,___DEF_SUB(___X638)
,___DEF_SUB(___X639)
,___DEF_SUB(___X640)
,___DEF_SUB(___X641)
,___DEF_SUB(___X642)
,___DEF_SUB(___X643)
,___DEF_SUB(___X644)
,___DEF_SUB(___X645)
,___DEF_SUB(___X646)
,___DEF_SUB(___X647)
,___DEF_SUB(___X648)
,___DEF_SUB(___X649)
,___DEF_SUB(___X650)
,___DEF_SUB(___X651)
,___DEF_SUB(___X652)
,___DEF_SUB(___X653)
,___DEF_SUB(___X654)
,___DEF_SUB(___X655)
,___DEF_SUB(___X656)
,___DEF_SUB(___X657)
,___DEF_SUB(___X658)
,___DEF_SUB(___X659)
,___DEF_SUB(___X660)
,___DEF_SUB(___X661)
,___DEF_SUB(___X662)
,___DEF_SUB(___X663)
,___DEF_SUB(___X664)
,___DEF_SUB(___X665)
,___DEF_SUB(___X666)
,___DEF_SUB(___X667)
,___DEF_SUB(___X668)
,___DEF_SUB(___X669)
,___DEF_SUB(___X670)
,___DEF_SUB(___X671)
,___DEF_SUB(___X672)
,___DEF_SUB(___X673)
,___DEF_SUB(___X674)
,___DEF_SUB(___X675)
,___DEF_SUB(___X676)
,___DEF_SUB(___X677)
,___DEF_SUB(___X678)
,___DEF_SUB(___X679)
,___DEF_SUB(___X680)
,___DEF_SUB(___X681)
,___DEF_SUB(___X682)
,___DEF_SUB(___X683)
,___DEF_SUB(___X684)
,___DEF_SUB(___X685)
,___DEF_SUB(___X686)
,___DEF_SUB(___X687)
,___DEF_SUB(___X688)
,___DEF_SUB(___X689)
,___DEF_SUB(___X690)
,___DEF_SUB(___X691)
,___DEF_SUB(___X692)
,___DEF_SUB(___X693)
,___DEF_SUB(___X694)
,___DEF_SUB(___X695)
,___DEF_SUB(___X696)
,___DEF_SUB(___X697)
,___DEF_SUB(___X698)
,___DEF_SUB(___X699)
,___DEF_SUB(___X700)
,___DEF_SUB(___X701)
,___DEF_SUB(___X702)
,___DEF_SUB(___X703)
,___DEF_SUB(___X704)
,___DEF_SUB(___X705)
,___DEF_SUB(___X706)
,___DEF_SUB(___X707)
,___DEF_SUB(___X708)
,___DEF_SUB(___X709)
,___DEF_SUB(___X710)
,___DEF_SUB(___X711)
,___DEF_SUB(___X712)
,___DEF_SUB(___X713)
,___DEF_SUB(___X714)
,___DEF_SUB(___X715)
,___DEF_SUB(___X716)
,___DEF_SUB(___X717)
,___DEF_SUB(___X718)
,___DEF_SUB(___X719)
,___DEF_SUB(___X720)
,___DEF_SUB(___X721)
,___DEF_SUB(___X722)
,___DEF_SUB(___X723)
,___DEF_SUB(___X724)
,___DEF_SUB(___X725)
,___DEF_SUB(___X726)
,___DEF_SUB(___X727)
,___DEF_SUB(___X728)
,___DEF_SUB(___X729)
,___DEF_SUB(___X730)
,___DEF_SUB(___X731)
,___DEF_SUB(___X732)
,___DEF_SUB(___X733)
,___DEF_SUB(___X734)
,___DEF_SUB(___X735)
,___DEF_SUB(___X736)
,___DEF_SUB(___X737)
,___DEF_SUB(___X738)
,___DEF_SUB(___X739)
,___DEF_SUB(___X740)
,___DEF_SUB(___X741)
,___DEF_SUB(___X742)
,___DEF_SUB(___X743)
,___DEF_SUB(___X744)
,___DEF_SUB(___X745)
,___DEF_SUB(___X746)
,___DEF_SUB(___X747)
,___DEF_SUB(___X748)
,___DEF_SUB(___X749)
,___DEF_SUB(___X750)
,___DEF_SUB(___X751)
,___DEF_SUB(___X752)
,___DEF_SUB(___X753)
,___DEF_SUB(___X754)
,___DEF_SUB(___X755)
,___DEF_SUB(___X756)
,___DEF_SUB(___X757)
,___DEF_SUB(___X758)
,___DEF_SUB(___X759)
,___DEF_SUB(___X760)
,___DEF_SUB(___X761)
,___DEF_SUB(___X762)
,___DEF_SUB(___X763)
,___DEF_SUB(___X764)
,___DEF_SUB(___X765)
,___DEF_SUB(___X766)
,___DEF_SUB(___X767)
,___DEF_SUB(___X768)
,___DEF_SUB(___X769)
,___DEF_SUB(___X770)
,___DEF_SUB(___X771)
,___DEF_SUB(___X772)
,___DEF_SUB(___X773)
,___DEF_SUB(___X774)
,___DEF_SUB(___X775)
,___DEF_SUB(___X776)
,___DEF_SUB(___X777)
,___DEF_SUB(___X778)
,___DEF_SUB(___X779)
,___DEF_SUB(___X780)
,___DEF_SUB(___X781)
,___DEF_SUB(___X782)
,___DEF_SUB(___X783)
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L26_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L27_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L28_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L29_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L30_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L31_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L32_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L33_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L34_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L35_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L36_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L37_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L38_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L39_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L40_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L41_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L42_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L43_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L44_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L45_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L46_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L47_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L48_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L49_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L50_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L51_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L52_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L53_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L54_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L55_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L56_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L57_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L58_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L59_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L60_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L61_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L62_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L63_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L64_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L65_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L66_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L67_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L68_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L69_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L70_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L71_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L72_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L73_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L74_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L75_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L76_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L77_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L78_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL(___L79_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L13_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L14_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L15_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L16_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L17_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L18_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L19_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L20_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L21_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L22_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L23_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL(___L24_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L13_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L14_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L15_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L16_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L17_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L18_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L19_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L20_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L21_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L22_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L23_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L24_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L25_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L26_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L27_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L28_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L29_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L30_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L31_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L32_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L33_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L34_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L35_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L36_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L37_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L38_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L39_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L40_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L41_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L42_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L43_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L44_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L45_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L46_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L47_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L48_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L49_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L50_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L51_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L52_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L53_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L54_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L55_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L56_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L57_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L58_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L59_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L60_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L61_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L62_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L63_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L64_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L65_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L66_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L67_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L68_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L69_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L70_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L71_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L72_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L73_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L74_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L75_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L76_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L77_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L78_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L79_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L80_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L81_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L82_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L83_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L84_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L85_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L86_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L87_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L88_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L89_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L90_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L91_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L92_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L93_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L94_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L95_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L96_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L97_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L98_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L99_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L100_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L101_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L102_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L103_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L104_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L105_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L106_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L107_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL(___L108_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___DEF_M_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___DEF_M_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___DEF_M_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L26_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L27_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L28_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L29_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L30_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L31_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L32_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L33_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L34_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L35_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L36_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L37_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L38_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L39_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L40_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L41_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L42_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L43_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L44_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L45_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L46_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L47_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L48_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L49_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L50_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L51_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L52_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L53_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L54_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L55_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L56_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L57_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L58_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L59_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L60_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L61_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L62_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L63_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L64_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L65_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L66_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L67_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L68_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L69_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L70_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L71_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L72_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L73_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L74_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L75_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L76_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L77_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L78_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_P_HLBL(___L79_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),141,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),141,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___SYM_jazz_2e_network)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),141,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___SYM_jazz_2e_version)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),141,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),144,___G_jazz_3a_register_2d_module)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),76)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(100,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload,___STK(-2))
   ___SET_R1(___BOX(___FAL))
   ___SET_STK(-2,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-2),72)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_GLO(101,___G_jazz_2e_version_3a_construct_2d_version_3a_autoload,___STK(-2))
   ___SET_R0(___LBL(8))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___JUMPGLOSAFE(___SET_NARGS(0),101,___G_jazz_2e_version_3a_construct_2d_version_3a_autoload)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R3(___FIX(0L))
   ___SET_R2(___FIX(0L))
   ___SET_STK(-2,___R1)
   ___SET_R1(___FIX(1L))
   ___SET_R0(___LBL(9))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-2))
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(102,___G_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1,___R1)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),139,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L83_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
   ___SET_R0(___LBL(11))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),142,___G_jazz_3a_new_2d_class)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___GOTO(___L80_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_GLBL(___L80_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(98,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class,___FIX(11L)))
   ___SET_GLO(99,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(1),139,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L82_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
   ___SET_R0(___LBL(14))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(0),100,___G_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_autoload)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R3(___CONS(___R1,___NUL))
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(16))
   ___ADJFP(-3)
   ___CHECK_HEAP(15,4096)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___JUMPGLOSAFE(___SET_NARGS(4),142,___G_jazz_3a_new_2d_class)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___GOTO(___L81_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_GLBL(___L81_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(1,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_name)
   ___SET_R0(___LBL(18))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(43,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_slot,___FIX(2L)))
   ___SET_GLO(42,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset,___R1)
   ___SET_GLO(26,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name,___PRC(82))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
   ___SET_R2(___SYM_get_2d_name)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_host)
   ___SET_R0(___LBL(20))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(37,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_slot,___FIX(2L)))
   ___SET_GLO(36,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset,___R1)
   ___SET_GLO(25,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host,___PRC(84))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
   ___SET_R2(___SYM_get_2d_host)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_service)
   ___SET_R0(___LBL(22))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(75,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_slot,___FIX(2L)))
   ___SET_GLO(74,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset,___R1)
   ___SET_GLO(29,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service,___PRC(86))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
   ___SET_R2(___SYM_get_2d_service)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_alternate_2d_service)
   ___SET_R0(___LBL(24))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(6,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_slot,___FIX(2L)))
   ___SET_GLO(5,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset,___R1)
   ___SET_GLO(22,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service,___PRC(88))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
   ___SET_R2(___SYM_get_2d_alternate_2d_service)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_socket_2d_info)
   ___SET_R0(___LBL(26))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(26,___L26_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(81,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_slot,___FIX(2L)))
   ___SET_GLO(80,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset,___R1)
   ___SET_GLO(30,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info,___PRC(90))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
   ___SET_R2(___SYM_get_2d_socket_2d_info)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(27,___L27_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(63,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize,___PRC(92))
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
   ___SET_R1(___SYM_server_2d_port)
   ___SET_R0(___LBL(28))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(28,___L28_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(65,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_slot,___FIX(2L)))
   ___SET_GLO(64,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset,___R1)
   ___SET_GLO(28,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port,___PRC(94))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
   ___SET_R2(___SYM_get_2d_server_2d_port)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(29))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(29,___L29_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(78,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port,___PRC(96))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
   ___SET_R2(___SYM_set_2d_server_2d_port)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(30))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(30,___L30_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_server_2d_thread)
   ___SET_R0(___LBL(31))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(31,___L31_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(69,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_slot,___FIX(2L)))
   ___SET_GLO(68,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset,___R1)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_started_2d_mutex)
   ___SET_R0(___LBL(32))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(32,___L32_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(86,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_slot,___FIX(2L)))
   ___SET_GLO(85,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset,___R1)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_stopped_2d_mutex)
   ___SET_R0(___LBL(33))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(33,___L33_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(93,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_slot,___FIX(2L)))
   ___SET_GLO(92,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset,___R1)
   ___SET_GLO(87,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize,___PRC(98))
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
   ___SET_R1(___SYM_state)
   ___SET_R0(___LBL(34))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(34,___L34_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(89,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_slot,___FIX(2L)))
   ___SET_GLO(88,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset,___R1)
   ___SET_GLO(33,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize,___PRC(100))
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
   ___SET_R1(___SYM_hits)
   ___SET_R0(___LBL(35))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(35,___L35_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(35,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_slot,___FIX(2L)))
   ___SET_GLO(34,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset,___R1)
   ___SET_GLO(24,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits,___PRC(102))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
   ___SET_R2(___SYM_get_2d_hits)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(36))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(36,___L36_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_debug_3f_)
   ___SET_R0(___LBL(37))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(37,___L37_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(19,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_slot,___FIX(2L)))
   ___SET_GLO(18,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset,___R1)
   ___SET_GLO(23,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_,___PRC(104))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
   ___SET_R2(___SYM_get_2d_debug_3f_)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(38))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(38,___L38_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(76,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_,___PRC(106))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
   ___SET_R2(___SYM_set_2d_debug_3f_)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(39))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(39,___L39_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(48,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize,___PRC(108))
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
   ___SET_R1(___SYM_reuse_2d_address_3f_)
   ___SET_R0(___LBL(40))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(40,___L40_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(50,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_slot,___FIX(2L)))
   ___SET_GLO(49,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset,___R1)
   ___SET_GLO(27,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_,___PRC(110))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
   ___SET_R2(___SYM_get_2d_reuse_2d_address_3f_)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(41))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(41,___L41_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(77,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_,___PRC(112))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
   ___SET_R2(___SYM_set_2d_reuse_2d_address_3f_)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(42))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(42,___L42_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(9,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize,___PRC(114))
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R3(___TRU)
   ___SET_R2(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
   ___SET_R1(___SYM_connection_2d_handler)
   ___SET_R0(___LBL(43))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),136,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(43,___L43_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(11,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_slot,___FIX(2L)))
   ___SET_GLO(10,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset,___R1)
   ___SET_GLO(38,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___PRC(116))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(44))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(44,___L44_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(39,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node,___R1)
   ___SET_GLO(20,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,___PRC(142))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___SET_R2(___SYM_destroy)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(45))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(45,___L45_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(21,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node,___R1)
   ___SET_GLO(31,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state,___PRC(149))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
   ___SET_R2(___SYM_get_2d_state)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(46))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(46,___L46_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(32,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state_21_node,___R1)
   ___SET_GLO(79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state,___PRC(151))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
   ___SET_R2(___SYM_set_2d_state)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(47))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(47,___L47_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(16,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread,___PRC(153))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
   ___SET_R2(___SYM_create_2d_thread)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(48))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(48,___L48_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(17,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank,___R1)
   ___SET_GLO(82,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___PRC(156))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_R2(___SYM_start)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(49))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(49,___L49_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(83,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_21_node,___R1)
   ___SET_GLO(90,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___PRC(165))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_R2(___SYM_stop)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(50))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(50,___L50_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(91,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop_21_node,___R1)
   ___SET_GLO(46,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___PRC(175))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R2(___SYM_restart)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(51))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(51,___L51_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(47,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart_21_node,___R1)
   ___SET_GLO(94,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,___PRC(185))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___SET_R2(___SYM_wait_2d_started)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(52))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(52,___L52_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(95,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started_21_node,___R1)
   ___SET_GLO(96,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,___PRC(191))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___SET_R2(___SYM_wait_2d_stopped)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(53))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(53,___L53_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(97,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped_21_node,___R1)
   ___SET_GLO(61,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name,___PRC(197))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
   ___SET_R2(___SYM_server_2d_name)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(54))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(54,___L54_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(62,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name_21_node,___R1)
   ___SET_GLO(70,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___PRC(199))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___SET_R2(___SYM_server_2d_title)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(55))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(55,___L55_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(71,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title_21_node,___R1)
   ___SET_GLO(72,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version,___PRC(207))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
   ___SET_R2(___SYM_server_2d_version)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(56))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(56,___L56_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(73,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version_21_node,___R1)
   ___SET_GLO(59,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host,___PRC(209))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
   ___SET_R2(___SYM_server_2d_host)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(57))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(57,___L57_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(60,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host_21_node,___R1)
   ___SET_GLO(66,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service,___PRC(211))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
   ___SET_R2(___SYM_server_2d_service)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(58))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(58,___L58_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(67,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service_21_node,___R1)
   ___SET_GLO(51,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service,___PRC(213))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
   ___SET_R2(___SYM_server_2d_alternate_2d_service)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(59))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(59,___L59_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(52,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service_21_node,___R1)
   ___SET_GLO(57,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits,___PRC(215))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
   ___SET_R2(___SYM_server_2d_hits)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(60))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(60,___L60_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(58,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits_21_node,___R1)
   ___SET_GLO(53,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_,___PRC(217))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
   ___SET_R2(___SYM_server_2d_debug_3f_)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(61))
   ___JUMPGLOSAFE(___SET_NARGS(3),135,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(61,___L61_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(54,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f__21_node,___R1)
   ___SET_GLO(55,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit,___PRC(219))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___SET_R2(___SYM_server_2d_hit)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(62))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(62,___L62_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(56,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank,___R1)
   ___SET_GLO(12,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name,___PRC(223))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
   ___SET_R2(___SYM_connection_2d_name)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(63))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(63,___L63_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(13,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank,___R1)
   ___SET_GLO(14,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable,___PRC(225))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
   ___SET_R2(___SYM_connection_2d_readtable)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(64))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(64,___L64_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(15,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank,___R1)
   ___SET_GLO(84,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___PRC(227))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R2(___SYM_start_2d_listener)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(65))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(65,___L65_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(40,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___PRC(337))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___SET_R2(___SYM_listening_2d_host)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(66))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(66,___L66_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(41,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___PRC(345))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___SET_R2(___SYM_listening_2d_port)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(67))
   ___JUMPGLOSAFE(___SET_NARGS(3),134,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(67,___L67_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(3,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection,___PRC(353))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
   ___SET_R2(___SYM_accept_2d_connection)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(68))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(68,___L68_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(4,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank,___R1)
   ___SET_GLO(7,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection,___PRC(358))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
   ___SET_R2(___SYM_close_2d_connection)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(69))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(69,___L69_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(8,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank,___R1)
   ___SET_GLO(44,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection,___PRC(363))
   ___SET_R3(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___SET_R2(___SYM_process_2d_connection)
   ___SET_R1(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(70))
   ___JUMPGLOSAFE(___SET_NARGS(3),137,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(70,___L70_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_GLO(45,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank,___R1)
   ___SET_R1(___VOID)
   ___POLL(71)
___DEF_SLBL(71,___L71_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L82_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(1),140,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L83_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),140,___G_jazz_3a_global_2d_ref)
___DEF_SLBL(72,___L72_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(72,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L84_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___END_IF
   ___GOTO(___L85_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_SLBL(73,___L73_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L84_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___GLO_jazz_2e_version_3a_construct_2d_version)
   ___POLL(74)
___DEF_SLBL(74,___L74_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L85_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_version)
   ___ADJFP(8)
   ___POLL(75)
___DEF_SLBL(75,___L75_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R0(___LBL(73))
   ___JUMPGLOSAFE(___SET_NARGS(1),141,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(76,___L76_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(76,0,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOTFALSEP(___UNBOX(___R3)))
   ___GOTO(___L86_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___END_IF
   ___GOTO(___L87_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
___DEF_SLBL(77,___L77_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SETBOX(___R0,___TRU)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L86_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___POLL(78)
___DEF_SLBL(78,___L78_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L87_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___SYM_jazz_2e_network_2e_server_2e_Server_2d_Interface)
   ___ADJFP(8)
   ___POLL(79)
___DEF_SLBL(79,___L79_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_)
   ___SET_R0(___LBL(77))
   ___JUMPGLOSAFE(___SET_NARGS(1),141,___G_jazz_3a_load_2d_unit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 82
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host
#undef ___PH_LBL0
#define ___PH_LBL0 84
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service
#undef ___PH_LBL0
#define ___PH_LBL0 86
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service
#undef ___PH_LBL0
#define ___PH_LBL0 88
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info
#undef ___PH_LBL0
#define ___PH_LBL0 90
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 92
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 94
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 96
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port)
   ___VECTORSET(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 98
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize)
   ___SET_R1(___SYM_stopped)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 100
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize)
   ___SET_R1(___FIX(0L))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits
#undef ___PH_LBL0
#define ___PH_LBL0 102
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 104
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 106
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_)
   ___VECTORSET(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 108
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 110
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 112
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_)
   ___VECTORSET(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 114
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 116
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L13_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L14_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L15_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L16_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L17_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L18_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L19_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L20_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L21_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L22_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L23_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_P_HLBL(___L24_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),113,___G_jazz_2e_language_2e_runtime_2e_functional_3a_box_2d_list)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-3,___R1)
   ___SET_STK(1,___KEY_name)
   ___SET_R2(___LBL(24))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(3))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-2,___R1)
   ___SET_STK(5,___KEY_host)
   ___SET_R2(___LBL(23))
   ___SET_R1(___STK(-3))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(4))
   ___ADJFP(5)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-5,___R1)
   ___SET_STK(1,___KEY_service)
   ___SET_R2(___LBL(22))
   ___SET_R1(___STK(-7))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-4,___R1)
   ___SET_STK(1,___KEY_alternate_2d_service)
   ___SET_R2(___LBL(21))
   ___SET_R1(___STK(-7))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-3,___R1)
   ___SET_STK(1,___KEY_debug_3f_)
   ___SET_R2(___LBL(20))
   ___SET_R1(___STK(-7))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(7,___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-2,___R1)
   ___SET_STK(5,___KEY_reuse_2d_address_3f_)
   ___SET_R2(___LBL(19))
   ___SET_R1(___STK(-7))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(8))
   ___ADJFP(5)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(8,___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-5,___R1)
   ___SET_STK(1,___KEY_connection_2d_handler)
   ___SET_R2(___LBL(18))
   ___SET_R1(___STK(-11))
   ___SET_R3(___FAL)
   ___SET_R0(___LBL(9))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),115,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find_2d_keyword)
___DEF_SLBL(9,___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-11))
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),117,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
___DEF_SLBL(10,___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),143,___G_jazz_3a_not_2d_null_3f_)
___DEF_SLBL(11,___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L25_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___END_IF
   ___SET_R1(___STK(-11))
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),117,___G_jazz_2e_language_2e_runtime_2e_functional_3a_unbox_2d_list)
___DEF_SLBL(12,___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(248))
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(2),110,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(13,___L13_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
___DEF_GLBL(___L25_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___SET_R1(___STK(-14))
   ___SET_R0(___LBL(14))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-12))
___DEF_SLBL(14,___L14_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset,___STK(-10))
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset,___STK(-9))
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset,___STK(-8))
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset,___STK(-7))
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset,___FAL)
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset,___FAL)
   ___SET_R1(___SYM_started)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),147,___G_make_2d_mutex)
___DEF_SLBL(15,___L15_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset,___R1)
   ___SET_R1(___SYM_stopped)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(1),147,___G_make_2d_mutex)
___DEF_SLBL(16,___L16_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset,___R1)
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset,___STK(-6))
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset,___STK(-5))
   ___VECTORSET(___STK(-14),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset,___STK(-4)) ___SET_R1(___STK(-14))
   ___POLL(17)
___DEF_SLBL(17,___L17_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___ADJFP(-16)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(18,___L18_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(18,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(19,___L19_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(19,0,0,0)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(20,___L20_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(20,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(21,___L21_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(21,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(22,___L22_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(22,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(23,___L23_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(23,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(24,___L24_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(24,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy
#undef ___PH_LBL0
#define ___PH_LBL0 142
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy_21_node,___FIX(4L)))
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))))
   ___GOTO(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),106,___G_close_2d_port)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state
#undef ___PH_LBL0
#define ___PH_LBL0 149
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state
#undef ___PH_LBL0
#define ___PH_LBL0 151
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
   ___VECTORSET(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_offset,___R2) ___SET_R3(___R1)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread
#undef ___PH_LBL0
#define ___PH_LBL0 153
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_new_2d_thread)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_apply)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start
#undef ___PH_LBL0
#define ___PH_LBL0 156
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_P_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_starting)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),84,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
___DEF_GLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_started_21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(6))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop
#undef ___PH_LBL0
#define ___PH_LBL0 165
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_P_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM_stopping)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___IF(___NOTFALSEP(___VECTORREF(___STK(-6),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset)))
   ___GOTO(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_R1(___VECTORREF(___STK(-6),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),114,___G_jazz_2e_language_2e_runtime_2e_functional_3a_exit_2d_thread)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___SET_R0(___LBL(5))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
___DEF_GLBL(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_wait_2d_stopped_21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(7))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(7,___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___VECTORSET(___STK(-6),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset,___FAL) ___SET_R1(___STK(-6))
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart
#undef ___PH_LBL0
#define ___PH_LBL0 175
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_P_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_GLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_stop_21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___SET_R0(___LBL(5))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
___DEF_GLBL(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_start_21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(7))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(7,___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___DEF_GLBL(___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started
#undef ___PH_LBL0
#define ___PH_LBL0 185
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),148,___G_mutex_2d_lock_21_)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___SET_R1(___VECTORREF(___STK(-6),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),149,___G_mutex_2d_unlock_21_)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped
#undef ___PH_LBL0
#define ___PH_LBL0 191
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),148,___G_mutex_2d_lock_21_)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___SET_R1(___VECTORREF(___STK(-6),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),149,___G_mutex_2d_unlock_21_)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 197
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_name_21_offset))
   ___SET_STK(1,___R1)
   ___SET_R1(___R2)
   ___ADJFP(1)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
   ___END_IF
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name)
   ___SET_R1(___SYM_tcp_2d_server)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title
#undef ___PH_LBL0
#define ___PH_LBL0 199
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
___DEF_GLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),112,___G_jazz_2e_language_2e_runtime_2e_functional_3a__2d__3e_string)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version
#undef ___PH_LBL0
#define ___PH_LBL0 207
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version)
   ___SET_R1(___GLO_jazz_2f_network_2f_host_2f_TCP_2d_Server__lit_5e_1)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host
#undef ___PH_LBL0
#define ___PH_LBL0 209
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_host_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service
#undef ___PH_LBL0
#define ___PH_LBL0 211
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_service_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service
#undef ___PH_LBL0
#define ___PH_LBL0 213
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_alternate_2d_service_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits
#undef ___PH_LBL0
#define ___PH_LBL0 215
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 217
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_debug_3f__21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit
#undef ___PH_LBL0
#define ___PH_LBL0 219
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset))
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___END_IF
   ___SET_R3(___FIXADDP(___R2,___FIX(1L)))
   ___IF(___NOT(___NOTFALSEP(___R3)))
   ___GOTO(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___END_IF
   ___SET_STK(1,___R3)
   ___ADJFP(1)
   ___GOTO(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___SET_STK(-7,___STK(-4))
   ___ADJFP(-7)
___DEF_GLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___VECTORSET(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_offset,___R3) ___SET_R2(___R1)
   ___SET_R1(___R2)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM__2b_)
___DEF_GLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM__2b_)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-7)
   ___GOTO(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 223
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name)
   ___SET_R1(___SYM_tcp_2d_connection)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable
#undef ___PH_LBL0
#define ___PH_LBL0 225
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable)
   ___SET_R1(___GLO_jazz_3a_scheme_2d_readtable)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener
#undef ___PH_LBL0
#define ___PH_LBL0 227
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L13_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L14_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L15_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L16_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L17_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L18_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L19_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L20_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L21_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L22_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L23_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L24_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L25_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L26_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L27_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L28_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L29_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L30_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L31_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L32_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L33_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L34_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L35_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L36_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L37_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L38_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L39_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L40_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L41_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L42_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L43_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L44_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L45_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L46_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L47_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L48_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L49_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L50_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L51_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L52_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L53_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L54_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L55_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L56_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L57_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L58_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L59_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L60_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L61_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L62_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L63_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L64_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L65_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L66_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L67_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L68_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L69_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L70_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L71_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L72_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L73_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L74_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L75_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L76_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L77_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L78_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L79_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L80_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L81_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L82_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L83_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L84_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L85_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L86_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L87_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L88_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L89_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L90_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L91_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L92_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L93_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L94_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L95_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L96_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L97_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L98_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L99_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L100_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L101_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L102_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L103_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L104_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L105_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L106_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L107_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_P_HLBL(___L108_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L124_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L109_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_GLBL(___L109_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_host_21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),129,___G_jazz_2e_network_3a_resolve_2d_host)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-5,___R1)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___SET_R0(___LBL(6))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L123_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L110_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(7,___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_GLBL(___L110_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_service_21_rank))
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(8))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-4))
___DEF_SLBL(8,___L8_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-4,___R1)
   ___SET_R2(___STK(-6))
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___SET_R0(___LBL(9))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(9,___L9_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L122_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___GOTO(___L111_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(10,___L10_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_GLBL(___L111_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_alternate_2d_service_21_rank))
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(11))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-3))
___DEF_SLBL(11,___L11_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-3,___R1)
   ___SET_STK(-2,___ALLOC_CLO(4UL))
   ___BEGIN_SETUP_CLO(4,___STK(-2),70)
   ___ADD_CLO_ELEM(0,___STK(-5))
   ___ADD_CLO_ELEM(1,___R1)
   ___ADD_CLO_ELEM(2,___STK(-6))
   ___ADD_CLO_ELEM(3,___STK(-4))
   ___END_SETUP_CLO(4)
   ___SET_STK(-1,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-1),15)
   ___ADD_CLO_ELEM(0,___STK(-6))
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(-1))
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(13))
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGLOSAFE(___SET_NARGS(2),103,___G__23__23_call_2d_with_2d_values)
___DEF_SLBL(13,___L13_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(14)
___DEF_SLBL(14,___L14_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(15,___L15_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(15,2,0,0)
   ___IF(___NOT(___NOTFALSEP(___R2)))
   ___GOTO(___L113_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))))
   ___GOTO(___L112_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R4)
   ___SET_R0(___CLO(___R4,1))
   ___SET_R1(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))
   ___ADJFP(8)
   ___POLL(16)
___DEF_SLBL(16,___L16_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(1),106,___G_close_2d_port)
___DEF_SLBL(17,___L17_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R4(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L112_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R2(___SYM_stopped)
   ___ADJFP(8)
   ___POLL(18)
___DEF_SLBL(18,___L18_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(2),79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___DEF_SLBL(19,___L19_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-4),1))
   ___VECTORSET(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset,___FAL)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(1),111,___G_jazz_2e_language_2e_runtime_2e_exception_3a_throw)
___DEF_SLBL(20,___L20_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(21)
___DEF_SLBL(21,___L21_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L113_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R3(___CLO(___R4,1))
   ___VECTORSET(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset,___R1)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R4)
   ___SET_R0(___CLO(___R4,1))
   ___SET_R1(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))
   ___ADJFP(8)
   ___POLL(22)
___DEF_SLBL(22,___L22_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(1),156,___G_tcp_2d_server_2d_socket_2d_info)
___DEF_SLBL(23,___L23_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-4),1))
   ___VECTORSET(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset,___R1)
   ___SET_R1(___CLO(___STK(-4),1))
   ___SET_R2(___SYM_started)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(2),79,___G_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state)
___DEF_SLBL(24,___L24_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-4),1))
   ___SET_R1(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset))
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(1),148,___G_mutex_2d_lock_21_)
___DEF_SLBL(25,___L25_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-3),33)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-4),1))
   ___END_SETUP_CLO(1)
   ___SET_R2(___CLO(___STK(-4),1))
   ___SET_R1(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_21_core_2d_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_3a_Type_5e_of_2d_type_3f__21_rank))
   ___SET_R0(___LBL(27))
   ___CHECK_HEAP(26,4096)
___DEF_SLBL(26,___L26_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(27,___L27_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L115_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_R1(___CLO(___STK(-4),1))
   ___GOTO(___L114_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(28,___L28_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_GLBL(___L114_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_21_rank))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_server_2e_Server_2d_Interface_3a_Server_2d_Interface_3a_server_2d_name_21_rank))
   ___SET_STK(-2,___R1)
   ___SET_R1(___CLO(___STK(-4),1))
   ___SET_R0(___LBL(29))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(29,___L29_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R3(___R1)
   ___SET_R1(___CLO(___STK(-4),1))
   ___SET_R0(___CLO(___STK(-4),1))
   ___SET_R2(___VECTORREF(___R0,___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank))
   ___SET_STK(-2,___R2)
   ___SET_R2(___STK(-3))
   ___SET_R0(___LBL(30))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-2))
___DEF_SLBL(30,___L30_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(31))
   ___JUMPGLOSAFE(___SET_NARGS(1),157,___G_thread_2d_start_21_)
___DEF_SLBL(31,___L31_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-4),1))
   ___VECTORSET(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_thread_21_offset,___R1) ___SET_R1(___R0)
   ___POLL(32)
___DEF_SLBL(32,___L32_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L115_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___CLO(___STK(-4),1))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___DEF_SLBL(33,___L33_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(33,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R0(___CLO(___R4,1))
   ___SET_R1(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_started_2d_mutex_21_offset))
   ___ADJFP(8)
   ___POLL(34)
___DEF_SLBL(34,___L34_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(35))
   ___JUMPGLOSAFE(___SET_NARGS(1),149,___G_mutex_2d_unlock_21_)
___DEF_SLBL(35,___L35_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-6),1))
   ___SET_R1(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset))
   ___SET_R0(___LBL(36))
   ___JUMPGLOSAFE(___SET_NARGS(1),148,___G_mutex_2d_lock_21_)
___DEF_SLBL(36,___L36_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-5,___LBL(69))
   ___SET_STK(-4,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-4),41)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-6),1))
   ___END_SETUP_CLO(1)
   ___SET_STK(-3,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(-3),39)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-6),1))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(-3))
   ___SET_R0(___STK(-7))
   ___SET_R2(___STK(-4))
   ___SET_R1(___STK(-5))
   ___ADJFP(-3)
   ___CHECK_HEAP(37,4096)
___DEF_SLBL(37,___L37_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(38)
___DEF_SLBL(38,___L38_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-5)
   ___JUMPPRM(___SET_NARGS(3),___PRM_dynamic_2d_wind)
___DEF_SLBL(39,___L39_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(39,0,0,0)
   ___SET_R4(___CLO(___R4,1))
   ___SET_R1(___VECTORREF(___R4,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stopped_2d_mutex_21_offset))
   ___POLL(40)
___DEF_SLBL(40,___L40_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGLOSAFE(___SET_NARGS(1),149,___G_mutex_2d_unlock_21_)
___DEF_SLBL(41,___L41_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(41,0,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(42)
___DEF_SLBL(42,___L42_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___GOTO(___L116_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(43,___L43_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(44)
___DEF_SLBL(44,___L44_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_GLBL(___L116_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_offset))
   ___SET_R0(___LBL(45))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_read)
___DEF_SLBL(45,___L45_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R2(___VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit_21_rank))
   ___POLL(46)
___DEF_SLBL(46,___L46_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(47))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(47,___L47_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-4,___ALLOC_CLO(2UL))
   ___BEGIN_SETUP_CLO(2,___STK(-4),51)
   ___ADD_CLO_ELEM(0,___STK(-5))
   ___ADD_CLO_ELEM(1,___STK(-6))
   ___END_SETUP_CLO(2)
   ___SET_R1(___STK(-6))
   ___SET_R2(___VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name_21_rank))
   ___SET_R0(___LBL(49))
   ___CHECK_HEAP(48,4096)
___DEF_SLBL(48,___L48_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(49,___L49_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-6))
   ___SET_R2(___VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread_21_rank))
   ___SET_STK(-3,___R2)
   ___SET_R2(___STK(-4))
   ___SET_R0(___LBL(50))
   ___JUMPGENSAFE(___SET_NARGS(3),___STK(-3))
___DEF_SLBL(50,___L50_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(43))
   ___JUMPGLOSAFE(___SET_NARGS(1),157,___G_thread_2d_start_21_)
___DEF_SLBL(51,___L51_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(51,0,0,0)
   ___SET_STK(1,___LBL(68))
   ___SET_STK(2,___ALLOC_CLO(2UL))
   ___BEGIN_SETUP_CLO(2,___STK(2),66)
   ___ADD_CLO_ELEM(0,___CLO(___R4,1))
   ___ADD_CLO_ELEM(1,___CLO(___R4,2))
   ___END_SETUP_CLO(2)
   ___SET_STK(3,___ALLOC_CLO(2UL))
   ___BEGIN_SETUP_CLO(2,___STK(3),54)
   ___ADD_CLO_ELEM(0,___CLO(___R4,1))
   ___ADD_CLO_ELEM(1,___CLO(___R4,2))
   ___END_SETUP_CLO(2)
   ___SET_R3(___STK(3))
   ___SET_R2(___STK(2))
   ___SET_R1(___STK(1))
   ___ADJFP(3)
   ___CHECK_HEAP(52,4096)
___DEF_SLBL(52,___L52_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(53)
___DEF_SLBL(53,___L53_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-3)
   ___JUMPPRM(___SET_NARGS(3),___PRM_dynamic_2d_wind)
___DEF_SLBL(54,___L54_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(54,0,0,0)
   ___SET_R2(___CLO(___R4,1))
   ___SET_R1(___CLO(___R4,2))
   ___POLL(55)
___DEF_SLBL(55,___L55_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___LBL(65))
   ___SET_STK(5,___LBL(64))
   ___SET_STK(6,___ALLOC_CLO(2UL))
   ___BEGIN_SETUP_CLO(2,___STK(6),60)
   ___ADD_CLO_ELEM(0,___R2)
   ___ADD_CLO_ELEM(1,___R1)
   ___END_SETUP_CLO(2)
   ___SET_R3(___STK(6))
   ___SET_R2(___STK(5))
   ___SET_R1(___STK(4))
   ___ADJFP(8)
   ___CHECK_HEAP(56,4096)
___DEF_SLBL(56,___L56_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(57)
___DEF_SLBL(57,___L57_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(58))
   ___JUMPGLOSAFE(___SET_NARGS(3),138,___G_jazz_3a_catch_2d_exception_2d_filter)
___DEF_SLBL(58,___L58_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(59)
___DEF_SLBL(59,___L59_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(60,___L60_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(60,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_R2(___CLO(___R4,1))
   ___SET_R1(___CLO(___R4,2))
   ___SET_R0(___CLO(___R4,2))
   ___SET_R3(___VECTORREF(___R0,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection_21_rank))
   ___ADJFP(4)
   ___POLL(61)
___DEF_SLBL(61,___L61_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(62))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(62,___L62_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(63)
___DEF_SLBL(63,___L63_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(64,___L64_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(64,1,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(65,___L65_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(65,1,0,0)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(66,___L66_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(66,0,0,0)
   ___SET_R2(___CLO(___R4,1))
   ___SET_R1(___CLO(___R4,2))
   ___SET_R4(___CLO(___R4,2))
   ___SET_R3(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection_21_rank))
   ___POLL(67)
___DEF_SLBL(67,___L67_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(68,___L68_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(68,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(69,___L69_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(69,0,0,0)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(70,___L70_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(70,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(5,___CLO(___R4,3))
   ___SET_R3(___CLO(___R4,1))
   ___SET_R2(___CLO(___R4,4))
   ___SET_R1(___CLO(___R4,2))
   ___SET_R0(___LBL(107))
   ___ADJFP(5)
   ___POLL(71)
___DEF_SLBL(71,___L71_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___LBL(106))
   ___SET_STK(6,___ALLOC_CLO(3UL))
   ___BEGIN_SETUP_CLO(3,___STK(6),84)
   ___ADD_CLO_ELEM(0,___R3)
   ___ADD_CLO_ELEM(1,___R1)
   ___ADD_CLO_ELEM(2,___STK(0))
   ___END_SETUP_CLO(3)
   ___SET_STK(7,___ALLOC_CLO(3UL))
   ___BEGIN_SETUP_CLO(3,___STK(7),76)
   ___ADD_CLO_ELEM(0,___R3)
   ___ADD_CLO_ELEM(1,___STK(0))
   ___ADD_CLO_ELEM(2,___R2)
   ___END_SETUP_CLO(3)
   ___SET_R3(___STK(7))
   ___SET_R2(___STK(6))
   ___SET_R1(___STK(5))
   ___ADJFP(7)
   ___CHECK_HEAP(72,4096)
___DEF_SLBL(72,___L72_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(73)
___DEF_SLBL(73,___L73_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(74))
   ___JUMPGLOSAFE(___SET_NARGS(3),138,___G_jazz_3a_catch_2d_exception_2d_filter)
___DEF_SLBL(74,___L74_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(75)
___DEF_SLBL(75,___L75_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_SLBL(76,___L76_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(76,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___CLO(___R4,3))
   ___ADJFP(8)
   ___POLL(77)
___DEF_SLBL(77,___L77_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(78))
   ___JUMPGLOSAFE(___SET_NARGS(1),130,___G_jazz_2e_network_3a_resolve_2d_service)
___DEF_SLBL(78,___L78_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CLO(___STK(-6),2))
   ___SET_R0(___CLO(___STK(-6),2))
   ___SET_R2(___VECTORREF(___R0,___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank))
   ___SET_R0(___LBL(79))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(79,___L79_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-6),2))
   ___SET_R2(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset))
   ___SET_R0(___CLO(___STK(-6),1))
   ___BEGIN_ALLOC_LIST(12UL,___TRU)
   ___ADD_LIST_ELEM(1,___KEY_keep_2d_alive)
   ___ADD_LIST_ELEM(2,___R1)
   ___ADD_LIST_ELEM(3,___KEY_readtable)
   ___ADD_LIST_ELEM(4,___R2)
   ___ADD_LIST_ELEM(5,___KEY_reuse_2d_address)
   ___ADD_LIST_ELEM(6,___SYM_cr_2d_lf)
   ___ADD_LIST_ELEM(7,___KEY_eol_2d_encoding)
   ___ADD_LIST_ELEM(8,___STK(-5))
   ___ADD_LIST_ELEM(9,___KEY_port_2d_number)
   ___ADD_LIST_ELEM(10,___R0)
   ___ADD_LIST_ELEM(11,___KEY_server_2d_address)
   ___END_ALLOC_LIST(12)
   ___SET_R1(___GET_LIST(12))
   ___SET_R0(___LBL(81))
   ___ADJFP(-4)
   ___CHECK_HEAP(80,4096)
___DEF_SLBL(80,___L80_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGLOSAFE(___SET_NARGS(1),150,___G_open_2d_tcp_2d_server)
___DEF_SLBL(81,___L81_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___BEGIN_ALLOC_VALUES(2UL)
   ___ADD_VALUES_ELEM(0,___R1)
   ___ADD_VALUES_ELEM(1,___FAL)
   ___END_ALLOC_VALUES(2)
   ___SET_R1(___GET_VALUES(2))
   ___CHECK_HEAP(82,4096)
___DEF_SLBL(82,___L82_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(83)
___DEF_SLBL(83,___L83_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(84,___L84_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(84,1,0,0)
   ___IF(___NOT(___NOTFALSEP(___CLO(___R4,2))))
   ___GOTO(___L118_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___ADJFP(8)
   ___POLL(85)
___DEF_SLBL(85,___L85_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(86))
   ___JUMPGLOSAFE(___SET_NARGS(1),152,___G_os_2d_exception_3f_)
___DEF_SLBL(86,___L86_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L121_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___GOTO(___L117_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
___DEF_SLBL(87,___L87_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L119_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
___DEF_GLBL(___L117_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L118_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___BEGIN_ALLOC_VALUES(2UL)
   ___ADD_VALUES_ELEM(0,___FAL)
   ___ADD_VALUES_ELEM(1,___R1)
   ___END_ALLOC_VALUES(2)
   ___SET_R2(___GET_VALUES(2))
   ___SET_R1(___R2)
   ___CHECK_HEAP(88,4096)
___DEF_SLBL(88,___L88_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(89)
___DEF_SLBL(89,___L89_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(90,___L90_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOT(___EQP(___R1,___SUB(492))))
   ___GOTO(___L120_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
___DEF_GLBL(___L119_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-4,___LBL(104))
   ___SET_STK(-3,___LBL(102))
   ___SET_STK(-2,___ALLOC_CLO(3UL))
   ___BEGIN_SETUP_CLO(3,___STK(-2),94)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-5),1))
   ___ADD_CLO_ELEM(1,___CLO(___STK(-5),2))
   ___ADD_CLO_ELEM(2,___CLO(___STK(-5),3))
   ___END_SETUP_CLO(3)
   ___SET_R3(___STK(-2))
   ___SET_R2(___STK(-3))
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(92))
   ___CHECK_HEAP(91,4096)
___DEF_SLBL(91,___L91_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGLOSAFE(___SET_NARGS(3),138,___G_jazz_3a_catch_2d_exception_2d_filter)
___DEF_SLBL(92,___L92_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(93)
___DEF_SLBL(93,___L93_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(94,___L94_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(94,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R1(___CLO(___R4,2))
   ___ADJFP(8)
   ___POLL(95)
___DEF_SLBL(95,___L95_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(96))
   ___JUMPGLOSAFE(___SET_NARGS(1),130,___G_jazz_2e_network_3a_resolve_2d_service)
___DEF_SLBL(96,___L96_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CLO(___STK(-6),3))
   ___SET_R0(___CLO(___STK(-6),3))
   ___SET_R2(___VECTORREF(___R0,___FIX(0L)))
   ___SET_R2(___VECTORREF(___R2,___FIX(13L)))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R2(___VECTORREF(___R2,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable_21_rank))
   ___SET_R0(___LBL(97))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(97,___L97_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___CLO(___STK(-6),3))
   ___SET_R2(___VECTORREF(___R0,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_offset))
   ___SET_R0(___CLO(___STK(-6),1))
   ___BEGIN_ALLOC_LIST(12UL,___TRU)
   ___ADD_LIST_ELEM(1,___KEY_keep_2d_alive)
   ___ADD_LIST_ELEM(2,___R1)
   ___ADD_LIST_ELEM(3,___KEY_readtable)
   ___ADD_LIST_ELEM(4,___R2)
   ___ADD_LIST_ELEM(5,___KEY_reuse_2d_address)
   ___ADD_LIST_ELEM(6,___SYM_cr_2d_lf)
   ___ADD_LIST_ELEM(7,___KEY_eol_2d_encoding)
   ___ADD_LIST_ELEM(8,___STK(-5))
   ___ADD_LIST_ELEM(9,___KEY_port_2d_number)
   ___ADD_LIST_ELEM(10,___R0)
   ___ADD_LIST_ELEM(11,___KEY_server_2d_address)
   ___END_ALLOC_LIST(12)
   ___SET_R1(___GET_LIST(12))
   ___SET_R0(___LBL(99))
   ___ADJFP(-4)
   ___CHECK_HEAP(98,4096)
___DEF_SLBL(98,___L98_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPGLOSAFE(___SET_NARGS(1),150,___G_open_2d_tcp_2d_server)
___DEF_SLBL(99,___L99_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___BEGIN_ALLOC_VALUES(2UL)
   ___ADD_VALUES_ELEM(0,___R1)
   ___ADD_VALUES_ELEM(1,___FAL)
   ___END_ALLOC_VALUES(2)
   ___SET_R1(___GET_VALUES(2))
   ___CHECK_HEAP(100,4096)
___DEF_SLBL(100,___L100_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(101)
___DEF_SLBL(101,___L101_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(102,___L102_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(102,1,0,0)
   ___BEGIN_ALLOC_VALUES(2UL)
   ___ADD_VALUES_ELEM(0,___FAL)
   ___ADD_VALUES_ELEM(1,___R1)
   ___END_ALLOC_VALUES(2)
   ___SET_R2(___GET_VALUES(2))
   ___SET_R1(___R2)
   ___CHECK_HEAP(103,4096)
___DEF_SLBL(103,___L103_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(104,___L104_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(104,1,0,0)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L120_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF(___NOT(___MEMALLOCATEDP(___R1)))
   ___GOTO(___L117_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_R2(___SUBTYPE(___R1))
   ___IF(___NOT(___FIXEQ(___R2,___FIX(19L))))
   ___GOTO(___L117_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___END_IF
   ___SET_STK(-4,___R1)
   ___SET_R2(___SUB(492))
   ___SET_R0(___LBL(87))
   ___JUMPPRM(___SET_NARGS(2),___PRM_equal_3f_)
___DEF_GLBL(___L121_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(105))
   ___JUMPGLOSAFE(___SET_NARGS(1),151,___G_os_2d_exception_2d_code)
___DEF_SLBL(105,___L105_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R0(___LBL(90))
   ___JUMPGLOSAFE(___SET_NARGS(1),109,___G_err_2d_code_2d__3e_string)
___DEF_SLBL(106,___L106_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(106,1,0,0)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(107,___L107_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___POLL(108)
___DEF_SLBL(108,___L108_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L122_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___DEF_GLBL(___L123_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___DEF_GLBL(___L124_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SYM_Server_2d_Interface)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),146,___G_jazz_3a_type_2d_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host
#undef ___PH_LBL0
#define ___PH_LBL0 337
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset))))
   ___GOTO(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),154,___G_socket_2d_info_2d_address)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___SUB(714))
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),110,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port
#undef ___PH_LBL0
#define ___PH_LBL0 345
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_P_HLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_P_HLBL(___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___DEF_P_HLBL(___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset))))
   ___GOTO(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_socket_2d_info_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),155,___G_socket_2d_info_2d_port_2d_number)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L7_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___SUB(732))
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),110,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(5,___L5_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection
#undef ___PH_LBL0
#define ___PH_LBL0 353
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R3(___VECTORREF(___STK(2),___FIX(0L)))
   ___SET_R3(___VECTORREF(___R3,___FIX(13L)))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_21_level))
   ___SET_R3(___VECTORREF(___R3,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection_21_rank))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection
#undef ___PH_LBL0
#define ___PH_LBL0 358
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),106,___G_close_2d_port)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection
#undef ___PH_LBL0
#define ___PH_LBL0 363
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___DEF_P_HLBL(___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___DEF_P_HLBL(___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___DEF_P_HLBL(___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___IF(___NOT(___NOTFALSEP(___VECTORREF(___R1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset))))
   ___GOTO(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___SET_R2(___VECTORREF(___STK(2),___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_offset))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(2,___L2_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L4_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,"bin:jazz.network.host.TCP-Server#",
___REF_SUB(0),80,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,5,0,0x3f11L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,0,1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name,0,___REF_SUB(163),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host,0,___REF_SUB(168),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_host,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service,0,___REF_SUB(173),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_service,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service,0,___REF_SUB(178),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_alternate_2d_service,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info,0,___REF_SUB(183),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_socket_2d_info,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize,0,___REF_SUB(188),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_port_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port,0,___REF_SUB(193),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_server_2d_port,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port,0,___REF_SUB(198),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_server_2d_port,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize,0,___REF_SUB(203),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_state_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize,0,___REF_SUB(208),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_hits_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits,0,___REF_SUB(213),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_hits,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_,0,___REF_SUB(218),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_debug_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_,0,___REF_SUB(223),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_debug_3f_,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize,0,___REF_SUB(228),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_reuse_2d_address_3f__21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_,0,___REF_SUB(233),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_reuse_2d_address_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_,0,___REF_SUB(238),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_reuse_2d_address_3f_,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize,0,___REF_SUB(243),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_handler_21_initialize,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,___REF_SUB(249),25,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,9,0,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,9,0,0x1ffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0x3ffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0x7ffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___IFD(___RETN,13,0,0xfffL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,___OFD(___RETI,16,0,0x3f0fffL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_initialize,0,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,0,___REF_SUB(302),6,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_destroy,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state,0,___REF_SUB(317),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_get_2d_state,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state,0,___REF_SUB(322),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_set_2d_state,2,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread,0,___REF_SUB(327),2,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_create_2d_thread,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,0,___REF_SUB(334),8,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,0,___REF_SUB(353),9,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_stop,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,0,___REF_SUB(374),9,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_restart,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,0,___REF_SUB(395),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_started,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,0,___REF_SUB(408),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_wait_2d_stopped,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name,0,___REF_SUB(421),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,0,___REF_SUB(426),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_title,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version,0,___REF_SUB(443),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_version,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host,0,___REF_SUB(448),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_host,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service,0,___REF_SUB(453),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_service,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service,0,___REF_SUB(458),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_alternate_2d_service,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits,0,___REF_SUB(463),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hits,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_,0,___REF_SUB(468),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_debug_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit,0,___REF_SUB(473),3,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_server_2d_hit,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name,0,___REF_SUB(482),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable,0,___REF_SUB(487),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_connection_2d_readtable,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,___REF_SUB(493),109,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,2,1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,5,8,0x3f0cL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,5,8,0x3f0cL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,2)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,3,4,0x3f3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,3,4,0x3f3L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,2)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,2)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,2)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,-1)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,4)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,5,0,0x3f11L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,1,0x3f7fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,1,0x3f7fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,1,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,1,0x3f1fL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,3)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,3)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f1bL))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,0,3)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_start_2d_listener,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,0,___REF_SUB(715),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_host,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,0,___REF_SUB(733),7,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_listening_2d_port,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection,0,___REF_SUB(750),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_accept_2d_connection,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection,0,___REF_SUB(761),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_close_2d_connection,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection,0,___REF_SUB(772),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_3a_process_2d_connection,___IFD(___RETI,8,0,0x3f07L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,16,0)
               ___GCMAP1(0x3f0fffL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Server_2d_Interface,"Server-Interface")
___DEF_MOD_SYM(1,___S_TCP_2d_Server,"TCP-Server")
___DEF_MOD_SYM(2,___S_TCP_2d_Server_7e_Class,"TCP-Server~Class")
___DEF_MOD_SYM(3,___S_accept_2d_connection,"accept-connection")
___DEF_MOD_SYM(4,___S_address,"address")
___DEF_MOD_SYM(5,___S_alternate_2d_service,"alternate-service")
___DEF_MOD_SYM(6,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Server,"bin:jazz.network.host.TCP-Server")

___DEF_MOD_SYM(7,___S_box_5e_0,"box^0")
___DEF_MOD_SYM(8,___S_close_2d_connection,"close-connection")
___DEF_MOD_SYM(9,___S_connection_2d_handler,"connection-handler")
___DEF_MOD_SYM(10,___S_connection_2d_name,"connection-name")
___DEF_MOD_SYM(11,___S_connection_2d_readtable,"connection-readtable")
___DEF_MOD_SYM(12,___S_cr_2d_lf,"cr-lf")
___DEF_MOD_SYM(13,___S_create_2d_thread,"create-thread")
___DEF_MOD_SYM(14,___S_debug_3f_,"debug?")
___DEF_MOD_SYM(15,___S_destroy,"destroy")
___DEF_MOD_SYM(16,___S_exc,"exc")
___DEF_MOD_SYM(17,___S_exception,"exception")
___DEF_MOD_SYM(18,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(19,___S_get_2d_alternate_2d_service,"get-alternate-service")
___DEF_MOD_SYM(20,___S_get_2d_debug_3f_,"get-debug?")
___DEF_MOD_SYM(21,___S_get_2d_hits,"get-hits")
___DEF_MOD_SYM(22,___S_get_2d_host,"get-host")
___DEF_MOD_SYM(23,___S_get_2d_name,"get-name")
___DEF_MOD_SYM(24,___S_get_2d_reuse_2d_address_3f_,"get-reuse-address?")
___DEF_MOD_SYM(25,___S_get_2d_server_2d_port,"get-server-port")
___DEF_MOD_SYM(26,___S_get_2d_service,"get-service")
___DEF_MOD_SYM(27,___S_get_2d_socket_2d_info,"get-socket-info")
___DEF_MOD_SYM(28,___S_get_2d_state,"get-state")
___DEF_MOD_SYM(29,___S_hits,"hits")
___DEF_MOD_SYM(30,___S_host,"host")
___DEF_MOD_SYM(31,___S_initialize,"initialize")
___DEF_MOD_SYM(32,___S_jazz,"jazz")
___DEF_MOD_SYM(33,___S_jazz_2e_network,"jazz.network")
___DEF_MOD_SYM(34,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server,"jazz.network.host.TCP-Server")
___DEF_MOD_SYM(35,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server,"jazz.network.host.TCP-Server:TCP-Server")

___DEF_MOD_SYM(36,___S_jazz_2e_network_2e_host_2e_TCP_2d_Server_3a_TCP_2d_Server_7e_Class,"jazz.network.host.TCP-Server:TCP-Server~Class")

___DEF_MOD_SYM(37,___S_jazz_2e_network_2e_server_2e_Server_2d_Interface,"jazz.network.server.Server-Interface")

___DEF_MOD_SYM(38,___S_jazz_2e_version,"jazz.version")
___DEF_MOD_SYM(39,___S_listening_2d_host,"listening-host")
___DEF_MOD_SYM(40,___S_listening_2d_port,"listening-port")
___DEF_MOD_SYM(41,___S_loaded_3f_,"loaded?")
___DEF_MOD_SYM(42,___S_name,"name")
___DEF_MOD_SYM(43,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(44,___S_port,"port")
___DEF_MOD_SYM(45,___S_process_2d_connection,"process-connection")
___DEF_MOD_SYM(46,___S_protected,"protected")
___DEF_MOD_SYM(47,___S_rest,"rest")
___DEF_MOD_SYM(48,___S_restart,"restart")
___DEF_MOD_SYM(49,___S_reuse_2d_address_3f_,"reuse-address?")
___DEF_MOD_SYM(50,___S_self,"self")
___DEF_MOD_SYM(51,___S_server_2d_alternate_2d_service,"server-alternate-service")
___DEF_MOD_SYM(52,___S_server_2d_debug_3f_,"server-debug?")
___DEF_MOD_SYM(53,___S_server_2d_hit,"server-hit")
___DEF_MOD_SYM(54,___S_server_2d_hits,"server-hits")
___DEF_MOD_SYM(55,___S_server_2d_host,"server-host")
___DEF_MOD_SYM(56,___S_server_2d_name,"server-name")
___DEF_MOD_SYM(57,___S_server_2d_port,"server-port")
___DEF_MOD_SYM(58,___S_server_2d_service,"server-service")
___DEF_MOD_SYM(59,___S_server_2d_thread,"server-thread")
___DEF_MOD_SYM(60,___S_server_2d_title,"server-title")
___DEF_MOD_SYM(61,___S_server_2d_version,"server-version")
___DEF_MOD_SYM(62,___S_service,"service")
___DEF_MOD_SYM(63,___S_set_2d_debug_3f_,"set-debug?")
___DEF_MOD_SYM(64,___S_set_2d_reuse_2d_address_3f_,"set-reuse-address?")
___DEF_MOD_SYM(65,___S_set_2d_server_2d_port,"set-server-port")
___DEF_MOD_SYM(66,___S_set_2d_state,"set-state")
___DEF_MOD_SYM(67,___S_socket_2d_info,"socket-info")
___DEF_MOD_SYM(68,___S_start,"start")
___DEF_MOD_SYM(69,___S_start_2d_listener,"start-listener")
___DEF_MOD_SYM(70,___S_started,"started")
___DEF_MOD_SYM(71,___S_started_2d_mutex,"started-mutex")
___DEF_MOD_SYM(72,___S_starting,"starting")
___DEF_MOD_SYM(73,___S_state,"state")
___DEF_MOD_SYM(74,___S_stop,"stop")
___DEF_MOD_SYM(75,___S_stopped,"stopped")
___DEF_MOD_SYM(76,___S_stopped_2d_mutex,"stopped-mutex")
___DEF_MOD_SYM(77,___S_stopping,"stopping")
___DEF_MOD_SYM(78,___S_tcp_2d_connection,"tcp-connection")
___DEF_MOD_SYM(79,___S_tcp_2d_server,"tcp-server")
___DEF_MOD_SYM(80,___S_temp_2e_36,"temp.36")
___DEF_MOD_SYM(81,___S_temp_2e_38,"temp.38")
___DEF_MOD_SYM(82,___S_temp_2e_39,"temp.39")
___DEF_MOD_SYM(83,___S_wait_2d_started,"wait-started")
___DEF_MOD_SYM(84,___S_wait_2d_stopped,"wait-stopped")
___DEF_MOD_KEY(0,___K_alternate_2d_service,"alternate-service")
___DEF_MOD_KEY(1,___K_connection_2d_handler,"connection-handler")
___DEF_MOD_KEY(2,___K_debug_3f_,"debug?")
___DEF_MOD_KEY(3,___K_eol_2d_encoding,"eol-encoding")
___DEF_MOD_KEY(4,___K_host,"host")
___DEF_MOD_KEY(5,___K_keep_2d_alive,"keep-alive")
___DEF_MOD_KEY(6,___K_name,"name")
___DEF_MOD_KEY(7,___K_port_2d_number,"port-number")
___DEF_MOD_KEY(8,___K_readtable,"readtable")
___DEF_MOD_KEY(9,___K_reuse_2d_address,"reuse-address")
___DEF_MOD_KEY(10,___K_reuse_2d_address_3f_,"reuse-address?")
___DEF_MOD_KEY(11,___K_server_2d_address,"server-address")
___DEF_MOD_KEY(12,___K_service,"service")
___END_MOD_SYM_KEY

#endif
