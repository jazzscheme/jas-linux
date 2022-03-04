#ifdef ___LINKER_INFO
; File: "parse.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.language.runtime.parse"
(("bin:jazz.language.runtime.parse"))
(
"bin:jazz.language.runtime.parse"
"foundation.dialect"
"jazz.dialect"
"jazz.language.runtime.exception"
"jazz.language.runtime.format"
"jazz.language.runtime.functional"
"jazz.language.runtime.kernel"
"jazz.language.runtime.parse"
"jazz.language.runtime.parse:parse-boolean"
"jazz.language.runtime.parse:parse-delimited-string"
"jazz.language.runtime.parse:parse-hexadecimal"
"jazz.language.runtime.parse:parse-integer"
"jazz.language.runtime.parse:parse-strings"
"obj^0"
"obj^4"
"parse-boolean"
"parse-delimited-string"
"parse-hexadecimal"
"parse-integer"
"parse-strings"
"protected"
"separator"
"string"
"temp.14"
"temp.9"
"x.10"
"x.15"
)
(
"object"
"separator"
"type"
)
(
"bin:jazz.language.runtime.parse#"
"jazz.language.runtime.parse:parse-strings"
)
(
"jazz.language.runtime.parse:parse-boolean"
"jazz.language.runtime.parse:parse-delimited-string"
"jazz.language.runtime.parse:parse-hexadecimal"
"jazz.language.runtime.parse:parse-integer"
)
(
"%%jazz.language.runtime.functional:split"
"error"
"jazz.language.runtime.exception:Conversion-Error"
"jazz.language.runtime.exception:signal"
"jazz.language.runtime.format:format"
"jazz.language.runtime.functional:ci=?"
"jazz.language.runtime.functional:empty-string?"
"jazz.language.runtime.functional:read-string-element"
"jazz.language.runtime.functional:trim-spaces"
"jazz.language.runtime.object:Object!level"
"jazz.language.runtime.object:Object:object-numeric?!rank"
"jazz:Class"
"jazz:Unspecified-Value"
"jazz:class-of"
"jazz:initialize-slots"
"jazz:load-unit"
"jazz:register-module"
"make-vector"
"string=?"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.language.runtime.parse"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_language_2e_runtime_2e_parse
#define ___MH_PROC ___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 27
#define ___KEYCOUNT 3
#define ___GLOCOUNT 25
#define ___SUPCOUNT 6
#define ___CNSCOUNT 10
#define ___SUBCOUNT 182
#define ___LBLCOUNT 79
#define ___MODDESCR ___REF_SUB(181)
#include "gambit.h"

___NEED_SYM(___S_bin_3a_jazz_2e_language_2e_runtime_2e_parse)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz_2e_dialect)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_exception)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_format)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_functional)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_kernel)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___NEED_SYM(___S_obj_5e_0)
___NEED_SYM(___S_obj_5e_4)
___NEED_SYM(___S_parse_2d_boolean)
___NEED_SYM(___S_parse_2d_delimited_2d_string)
___NEED_SYM(___S_parse_2d_hexadecimal)
___NEED_SYM(___S_parse_2d_integer)
___NEED_SYM(___S_parse_2d_strings)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_separator)
___NEED_SYM(___S_string)
___NEED_SYM(___S_temp_2e_14)
___NEED_SYM(___S_temp_2e_9)
___NEED_SYM(___S_x_2e_10)
___NEED_SYM(___S_x_2e_15)

___NEED_KEY(___K_object)
___NEED_KEY(___K_separator)
___NEED_KEY(___K_type)

___NEED_GLO(___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
___NEED_GLO(___G_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___NEED_GLO(___G_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_trim_2d_spaces)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object_21_level)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_object_3a_Object_3a_object_2d_numeric_3f__21_rank)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___NEED_GLO(___G_jazz_3a_Class)
___NEED_GLO(___G_jazz_3a_Unspecified_2d_Value)
___NEED_GLO(___G_jazz_3a_class_2d_of)
___NEED_GLO(___G_jazz_3a_initialize_2d_slots)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_make_2d_vector)
___NEED_GLO(___G_string_3d__3f_)

___BEGIN_SYM
___DEF_SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime_2e_parse,"bin:jazz.language.runtime.parse")

___DEF_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(2,___S_jazz_2e_dialect,"jazz.dialect")
___DEF_SYM(3,___S_jazz_2e_language_2e_runtime_2e_exception,"jazz.language.runtime.exception")

