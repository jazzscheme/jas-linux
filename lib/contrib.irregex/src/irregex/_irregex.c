#ifdef ___LINKER_INFO
; File: "_irregex.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:irregex"
(("bin:irregex"))
(
"bin:irregex"
"foundation.dialect"
"irregex"
"irregex-fold"
"irregex-fold/chunked"
"irregex-match"
"irregex-match-data?"
"irregex-match-end-chunk"
"irregex-match-end-index"
"irregex-match-start-chunk"
"irregex-match-start-index"
"irregex-match-subchunk"
"irregex-match-substring"
"irregex-match-valid-index?"
"irregex-match/chunked"
"irregex-num-submatches"
"irregex-replace"
"irregex-replace/all"
"irregex-search"
"irregex-search/chunked"
"irregex.implementation.irregex"
"irregex:irregex"
"irregex:irregex-fold"
"irregex:irregex-fold/chunked"
"irregex:irregex-match"
"irregex:irregex-match-data?"
"irregex:irregex-match-end-chunk"
"irregex:irregex-match-end-index"
"irregex:irregex-match-start-chunk"
"irregex:irregex-match-start-index"
"irregex:irregex-match-subchunk"
"irregex:irregex-match-substring"
"irregex:irregex-match-valid-index?"
"irregex:irregex-match/chunked"
"irregex:irregex-num-submatches"
"irregex:irregex-replace"
"irregex:irregex-replace/all"
"irregex:irregex-search"
"irregex:irregex-search/chunked"
"irregex:irregex?"
"irregex:make-irregex-chunker"
"irregex:sre->irregex"
"irregex:string->irregex"
"irregex?"
"make-irregex-chunker"
"public"
"scheme"
"sre->irregex"
"string->irregex"
)
(
)
(
"bin:irregex#"
)
(
)
(
"jazz:load-unit"
"jazz:register-module"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:irregex"
#define ___LINKER_ID ___LNK_bin_3a_irregex
#define ___MH_PROC ___H_bin_3a_irregex
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 49
#define ___GLOCOUNT 3
#define ___SUPCOUNT 1
#define ___CNSCOUNT 44
#define ___SUBCOUNT 18
#define ___LBLCOUNT 8
#define ___MODDESCR ___REF_SUB(17)
#include "gambit.h"

___NEED_SYM(___S_bin_3a_irregex)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_irregex)
___NEED_SYM(___S_irregex_2d_fold)
___NEED_SYM(___S_irregex_2d_fold_2f_chunked)
___NEED_SYM(___S_irregex_2d_match)
___NEED_SYM(___S_irregex_2d_match_2d_data_3f_)
___NEED_SYM(___S_irregex_2d_match_2d_end_2d_chunk)
___NEED_SYM(___S_irregex_2d_match_2d_end_2d_index)
___NEED_SYM(___S_irregex_2d_match_2d_start_2d_chunk)
___NEED_SYM(___S_irregex_2d_match_2d_start_2d_index)
___NEED_SYM(___S_irregex_2d_match_2d_subchunk)
___NEED_SYM(___S_irregex_2d_match_2d_substring)
___NEED_SYM(___S_irregex_2d_match_2d_valid_2d_index_3f_)
___NEED_SYM(___S_irregex_2d_match_2f_chunked)
___NEED_SYM(___S_irregex_2d_num_2d_submatches)
___NEED_SYM(___S_irregex_2d_replace)
___NEED_SYM(___S_irregex_2d_replace_2f_all)
___NEED_SYM(___S_irregex_2d_search)
___NEED_SYM(___S_irregex_2d_search_2f_chunked)
___NEED_SYM(___S_irregex_2e_implementation_2e_irregex)
___NEED_SYM(___S_irregex_3a_irregex)
___NEED_SYM(___S_irregex_3a_irregex_2d_fold)
___NEED_SYM(___S_irregex_3a_irregex_2d_fold_2f_chunked)
___NEED_SYM(___S_irregex_3a_irregex_2d_match)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_data_3f_)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_end_2d_chunk)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_end_2d_index)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_start_2d_chunk)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_start_2d_index)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_subchunk)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_substring)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2d_valid_2d_index_3f_)
___NEED_SYM(___S_irregex_3a_irregex_2d_match_2f_chunked)
___NEED_SYM(___S_irregex_3a_irregex_2d_num_2d_submatches)
___NEED_SYM(___S_irregex_3a_irregex_2d_replace)
___NEED_SYM(___S_irregex_3a_irregex_2d_replace_2f_all)
___NEED_SYM(___S_irregex_3a_irregex_2d_search)
___NEED_SYM(___S_irregex_3a_irregex_2d_search_2f_chunked)
___NEED_SYM(___S_irregex_3a_irregex_3f_)
___NEED_SYM(___S_irregex_3a_make_2d_irregex_2d_chunker)
___NEED_SYM(___S_irregex_3a_sre_2d__3e_irregex)
___NEED_SYM(___S_irregex_3a_string_2d__3e_irregex)
___NEED_SYM(___S_irregex_3f_)
___NEED_SYM(___S_make_2d_irregex_2d_chunker)
___NEED_SYM(___S_public)
___NEED_SYM(___S_scheme)
___NEED_SYM(___S_sre_2d__3e_irregex)
___NEED_SYM(___S_string_2d__3e_irregex)

