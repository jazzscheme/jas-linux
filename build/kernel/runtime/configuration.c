#ifdef ___LINKER_INFO
; File: "configuration.c", produced by Gambit v4.8.9
(
408009
(C)
"configuration"
(("configuration"))
(
"Configuration"
"compiler"
"configuration"
"debug-environments?"
"debug-foreign?"
"debug-location?"
"debug-source?"
"destination"
"features"
"kernel-interpret?"
"kernel.configuration"
"local?"
"mutable-bindings?"
"name"
"optimize?"
"platform"
"processor"
"properties"
"safety"
"system"
"track-memory?"
"windowing"
)
(
"dynamic?"
)
(
"configuration#"
"jazz:get-configuration-destination"
"jazz:get-configuration-name"
"jazz:get-configuration-properties"
)
(
"jazz:configuration-directory"
"jazz:get-configuration-compiler"
"jazz:get-configuration-debug-environments?"
"jazz:get-configuration-debug-foreign?"
"jazz:get-configuration-debug-location?"
"jazz:get-configuration-debug-source?"
"jazz:get-configuration-features"
"jazz:get-configuration-kernel-interpret?"
"jazz:get-configuration-local?"
"jazz:get-configuration-mutable-bindings?"
"jazz:get-configuration-optimize?"
"jazz:get-configuration-platform"
"jazz:get-configuration-processor"
"jazz:get-configuration-safety"
"jazz:get-configuration-system"
"jazz:get-configuration-track-memory?"
"jazz:get-configuration-windowing"
"jazz:jazz-source"
"jazz:make-configuration"
)
(
"##table-set!"
"%%make-record-structure"
"jazz:build-dynamic-path"
"jazz:destination-directory"
"jazz:getf"
"jazz:source"
"jazz:structure-info"
"jazz:verbose-kernel"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "configuration"
#define ___LINKER_ID ___LNK_configuration
#define ___MH_PROC ___H_configuration
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 22
#define ___KEYCOUNT 1
#define ___GLOCOUNT 31
#define ___SUPCOUNT 23
#define ___CNSCOUNT 19
#define ___SUBCOUNT 145
#define ___LBLCOUNT 60
#define ___OFDCOUNT 4
#define ___MODDESCR ___REF_SUB(144)
#include "gambit.h"

___NEED_SYM(___S_Configuration)
___NEED_SYM(___S_compiler)
___NEED_SYM(___S_configuration)
___NEED_SYM(___S_debug_2d_environments_3f_)
___NEED_SYM(___S_debug_2d_foreign_3f_)
___NEED_SYM(___S_debug_2d_location_3f_)
___NEED_SYM(___S_debug_2d_source_3f_)
___NEED_SYM(___S_destination)
___NEED_SYM(___S_features)
___NEED_SYM(___S_kernel_2d_interpret_3f_)
___NEED_SYM(___S_kernel_2e_configuration)
___NEED_SYM(___S_local_3f_)
___NEED_SYM(___S_mutable_2d_bindings_3f_)
___NEED_SYM(___S_name)
___NEED_SYM(___S_optimize_3f_)
___NEED_SYM(___S_platform)
___NEED_SYM(___S_processor)
___NEED_SYM(___S_properties)
___NEED_SYM(___S_safety)
___NEED_SYM(___S_system)
___NEED_SYM(___S_track_2d_memory_3f_)
___NEED_SYM(___S_windowing)

___NEED_KEY(___K_dynamic_3f_)

___NEED_GLO(___G__23__23_table_2d_set_21_)
___NEED_GLO(___G__25__25_make_2d_record_2d_structure)
___NEED_GLO(___G_configuration_23_)
___NEED_GLO(___G_jazz_3a_build_2d_dynamic_2d_path)
___NEED_GLO(___G_jazz_3a_configuration_2d_directory)
___NEED_GLO(___G_jazz_3a_destination_2d_directory)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_compiler)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_destination)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_features)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_local_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_name)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_optimize_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_platform)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_processor)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_properties)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_safety)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_system)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
___NEED_GLO(___G_jazz_3a_get_2d_configuration_2d_windowing)
___NEED_GLO(___G_jazz_3a_getf)
___NEED_GLO(___G_jazz_3a_jazz_2d_source)
___NEED_GLO(___G_jazz_3a_make_2d_configuration)
___NEED_GLO(___G_jazz_3a_source)
___NEED_GLO(___G_jazz_3a_structure_2d_info)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)

___BEGIN_SYM
___DEF_SYM(0,___S_Configuration,"Configuration")
___DEF_SYM(1,___S_compiler,"compiler")
___DEF_SYM(2,___S_configuration,"configuration")
___DEF_SYM(3,___S_debug_2d_environments_3f_,"debug-environments?")
___DEF_SYM(4,___S_debug_2d_foreign_3f_,"debug-foreign?")
___DEF_SYM(5,___S_debug_2d_location_3f_,"debug-location?")
___DEF_SYM(6,___S_debug_2d_source_3f_,"debug-source?")
___DEF_SYM(7,___S_destination,"destination")
___DEF_SYM(8,___S_features,"features")
___DEF_SYM(9,___S_kernel_2d_interpret_3f_,"kernel-interpret?")
___DEF_SYM(10,___S_kernel_2e_configuration,"kernel.configuration")
___DEF_SYM(11,___S_local_3f_,"local?")
___DEF_SYM(12,___S_mutable_2d_bindings_3f_,"mutable-bindings?")
___DEF_SYM(13,___S_name,"name")
___DEF_SYM(14,___S_optimize_3f_,"optimize?")
___DEF_SYM(15,___S_platform,"platform")
___DEF_SYM(16,___S_processor,"processor")
___DEF_SYM(17,___S_properties,"properties")
___DEF_SYM(18,___S_safety,"safety")
___DEF_SYM(19,___S_system,"system")
___DEF_SYM(20,___S_track_2d_memory_3f_,"track-memory?")
___DEF_SYM(21,___S_windowing,"windowing")
___END_SYM