___DEF_SYM(4,___S_jazz_2e_language_2e_runtime_2e_format,"jazz.language.runtime.format")
___DEF_SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_SYM(6,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse,"jazz.language.runtime.parse")
___DEF_SYM(8,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,"jazz.language.runtime.parse:parse-boolean")

___DEF_SYM(9,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,"jazz.language.runtime.parse:parse-delimited-string")

___DEF_SYM(10,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,"jazz.language.runtime.parse:parse-hexadecimal")

___DEF_SYM(11,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,"jazz.language.runtime.parse:parse-integer")

___DEF_SYM(12,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,"jazz.language.runtime.parse:parse-strings")

___DEF_SYM(13,___S_obj_5e_0,"obj^0")
___DEF_SYM(14,___S_obj_5e_4,"obj^4")
___DEF_SYM(15,___S_parse_2d_boolean,"parse-boolean")
___DEF_SYM(16,___S_parse_2d_delimited_2d_string,"parse-delimited-string")
___DEF_SYM(17,___S_parse_2d_hexadecimal,"parse-hexadecimal")
___DEF_SYM(18,___S_parse_2d_integer,"parse-integer")
___DEF_SYM(19,___S_parse_2d_strings,"parse-strings")
___DEF_SYM(20,___S_protected,"protected")
___DEF_SYM(21,___S_separator,"separator")
___DEF_SYM(22,___S_string,"string")
___DEF_SYM(23,___S_temp_2e_14,"temp.14")
___DEF_SYM(24,___S_temp_2e_9,"temp.9")
___DEF_SYM(25,___S_x_2e_10,"x.10")
___DEF_SYM(26,___S_x_2e_15,"x.15")
___END_SYM

#define ___SYM_bin_3a_jazz_2e_language_2e_runtime_2e_parse ___SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime_2e_parse)
#define ___SYM_foundation_2e_dialect ___SYM(1,___S_foundation_2e_dialect)
#define ___SYM_jazz_2e_dialect ___SYM(2,___S_jazz_2e_dialect)
#define ___SYM_jazz_2e_language_2e_runtime_2e_exception ___SYM(3,___S_jazz_2e_language_2e_runtime_2e_exception)
#define ___SYM_jazz_2e_language_2e_runtime_2e_format ___SYM(4,___S_jazz_2e_language_2e_runtime_2e_format)
#define ___SYM_jazz_2e_language_2e_runtime_2e_functional ___SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional)
#define ___SYM_jazz_2e_language_2e_runtime_2e_kernel ___SYM(6,___S_jazz_2e_language_2e_runtime_2e_kernel)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse ___SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean ___SYM(8,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string ___SYM(9,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal ___SYM(10,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer ___SYM(11,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
#define ___SYM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings ___SYM(12,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
#define ___SYM_obj_5e_0 ___SYM(13,___S_obj_5e_0)
#define ___SYM_obj_5e_4 ___SYM(14,___S_obj_5e_4)
#define ___SYM_parse_2d_boolean ___SYM(15,___S_parse_2d_boolean)
#define ___SYM_parse_2d_delimited_2d_string ___SYM(16,___S_parse_2d_delimited_2d_string)
#define ___SYM_parse_2d_hexadecimal ___SYM(17,___S_parse_2d_hexadecimal)
#define ___SYM_parse_2d_integer ___SYM(18,___S_parse_2d_integer)
#define ___SYM_parse_2d_strings ___SYM(19,___S_parse_2d_strings)
#define ___SYM_protected ___SYM(20,___S_protected)
#define ___SYM_separator ___SYM(21,___S_separator)
#define ___SYM_string ___SYM(22,___S_string)
#define ___SYM_temp_2e_14 ___SYM(23,___S_temp_2e_14)
#define ___SYM_temp_2e_9 ___SYM(24,___S_temp_2e_9)
#define ___SYM_x_2e_10 ___SYM(25,___S_x_2e_10)
#define ___SYM_x_2e_15 ___SYM(26,___S_x_2e_15)

___BEGIN_KEY
___DEF_KEY(0,___K_object,"object")
___DEF_KEY(1,___K_separator,"separator")
___DEF_KEY(2,___K_type,"type")
___END_KEY

#define ___KEY_object ___KEY(0,___K_object)
#define ___KEY_separator ___KEY(1,___K_separator)
#define ___KEY_type ___KEY(2,___K_type)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.language.runtime.parse#")
___DEF_GLO(1,"jazz.language.runtime.parse:parse-boolean")

