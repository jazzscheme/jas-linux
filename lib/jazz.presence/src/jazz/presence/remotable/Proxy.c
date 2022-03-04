#ifdef ___LINKER_INFO
; File: "Proxy.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.presence.remotable.Proxy"
(("bin:jazz.presence.remotable.Proxy"))
(
"Proxy"
"Proxy~Class"
"bin:jazz.presence.remotable.Proxy"
"foundation.dialect"
"get-presence"
"initialize"
"jazz"
"jazz.presence"
"jazz.presence.remotable.Proxy"
"jazz.presence.remotable.Proxy:Proxy"
"jazz.presence.remotable.Proxy:Proxy~Class"
"live?"
"nextmethod"
"presence"
"protected"
"rest"
"self"
)
(
)
(
"bin:jazz.presence.remotable.Proxy#"
"jazz.presence.remotable.Proxy:Proxy"
"jazz.presence.remotable.Proxy:Proxy:get-presence"
"jazz.presence.remotable.Proxy:Proxy:initialize"
"jazz.presence.remotable.Proxy:Proxy:initialize!node"
"jazz.presence.remotable.Proxy:Proxy:live?"
"jazz.presence.remotable.Proxy:Proxy:presence!offset"
"jazz.presence.remotable.Proxy:Proxy:presence!slot"
"jazz.presence.remotable.Proxy:Proxy~Class"
)
(
"jazz.presence.remotable.Proxy:Proxy!level"
"jazz.presence.remotable.Proxy:Proxy:live?!rank"
"jazz.presence.remotable.Proxy:Proxy~Class!level"
)
(
"jazz.language.runtime.object:Object"
"jazz:add-final-method"
"jazz:add-method-node"
"jazz:add-slot"
"jazz:add-virtual-method"
"jazz:call-into-abstract"
"jazz:global-bound?"
"jazz:global-ref"
"jazz:load-unit"
"jazz:new-class"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.presence.remotable.Proxy"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy
#define ___MH_PROC ___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 17
#define ___GLOCOUNT 23
#define ___SUPCOUNT 12
#define ___CNSCOUNT 4
#define ___SUBCOUNT 65
#define ___LBLCOUNT 30
#define ___OFDCOUNT 1
#define ___MODDESCR ___REF_SUB(64)
#include "gambit.h"

___NEED_SYM(___S_Proxy)
___NEED_SYM(___S_Proxy_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_presence)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_presence)
___NEED_SYM(___S_jazz_2e_presence_2e_remotable_2e_Proxy)
___NEED_SYM(___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
___NEED_SYM(___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
___NEED_SYM(___S_live_3f_)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_presence)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_rest)
___NEED_SYM(___S_self)

___NEED_GLO(___G_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_21_level)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f__21_rank)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
___NEED_GLO(___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class_21_level)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_add_2d_virtual_2d_method)
___NEED_GLO(___G_jazz_3a_call_2d_into_2d_abstract)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_Proxy,"Proxy")
___DEF_SYM(1,___S_Proxy_7e_Class,"Proxy~Class")
___DEF_SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy,"bin:jazz.presence.remotable.Proxy")

___DEF_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(4,___S_get_2d_presence,"get-presence")
___DEF_SYM(5,___S_initialize,"initialize")
___DEF_SYM(6,___S_jazz,"jazz")
___DEF_SYM(7,___S_jazz_2e_presence,"jazz.presence")
___DEF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy,"jazz.presence.remotable.Proxy")

___DEF_SYM(9,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy,"jazz.presence.remotable.Proxy:Proxy")

___DEF_SYM(10,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class,"jazz.presence.remotable.Proxy:Proxy~Class")

___DEF_SYM(11,___S_live_3f_,"live?")
___DEF_SYM(12,___S_nextmethod,"nextmethod")
___DEF_SYM(13,___S_presence,"presence")
___DEF_SYM(14,___S_protected,"protected")
___DEF_SYM(15,___S_rest,"rest")
___DEF_SYM(16,___S_self,"self")
___END_SYM

