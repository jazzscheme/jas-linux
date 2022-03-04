#ifdef ___LINKER_INFO
; File: "URL.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.io.URL"
(("bin:jazz.io.URL"))
(
"URL"
"URL-Class"
"URL-Class~Class"
"bin:jazz.io.URL"
"extract-parts"
"extract-url-name"
"filename"
"foundation.dialect"
"get-name"
"get-title"
"header"
"initialize"
"jazz"
"jazz.io"
"jazz.io.URL"
"jazz.io.URL:URL"
"jazz.io.URL:URL-Class"
"jazz.io.URL:URL-Class~Class"
"jazz.io.URL:extract-url-name"
"jazz.language.runtime.functional"
"lst"
"nextmethod"
"output"
"pos"
"print"
"protected"
"readably"
"self"
"sub"
"temp.3"
"temp.8"
"title"
"url"
)
(
"reversed?"
"title"
)
(
"bin:jazz.io.URL#"
"jazz.io.URL:URL"
"jazz.io.URL:URL-Class"
"jazz.io.URL:URL-Class~Class"
"jazz.io.URL:URL:extract-parts"
"jazz.io.URL:URL:get-name"
"jazz.io.URL:URL:get-title"
"jazz.io.URL:URL:initialize"
"jazz.io.URL:URL:initialize!node"
"jazz.io.URL:URL:print"
"jazz.io.URL:URL:print!node"
"jazz.io.URL:URL:title!offset"
"jazz.io.URL:URL:title!slot"
"jazz.io.URL:extract-url-name"
)
(
"jazz.io.URL:URL!level"
"jazz.io.URL:URL-Class!level"
"jazz.io.URL:URL-Class~Class!level"
"jazz.io.URL:URL:get-name!node"
"jazz.io.URL:tokenise-url"
)
(
"%%jazz.language.runtime.functional:split"
"%%jazz.language.runtime.object:print-unreadable"
"+"
"="
"jazz.io:Pathname"
"jazz.io:Pathname:parse"
"jazz.language.runtime.exception:error"
"jazz.language.runtime.format:format"
"jazz.language.runtime.functional:find"
"jazz.language.runtime.functional:subseq"
"jazz:add-final-method"
"jazz:add-method-node"
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
#define ___MODULE_NAME "bin:jazz.io.URL"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_io_2e_URL
#define ___MH_PROC ___H_bin_3a_jazz_2e_io_2e_URL
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 33
#define ___KEYCOUNT 2
#define ___GLOCOUNT 37
#define ___SUPCOUNT 19
#define ___CNSCOUNT 8
#define ___SUBCOUNT 176
#define ___LBLCOUNT 81
#define ___OFDCOUNT 8
#define ___MODDESCR ___REF_SUB(175)
#include "gambit.h"

___NEED_SYM(___S_URL)
___NEED_SYM(___S_URL_2d_Class)
___NEED_SYM(___S_URL_2d_Class_7e_Class)
___NEED_SYM(___S_bin_3a_jazz_2e_io_2e_URL)
___NEED_SYM(___S_extract_2d_parts)
___NEED_SYM(___S_extract_2d_url_2d_name)
___NEED_SYM(___S_filename)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_get_2d_name)
___NEED_SYM(___S_get_2d_title)
___NEED_SYM(___S_header)
___NEED_SYM(___S_initialize)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_jazz_2e_io)
___NEED_SYM(___S_jazz_2e_io_2e_URL)
___NEED_SYM(___S_jazz_2e_io_2e_URL_3a_URL)
___NEED_SYM(___S_jazz_2e_io_2e_URL_3a_URL_2d_Class)
___NEED_SYM(___S_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
___NEED_SYM(___S_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___NEED_SYM(___S_jazz_2e_language_2e_runtime_2e_functional)
___NEED_SYM(___S_lst)
___NEED_SYM(___S_nextmethod)
___NEED_SYM(___S_output)
___NEED_SYM(___S_pos)
___NEED_SYM(___S_print)
___NEED_SYM(___S_protected)
___NEED_SYM(___S_readably)
___NEED_SYM(___S_self)
___NEED_SYM(___S_sub)
___NEED_SYM(___S_temp_2e_3)
___NEED_SYM(___S_temp_2e_8)
___NEED_SYM(___S_title)
___NEED_SYM(___S_url)

___NEED_KEY(___K_reversed_3f_)
___NEED_KEY(___K_title)

___NEED_GLO(___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
___NEED_GLO(___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_print_2d_unreadable)
___NEED_GLO(___G__2b_)
___NEED_GLO(___G__3d_)
___NEED_GLO(___G_bin_3a_jazz_2e_io_2e_URL_23_)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_21_level)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_2d_Class)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_21_level)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class_21_level)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name_21_node)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_print)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___NEED_GLO(___G_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___NEED_GLO(___G_jazz_2e_io_3a_Pathname)
___NEED_GLO(___G_jazz_2e_io_3a_Pathname_3a_parse)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_find)
___NEED_GLO(___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
___NEED_GLO(___G_jazz_3a_add_2d_final_2d_method)
___NEED_GLO(___G_jazz_3a_add_2d_method_2d_node)
___NEED_GLO(___G_jazz_3a_add_2d_slot)
___NEED_GLO(___G_jazz_3a_global_2d_bound_3f_)
___NEED_GLO(___G_jazz_3a_global_2d_ref)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_new_2d_class)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_URL,"URL")
___DEF_SYM(1,___S_URL_2d_Class,"URL-Class")
___DEF_SYM(2,___S_URL_2d_Class_7e_Class,"URL-Class~Class")
___DEF_SYM(3,___S_bin_3a_jazz_2e_io_2e_URL,"bin:jazz.io.URL")
___DEF_SYM(4,___S_extract_2d_parts,"extract-parts")
___DEF_SYM(5,___S_extract_2d_url_2d_name,"extract-url-name")
___DEF_SYM(6,___S_filename,"filename")
___DEF_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(8,___S_get_2d_name,"get-name")
___DEF_SYM(9,___S_get_2d_title,"get-title")
___DEF_SYM(10,___S_header,"header")
___DEF_SYM(11,___S_initialize,"initialize")
___DEF_SYM(12,___S_jazz,"jazz")
___DEF_SYM(13,___S_jazz_2e_io,"jazz.io")
___DEF_SYM(14,___S_jazz_2e_io_2e_URL,"jazz.io.URL")
___DEF_SYM(15,___S_jazz_2e_io_2e_URL_3a_URL,"jazz.io.URL:URL")
___DEF_SYM(16,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class,"jazz.io.URL:URL-Class")
___DEF_SYM(17,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class,"jazz.io.URL:URL-Class~Class")
___DEF_SYM(18,___S_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,"jazz.io.URL:extract-url-name")
___DEF_SYM(19,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_SYM(20,___S_lst,"lst")
___DEF_SYM(21,___S_nextmethod,"nextmethod")
___DEF_SYM(22,___S_output,"output")
___DEF_SYM(23,___S_pos,"pos")
___DEF_SYM(24,___S_print,"print")
___DEF_SYM(25,___S_protected,"protected")
___DEF_SYM(26,___S_readably,"readably")
___DEF_SYM(27,___S_self,"self")
___DEF_SYM(28,___S_sub,"sub")
___DEF_SYM(29,___S_temp_2e_3,"temp.3")
___DEF_SYM(30,___S_temp_2e_8,"temp.8")
___DEF_SYM(31,___S_title,"title")
___DEF_SYM(32,___S_url,"url")
___END_SYM

#define ___SYM_URL ___SYM(0,___S_URL)
#define ___SYM_URL_2d_Class ___SYM(1,___S_URL_2d_Class)
#define ___SYM_URL_2d_Class_7e_Class ___SYM(2,___S_URL_2d_Class_7e_Class)
#define ___SYM_bin_3a_jazz_2e_io_2e_URL ___SYM(3,___S_bin_3a_jazz_2e_io_2e_URL)
#define ___SYM_extract_2d_parts ___SYM(4,___S_extract_2d_parts)
#define ___SYM_extract_2d_url_2d_name ___SYM(5,___S_extract_2d_url_2d_name)
#define ___SYM_filename ___SYM(6,___S_filename)
#define ___SYM_foundation_2e_dialect ___SYM(7,___S_foundation_2e_dialect)
#define ___SYM_get_2d_name ___SYM(8,___S_get_2d_name)
#define ___SYM_get_2d_title ___SYM(9,___S_get_2d_title)
#define ___SYM_header ___SYM(10,___S_header)
#define ___SYM_initialize ___SYM(11,___S_initialize)
#define ___SYM_jazz ___SYM(12,___S_jazz)
#define ___SYM_jazz_2e_io ___SYM(13,___S_jazz_2e_io)
#define ___SYM_jazz_2e_io_2e_URL ___SYM(14,___S_jazz_2e_io_2e_URL)
#define ___SYM_jazz_2e_io_2e_URL_3a_URL ___SYM(15,___S_jazz_2e_io_2e_URL_3a_URL)
#define ___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class ___SYM(16,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class)
#define ___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class ___SYM(17,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
#define ___SYM_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name ___SYM(18,___S_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
#define ___SYM_jazz_2e_language_2e_runtime_2e_functional ___SYM(19,___S_jazz_2e_language_2e_runtime_2e_functional)
#define ___SYM_lst ___SYM(20,___S_lst)
#define ___SYM_nextmethod ___SYM(21,___S_nextmethod)
#define ___SYM_output ___SYM(22,___S_output)
#define ___SYM_pos ___SYM(23,___S_pos)
#define ___SYM_print ___SYM(24,___S_print)
#define ___SYM_protected ___SYM(25,___S_protected)
#define ___SYM_readably ___SYM(26,___S_readably)
#define ___SYM_self ___SYM(27,___S_self)
#define ___SYM_sub ___SYM(28,___S_sub)
#define ___SYM_temp_2e_3 ___SYM(29,___S_temp_2e_3)
#define ___SYM_temp_2e_8 ___SYM(30,___S_temp_2e_8)
#define ___SYM_title ___SYM(31,___S_title)
#define ___SYM_url ___SYM(32,___S_url)

___BEGIN_KEY
___DEF_KEY(0,___K_reversed_3f_,"reversed?")
___DEF_KEY(1,___K_title,"title")
___END_KEY

#define ___KEY_reversed_3f_ ___KEY(0,___K_reversed_3f_)
#define ___KEY_title ___KEY(1,___K_title)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.io.URL#")
___DEF_GLO(1,"jazz.io.URL:URL")
___DEF_GLO(2,"jazz.io.URL:URL!level")
___DEF_GLO(3,"jazz.io.URL:URL-Class")
___DEF_GLO(4,"jazz.io.URL:URL-Class!level")
___DEF_GLO(5,"jazz.io.URL:URL-Class~Class")
___DEF_GLO(6,"jazz.io.URL:URL-Class~Class!level")

___DEF_GLO(7,"jazz.io.URL:URL:extract-parts")
___DEF_GLO(8,"jazz.io.URL:URL:get-name")
___DEF_GLO(9,"jazz.io.URL:URL:get-name!node")
___DEF_GLO(10,"jazz.io.URL:URL:get-title")
___DEF_GLO(11,"jazz.io.URL:URL:initialize")
___DEF_GLO(12,"jazz.io.URL:URL:initialize!node")
___DEF_GLO(13,"jazz.io.URL:URL:print")
___DEF_GLO(14,"jazz.io.URL:URL:print!node")
___DEF_GLO(15,"jazz.io.URL:URL:title!offset")
___DEF_GLO(16,"jazz.io.URL:URL:title!slot")
___DEF_GLO(17,"jazz.io.URL:extract-url-name")
___DEF_GLO(18,"jazz.io.URL:tokenise-url")
___DEF_GLO(19,"%%jazz.language.runtime.functional:split")

___DEF_GLO(20,"%%jazz.language.runtime.object:print-unreadable")

___DEF_GLO(21,"+")
___DEF_GLO(22,"=")
___DEF_GLO(23,"jazz.io:Pathname")
___DEF_GLO(24,"jazz.io:Pathname:parse")
___DEF_GLO(25,"jazz.language.runtime.exception:error")

___DEF_GLO(26,"jazz.language.runtime.format:format")

___DEF_GLO(27,"jazz.language.runtime.functional:find")

___DEF_GLO(28,"jazz.language.runtime.functional:subseq")

___DEF_GLO(29,"jazz:add-final-method")
___DEF_GLO(30,"jazz:add-method-node")
___DEF_GLO(31,"jazz:add-slot")
___DEF_GLO(32,"jazz:global-bound?")
___DEF_GLO(33,"jazz:global-ref")
___DEF_GLO(34,"jazz:load-unit")
___DEF_GLO(35,"jazz:new-class")
___DEF_GLO(36,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_io_2e_URL_23_ ___GLO(0,___G_bin_3a_jazz_2e_io_2e_URL_23_)
#define ___PRM_bin_3a_jazz_2e_io_2e_URL_23_ ___PRM(0,___G_bin_3a_jazz_2e_io_2e_URL_23_)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL ___GLO(1,___G_jazz_2e_io_2e_URL_3a_URL)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL ___PRM(1,___G_jazz_2e_io_2e_URL_3a_URL)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_21_level ___GLO(2,___G_jazz_2e_io_2e_URL_3a_URL_21_level)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_21_level ___PRM(2,___G_jazz_2e_io_2e_URL_3a_URL_21_level)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class ___GLO(3,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_2d_Class ___PRM(3,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class_21_level ___GLO(4,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_21_level)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_2d_Class_21_level ___PRM(4,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_21_level)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class ___GLO(5,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class ___PRM(5,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class_21_level ___GLO(6,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class_21_level)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class_21_level ___PRM(6,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class_21_level)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts ___GLO(7,___G_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts ___PRM(7,___G_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name ___GLO(8,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name ___PRM(8,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name_21_node ___GLO(9,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name_21_node)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name_21_node ___PRM(9,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name_21_node)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title ___GLO(10,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title ___PRM(10,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_initialize ___GLO(11,___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_initialize ___PRM(11,___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node ___GLO(12,___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node ___PRM(12,___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_print ___GLO(13,___G_jazz_2e_io_2e_URL_3a_URL_3a_print)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_print ___PRM(13,___G_jazz_2e_io_2e_URL_3a_URL_3a_print)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node ___GLO(14,___G_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node ___PRM(14,___G_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset ___GLO(15,___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset ___PRM(15,___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset)
#define ___GLO_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot ___GLO(16,___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot)
#define ___PRM_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot ___PRM(16,___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot)
#define ___GLO_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name ___GLO(17,___G_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
#define ___PRM_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name ___PRM(17,___G_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
#define ___GLO_jazz_2e_io_2e_URL_3a_tokenise_2d_url ___GLO(18,___G_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
#define ___PRM_jazz_2e_io_2e_URL_3a_tokenise_2d_url ___PRM(18,___G_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
#define ___GLO__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split ___GLO(19,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
#define ___PRM__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split ___PRM(19,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
#define ___GLO__25__25_jazz_2e_language_2e_runtime_2e_object_3a_print_2d_unreadable ___GLO(20,___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_print_2d_unreadable)
#define ___PRM__25__25_jazz_2e_language_2e_runtime_2e_object_3a_print_2d_unreadable ___PRM(20,___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_print_2d_unreadable)
#define ___GLO__2b_ ___GLO(21,___G__2b_)
#define ___PRM__2b_ ___PRM(21,___G__2b_)
#define ___GLO__3d_ ___GLO(22,___G__3d_)
#define ___PRM__3d_ ___PRM(22,___G__3d_)
#define ___GLO_jazz_2e_io_3a_Pathname ___GLO(23,___G_jazz_2e_io_3a_Pathname)
#define ___PRM_jazz_2e_io_3a_Pathname ___PRM(23,___G_jazz_2e_io_3a_Pathname)
#define ___GLO_jazz_2e_io_3a_Pathname_3a_parse ___GLO(24,___G_jazz_2e_io_3a_Pathname_3a_parse)
#define ___PRM_jazz_2e_io_3a_Pathname_3a_parse ___PRM(24,___G_jazz_2e_io_3a_Pathname_3a_parse)
#define ___GLO_jazz_2e_language_2e_runtime_2e_exception_3a_error ___GLO(25,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___PRM_jazz_2e_language_2e_runtime_2e_exception_3a_error ___PRM(25,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
#define ___GLO_jazz_2e_language_2e_runtime_2e_format_3a_format ___GLO(26,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___PRM_jazz_2e_language_2e_runtime_2e_format_3a_format ___PRM(26,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_find ___GLO(27,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_find ___PRM(27,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find)
#define ___GLO_jazz_2e_language_2e_runtime_2e_functional_3a_subseq ___GLO(28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
#define ___PRM_jazz_2e_language_2e_runtime_2e_functional_3a_subseq ___PRM(28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
#define ___GLO_jazz_3a_add_2d_final_2d_method ___GLO(29,___G_jazz_3a_add_2d_final_2d_method)
#define ___PRM_jazz_3a_add_2d_final_2d_method ___PRM(29,___G_jazz_3a_add_2d_final_2d_method)
#define ___GLO_jazz_3a_add_2d_method_2d_node ___GLO(30,___G_jazz_3a_add_2d_method_2d_node)
#define ___PRM_jazz_3a_add_2d_method_2d_node ___PRM(30,___G_jazz_3a_add_2d_method_2d_node)
#define ___GLO_jazz_3a_add_2d_slot ___GLO(31,___G_jazz_3a_add_2d_slot)
#define ___PRM_jazz_3a_add_2d_slot ___PRM(31,___G_jazz_3a_add_2d_slot)
#define ___GLO_jazz_3a_global_2d_bound_3f_ ___GLO(32,___G_jazz_3a_global_2d_bound_3f_)
#define ___PRM_jazz_3a_global_2d_bound_3f_ ___PRM(32,___G_jazz_3a_global_2d_bound_3f_)
#define ___GLO_jazz_3a_global_2d_ref ___GLO(33,___G_jazz_3a_global_2d_ref)
#define ___PRM_jazz_3a_global_2d_ref ___PRM(33,___G_jazz_3a_global_2d_ref)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(34,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(34,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_new_2d_class ___GLO(35,___G_jazz_3a_new_2d_class)
#define ___PRM_jazz_3a_new_2d_class ___PRM(35,___G_jazz_3a_new_2d_class)
#define ___GLO_jazz_3a_register_2d_module ___GLO(36,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(36,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_URL),___REF_SYM(15,___S_jazz_2e_io_2e_URL_3a_URL))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(1,___S_URL_2d_Class),___REF_SYM(16,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(2,___S_URL_2d_Class_7e_Class),___REF_SYM(17,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class))
,___DEF_CNS(___REF_CNS(7),___REF_NUL)
,___DEF_CNS(___REF_SYM(5,___S_extract_2d_url_2d_name),___REF_SYM(18,___S_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name))
___END_CNS

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(46))
               ___VEC0
___DEF_SUB_VEC(___X1,22UL)
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
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X16,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(17))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X18,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(19))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X20,2UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(21))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(54))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(57))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(29))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(57))
               ___VEC0