___DEF_GLO(2,"jazz.language.runtime.parse:parse-delimited-string")

___DEF_GLO(3,"jazz.language.runtime.parse:parse-hexadecimal")

___DEF_GLO(4,"jazz.language.runtime.parse:parse-integer")

___DEF_GLO(5,"jazz.language.runtime.parse:parse-strings")

___DEF_GLO(6,"%%jazz.language.runtime.functional:split")

___DEF_GLO(7,"error")
___DEF_GLO(8,"jazz.language.runtime.exception:Conversion-Error")

___DEF_GLO(9,"jazz.language.runtime.exception:signal")

___DEF_GLO(10,"jazz.language.runtime.format:format")

___DEF_GLO(11,"jazz.language.runtime.functional:ci=?")

___DEF_GLO(12,"jazz.language.runtime.functional:empty-string?")

___DEF_GLO(13,"jazz.language.runtime.functional:read-string-element")

___DEF_GLO(14,"jazz.language.runtime.functional:trim-spaces")

___DEF_GLO(15,"jazz.language.runtime.object:Object!level")

___DEF_GLO(16,"jazz.language.runtime.object:Object:object-numeric?!rank")

___DEF_GLO(17,"jazz:Class")
___DEF_GLO(18,"jazz:Unspecified-Value")
___DEF_GLO(19,"jazz:class-of")
___DEF_GLO(20,"jazz:initialize-slots")
___DEF_GLO(21,"jazz:load-unit")
___DEF_GLO(22,"jazz:register-module")
___DEF_GLO(23,"make-vector")
___DEF_GLO(24,"string=?")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_ ___GLO(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
#define ___PRM_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_ ___PRM(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean ___GLO(1,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
#define ___PRM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean ___PRM(1,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
#define ___GLO_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string ___GLO(2,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
#define ___PRM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string ___PRM(2,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
#define ___GLO_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal ___GLO(3,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
#define ___PRM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal ___PRM(3,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
#define ___GLO_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer ___GLO(4,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
#define ___PRM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer ___PRM(4,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
#define ___GLO_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings ___GLO(5,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
#define ___PRM_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings ___PRM(5,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
#define ___GLO__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split ___GLO(6,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
#define ___PRM__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split ___PRM(6,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
#define ___GLO_error ___GLO(7,___G_error)
#define ___PRM_error ___PRM(7,___G_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error ___GLO(8,___G_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error ___PRM(8,___G_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_signal ___GLO(9,___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_signal ___PRM(9,___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
#define ___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format ___GLO(10,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___PRM_jazz_2e_language_2e_runtime_2e_format_3a_format ___PRM(10,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_ ___GLO(11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_ ___PRM(11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_ ___GLO(12,___G_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_ ___PRM(12,___G_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element ___GLO(13,___G_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element ___PRM(13,___G_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_trim_2d_spaces ___GLO(14,___G_jazz_2e_language_2e_runtime_2e_functional_3a_trim_2d_spaces)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_trim_2d_spaces ___PRM(14,___G_jazz_2e_language_2e_runtime_2e_functional_3a_trim_2d_spaces)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object_21_level ___GLO(15,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object_21_level)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object_21_level ___PRM(15,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object_21_level)
#define ___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object_3a_object_2d_numeric_3f__21_rank ___GLO(16,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object_3a_object_2d_numeric_3f__21_rank)
#define ___PRM_jazz_2e_language_2e_runtime_2e_object_3a_Object_3a_object_2d_numeric_3f__21_rank ___PRM(16,___G_jazz_2e_language_2e_runtime_2e_object_3a_Object_3a_object_2d_numeric_3f__21_rank)
#define ___GLO_jazz_3a_Class ___GLO(17,___G_jazz_3a_Class)
#define ___PRM_jazz_3a_Class ___PRM(17,___G_jazz_3a_Class)
#define ___GLO_jazz_3a_Unspecified_2d_Value ___GLO(18,___G_jazz_3a_Unspecified_2d_Value)
#define ___PRM_jazz_3a_Unspecified_2d_Value ___PRM(18,___G_jazz_3a_Unspecified_2d_Value)
#define ___GLO_jazz_3a_class_2d_of ___GLO(19,___G_jazz_3a_class_2d_of)
#define ___PRM_jazz_3a_class_2d_of ___PRM(19,___G_jazz_3a_class_2d_of)
#define ___GLO_jazz_3a_initialize_2d_slots ___GLO(20,___G_jazz_3a_initialize_2d_slots)
#define ___PRM_jazz_3a_initialize_2d_slots ___PRM(20,___G_jazz_3a_initialize_2d_slots)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(21,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(21,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(22,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(22,___G_jazz_3a_register_2d_module)
#define ___GLO_make_2d_vector ___GLO(23,___G_make_2d_vector)
#define ___PRM_make_2d_vector ___PRM(23,___G_make_2d_vector)
#define ___GLO_string_3d__3f_ ___GLO(24,___G_string_3d__3f_)
#define ___PRM_string_3d__3f_ ___PRM(24,___G_string_3d__3f_)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(15,___S_parse_2d_boolean),___REF_SYM(8,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(16,___S_parse_2d_delimited_2d_string),___REF_SYM(9,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(17,___S_parse_2d_hexadecimal),___REF_SYM(10,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(18,___S_parse_2d_integer),___REF_SYM(11,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer))
,___DEF_CNS(___REF_CNS(9),___REF_NUL)
,___DEF_CNS(___REF_SYM(19,___S_parse_2d_strings),___REF_SYM(12,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(22))
               ___VEC0
___DEF_SUB_VEC(___X1,10UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X22,0UL)
               ___VEC0
___DEF_SUB_STR(___X23,7UL)
               ___STR7(105,110,116,101,103,101,114)
___DEF_SUB_STR(___X24,76UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,40,37,37,99,108,97)
               ___STR8(115,115,63,32,106,97,122,122)
               ___STR8(46,108,97,110,103,117,97,103)
               ___STR8(101,46,114,117,110,116,105,109)
               ___STR8(101,46,101,120,99,101,112,116)
               ___STR8(105,111,110,58,67,111,110,118)
               ___STR8(101,114,115,105,111,110,45,69)
               ___STR8(114,114,111,114,41,32,102,97)
               ___STR4(105,108,101,100)
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SUB(26))
               ___VEC1(___REF_SUB(55))
               ___VEC0
___DEF_SUB_VEC(___X26,14UL)
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
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(49))
               ___VEC0