#define ___SYM_Configuration ___SYM(0,___S_Configuration)
#define ___SYM_compiler ___SYM(1,___S_compiler)
#define ___SYM_configuration ___SYM(2,___S_configuration)
#define ___SYM_debug_2d_environments_3f_ ___SYM(3,___S_debug_2d_environments_3f_)
#define ___SYM_debug_2d_foreign_3f_ ___SYM(4,___S_debug_2d_foreign_3f_)
#define ___SYM_debug_2d_location_3f_ ___SYM(5,___S_debug_2d_location_3f_)
#define ___SYM_debug_2d_source_3f_ ___SYM(6,___S_debug_2d_source_3f_)
#define ___SYM_destination ___SYM(7,___S_destination)
#define ___SYM_features ___SYM(8,___S_features)
#define ___SYM_kernel_2d_interpret_3f_ ___SYM(9,___S_kernel_2d_interpret_3f_)
#define ___SYM_kernel_2e_configuration ___SYM(10,___S_kernel_2e_configuration)
#define ___SYM_local_3f_ ___SYM(11,___S_local_3f_)
#define ___SYM_mutable_2d_bindings_3f_ ___SYM(12,___S_mutable_2d_bindings_3f_)
#define ___SYM_name ___SYM(13,___S_name)
#define ___SYM_optimize_3f_ ___SYM(14,___S_optimize_3f_)
#define ___SYM_platform ___SYM(15,___S_platform)
#define ___SYM_processor ___SYM(16,___S_processor)
#define ___SYM_properties ___SYM(17,___S_properties)
#define ___SYM_safety ___SYM(18,___S_safety)
#define ___SYM_system ___SYM(19,___S_system)
#define ___SYM_track_2d_memory_3f_ ___SYM(20,___S_track_2d_memory_3f_)
#define ___SYM_windowing ___SYM(21,___S_windowing)

___BEGIN_KEY
___DEF_KEY(0,___K_dynamic_3f_,"dynamic?")
___END_KEY

#define ___KEY_dynamic_3f_ ___KEY(0,___K_dynamic_3f_)

___BEGIN_GLO
___DEF_GLO(0,"configuration#")
___DEF_GLO(1,"jazz:configuration-directory")
___DEF_GLO(2,"jazz:get-configuration-compiler")
___DEF_GLO(3,"jazz:get-configuration-debug-environments?")

___DEF_GLO(4,"jazz:get-configuration-debug-foreign?")

___DEF_GLO(5,"jazz:get-configuration-debug-location?")

___DEF_GLO(6,"jazz:get-configuration-debug-source?")

___DEF_GLO(7,"jazz:get-configuration-destination")

___DEF_GLO(8,"jazz:get-configuration-features")
___DEF_GLO(9,"jazz:get-configuration-kernel-interpret?")

___DEF_GLO(10,"jazz:get-configuration-local?")
___DEF_GLO(11,"jazz:get-configuration-mutable-bindings?")

___DEF_GLO(12,"jazz:get-configuration-name")
___DEF_GLO(13,"jazz:get-configuration-optimize?")
___DEF_GLO(14,"jazz:get-configuration-platform")
___DEF_GLO(15,"jazz:get-configuration-processor")
___DEF_GLO(16,"jazz:get-configuration-properties")

___DEF_GLO(17,"jazz:get-configuration-safety")
___DEF_GLO(18,"jazz:get-configuration-system")
___DEF_GLO(19,"jazz:get-configuration-track-memory?")

___DEF_GLO(20,"jazz:get-configuration-windowing")
___DEF_GLO(21,"jazz:jazz-source")
___DEF_GLO(22,"jazz:make-configuration")
___DEF_GLO(23,"##table-set!")
___DEF_GLO(24,"%%make-record-structure")
___DEF_GLO(25,"jazz:build-dynamic-path")
___DEF_GLO(26,"jazz:destination-directory")
___DEF_GLO(27,"jazz:getf")
___DEF_GLO(28,"jazz:source")
___DEF_GLO(29,"jazz:structure-info")
___DEF_GLO(30,"jazz:verbose-kernel")
___END_GLO

