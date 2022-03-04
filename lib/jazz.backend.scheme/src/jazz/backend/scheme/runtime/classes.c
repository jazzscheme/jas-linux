#ifdef ___LINKER_INFO
; File: "classes.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.backend.scheme.runtime.classes"
(("bin:jazz.backend.scheme.runtime.classes"))
(
"Definition"
"bin:jazz.backend.scheme.runtime.classes"
"jazz.backend.scheme.runtime.classes"
"jazz:Definition"
"locator"
"module-name"
"name"
)
(
"test"
)
(
"bin:jazz.backend.scheme.runtime.classes#"
"jazz:Definition"
"jazz:allocate-definition"
"jazz:new-definition"
)
(
"jazz:Definition!core-level"
"jazz:get-definition-locator"
"jazz:register-definition"
)
(
"eq?"
"jazz:Field"
"jazz:Object-Class"
"jazz:add-slot"
"jazz:new-core-class"
"jazz:register-module-entry"
"jazz:set-core-class"
"make-table"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.backend.scheme.runtime.classes"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes
#define ___MH_PROC ___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 7
#define ___KEYCOUNT 1
#define ___GLOCOUNT 15
#define ___SUPCOUNT 7
#define ___SUBCOUNT 54
#define ___LBLCOUNT 24
#define ___MODDESCR ___REF_SUB(53)
#include "gambit.h"

___NEED_SYM(___S_Definition)
___NEED_SYM(___S_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes)
___NEED_SYM(___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes)
___NEED_SYM(___S_jazz_3a_Definition)
___NEED_SYM(___S_locator)
___NEED_SYM(___S_module_2d_name)
___NEED_SYM(___S_name)

___NEED_KEY(___K_test)

___NEED_GLO(___G_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_jazz_3a_Definition)
___NEED_GLO(___G_jazz_3a_Definition_21_core_2d_level)
___NEED_GLO(___G_jazz_3a_Field)
___NEED_GLO(___G_jazz_3a_Object_2d_Class)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_allocate_2d_definition)
___NEED_GLO(___G_jazz_3a_get_2d_definition_2d_locator)
___NEED_GLO(___G_jazz_3a_new_2d_core_2d_class)
___NEED_GLO(___G_jazz_3a_new_2d_definition)
___NEED_GLO(___G_jazz_3a_register_2d_definition)
___NEED_GLO(___G_jazz_3a_register_2d_module_2d_entry)
___NEED_GLO(___G_jazz_3a_set_2d_core_2d_class)
___NEED_GLO(___G_make_2d_table)

___BEGIN_SYM
___DEF_SYM(0,___S_Definition,"Definition")
___DEF_SYM(1,___S_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes,"bin:jazz.backend.scheme.runtime.classes")

___DEF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes,"jazz.backend.scheme.runtime.classes")

___DEF_SYM(3,___S_jazz_3a_Definition,"jazz:Definition")
___DEF_SYM(4,___S_locator,"locator")
___DEF_SYM(5,___S_module_2d_name,"module-name")
___DEF_SYM(6,___S_name,"name")
___END_SYM

#define ___SYM_Definition ___SYM(0,___S_Definition)
#define ___SYM_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes ___SYM(1,___S_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes)
#define ___SYM_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes ___SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes)
#define ___SYM_jazz_3a_Definition ___SYM(3,___S_jazz_3a_Definition)
#define ___SYM_locator ___SYM(4,___S_locator)
#define ___SYM_module_2d_name ___SYM(5,___S_module_2d_name)
#define ___SYM_name ___SYM(6,___S_name)

___BEGIN_KEY
___DEF_KEY(0,___K_test,"test")
___END_KEY

#define ___KEY_test ___KEY(0,___K_test)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.backend.scheme.runtime.classes#")