___DEF_SUB_VEC(___X29,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1048626))
               ___VEC0
___DEF_SUB_VEC(___X31,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(32))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1048626))
               ___VEC0
___DEF_SUB_VEC(___X33,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional))
               ___VEC1(___REF_FIX(131914))
               ___VEC0
___DEF_SUB_VEC(___X35,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(786484))
               ___VEC0
___DEF_SUB_VEC(___X37,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(38))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(786484))
               ___VEC0
___DEF_SUB_VEC(___X39,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(786484))
               ___VEC0
___DEF_SUB_VEC(___X41,4UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(786484))
               ___VEC0
___DEF_SUB_VEC(___X43,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262196))
               ___VEC0
___DEF_SUB_VEC(___X45,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262196))
               ___VEC0
___DEF_SUB_VEC(___X47,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(786484))
               ___VEC0
___DEF_SUB_VEC(___X49,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(393267))
               ___VEC0
___DEF_SUB_VEC(___X51,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(393267))
               ___VEC0
___DEF_SUB_VEC(___X53,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional))
               ___VEC1(___REF_FIX(131914))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_SYM(22,___S_string))
               ___VEC1(___REF_SYM(13,___S_obj_5e_0))
               ___VEC0
___DEF_SUB_STR(___X56,5UL)
               ___STR5(35,120,123,97,125)
___DEF_SUB_VEC(___X57,2UL)
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_SUB(69))
               ___VEC0
___DEF_SUB_VEC(___X58,5UL)
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC0
___DEF_SUB_VEC(___X59,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(60))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(55))
               ___VEC0
___DEF_SUB_VEC(___X61,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1507384))
               ___VEC0
___DEF_SUB_VEC(___X63,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1507384))
               ___VEC0
___DEF_SUB_VEC(___X65,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X67,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131128))
               ___VEC0
___DEF_SUB_VEC(___X69,1UL)
               ___VEC1(___REF_SYM(22,___S_string))
               ___VEC0
___DEF_SUB_STR(___X70,2UL)
               ___STR2(35,102)
___DEF_SUB_STR(___X71,2UL)
               ___STR2(35,116)