#define ___GLO_configuration_23_ ___GLO(0,___G_configuration_23_)
#define ___PRM_configuration_23_ ___PRM(0,___G_configuration_23_)
#define ___GLO_jazz_3a_configuration_2d_directory ___GLO(1,___G_jazz_3a_configuration_2d_directory)
#define ___PRM_jazz_3a_configuration_2d_directory ___PRM(1,___G_jazz_3a_configuration_2d_directory)
#define ___GLO_jazz_3a_get_2d_configuration_2d_compiler ___GLO(2,___G_jazz_3a_get_2d_configuration_2d_compiler)
#define ___PRM_jazz_3a_get_2d_configuration_2d_compiler ___PRM(2,___G_jazz_3a_get_2d_configuration_2d_compiler)
#define ___GLO_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_ ___GLO(3,___G_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_ ___PRM(3,___G_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_ ___GLO(4,___G_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_ ___PRM(4,___G_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_ ___GLO(5,___G_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_ ___PRM(5,___G_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_ ___GLO(6,___G_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_ ___PRM(6,___G_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_destination ___GLO(7,___G_jazz_3a_get_2d_configuration_2d_destination)
#define ___PRM_jazz_3a_get_2d_configuration_2d_destination ___PRM(7,___G_jazz_3a_get_2d_configuration_2d_destination)
#define ___GLO_jazz_3a_get_2d_configuration_2d_features ___GLO(8,___G_jazz_3a_get_2d_configuration_2d_features)
#define ___PRM_jazz_3a_get_2d_configuration_2d_features ___PRM(8,___G_jazz_3a_get_2d_configuration_2d_features)
#define ___GLO_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_ ___GLO(9,___G_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_ ___PRM(9,___G_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_local_3f_ ___GLO(10,___G_jazz_3a_get_2d_configuration_2d_local_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_local_3f_ ___PRM(10,___G_jazz_3a_get_2d_configuration_2d_local_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_ ___GLO(11,___G_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_ ___PRM(11,___G_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_name ___GLO(12,___G_jazz_3a_get_2d_configuration_2d_name)
#define ___PRM_jazz_3a_get_2d_configuration_2d_name ___PRM(12,___G_jazz_3a_get_2d_configuration_2d_name)
#define ___GLO_jazz_3a_get_2d_configuration_2d_optimize_3f_ ___GLO(13,___G_jazz_3a_get_2d_configuration_2d_optimize_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_optimize_3f_ ___PRM(13,___G_jazz_3a_get_2d_configuration_2d_optimize_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_platform ___GLO(14,___G_jazz_3a_get_2d_configuration_2d_platform)
#define ___PRM_jazz_3a_get_2d_configuration_2d_platform ___PRM(14,___G_jazz_3a_get_2d_configuration_2d_platform)
#define ___GLO_jazz_3a_get_2d_configuration_2d_processor ___GLO(15,___G_jazz_3a_get_2d_configuration_2d_processor)
#define ___PRM_jazz_3a_get_2d_configuration_2d_processor ___PRM(15,___G_jazz_3a_get_2d_configuration_2d_processor)
#define ___GLO_jazz_3a_get_2d_configuration_2d_properties ___GLO(16,___G_jazz_3a_get_2d_configuration_2d_properties)
#define ___PRM_jazz_3a_get_2d_configuration_2d_properties ___PRM(16,___G_jazz_3a_get_2d_configuration_2d_properties)
#define ___GLO_jazz_3a_get_2d_configuration_2d_safety ___GLO(17,___G_jazz_3a_get_2d_configuration_2d_safety)
#define ___PRM_jazz_3a_get_2d_configuration_2d_safety ___PRM(17,___G_jazz_3a_get_2d_configuration_2d_safety)
#define ___GLO_jazz_3a_get_2d_configuration_2d_system ___GLO(18,___G_jazz_3a_get_2d_configuration_2d_system)
#define ___PRM_jazz_3a_get_2d_configuration_2d_system ___PRM(18,___G_jazz_3a_get_2d_configuration_2d_system)
#define ___GLO_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_ ___GLO(19,___G_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
#define ___PRM_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_ ___PRM(19,___G_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
#define ___GLO_jazz_3a_get_2d_configuration_2d_windowing ___GLO(20,___G_jazz_3a_get_2d_configuration_2d_windowing)
#define ___PRM_jazz_3a_get_2d_configuration_2d_windowing ___PRM(20,___G_jazz_3a_get_2d_configuration_2d_windowing)
#define ___GLO_jazz_3a_jazz_2d_source ___GLO(21,___G_jazz_3a_jazz_2d_source)
#define ___PRM_jazz_3a_jazz_2d_source ___PRM(21,___G_jazz_3a_jazz_2d_source)
#define ___GLO_jazz_3a_make_2d_configuration ___GLO(22,___G_jazz_3a_make_2d_configuration)
#define ___PRM_jazz_3a_make_2d_configuration ___PRM(22,___G_jazz_3a_make_2d_configuration)
#define ___GLO__23__23_table_2d_set_21_ ___GLO(23,___G__23__23_table_2d_set_21_)
#define ___PRM__23__23_table_2d_set_21_ ___PRM(23,___G__23__23_table_2d_set_21_)
#define ___GLO__25__25_make_2d_record_2d_structure ___GLO(24,___G__25__25_make_2d_record_2d_structure)
#define ___PRM__25__25_make_2d_record_2d_structure ___PRM(24,___G__25__25_make_2d_record_2d_structure)
#define ___GLO_jazz_3a_build_2d_dynamic_2d_path ___GLO(25,___G_jazz_3a_build_2d_dynamic_2d_path)
#define ___PRM_jazz_3a_build_2d_dynamic_2d_path ___PRM(25,___G_jazz_3a_build_2d_dynamic_2d_path)
#define ___GLO_jazz_3a_destination_2d_directory ___GLO(26,___G_jazz_3a_destination_2d_directory)
#define ___PRM_jazz_3a_destination_2d_directory ___PRM(26,___G_jazz_3a_destination_2d_directory)
#define ___GLO_jazz_3a_getf ___GLO(27,___G_jazz_3a_getf)
#define ___PRM_jazz_3a_getf ___PRM(27,___G_jazz_3a_getf)
#define ___GLO_jazz_3a_source ___GLO(28,___G_jazz_3a_source)
#define ___PRM_jazz_3a_source ___PRM(28,___G_jazz_3a_source)
#define ___GLO_jazz_3a_structure_2d_info ___GLO(29,___G_jazz_3a_structure_2d_info)
#define ___PRM_jazz_3a_structure_2d_info ___PRM(29,___G_jazz_3a_structure_2d_info)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(30,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(30,___G_jazz_3a_verbose_2d_kernel)