___NEED_GLO(___G_bin_3a_irregex_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)

___BEGIN_SYM
___DEF_SYM(0,___S_bin_3a_irregex,"bin:irregex")
___DEF_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(2,___S_irregex,"irregex")
___DEF_SYM(3,___S_irregex_2d_fold,"irregex-fold")
___DEF_SYM(4,___S_irregex_2d_fold_2f_chunked,"irregex-fold/chunked")
___DEF_SYM(5,___S_irregex_2d_match,"irregex-match")
___DEF_SYM(6,___S_irregex_2d_match_2d_data_3f_,"irregex-match-data?")
___DEF_SYM(7,___S_irregex_2d_match_2d_end_2d_chunk,"irregex-match-end-chunk")
___DEF_SYM(8,___S_irregex_2d_match_2d_end_2d_index,"irregex-match-end-index")
___DEF_SYM(9,___S_irregex_2d_match_2d_start_2d_chunk,"irregex-match-start-chunk")
___DEF_SYM(10,___S_irregex_2d_match_2d_start_2d_index,"irregex-match-start-index")
___DEF_SYM(11,___S_irregex_2d_match_2d_subchunk,"irregex-match-subchunk")
___DEF_SYM(12,___S_irregex_2d_match_2d_substring,"irregex-match-substring")
___DEF_SYM(13,___S_irregex_2d_match_2d_valid_2d_index_3f_,"irregex-match-valid-index?")
___DEF_SYM(14,___S_irregex_2d_match_2f_chunked,"irregex-match/chunked")
___DEF_SYM(15,___S_irregex_2d_num_2d_submatches,"irregex-num-submatches")
___DEF_SYM(16,___S_irregex_2d_replace,"irregex-replace")
___DEF_SYM(17,___S_irregex_2d_replace_2f_all,"irregex-replace/all")
___DEF_SYM(18,___S_irregex_2d_search,"irregex-search")
___DEF_SYM(19,___S_irregex_2d_search_2f_chunked,"irregex-search/chunked")
___DEF_SYM(20,___S_irregex_2e_implementation_2e_irregex,"irregex.implementation.irregex")

___DEF_SYM(21,___S_irregex_3a_irregex,"irregex:irregex")
___DEF_SYM(22,___S_irregex_3a_irregex_2d_fold,"irregex:irregex-fold")
___DEF_SYM(23,___S_irregex_3a_irregex_2d_fold_2f_chunked,"irregex:irregex-fold/chunked")
___DEF_SYM(24,___S_irregex_3a_irregex_2d_match,"irregex:irregex-match")
___DEF_SYM(25,___S_irregex_3a_irregex_2d_match_2d_data_3f_,"irregex:irregex-match-data?")
___DEF_SYM(26,___S_irregex_3a_irregex_2d_match_2d_end_2d_chunk,"irregex:irregex-match-end-chunk")

___DEF_SYM(27,___S_irregex_3a_irregex_2d_match_2d_end_2d_index,"irregex:irregex-match-end-index")

___DEF_SYM(28,___S_irregex_3a_irregex_2d_match_2d_start_2d_chunk,"irregex:irregex-match-start-chunk")