___DEF_SUB_STR(___X72,7UL)
               ___STR7(98,111,111,108,101,97,110)
___DEF_SUB_STR(___X73,76UL)
               ___STR8(65,115,115,101,114,116,105,111)
               ___STR8(110,32,40,37,37,99,108,97)
               ___STR8(115,115,63,32,106,97,122,122)
               ___STR8(46,108,97,110,103,117,97,103)
               ___STR8(101,46,114,117,110,116,105,109)
               ___STR8(101,46,101,120,99,101,112,116)
               ___STR8(105,111,110,58,67,111,110,118)
               ___STR8(101,114,115,105,111,110,45,69)
               ___STR8(114,114,111,114,41,32,102,97)
               ___STR4(105,108,101,100)
___DEF_SUB_STR(___X74,1UL)
               ___STR1(116)
___DEF_SUB_STR(___X75,4UL)
               ___STR4(116,114,117,101)
___DEF_SUB_STR(___X76,1UL)
               ___STR1(102)
___DEF_SUB_STR(___X77,5UL)
               ___STR5(102,97,108,115,101)
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(114))
               ___VEC0
___DEF_SUB_VEC(___X79,17UL)
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
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(59))
               ___VEC0
___DEF_SUB_VEC(___X82,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(83))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(852029))
               ___VEC0
___DEF_SUB_VEC(___X84,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X85,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(852029))
               ___VEC0
___DEF_SUB_VEC(___X86,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(87))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(3276861))
               ___VEC0
___DEF_SUB_VEC(___X88,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(89))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(4784189))
               ___VEC0
___DEF_SUB_VEC(___X90,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(852030))
               ___VEC0
___DEF_SUB_VEC(___X92,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(3276862))
               ___VEC0
___DEF_SUB_VEC(___X94,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(95))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(4718654))
               ___VEC0
___DEF_SUB_VEC(___X96,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1441855))
               ___VEC0
___DEF_SUB_VEC(___X98,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X99,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1441855))
               ___VEC0
___DEF_SUB_VEC(___X100,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X101,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1441855))
               ___VEC0
___DEF_SUB_VEC(___X102,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X103,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1441855))
               ___VEC0
___DEF_SUB_VEC(___X104,3UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(105))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X105,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(917567))
               ___VEC0
___DEF_SUB_VEC(___X106,3UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(107))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X107,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(917567))
               ___VEC0
___DEF_SUB_VEC(___X108,3UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(109))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(1441855))
               ___VEC0
___DEF_SUB_VEC(___X110,3UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(2097214))
               ___VEC0
___DEF_SUB_VEC(___X112,3UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X113,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(2097213))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SYM(22,___S_string))
               ___VEC1(___REF_SYM(14,___S_obj_5e_4))
               ___VEC0
___DEF_SUB_STR(___X115,1UL)
               ___STR1(44)
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_KEY(1,___K_separator))
               ___VEC1(___REF_SUB(115))
               ___VEC0
___DEF_SUB_STR(___X117,2UL)
               ___STR2(123,125)
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(150))
               ___VEC0
___DEF_SUB_VEC(___X119,15UL)
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
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(121))
               ___VEC0
___DEF_SUB_VEC(___X121,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(66))
               ___VEC0
___DEF_SUB_VEC(___X122,5UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_FIX(360448))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X123,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(655427))
               ___VEC0
___DEF_SUB_VEC(___X124,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X125,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(655427))
               ___VEC0
___DEF_SUB_VEC(___X126,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(2162755))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(129))
               ___VEC0
___DEF_SUB_VEC(___X129,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(393284))
               ___VEC0
___DEF_SUB_VEC(___X130,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X131,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(589895))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(133))
               ___VEC0
___DEF_SUB_VEC(___X133,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X134,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(135))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X135,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X136,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(137))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X137,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X138,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X139,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(720966))
               ___VEC0
___DEF_SUB_VEC(___X140,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(141))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(720966))
               ___VEC0
___DEF_SUB_VEC(___X142,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(720966))
               ___VEC0
___DEF_SUB_VEC(___X144,4UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X146,4UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X148,4UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X150,4UL)
               ___VEC1(___REF_SYM(21,___S_separator))
               ___VEC1(___REF_SYM(22,___S_string))
               ___VEC1(___REF_SYM(24,___S_temp_2e_9))
               ___VEC1(___REF_SYM(25,___S_x_2e_10))
               ___VEC0