___DEF_SUB_VEC(___X30,2UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(31))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(57))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(33))
               ___VEC0
___DEF_SUB_VEC(___X33,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131132))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(35))
               ___VEC0
___DEF_SUB_VEC(___X35,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(57))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_FIX(17))
               ___VEC1(___REF_SUB(37))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_FIX(18))
               ___VEC1(___REF_SUB(39))
               ___VEC0
___DEF_SUB_VEC(___X39,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131140))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_FIX(19))
               ___VEC1(___REF_SUB(41))
               ___VEC0
___DEF_SUB_VEC(___X41,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131144))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_FIX(20))
               ___VEC1(___REF_SUB(43))
               ___VEC0
___DEF_SUB_VEC(___X43,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131159))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_FIX(21))
               ___VEC1(___REF_SUB(45))
               ___VEC0
___DEF_SUB_VEC(___X45,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131159))
               ___VEC0
___DEF_SUB_VEC(___X46,0UL)
               ___VEC0
___DEF_SUB_VEC(___X47,2UL)
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_SUB(65))
               ___VEC0
___DEF_SUB_VEC(___X48,8UL)
               ___VEC1(___REF_SUB(49))
               ___VEC1(___REF_SUB(51))
               ___VEC1(___REF_SUB(53))
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(57))
               ___VEC1(___REF_SUB(59))
               ___VEC1(___REF_SUB(61))
               ___VEC1(___REF_SUB(63))
               ___VEC0
