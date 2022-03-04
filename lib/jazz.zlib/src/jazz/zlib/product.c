#ifdef ___LINKER_INFO
; File: "product.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:jazz.zlib.product"
(("bin:jazz.zlib.product"))
(
"bin:jazz.zlib.product"
"build"
"descriptor"
"force?"
"info"
"jazz.zlib"
"jazz.zlib.foreign"
"jazz.zlib.product"
"lst1.11"
"path"
"skip-references?"
"source"
"temp.6"
"unit"
"unit-specs"
"x.12"
"zlib-include-path"
"zlib-lib-path"
)
(
"build"
"cc-options"
"feedback"
"force?"
"ld-options"
"library-options"
"pre-build"
"skip-references?"
"unit"
)
(
"bin:jazz.zlib.product#"
"jazz:build-zlib"
"jazz:copy-platform-files"
"jazz:platform-files"
"jazz:zlib-library-options"
"jazz:zlib-units"
)
(
)
(
"assq"
"car"
"cdr"
"jazz:Build-Repository"
"jazz:build-product-descriptor"
"jazz:copy-file-if-needed"
"jazz:custom-compile/build"
"jazz:feedback"
"jazz:kernel-source"
"jazz:quote-jazz-pathname"
"jazz:register-product"
"string-append"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:jazz.zlib.product"
#define ___LINKER_ID ___LNK_bin_3a_jazz_2e_zlib_2e_product
#define ___MH_PROC ___H_bin_3a_jazz_2e_zlib_2e_product
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 18
#define ___KEYCOUNT 9
#define ___GLOCOUNT 18
#define ___SUPCOUNT 6
#define ___SUBCOUNT 90
#define ___LBLCOUNT 38
#define ___OFDCOUNT 5
#define ___MODDESCR ___REF_SUB(89)
#include "gambit.h"

___NEED_SYM(___S_bin_3a_jazz_2e_zlib_2e_product)
___NEED_SYM(___S_build)
___NEED_SYM(___S_descriptor)
___NEED_SYM(___S_force_3f_)
___NEED_SYM(___S_info)
___NEED_SYM(___S_jazz_2e_zlib)
___NEED_SYM(___S_jazz_2e_zlib_2e_foreign)
___NEED_SYM(___S_jazz_2e_zlib_2e_product)
___NEED_SYM(___S_lst1_2e_11)
___NEED_SYM(___S_path)
___NEED_SYM(___S_skip_2d_references_3f_)
___NEED_SYM(___S_source)
___NEED_SYM(___S_temp_2e_6)
___NEED_SYM(___S_unit)
___NEED_SYM(___S_unit_2d_specs)
___NEED_SYM(___S_x_2e_12)
___NEED_SYM(___S_zlib_2d_include_2d_path)
___NEED_SYM(___S_zlib_2d_lib_2d_path)

___NEED_KEY(___K_build)
___NEED_KEY(___K_cc_2d_options)
___NEED_KEY(___K_feedback)
___NEED_KEY(___K_force_3f_)
___NEED_KEY(___K_ld_2d_options)
___NEED_KEY(___K_library_2d_options)
___NEED_KEY(___K_pre_2d_build)
___NEED_KEY(___K_skip_2d_references_3f_)
___NEED_KEY(___K_unit)

___NEED_GLO(___G_assq)
___NEED_GLO(___G_bin_3a_jazz_2e_zlib_2e_product_23_)
___NEED_GLO(___G_car)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_jazz_3a_Build_2d_Repository)
___NEED_GLO(___G_jazz_3a_build_2d_product_2d_descriptor)
___NEED_GLO(___G_jazz_3a_build_2d_zlib)
___NEED_GLO(___G_jazz_3a_copy_2d_file_2d_if_2d_needed)
___NEED_GLO(___G_jazz_3a_copy_2d_platform_2d_files)
___NEED_GLO(___G_jazz_3a_custom_2d_compile_2f_build)
___NEED_GLO(___G_jazz_3a_feedback)
___NEED_GLO(___G_jazz_3a_kernel_2d_source)
___NEED_GLO(___G_jazz_3a_platform_2d_files)
___NEED_GLO(___G_jazz_3a_quote_2d_jazz_2d_pathname)
___NEED_GLO(___G_jazz_3a_register_2d_product)
___NEED_GLO(___G_jazz_3a_zlib_2d_library_2d_options)
___NEED_GLO(___G_jazz_3a_zlib_2d_units)
___NEED_GLO(___G_string_2d_append)

___BEGIN_SYM
___DEF_SYM(0,___S_bin_3a_jazz_2e_zlib_2e_product,"bin:jazz.zlib.product")
___DEF_SYM(1,___S_build,"build")
___DEF_SYM(2,___S_descriptor,"descriptor")
___DEF_SYM(3,___S_force_3f_,"force?")
___DEF_SYM(4,___S_info,"info")
___DEF_SYM(5,___S_jazz_2e_zlib,"jazz.zlib")
___DEF_SYM(6,___S_jazz_2e_zlib_2e_foreign,"jazz.zlib.foreign")
___DEF_SYM(7,___S_jazz_2e_zlib_2e_product,"jazz.zlib.product")
___DEF_SYM(8,___S_lst1_2e_11,"lst1.11")
___DEF_SYM(9,___S_path,"path")
___DEF_SYM(10,___S_skip_2d_references_3f_,"skip-references?")
___DEF_SYM(11,___S_source,"source")
___DEF_SYM(12,___S_temp_2e_6,"temp.6")
___DEF_SYM(13,___S_unit,"unit")
___DEF_SYM(14,___S_unit_2d_specs,"unit-specs")
___DEF_SYM(15,___S_x_2e_12,"x.12")
___DEF_SYM(16,___S_zlib_2d_include_2d_path,"zlib-include-path")
___DEF_SYM(17,___S_zlib_2d_lib_2d_path,"zlib-lib-path")
___END_SYM