___BEGIN_CNS
 ___DEF_CNS(___REF_SYM(13,___S_name),___REF_CNS(1))
,___DEF_CNS(___REF_SYM(19,___S_system),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(15,___S_platform),___REF_CNS(3))
,___DEF_CNS(___REF_SYM(1,___S_compiler),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(16,___S_processor),___REF_CNS(5))
,___DEF_CNS(___REF_SYM(21,___S_windowing),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(18,___S_safety),___REF_CNS(7))
,___DEF_CNS(___REF_SYM(14,___S_optimize_3f_),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(3,___S_debug_2d_environments_3f_),___REF_CNS(9))
,___DEF_CNS(___REF_SYM(5,___S_debug_2d_location_3f_),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(6,___S_debug_2d_source_3f_),___REF_CNS(11))
,___DEF_CNS(___REF_SYM(4,___S_debug_2d_foreign_3f_),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(20,___S_track_2d_memory_3f_),___REF_CNS(13))
,___DEF_CNS(___REF_SYM(12,___S_mutable_2d_bindings_3f_),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(9,___S_kernel_2d_interpret_3f_),___REF_CNS(15))
,___DEF_CNS(___REF_SYM(7,___S_destination),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(8,___S_features),___REF_CNS(17))
,___DEF_CNS(___REF_SYM(17,___S_properties),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(11,___S_local_3f_),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X1,5UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(7))
               ___VEC1(___REF_SUB(9))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,62UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,99,111,110)
               ___STR8(102,105,103,117,114,97,116,105)
               ___STR6(111,110,46,115,99,109)
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
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(12))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(76))
               ___VEC0
___DEF_SUB_VEC(___X13,0UL)
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_SUB(15))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X15,5UL)
               ___VEC1(___REF_SUB(16))
               ___VEC1(___REF_SUB(18))
               ___VEC1(___REF_SUB(20))
               ___VEC1(___REF_SUB(22))
               ___VEC1(___REF_SUB(24))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X18,23UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(19))
               ___VEC1(___REF_FIX(917504))
               ___VEC1(___REF_FIX(884738))
               ___VEC1(___REF_FIX(655360))
               ___VEC1(___REF_FIX(622594))
               ___VEC1(___REF_FIX(589828))
               ___VEC1(___REF_FIX(524294))
               ___VEC1(___REF_FIX(491528))
               ___VEC1(___REF_FIX(458762))
               ___VEC1(___REF_FIX(425996))
               ___VEC1(___REF_FIX(393230))
               ___VEC1(___REF_FIX(360464))
               ___VEC1(___REF_FIX(327698))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262166))
               ___VEC1(___REF_FIX(229400))
               ___VEC1(___REF_FIX(196634))
               ___VEC1(___REF_FIX(163868))
               ___VEC1(___REF_FIX(131102))
               ___VEC1(___REF_FIX(98336))
               ___VEC1(___REF_FIX(65570))
               ___VEC1(___REF_FIX(32804))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X20,21UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_FIX(655360))
               ___VEC1(___REF_FIX(622594))
               ___VEC1(___REF_FIX(589828))
               ___VEC1(___REF_FIX(524294))
               ___VEC1(___REF_FIX(491528))
               ___VEC1(___REF_FIX(458762))
               ___VEC1(___REF_FIX(425996))
               ___VEC1(___REF_FIX(393230))
               ___VEC1(___REF_FIX(360464))
               ___VEC1(___REF_FIX(327698))
               ___VEC1(___REF_FIX(294932))
               ___VEC1(___REF_FIX(262166))
               ___VEC1(___REF_FIX(229400))
               ___VEC1(___REF_FIX(196634))
               ___VEC1(___REF_FIX(163868))
               ___VEC1(___REF_FIX(131102))
               ___VEC1(___REF_FIX(98336))
               ___VEC1(___REF_FIX(65570))
               ___VEC1(___REF_FIX(32804))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X26,19UL)
               ___VEC1(___REF_SYM(11,___S_local_3f_))
               ___VEC1(___REF_SYM(17,___S_properties))
               ___VEC1(___REF_SYM(8,___S_features))
               ___VEC1(___REF_SYM(7,___S_destination))
               ___VEC1(___REF_SYM(9,___S_kernel_2d_interpret_3f_))
               ___VEC1(___REF_SYM(12,___S_mutable_2d_bindings_3f_))
               ___VEC1(___REF_SYM(20,___S_track_2d_memory_3f_))
               ___VEC1(___REF_SYM(4,___S_debug_2d_foreign_3f_))
               ___VEC1(___REF_SYM(6,___S_debug_2d_source_3f_))
               ___VEC1(___REF_SYM(5,___S_debug_2d_location_3f_))
               ___VEC1(___REF_SYM(3,___S_debug_2d_environments_3f_))
               ___VEC1(___REF_SYM(14,___S_optimize_3f_))
               ___VEC1(___REF_SYM(18,___S_safety))
               ___VEC1(___REF_SYM(21,___S_windowing))
               ___VEC1(___REF_SYM(16,___S_processor))
               ___VEC1(___REF_SYM(1,___S_compiler))
               ___VEC1(___REF_SYM(15,___S_platform))
               ___VEC1(___REF_SYM(19,___S_system))
               ___VEC1(___REF_SYM(13,___S_name))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
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
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X121,0UL)
               ___VEC0
