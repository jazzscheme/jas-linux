#ifdef ___LINKER_INFO
; File: "TCP-Client.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.network.host.TCP-Client"
(("bin:jazz.network.host.TCP-Client"))
(
"TCP-Client"
"TCP-Client~Class"
"bin:jazz.network.host.TCP-Client"
"foundation.dialect"
"jazz"
"jazz.network.host.TCP-Client"
"jazz.network.host.TCP-Client:TCP-Client"
"jazz.network.host.TCP-Client:TCP-Client~Class"
"port"
"protected"
)
(
)
(
"bin:jazz.network.host.TCP-Client#"
"jazz.network.host.TCP-Client:TCP-Client"
"jazz.network.host.TCP-Client:TCP-Client:port!slot"
"jazz.network.host.TCP-Client:TCP-Client~Class"
)
(
"jazz.network.host.TCP-Client:TCP-Client!level"
"jazz.network.host.TCP-Client:TCP-Client:port!offset"
"jazz.network.host.TCP-Client:TCP-Client~Class!level"
)
(
"jazz.language.runtime.object:Object"
"jazz:add-slot"
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
#define ___MODULE_NAME "bin:jazz.network.host.TCP-Client"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client
#define ___MH_PROC ___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 10
#define ___GLOCOUNT 14
#define ___SUPCOUNT 7
#define ___CNSCOUNT 4
#define ___SUBCOUNT 30
#define ___LBLCOUNT 14
#define ___MODDESCR ___REF_SUB(29)
#include "gambit.h"

___NEED_SYM(___S_TCP_2d_Client)
___NEED_SYM(___S_TCP_2d_Client_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_network_2e_host_2e_TCP_2d_Client)
___NEED_SYM(___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
___NEED_SYM(___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
___NEED_SYM(___S_port)
___NEED_SYM(___S_protected)

___NEED_GLO(___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_21_level)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_offset)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
___NEED_GLO(___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class_21_level)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_TCP_2d_Client,"TCP-Client")
___DEF_SYM(1,___S_TCP_2d_Client_7e_Class,"TCP-Client~Class")
___DEF_SYM(2,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client,"bin:jazz.network.host.TCP-Client")

___DEF_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(4,___S_jazz,"jazz")
___DEF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client,"jazz.network.host.TCP-Client")
___DEF_SYM(6,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client,"jazz.network.host.TCP-Client:TCP-Client")

___DEF_SYM(7,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class,"jazz.network.host.TCP-Client:TCP-Client~Class")

___DEF_SYM(8,___S_port,"port")
___DEF_SYM(9,___S_protected,"protected")
___END_SYM

#define ___SYM_TCP_2d_Client ___SYM(0,___S_TCP_2d_Client)
#define ___SYM_TCP_2d_Client_7e_Class ___SYM(1,___S_TCP_2d_Client_7e_Class)
#define ___SYM_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client ___SYM(2,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client)
#define ___SYM_foundation_2e_dialect ___SYM(3,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(4,___S_jazz)
#define ___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client ___SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client)
#define ___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client ___SYM(6,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
#define ___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class ___SYM(7,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
#define ___SYM_port ___SYM(8,___S_port)
#define ___SYM_protected ___SYM(9,___S_protected)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.network.host.TCP-Client#")

___DEF_GLO(1,"jazz.network.host.TCP-Client:TCP-Client")

___DEF_GLO(2,"jazz.network.host.TCP-Client:TCP-Client!level")

___DEF_GLO(3,"jazz.network.host.TCP-Client:TCP-Client:port!offset")

___DEF_GLO(4,"jazz.network.host.TCP-Client:TCP-Client:port!slot")

___DEF_GLO(5,"jazz.network.host.TCP-Client:TCP-Client~Class")

___DEF_GLO(6,"jazz.network.host.TCP-Client:TCP-Client~Class!level")

___DEF_GLO(7,"jazz.language.runtime.object:Object")

___DEF_GLO(8,"jazz:add-slot")
___DEF_GLO(9,"jazz:global-bound?")
___DEF_GLO(10,"jazz:global-ref")
___DEF_GLO(11,"jazz:load-unit")
___DEF_GLO(12,"jazz:new-class")
___DEF_GLO(13,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_ ___GLO(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
#define ___PRM_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_ ___PRM(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client ___GLO(1,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client ___PRM(1,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_21_level ___GLO(2,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_21_level)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_21_level ___PRM(2,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_21_level)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_offset ___GLO(3,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_offset)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_offset ___PRM(3,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_offset)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot ___GLO(4,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot ___PRM(4,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class ___GLO(5,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class ___PRM(5,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
#define ___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class_21_level ___GLO(6,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class_21_level)
#define ___PRM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class_21_level ___PRM(6,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class_21_level)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object ___GLO(7,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object ___PRM(7,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(8,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(8,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(9,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(9,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(10,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(10,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(11,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(11,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(12,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(12,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_register_2d_module ___GLO(13,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(13,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_TCP_2d_Client),___REF_SYM(6,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client))
,___DEF_CNS(___REF_CNS(3),___REF_NUL)
,___DEF_CNS(___REF_SYM(1,___S_TCP_2d_Client_7e_Class),___REF_SYM(7,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X1,13UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(40))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(131115))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client))
               ___VEC1(___REF_FIX(131115))
               ___VEC0
___DEF_SUB_VEC(___X28,0UL)
               ___VEC0
___DEF_SUB_VEC(___X29,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_STK(1,___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),13,___G_jazz_3a_register_2d_module)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L16_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),12,___G_jazz_3a_new_2d_class)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___GOTO(___L13_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_GLBL(___L13_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_GLO(5,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class,___FIX(11L)))
   ___SET_GLO(6,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L15_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
   ___SET_R0(___LBL(9))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),12,___G_jazz_3a_new_2d_class)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___GOTO(___L14_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
___DEF_GLBL(___L14_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_GLO(1,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_port)
   ___SET_R0(___LBL(11))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),8,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_GLO(4,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_slot,___FIX(2L)))
   ___SET_GLO(3,___G_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_3a_port_21_offset,___R1)
   ___SET_R1(___VOID)
   ___POLL(12)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L15_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),10,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L16_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_)
   ___SET_R1(___SYM_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),10,___G_jazz_3a_global_2d_ref)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,"bin:jazz.network.host.TCP-Client#",
___REF_SUB(0),13,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_TCP_2d_Client,"TCP-Client")
___DEF_MOD_SYM(1,___S_TCP_2d_Client_7e_Class,"TCP-Client~Class")
___DEF_MOD_SYM(2,___S_bin_3a_jazz_2e_network_2e_host_2e_TCP_2d_Client,"bin:jazz.network.host.TCP-Client")

___DEF_MOD_SYM(3,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(4,___S_jazz,"jazz")
___DEF_MOD_SYM(5,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client,"jazz.network.host.TCP-Client")
___DEF_MOD_SYM(6,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client,"jazz.network.host.TCP-Client:TCP-Client")

___DEF_MOD_SYM(7,___S_jazz_2e_network_2e_host_2e_TCP_2d_Client_3a_TCP_2d_Client_7e_Class,"jazz.network.host.TCP-Client:TCP-Client~Class")

___DEF_MOD_SYM(8,___S_port,"port")
___DEF_MOD_SYM(9,___S_protected,"protected")
___END_MOD_SYM_KEY

#endif
