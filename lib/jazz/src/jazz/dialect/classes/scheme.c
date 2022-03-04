#ifdef ___LINKER_INFO
; File: "scheme.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.dialect.classes.scheme"
(("bin:jazz.dialect.classes.scheme"))
(
"Define-Declaration"
"Define-Macro-Declaration"
"Define-Special-Form-Declaration"
"Scheme-Dialect"
"Scheme-Walker"
"bin:jazz.dialect.classes.scheme"
"body"
"foundation.dialect"
"get-body"
"get-signature"
"get-specifier-source"
"get-value"
"jazz.dialect"
"jazz.dialect.classes.foundation"
"jazz.dialect.classes.scheme"
"jazz.dialect.classes.scheme:Define-Declaration"
"jazz.dialect.classes.scheme:Define-Macro-Declaration"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration"
"jazz.dialect.classes.scheme:Scheme-Dialect"
"jazz.dialect.classes.scheme:Scheme-Walker"
"jazz:Define-Declaration"
"jazz:Define-Macro-Declaration"
"jazz:Define-Special-Form-Declaration"
"jazz:Scheme-Dialect"
"jazz:Scheme-Walker"
"protected"
"signature"
"specifier-source"
"value"
)
(
)
(
"bin:jazz.dialect.classes.scheme#"
"jazz.dialect.classes.scheme:Define-Declaration"
"jazz.dialect.classes.scheme:Define-Declaration:get-signature"
"jazz.dialect.classes.scheme:Define-Declaration:get-specifier-source"
"jazz.dialect.classes.scheme:Define-Declaration:get-value"
"jazz.dialect.classes.scheme:Define-Declaration:signature!offset"
"jazz.dialect.classes.scheme:Define-Declaration:signature!slot"
"jazz.dialect.classes.scheme:Define-Declaration:specifier-source!offset"
"jazz.dialect.classes.scheme:Define-Declaration:specifier-source!slot"
"jazz.dialect.classes.scheme:Define-Declaration:value!offset"
"jazz.dialect.classes.scheme:Define-Declaration:value!slot"
"jazz.dialect.classes.scheme:Define-Macro-Declaration"
"jazz.dialect.classes.scheme:Define-Macro-Declaration:body!offset"
"jazz.dialect.classes.scheme:Define-Macro-Declaration:body!slot"
"jazz.dialect.classes.scheme:Define-Macro-Declaration:get-body"
"jazz.dialect.classes.scheme:Define-Macro-Declaration:get-signature"
"jazz.dialect.classes.scheme:Define-Macro-Declaration:signature!offset"
"jazz.dialect.classes.scheme:Define-Macro-Declaration:signature!slot"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:body!offset"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:body!slot"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:get-body"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:get-signature"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:signature!offset"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:signature!slot"
"jazz.dialect.classes.scheme:Scheme-Dialect"
"jazz.dialect.classes.scheme:Scheme-Walker"
)
(
"jazz.dialect.classes.scheme:Define-Declaration!level"
"jazz.dialect.classes.scheme:Define-Macro-Declaration!level"
"jazz.dialect.classes.scheme:Define-Special-Form-Declaration!level"
"jazz.dialect.classes.scheme:Scheme-Dialect!level"
"jazz.dialect.classes.scheme:Scheme-Walker!level"
)
(
"jazz:Define-Declaration"
"jazz:Define-Macro-Declaration"
"jazz:Define-Special-Form-Declaration"
"jazz:Scheme-Dialect"
"jazz:Scheme-Walker"
"jazz:add-final-method"
"jazz:add-slot"
"jazz:load-unit"
"jazz:register-module"
"jazz:set-core-class-redefined"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.dialect.classes.scheme"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme
#define ___MH_PROC ___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 29
#define ___GLOCOUNT 42
#define ___SUPCOUNT 32
#define ___CNSCOUNT 11
#define ___SUBCOUNT 91
#define ___LBLCOUNT 41
#define ___MODDESCR ___REF_SUB(90)
#include "gambit.h"

___NEED_SYM(___S_Define_2d_Declaration)
___NEED_SYM(___S_Define_2d_Macro_2d_Declaration)
___NEED_SYM(___S_Define_2d_Special_2d_Form_2d_Declaration)
___NEED_SYM(___S_Scheme_2d_Dialect)
___NEED_SYM(___S_Scheme_2d_Walker)
___NEED_SYM(___S_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme)
___NEED_SYM(___S_body)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_body)
___NEED_SYM(___S_get_2d_signature)
___NEED_SYM(___S_get_2d_specifier_2d_source)
___NEED_SYM(___S_get_2d_value)
___NEED_SYM(___S_jazz_2e_dialect)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_foundation)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_scheme)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect)
___NEED_SYM(___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker)
___NEED_SYM(___S_jazz_3a_Define_2d_Declaration)
___NEED_SYM(___S_jazz_3a_Define_2d_Macro_2d_Declaration)
___NEED_SYM(___S_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
___NEED_SYM(___S_jazz_3a_Scheme_2d_Dialect)
___NEED_SYM(___S_jazz_3a_Scheme_2d_Walker)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_signature)
___NEED_SYM(___S_specifier_2d_source)
___NEED_SYM(___S_value)