___DEF_SUB_STR(___X151,1UL)
               ___STR1(44)
___DEF_SUB_VEC(___X152,2UL)
               ___VEC1(___REF_KEY(1,___K_separator))
               ___VEC1(___REF_SUB(151))
               ___VEC0
___DEF_SUB_STR(___X153,1UL)
               ___STR1(32)
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_SUB(155))
               ___VEC1(___REF_SUB(180))
               ___VEC0
___DEF_SUB_VEC(___X155,12UL)
               ___VEC1(___REF_SUB(156))
               ___VEC1(___REF_SUB(158))
               ___VEC1(___REF_SUB(160))
               ___VEC1(___REF_SUB(162))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(172))
               ___VEC1(___REF_SUB(174))
               ___VEC1(___REF_SUB(176))
               ___VEC1(___REF_SUB(178))
               ___VEC0
___DEF_SUB_VEC(___X156,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(157))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(74))
               ___VEC0
___DEF_SUB_VEC(___X158,4UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(458829))
               ___VEC0
___DEF_SUB_VEC(___X160,4UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_FIX(98304))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(458829))
               ___VEC0
___DEF_SUB_VEC(___X162,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(163))
               ___VEC0
___DEF_SUB_VEC(___X163,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X164,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X166,3UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X168,3UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(589900))
               ___VEC0
___DEF_SUB_VEC(___X170,3UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(589900))
               ___VEC0
___DEF_SUB_VEC(___X172,3UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(65538))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(589900))
               ___VEC0
___DEF_SUB_VEC(___X174,4UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(175))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X175,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X176,4UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(177))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X177,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X178,4UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(179))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X179,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse))
               ___VEC1(___REF_FIX(131147))
               ___VEC0
___DEF_SUB_VEC(___X180,4UL)
               ___VEC1(___REF_SYM(21,___S_separator))
               ___VEC1(___REF_SYM(22,___S_string))
               ___VEC1(___REF_SYM(23,___S_temp_2e_14))
               ___VEC1(___REF_SYM(26,___S_x_2e_15))
               ___VEC0
___DEF_SUB_VEC(___X181,5UL)
               ___VEC1(___REF_SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime_2e_parse))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL(___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL(___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_M_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_R1(___SYM_jazz_2e_dialect)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_kernel)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_exception)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_format)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_R1(___SYM_jazz_2e_language_2e_runtime_2e_functional)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_STK(1,___SYM_jazz_2e_language_2e_runtime_2e_parse)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(8))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),22,___G_jazz_3a_register_2d_module)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___SET_GLO(4,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___PRC(12))
   ___SET_GLO(3,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,___PRC(27))
   ___SET_GLO(1,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___PRC(33))
   ___SET_GLO(5,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___PRC(51))
   ___SET_GLO(2,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___PRC(67))
   ___SET_R1(___VOID)
   ___POLL(9)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer
#undef ___PH_LBL0
#define ___PH_LBL0 12
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_P_HLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___END_IF
   ___GOTO(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___END_IF
___DEF_GLBL(___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_3a_class_2d_of)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R2(___VECTORREF(___GLO_jazz_3a_Class,___FIX(11L)))
   ___SET_R3(___VECTORREF(___R1,___FIX(11L)))
   ___IF(___NOT(___FIXGE(___R3,___R2)))
   ___GOTO(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___END_IF
   ___SET_R3(___VECTORREF(___R1,___FIX(4L)))
   ___SET_R3(___VECTORREF(___R3,___R2))
   ___IF(___NOT(___EQP(___R3,___GLO_jazz_3a_Class)))
   ___GOTO(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___END_IF
   ___SET_R2(___GLO_jazz_3a_Unspecified_2d_Value)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error,___FIX(10L)))
   ___SET_R0(___LBL(5))
   ___JUMPPRM(___SET_NARGS(2),___PRM_make_2d_vector)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SUBTYPESET(___R1,___FIX(7L)) ___SET_R2(___R1)
   ___VECTORSET(___R2,___FIX(0L),___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
   ___SET_STK(-5,___R2)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_initialize_2d_slots)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_STK(1,___STK(-5))
   ___SET_STK(2,___KEY_object)
   ___SET_R1(___STK(-6))
   ___SET_R3(___SUB(23))
   ___SET_R2(___KEY_type)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error,___FIX(13L)))
   ___SET_R4(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R4(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R0(___LBL(7))
   ___ADJFP(2)
   ___JUMPGENSAFE(___SET_NARGS(5),___R4)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R1(___SUB(24))
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_error)
___DEF_SLBL(10,___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
___DEF_GLBL(___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),13,___G_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element)
___DEF_SLBL(11,___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___POLL(12)
___DEF_SLBL(12,___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(13))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_3a_class_2d_of)
___DEF_SLBL(13,___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer)
   ___SET_R1(___VECTORREF(___R1,___FIX(13L)))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object_21_level))
   ___SET_R1(___VECTORREF(___R1,___GLO_jazz_2e_language_2e_runtime_2e_object_3a_Object_3a_object_2d_numeric_3f__21_rank))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal
#undef ___PH_LBL0
#define ___PH_LBL0 27
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(56))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),10,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),13,___G_jazz_2e_language_2e_runtime_2e_functional_3a_read_2d_string_2d_element)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_P_HLBL(___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L24_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SUB(70))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___GOTO(___L23_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L18_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
___DEF_GLBL(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___FAL)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L18_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SUB(71))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L19_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___GOTO(___L22_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L20_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
___DEF_GLBL(___L19_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___TRU)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L20_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),19,___G_jazz_3a_class_2d_of)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R2(___VECTORREF(___GLO_jazz_3a_Class,___FIX(11L)))
   ___SET_R3(___VECTORREF(___R1,___FIX(11L)))
   ___IF(___NOT(___FIXGE(___R3,___R2)))
   ___GOTO(___L21_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___SET_R3(___VECTORREF(___R1,___FIX(4L)))
   ___SET_R3(___VECTORREF(___R3,___R2))
   ___IF(___NOT(___EQP(___R3,___GLO_jazz_3a_Class)))
   ___GOTO(___L21_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___SET_R2(___GLO_jazz_3a_Unspecified_2d_Value)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error,___FIX(10L)))
   ___SET_R0(___LBL(9))
   ___JUMPPRM(___SET_NARGS(2),___PRM_make_2d_vector)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SUBTYPESET(___R1,___FIX(7L)) ___SET_R2(___R1)
   ___VECTORSET(___R2,___FIX(0L),___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error)
   ___SET_STK(-5,___R2)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G_jazz_3a_initialize_2d_slots)