#define ___SYM_bin_3a_jazz_2e_zlib_2e_product ___SYM(0,___S_bin_3a_jazz_2e_zlib_2e_product)
#define ___SYM_build ___SYM(1,___S_build)
#define ___SYM_descriptor ___SYM(2,___S_descriptor)
#define ___SYM_force_3f_ ___SYM(3,___S_force_3f_)
#define ___SYM_info ___SYM(4,___S_info)
#define ___SYM_jazz_2e_zlib ___SYM(5,___S_jazz_2e_zlib)
#define ___SYM_jazz_2e_zlib_2e_foreign ___SYM(6,___S_jazz_2e_zlib_2e_foreign)
#define ___SYM_jazz_2e_zlib_2e_product ___SYM(7,___S_jazz_2e_zlib_2e_product)
#define ___SYM_lst1_2e_11 ___SYM(8,___S_lst1_2e_11)
#define ___SYM_path ___SYM(9,___S_path)
#define ___SYM_skip_2d_references_3f_ ___SYM(10,___S_skip_2d_references_3f_)
#define ___SYM_source ___SYM(11,___S_source)
#define ___SYM_temp_2e_6 ___SYM(12,___S_temp_2e_6)
#define ___SYM_unit ___SYM(13,___S_unit)
#define ___SYM_unit_2d_specs ___SYM(14,___S_unit_2d_specs)
#define ___SYM_x_2e_12 ___SYM(15,___S_x_2e_12)
#define ___SYM_zlib_2d_include_2d_path ___SYM(16,___S_zlib_2d_include_2d_path)
#define ___SYM_zlib_2d_lib_2d_path ___SYM(17,___S_zlib_2d_lib_2d_path)

___BEGIN_KEY
___DEF_KEY(0,___K_build,"build")
___DEF_KEY(1,___K_cc_2d_options,"cc-options")
___DEF_KEY(2,___K_feedback,"feedback")
___DEF_KEY(3,___K_force_3f_,"force?")
___DEF_KEY(4,___K_ld_2d_options,"ld-options")
___DEF_KEY(5,___K_library_2d_options,"library-options")
___DEF_KEY(6,___K_pre_2d_build,"pre-build")
___DEF_KEY(7,___K_skip_2d_references_3f_,"skip-references?")
___DEF_KEY(8,___K_unit,"unit")
___END_KEY

#define ___KEY_build ___KEY(0,___K_build)
#define ___KEY_cc_2d_options ___KEY(1,___K_cc_2d_options)
#define ___KEY_feedback ___KEY(2,___K_feedback)
#define ___KEY_force_3f_ ___KEY(3,___K_force_3f_)
#define ___KEY_ld_2d_options ___KEY(4,___K_ld_2d_options)
#define ___KEY_library_2d_options ___KEY(5,___K_library_2d_options)
#define ___KEY_pre_2d_build ___KEY(6,___K_pre_2d_build)
#define ___KEY_skip_2d_references_3f_ ___KEY(7,___K_skip_2d_references_3f_)
#define ___KEY_unit ___KEY(8,___K_unit)

___BEGIN_GLO
___DEF_GLO(0,"bin:jazz.zlib.product#")
___DEF_GLO(1,"jazz:build-zlib")
___DEF_GLO(2,"jazz:copy-platform-files")
___DEF_GLO(3,"jazz:platform-files")
___DEF_GLO(4,"jazz:zlib-library-options")
___DEF_GLO(5,"jazz:zlib-units")
___DEF_GLO(6,"assq")
___DEF_GLO(7,"car")
___DEF_GLO(8,"cdr")
___DEF_GLO(9,"jazz:Build-Repository")
___DEF_GLO(10,"jazz:build-product-descriptor")
___DEF_GLO(11,"jazz:copy-file-if-needed")
___DEF_GLO(12,"jazz:custom-compile/build")
___DEF_GLO(13,"jazz:feedback")
___DEF_GLO(14,"jazz:kernel-source")
___DEF_GLO(15,"jazz:quote-jazz-pathname")
___DEF_GLO(16,"jazz:register-product")
___DEF_GLO(17,"string-append")
___END_GLO