___NEED_GLO(___G_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_21_level)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_21_level)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_21_level)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect_21_level)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker)
___NEED_GLO(___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker_21_level)
___NEED_GLO(___G_jazz_3a_Define_2d_Declaration)
___NEED_GLO(___G_jazz_3a_Define_2d_Macro_2d_Declaration)
___NEED_GLO(___G_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
___NEED_GLO(___G_jazz_3a_Scheme_2d_Dialect)
___NEED_GLO(___G_jazz_3a_Scheme_2d_Walker)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_jazz_3a_set_2d_core_2d_class_2d_redefined)

___BEGIN_SYM
___DEF_SYM(0,___S_Define_2d_Declaration,"Define-Declaration")
___DEF_SYM(1,___S_Define_2d_Macro_2d_Declaration,"Define-Macro-Declaration")
___DEF_SYM(2,___S_Define_2d_Special_2d_Form_2d_Declaration,"Define-Special-Form-Declaration")

___DEF_SYM(3,___S_Scheme_2d_Dialect,"Scheme-Dialect")
___DEF_SYM(4,___S_Scheme_2d_Walker,"Scheme-Walker")
___DEF_SYM(5,___S_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme,"bin:jazz.dialect.classes.scheme")

___DEF_SYM(6,___S_body,"body")
___DEF_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(8,___S_get_2d_body,"get-body")
___DEF_SYM(9,___S_get_2d_signature,"get-signature")
___DEF_SYM(10,___S_get_2d_specifier_2d_source,"get-specifier-source")
___DEF_SYM(11,___S_get_2d_value,"get-value")
___DEF_SYM(12,___S_jazz_2e_dialect,"jazz.dialect")
___DEF_SYM(13,___S_jazz_2e_dialect_2e_classes_2e_foundation,"jazz.dialect.classes.foundation")

___DEF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme,"jazz.dialect.classes.scheme")
___DEF_SYM(15,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration,"jazz.dialect.classes.scheme:Define-Declaration")

___DEF_SYM(16,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration,"jazz.dialect.classes.scheme:Define-Macro-Declaration")