#define ___SYM_Proxy ___SYM(0,___S_Proxy)
#define ___SYM_Proxy_7e_Class ___SYM(1,___S_Proxy_7e_Class)
#define ___SYM_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy ___SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy)
#define ___SYM_foundation_2e_dialect ___SYM(3,___S_foundation_2e_dialect)
#define ___SYM_get_2d_presence ___SYM(4,___S_get_2d_presence)
#define ___SYM_initialize ___SYM(5,___S_initialize)
#define ___SYM_jazz ___SYM(6,___S_jazz)
#define ___SYM_jazz_2e_presence ___SYM(7,___S_jazz_2e_presence)
#define ___SYM_jazz_2e_presence_2e_remotable_2e_Proxy ___SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy)
#define ___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy ___SYM(9,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
#define ___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class ___SYM(10,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
#define ___SYM_live_3f_ ___SYM(11,___S_live_3f_)
#define ___SYM_nextmethod ___SYM(12,___S_nextmethod)
#define ___SYM_presence ___SYM(13,___S_presence)
#define ___SYM_protected ___SYM(14,___S_protected)
#define ___SYM_rest ___SYM(15,___S_rest)
#define ___SYM_self ___SYM(16,___S_self)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.presence.remotable.Proxy#")

___DEF_GLO(1,"jazz.presence.remotable.Proxy:Proxy")

___DEF_GLO(2,"jazz.presence.remotable.Proxy:Proxy!level")

___DEF_GLO(3,"jazz.presence.remotable.Proxy:Proxy:get-presence")

___DEF_GLO(4,"jazz.presence.remotable.Proxy:Proxy:initialize")

___DEF_GLO(5,"jazz.presence.remotable.Proxy:Proxy:initialize!node")

___DEF_GLO(6,"jazz.presence.remotable.Proxy:Proxy:live?")

___DEF_GLO(7,"jazz.presence.remotable.Proxy:Proxy:live?!rank")

___DEF_GLO(8,"jazz.presence.remotable.Proxy:Proxy:presence!offset")

___DEF_GLO(9,"jazz.presence.remotable.Proxy:Proxy:presence!slot")

___DEF_GLO(10,"jazz.presence.remotable.Proxy:Proxy~Class")

___DEF_GLO(11,"jazz.presence.remotable.Proxy:Proxy~Class!level")

___DEF_GLO(12,"jazz.language.runtime.object:Object")

___DEF_GLO(13,"jazz:add-final-method")
___DEF_GLO(14,"jazz:add-method-node")
___DEF_GLO(15,"jazz:add-slot")
___DEF_GLO(16,"jazz:add-virtual-method")
___DEF_GLO(17,"jazz:call-into-abstract")
___DEF_GLO(18,"jazz:global-bound?")
___DEF_GLO(19,"jazz:global-ref")
___DEF_GLO(20,"jazz:load-unit")
___DEF_GLO(21,"jazz:new-class")
___DEF_GLO(22,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_ ___GLO(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
#define ___PRM_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_ ___PRM(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy ___GLO(1,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy ___PRM(1,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_21_level ___GLO(2,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_21_level)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_21_level ___PRM(2,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_21_level)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence ___GLO(3,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence ___PRM(3,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize ___GLO(4,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize ___PRM(4,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node ___GLO(5,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node ___PRM(5,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_ ___GLO(6,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_ ___PRM(6,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f__21_rank ___GLO(7,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f__21_rank)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f__21_rank ___PRM(7,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f__21_rank)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset ___GLO(8,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset ___PRM(8,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot ___GLO(9,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot ___PRM(9,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class ___GLO(10,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class ___PRM(10,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
#define ___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class_21_level ___GLO(11,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class_21_level)
#define ___PRM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class_21_level ___PRM(11,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class_21_level)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object ___GLO(12,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object ___PRM(12,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(13,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(13,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(14,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(14,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(15,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(15,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_add_2d_virtual_2d_method ___GLO(16,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___PRM_jazz_3a_add_2d_virtual_2d_method ___PRM(16,___G_jazz_3a_add_2d_virtual_2d_method)
#define ___GLO_jazz_3a_call_2d_into_2d_abstract ___GLO(17,___G_jazz_3a_call_2d_into_2d_abstract)
#define ___PRM_jazz_3a_call_2d_into_2d_abstract ___PRM(17,___G_jazz_3a_call_2d_into_2d_abstract)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(18,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(18,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(19,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(19,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(20,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(20,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(21,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(21,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_register_2d_module ___GLO(22,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(22,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_Proxy),___REF_SYM(9,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(1,___S_Proxy_7e_Class),___REF_SYM(10,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(36))
               ___VEC0
___DEF_SUB_VEC(___X1,17UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131118))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131126))
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
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X41,0UL)
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SUB(43))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X43,4UL)
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X46,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(360450))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(262194))
               ___VEC0
___DEF_SUB_VEC(___X48,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(262194))
               ___VEC0