#define ___GLO_bin_3a_jazz_2e_zlib_2e_product_23_ ___GLO(0,___G_bin_3a_jazz_2e_zlib_2e_product_23_)
#define ___PRM_bin_3a_jazz_2e_zlib_2e_product_23_ ___PRM(0,___G_bin_3a_jazz_2e_zlib_2e_product_23_)
#define ___GLO_jazz_3a_build_2d_zlib ___GLO(1,___G_jazz_3a_build_2d_zlib)
#define ___PRM_jazz_3a_build_2d_zlib ___PRM(1,___G_jazz_3a_build_2d_zlib)
#define ___GLO_jazz_3a_copy_2d_platform_2d_files ___GLO(2,___G_jazz_3a_copy_2d_platform_2d_files)
#define ___PRM_jazz_3a_copy_2d_platform_2d_files ___PRM(2,___G_jazz_3a_copy_2d_platform_2d_files)
#define ___GLO_jazz_3a_platform_2d_files ___GLO(3,___G_jazz_3a_platform_2d_files)
#define ___PRM_jazz_3a_platform_2d_files ___PRM(3,___G_jazz_3a_platform_2d_files)
#define ___GLO_jazz_3a_zlib_2d_library_2d_options ___GLO(4,___G_jazz_3a_zlib_2d_library_2d_options)
#define ___PRM_jazz_3a_zlib_2d_library_2d_options ___PRM(4,___G_jazz_3a_zlib_2d_library_2d_options)
#define ___GLO_jazz_3a_zlib_2d_units ___GLO(5,___G_jazz_3a_zlib_2d_units)
#define ___PRM_jazz_3a_zlib_2d_units ___PRM(5,___G_jazz_3a_zlib_2d_units)
#define ___GLO_assq ___GLO(6,___G_assq)
#define ___PRM_assq ___PRM(6,___G_assq)
#define ___GLO_car ___GLO(7,___G_car)
#define ___PRM_car ___PRM(7,___G_car)
#define ___GLO_cdr ___GLO(8,___G_cdr)
#define ___PRM_cdr ___PRM(8,___G_cdr)
#define ___GLO_jazz_3a_Build_2d_Repository ___GLO(9,___G_jazz_3a_Build_2d_Repository)
#define ___PRM_jazz_3a_Build_2d_Repository ___PRM(9,___G_jazz_3a_Build_2d_Repository)
#define ___GLO_jazz_3a_build_2d_product_2d_descriptor ___GLO(10,___G_jazz_3a_build_2d_product_2d_descriptor)
#define ___PRM_jazz_3a_build_2d_product_2d_descriptor ___PRM(10,___G_jazz_3a_build_2d_product_2d_descriptor)
#define ___GLO_jazz_3a_copy_2d_file_2d_if_2d_needed ___GLO(11,___G_jazz_3a_copy_2d_file_2d_if_2d_needed)
#define ___PRM_jazz_3a_copy_2d_file_2d_if_2d_needed ___PRM(11,___G_jazz_3a_copy_2d_file_2d_if_2d_needed)
#define ___GLO_jazz_3a_custom_2d_compile_2f_build ___GLO(12,___G_jazz_3a_custom_2d_compile_2f_build)
#define ___PRM_jazz_3a_custom_2d_compile_2f_build ___PRM(12,___G_jazz_3a_custom_2d_compile_2f_build)
#define ___GLO_jazz_3a_feedback ___GLO(13,___G_jazz_3a_feedback)
#define ___PRM_jazz_3a_feedback ___PRM(13,___G_jazz_3a_feedback)
#define ___GLO_jazz_3a_kernel_2d_source ___GLO(14,___G_jazz_3a_kernel_2d_source)
#define ___PRM_jazz_3a_kernel_2d_source ___PRM(14,___G_jazz_3a_kernel_2d_source)
#define ___GLO_jazz_3a_quote_2d_jazz_2d_pathname ___GLO(15,___G_jazz_3a_quote_2d_jazz_2d_pathname)
#define ___PRM_jazz_3a_quote_2d_jazz_2d_pathname ___PRM(15,___G_jazz_3a_quote_2d_jazz_2d_pathname)
#define ___GLO_jazz_3a_register_2d_product ___GLO(16,___G_jazz_3a_register_2d_product)
#define ___PRM_jazz_3a_register_2d_product ___PRM(16,___G_jazz_3a_register_2d_product)
#define ___GLO_string_2d_append ___GLO(17,___G_string_2d_append)
#define ___PRM_string_2d_append ___PRM(17,___G_string_2d_append)

___DEF_SUB_STR(___X0,40UL)
               ___STR8(108,105,98,47,106,97,122,122)
               ___STR8(46,122,108,105,98,47,102,111)
               ___STR8(114,101,105,103,110,47,108,105)
               ___STR8(110,117,120,47,122,108,105,98)
               ___STR8(47,105,110,99,108,117,100,101)
               ___STR0
___DEF_SUB_STR(___X1,36UL)
               ___STR8(108,105,98,47,106,97,122,122)
               ___STR8(46,122,108,105,98,47,102,111)
               ___STR8(114,101,105,103,110,47,108,105)
               ___STR8(110,117,120,47,122,108,105,98)
               ___STR4(47,108,105,98)
___DEF_SUB_STR(___X2,2UL)
               ___STR2(45,73)
___DEF_SUB_STR(___X3,33UL)
               ___STR8(45,87,108,44,45,114,112,97)
               ___STR8(116,104,44,36,79,82,73,71)
               ___STR8(73,78,47,46,46,47,46,46)
               ___STR8(47,46,46,47,46,46,47,46)
               ___STR1(46)
___DEF_SUB_STR(___X4,4UL)
               ___STR4(32,45,108,122)
___DEF_SUB_STR(___X5,3UL)
               ___STR3(32,45,76)