___DEF_SYM(17,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration")

___DEF_SYM(18,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect,"jazz.dialect.classes.scheme:Scheme-Dialect")

___DEF_SYM(19,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker,"jazz.dialect.classes.scheme:Scheme-Walker")

___DEF_SYM(20,___S_jazz_3a_Define_2d_Declaration,"jazz:Define-Declaration")
___DEF_SYM(21,___S_jazz_3a_Define_2d_Macro_2d_Declaration,"jazz:Define-Macro-Declaration")

___DEF_SYM(22,___S_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration,"jazz:Define-Special-Form-Declaration")

___DEF_SYM(23,___S_jazz_3a_Scheme_2d_Dialect,"jazz:Scheme-Dialect")
___DEF_SYM(24,___S_jazz_3a_Scheme_2d_Walker,"jazz:Scheme-Walker")
___DEF_SYM(25,___S_protected,"protected")
___DEF_SYM(26,___S_signature,"signature")
___DEF_SYM(27,___S_specifier_2d_source,"specifier-source")
___DEF_SYM(28,___S_value,"value")
___END_SYM

#define ___SYM_Define_2d_Declaration ___SYM(0,___S_Define_2d_Declaration)
#define ___SYM_Define_2d_Macro_2d_Declaration ___SYM(1,___S_Define_2d_Macro_2d_Declaration)
#define ___SYM_Define_2d_Special_2d_Form_2d_Declaration ___SYM(2,___S_Define_2d_Special_2d_Form_2d_Declaration)
#define ___SYM_Scheme_2d_Dialect ___SYM(3,___S_Scheme_2d_Dialect)
#define ___SYM_Scheme_2d_Walker ___SYM(4,___S_Scheme_2d_Walker)
#define ___SYM_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme ___SYM(5,___S_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme)
#define ___SYM_body ___SYM(6,___S_body)
#define ___SYM_foundation_2e_dialect ___SYM(7,___S_foundation_2e_dialect)
#define ___SYM_get_2d_body ___SYM(8,___S_get_2d_body)
#define ___SYM_get_2d_signature ___SYM(9,___S_get_2d_signature)
#define ___SYM_get_2d_specifier_2d_source ___SYM(10,___S_get_2d_specifier_2d_source)
#define ___SYM_get_2d_value ___SYM(11,___S_get_2d_value)
#define ___SYM_jazz_2e_dialect ___SYM(12,___S_jazz_2e_dialect)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_foundation ___SYM(13,___S_jazz_2e_dialect_2e_classes_2e_foundation)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_scheme ___SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration ___SYM(15,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration ___SYM(16,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration ___SYM(17,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect ___SYM(18,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect)
#define ___SYM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker ___SYM(19,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker)
#define ___SYM_jazz_3a_Define_2d_Declaration ___SYM(20,___S_jazz_3a_Define_2d_Declaration)
#define ___SYM_jazz_3a_Define_2d_Macro_2d_Declaration ___SYM(21,___S_jazz_3a_Define_2d_Macro_2d_Declaration)
#define ___SYM_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration ___SYM(22,___S_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
#define ___SYM_jazz_3a_Scheme_2d_Dialect ___SYM(23,___S_jazz_3a_Scheme_2d_Dialect)
#define ___SYM_jazz_3a_Scheme_2d_Walker ___SYM(24,___S_jazz_3a_Scheme_2d_Walker)
#define ___SYM_protected ___SYM(25,___S_protected)
#define ___SYM_signature ___SYM(26,___S_signature)
#define ___SYM_specifier_2d_source ___SYM(27,___S_specifier_2d_source)
#define ___SYM_value ___SYM(28,___S_value)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.dialect.classes.scheme#")
___DEF_GLO(1,"jazz.dialect.classes.scheme:Define-Declaration")

___DEF_GLO(2,"jazz.dialect.classes.scheme:Define-Declaration!level")

___DEF_GLO(3,"jazz.dialect.classes.scheme:Define-Declaration:get-signature")

___DEF_GLO(4,"jazz.dialect.classes.scheme:Define-Declaration:get-specifier-source")

___DEF_GLO(5,"jazz.dialect.classes.scheme:Define-Declaration:get-value")

___DEF_GLO(6,"jazz.dialect.classes.scheme:Define-Declaration:signature!offset")

___DEF_GLO(7,"jazz.dialect.classes.scheme:Define-Declaration:signature!slot")

___DEF_GLO(8,"jazz.dialect.classes.scheme:Define-Declaration:specifier-source!offset")

___DEF_GLO(9,"jazz.dialect.classes.scheme:Define-Declaration:specifier-source!slot")

___DEF_GLO(10,"jazz.dialect.classes.scheme:Define-Declaration:value!offset")

___DEF_GLO(11,"jazz.dialect.classes.scheme:Define-Declaration:value!slot")

___DEF_GLO(12,"jazz.dialect.classes.scheme:Define-Macro-Declaration")

___DEF_GLO(13,"jazz.dialect.classes.scheme:Define-Macro-Declaration!level")

___DEF_GLO(14,"jazz.dialect.classes.scheme:Define-Macro-Declaration:body!offset")

___DEF_GLO(15,"jazz.dialect.classes.scheme:Define-Macro-Declaration:body!slot")

___DEF_GLO(16,"jazz.dialect.classes.scheme:Define-Macro-Declaration:get-body")

___DEF_GLO(17,"jazz.dialect.classes.scheme:Define-Macro-Declaration:get-signature")

___DEF_GLO(18,"jazz.dialect.classes.scheme:Define-Macro-Declaration:signature!offset")

___DEF_GLO(19,"jazz.dialect.classes.scheme:Define-Macro-Declaration:signature!slot")

___DEF_GLO(20,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration")

___DEF_GLO(21,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration!level")

___DEF_GLO(22,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:body!offset")

___DEF_GLO(23,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:body!slot")

___DEF_GLO(24,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:get-body")

___DEF_GLO(25,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:get-signature")

___DEF_GLO(26,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:signature!offset")

___DEF_GLO(27,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration:signature!slot")

___DEF_GLO(28,"jazz.dialect.classes.scheme:Scheme-Dialect")

___DEF_GLO(29,"jazz.dialect.classes.scheme:Scheme-Dialect!level")

___DEF_GLO(30,"jazz.dialect.classes.scheme:Scheme-Walker")

___DEF_GLO(31,"jazz.dialect.classes.scheme:Scheme-Walker!level")

___DEF_GLO(32,"jazz:Define-Declaration")
___DEF_GLO(33,"jazz:Define-Macro-Declaration")
___DEF_GLO(34,"jazz:Define-Special-Form-Declaration")

___DEF_GLO(35,"jazz:Scheme-Dialect")
___DEF_GLO(36,"jazz:Scheme-Walker")
___DEF_GLO(37,"jazz:add-final-method")
___DEF_GLO(38,"jazz:add-slot")
___DEF_GLO(39,"jazz:load-unit")
___DEF_GLO(40,"jazz:register-module")
___DEF_GLO(41,"jazz:set-core-class-redefined")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_ ___GLO(0,___G_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
#define ___PRM_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_ ___PRM(0,___G_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration ___GLO(1,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration ___PRM(1,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_21_level ___GLO(2,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_21_level)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_21_level ___PRM(2,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_21_level)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature ___GLO(3,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature ___PRM(3,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source ___GLO(4,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source ___PRM(4,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value ___GLO(5,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value ___PRM(5,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset ___GLO(6,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset ___PRM(6,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot ___GLO(7,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot ___PRM(7,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset ___GLO(8,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset ___PRM(8,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot ___GLO(9,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot ___PRM(9,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset ___GLO(10,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset ___PRM(10,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot ___GLO(11,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot ___PRM(11,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration ___GLO(12,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration ___PRM(12,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_21_level ___GLO(13,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_21_level)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_21_level ___PRM(13,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_21_level)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset ___GLO(14,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset ___PRM(14,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot ___GLO(15,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot ___PRM(15,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body ___GLO(16,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body ___PRM(16,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature ___GLO(17,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature ___PRM(17,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset ___GLO(18,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset ___PRM(18,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot ___GLO(19,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot ___PRM(19,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration ___GLO(20,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration ___PRM(20,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_21_level ___GLO(21,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_21_level)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_21_level ___PRM(21,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_21_level)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset ___GLO(22,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset ___PRM(22,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot ___GLO(23,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot ___PRM(23,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body ___GLO(24,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body ___PRM(24,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature ___GLO(25,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature ___PRM(25,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset ___GLO(26,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset ___PRM(26,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot ___GLO(27,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot ___PRM(27,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect ___GLO(28,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect ___PRM(28,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect_21_level ___GLO(29,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect_21_level)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect_21_level ___PRM(29,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect_21_level)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker ___GLO(30,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker ___PRM(30,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker)
#define ___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker_21_level ___GLO(31,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker_21_level)
#define ___PRM_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker_21_level ___PRM(31,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker_21_level)
#define ___GLO_jazz_3a_Define_2d_Declaration ___GLO(32,___G_jazz_3a_Define_2d_Declaration)
#define ___PRM_jazz_3a_Define_2d_Declaration ___PRM(32,___G_jazz_3a_Define_2d_Declaration)
#define ___GLO_jazz_3a_Define_2d_Macro_2d_Declaration ___GLO(33,___G_jazz_3a_Define_2d_Macro_2d_Declaration)
#define ___PRM_jazz_3a_Define_2d_Macro_2d_Declaration ___PRM(33,___G_jazz_3a_Define_2d_Macro_2d_Declaration)
#define ___GLO_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration ___GLO(34,___G_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
#define ___PRM_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration ___PRM(34,___G_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
#define ___GLO_jazz_3a_Scheme_2d_Dialect ___GLO(35,___G_jazz_3a_Scheme_2d_Dialect)
#define ___PRM_jazz_3a_Scheme_2d_Dialect ___PRM(35,___G_jazz_3a_Scheme_2d_Dialect)
#define ___GLO_jazz_3a_Scheme_2d_Walker ___GLO(36,___G_jazz_3a_Scheme_2d_Walker)
#define ___PRM_jazz_3a_Scheme_2d_Walker ___PRM(36,___G_jazz_3a_Scheme_2d_Walker)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(37,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(37,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(38,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(38,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(39,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(39,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(40,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(40,___G_jazz_3a_register_2d_module)
#define ___GLO_jazz_3a_set_2d_core_2d_class_2d_redefined ___GLO(41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)
#define ___PRM_jazz_3a_set_2d_core_2d_class_2d_redefined ___PRM(41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_Define_2d_Declaration),___REF_SYM(15,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(1,___S_Define_2d_Macro_2d_Declaration),___REF_SYM(16,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(2,___S_Define_2d_Special_2d_Form_2d_Declaration),___REF_SYM(17,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(3,___S_Scheme_2d_Dialect),___REF_SYM(18,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect))
,___DEF_CNS(___REF_CNS(9),___REF_NUL)
,___DEF_CNS(___REF_SYM(4,___S_Scheme_2d_Walker),___REF_SYM(19,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker))
,___DEF_CNS(___REF_SYM(13,___S_jazz_2e_dialect_2e_classes_2e_foundation),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(54))
               ___VEC0
___DEF_SUB_VEC(___X1,26UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131124))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131125))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131126))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131137))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131138))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131149))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(131150))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_FIX(22))
               ___VEC1(___REF_SUB(47))
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_FIX(23))
               ___VEC1(___REF_SUB(49))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(86))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_FIX(24))
               ___VEC1(___REF_SUB(51))
               ___VEC0