___DEF_SYM(29,___S_irregex_3a_irregex_2d_match_2d_start_2d_index,"irregex:irregex-match-start-index")

___DEF_SYM(30,___S_irregex_3a_irregex_2d_match_2d_subchunk,"irregex:irregex-match-subchunk")

___DEF_SYM(31,___S_irregex_3a_irregex_2d_match_2d_substring,"irregex:irregex-match-substring")

___DEF_SYM(32,___S_irregex_3a_irregex_2d_match_2d_valid_2d_index_3f_,"irregex:irregex-match-valid-index?")

___DEF_SYM(33,___S_irregex_3a_irregex_2d_match_2f_chunked,"irregex:irregex-match/chunked")

___DEF_SYM(34,___S_irregex_3a_irregex_2d_num_2d_submatches,"irregex:irregex-num-submatches")

___DEF_SYM(35,___S_irregex_3a_irregex_2d_replace,"irregex:irregex-replace")
___DEF_SYM(36,___S_irregex_3a_irregex_2d_replace_2f_all,"irregex:irregex-replace/all")
___DEF_SYM(37,___S_irregex_3a_irregex_2d_search,"irregex:irregex-search")
___DEF_SYM(38,___S_irregex_3a_irregex_2d_search_2f_chunked,"irregex:irregex-search/chunked")

___DEF_SYM(39,___S_irregex_3a_irregex_3f_,"irregex:irregex?")
___DEF_SYM(40,___S_irregex_3a_make_2d_irregex_2d_chunker,"irregex:make-irregex-chunker")
___DEF_SYM(41,___S_irregex_3a_sre_2d__3e_irregex,"irregex:sre->irregex")
___DEF_SYM(42,___S_irregex_3a_string_2d__3e_irregex,"irregex:string->irregex")
___DEF_SYM(43,___S_irregex_3f_,"irregex?")
___DEF_SYM(44,___S_make_2d_irregex_2d_chunker,"make-irregex-chunker")
___DEF_SYM(45,___S_public,"public")
___DEF_SYM(46,___S_scheme,"scheme")
___DEF_SYM(47,___S_sre_2d__3e_irregex,"sre->irregex")
___DEF_SYM(48,___S_string_2d__3e_irregex,"string->irregex")
___END_SYM