___DEF_SUB_STR(___X122,2UL)
               ___STR2(46,47)
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_SUB(143))
               ___VEC0
___DEF_SUB_VEC(___X124,9UL)
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_SUB(133))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_SUB(141))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(126))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(76))
               ___VEC0
___DEF_SUB_VEC(___X127,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(128))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(1114193))
               ___VEC0
___DEF_SUB_VEC(___X129,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(1114193))
               ___VEC0
___DEF_SUB_VEC(___X131,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393297))
               ___VEC0
___DEF_SUB_VEC(___X133,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393300))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(136))
               ___VEC0
___DEF_SUB_VEC(___X136,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393301))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(138))
               ___VEC0
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(262227))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(140))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(2031698))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(142))
               ___VEC0
___DEF_SUB_VEC(___X142,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(393298))
               ___VEC0
___DEF_SUB_VEC(___X143,1UL)
               ___VEC1(___REF_SYM(2,___S_configuration))
               ___VEC0
___DEF_SUB_VEC(___X144,5UL)
               ___VEC1(___REF_SYM(2,___S_configuration))
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
___DEF_M_HLBL(___L0_configuration_23_)
___DEF_M_HLBL(___L1_configuration_23_)
___DEF_M_HLBL(___L2_configuration_23_)
___DEF_M_HLBL(___L3_configuration_23_)
___DEF_M_HLBL(___L4_configuration_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_make_2d_configuration)
___DEF_M_HLBL(___L1_jazz_3a_make_2d_configuration)
___DEF_M_HLBL(___L2_jazz_3a_make_2d_configuration)
___DEF_M_HLBL(___L3_jazz_3a_make_2d_configuration)
___DEF_M_HLBL(___L4_jazz_3a_make_2d_configuration)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_system)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_platform)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_compiler)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_processor)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_windowing)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_safety)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_optimize_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_destination)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_features)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_properties)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_configuration_2d_local_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L1_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L2_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L3_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L4_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L5_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L6_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L7_jazz_3a_configuration_2d_directory)
___DEF_M_HLBL(___L8_jazz_3a_configuration_2d_directory)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_configuration_23_
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
___DEF_P_HLBL(___L0_configuration_23_)
___DEF_P_HLBL(___L1_configuration_23_)
___DEF_P_HLBL(___L2_configuration_23_)
___DEF_P_HLBL(___L3_configuration_23_)
___DEF_P_HLBL(___L4_configuration_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_configuration_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_configuration_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_configuration)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_configuration_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),30,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_configuration_23_)
   ___SET_GLO(21,___G_jazz_3a_jazz_2d_source,___GLO_jazz_3a_source)
   ___SET_R3(___CNS(0))
   ___SET_R2(___SYM_Configuration)
   ___SET_R1(___GLO_jazz_3a_structure_2d_info)
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(3),23,___G__23__23_table_2d_set_21_)
___DEF_SLBL(3,___L3_configuration_23_)
   ___SET_R1(___VOID)
   ___POLL(4)
___DEF_SLBL(4,___L4_configuration_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_make_2d_configuration
#undef ___PH_LBL0
#define ___PH_LBL0 7
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_make_2d_configuration)
___DEF_P_HLBL(___L1_jazz_3a_make_2d_configuration)
___DEF_P_HLBL(___L2_jazz_3a_make_2d_configuration)
___DEF_P_HLBL(___L3_jazz_3a_make_2d_configuration)
___DEF_P_HLBL(___L4_jazz_3a_make_2d_configuration)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_make_2d_configuration)
   ___IF_NARGS_EQ(19,___NOTHING)
   ___WRONG_NARGS(0,19,0,0)