___DEF_SUB_VEC(___X51,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(94))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_FIX(25))
               ___VEC1(___REF_SUB(53))
               ___VEC0
___DEF_SUB_VEC(___X53,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(94))
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
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X59,0UL)
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X61,1UL)
               ___VEC1(___REF_SUB(62))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X64,0UL)
               ___VEC0
___DEF_SUB_VEC(___X65,2UL)
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X66,1UL)
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(68))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X69,0UL)
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(74))
               ___VEC0
___DEF_SUB_VEC(___X71,1UL)
               ___VEC1(___REF_SUB(72))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(73))
               ___VEC0
___DEF_SUB_VEC(___X73,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X74,0UL)
               ___VEC0
___DEF_SUB_VEC(___X75,2UL)
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_SUB(79))
               ___VEC0
___DEF_SUB_VEC(___X76,1UL)
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(78))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(62))
               ___VEC0
___DEF_SUB_VEC(___X79,0UL)
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SUB(81))
               ___VEC1(___REF_SUB(84))
               ___VEC0
___DEF_SUB_VEC(___X81,1UL)
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X84,0UL)
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X86,1UL)
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X89,0UL)
               ___VEC0
___DEF_SUB_VEC(___X90,5UL)
               ___VEC1(___REF_SYM(5,___S_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L22_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L23_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L24_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL(___L25_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L22_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L23_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L24_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___DEF_P_HLBL(___L25_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_R1(___SYM_jazz_2e_dialect)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_R1(___SYM_jazz_2e_dialect_2e_classes_2e_foundation)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___SYM_jazz_2e_dialect_2e_classes_2e_scheme)
   ___SET_R3(___CNS(0))
   ___SET_R2(___CNS(10))
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),40,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(1,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration,___GLO_jazz_3a_Define_2d_Declaration)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_21_level,___R1)
   ___SET_R2(___SYM_jazz_3a_Define_2d_Declaration)
   ___SET_R1(___SYM_Define_2d_Declaration)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_signature)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(7,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_slot,___FIX(2L)))
   ___SET_GLO(6,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset,___R1)
   ___SET_GLO(3,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature,___PRC(28))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
   ___SET_R2(___SYM_get_2d_signature)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_specifier_2d_source)
   ___SET_R0(___LBL(9))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(9,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_slot,___FIX(2L)))
   ___SET_GLO(8,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset,___R1)
   ___SET_GLO(4,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source,___PRC(30))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
   ___SET_R2(___SYM_get_2d_specifier_2d_source)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_value)
   ___SET_R0(___LBL(11))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(11,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_slot,___FIX(2L)))
   ___SET_GLO(10,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset,___R1)
   ___SET_GLO(5,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value,___PRC(32))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
   ___SET_R2(___SYM_get_2d_value)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(20,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration,___GLO_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration,___FIX(11L)))
   ___SET_GLO(21,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_21_level,___R1)
   ___SET_R2(___SYM_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R1(___SYM_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(2),41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_signature)
   ___SET_R0(___LBL(14))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(27,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_slot,___FIX(2L)))
   ___SET_GLO(26,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset,___R1)
   ___SET_GLO(25,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature,___PRC(34))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
   ___SET_R2(___SYM_get_2d_signature)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_body)
   ___SET_R0(___LBL(16))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(23,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_slot,___FIX(2L)))
   ___SET_GLO(22,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset,___R1)
   ___SET_GLO(24,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body,___PRC(36))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
   ___SET_R2(___SYM_get_2d_body)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(12,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration,___GLO_jazz_3a_Define_2d_Macro_2d_Declaration)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration,___FIX(11L)))
   ___SET_GLO(13,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_21_level,___R1)
   ___SET_R2(___SYM_jazz_3a_Define_2d_Macro_2d_Declaration)
   ___SET_R1(___SYM_Define_2d_Macro_2d_Declaration)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(2),41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_signature)
   ___SET_R0(___LBL(19))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(19,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_slot,___FIX(2L)))
   ___SET_GLO(18,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset,___R1)
   ___SET_GLO(17,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature,___PRC(38))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
   ___SET_R2(___SYM_get_2d_signature)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_STK(1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_body)
   ___SET_R0(___LBL(21))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),38,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(15,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_slot,___FIX(2L)))
   ___SET_GLO(14,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset,___R1)
   ___SET_GLO(16,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body,___PRC(40))
   ___SET_R3(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
   ___SET_R2(___SYM_get_2d_body)
   ___SET_R1(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration)
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(3),37,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(22,___L22_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(28,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect,___GLO_jazz_3a_Scheme_2d_Dialect)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect,___FIX(11L)))
   ___SET_GLO(29,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect_21_level,___R1)
   ___SET_R2(___SYM_jazz_3a_Scheme_2d_Dialect)
   ___SET_R1(___SYM_Scheme_2d_Dialect)
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(2),41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)
___DEF_SLBL(23,___L23_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___SET_GLO(30,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker,___GLO_jazz_3a_Scheme_2d_Walker)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker,___FIX(11L)))
   ___SET_GLO(31,___G_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker_21_level,___R1)
   ___SET_R2(___SYM_jazz_3a_Scheme_2d_Walker)
   ___SET_R1(___SYM_Scheme_2d_Walker)
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(2),41,___G_jazz_3a_set_2d_core_2d_class_2d_redefined)
___DEF_SLBL(24,___L24_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___POLL(25)
___DEF_SLBL(25,___L25_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature
#undef ___PH_LBL0
#define ___PH_LBL0 28
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_signature_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_specifier_2d_source_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value
#undef ___PH_LBL0
#define ___PH_LBL0 32
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_value_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature
#undef ___PH_LBL0
#define ___PH_LBL0 34
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_signature_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body
#undef ___PH_LBL0
#define ___PH_LBL0 36
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_body_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature
#undef ___PH_LBL0
#define ___PH_LBL0 38
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_signature_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body
#undef ___PH_LBL0
#define ___PH_LBL0 40
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_body_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,"bin:jazz.dialect.classes.scheme#",
___REF_SUB(0),26,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature,0,___REF_SUB(55),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_signature,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source,0,___REF_SUB(60),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_specifier_2d_source,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value,0,___REF_SUB(65),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration_3a_get_2d_value,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature,0,___REF_SUB(70),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_signature,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body,0,___REF_SUB(75),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration_3a_get_2d_body,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature,0,___REF_SUB(80),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_signature,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body,0,___REF_SUB(85),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration_3a_get_2d_body,1,-1)
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_Define_2d_Declaration,"Define-Declaration")
___DEF_MOD_SYM(1,___S_Define_2d_Macro_2d_Declaration,"Define-Macro-Declaration")
___DEF_MOD_SYM(2,___S_Define_2d_Special_2d_Form_2d_Declaration,"Define-Special-Form-Declaration")