___DEF_SUB_STR(___X6,46UL)
               ___STR8(108,105,98,47,106,97,122,122)
               ___STR8(46,122,108,105,98,47,102,111)
               ___STR8(114,101,105,103,110,47,108,105)
               ___STR8(110,117,120,47,122,108,105,98)
               ___STR8(47,108,105,98,47,108,105,98)
               ___STR6(122,46,115,111,46,49)
___DEF_SUB_STR(___X7,9UL)
               ___STR8(108,105,98,122,46,115,111,46)
               ___STR1(49)
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_SUB(9))
               ___VEC1(___REF_SUB(28))
               ___VEC0
___DEF_SUB_VEC(___X9,9UL)
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
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(196672))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(2031681))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(2031681))
               ___VEC0
___DEF_SUB_VEC(___X16,3UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(17))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X17,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(2031682))
               ___VEC0
___DEF_SUB_VEC(___X18,4UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(19))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X19,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1572932))
               ___VEC0
___DEF_SUB_VEC(___X20,4UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(21))
               ___VEC1(___REF_FIX(98306))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X21,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1572933))
               ___VEC0
___DEF_SUB_VEC(___X22,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(23))
               ___VEC0
___DEF_SUB_VEC(___X23,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(123))
               ___VEC0
___DEF_SUB_VEC(___X24,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(25))
               ___VEC0
___DEF_SUB_VEC(___X25,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(123))
               ___VEC0
___DEF_SUB_VEC(___X26,2UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(27))
               ___VEC0
___DEF_SUB_VEC(___X27,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(123))
               ___VEC0
___DEF_SUB_VEC(___X28,2UL)
               ___VEC1(___REF_SYM(16,___S_zlib_2d_include_2d_path))
               ___VEC1(___REF_SYM(17,___S_zlib_2d_lib_2d_path))
               ___VEC0
___DEF_SUB_VEC(___X29,2UL)
               ___VEC1(___REF_SUB(30))
               ___VEC1(___REF_SUB(59))
               ___VEC0
___DEF_SUB_VEC(___X30,14UL)
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
               ___VEC1(___REF_SUB(55))
               ___VEC1(___REF_SUB(57))
               ___VEC0
___DEF_SUB_VEC(___X31,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(32))
               ___VEC0
___DEF_SUB_VEC(___X32,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(84))
               ___VEC0
___DEF_SUB_VEC(___X33,3UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(34))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X34,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(589909))
               ___VEC0
___DEF_SUB_VEC(___X35,5UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(36))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X36,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(262237))
               ___VEC0
___DEF_SUB_VEC(___X37,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(38))
               ___VEC0
___DEF_SUB_VEC(___X38,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(262237))
               ___VEC0
___DEF_SUB_VEC(___X39,5UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(40))
               ___VEC1(___REF_FIX(131074))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X40,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(262237))
               ___VEC0
___DEF_SUB_VEC(___X41,7UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(42))
               ___VEC1(___REF_FIX(557060))
               ___VEC1(___REF_FIX(524294))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X42,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(2883680))
               ___VEC0
___DEF_SUB_VEC(___X43,4UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(44))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X44,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(393304))
               ___VEC0
___DEF_SUB_VEC(___X45,5UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(46))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X46,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(2883680))
               ___VEC0
___DEF_SUB_VEC(___X47,4UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(48))
               ___VEC1(___REF_FIX(98312))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X48,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(393307))
               ___VEC0
___DEF_SUB_VEC(___X49,5UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(50))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X50,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(4259936))
               ___VEC0
___DEF_SUB_VEC(___X51,5UL)
               ___VEC1(___REF_FIX(10))
               ___VEC1(___REF_SUB(52))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X52,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1179744))
               ___VEC0
___DEF_SUB_VEC(___X53,5UL)
               ___VEC1(___REF_FIX(11))
               ___VEC1(___REF_SUB(54))
               ___VEC1(___REF_FIX(196612))
               ___VEC1(___REF_FIX(163846))
               ___VEC1(___REF_FIX(98304))
               ___VEC0
___DEF_SUB_VEC(___X54,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1179744))
               ___VEC0
___DEF_SUB_VEC(___X55,5UL)
               ___VEC1(___REF_FIX(12))
               ___VEC1(___REF_SUB(56))
               ___VEC1(___REF_FIX(163844))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X56,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1900639))
               ___VEC0
___DEF_SUB_VEC(___X57,5UL)
               ___VEC1(___REF_FIX(13))
               ___VEC1(___REF_SUB(58))
               ___VEC1(___REF_FIX(131078))
               ___VEC1(___REF_FIX(98308))
               ___VEC1(___REF_FIX(65536))
               ___VEC0
___DEF_SUB_VEC(___X58,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1966174))
               ___VEC0
___DEF_SUB_VEC(___X59,5UL)
               ___VEC1(___REF_SYM(1,___S_build))
               ___VEC1(___REF_SYM(12,___S_temp_2e_6))
               ___VEC1(___REF_SYM(11,___S_source))
               ___VEC1(___REF_SYM(4,___S_info))
               ___VEC1(___REF_SYM(9,___S_path))
               ___VEC0