#define ___SYM_bin_3a_irregex ___SYM(0,___S_bin_3a_irregex)
#define ___SYM_foundation_2e_dialect ___SYM(1,___S_foundation_2e_dialect)
#define ___SYM_irregex ___SYM(2,___S_irregex)
#define ___SYM_irregex_2d_fold ___SYM(3,___S_irregex_2d_fold)
#define ___SYM_irregex_2d_fold_2f_chunked ___SYM(4,___S_irregex_2d_fold_2f_chunked)
#define ___SYM_irregex_2d_match ___SYM(5,___S_irregex_2d_match)
#define ___SYM_irregex_2d_match_2d_data_3f_ ___SYM(6,___S_irregex_2d_match_2d_data_3f_)
#define ___SYM_irregex_2d_match_2d_end_2d_chunk ___SYM(7,___S_irregex_2d_match_2d_end_2d_chunk)
#define ___SYM_irregex_2d_match_2d_end_2d_index ___SYM(8,___S_irregex_2d_match_2d_end_2d_index)
#define ___SYM_irregex_2d_match_2d_start_2d_chunk ___SYM(9,___S_irregex_2d_match_2d_start_2d_chunk)
#define ___SYM_irregex_2d_match_2d_start_2d_index ___SYM(10,___S_irregex_2d_match_2d_start_2d_index)
#define ___SYM_irregex_2d_match_2d_subchunk ___SYM(11,___S_irregex_2d_match_2d_subchunk)
#define ___SYM_irregex_2d_match_2d_substring ___SYM(12,___S_irregex_2d_match_2d_substring)
#define ___SYM_irregex_2d_match_2d_valid_2d_index_3f_ ___SYM(13,___S_irregex_2d_match_2d_valid_2d_index_3f_)
#define ___SYM_irregex_2d_match_2f_chunked ___SYM(14,___S_irregex_2d_match_2f_chunked)
#define ___SYM_irregex_2d_num_2d_submatches ___SYM(15,___S_irregex_2d_num_2d_submatches)
#define ___SYM_irregex_2d_replace ___SYM(16,___S_irregex_2d_replace)
#define ___SYM_irregex_2d_replace_2f_all ___SYM(17,___S_irregex_2d_replace_2f_all)
#define ___SYM_irregex_2d_search ___SYM(18,___S_irregex_2d_search)
#define ___SYM_irregex_2d_search_2f_chunked ___SYM(19,___S_irregex_2d_search_2f_chunked)
#define ___SYM_irregex_2e_implementation_2e_irregex ___SYM(20,___S_irregex_2e_implementation_2e_irregex)
#define ___SYM_irregex_3a_irregex ___SYM(21,___S_irregex_3a_irregex)
#define ___SYM_irregex_3a_irregex_2d_fold ___SYM(22,___S_irregex_3a_irregex_2d_fold)
#define ___SYM_irregex_3a_irregex_2d_fold_2f_chunked ___SYM(23,___S_irregex_3a_irregex_2d_fold_2f_chunked)
#define ___SYM_irregex_3a_irregex_2d_match ___SYM(24,___S_irregex_3a_irregex_2d_match)
#define ___SYM_irregex_3a_irregex_2d_match_2d_data_3f_ ___SYM(25,___S_irregex_3a_irregex_2d_match_2d_data_3f_)
#define ___SYM_irregex_3a_irregex_2d_match_2d_end_2d_chunk ___SYM(26,___S_irregex_3a_irregex_2d_match_2d_end_2d_chunk)
#define ___SYM_irregex_3a_irregex_2d_match_2d_end_2d_index ___SYM(27,___S_irregex_3a_irregex_2d_match_2d_end_2d_index)
#define ___SYM_irregex_3a_irregex_2d_match_2d_start_2d_chunk ___SYM(28,___S_irregex_3a_irregex_2d_match_2d_start_2d_chunk)
#define ___SYM_irregex_3a_irregex_2d_match_2d_start_2d_index ___SYM(29,___S_irregex_3a_irregex_2d_match_2d_start_2d_index)
#define ___SYM_irregex_3a_irregex_2d_match_2d_subchunk ___SYM(30,___S_irregex_3a_irregex_2d_match_2d_subchunk)
#define ___SYM_irregex_3a_irregex_2d_match_2d_substring ___SYM(31,___S_irregex_3a_irregex_2d_match_2d_substring)
#define ___SYM_irregex_3a_irregex_2d_match_2d_valid_2d_index_3f_ ___SYM(32,___S_irregex_3a_irregex_2d_match_2d_valid_2d_index_3f_)
#define ___SYM_irregex_3a_irregex_2d_match_2f_chunked ___SYM(33,___S_irregex_3a_irregex_2d_match_2f_chunked)
#define ___SYM_irregex_3a_irregex_2d_num_2d_submatches ___SYM(34,___S_irregex_3a_irregex_2d_num_2d_submatches)
#define ___SYM_irregex_3a_irregex_2d_replace ___SYM(35,___S_irregex_3a_irregex_2d_replace)
#define ___SYM_irregex_3a_irregex_2d_replace_2f_all ___SYM(36,___S_irregex_3a_irregex_2d_replace_2f_all)
#define ___SYM_irregex_3a_irregex_2d_search ___SYM(37,___S_irregex_3a_irregex_2d_search)
#define ___SYM_irregex_3a_irregex_2d_search_2f_chunked ___SYM(38,___S_irregex_3a_irregex_2d_search_2f_chunked)
#define ___SYM_irregex_3a_irregex_3f_ ___SYM(39,___S_irregex_3a_irregex_3f_)
#define ___SYM_irregex_3a_make_2d_irregex_2d_chunker ___SYM(40,___S_irregex_3a_make_2d_irregex_2d_chunker)
#define ___SYM_irregex_3a_sre_2d__3e_irregex ___SYM(41,___S_irregex_3a_sre_2d__3e_irregex)
#define ___SYM_irregex_3a_string_2d__3e_irregex ___SYM(42,___S_irregex_3a_string_2d__3e_irregex)
#define ___SYM_irregex_3f_ ___SYM(43,___S_irregex_3f_)
#define ___SYM_make_2d_irregex_2d_chunker ___SYM(44,___S_make_2d_irregex_2d_chunker)
#define ___SYM_public ___SYM(45,___S_public)
#define ___SYM_scheme ___SYM(46,___S_scheme)
#define ___SYM_sre_2d__3e_irregex ___SYM(47,___S_sre_2d__3e_irregex)
#define ___SYM_string_2d__3e_irregex ___SYM(48,___S_string_2d__3e_irregex)