___DEF_MOD_SYM(3,___S_Scheme_2d_Dialect,"Scheme-Dialect")
___DEF_MOD_SYM(4,___S_Scheme_2d_Walker,"Scheme-Walker")
___DEF_MOD_SYM(5,___S_bin_3a_jazz_2e_dialect_2e_classes_2e_scheme,"bin:jazz.dialect.classes.scheme")

___DEF_MOD_SYM(6,___S_body,"body")
___DEF_MOD_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(8,___S_get_2d_body,"get-body")
___DEF_MOD_SYM(9,___S_get_2d_signature,"get-signature")
___DEF_MOD_SYM(10,___S_get_2d_specifier_2d_source,"get-specifier-source")
___DEF_MOD_SYM(11,___S_get_2d_value,"get-value")
___DEF_MOD_SYM(12,___S_jazz_2e_dialect,"jazz.dialect")
___DEF_MOD_SYM(13,___S_jazz_2e_dialect_2e_classes_2e_foundation,"jazz.dialect.classes.foundation")

___DEF_MOD_SYM(14,___S_jazz_2e_dialect_2e_classes_2e_scheme,"jazz.dialect.classes.scheme")
___DEF_MOD_SYM(15,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Declaration,"jazz.dialect.classes.scheme:Define-Declaration")