___DEF_GLBL(___L_jazz_3a_make_2d_configuration)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___SYM_Configuration)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_make_2d_configuration)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G__25__25_make_2d_record_2d_structure)
___DEF_SLBL(2,___L2_jazz_3a_make_2d_configuration)
   ___BEGIN_ALLOC_VECTOR(20UL)
   ___ADD_VECTOR_ELEM(0,___R1)
   ___ADD_VECTOR_ELEM(1,___STK(-23))
   ___ADD_VECTOR_ELEM(2,___STK(-22))
   ___ADD_VECTOR_ELEM(3,___STK(-21))
   ___ADD_VECTOR_ELEM(4,___STK(-20))
   ___ADD_VECTOR_ELEM(5,___STK(-19))
   ___ADD_VECTOR_ELEM(6,___STK(-18))
   ___ADD_VECTOR_ELEM(7,___STK(-17))
   ___ADD_VECTOR_ELEM(8,___STK(-16))
   ___ADD_VECTOR_ELEM(9,___STK(-15))
   ___ADD_VECTOR_ELEM(10,___STK(-14))
   ___ADD_VECTOR_ELEM(11,___STK(-13))
   ___ADD_VECTOR_ELEM(12,___STK(-12))
   ___ADD_VECTOR_ELEM(13,___STK(-11))
   ___ADD_VECTOR_ELEM(14,___STK(-10))
   ___ADD_VECTOR_ELEM(15,___STK(-9))
   ___ADD_VECTOR_ELEM(16,___STK(-8))
   ___ADD_VECTOR_ELEM(17,___STK(-6))
   ___ADD_VECTOR_ELEM(18,___STK(-5))
   ___ADD_VECTOR_ELEM(19,___STK(-4))
   ___END_ALLOC_VECTOR(20)
   ___SET_R1(___GET_VECTOR(20))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_jazz_3a_make_2d_configuration)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_make_2d_configuration)
   ___ADJFP(-24)
   ___JUMPPRM(___NOTHING,___STK(17))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 13
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_name)
   ___SET_R1(___VECTORREF(___R1,___FIX(1L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_system
#undef ___PH_LBL0
#define ___PH_LBL0 15
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_system)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_system)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_system)
   ___SET_R1(___VECTORREF(___R1,___FIX(2L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_platform
#undef ___PH_LBL0
#define ___PH_LBL0 17
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_platform)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_platform)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_platform)
   ___SET_R1(___VECTORREF(___R1,___FIX(3L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_compiler
#undef ___PH_LBL0
#define ___PH_LBL0 19
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_compiler)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_compiler)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_compiler)
   ___SET_R1(___VECTORREF(___R1,___FIX(4L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_processor
#undef ___PH_LBL0
#define ___PH_LBL0 21
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_processor)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_processor)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_processor)
   ___SET_R1(___VECTORREF(___R1,___FIX(5L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_windowing
#undef ___PH_LBL0
#define ___PH_LBL0 23
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_windowing)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_windowing)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_windowing)
   ___SET_R1(___VECTORREF(___R1,___FIX(6L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_safety
#undef ___PH_LBL0
#define ___PH_LBL0 25
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_safety)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_safety)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_safety)
   ___SET_R1(___VECTORREF(___R1,___FIX(7L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_optimize_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 27
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_optimize_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_optimize_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_optimize_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(8L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 29
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(9L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 31
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(10L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(11L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 35
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(12L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 37
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(13L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(14L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 41
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(15L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_destination
#undef ___PH_LBL0
#define ___PH_LBL0 43
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_destination)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_destination)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_destination)
   ___SET_R1(___VECTORREF(___R1,___FIX(16L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_features
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_features)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_features)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_features)
   ___SET_R1(___VECTORREF(___R1,___FIX(17L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_properties
#undef ___PH_LBL0
#define ___PH_LBL0 47
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_properties)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_properties)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_properties)
   ___SET_R1(___VECTORREF(___R1,___FIX(18L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_configuration_2d_local_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 49
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_configuration_2d_local_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_configuration_2d_local_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_configuration_2d_local_3f_)
   ___SET_R1(___VECTORREF(___R1,___FIX(19L)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_configuration_2d_directory
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L1_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L2_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L3_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L4_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L5_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L6_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L7_jazz_3a_configuration_2d_directory)
___DEF_P_HLBL(___L8_jazz_3a_configuration_2d_directory)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_configuration_2d_directory)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_configuration_2d_directory)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_configuration_2d_directory)
   ___SET_R0(___LBL(2))
   ___JUMPINT(___SET_NARGS(1),___PRC(47),___L_jazz_3a_get_2d_configuration_2d_properties)
___DEF_SLBL(2,___L2_jazz_3a_configuration_2d_directory)
   ___SET_R2(___KEY_dynamic_3f_)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),27,___G_jazz_3a_getf)
___DEF_SLBL(3,___L3_jazz_3a_configuration_2d_directory)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L9_jazz_3a_configuration_2d_directory)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(4))
   ___JUMPINT(___SET_NARGS(1),___PRC(13),___L_jazz_3a_get_2d_configuration_2d_name)
___DEF_SLBL(4,___L4_jazz_3a_configuration_2d_directory)
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(5))
   ___JUMPINT(___SET_NARGS(1),___PRC(43),___L_jazz_3a_get_2d_configuration_2d_destination)
___DEF_SLBL(5,___L5_jazz_3a_configuration_2d_directory)
   ___SET_R2(___R1)
   ___SET_R3(___SUB(122))
   ___SET_R0(___STK(-7))
   ___SET_R1(___STK(-5))
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_3a_configuration_2d_directory)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(3),26,___G_jazz_3a_destination_2d_directory)
___DEF_GLBL(___L9_jazz_3a_configuration_2d_directory)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(7))
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(1),___PRC(43),___L_jazz_3a_get_2d_configuration_2d_destination)
___DEF_SLBL(7,___L7_jazz_3a_configuration_2d_directory)
   ___SET_R2(___GLO_jazz_3a_source)
   ___SET_R0(___STK(-3))
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_3a_configuration_2d_directory)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),25,___G_jazz_3a_build_2d_dynamic_2d_path)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_configuration_23_,"configuration#",___REF_SUB(0),5,0)
,___DEF_LBL_PROC(___H_configuration_23_,0,-1)
,___DEF_LBL_RET(___H_configuration_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_configuration_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_configuration_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_configuration_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_make_2d_configuration,"jazz:make-configuration",___REF_SUB(14),5,
0)
,___DEF_LBL_PROC(___H_jazz_3a_make_2d_configuration,19,-1)
,___DEF_LBL_RET(___H_jazz_3a_make_2d_configuration,___OFD(___RETI,24,16,0x3f0fffffL))
,___DEF_LBL_RET(___H_jazz_3a_make_2d_configuration,___OFD(___RETN,21,16,0xfffffL))
,___DEF_LBL_RET(___H_jazz_3a_make_2d_configuration,___OFD(___RETI,24,16,0x3f010000L))
,___DEF_LBL_RET(___H_jazz_3a_make_2d_configuration,___OFD(___RETI,24,16,0x3f010000L))
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_name,"jazz:get-configuration-name",___REF_SUB(
27),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_name,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_system,"jazz:get-configuration-system",___REF_SUB(
32),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_system,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_platform,"jazz:get-configuration-platform",
___REF_SUB(37),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_platform,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_compiler,"jazz:get-configuration-compiler",
___REF_SUB(42),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_compiler,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_processor,"jazz:get-configuration-processor",
___REF_SUB(47),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_processor,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_windowing,"jazz:get-configuration-windowing",
___REF_SUB(52),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_windowing,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_safety,"jazz:get-configuration-safety",___REF_SUB(
57),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_safety,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_optimize_3f_,"jazz:get-configuration-optimize?",
___REF_SUB(62),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_optimize_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_,"jazz:get-configuration-debug-environments?",
___REF_SUB(67),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_,"jazz:get-configuration-debug-location?",
___REF_SUB(72),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_,"jazz:get-configuration-debug-source?",
___REF_SUB(77),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_,"jazz:get-configuration-debug-foreign?",
___REF_SUB(82),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_,"jazz:get-configuration-track-memory?",
___REF_SUB(87),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_,"jazz:get-configuration-mutable-bindings?",
___REF_SUB(92),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_,"jazz:get-configuration-kernel-interpret?",
___REF_SUB(97),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_destination,"jazz:get-configuration-destination",
___REF_SUB(102),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_destination,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_features,"jazz:get-configuration-features",
___REF_SUB(107),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_features,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_properties,"jazz:get-configuration-properties",
___REF_SUB(112),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_properties,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_configuration_2d_local_3f_,"jazz:get-configuration-local?",___REF_SUB(
117),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_configuration_2d_local_3f_,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_configuration_2d_directory,"jazz:configuration-directory",___REF_SUB(
123),9,0)
,___DEF_LBL_PROC(___H_jazz_3a_configuration_2d_directory,1,-1)
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETI,8,8,0x3f04L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_jazz_3a_configuration_2d_directory,___IFD(___RETI,4,4,0x3f0L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,24,16)
               ___GCMAP2(0x3f0fffffL,0x0L)
               ___GCMAP0