___DEF_SUB_VEC(___X60,6UL)
               ___VEC1(___REF_KEY(8,___K_unit))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(7,___K_skip_2d_references_3f_))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_KEY(3,___K_force_3f_))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_VEC(___X61,2UL)
               ___VEC1(___REF_SUB(62))
               ___VEC1(___REF_SUB(83))
               ___VEC0
___DEF_SUB_VEC(___X62,10UL)
               ___VEC1(___REF_SUB(63))
               ___VEC1(___REF_SUB(65))
               ___VEC1(___REF_SUB(67))
               ___VEC1(___REF_SUB(69))
               ___VEC1(___REF_SUB(71))
               ___VEC1(___REF_SUB(73))
               ___VEC1(___REF_SUB(75))
               ___VEC1(___REF_SUB(77))
               ___VEC1(___REF_SUB(79))
               ___VEC1(___REF_SUB(81))
               ___VEC0
___DEF_SUB_VEC(___X63,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(64))
               ___VEC0
___DEF_SUB_VEC(___X64,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(100))
               ___VEC0
___DEF_SUB_VEC(___X65,7UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(66))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X66,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(4194406))
               ___VEC0
___DEF_SUB_VEC(___X67,7UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(68))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X68,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(262246))
               ___VEC0
___DEF_SUB_VEC(___X69,4UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(70))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X70,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1835111))
               ___VEC0
___DEF_SUB_VEC(___X71,6UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(72))
               ___VEC1(___REF_FIX(163850))
               ___VEC1(___REF_FIX(131084))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X72,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1835111))
               ___VEC0
___DEF_SUB_VEC(___X73,5UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(74))
               ___VEC1(___REF_FIX(131084))
               ___VEC1(___REF_FIX(98310))
               ___VEC1(___REF_FIX(65540))
               ___VEC0
___DEF_SUB_VEC(___X74,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1835111))
               ___VEC0
___DEF_SUB_VEC(___X75,7UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(76))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X76,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(1835111))
               ___VEC0
___DEF_SUB_VEC(___X77,2UL)
               ___VEC1(___REF_FIX(7))
               ___VEC1(___REF_SUB(78))
               ___VEC0
___DEF_SUB_VEC(___X78,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(262247))
               ___VEC0
___DEF_SUB_VEC(___X79,7UL)
               ___VEC1(___REF_FIX(8))
               ___VEC1(___REF_SUB(80))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X80,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(524392))
               ___VEC0
___DEF_SUB_VEC(___X81,7UL)
               ___VEC1(___REF_FIX(9))
               ___VEC1(___REF_SUB(82))
               ___VEC1(___REF_FIX(196608))
               ___VEC1(___REF_FIX(163842))
               ___VEC1(___REF_FIX(131076))
               ___VEC1(___REF_FIX(65542))
               ___VEC1(___REF_FIX(32776))
               ___VEC0
___DEF_SUB_VEC(___X82,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(524392))
               ___VEC0
___DEF_SUB_VEC(___X83,7UL)
               ___VEC1(___REF_SYM(3,___S_force_3f_))
               ___VEC1(___REF_SYM(10,___S_skip_2d_references_3f_))
               ___VEC1(___REF_SYM(13,___S_unit))
               ___VEC1(___REF_SYM(14,___S_unit_2d_specs))
               ___VEC1(___REF_SYM(2,___S_descriptor))
               ___VEC1(___REF_SYM(15,___S_x_2e_12))
               ___VEC1(___REF_SYM(8,___S_lst1_2e_11))
               ___VEC0
___DEF_SUB_VEC(___X84,2UL)
               ___VEC1(___REF_SUB(85))
               ___VEC1(___REF_SUB(88))
               ___VEC0
___DEF_SUB_VEC(___X85,1UL)
               ___VEC1(___REF_SUB(86))
               ___VEC0
___DEF_SUB_VEC(___X86,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(87))
               ___VEC0
___DEF_SUB_VEC(___X87,2UL)
               ___VEC1(___REF_SYM(7,___S_jazz_2e_zlib_2e_product))
               ___VEC1(___REF_FIX(107))
               ___VEC0
___DEF_SUB_VEC(___X88,0UL)
               ___VEC0
___DEF_SUB_VEC(___X89,5UL)
               ___VEC1(___REF_SYM(0,___S_bin_3a_jazz_2e_zlib_2e_product))
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
___DEF_M_HLBL(___L0_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L1_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L2_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L3_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L4_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L5_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L6_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L7_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL(___L8_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L1_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L2_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L3_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L4_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L5_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L6_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L7_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L8_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L9_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L10_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L11_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L12_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL(___L13_jazz_3a_copy_2d_platform_2d_files)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L1_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L2_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L3_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L4_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L5_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L6_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L7_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L8_jazz_3a_build_2d_zlib)
___DEF_M_HLBL(___L9_jazz_3a_build_2d_zlib)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_jazz_3a_zlib_2d_library_2d_options)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_jazz_2e_zlib_2e_product_23_
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
___DEF_P_HLBL(___L0_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L1_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L2_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L3_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L4_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L5_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L6_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L7_bin_3a_jazz_2e_zlib_2e_product_23_)
___DEF_P_HLBL(___L8_bin_3a_jazz_2e_zlib_2e_product_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(0))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_jazz_3a_quote_2d_jazz_2d_pathname)
___DEF_SLBL(2,___L2_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___SET_STK(-2,___R1)
   ___SET_R1(___SUB(1))
   ___SET_R0(___LBL(3))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_jazz_3a_quote_2d_jazz_2d_pathname)