___DEF_MOD_SYM(16,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Macro_2d_Declaration,"jazz.dialect.classes.scheme:Define-Macro-Declaration")

___DEF_MOD_SYM(17,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Define_2d_Special_2d_Form_2d_Declaration,"jazz.dialect.classes.scheme:Define-Special-Form-Declaration")

___DEF_MOD_SYM(18,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Dialect,"jazz.dialect.classes.scheme:Scheme-Dialect")

___DEF_MOD_SYM(19,___S_jazz_2e_dialect_2e_classes_2e_scheme_3a_Scheme_2d_Walker,"jazz.dialect.classes.scheme:Scheme-Walker")

___DEF_MOD_SYM(20,___S_jazz_3a_Define_2d_Declaration,"jazz:Define-Declaration")
___DEF_MOD_SYM(21,___S_jazz_3a_Define_2d_Macro_2d_Declaration,"jazz:Define-Macro-Declaration")

___DEF_MOD_SYM(22,___S_jazz_3a_Define_2d_Special_2d_Form_2d_Declaration,"jazz:Define-Special-Form-Declaration")

___DEF_MOD_SYM(23,___S_jazz_3a_Scheme_2d_Dialect,"jazz:Scheme-Dialect")
___DEF_MOD_SYM(24,___S_jazz_3a_Scheme_2d_Walker,"jazz:Scheme-Walker")
___DEF_MOD_SYM(25,___S_protected,"protected")
___DEF_MOD_SYM(26,___S_signature,"signature")
___DEF_MOD_SYM(27,___S_specifier_2d_source,"specifier-source")
___DEF_MOD_SYM(28,___S_value,"value")
___END_MOD_SYM_KEY

#endif