___DEF_GLO(1,"jazz:Definition")
___DEF_GLO(2,"jazz:Definition!core-level")
___DEF_GLO(3,"jazz:allocate-definition")
___DEF_GLO(4,"jazz:get-definition-locator")
___DEF_GLO(5,"jazz:new-definition")
___DEF_GLO(6,"jazz:register-definition")
___DEF_GLO(7,"eq?")
___DEF_GLO(8,"jazz:Field")
___DEF_GLO(9,"jazz:Object-Class")
___DEF_GLO(10,"jazz:add-slot")
___DEF_GLO(11,"jazz:new-core-class")
___DEF_GLO(12,"jazz:register-module-entry")
___DEF_GLO(13,"jazz:set-core-class")
___DEF_GLO(14,"make-table")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_ ___GLO(0,___G_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
#define ___PRM_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_ ___PRM(0,___G_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
#define ___GLO_jazz_3a_Definition ___GLO(1,___G_jazz_3a_Definition)
#define ___PRM_jazz_3a_Definition ___PRM(1,___G_jazz_3a_Definition)
#define ___GLO_jazz_3a_Definition_21_core_2d_level ___GLO(2,___G_jazz_3a_Definition_21_core_2d_level)
#define ___PRM_jazz_3a_Definition_21_core_2d_level ___PRM(2,___G_jazz_3a_Definition_21_core_2d_level)
#define ___GLO_jazz_3a_allocate_2d_definition ___GLO(3,___G_jazz_3a_allocate_2d_definition)
#define ___PRM_jazz_3a_allocate_2d_definition ___PRM(3,___G_jazz_3a_allocate_2d_definition)
#define ___GLO_jazz_3a_get_2d_definition_2d_locator ___GLO(4,___G_jazz_3a_get_2d_definition_2d_locator)
#define ___PRM_jazz_3a_get_2d_definition_2d_locator ___PRM(4,___G_jazz_3a_get_2d_definition_2d_locator)
#define ___GLO_jazz_3a_new_2d_definition ___GLO(5,___G_jazz_3a_new_2d_definition)
#define ___PRM_jazz_3a_new_2d_definition ___PRM(5,___G_jazz_3a_new_2d_definition)
#define ___GLO_jazz_3a_register_2d_definition ___GLO(6,___G_jazz_3a_register_2d_definition)
#define ___PRM_jazz_3a_register_2d_definition ___PRM(6,___G_jazz_3a_register_2d_definition)
#define ___GLO_eq_3f_ ___GLO(7,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(7,___G_eq_3f_)
#define ___GLO_jazz_3a_Field ___GLO(8,___G_jazz_3a_Field)
#define ___PRM_jazz_3a_Field ___PRM(8,___G_jazz_3a_Field)
#define ___GLO_jazz_3a_Object_2d_Class ___GLO(9,___G_jazz_3a_Object_2d_Class)
#define ___PRM_jazz_3a_Object_2d_Class ___PRM(9,___G_jazz_3a_Object_2d_Class)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(10,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(10,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_new_2d_core_2d_class ___GLO(11,___G_jazz_3a_new_2d_core_2d_class)
#define ___PRM_jazz_3a_new_2d_core_2d_class ___PRM(11,___G_jazz_3a_new_2d_core_2d_class)
#define ___GLO_jazz_3a_register_2d_module_2d_entry ___GLO(12,___G_jazz_3a_register_2d_module_2d_entry)
#define ___PRM_jazz_3a_register_2d_module_2d_entry ___PRM(12,___G_jazz_3a_register_2d_module_2d_entry)
#define ___GLO_jazz_3a_set_2d_core_2d_class ___GLO(13,___G_jazz_3a_set_2d_core_2d_class)
#define ___PRM_jazz_3a_set_2d_core_2d_class ___PRM(13,___G_jazz_3a_set_2d_core_2d_class)
#define ___GLO_make_2d_table ___GLO(14,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(14,___G_make_2d_table)

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
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(52))
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
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X21,0UL)
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_SUB(23))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SUB(24))
               ___VEC1(___REF_SUB(26))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(45))
               ___VEC0
___DEF_SUB_VEC(___X28,0UL)
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X30,4UL)
               ___VEC1(___REF_SUB(31))
               ___VEC1(___REF_SUB(33))
               ___VEC1(___REF_SUB(35))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(48))
               ___VEC0