,___DEF_OFD(___RETN,21,16)
               ___GCMAP1(0xfffffL)
,___DEF_OFD(___RETI,24,16)
               ___GCMAP2(0x3f010000L,0x0L)
               ___GCMAP0
,___DEF_OFD(___RETI,24,16)
               ___GCMAP2(0x3f010000L,0x0L)
               ___GCMAP0
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_configuration_23_,1)
___DEF_MOD_PRM(22,___G_jazz_3a_make_2d_configuration,7)
___DEF_MOD_PRM(12,___G_jazz_3a_get_2d_configuration_2d_name,13)
___DEF_MOD_PRM(18,___G_jazz_3a_get_2d_configuration_2d_system,15)
___DEF_MOD_PRM(14,___G_jazz_3a_get_2d_configuration_2d_platform,17)
___DEF_MOD_PRM(2,___G_jazz_3a_get_2d_configuration_2d_compiler,19)
___DEF_MOD_PRM(15,___G_jazz_3a_get_2d_configuration_2d_processor,21)
___DEF_MOD_PRM(20,___G_jazz_3a_get_2d_configuration_2d_windowing,23)
___DEF_MOD_PRM(17,___G_jazz_3a_get_2d_configuration_2d_safety,25)
___DEF_MOD_PRM(13,___G_jazz_3a_get_2d_configuration_2d_optimize_3f_,27)
___DEF_MOD_PRM(3,___G_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_,29)
___DEF_MOD_PRM(5,___G_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_,31)
___DEF_MOD_PRM(6,___G_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_,33)
___DEF_MOD_PRM(4,___G_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_,35)
___DEF_MOD_PRM(19,___G_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_,37)
___DEF_MOD_PRM(11,___G_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_,39)
___DEF_MOD_PRM(9,___G_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_,41)
___DEF_MOD_PRM(7,___G_jazz_3a_get_2d_configuration_2d_destination,43)
___DEF_MOD_PRM(8,___G_jazz_3a_get_2d_configuration_2d_features,45)
___DEF_MOD_PRM(16,___G_jazz_3a_get_2d_configuration_2d_properties,47)
___DEF_MOD_PRM(10,___G_jazz_3a_get_2d_configuration_2d_local_3f_,49)
___DEF_MOD_PRM(1,___G_jazz_3a_configuration_2d_directory,51)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_configuration_23_,1)
___DEF_MOD_GLO(22,___G_jazz_3a_make_2d_configuration,7)
___DEF_MOD_GLO(12,___G_jazz_3a_get_2d_configuration_2d_name,13)
___DEF_MOD_GLO(18,___G_jazz_3a_get_2d_configuration_2d_system,15)
___DEF_MOD_GLO(14,___G_jazz_3a_get_2d_configuration_2d_platform,17)
___DEF_MOD_GLO(2,___G_jazz_3a_get_2d_configuration_2d_compiler,19)
___DEF_MOD_GLO(15,___G_jazz_3a_get_2d_configuration_2d_processor,21)
___DEF_MOD_GLO(20,___G_jazz_3a_get_2d_configuration_2d_windowing,23)
___DEF_MOD_GLO(17,___G_jazz_3a_get_2d_configuration_2d_safety,25)
___DEF_MOD_GLO(13,___G_jazz_3a_get_2d_configuration_2d_optimize_3f_,27)
___DEF_MOD_GLO(3,___G_jazz_3a_get_2d_configuration_2d_debug_2d_environments_3f_,29)
___DEF_MOD_GLO(5,___G_jazz_3a_get_2d_configuration_2d_debug_2d_location_3f_,31)
___DEF_MOD_GLO(6,___G_jazz_3a_get_2d_configuration_2d_debug_2d_source_3f_,33)
___DEF_MOD_GLO(4,___G_jazz_3a_get_2d_configuration_2d_debug_2d_foreign_3f_,35)
___DEF_MOD_GLO(19,___G_jazz_3a_get_2d_configuration_2d_track_2d_memory_3f_,37)
___DEF_MOD_GLO(11,___G_jazz_3a_get_2d_configuration_2d_mutable_2d_bindings_3f_,39)
___DEF_MOD_GLO(9,___G_jazz_3a_get_2d_configuration_2d_kernel_2d_interpret_3f_,41)
___DEF_MOD_GLO(7,___G_jazz_3a_get_2d_configuration_2d_destination,43)
___DEF_MOD_GLO(8,___G_jazz_3a_get_2d_configuration_2d_features,45)
___DEF_MOD_GLO(16,___G_jazz_3a_get_2d_configuration_2d_properties,47)
___DEF_MOD_GLO(10,___G_jazz_3a_get_2d_configuration_2d_local_3f_,49)
___DEF_MOD_GLO(1,___G_jazz_3a_configuration_2d_directory,51)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Configuration,"Configuration")
___DEF_MOD_SYM(1,___S_compiler,"compiler")
___DEF_MOD_SYM(2,___S_configuration,"configuration")
___DEF_MOD_SYM(3,___S_debug_2d_environments_3f_,"debug-environments?")
___DEF_MOD_SYM(4,___S_debug_2d_foreign_3f_,"debug-foreign?")
___DEF_MOD_SYM(5,___S_debug_2d_location_3f_,"debug-location?")
___DEF_MOD_SYM(6,___S_debug_2d_source_3f_,"debug-source?")
___DEF_MOD_SYM(7,___S_destination,"destination")
___DEF_MOD_SYM(8,___S_features,"features")
___DEF_MOD_SYM(9,___S_kernel_2d_interpret_3f_,"kernel-interpret?")
___DEF_MOD_SYM(10,___S_kernel_2e_configuration,"kernel.configuration")
___DEF_MOD_SYM(11,___S_local_3f_,"local?")
___DEF_MOD_SYM(12,___S_mutable_2d_bindings_3f_,"mutable-bindings?")
___DEF_MOD_SYM(13,___S_name,"name")
___DEF_MOD_SYM(14,___S_optimize_3f_,"optimize?")
___DEF_MOD_SYM(15,___S_platform,"platform")
___DEF_MOD_SYM(16,___S_processor,"processor")
___DEF_MOD_SYM(17,___S_properties,"properties")
___DEF_MOD_SYM(18,___S_safety,"safety")
___DEF_MOD_SYM(19,___S_system,"system")
___DEF_MOD_SYM(20,___S_track_2d_memory_3f_,"track-memory?")
___DEF_MOD_SYM(21,___S_windowing,"windowing")
___DEF_MOD_KEY(0,___K_dynamic_3f_,"dynamic?")
___END_MOD_SYM_KEY

#endif