___DEF_SUB_VEC(___X49,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(50))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(43))
               ___VEC0
___DEF_SUB_VEC(___X51,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1507372))
               ___VEC0
___DEF_SUB_VEC(___X53,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(852012))
               ___VEC0
___DEF_SUB_VEC(___X55,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(56))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(524334))
               ___VEC0
___DEF_SUB_VEC(___X57,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1179695))
               ___VEC0
___DEF_SUB_VEC(___X59,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(60))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X60,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(393263))
               ___VEC0
___DEF_SUB_VEC(___X61,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X62,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(393263))
               ___VEC0
___DEF_SUB_VEC(___X63,4UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(64))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1179695))
               ___VEC0
___DEF_SUB_VEC(___X65,3UL)
               ___VEC1(___REF_SYM(32,___S_url))
               ___VEC1(___REF_SYM(29,___S_temp_2e_3))
               ___VEC1(___REF_SYM(23,___S_pos))
               ___VEC0
___DEF_SUB_STR(___X66,1UL)
               ___STR1(47)
___DEF_SUB_VEC(___X67,2UL)
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_SUB(77))
               ___VEC0
___DEF_SUB_VEC(___X68,4UL)
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
               ___VEC0
___DEF_SUB_VEC(___X69,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(70))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(50))
               ___VEC0