___DEF_SUB_VEC(___X33,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X35,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X37,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(131121))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(4,___S_locator))
               ___VEC1(___REF_SYM(6,___S_name))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SUB(41))
               ___VEC1(___REF_SUB(52))
               ___VEC0
___DEF_SUB_VEC(___X41,5UL)
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(52))
               ___VEC0
___DEF_SUB_VEC(___X44,6UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(45))
               ___VEC1(___REF_FIX(393216))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(3080245))
               ___VEC0
___DEF_SUB_VEC(___X46,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(47))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(3080245))
               ___VEC0
___DEF_SUB_VEC(___X48,5UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(131125))
               ___VEC0
___DEF_SUB_VEC(___X50,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_FIX(131072))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
               ___VEC1(___REF_FIX(131125))
               ___VEC0
___DEF_SUB_VEC(___X52,3UL)
               ___VEC1(___REF_SYM(4,___S_locator))
               ___VEC1(___REF_SYM(6,___S_name))
               ___VEC1(___REF_SYM(5,___S_module_2d_name))
               ___VEC0
___DEF_SUB_VEC(___X53,5UL)
               ___VEC1(___REF_SYM(1,___S_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_get_2d_definition_2d_locator)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_allocate_2d_definition)
___DEF_M_HLBL(___L1_jazz_3a_allocate_2d_definition)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_new_2d_definition)
___DEF_M_HLBL(___L1_jazz_3a_new_2d_definition)
___DEF_M_HLBL(___L2_jazz_3a_new_2d_definition)
___DEF_M_HLBL(___L3_jazz_3a_new_2d_definition)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_register_2d_definition)
___DEF_M_HLBL(___L1_jazz_3a_register_2d_definition)
___DEF_M_HLBL(___L2_jazz_3a_register_2d_definition)
___DEF_M_HLBL(___L3_jazz_3a_register_2d_definition)
___DEF_M_HLBL(___L4_jazz_3a_register_2d_definition)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___SET_GLO(4,___G_jazz_3a_get_2d_definition_2d_locator,___PRC(9))
   ___SET_STK(1,___R0)
   ___SET_STK(5,___GLO_jazz_3a_Object_2d_Class)
   ___SET_R2(___PRM_eq_3f_)
   ___SET_R1(___KEY_test)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),14,___G_make_2d_table)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___SET_R2(___R1)
   ___SET_R3(___GLO_jazz_3a_Field)
   ___SET_R1(___SYM_jazz_3a_Definition)
   ___SET_R0(___LBL(3))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),11,___G_jazz_3a_new_2d_core_2d_class)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___SET_GLO(1,___G_jazz_3a_Definition,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_3a_Definition,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_3a_Definition_21_core_2d_level,___R1)
   ___SET_GLO(3,___G_jazz_3a_allocate_2d_definition,___PRC(11))
   ___SET_STK(1,___GLO_jazz_3a_Definition)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_locator)
   ___SET_R0(___LBL(4))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),10,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___SET_R2(___GLO_jazz_3a_Definition)
   ___SET_R1(___SYM_Definition)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),13,___G_jazz_3a_set_2d_core_2d_class)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___SET_GLO(5,___G_jazz_3a_new_2d_definition,___PRC(14))
   ___SET_GLO(6,___G_jazz_3a_register_2d_definition,___PRC(19))
   ___SET_R1(___VOID)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_get_2d_definition_2d_locator
#undef ___PH_LBL0
#define ___PH_LBL0 9
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_get_2d_definition_2d_locator)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_get_2d_definition_2d_locator)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_3a_get_2d_definition_2d_locator)
   ___SET_R2(___VECTORREF(___R1,___FIX(2L)))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_allocate_2d_definition