___DEF_SLBL(3,___L3_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___SET_STK(-5,___R1)
   ___SET_R2(___STK(-6))
   ___SET_R1(___SUB(2))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM_string_2d_append)
___DEF_SLBL(4,___L4_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___SET_STK(-4,___R1)
   ___SET_STK(1,___SUB(3))
   ___SET_R2(___STK(-5))
   ___SET_R3(___SUB(4))
   ___SET_R1(___SUB(5))
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPPRM(___SET_NARGS(4),___PRM_string_2d_append)
___DEF_SLBL(5,___L5_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___BEGIN_ALLOC_LIST(5UL,___R1)
   ___ADD_LIST_ELEM(1,___KEY_ld_2d_options)
   ___ADD_LIST_ELEM(2,___STK(-4))
   ___ADD_LIST_ELEM(3,___KEY_cc_2d_options)
   ___ADD_LIST_ELEM(4,___SYM_jazz_2e_zlib_2e_foreign)
   ___END_ALLOC_LIST(5)
   ___SET_R1(___GET_LIST(5))
   ___SET_R1(___CONS(___R1,___NUL))
   ___SET_GLO(5,___G_jazz_3a_zlib_2d_units,___R1)
   ___SET_R1(___CONS(___SUB(6),___SUB(7)))
   ___SET_R1(___CONS(___R1,___NUL))
   ___SET_GLO(3,___G_jazz_3a_platform_2d_files,___R1)
   ___SET_GLO(2,___G_jazz_3a_copy_2d_platform_2d_files,___PRC(11))
   ___SET_GLO(1,___G_jazz_3a_build_2d_zlib,___PRC(26))
   ___SET_GLO(4,___G_jazz_3a_zlib_2d_library_2d_options,___PRC(37))
   ___SET_STK(-3,___SYM_jazz_2e_zlib)
   ___SET_STK(-2,___KEY_build)
   ___SET_R3(___GLO_jazz_3a_zlib_2d_library_2d_options)
   ___SET_R2(___KEY_library_2d_options)
   ___SET_R1(___GLO_jazz_3a_build_2d_zlib)
   ___SET_R0(___LBL(7))
   ___ADJFP(-2)
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___JUMPGLOSAFE(___SET_NARGS(5),16,___G_jazz_3a_register_2d_product)
___DEF_SLBL(7,___L7_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___POLL(8)
___DEF_SLBL(8,___L8_bin_3a_jazz_2e_zlib_2e_product_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_copy_2d_platform_2d_files
#undef ___PH_LBL0
#define ___PH_LBL0 11
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L1_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L2_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L3_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L4_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L5_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L6_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L7_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L8_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L9_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L10_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L11_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L12_jazz_3a_copy_2d_platform_2d_files)
___DEF_P_HLBL(___L13_jazz_3a_copy_2d_platform_2d_files)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_copy_2d_platform_2d_files)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_jazz_3a_copy_2d_platform_2d_files)
   ___SET_STK(1,___GLO_jazz_3a_kernel_2d_source)
   ___SET_R1(___VECTORREF(___GLO_jazz_3a_Build_2d_Repository,___FIX(2L)))
   ___SET_STK(2,___GLO_jazz_3a_platform_2d_files)
   ___SET_R3(___STK(2))
   ___SET_R2(___STK(1))
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_copy_2d_platform_2d_files)
   ___GOTO(___L14_jazz_3a_copy_2d_platform_2d_files)
___DEF_SLBL(2,___L2_jazz_3a_copy_2d_platform_2d_files)
   ___SET_R3(___CDR(___STK(-4)))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_copy_2d_platform_2d_files)
___DEF_GLBL(___L14_jazz_3a_copy_2d_platform_2d_files)
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L19_jazz_3a_copy_2d_platform_2d_files)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R3(___CAR(___R3))
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_jazz_3a_copy_2d_platform_2d_files)
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L17_jazz_3a_copy_2d_platform_2d_files)
   ___END_IF
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L15_jazz_3a_copy_2d_platform_2d_files)
   ___END_IF
   ___SET_STK(1,___CDR(___R3))
   ___SET_STK(2,___R1)
   ___SET_R1(___STK(1))
   ___SET_STK(1,___R0)
   ___SET_STK(3,___R1)
   ___SET_STK(4,___R2)
   ___SET_STK(5,___R3)
   ___SET_STK(6,___R4)
   ___SET_R2(___R4)
   ___SET_R1(___STK(4))
   ___SET_R0(___LBL(7))
   ___ADJFP(12)
   ___POLL(5)
___DEF_SLBL(5,___L5_jazz_3a_copy_2d_platform_2d_files)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(6))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_string_2d_append)
___DEF_SLBL(6,___L6_jazz_3a_copy_2d_platform_2d_files)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(7,___L7_jazz_3a_copy_2d_platform_2d_files)
   ___SET_STK(1,___R1)
   ___SET_R2(___STK(-9))
   ___SET_R1(___STK(-10))
   ___SET_R0(___LBL(9))
   ___ADJFP(4)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(8))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_string_2d_append)