___BEGIN_GLO
___DEF_GLO(0,"bin:irregex#")
___DEF_GLO(1,"jazz:load-unit")
___DEF_GLO(2,"jazz:register-module")
___END_GLO

#define ___GLO_bin_3a_irregex_23_ ___GLO(0,___G_bin_3a_irregex_23_)
#define ___PRM_bin_3a_irregex_23_ ___PRM(0,___G_bin_3a_irregex_23_)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(1,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(1,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(2,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(2,___G_jazz_3a_register_2d_module)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(2,___S_irregex),___REF_SYM(21,___S_irregex_3a_irregex))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(3,___S_irregex_2d_fold),___REF_SYM(22,___S_irregex_3a_irregex_2d_fold))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(4,___S_irregex_2d_fold_2f_chunked),___REF_SYM(23,___S_irregex_3a_irregex_2d_fold_2f_chunked))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(5,___S_irregex_2d_match),___REF_SYM(24,___S_irregex_3a_irregex_2d_match))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(6,___S_irregex_2d_match_2d_data_3f_),___REF_SYM(25,___S_irregex_3a_irregex_2d_match_2d_data_3f_))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(7,___S_irregex_2d_match_2d_end_2d_chunk),___REF_SYM(26,___S_irregex_3a_irregex_2d_match_2d_end_2d_chunk))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(8,___S_irregex_2d_match_2d_end_2d_index),___REF_SYM(27,___S_irregex_3a_irregex_2d_match_2d_end_2d_index))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(9,___S_irregex_2d_match_2d_start_2d_chunk),___REF_SYM(28,___S_irregex_3a_irregex_2d_match_2d_start_2d_chunk))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(10,___S_irregex_2d_match_2d_start_2d_index),___REF_SYM(29,___S_irregex_3a_irregex_2d_match_2d_start_2d_index))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(11,___S_irregex_2d_match_2d_subchunk),___REF_SYM(30,___S_irregex_3a_irregex_2d_match_2d_subchunk))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(12,___S_irregex_2d_match_2d_substring),___REF_SYM(31,___S_irregex_3a_irregex_2d_match_2d_substring))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(13,___S_irregex_2d_match_2d_valid_2d_index_3f_),___REF_SYM(32,___S_irregex_3a_irregex_2d_match_2d_valid_2d_index_3f_))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(14,___S_irregex_2d_match_2f_chunked),___REF_SYM(33,___S_irregex_3a_irregex_2d_match_2f_chunked))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(15,___S_irregex_2d_num_2d_submatches),___REF_SYM(34,___S_irregex_3a_irregex_2d_num_2d_submatches))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(16,___S_irregex_2d_replace),___REF_SYM(35,___S_irregex_3a_irregex_2d_replace))
,___DEF_CNS(___REF_CNS(31),___REF_CNS(32))
,___DEF_CNS(___REF_SYM(17,___S_irregex_2d_replace_2f_all),___REF_SYM(36,___S_irregex_3a_irregex_2d_replace_2f_all))
,___DEF_CNS(___REF_CNS(33),___REF_CNS(34))
,___DEF_CNS(___REF_SYM(18,___S_irregex_2d_search),___REF_SYM(37,___S_irregex_3a_irregex_2d_search))
,___DEF_CNS(___REF_CNS(35),___REF_CNS(36))
,___DEF_CNS(___REF_SYM(19,___S_irregex_2d_search_2f_chunked),___REF_SYM(38,___S_irregex_3a_irregex_2d_search_2f_chunked))
,___DEF_CNS(___REF_CNS(37),___REF_CNS(38))
,___DEF_CNS(___REF_SYM(43,___S_irregex_3f_),___REF_SYM(39,___S_irregex_3a_irregex_3f_))
,___DEF_CNS(___REF_CNS(39),___REF_CNS(40))
,___DEF_CNS(___REF_SYM(44,___S_make_2d_irregex_2d_chunker),___REF_SYM(40,___S_irregex_3a_make_2d_irregex_2d_chunker))
,___DEF_CNS(___REF_CNS(41),___REF_CNS(42))
,___DEF_CNS(___REF_SYM(47,___S_sre_2d__3e_irregex),___REF_SYM(41,___S_irregex_3a_sre_2d__3e_irregex))
,___DEF_CNS(___REF_CNS(43),___REF_NUL)
,___DEF_CNS(___REF_SYM(48,___S_string_2d__3e_irregex),___REF_SYM(42,___S_irregex_3a_string_2d__3e_irregex))
___END_CNS

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
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(2,___S_irregex))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X16,0UL)
               ___VEC0