___DEF_SUB_VEC(___X71,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X73,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X75,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131123))
               ___VEC0
___DEF_SUB_VEC(___X77,1UL)
               ___VEC1(___REF_SYM(6,___S_filename))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(82))
               ___VEC0
___DEF_SUB_VEC(___X79,1UL)
               ___VEC1(___REF_SUB(80))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X81,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(57))
               ___VEC0
___DEF_SUB_VEC(___X82,0UL)
               ___VEC0
___DEF_SUB_VEC(___X83,2UL)
               ___VEC1(___REF_KEY(1,___K_title))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(94))
               ___VEC0
___DEF_SUB_VEC(___X85,4UL)
               ___VEC1(___REF_SUB(86))
               ___VEC1(___REF_SUB(88))
               ___VEC1(___REF_SUB(90))
               ___VEC1(___REF_SUB(92))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131135))
               ___VEC0
___DEF_SUB_VEC(___X88,8UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(89))
               ___VEC1(___REF_FIX(425984))
               ___VEC1(___REF_FIX(393218))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X89,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X90,6UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(91))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X91,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(262208))
               ___VEC0
___DEF_SUB_VEC(___X92,6UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(93))
               ___VEC1(___REF_FIX(163840))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65542))
               ___VEC0
___DEF_SUB_VEC(___X93,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(262209))
               ___VEC0
___DEF_SUB_VEC(___X94,4UL)
               ___VEC1(___REF_SYM(21,___S_nextmethod))
               ___VEC1(___REF_SYM(31,___S_title))
               ___VEC1(___REF_SYM(20,___S_lst))
               ___VEC1(___REF_SYM(27,___S_self))
               ___VEC0
___DEF_SUB_VEC(___X95,2UL)
               ___VEC1(___REF_SUB(96))
               ___VEC1(___REF_SUB(107))
               ___VEC0
___DEF_SUB_VEC(___X96,5UL)
               ___VEC1(___REF_SUB(97))
               ___VEC1(___REF_SUB(99))
               ___VEC1(___REF_SUB(101))
               ___VEC1(___REF_SUB(103))
               ___VEC1(___REF_SUB(105))
               ___VEC0
___DEF_SUB_VEC(___X97,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(98))
               ___VEC0
___DEF_SUB_VEC(___X98,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131140))
               ___VEC0
___DEF_SUB_VEC(___X99,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(100))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X100,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1441861))
               ___VEC0
___DEF_SUB_VEC(___X101,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(102))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X102,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1441861))
               ___VEC0