___DEF_SLBL(8,___L8_jazz_3a_copy_2d_platform_2d_files)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(9,___L9_jazz_3a_copy_2d_platform_2d_files)
   ___SET_R3(___GLO_jazz_3a_feedback)
   ___SET_R2(___KEY_feedback)
   ___SET_R0(___LBL(10))
   ___ADJFP(-3)
   ___JUMPGLOSAFE(___SET_NARGS(4),11,___G_jazz_3a_copy_2d_file_2d_if_2d_needed)
___DEF_SLBL(10,___L10_jazz_3a_copy_2d_platform_2d_files)
   ___POLL(11)
___DEF_SLBL(11,___L11_jazz_3a_copy_2d_platform_2d_files)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L15_jazz_3a_copy_2d_platform_2d_files)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(12))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_cdr)
___DEF_SLBL(12,___L12_jazz_3a_copy_2d_platform_2d_files)
___DEF_GLBL(___L16_jazz_3a_copy_2d_platform_2d_files)
   ___GOTO(___L16_jazz_3a_copy_2d_platform_2d_files)
___DEF_GLBL(___L17_jazz_3a_copy_2d_platform_2d_files)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(13))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(1),___PRM_car)
___DEF_SLBL(13,___L13_jazz_3a_copy_2d_platform_2d_files)
___DEF_GLBL(___L18_jazz_3a_copy_2d_platform_2d_files)
   ___GOTO(___L18_jazz_3a_copy_2d_platform_2d_files)
___DEF_GLBL(___L19_jazz_3a_copy_2d_platform_2d_files)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_build_2d_zlib
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
___DEF_P_HLBL(___L0_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L1_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L2_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L3_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L4_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L5_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L6_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L7_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L8_jazz_3a_build_2d_zlib)
___DEF_P_HLBL(___L9_jazz_3a_build_2d_zlib)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_build_2d_zlib)
   ___IF_NARGS_EQ(1,___PUSH(___R1) ___SET_R1(___FAL) ___SET_R2(___FAL) ___SET_R3(___FAL))
   ___GET_KEY(0,1,0,3,___SUB(60))
___DEF_GLBL(___L_jazz_3a_build_2d_zlib)
   ___SET_STK(1,___GLO_jazz_3a_zlib_2d_units)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R1)
   ___SET_STK(4,___R2)
   ___SET_STK(5,___R3)
   ___SET_STK(12,___STK(1))
   ___SET_STK(13,___KEY_unit)
   ___SET_STK(14,___R1)
   ___SET_STK(15,___KEY_pre_2d_build)
   ___SET_R2(___KEY_force_3f_)
   ___SET_R1(___GLO_jazz_3a_copy_2d_platform_2d_files)
   ___ADJFP(15)
   ___POLL(1)
___DEF_SLBL(1,___L1_jazz_3a_build_2d_zlib)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(7),12,___G_jazz_3a_custom_2d_compile_2f_build)
___DEF_SLBL(2,___L2_jazz_3a_build_2d_zlib)
   ___IF(___NOT(___NOTFALSEP(___STK(-8))))
   ___GOTO(___L17_jazz_3a_build_2d_zlib)
   ___END_IF
   ___SET_R1(___STK(-8))
   ___SET_R3(___STK(-10))
   ___SET_R2(___STK(-10))
   ___SET_R0(___LBL(6))
   ___IF(___PAIRP(___R3))
   ___GOTO(___L11_jazz_3a_build_2d_zlib)
   ___END_IF
   ___GOTO(___L14_jazz_3a_build_2d_zlib)
___DEF_GLBL(___L10_jazz_3a_build_2d_zlib)
   ___SET_STK(1,___CAR(___R4))
   ___ADJFP(1)
   ___IF(___EQP(___R1,___STK(0)))
   ___GOTO(___L13_jazz_3a_build_2d_zlib)
   ___END_IF
   ___SET_R3(___CDR(___R3))
   ___ADJFP(-1)
   ___POLL(3)
___DEF_SLBL(3,___L3_jazz_3a_build_2d_zlib)
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L14_jazz_3a_build_2d_zlib)
   ___END_IF
___DEF_GLBL(___L11_jazz_3a_build_2d_zlib)
   ___SET_R4(___CAR(___R3))
   ___IF(___PAIRP(___R4))
   ___GOTO(___L10_jazz_3a_build_2d_zlib)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_assq)
___DEF_SLBL(4,___L4_jazz_3a_build_2d_zlib)
___DEF_GLBL(___L12_jazz_3a_build_2d_zlib)
   ___GOTO(___L12_jazz_3a_build_2d_zlib)
___DEF_GLBL(___L13_jazz_3a_build_2d_zlib)
   ___SET_R1(___R4)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L14_jazz_3a_build_2d_zlib)
   ___IF(___NULLP(___R3))
   ___GOTO(___L16_jazz_3a_build_2d_zlib)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R0(___LBL(5))
   ___ADJFP(8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_assq)
___DEF_SLBL(5,___L5_jazz_3a_build_2d_zlib)
___DEF_GLBL(___L15_jazz_3a_build_2d_zlib)
   ___GOTO(___L15_jazz_3a_build_2d_zlib)