___DEF_SUB_VEC(___X17,5UL)
               ___VEC1(___REF_SYM(0,___S_bin_3a_irregex))
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
___DEF_M_HLBL(___L0_bin_3a_irregex_23_)
___DEF_M_HLBL(___L1_bin_3a_irregex_23_)
___DEF_M_HLBL(___L2_bin_3a_irregex_23_)
___DEF_M_HLBL(___L3_bin_3a_irregex_23_)
___DEF_M_HLBL(___L4_bin_3a_irregex_23_)
___DEF_M_HLBL(___L5_bin_3a_irregex_23_)
___DEF_M_HLBL(___L6_bin_3a_irregex_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_irregex_23_
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
___DEF_P_HLBL(___L0_bin_3a_irregex_23_)
___DEF_P_HLBL(___L1_bin_3a_irregex_23_)
___DEF_P_HLBL(___L2_bin_3a_irregex_23_)
___DEF_P_HLBL(___L3_bin_3a_irregex_23_)
___DEF_P_HLBL(___L4_bin_3a_irregex_23_)
___DEF_P_HLBL(___L5_bin_3a_irregex_23_)
___DEF_P_HLBL(___L6_bin_3a_irregex_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_irregex_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_irregex_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_irregex_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_irregex_23_)
   ___SET_R1(___SYM_scheme)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_irregex_23_)
   ___SET_R1(___SYM_irregex_2e_implementation_2e_irregex)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_irregex_23_)
   ___SET_STK(1,___SYM_irregex)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),2,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_irregex_23_)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_irregex_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_irregex_23_,"bin:irregex#",___REF_SUB(0),7,0)