___DEF_SUB_VEC(___X103,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(104))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X104,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X105,3UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(106))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X106,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(262213))
               ___VEC0
___DEF_SUB_VEC(___X107,1UL)
               ___VEC1(___REF_SYM(27,___S_self))
               ___VEC0
___DEF_SUB_STR(___X108,3UL)
               ___STR3(123,97,125)
___DEF_SUB_VEC(___X109,2UL)
               ___VEC1(___REF_SUB(110))
               ___VEC1(___REF_SUB(135))
               ___VEC0
___DEF_SUB_VEC(___X110,12UL)
               ___VEC1(___REF_SUB(111))
               ___VEC1(___REF_SUB(113))
               ___VEC1(___REF_SUB(115))
               ___VEC1(___REF_SUB(117))
               ___VEC1(___REF_SUB(119))
               ___VEC1(___REF_SUB(121))
               ___VEC1(___REF_SUB(123))
               ___VEC1(___REF_SUB(125))
               ___VEC1(___REF_SUB(127))
               ___VEC1(___REF_SUB(129))
               ___VEC1(___REF_SUB(131))
               ___VEC1(___REF_SUB(133))
               ___VEC0
___DEF_SUB_VEC(___X111,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(112))
               ___VEC0
___DEF_SUB_VEC(___X112,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131144))
               ___VEC0
___DEF_SUB_VEC(___X113,8UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(114))
               ___VEC1(___REF_FIX(557056))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X114,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(655435))
               ___VEC0
___DEF_SUB_VEC(___X115,7UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(116))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X116,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(655435))
               ___VEC0
___DEF_SUB_VEC(___X117,7UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(118))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X118,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(655435))
               ___VEC0
___DEF_SUB_VEC(___X119,8UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(120))
               ___VEC1(___REF_FIX(557056))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X120,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(524364))
               ___VEC0
___DEF_SUB_VEC(___X121,8UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(122))
               ___VEC1(___REF_FIX(557056))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X122,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(524364))
               ___VEC0
___DEF_SUB_VEC(___X123,7UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(124))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X124,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(524364))
               ___VEC0
___DEF_SUB_VEC(___X125,7UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(126))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X126,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(524364))
               ___VEC0
___DEF_SUB_VEC(___X127,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(128))
               ___VEC0
___DEF_SUB_VEC(___X128,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(655437))
               ___VEC0
___DEF_SUB_VEC(___X129,3UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(130))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X130,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(786510))
               ___VEC0
___DEF_SUB_VEC(___X131,3UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(132))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X132,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(786510))
               ___VEC0
___DEF_SUB_VEC(___X133,3UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(134))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X134,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(786510))
               ___VEC0
___DEF_SUB_VEC(___X135,5UL)
               ___VEC1(___REF_SYM(21,___S_nextmethod))
               ___VEC1(___REF_SYM(26,___S_readably))
               ___VEC1(___REF_SYM(22,___S_output))
               ___VEC1(___REF_SYM(27,___S_self))
               ___VEC1(___REF_SYM(31,___S_title))
               ___VEC0
___DEF_SUB_STR(___X136,7UL)
               ___STR7(104,116,116,112,58,47,47)
___DEF_SUB_STR(___X137,23UL)
               ___STR8(85,110,97,98,108,101,32,116)
               ___STR8(111,32,115,112,108,105,116,32)
               ___STR7(117,114,108,32,123,116,125)
___DEF_SUB_VEC(___X138,2UL)
               ___VEC1(___REF_SUB(139))
               ___VEC1(___REF_SUB(174))
               ___VEC0
___DEF_SUB_VEC(___X139,17UL)
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
               ___VEC1(___REF_SUB(162))
               ___VEC1(___REF_SUB(164))
               ___VEC1(___REF_SUB(166))
               ___VEC1(___REF_SUB(168))
               ___VEC1(___REF_SUB(170))
               ___VEC1(___REF_SUB(172))
               ___VEC0
___DEF_SUB_VEC(___X140,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(141))
               ___VEC0
___DEF_SUB_VEC(___X141,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(131159))
               ___VEC0
___DEF_SUB_VEC(___X142,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(143))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X143,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1048664))
               ___VEC0
___DEF_SUB_VEC(___X144,3UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(145))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X145,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1048664))
               ___VEC0
___DEF_SUB_VEC(___X146,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(147))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X147,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1245273))
               ___VEC0
___DEF_SUB_VEC(___X148,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(149))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X149,2UL)
               ___VEC1(___REF_SYM(19,___S_jazz_2e_language_2e_runtime_2e_functional))
               ___VEC1(___REF_FIX(459180))
               ___VEC0
___DEF_SUB_VEC(___X150,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(151))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X151,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1310812))
               ___VEC0
___DEF_SUB_VEC(___X152,6UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(153))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X153,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1310813))
               ___VEC0
___DEF_SUB_VEC(___X154,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(155))
               ___VEC0
___DEF_SUB_VEC(___X155,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(917599))
               ___VEC0
___DEF_SUB_VEC(___X156,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(157))
               ___VEC0
___DEF_SUB_VEC(___X157,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(917599))
               ___VEC0
___DEF_SUB_VEC(___X158,7UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(159))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X159,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(1310816))
               ___VEC0
___DEF_SUB_VEC(___X160,8UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(161))
               ___VEC1(___REF_FIX(262154))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X161,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(3342432))
               ___VEC0
___DEF_SUB_VEC(___X162,7UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(163))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X163,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(2556000))
               ___VEC0
___DEF_SUB_VEC(___X164,7UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(165))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X165,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(786528))
               ___VEC0
___DEF_SUB_VEC(___X166,7UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(167))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X167,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(786528))
               ___VEC0
___DEF_SUB_VEC(___X168,7UL)
               ___VEC1(___REF_FIX(14))
               ___VEC1(___REF_SUB(169))
               ___VEC1(___REF_FIX(196616))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X169,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(3342432))
               ___VEC0
___DEF_SUB_VEC(___X170,5UL)
               ___VEC1(___REF_FIX(15))
               ___VEC1(___REF_SUB(171))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X171,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(655451))
               ___VEC0