___DEF_GLBL(___L16_jazz_3a_build_2d_zlib)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(6,___L6_jazz_3a_build_2d_zlib)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L17_jazz_3a_build_2d_zlib)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(7)
___DEF_SLBL(7,___L7_jazz_3a_build_2d_zlib)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(3))
___DEF_GLBL(___L17_jazz_3a_build_2d_zlib)
   ___SET_STK(1,___STK(-11))
   ___SET_STK(2,___KEY_unit)
   ___SET_R3(___STK(-6))
   ___SET_R1(___STK(-8))
   ___SET_R2(___KEY_force_3f_)
   ___SET_R0(___LBL(8))
   ___ADJFP(2)
   ___JUMPGLOSAFE(___SET_NARGS(5),10,___G_jazz_3a_build_2d_product_2d_descriptor)
___DEF_SLBL(8,___L8_jazz_3a_build_2d_zlib)
   ___POLL(9)
___DEF_SLBL(9,___L9_jazz_3a_build_2d_zlib)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_jazz_3a_zlib_2d_library_2d_options
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
___DEF_P_HLBL(___L0_jazz_3a_zlib_2d_library_2d_options)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_jazz_3a_zlib_2d_library_2d_options)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_jazz_3a_zlib_2d_library_2d_options)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_jazz_2e_zlib_2e_product_23_,"bin:jazz.zlib.product#",___REF_SUB(8),9,
0)
,___DEF_LBL_PROC(___H_bin_3a_jazz_2e_zlib_2e_product_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETI,6,0,0x3f31L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_jazz_2e_zlib_2e_product_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_jazz_3a_copy_2d_platform_2d_files,0,___REF_SUB(29),14,0)
,___DEF_LBL_PROC(___H_jazz_3a_copy_2d_platform_2d_files,0,-1)
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___OFD(___RETI,12,0,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,13,0,0x103fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,9,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___OFD(___RETI,12,0,0x3f03fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_3a_copy_2d_platform_2d_files,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_INTRO(___H_jazz_3a_build_2d_zlib,0,___REF_SUB(61),10,0)
,___DEF_LBL_PROC(___H_jazz_3a_build_2d_zlib,4,-1)
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___OFD(___RETI,16,2,0x3ff03fL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___IFD(___RETN,9,2,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___IFD(___RETN,9,2,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___OFD(___RETI,12,2,0x3f004L))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___IFD(___RETN,9,2,0x3fL))
,___DEF_LBL_RET(___H_jazz_3a_build_2d_zlib,___OFD(___RETI,12,2,0x3f03fL))
,___DEF_LBL_INTRO(___H_jazz_3a_zlib_2d_library_2d_options,0,___REF_SUB(84),1,0)
,___DEF_LBL_PROC(___H_jazz_3a_zlib_2d_library_2d_options,2,-1)
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,12,0)
               ___GCMAP1(0x3f03fL)
,___DEF_OFD(___RETI,16,2)
               ___GCMAP1(0x3ff03fL)
,___DEF_OFD(___RETI,12,2)
               ___GCMAP1(0x3f004L)
,___DEF_OFD(___RETI,12,2)
               ___GCMAP1(0x3f03fL)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_jazz_2e_zlib_2e_product_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_jazz_2e_zlib_2e_product_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_bin_3a_jazz_2e_zlib_2e_product,"bin:jazz.zlib.product")
___DEF_MOD_SYM(1,___S_build,"build")
___DEF_MOD_SYM(2,___S_descriptor,"descriptor")
___DEF_MOD_SYM(3,___S_force_3f_,"force?")
___DEF_MOD_SYM(4,___S_info,"info")
___DEF_MOD_SYM(5,___S_jazz_2e_zlib,"jazz.zlib")
___DEF_MOD_SYM(6,___S_jazz_2e_zlib_2e_foreign,"jazz.zlib.foreign")
___DEF_MOD_SYM(7,___S_jazz_2e_zlib_2e_product,"jazz.zlib.product")
___DEF_MOD_SYM(8,___S_lst1_2e_11,"lst1.11")
___DEF_MOD_SYM(9,___S_path,"path")
___DEF_MOD_SYM(10,___S_skip_2d_references_3f_,"skip-references?")
___DEF_MOD_SYM(11,___S_source,"source")
___DEF_MOD_SYM(12,___S_temp_2e_6,"temp.6")
___DEF_MOD_SYM(13,___S_unit,"unit")
___DEF_MOD_SYM(14,___S_unit_2d_specs,"unit-specs")
___DEF_MOD_SYM(15,___S_x_2e_12,"x.12")
___DEF_MOD_SYM(16,___S_zlib_2d_include_2d_path,"zlib-include-path")
___DEF_MOD_SYM(17,___S_zlib_2d_lib_2d_path,"zlib-lib-path")
___DEF_MOD_KEY(0,___K_build,"build")
___DEF_MOD_KEY(1,___K_cc_2d_options,"cc-options")
___DEF_MOD_KEY(2,___K_feedback,"feedback")
___DEF_MOD_KEY(3,___K_force_3f_,"force?")
___DEF_MOD_KEY(4,___K_ld_2d_options,"ld-options")
___DEF_MOD_KEY(5,___K_library_2d_options,"library-options")
___DEF_MOD_KEY(6,___K_pre_2d_build,"pre-build")
___DEF_MOD_KEY(7,___K_skip_2d_references_3f_,"skip-references?")
___DEF_MOD_KEY(8,___K_unit,"unit")
___END_MOD_SYM_KEY

#endif