___DEF_SLBL(10,___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_STK(1,___STK(-5))
   ___SET_STK(2,___KEY_object)
   ___SET_R1(___STK(-6))
   ___SET_R3(___SUB(72))
   ___SET_R2(___KEY_type)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_Conversion_2d_Error,___FIX(13L)))
   ___SET_R4(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R4(___VECTORREF(___R4,___FIX(0L)))
   ___SET_R0(___LBL(11))
   ___ADJFP(2)
   ___JUMPGENSAFE(___SET_NARGS(5),___R4)
___DEF_SLBL(11,___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
___DEF_SLBL(12,___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L21_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___SUB(73))
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_error)
___DEF_SLBL(14,___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_jazz_2e_language_2e_runtime_2e_exception_3a_signal)
___DEF_GLBL(___L22_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SUB(74))
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___DEF_SLBL(15,___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L19_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R2(___SUB(75))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___DEF_GLBL(___L23_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SUB(76))
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___DEF_SLBL(16,___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R2(___SUB(77))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_jazz_2e_language_2e_runtime_2e_functional_3a_ci_3d__3f_)
___DEF_GLBL(___L24_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_P_HLBL(___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___IF_NARGS_EQ(1,___SET_R2(___SUB(115)))
   ___GET_KEY(0,1,0,1,___SUB(116))
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_jazz_2e_language_2e_runtime_2e_functional_3a_empty_2d_string_3f_)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___END_IF
   ___GOTO(___L19_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___END_IF
___DEF_GLBL(___L15_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R1(___FAL)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L16_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),6,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___IF(___PAIRP(___R1))
   ___GOTO(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___END_IF
   ___GOTO(___L18_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CDR(___STK(-6)))
   ___SET_R0(___LBL(12))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L18_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___END_IF
___DEF_GLBL(___L17_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___CAR(___R1))
   ___SET_R0(___LBL(7))
   ___ADJFP(8)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),14,___G_jazz_2e_language_2e_runtime_2e_functional_3a_trim_2d_spaces)
___DEF_SLBL(10,___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(12,___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R1(___CONS(___STK(-5),___R1))
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___POLL(14)
___DEF_SLBL(14,___L14_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L18_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L19_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
   ___SET_R1(___STK(-6))
   ___SET_R2(___SUB(117))
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(2),___PRM_string_3d__3f_)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string
#undef ___PH_LBL0
#define ___PH_LBL0 67
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_P_HLBL(___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___IF_NARGS_EQ(1,___SET_R2(___SUB(151)))
   ___GET_KEY(0,1,0,1,___SUB(152))
___DEF_GLBL(___L_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R3(___R2)
   ___SET_R2(___KEY_separator)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(3),5,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_SLBL(2,___L2_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___IF(___PAIRP(___R1))
   ___GOTO(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___END_IF
   ___GOTO(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
___DEF_SLBL(4,___L4_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_STK(-5,___R1)
   ___SET_R1(___CDR(___STK(-6)))
   ___SET_R0(___LBL(9))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___END_IF
___DEF_GLBL(___L12_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___CAR(___R1))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R3(___SUB(153))
   ___SET_R2(___KEY_separator)
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(3),5,___G_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings)
___DEF_SLBL(7,___L7_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(9,___L9_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_R1(___CONS(___STK(-5),___R1))
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L13_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,"bin:jazz.language.runtime.parse#",
___REF_SUB(0),10,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,0,___REF_SUB(25),14,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,0,___REF_SUB(57),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,0,___REF_SUB(78),17,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,0,___REF_SUB(118),15,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,0,___REF_SUB(154),12,0)
,___DEF_LBL_PROC(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,2,-1)
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,___IFD(___RETI,8,0,0x3f07L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_language_2e_runtime_2e_parse_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_bin_3a_jazz_2e_language_2e_runtime_2e_parse,"bin:jazz.language.runtime.parse")

___DEF_MOD_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(2,___S_jazz_2e_dialect,"jazz.dialect")
___DEF_MOD_SYM(3,___S_jazz_2e_language_2e_runtime_2e_exception,"jazz.language.runtime.exception")

___DEF_MOD_SYM(4,___S_jazz_2e_language_2e_runtime_2e_format,"jazz.language.runtime.format")
___DEF_MOD_SYM(5,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_MOD_SYM(6,___S_jazz_2e_language_2e_runtime_2e_kernel,"jazz.language.runtime.kernel")
___DEF_MOD_SYM(7,___S_jazz_2e_language_2e_runtime_2e_parse,"jazz.language.runtime.parse")
___DEF_MOD_SYM(8,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_boolean,"jazz.language.runtime.parse:parse-boolean")

___DEF_MOD_SYM(9,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_delimited_2d_string,"jazz.language.runtime.parse:parse-delimited-string")

___DEF_MOD_SYM(10,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_hexadecimal,"jazz.language.runtime.parse:parse-hexadecimal")

___DEF_MOD_SYM(11,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_integer,"jazz.language.runtime.parse:parse-integer")

___DEF_MOD_SYM(12,___S_jazz_2e_language_2e_runtime_2e_parse_3a_parse_2d_strings,"jazz.language.runtime.parse:parse-strings")

___DEF_MOD_SYM(13,___S_obj_5e_0,"obj^0")
___DEF_MOD_SYM(14,___S_obj_5e_4,"obj^4")
___DEF_MOD_SYM(15,___S_parse_2d_boolean,"parse-boolean")
___DEF_MOD_SYM(16,___S_parse_2d_delimited_2d_string,"parse-delimited-string")
___DEF_MOD_SYM(17,___S_parse_2d_hexadecimal,"parse-hexadecimal")
___DEF_MOD_SYM(18,___S_parse_2d_integer,"parse-integer")
___DEF_MOD_SYM(19,___S_parse_2d_strings,"parse-strings")
___DEF_MOD_SYM(20,___S_protected,"protected")
___DEF_MOD_SYM(21,___S_separator,"separator")
___DEF_MOD_SYM(22,___S_string,"string")
___DEF_MOD_SYM(23,___S_temp_2e_14,"temp.14")
___DEF_MOD_SYM(24,___S_temp_2e_9,"temp.9")
___DEF_MOD_SYM(25,___S_x_2e_10,"x.10")
___DEF_MOD_SYM(26,___S_x_2e_15,"x.15")
___DEF_MOD_KEY(0,___K_object,"object")
___DEF_MOD_KEY(1,___K_separator,"separator")
___DEF_MOD_KEY(2,___K_type,"type")
___END_MOD_SYM_KEY

#endif