___DEF_SUB_VEC(___X172,5UL)
               ___VEC1(___REF_FIX(16))
               ___VEC1(___REF_SUB(173))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X173,2UL)
               ___VEC1(___REF_SYM(14,___S_jazz_2e_io_2e_URL))
               ___VEC1(___REF_FIX(655451))
               ___VEC0
___DEF_SUB_VEC(___X174,6UL)
               ___VEC1(___REF_SYM(27,___S_self))
               ___VEC1(___REF_SYM(32,___S_url))
               ___VEC1(___REF_SYM(10,___S_header))
               ___VEC1(___REF_SYM(28,___S_sub))
               ___VEC1(___REF_SYM(23,___S_pos))
               ___VEC1(___REF_SYM(30,___S_temp_2e_8))
               ___VEC0
___DEF_SUB_VEC(___X175,5UL)
               ___VEC1(___REF_SYM(3,___S_bin_3a_jazz_2e_io_2e_URL))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L9_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L10_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L11_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L12_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L13_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L14_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L15_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L16_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L17_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L18_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L19_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L20_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL(___L21_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L1_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L2_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L3_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L4_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L5_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L6_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL(___L7_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_M_HLBL(___L1_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_M_HLBL(___L2_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_M_HLBL(___L3_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_M_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_M_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_M_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_M_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_M_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_M_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_M_HLBL(___L4_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L4_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L5_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L6_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L7_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L8_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L9_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L10_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL(___L11_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L4_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L5_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L6_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L7_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L8_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L9_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L10_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L11_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L12_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L13_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L14_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L15_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_M_HLBL(___L16_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_io_2e_URL_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L9_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L10_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L11_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L12_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L13_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L14_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L15_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L16_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L17_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L18_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L19_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L20_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_P_HLBL(___L21_bin_3a_jazz_2e_io_2e_URL_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_io_2e_URL_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_R1(___SYM_jazz_2e_io)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_STK(1,___SYM_jazz_2e_io_2e_URL)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_protected)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),36,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(17,___G_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___PRC(24))
   ___SET_GLO(18,___G_jazz_2e_io_2e_URL_3a_tokenise_2d_url,___PRC(33))
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_io_2e_URL_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L27_bin_3a_jazz_2e_io_2e_URL_23_)
   ___END_IF
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_io_3a_Pathname,___FIX(0L)))
   ___SET_R1(___VECTORREF(___R1,___FIX(0L)))
   ___SET_STK(1,___VECTORREF(___R1,___FIX(0L)))
   ___SET_R3(___NUL)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_io_3a_Pathname,___FIX(0L)))
   ___SET_R2(___VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
   ___SET_R0(___LBL(7))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),35,___G_jazz_3a_new_2d_class)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_io_2e_URL_23_)
   ___GOTO(___L22_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_GLBL(___L22_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(5,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class,___FIX(11L)))
   ___SET_GLO(6,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(9,___L9_bin_3a_jazz_2e_io_2e_URL_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L26_bin_3a_jazz_2e_io_2e_URL_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___VECTORREF(___GLO_jazz_2e_io_3a_Pathname,___FIX(0L)))
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class)
   ___SET_R0(___LBL(10))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),35,___G_jazz_3a_new_2d_class)
___DEF_SLBL(10,___L10_bin_3a_jazz_2e_io_2e_URL_23_)
   ___GOTO(___L23_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_SLBL(11,___L11_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_GLBL(___L23_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(3,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class,___FIX(11L)))
   ___SET_GLO(4,___G_jazz_2e_io_2e_URL_3a_URL_2d_Class_21_level,___R1)
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_jazz_3a_global_2d_bound_3f_)
___DEF_SLBL(12,___L12_bin_3a_jazz_2e_io_2e_URL_23_)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L25_bin_3a_jazz_2e_io_2e_URL_23_)
   ___END_IF
   ___SET_STK(1,___GLO_jazz_2e_io_2e_URL_3a_URL_2d_Class)
   ___SET_R3(___NUL)
   ___SET_R2(___GLO_jazz_2e_io_3a_Pathname)
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(13))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),35,___G_jazz_3a_new_2d_class)
___DEF_SLBL(13,___L13_bin_3a_jazz_2e_io_2e_URL_23_)
   ___GOTO(___L24_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_SLBL(14,___L14_bin_3a_jazz_2e_io_2e_URL_23_)
___DEF_GLBL(___L24_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(1,___G_jazz_2e_io_2e_URL_3a_URL,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_io_2e_URL_3a_URL,___FIX(11L)))
   ___SET_GLO(2,___G_jazz_2e_io_2e_URL_3a_URL_21_level,___R1)
   ___SET_STK(1,___GLO_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R3(___TRU)
   ___SET_R2(___FAL)
   ___SET_R1(___SYM_title)
   ___SET_R0(___LBL(15))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),31,___G_jazz_3a_add_2d_slot)