,___DEF_LBL_PROC(___H_bin_3a_irregex_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_irregex_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_irregex_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_irregex_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_irregex_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_irregex_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_irregex_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_irregex_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_irregex_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_bin_3a_irregex,"bin:irregex")
___DEF_MOD_SYM(1,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(2,___S_irregex,"irregex")
___DEF_MOD_SYM(3,___S_irregex_2d_fold,"irregex-fold")
___DEF_MOD_SYM(4,___S_irregex_2d_fold_2f_chunked,"irregex-fold/chunked")
___DEF_MOD_SYM(5,___S_irregex_2d_match,"irregex-match")
___DEF_MOD_SYM(6,___S_irregex_2d_match_2d_data_3f_,"irregex-match-data?")
___DEF_MOD_SYM(7,___S_irregex_2d_match_2d_end_2d_chunk,"irregex-match-end-chunk")
___DEF_MOD_SYM(8,___S_irregex_2d_match_2d_end_2d_index,"irregex-match-end-index")
___DEF_MOD_SYM(9,___S_irregex_2d_match_2d_start_2d_chunk,"irregex-match-start-chunk")
___DEF_MOD_SYM(10,___S_irregex_2d_match_2d_start_2d_index,"irregex-match-start-index")
___DEF_MOD_SYM(11,___S_irregex_2d_match_2d_subchunk,"irregex-match-subchunk")
___DEF_MOD_SYM(12,___S_irregex_2d_match_2d_substring,"irregex-match-substring")
___DEF_MOD_SYM(13,___S_irregex_2d_match_2d_valid_2d_index_3f_,"irregex-match-valid-index?")
___DEF_MOD_SYM(14,___S_irregex_2d_match_2f_chunked,"irregex-match/chunked")
___DEF_MOD_SYM(15,___S_irregex_2d_num_2d_submatches,"irregex-num-submatches")
___DEF_MOD_SYM(16,___S_irregex_2d_replace,"irregex-replace")
___DEF_MOD_SYM(17,___S_irregex_2d_replace_2f_all,"irregex-replace/all")
___DEF_MOD_SYM(18,___S_irregex_2d_search,"irregex-search")
___DEF_MOD_SYM(19,___S_irregex_2d_search_2f_chunked,"irregex-search/chunked")
___DEF_MOD_SYM(20,___S_irregex_2e_implementation_2e_irregex,"irregex.implementation.irregex")

___DEF_MOD_SYM(21,___S_irregex_3a_irregex,"irregex:irregex")
___DEF_MOD_SYM(22,___S_irregex_3a_irregex_2d_fold,"irregex:irregex-fold")
___DEF_MOD_SYM(23,___S_irregex_3a_irregex_2d_fold_2f_chunked,"irregex:irregex-fold/chunked")
___DEF_MOD_SYM(24,___S_irregex_3a_irregex_2d_match,"irregex:irregex-match")
___DEF_MOD_SYM(25,___S_irregex_3a_irregex_2d_match_2d_data_3f_,"irregex:irregex-match-data?")
___DEF_MOD_SYM(26,___S_irregex_3a_irregex_2d_match_2d_end_2d_chunk,"irregex:irregex-match-end-chunk")

___DEF_MOD_SYM(27,___S_irregex_3a_irregex_2d_match_2d_end_2d_index,"irregex:irregex-match-end-index")

___DEF_MOD_SYM(28,___S_irregex_3a_irregex_2d_match_2d_start_2d_chunk,"irregex:irregex-match-start-chunk")

___DEF_MOD_SYM(29,___S_irregex_3a_irregex_2d_match_2d_start_2d_index,"irregex:irregex-match-start-index")

___DEF_MOD_SYM(30,___S_irregex_3a_irregex_2d_match_2d_subchunk,"irregex:irregex-match-subchunk")

___DEF_MOD_SYM(31,___S_irregex_3a_irregex_2d_match_2d_substring,"irregex:irregex-match-substring")

___DEF_MOD_SYM(32,___S_irregex_3a_irregex_2d_match_2d_valid_2d_index_3f_,"irregex:irregex-match-valid-index?")

___DEF_MOD_SYM(33,___S_irregex_3a_irregex_2d_match_2f_chunked,"irregex:irregex-match/chunked")

___DEF_MOD_SYM(34,___S_irregex_3a_irregex_2d_num_2d_submatches,"irregex:irregex-num-submatches")

___DEF_MOD_SYM(35,___S_irregex_3a_irregex_2d_replace,"irregex:irregex-replace")
___DEF_MOD_SYM(36,___S_irregex_3a_irregex_2d_replace_2f_all,"irregex:irregex-replace/all")
___DEF_MOD_SYM(37,___S_irregex_3a_irregex_2d_search,"irregex:irregex-search")
___DEF_MOD_SYM(38,___S_irregex_3a_irregex_2d_search_2f_chunked,"irregex:irregex-search/chunked")

___DEF_MOD_SYM(39,___S_irregex_3a_irregex_3f_,"irregex:irregex?")
___DEF_MOD_SYM(40,___S_irregex_3a_make_2d_irregex_2d_chunker,"irregex:make-irregex-chunker")
___DEF_MOD_SYM(41,___S_irregex_3a_sre_2d__3e_irregex,"irregex:sre->irregex")
___DEF_MOD_SYM(42,___S_irregex_3a_string_2d__3e_irregex,"irregex:string->irregex")
___DEF_MOD_SYM(43,___S_irregex_3f_,"irregex?")
___DEF_MOD_SYM(44,___S_make_2d_irregex_2d_chunker,"make-irregex-chunker")
___DEF_MOD_SYM(45,___S_public,"public")
___DEF_MOD_SYM(46,___S_scheme,"scheme")
___DEF_MOD_SYM(47,___S_sre_2d__3e_irregex,"sre->irregex")
___DEF_MOD_SYM(48,___S_string_2d__3e_irregex,"string->irregex")
___END_MOD_SYM_KEY

#endif