#undef ___PH_LBL0
#define ___PH_LBL0 11
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_allocate_2d_definition)
___DEF_P_HLBL(___L1_jazz_3a_allocate_2d_definition)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_allocate_2d_definition)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_allocate_2d_definition)
   ___BEGIN_ALLOC_VECTOR(3UL)
   ___ADD_VECTOR_ELEM(0,___GLO_jazz_3a_Definition)
   ___ADD_VECTOR_ELEM(1,___R1)
   ___ADD_VECTOR_ELEM(2,___R2)
   ___END_ALLOC_VECTOR(3)
   ___SET_R3(___GET_VECTOR(3))
   ___SUBTYPESET(___R3,___FIX(7L)) ___SET_R4(___R3)
   ___SET_R1(___R4)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_jazz_3a_allocate_2d_definition)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_new_2d_definition
#undef ___PH_LBL0
#define ___PH_LBL0 14
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_new_2d_definition)
___DEF_P_HLBL(___L1_jazz_3a_new_2d_definition)
___DEF_P_HLBL(___L2_jazz_3a_new_2d_definition)
___DEF_P_HLBL(___L3_jazz_3a_new_2d_definition)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_new_2d_definition)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_new_2d_definition)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_new_2d_definition)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G_jazz_3a_allocate_2d_definition)
___DEF_SLBL(2,___L2_jazz_3a_new_2d_definition)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_new_2d_definition)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_register_2d_definition
#undef ___PH_LBL0
#define ___PH_LBL0 19
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_register_2d_definition)
___DEF_P_HLBL(___L1_jazz_3a_register_2d_definition)
___DEF_P_HLBL(___L2_jazz_3a_register_2d_definition)
___DEF_P_HLBL(___L3_jazz_3a_register_2d_definition)
___DEF_P_HLBL(___L4_jazz_3a_register_2d_definition)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_register_2d_definition)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_3a_register_2d_definition)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R2(___R3)
   ___SET_R1(___STK(3))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_register_2d_definition)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G_jazz_3a_new_2d_definition)
___DEF_SLBL(2,___L2_jazz_3a_register_2d_definition)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),12,___G_jazz_3a_register_2d_module_2d_entry)
___DEF_SLBL(3,___L3_jazz_3a_register_2d_definition)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_register_2d_definition)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,"bin:jazz.backend.scheme.runtime.classes#",
___REF_SUB(0),7,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,___IFD(___RETI,8,0,0x3f11L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_get_2d_definition_2d_locator,0,___REF_SUB(17),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_get_2d_definition_2d_locator,1,-1)
,___DEF_LBL_INTRO(___H_jazz_3a_allocate_2d_definition,0,___REF_SUB(22),2,0)
,___DEF_LBL_PROC(___H_jazz_3a_allocate_2d_definition,2,-1)
,___DEF_LBL_RET(___H_jazz_3a_allocate_2d_definition,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_jazz_3a_new_2d_definition,0,___REF_SUB(29),4,0)
,___DEF_LBL_PROC(___H_jazz_3a_new_2d_definition,2,-1)
,___DEF_LBL_RET(___H_jazz_3a_new_2d_definition,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_definition,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_new_2d_definition,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_3a_register_2d_definition,0,___REF_SUB(40),5,0)
,___DEF_LBL_PROC(___H_jazz_3a_register_2d_definition,3,-1)
,___DEF_LBL_RET(___H_jazz_3a_register_2d_definition,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_definition,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_definition,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_register_2d_definition,___IFD(___RETI,8,0,0x3f0fL))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Definition,"Definition")
___DEF_MOD_SYM(1,___S_bin_3a_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes,"bin:jazz.backend.scheme.runtime.classes")

___DEF_MOD_SYM(2,___S_jazz_2e_backend_2e_scheme_2e_runtime_2e_classes,"jazz.backend.scheme.runtime.classes")

___DEF_MOD_SYM(3,___S_jazz_3a_Definition,"jazz:Definition")
___DEF_MOD_SYM(4,___S_locator,"locator")
___DEF_MOD_SYM(5,___S_module_2d_name,"module-name")
___DEF_MOD_SYM(6,___S_name,"name")
___DEF_MOD_KEY(0,___K_test,"test")
___END_MOD_SYM_KEY

#endif