___DEF_SLBL(15,___L15_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(16,___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot,___R1)
   ___SET_R1(___VECTORREF(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_title_21_slot,___FIX(2L)))
   ___SET_GLO(15,___G_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset,___R1)
   ___SET_GLO(10,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title,___PRC(38))
   ___SET_R3(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
   ___SET_R2(___SYM_get_2d_title)
   ___SET_R1(___GLO_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(3),29,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(16,___L16_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(11,___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize,___PRC(40))
   ___SET_R3(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
   ___SET_R2(___SYM_initialize)
   ___SET_R1(___GLO_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(17))
   ___JUMPGLOSAFE(___SET_NARGS(3),30,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(17,___L17_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(12,___G_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node,___R1)
   ___SET_GLO(8,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,___PRC(45))
   ___SET_R3(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___SET_R2(___SYM_get_2d_name)
   ___SET_R1(___GLO_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(18))
   ___JUMPGLOSAFE(___SET_NARGS(3),30,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(18,___L18_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(9,___G_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name_21_node,___R1)
   ___SET_GLO(13,___G_jazz_2e_io_2e_URL_3a_URL_3a_print,___PRC(51))
   ___SET_R3(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___SET_R2(___SYM_print)
   ___SET_R1(___GLO_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),30,___G_jazz_3a_add_2d_method_2d_node)
___DEF_SLBL(19,___L19_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_GLO(14,___G_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node,___R1)
   ___SET_GLO(7,___G_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___PRC(64))
   ___SET_R3(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_R2(___SYM_extract_2d_parts)
   ___SET_R1(___GLO_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(3),29,___G_jazz_3a_add_2d_final_2d_method)
___DEF_SLBL(20,___L20_bin_3a_jazz_2e_io_2e_URL_23_)
   ___POLL(21)
___DEF_SLBL(21,___L21_bin_3a_jazz_2e_io_2e_URL_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L25_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L26_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class)
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_jazz_3a_global_2d_ref)
___DEF_GLBL(___L27_bin_3a_jazz_2e_io_2e_URL_23_)
   ___SET_R1(___SYM_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_jazz_3a_global_2d_ref)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 24
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L1_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L2_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L3_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L4_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L5_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L6_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_P_HLBL(___L7_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(9,___R1)
   ___SET_R3(___TRU)
   ___SET_R2(___KEY_reversed_3f_)
   ___SET_R1(___CHR(47))
   ___ADJFP(9)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(4),27,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find)
___DEF_SLBL(2,___L2_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L8_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L8_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___SET_STK(-5,___R1)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L11_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___END_IF
   ___SET_R1(___FIXADDP(___R1,___FIX(1L)))
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L10_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___END_IF
   ___SET_STK(-4,___R1)
   ___GOTO(___L9_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_SLBL(4,___L4_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_GLBL(___L9_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
___DEF_SLBL(5,___L5_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___POLL(6)
___DEF_SLBL(6,___L6_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L10_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-5))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM__2b_)
___DEF_GLBL(___L11_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(7))
   ___JUMPPRM(___SET_NARGS(2),___PRM__2b_)
___DEF_SLBL(7,___L7_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
   ___GOTO(___L9_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_tokenise_2d_url
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_P_HLBL(___L1_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_P_HLBL(___L2_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___DEF_P_HLBL(___L3_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SUB(66))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),19,___G__25__25_jazz_2e_language_2e_runtime_2e_functional_3a_split)
___DEF_SLBL(2,___L2_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_io_2e_URL_3a_tokenise_2d_url)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title
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
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title)
   ___SET_R2(___VECTORREF(___R1,___GLO_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset))
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_URL_3a_initialize
#undef ___PH_LBL0
#define ___PH_LBL0 40
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_P_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_P_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___DEF_P_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
   ___IF_NARGS_EQ(2,___SET_R3(___FAL))
   ___GET_KEY(0,2,0,1,___SUB(83))
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_initialize_21_node,___FIX(4L)))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(2),___R4)
___DEF_SLBL(2,___L2_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
   ___VECTORSET(___STK(-6),___GLO_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset,___STK(-4)) ___SET_R1(___STK(-6))
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_io_2e_URL_3a_URL_3a_initialize)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_P_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_P_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_P_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___DEF_P_HLBL(___L4_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_jazz_2e_io_3a_Pathname_3a_parse)
___DEF_SLBL(2,___L2_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),17,___G_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name)
___DEF_SLBL(3,___L3_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_URL_3a_print
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L4_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L5_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L6_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L7_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L8_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L9_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L10_jazz_2e_io_2e_URL_3a_URL_3a_print)
___DEF_P_HLBL(___L11_jazz_2e_io_2e_URL_3a_URL_3a_print)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___SET_R4(___VECTORREF(___GLO_jazz_2e_io_2e_URL_3a_URL_3a_print_21_node,___FIX(4L)))
   ___SET_STK(1,___VECTORREF(___R1,___GLO_jazz_2e_io_2e_URL_3a_URL_3a_title_21_offset))
   ___ADJFP(1)
   ___IF(___NOT(___NULLP(___STK(0))))
   ___GOTO(___L12_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___ADJFP(11)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___SET_R0(___LBL(2))
   ___JUMPGENSAFE(___SET_NARGS(3),___R4)
___DEF_SLBL(2,___L2_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L12_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_STK(6,___ALLOC_CLO(1UL))
   ___BEGIN_SETUP_CLO(1,___STK(6),8)
   ___ADD_CLO_ELEM(0,___STK(0))
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(6))
   ___ADJFP(11)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(3),20,___G__25__25_jazz_2e_language_2e_runtime_2e_object_3a_print_2d_unreadable)
___DEF_SLBL(6,___L6_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_SLBL(8,___L8_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(8,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R3(___CLO(___R4,1))
   ___SET_R2(___SUB(108))
   ___ADJFP(8)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(3),26,___G_jazz_2e_language_2e_runtime_2e_format_3a_format)
___DEF_SLBL(10,___L10_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_2e_io_2e_URL_3a_URL_3a_print)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts
#undef ___PH_LBL0
#define ___PH_LBL0 64
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L1_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L2_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L3_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L4_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L5_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L6_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L7_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L8_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L9_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L10_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L11_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L12_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L13_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L14_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L15_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_P_HLBL(___L16_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_jazz_2e_io_3a_Pathname_3a_parse)
___DEF_SLBL(2,___L2_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(-5,___R1)
   ___SET_R3(___FIX(7L))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(3),28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
___DEF_SLBL(3,___L3_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(-4,___R1)
   ___SET_R2(___SUB(136))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM__3d_)
___DEF_SLBL(4,___L4_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L21_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___END_IF
   ___SET_R1(___STK(-5))
   ___SET_R2(___FIX(7L))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
___DEF_SLBL(5,___L5_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(-3,___R1)
   ___SET_R2(___CHR(47))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),27,___G_jazz_2e_language_2e_runtime_2e_functional_3a_find)
___DEF_SLBL(6,___L6_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___IF(___NOT(___NULLP(___R1)))
   ___GOTO(___L17_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___END_IF
   ___BEGIN_ALLOC_VALUES(2UL)
   ___ADD_VALUES_ELEM(0,___STK(-3))
   ___ADD_VALUES_ELEM(1,___FAL)
   ___END_ALLOC_VALUES(2)
   ___SET_R2(___GET_VALUES(2))
   ___SET_R1(___R2)
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___POLL(8)
___DEF_SLBL(8,___L8_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L17_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(-2,___R1)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-3))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(9))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(3),28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
___DEF_SLBL(9,___L9_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(-5,___R1)
   ___IF(___NOT(___FIXNUMP(___STK(-6))))
   ___GOTO(___L20_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___END_IF
   ___SET_R1(___FIXADDP(___STK(-6),___FIX(1L)))
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L19_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___END_IF
   ___SET_STK(-4,___R1)
   ___GOTO(___L18_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_SLBL(10,___L10_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_GLBL(___L18_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-7))
   ___SET_R0(___LBL(11))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_jazz_2e_language_2e_runtime_2e_functional_3a_subseq)
___DEF_SLBL(11,___L11_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___BEGIN_ALLOC_VALUES(2UL)
   ___ADD_VALUES_ELEM(0,___STK(-5))
   ___ADD_VALUES_ELEM(1,___R1)
   ___END_ALLOC_VALUES(2)
   ___SET_R1(___GET_VALUES(2))
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___POLL(13)
___DEF_SLBL(13,___L13_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L19_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_STK(-4,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(10))
   ___JUMPPRM(___SET_NARGS(2),___PRM__2b_)
___DEF_GLBL(___L20_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_R1(___STK(-6))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(14))
   ___JUMPPRM(___SET_NARGS(2),___PRM__2b_)
___DEF_SLBL(14,___L14_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___GOTO(___L18_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
___DEF_GLBL(___L21_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___SET_R2(___STK(-6))
   ___SET_R1(___SUB(137))
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(2),25,___G_jazz_2e_language_2e_runtime_2e_exception_3a_error)
___DEF_SLBL(15,___L15_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___POLL(16)
___DEF_SLBL(16,___L16_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_io_2e_URL_23_,"bin:jazz.io.URL#",___REF_SUB(0),22,0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_io_2e_URL_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_io_2e_URL_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,0,___REF_SUB(47),8,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___OFD(___RETI,9,0,0x3f103L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_tokenise_2d_url,0,___REF_SUB(67),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_tokenise_2d_url,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_tokenise_2d_url,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_tokenise_2d_url,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_tokenise_2d_url,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title,0,___REF_SUB(78),1,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_title,1,-1)
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_URL_3a_initialize,0,___REF_SUB(84),4,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_URL_3a_initialize,3,-1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_initialize,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_initialize,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_initialize,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,0,___REF_SUB(95),5,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_get_2d_name,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,0,___REF_SUB(109),12,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,3,-1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___OFD(___RETI,12,1,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___IFD(___RETN,9,1,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___OFD(___RETI,12,1,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___OFD(___RETI,12,1,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___OFD(___RETI,12,1,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___IFD(___RETN,9,1,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___OFD(___RETI,12,1,0x3f03fL))
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,1,1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_print,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,0,___REF_SUB(138),17,0)
,___DEF_LBL_PROC(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,1,-1)
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,9,0,0xffL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___OFD(___RETI,12,0,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___OFD(___RETI,12,0,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,9,0,0x7fL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_2e_io_2e_URL_3a_URL_3a_extract_2d_parts,___IFD(___RETI,8,0,0x3f0fL))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,9,0)
               ___GCMAP1(0x3f103L)
,___DEF_OFD(___RETI,12,1)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,1)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,1)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,1)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,1)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f03fL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_io_2e_URL_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_io_2e_URL_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_URL,"URL")
___DEF_MOD_SYM(1,___S_URL_2d_Class,"URL-Class")
___DEF_MOD_SYM(2,___S_URL_2d_Class_7e_Class,"URL-Class~Class")
___DEF_MOD_SYM(3,___S_bin_3a_jazz_2e_io_2e_URL,"bin:jazz.io.URL")
___DEF_MOD_SYM(4,___S_extract_2d_parts,"extract-parts")
___DEF_MOD_SYM(5,___S_extract_2d_url_2d_name,"extract-url-name")
___DEF_MOD_SYM(6,___S_filename,"filename")
___DEF_MOD_SYM(7,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(8,___S_get_2d_name,"get-name")
___DEF_MOD_SYM(9,___S_get_2d_title,"get-title")
___DEF_MOD_SYM(10,___S_header,"header")
___DEF_MOD_SYM(11,___S_initialize,"initialize")
___DEF_MOD_SYM(12,___S_jazz,"jazz")
___DEF_MOD_SYM(13,___S_jazz_2e_io,"jazz.io")
___DEF_MOD_SYM(14,___S_jazz_2e_io_2e_URL,"jazz.io.URL")
___DEF_MOD_SYM(15,___S_jazz_2e_io_2e_URL_3a_URL,"jazz.io.URL:URL")
___DEF_MOD_SYM(16,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class,"jazz.io.URL:URL-Class")
___DEF_MOD_SYM(17,___S_jazz_2e_io_2e_URL_3a_URL_2d_Class_7e_Class,"jazz.io.URL:URL-Class~Class")
___DEF_MOD_SYM(18,___S_jazz_2e_io_2e_URL_3a_extract_2d_url_2d_name,"jazz.io.URL:extract-url-name")
___DEF_MOD_SYM(19,___S_jazz_2e_language_2e_runtime_2e_functional,"jazz.language.runtime.functional")

___DEF_MOD_SYM(20,___S_lst,"lst")
___DEF_MOD_SYM(21,___S_nextmethod,"nextmethod")
___DEF_MOD_SYM(22,___S_output,"output")
___DEF_MOD_SYM(23,___S_pos,"pos")
___DEF_MOD_SYM(24,___S_print,"print")
___DEF_MOD_SYM(25,___S_protected,"protected")
___DEF_MOD_SYM(26,___S_readably,"readably")
___DEF_MOD_SYM(27,___S_self,"self")
___DEF_MOD_SYM(28,___S_sub,"sub")
___DEF_MOD_SYM(29,___S_temp_2e_3,"temp.3")
___DEF_MOD_SYM(30,___S_temp_2e_8,"temp.8")
___DEF_MOD_SYM(31,___S_title,"title")
___DEF_MOD_SYM(32,___S_url,"url")
___DEF_MOD_KEY(0,___K_reversed_3f_,"reversed?")
___DEF_MOD_KEY(1,___K_title,"title")
___END_MOD_SYM_KEY

#endif