___DEF_SUB_VEC(___X50,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(262195))
               ___VEC0
___DEF_SUB_VEC(___X52,3UL)
               ___VEC1(___REF_SYM(12,___S_nextmethod))
               ___VEC1(___REF_SYM(13,___S_presence))
               ___VEC1(___REF_SYM(16,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X54,4UL)
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_SUB(61))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X57,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X59,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X61,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(15,___S_rest))
               ___VEC1(___REF_SYM(16,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X64,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___DEF_M_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___DEF_M_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___DEF_M_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_R1(___SYM_jazz_2e_presence)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_STK(1,___SYM_jazz_2e_presence_2e_remotable_2e_Proxy)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),22,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L20_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),21,___G_jazz_3a_new_2d_class)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___GOTO(___L17_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_GLBL(___L17_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_GLO(10,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class,___FIX(11L)))
   ___SET_GLO(11,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),18,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L19_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R0(___LBL(10))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),21,___G_jazz_3a_new_2d_class)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___GOTO(___L18_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
___DEF_GLBL(___L18_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_GLO(1,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_presence)
   ___SET_R0(___LBL(12))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),15,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_GLO(9,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_slot,___FIX(2L)))
   ___SET_GLO(8,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset,___R1)
   ___SET_GLO(3,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence,___PRC(19))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
   ___SET_R2(___SYM_get_2d_presence)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(3),13,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_GLO(4,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize,___PRC(21))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(3),14,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_GLO(5,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node,___R1)
   ___SET_GLO(6,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_,___PRC(26))
   ___SET_R3(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
   ___SET_R2(___SYM_live_3f_)
   ___SET_R1(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(3),16,___G_jazz_3a_add_2d_virtual_2d_method)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_GLO(7,___G_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f__21_rank,___R1)
   ___SET_R1(___VOID)
   ___POLL(16)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L19_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L20_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_)
   ___SET_R1(___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_3a_global_2d_ref)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence
#undef ___PH_LBL0
#define ___PH_LBL0 19
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 21
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
   ___SET_R3(___VECTORREF(___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(1),___R3)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
   ___VECTORSET(___STK(-6),___GLO_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_presence_21_offset,___STK(-5)) ___SET_R1(___STK(-6))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 26
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___DEF_P_HLBL(___L1_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___DEF_P_HLBL(___L2_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___DEF_P_HLBL(___L3_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
   ___IF_NARGS_EQ(1,___SET_R2(___NUL))
   ___GET_REST(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(9,___SYM_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_live_3f_)
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),17,___G_jazz_3a_call_2d_into_2d_abstract)
___DEF_SLBL(2,___L2_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,"bin:jazz.presence.remotable.Proxy#",
___REF_SUB(0),17,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence,0,___REF_SUB(37),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_get_2d_presence,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize,0,___REF_SUB(42),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_initialize,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_INTRO(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_,0,___REF_SUB(53),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_,___OFD(___RETI,9,0,0x3f107L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_3a_live_3f_,___IFD(___RETI,8,0,0x3f07L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f107L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Proxy,"Proxy")
___DEF_MOD_SYM(1,___S_Proxy_7e_Class,"Proxy~Class")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_presence_2e_remotable_2e_Proxy,"bin:jazz.presence.remotable.Proxy")

___DEF_MOD_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(4,___S_get_2d_presence,"get-presence")
___DEF_MOD_SYM(5,___S_initialize,"initialize")
___DEF_MOD_SYM(6,___S_jazz,"jazz")
___DEF_MOD_SYM(7,___S_jazz_2e_presence,"jazz.presence")
___DEF_MOD_SYM(8,___S_jazz_2e_presence_2e_remotable_2e_Proxy,"jazz.presence.remotable.Proxy")

___DEF_MOD_SYM(9,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy,"jazz.presence.remotable.Proxy:Proxy")

___DEF_MOD_SYM(10,___S_jazz_2e_presence_2e_remotable_2e_Proxy_3a_Proxy_7e_Class,"jazz.presence.remotable.Proxy:Proxy~Class")

___DEF_MOD_SYM(11,___S_live_3f_,"live?")
___DEF_MOD_SYM(12,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(13,___S_presence,"presence")
___DEF_MOD_SYM(14,___S_protected,"protected")
___DEF_MOD_SYM(15,___S_rest,"rest")
___DEF_MOD_SYM(16,___S_self,"self")
___END_MOD_SYM_KEY

#endif
