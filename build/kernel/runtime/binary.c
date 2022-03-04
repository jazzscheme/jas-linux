#ifdef ___LINKER_INFO
; File: "binary.c", produced by Gambit v4.8.9
(
408009
(C)
"binary"
(("binary"))
(
"binary"
"kernel.binary"
)
(
)
(
"binary#"
"binary#0"
"binary#1"
"binary#10"
"binary#11"
"binary#12"
"binary#13"
"binary#14"
"binary#15"
"binary#16"
"binary#17"
"binary#18"
"binary#19"
"binary#2"
"binary#20"
"binary#21"
"binary#22"
"binary#23"
"binary#24"
"binary#25"
"binary#26"
"binary#27"
"binary#28"
"binary#29"
"binary#3"
"binary#30"
"binary#31"
"binary#32"
"binary#33"
"binary#34"
"binary#35"
"binary#36"
"binary#37"
"binary#38"
"binary#39"
"binary#4"
"binary#5"
"binary#6"
"binary#7"
"binary#8"
"binary#9"
)
(
"put-c-string"
"put-double"
"put-double-big-endian"
"put-float"
"put-float-big-endian"
"put-s16"
"put-s16-big-endian"
"put-s32"
"put-s32-big-endian"
"put-s64"
"put-s64-big-endian"
"put-s8"
"put-size-string"
"put-u16"
"put-u32"
"put-u32-big-endian"
"put-u64"
"put-u8"
"put-utf-8-string"
"scan-c-string"
"scan-double"
"scan-double-big-endian"
"scan-float"
"scan-float-big-endian"
"scan-floats32!"
"scan-floats64!"
"scan-s16"
"scan-s16-big-endian"
"scan-s32"
"scan-s32-big-endian"
"scan-s64"
"scan-s64-big-endian"
"scan-s8"
"scan-size-string"
"scan-u16"
"scan-u32"
"scan-u32-big-endian"
"scan-u64"
"scan-u8"
"scan-utf-8-string"
)
(
"jazz:verbose-kernel"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "binary"
#define ___LINKER_ID ___LNK_binary
#define ___MH_PROC ___H_binary
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 2
#define ___GLOCOUNT 82
#define ___SUPCOUNT 81
#define ___SUBCOUNT 13
#define ___LBLCOUNT 125
#define ___MODDESCR ___REF_SUB(12)
#include "gambit.h"

___NEED_SYM(___S_binary)
___NEED_SYM(___S_kernel_2e_binary)

___NEED_GLO(___G_binary_23_)
___NEED_GLO(___G_binary_23_0)
___NEED_GLO(___G_binary_23_1)
___NEED_GLO(___G_binary_23_10)
___NEED_GLO(___G_binary_23_11)
___NEED_GLO(___G_binary_23_12)
___NEED_GLO(___G_binary_23_13)
___NEED_GLO(___G_binary_23_14)
___NEED_GLO(___G_binary_23_15)
___NEED_GLO(___G_binary_23_16)
___NEED_GLO(___G_binary_23_17)
___NEED_GLO(___G_binary_23_18)
___NEED_GLO(___G_binary_23_19)
___NEED_GLO(___G_binary_23_2)
___NEED_GLO(___G_binary_23_20)
___NEED_GLO(___G_binary_23_21)
___NEED_GLO(___G_binary_23_22)
___NEED_GLO(___G_binary_23_23)
___NEED_GLO(___G_binary_23_24)
___NEED_GLO(___G_binary_23_25)
___NEED_GLO(___G_binary_23_26)
___NEED_GLO(___G_binary_23_27)
___NEED_GLO(___G_binary_23_28)
___NEED_GLO(___G_binary_23_29)
___NEED_GLO(___G_binary_23_3)
___NEED_GLO(___G_binary_23_30)
___NEED_GLO(___G_binary_23_31)
___NEED_GLO(___G_binary_23_32)
___NEED_GLO(___G_binary_23_33)
___NEED_GLO(___G_binary_23_34)
___NEED_GLO(___G_binary_23_35)
___NEED_GLO(___G_binary_23_36)
___NEED_GLO(___G_binary_23_37)
___NEED_GLO(___G_binary_23_38)
___NEED_GLO(___G_binary_23_39)
___NEED_GLO(___G_binary_23_4)
___NEED_GLO(___G_binary_23_5)
___NEED_GLO(___G_binary_23_6)
___NEED_GLO(___G_binary_23_7)
___NEED_GLO(___G_binary_23_8)
___NEED_GLO(___G_binary_23_9)
___NEED_GLO(___G_jazz_3a_verbose_2d_kernel)
___NEED_GLO(___G_put_2d_c_2d_string)
___NEED_GLO(___G_put_2d_double)
___NEED_GLO(___G_put_2d_double_2d_big_2d_endian)
___NEED_GLO(___G_put_2d_float)
___NEED_GLO(___G_put_2d_float_2d_big_2d_endian)
___NEED_GLO(___G_put_2d_s16)
___NEED_GLO(___G_put_2d_s16_2d_big_2d_endian)
___NEED_GLO(___G_put_2d_s32)
___NEED_GLO(___G_put_2d_s32_2d_big_2d_endian)
___NEED_GLO(___G_put_2d_s64)
___NEED_GLO(___G_put_2d_s64_2d_big_2d_endian)
___NEED_GLO(___G_put_2d_s8)
___NEED_GLO(___G_put_2d_size_2d_string)
___NEED_GLO(___G_put_2d_u16)
___NEED_GLO(___G_put_2d_u32)
___NEED_GLO(___G_put_2d_u32_2d_big_2d_endian)
___NEED_GLO(___G_put_2d_u64)
___NEED_GLO(___G_put_2d_u8)
___NEED_GLO(___G_put_2d_utf_2d_8_2d_string)
___NEED_GLO(___G_scan_2d_c_2d_string)
___NEED_GLO(___G_scan_2d_double)
___NEED_GLO(___G_scan_2d_double_2d_big_2d_endian)
___NEED_GLO(___G_scan_2d_float)
___NEED_GLO(___G_scan_2d_float_2d_big_2d_endian)
___NEED_GLO(___G_scan_2d_floats32_21_)
___NEED_GLO(___G_scan_2d_floats64_21_)
___NEED_GLO(___G_scan_2d_s16)
___NEED_GLO(___G_scan_2d_s16_2d_big_2d_endian)
___NEED_GLO(___G_scan_2d_s32)
___NEED_GLO(___G_scan_2d_s32_2d_big_2d_endian)
___NEED_GLO(___G_scan_2d_s64)
___NEED_GLO(___G_scan_2d_s64_2d_big_2d_endian)
___NEED_GLO(___G_scan_2d_s8)
___NEED_GLO(___G_scan_2d_size_2d_string)
___NEED_GLO(___G_scan_2d_u16)
___NEED_GLO(___G_scan_2d_u32)
___NEED_GLO(___G_scan_2d_u32_2d_big_2d_endian)
___NEED_GLO(___G_scan_2d_u64)
___NEED_GLO(___G_scan_2d_u8)
___NEED_GLO(___G_scan_2d_utf_2d_8_2d_string)

___BEGIN_SYM
___DEF_SYM(0,___S_binary,"binary")
___DEF_SYM(1,___S_kernel_2e_binary,"kernel.binary")
___END_SYM

#define ___SYM_binary ___SYM(0,___S_binary)
#define ___SYM_kernel_2e_binary ___SYM(1,___S_kernel_2e_binary)

___BEGIN_GLO
___DEF_GLO(0,"binary#")
___DEF_GLO(1,"binary#0")
___DEF_GLO(2,"binary#1")
___DEF_GLO(3,"binary#10")
___DEF_GLO(4,"binary#11")
___DEF_GLO(5,"binary#12")
___DEF_GLO(6,"binary#13")
___DEF_GLO(7,"binary#14")
___DEF_GLO(8,"binary#15")
___DEF_GLO(9,"binary#16")
___DEF_GLO(10,"binary#17")
___DEF_GLO(11,"binary#18")
___DEF_GLO(12,"binary#19")
___DEF_GLO(13,"binary#2")
___DEF_GLO(14,"binary#20")
___DEF_GLO(15,"binary#21")
___DEF_GLO(16,"binary#22")
___DEF_GLO(17,"binary#23")
___DEF_GLO(18,"binary#24")
___DEF_GLO(19,"binary#25")
___DEF_GLO(20,"binary#26")
___DEF_GLO(21,"binary#27")
___DEF_GLO(22,"binary#28")
___DEF_GLO(23,"binary#29")
___DEF_GLO(24,"binary#3")
___DEF_GLO(25,"binary#30")
___DEF_GLO(26,"binary#31")
___DEF_GLO(27,"binary#32")
___DEF_GLO(28,"binary#33")
___DEF_GLO(29,"binary#34")
___DEF_GLO(30,"binary#35")
___DEF_GLO(31,"binary#36")
___DEF_GLO(32,"binary#37")
___DEF_GLO(33,"binary#38")
___DEF_GLO(34,"binary#39")
___DEF_GLO(35,"binary#4")
___DEF_GLO(36,"binary#5")
___DEF_GLO(37,"binary#6")
___DEF_GLO(38,"binary#7")
___DEF_GLO(39,"binary#8")
___DEF_GLO(40,"binary#9")
___DEF_GLO(41,"put-c-string")
___DEF_GLO(42,"put-double")
___DEF_GLO(43,"put-double-big-endian")
___DEF_GLO(44,"put-float")
___DEF_GLO(45,"put-float-big-endian")
___DEF_GLO(46,"put-s16")
___DEF_GLO(47,"put-s16-big-endian")
___DEF_GLO(48,"put-s32")
___DEF_GLO(49,"put-s32-big-endian")
___DEF_GLO(50,"put-s64")
___DEF_GLO(51,"put-s64-big-endian")
___DEF_GLO(52,"put-s8")
___DEF_GLO(53,"put-size-string")
___DEF_GLO(54,"put-u16")
___DEF_GLO(55,"put-u32")
___DEF_GLO(56,"put-u32-big-endian")
___DEF_GLO(57,"put-u64")
___DEF_GLO(58,"put-u8")
___DEF_GLO(59,"put-utf-8-string")
___DEF_GLO(60,"scan-c-string")
___DEF_GLO(61,"scan-double")
___DEF_GLO(62,"scan-double-big-endian")
___DEF_GLO(63,"scan-float")
___DEF_GLO(64,"scan-float-big-endian")
___DEF_GLO(65,"scan-floats32!")
___DEF_GLO(66,"scan-floats64!")
___DEF_GLO(67,"scan-s16")
___DEF_GLO(68,"scan-s16-big-endian")
___DEF_GLO(69,"scan-s32")
___DEF_GLO(70,"scan-s32-big-endian")
___DEF_GLO(71,"scan-s64")
___DEF_GLO(72,"scan-s64-big-endian")
___DEF_GLO(73,"scan-s8")
___DEF_GLO(74,"scan-size-string")
___DEF_GLO(75,"scan-u16")
___DEF_GLO(76,"scan-u32")
___DEF_GLO(77,"scan-u32-big-endian")
___DEF_GLO(78,"scan-u64")
___DEF_GLO(79,"scan-u8")
___DEF_GLO(80,"scan-utf-8-string")
___DEF_GLO(81,"jazz:verbose-kernel")
___END_GLO

#define ___GLO_binary_23_ ___GLO(0,___G_binary_23_)
#define ___PRM_binary_23_ ___PRM(0,___G_binary_23_)
#define ___GLO_binary_23_0 ___GLO(1,___G_binary_23_0)
#define ___PRM_binary_23_0 ___PRM(1,___G_binary_23_0)
#define ___GLO_binary_23_1 ___GLO(2,___G_binary_23_1)
#define ___PRM_binary_23_1 ___PRM(2,___G_binary_23_1)
#define ___GLO_binary_23_10 ___GLO(3,___G_binary_23_10)
#define ___PRM_binary_23_10 ___PRM(3,___G_binary_23_10)
#define ___GLO_binary_23_11 ___GLO(4,___G_binary_23_11)
#define ___PRM_binary_23_11 ___PRM(4,___G_binary_23_11)
#define ___GLO_binary_23_12 ___GLO(5,___G_binary_23_12)
#define ___PRM_binary_23_12 ___PRM(5,___G_binary_23_12)
#define ___GLO_binary_23_13 ___GLO(6,___G_binary_23_13)
#define ___PRM_binary_23_13 ___PRM(6,___G_binary_23_13)
#define ___GLO_binary_23_14 ___GLO(7,___G_binary_23_14)
#define ___PRM_binary_23_14 ___PRM(7,___G_binary_23_14)
#define ___GLO_binary_23_15 ___GLO(8,___G_binary_23_15)
#define ___PRM_binary_23_15 ___PRM(8,___G_binary_23_15)
#define ___GLO_binary_23_16 ___GLO(9,___G_binary_23_16)
#define ___PRM_binary_23_16 ___PRM(9,___G_binary_23_16)
#define ___GLO_binary_23_17 ___GLO(10,___G_binary_23_17)
#define ___PRM_binary_23_17 ___PRM(10,___G_binary_23_17)
#define ___GLO_binary_23_18 ___GLO(11,___G_binary_23_18)
#define ___PRM_binary_23_18 ___PRM(11,___G_binary_23_18)
#define ___GLO_binary_23_19 ___GLO(12,___G_binary_23_19)
#define ___PRM_binary_23_19 ___PRM(12,___G_binary_23_19)
#define ___GLO_binary_23_2 ___GLO(13,___G_binary_23_2)
#define ___PRM_binary_23_2 ___PRM(13,___G_binary_23_2)
#define ___GLO_binary_23_20 ___GLO(14,___G_binary_23_20)
#define ___PRM_binary_23_20 ___PRM(14,___G_binary_23_20)
#define ___GLO_binary_23_21 ___GLO(15,___G_binary_23_21)
#define ___PRM_binary_23_21 ___PRM(15,___G_binary_23_21)
#define ___GLO_binary_23_22 ___GLO(16,___G_binary_23_22)
#define ___PRM_binary_23_22 ___PRM(16,___G_binary_23_22)
#define ___GLO_binary_23_23 ___GLO(17,___G_binary_23_23)
#define ___PRM_binary_23_23 ___PRM(17,___G_binary_23_23)
#define ___GLO_binary_23_24 ___GLO(18,___G_binary_23_24)
#define ___PRM_binary_23_24 ___PRM(18,___G_binary_23_24)
#define ___GLO_binary_23_25 ___GLO(19,___G_binary_23_25)
#define ___PRM_binary_23_25 ___PRM(19,___G_binary_23_25)
#define ___GLO_binary_23_26 ___GLO(20,___G_binary_23_26)
#define ___PRM_binary_23_26 ___PRM(20,___G_binary_23_26)
#define ___GLO_binary_23_27 ___GLO(21,___G_binary_23_27)
#define ___PRM_binary_23_27 ___PRM(21,___G_binary_23_27)
#define ___GLO_binary_23_28 ___GLO(22,___G_binary_23_28)
#define ___PRM_binary_23_28 ___PRM(22,___G_binary_23_28)
#define ___GLO_binary_23_29 ___GLO(23,___G_binary_23_29)
#define ___PRM_binary_23_29 ___PRM(23,___G_binary_23_29)
#define ___GLO_binary_23_3 ___GLO(24,___G_binary_23_3)
#define ___PRM_binary_23_3 ___PRM(24,___G_binary_23_3)
#define ___GLO_binary_23_30 ___GLO(25,___G_binary_23_30)
#define ___PRM_binary_23_30 ___PRM(25,___G_binary_23_30)
#define ___GLO_binary_23_31 ___GLO(26,___G_binary_23_31)
#define ___PRM_binary_23_31 ___PRM(26,___G_binary_23_31)
#define ___GLO_binary_23_32 ___GLO(27,___G_binary_23_32)
#define ___PRM_binary_23_32 ___PRM(27,___G_binary_23_32)
#define ___GLO_binary_23_33 ___GLO(28,___G_binary_23_33)
#define ___PRM_binary_23_33 ___PRM(28,___G_binary_23_33)
#define ___GLO_binary_23_34 ___GLO(29,___G_binary_23_34)
#define ___PRM_binary_23_34 ___PRM(29,___G_binary_23_34)
#define ___GLO_binary_23_35 ___GLO(30,___G_binary_23_35)
#define ___PRM_binary_23_35 ___PRM(30,___G_binary_23_35)
#define ___GLO_binary_23_36 ___GLO(31,___G_binary_23_36)
#define ___PRM_binary_23_36 ___PRM(31,___G_binary_23_36)
#define ___GLO_binary_23_37 ___GLO(32,___G_binary_23_37)
#define ___PRM_binary_23_37 ___PRM(32,___G_binary_23_37)
#define ___GLO_binary_23_38 ___GLO(33,___G_binary_23_38)
#define ___PRM_binary_23_38 ___PRM(33,___G_binary_23_38)
#define ___GLO_binary_23_39 ___GLO(34,___G_binary_23_39)
#define ___PRM_binary_23_39 ___PRM(34,___G_binary_23_39)
#define ___GLO_binary_23_4 ___GLO(35,___G_binary_23_4)
#define ___PRM_binary_23_4 ___PRM(35,___G_binary_23_4)
#define ___GLO_binary_23_5 ___GLO(36,___G_binary_23_5)
#define ___PRM_binary_23_5 ___PRM(36,___G_binary_23_5)
#define ___GLO_binary_23_6 ___GLO(37,___G_binary_23_6)
#define ___PRM_binary_23_6 ___PRM(37,___G_binary_23_6)
#define ___GLO_binary_23_7 ___GLO(38,___G_binary_23_7)
#define ___PRM_binary_23_7 ___PRM(38,___G_binary_23_7)
#define ___GLO_binary_23_8 ___GLO(39,___G_binary_23_8)
#define ___PRM_binary_23_8 ___PRM(39,___G_binary_23_8)
#define ___GLO_binary_23_9 ___GLO(40,___G_binary_23_9)
#define ___PRM_binary_23_9 ___PRM(40,___G_binary_23_9)
#define ___GLO_put_2d_c_2d_string ___GLO(41,___G_put_2d_c_2d_string)
#define ___PRM_put_2d_c_2d_string ___PRM(41,___G_put_2d_c_2d_string)
#define ___GLO_put_2d_double ___GLO(42,___G_put_2d_double)
#define ___PRM_put_2d_double ___PRM(42,___G_put_2d_double)
#define ___GLO_put_2d_double_2d_big_2d_endian ___GLO(43,___G_put_2d_double_2d_big_2d_endian)
#define ___PRM_put_2d_double_2d_big_2d_endian ___PRM(43,___G_put_2d_double_2d_big_2d_endian)
#define ___GLO_put_2d_float ___GLO(44,___G_put_2d_float)
#define ___PRM_put_2d_float ___PRM(44,___G_put_2d_float)
#define ___GLO_put_2d_float_2d_big_2d_endian ___GLO(45,___G_put_2d_float_2d_big_2d_endian)
#define ___PRM_put_2d_float_2d_big_2d_endian ___PRM(45,___G_put_2d_float_2d_big_2d_endian)
#define ___GLO_put_2d_s16 ___GLO(46,___G_put_2d_s16)
#define ___PRM_put_2d_s16 ___PRM(46,___G_put_2d_s16)
#define ___GLO_put_2d_s16_2d_big_2d_endian ___GLO(47,___G_put_2d_s16_2d_big_2d_endian)
#define ___PRM_put_2d_s16_2d_big_2d_endian ___PRM(47,___G_put_2d_s16_2d_big_2d_endian)
#define ___GLO_put_2d_s32 ___GLO(48,___G_put_2d_s32)
#define ___PRM_put_2d_s32 ___PRM(48,___G_put_2d_s32)
#define ___GLO_put_2d_s32_2d_big_2d_endian ___GLO(49,___G_put_2d_s32_2d_big_2d_endian)
#define ___PRM_put_2d_s32_2d_big_2d_endian ___PRM(49,___G_put_2d_s32_2d_big_2d_endian)
#define ___GLO_put_2d_s64 ___GLO(50,___G_put_2d_s64)
#define ___PRM_put_2d_s64 ___PRM(50,___G_put_2d_s64)
#define ___GLO_put_2d_s64_2d_big_2d_endian ___GLO(51,___G_put_2d_s64_2d_big_2d_endian)
#define ___PRM_put_2d_s64_2d_big_2d_endian ___PRM(51,___G_put_2d_s64_2d_big_2d_endian)
#define ___GLO_put_2d_s8 ___GLO(52,___G_put_2d_s8)
#define ___PRM_put_2d_s8 ___PRM(52,___G_put_2d_s8)
#define ___GLO_put_2d_size_2d_string ___GLO(53,___G_put_2d_size_2d_string)
#define ___PRM_put_2d_size_2d_string ___PRM(53,___G_put_2d_size_2d_string)
#define ___GLO_put_2d_u16 ___GLO(54,___G_put_2d_u16)
#define ___PRM_put_2d_u16 ___PRM(54,___G_put_2d_u16)
#define ___GLO_put_2d_u32 ___GLO(55,___G_put_2d_u32)
#define ___PRM_put_2d_u32 ___PRM(55,___G_put_2d_u32)
#define ___GLO_put_2d_u32_2d_big_2d_endian ___GLO(56,___G_put_2d_u32_2d_big_2d_endian)
#define ___PRM_put_2d_u32_2d_big_2d_endian ___PRM(56,___G_put_2d_u32_2d_big_2d_endian)
#define ___GLO_put_2d_u64 ___GLO(57,___G_put_2d_u64)
#define ___PRM_put_2d_u64 ___PRM(57,___G_put_2d_u64)
#define ___GLO_put_2d_u8 ___GLO(58,___G_put_2d_u8)
#define ___PRM_put_2d_u8 ___PRM(58,___G_put_2d_u8)
#define ___GLO_put_2d_utf_2d_8_2d_string ___GLO(59,___G_put_2d_utf_2d_8_2d_string)
#define ___PRM_put_2d_utf_2d_8_2d_string ___PRM(59,___G_put_2d_utf_2d_8_2d_string)
#define ___GLO_scan_2d_c_2d_string ___GLO(60,___G_scan_2d_c_2d_string)
#define ___PRM_scan_2d_c_2d_string ___PRM(60,___G_scan_2d_c_2d_string)
#define ___GLO_scan_2d_double ___GLO(61,___G_scan_2d_double)
#define ___PRM_scan_2d_double ___PRM(61,___G_scan_2d_double)
#define ___GLO_scan_2d_double_2d_big_2d_endian ___GLO(62,___G_scan_2d_double_2d_big_2d_endian)
#define ___PRM_scan_2d_double_2d_big_2d_endian ___PRM(62,___G_scan_2d_double_2d_big_2d_endian)
#define ___GLO_scan_2d_float ___GLO(63,___G_scan_2d_float)
#define ___PRM_scan_2d_float ___PRM(63,___G_scan_2d_float)
#define ___GLO_scan_2d_float_2d_big_2d_endian ___GLO(64,___G_scan_2d_float_2d_big_2d_endian)
#define ___PRM_scan_2d_float_2d_big_2d_endian ___PRM(64,___G_scan_2d_float_2d_big_2d_endian)
#define ___GLO_scan_2d_floats32_21_ ___GLO(65,___G_scan_2d_floats32_21_)
#define ___PRM_scan_2d_floats32_21_ ___PRM(65,___G_scan_2d_floats32_21_)
#define ___GLO_scan_2d_floats64_21_ ___GLO(66,___G_scan_2d_floats64_21_)
#define ___PRM_scan_2d_floats64_21_ ___PRM(66,___G_scan_2d_floats64_21_)
#define ___GLO_scan_2d_s16 ___GLO(67,___G_scan_2d_s16)
#define ___PRM_scan_2d_s16 ___PRM(67,___G_scan_2d_s16)
#define ___GLO_scan_2d_s16_2d_big_2d_endian ___GLO(68,___G_scan_2d_s16_2d_big_2d_endian)
#define ___PRM_scan_2d_s16_2d_big_2d_endian ___PRM(68,___G_scan_2d_s16_2d_big_2d_endian)
#define ___GLO_scan_2d_s32 ___GLO(69,___G_scan_2d_s32)
#define ___PRM_scan_2d_s32 ___PRM(69,___G_scan_2d_s32)
#define ___GLO_scan_2d_s32_2d_big_2d_endian ___GLO(70,___G_scan_2d_s32_2d_big_2d_endian)
#define ___PRM_scan_2d_s32_2d_big_2d_endian ___PRM(70,___G_scan_2d_s32_2d_big_2d_endian)
#define ___GLO_scan_2d_s64 ___GLO(71,___G_scan_2d_s64)
#define ___PRM_scan_2d_s64 ___PRM(71,___G_scan_2d_s64)
#define ___GLO_scan_2d_s64_2d_big_2d_endian ___GLO(72,___G_scan_2d_s64_2d_big_2d_endian)
#define ___PRM_scan_2d_s64_2d_big_2d_endian ___PRM(72,___G_scan_2d_s64_2d_big_2d_endian)
#define ___GLO_scan_2d_s8 ___GLO(73,___G_scan_2d_s8)
#define ___PRM_scan_2d_s8 ___PRM(73,___G_scan_2d_s8)
#define ___GLO_scan_2d_size_2d_string ___GLO(74,___G_scan_2d_size_2d_string)
#define ___PRM_scan_2d_size_2d_string ___PRM(74,___G_scan_2d_size_2d_string)
#define ___GLO_scan_2d_u16 ___GLO(75,___G_scan_2d_u16)
#define ___PRM_scan_2d_u16 ___PRM(75,___G_scan_2d_u16)
#define ___GLO_scan_2d_u32 ___GLO(76,___G_scan_2d_u32)
#define ___PRM_scan_2d_u32 ___PRM(76,___G_scan_2d_u32)
#define ___GLO_scan_2d_u32_2d_big_2d_endian ___GLO(77,___G_scan_2d_u32_2d_big_2d_endian)
#define ___PRM_scan_2d_u32_2d_big_2d_endian ___PRM(77,___G_scan_2d_u32_2d_big_2d_endian)
#define ___GLO_scan_2d_u64 ___GLO(78,___G_scan_2d_u64)
#define ___PRM_scan_2d_u64 ___PRM(78,___G_scan_2d_u64)
#define ___GLO_scan_2d_u8 ___GLO(79,___G_scan_2d_u8)
#define ___PRM_scan_2d_u8 ___PRM(79,___G_scan_2d_u8)
#define ___GLO_scan_2d_utf_2d_8_2d_string ___GLO(80,___G_scan_2d_utf_2d_8_2d_string)
#define ___PRM_scan_2d_utf_2d_8_2d_string ___PRM(80,___G_scan_2d_utf_2d_8_2d_string)
#define ___GLO_jazz_3a_verbose_2d_kernel ___GLO(81,___G_jazz_3a_verbose_2d_kernel)
#define ___PRM_jazz_3a_verbose_2d_kernel ___PRM(81,___G_jazz_3a_verbose_2d_kernel)

___DEF_SUB_VEC(___X0,2UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X1,4UL)
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_SUB(5))
               ___VEC1(___REF_SUB(7))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X2,2UL)
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_SUB(3))
               ___VEC0
___DEF_SUB_VEC(___X3,2UL)
               ___VEC1(___REF_SUB(4))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_STR(___X4,55UL)
               ___STR8(47,104,111,109,101,47,116,111)
               ___STR8(103,101,116,104,101,114,47,68)
               ___STR8(101,118,101,108,47,106,97,115)
               ___STR8(47,106,97,122,122,47,107,101)
               ___STR8(114,110,101,108,47,114,117,110)
               ___STR8(116,105,109,101,47,98,105,110)
               ___STR7(97,114,121,46,115,99,109)
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
               ___VEC1(___REF_FIX(512))
               ___VEC0
___DEF_SUB_VEC(___X11,0UL)
               ___VEC0
___DEF_SUB_VEC(___X12,5UL)
               ___VEC1(___REF_SYM(0,___S_binary))
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
___END_SUB



#include <string.h>

#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_)
___DEF_M_HLBL(___L1_binary_23_)
___DEF_M_HLBL(___L2_binary_23_)
___DEF_M_HLBL(___L3_binary_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_0)
___DEF_M_HLBL(___L1_binary_23_0)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_1)
___DEF_M_HLBL(___L1_binary_23_1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_2)
___DEF_M_HLBL(___L1_binary_23_2)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_3)
___DEF_M_HLBL(___L1_binary_23_3)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_4)
___DEF_M_HLBL(___L1_binary_23_4)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_5)
___DEF_M_HLBL(___L1_binary_23_5)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_6)
___DEF_M_HLBL(___L1_binary_23_6)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_7)
___DEF_M_HLBL(___L1_binary_23_7)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_8)
___DEF_M_HLBL(___L1_binary_23_8)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_9)
___DEF_M_HLBL(___L1_binary_23_9)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_10)
___DEF_M_HLBL(___L1_binary_23_10)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_11)
___DEF_M_HLBL(___L1_binary_23_11)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_12)
___DEF_M_HLBL(___L1_binary_23_12)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_13)
___DEF_M_HLBL(___L1_binary_23_13)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_14)
___DEF_M_HLBL(___L1_binary_23_14)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_15)
___DEF_M_HLBL(___L1_binary_23_15)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_16)
___DEF_M_HLBL(___L1_binary_23_16)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_17)
___DEF_M_HLBL(___L1_binary_23_17)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_18)
___DEF_M_HLBL(___L1_binary_23_18)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_19)
___DEF_M_HLBL(___L1_binary_23_19)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_20)
___DEF_M_HLBL(___L1_binary_23_20)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_21)
___DEF_M_HLBL(___L1_binary_23_21)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_22)
___DEF_M_HLBL(___L1_binary_23_22)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_23)
___DEF_M_HLBL(___L1_binary_23_23)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_24)
___DEF_M_HLBL(___L1_binary_23_24)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_25)
___DEF_M_HLBL(___L1_binary_23_25)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_26)
___DEF_M_HLBL(___L1_binary_23_26)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_27)
___DEF_M_HLBL(___L1_binary_23_27)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_28)
___DEF_M_HLBL(___L1_binary_23_28)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_29)
___DEF_M_HLBL(___L1_binary_23_29)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_30)
___DEF_M_HLBL(___L1_binary_23_30)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_31)
___DEF_M_HLBL(___L1_binary_23_31)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_32)
___DEF_M_HLBL(___L1_binary_23_32)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_33)
___DEF_M_HLBL(___L1_binary_23_33)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_34)
___DEF_M_HLBL(___L1_binary_23_34)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_35)
___DEF_M_HLBL(___L1_binary_23_35)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_36)
___DEF_M_HLBL(___L1_binary_23_36)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_37)
___DEF_M_HLBL(___L1_binary_23_37)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_38)
___DEF_M_HLBL(___L1_binary_23_38)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_binary_23_39)
___DEF_M_HLBL(___L1_binary_23_39)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_)
___DEF_P_HLBL(___L1_binary_23_)
___DEF_P_HLBL(___L2_binary_23_)
___DEF_P_HLBL(___L3_binary_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_binary_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_kernel_2e_binary)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_binary_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),81,___G_jazz_3a_verbose_2d_kernel)
___DEF_SLBL(2,___L2_binary_23_)
   ___SET_GLO(73,___G_scan_2d_s8,___PRC(6))
   ___SET_GLO(52,___G_put_2d_s8,___PRC(9))
   ___SET_GLO(79,___G_scan_2d_u8,___PRC(12))
   ___SET_GLO(58,___G_put_2d_u8,___PRC(15))
   ___SET_GLO(67,___G_scan_2d_s16,___PRC(18))
   ___SET_GLO(46,___G_put_2d_s16,___PRC(21))
   ___SET_GLO(68,___G_scan_2d_s16_2d_big_2d_endian,___PRC(24))
   ___SET_GLO(47,___G_put_2d_s16_2d_big_2d_endian,___PRC(27))
   ___SET_GLO(75,___G_scan_2d_u16,___PRC(30))
   ___SET_GLO(54,___G_put_2d_u16,___PRC(33))
   ___SET_GLO(69,___G_scan_2d_s32,___PRC(36))
   ___SET_GLO(48,___G_put_2d_s32,___PRC(39))
   ___SET_GLO(76,___G_scan_2d_u32,___PRC(42))
   ___SET_GLO(55,___G_put_2d_u32,___PRC(45))
   ___SET_GLO(70,___G_scan_2d_s32_2d_big_2d_endian,___PRC(48))
   ___SET_GLO(49,___G_put_2d_s32_2d_big_2d_endian,___PRC(51))
   ___SET_GLO(77,___G_scan_2d_u32_2d_big_2d_endian,___PRC(54))
   ___SET_GLO(56,___G_put_2d_u32_2d_big_2d_endian,___PRC(57))
   ___SET_GLO(71,___G_scan_2d_s64,___PRC(60))
   ___SET_GLO(50,___G_put_2d_s64,___PRC(63))
   ___SET_GLO(78,___G_scan_2d_u64,___PRC(66))
   ___SET_GLO(57,___G_put_2d_u64,___PRC(69))
   ___SET_GLO(72,___G_scan_2d_s64_2d_big_2d_endian,___PRC(72))
   ___SET_GLO(51,___G_put_2d_s64_2d_big_2d_endian,___PRC(75))
   ___SET_GLO(63,___G_scan_2d_float,___PRC(78))
   ___SET_GLO(44,___G_put_2d_float,___PRC(81))
   ___SET_GLO(65,___G_scan_2d_floats32_21_,___PRC(84))
   ___SET_GLO(66,___G_scan_2d_floats64_21_,___PRC(87))
   ___SET_GLO(64,___G_scan_2d_float_2d_big_2d_endian,___PRC(90))
   ___SET_GLO(45,___G_put_2d_float_2d_big_2d_endian,___PRC(93))
   ___SET_GLO(61,___G_scan_2d_double,___PRC(96))
   ___SET_GLO(42,___G_put_2d_double,___PRC(99))
   ___SET_GLO(62,___G_scan_2d_double_2d_big_2d_endian,___PRC(102))
   ___SET_GLO(43,___G_put_2d_double_2d_big_2d_endian,___PRC(105))
   ___SET_GLO(60,___G_scan_2d_c_2d_string,___PRC(108))
   ___SET_GLO(41,___G_put_2d_c_2d_string,___PRC(111))
   ___SET_GLO(74,___G_scan_2d_size_2d_string,___PRC(114))
   ___SET_GLO(53,___G_put_2d_size_2d_string,___PRC(117))
   ___SET_GLO(80,___G_scan_2d_utf_2d_8_2d_string,___PRC(120))
   ___SET_GLO(59,___G_put_2d_utf_2d_8_2d_string,___PRC(123))
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_binary_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 6
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_0)
___DEF_P_HLBL(___L1_binary_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_0)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S8 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_0; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___S8*) (ptr + index));
___return_binary_23_0:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S8_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S8_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_0)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_1
#undef ___PH_LBL0
#define ___PH_LBL0 9
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_1)
___DEF_P_HLBL(___L1_binary_23_1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_1)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_1)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S8 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S8(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_1
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___S8*) (ptr + index) = ___arg3;
___return_binary_23_1:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S8(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_1)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_2
#undef ___PH_LBL0
#define ___PH_LBL0 12
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_2)
___DEF_P_HLBL(___L1_binary_23_2)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_2)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_2)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___U8 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_2; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___U8*) (ptr + index));
___return_binary_23_2:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_U8_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_U8_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_2)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_3
#undef ___PH_LBL0
#define ___PH_LBL0 15
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_3)
___DEF_P_HLBL(___L1_binary_23_3)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_3)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_3)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___U8 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_U8(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_3
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___U8*) (ptr + index) = ___arg3;
___return_binary_23_3:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_U8(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_3)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_4
#undef ___PH_LBL0
#define ___PH_LBL0 18
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_4)
___DEF_P_HLBL(___L1_binary_23_4)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_4)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_4)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S16 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_4; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___S16*) (ptr + index));
___return_binary_23_4:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S16_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S16_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_4)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_5
#undef ___PH_LBL0
#define ___PH_LBL0 21
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_5)
___DEF_P_HLBL(___L1_binary_23_5)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_5)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_5)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S16 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S16(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_5
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___S16*) (ptr + index) = ___arg3;
___return_binary_23_5:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S16(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_5)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_6
#undef ___PH_LBL0
#define ___PH_LBL0 24
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_6)
___DEF_P_HLBL(___L1_binary_23_6)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_6)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_6)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S16 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_6; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[2];
    data[1] = *scan++;
    data[0] = *scan++;
    ___return(* (___S16*) data);
___return_binary_23_6:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S16_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S16_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_6)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_7
#undef ___PH_LBL0
#define ___PH_LBL0 27
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_7)
___DEF_P_HLBL(___L1_binary_23_7)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_7)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_7)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S16 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S16(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_7
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[2];
    * (___S16*) data = ___arg3;
    *scan++ = data[1];
    *scan++ = data[0];
___return_binary_23_7:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S16(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_7)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_8
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_8)
___DEF_P_HLBL(___L1_binary_23_8)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_8)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_8)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___U16 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_8; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___U16*) (ptr + index));
___return_binary_23_8:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_U16_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_U16_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_8)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_9
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_9)
___DEF_P_HLBL(___L1_binary_23_9)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_9)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_9)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___U16 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_U16(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_9
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___U16*) (ptr + index) = ___arg3;
___return_binary_23_9:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_U16(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_9)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_10
#undef ___PH_LBL0
#define ___PH_LBL0 36
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_10)
___DEF_P_HLBL(___L1_binary_23_10)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_10)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_10)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S32 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_10; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___S32*) (ptr + index));
___return_binary_23_10:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S32_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S32_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_10)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_11
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_11)
___DEF_P_HLBL(___L1_binary_23_11)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_11)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_11)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S32 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S32(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_11
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___S32*) (ptr + index) = ___arg3;
___return_binary_23_11:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S32(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_11)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_12
#undef ___PH_LBL0
#define ___PH_LBL0 42
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_12)
___DEF_P_HLBL(___L1_binary_23_12)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_12)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_12)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___U32 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_12; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___U32*) (ptr + index));
___return_binary_23_12:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_U32_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_U32_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_12)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_13
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_13)
___DEF_P_HLBL(___L1_binary_23_13)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_13)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_13)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___U32 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_U32(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_13
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___U32*) (ptr + index) = ___arg3;
___return_binary_23_13:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_U32(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_13)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_14
#undef ___PH_LBL0
#define ___PH_LBL0 48
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_14)
___DEF_P_HLBL(___L1_binary_23_14)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_14)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_14)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S32 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_14; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[4];
    data[3] = *scan++;
    data[2] = *scan++;
    data[1] = *scan++;
    data[0] = *scan++;
    ___return(* (___S32*) data);
___return_binary_23_14:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S32_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S32_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_14)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_15
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_15)
___DEF_P_HLBL(___L1_binary_23_15)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_15)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_15)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S32 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S32(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_15
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[4];
    * (___S32*) data = ___arg3;
    *scan++ = data[3];
    *scan++ = data[2];
    *scan++ = data[1];
    *scan++ = data[0];
___return_binary_23_15:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S32(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_15)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_16
#undef ___PH_LBL0
#define ___PH_LBL0 54
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_16)
___DEF_P_HLBL(___L1_binary_23_16)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_16)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_16)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___U32 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_16; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[4];
    data[3] = *scan++;
    data[2] = *scan++;
    data[1] = *scan++;
    data[0] = *scan++;
    ___return(* (___U32*) data);
___return_binary_23_16:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_U32_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_U32_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_16)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_17
#undef ___PH_LBL0
#define ___PH_LBL0 57
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_17)
___DEF_P_HLBL(___L1_binary_23_17)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_17)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_17)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___U32 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_U32(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_17
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[4];
    * (___U32*) data = ___arg3;
    *scan++ = data[3];
    *scan++ = data[2];
    *scan++ = data[1];
    *scan++ = data[0];
___return_binary_23_17:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_U32(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_17)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_18
#undef ___PH_LBL0
#define ___PH_LBL0 60
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_18)
___DEF_P_HLBL(___L1_binary_23_18)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_18)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_18)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S64 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_18; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___S64*) (ptr + index));
___return_binary_23_18:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S64_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S64_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_18)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_19
#undef ___PH_LBL0
#define ___PH_LBL0 63
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_19)
___DEF_P_HLBL(___L1_binary_23_19)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_19)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_19)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S64 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S64(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_19
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___S64*) (ptr + index) = ___arg3;
___return_binary_23_19:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S64(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_19)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_20
#undef ___PH_LBL0
#define ___PH_LBL0 66
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_20)
___DEF_P_HLBL(___L1_binary_23_20)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_20)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_20)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___U64 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_20; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (___U64*) (ptr + index));
___return_binary_23_20:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_U64_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_U64_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_20)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_21
#undef ___PH_LBL0
#define ___PH_LBL0 69
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_21)
___DEF_P_HLBL(___L1_binary_23_21)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_21)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_21)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___U64 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_U64(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_21
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (___U64*) (ptr + index) = ___arg3;
___return_binary_23_21:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_U64(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_21)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_22
#undef ___PH_LBL0
#define ___PH_LBL0 72
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_22)
___DEF_P_HLBL(___L1_binary_23_22)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_22)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_22)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___S64 ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_22; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[8];
    data[7] = *scan++;
    data[6] = *scan++;
    data[5] = *scan++;
    data[4] = *scan++;
    data[3] = *scan++;
    data[2] = *scan++;
    data[1] = *scan++;
    data[0] = *scan++;
    ___return(* (___S64*) data);
___return_binary_23_22:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_S64_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_S64_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_22)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_23
#undef ___PH_LBL0
#define ___PH_LBL0 75
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_23)
___DEF_P_HLBL(___L1_binary_23_23)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_23)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_23)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___S64 ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_S64(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_23
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[8];
    * (___S64*) data = ___arg3;
    *scan++ = data[7];
    *scan++ = data[6];
    *scan++ = data[5];
    *scan++ = data[4];
    *scan++ = data[3];
    *scan++ = data[2];
    *scan++ = data[1];
    *scan++ = data[0];
___return_binary_23_23:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_S64(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_23)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_24
#undef ___PH_LBL0
#define ___PH_LBL0 78
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_24)
___DEF_P_HLBL(___L1_binary_23_24)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_24)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_24)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(float ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_24; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (float*) (ptr + index));
___return_binary_23_24:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_FLOAT_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_FLOAT_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_24)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_25
#undef ___PH_LBL0
#define ___PH_LBL0 81
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_25)
___DEF_P_HLBL(___L1_binary_23_25)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_25)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_25)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,float ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_FLOAT(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_25
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (float*) (ptr + index) = ___arg3;
___return_binary_23_25:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_FLOAT(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_25)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_26
#undef ___PH_LBL0
#define ___PH_LBL0 84
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_26)
___DEF_P_HLBL(___L1_binary_23_26)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_26)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L_binary_23_26)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(7)
#define ___NARGS 4
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG_SCMOBJ(3)
#define ___arg3 ___ARG3
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,int ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_26
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    float *scan = (float*) (ptr + index);
    float *dest = ___CAST(float*,___BODY(___arg3));
    int count = ___arg4;
    int i;
    for (i = 0; i < count; i++)
        *dest++ = *scan++;
___return_binary_23_26:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg3
___END_CFUN_ARG_SCMOBJ(3)
#undef ___ARG3
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_26)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(5))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_27
#undef ___PH_LBL0
#define ___PH_LBL0 87
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_27)
___DEF_P_HLBL(___L1_binary_23_27)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_27)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L_binary_23_27)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(7)
#define ___NARGS 4
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG_SCMOBJ(3)
#define ___arg3 ___ARG3
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,int ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_27
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    float *scan = (float*) (ptr + index);
    double *dest = ___CAST(double*,___BODY(___arg3));
    int count = ___arg4;
    int i;
    for (i = 0; i < count; i++)
        *dest++ = *scan++;
___return_binary_23_27:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg3
___END_CFUN_ARG_SCMOBJ(3)
#undef ___ARG3
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_27)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(5))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_28
#undef ___PH_LBL0
#define ___PH_LBL0 90
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_28)
___DEF_P_HLBL(___L1_binary_23_28)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_28)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_28)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(float ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_28; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[4];
    data[3] = *scan++;
    data[2] = *scan++;
    data[1] = *scan++;
    data[0] = *scan++;
    ___return(* (float*) data);
___return_binary_23_28:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_FLOAT_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_FLOAT_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_28)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_29
#undef ___PH_LBL0
#define ___PH_LBL0 93
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_29)
___DEF_P_HLBL(___L1_binary_23_29)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_29)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_29)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,float ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_FLOAT(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_29
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[4];
    * (float*) data = ___arg3;
    *scan++ = data[3];
    *scan++ = data[2];
    *scan++ = data[1];
    *scan++ = data[0];
___return_binary_23_29:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_FLOAT(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_29)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_30
#undef ___PH_LBL0
#define ___PH_LBL0 96
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_30)
___DEF_P_HLBL(___L1_binary_23_30)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_30)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_30)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(double ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_30; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(* (double*) (ptr + index));
___return_binary_23_30:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_DOUBLE_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_DOUBLE_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_30)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_31
#undef ___PH_LBL0
#define ___PH_LBL0 99
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_31)
___DEF_P_HLBL(___L1_binary_23_31)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_31)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_31)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,double ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_DOUBLE(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_31
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    * (double*) (ptr + index) = ___arg3;
___return_binary_23_31:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_DOUBLE(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_31)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_32
#undef ___PH_LBL0
#define ___PH_LBL0 102
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_32)
___DEF_P_HLBL(___L1_binary_23_32)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_32)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_32)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(double ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_32; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[8];
    data[7] = *scan++;
    data[6] = *scan++;
    data[5] = *scan++;
    data[4] = *scan++;
    data[3] = *scan++;
    data[2] = *scan++;
    data[1] = *scan++;
    data[0] = *scan++;
    ___return(* (double*) data);
___return_binary_23_32:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_DOUBLE_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_DOUBLE_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_32)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_33
#undef ___PH_LBL0
#define ___PH_LBL0 105
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_33)
___DEF_P_HLBL(___L1_binary_23_33)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_33)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_33)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,double ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_DOUBLE(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return goto ___return_binary_23_33
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *scan = ptr + index;
    char data[8];
    * (double*) data = ___arg3;
    *scan++ = data[7];
    *scan++ = data[6];
    *scan++ = data[5];
    *scan++ = data[4];
    *scan++ = data[3];
    *scan++ = data[2];
    *scan++ = data[1];
    *scan++ = data[0];
___return_binary_23_33:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_DOUBLE(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_33)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_34
#undef ___PH_LBL0
#define ___PH_LBL0 108
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_34)
___DEF_P_HLBL(___L1_binary_23_34)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_34)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_34)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN(char* ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,int ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_34; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    int size = ___arg3;
    char str[size];
    memcpy(str, ptr + index, size);
    ___return(str);
___return_binary_23_34:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_34)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_35
#undef ___PH_LBL0
#define ___PH_LBL0 111
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_35)
___DEF_P_HLBL(___L1_binary_23_35)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_35)
   ___IF_NARGS_EQ(5,___NOTHING)
   ___WRONG_NARGS(0,5,0,0)
___DEF_GLBL(___L_binary_23_35)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(10)
#define ___NARGS 5
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,char* ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,int ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
#define ___ARG5 ___CFUN_ARG(5)
___BEGIN_CFUN_ARG(5,int ___arg5)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG5,___arg5,5)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
#define ___return goto ___return_binary_23_35
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *str = ___arg3;
    int strlen = ___arg4;
    int size = ___arg5;
    memcpy(ptr + index, str, strlen + 1);
___return_binary_23_35:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_INT(___ARG5,___arg5,5)
___END_CFUN_ARG(5)
#undef ___ARG5
___END_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_35)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(6))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_36
#undef ___PH_LBL0
#define ___PH_LBL0 114
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_36)
___DEF_P_HLBL(___L1_binary_23_36)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_36)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_binary_23_36)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 3
___BEGIN_CFUN(char* ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,int ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_36; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    int size = ___arg3;
    char str[size + 1];
    memcpy(str, ptr + index, size);
    str[size] = 0;
    ___return(str);
___return_binary_23_36:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_36)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_37
#undef ___PH_LBL0
#define ___PH_LBL0 117
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_37)
___DEF_P_HLBL(___L1_binary_23_37)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_37)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L_binary_23_37)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(7)
#define ___NARGS 4
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,char* ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,int ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
#define ___return goto ___return_binary_23_37
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    char *str = ___arg3;
    int size = ___arg4;
    memcpy(ptr + index, str, size);
___return_binary_23_37:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_37)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(5))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_38
#undef ___PH_LBL0
#define ___PH_LBL0 120
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_38)
___DEF_P_HLBL(___L1_binary_23_38)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_38)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_binary_23_38)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(___UTF_8STRING ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY
#undef ___AT_END
#define ___return(___val) do { ___CFUN_ASSIGN(___result,___val) goto ___return_binary_23_38; } while (0)
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    ___return(ptr + index);
___return_binary_23_38:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_UTF_8STRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_UTF_8STRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_38)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_binary_23_39
#undef ___PH_LBL0
#define ___PH_LBL0 123
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_binary_23_39)
___DEF_P_HLBL(___L1_binary_23_39)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_binary_23_39)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L_binary_23_39)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(7)
#define ___NARGS 4
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG_SCMOBJ(1)
#define ___arg1 ___ARG1
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___UTF_8STRING ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_UTF_8STRING(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,int ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
#define ___return goto ___return_binary_23_39
    char *ptr = ___CAST(char*,___BODY(___arg1));
    int index = ___arg2;
    memcpy(ptr + index, ___arg3, ___arg4);
___return_binary_23_39:;
#undef ___return
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_UTF_8STRING(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
#undef ___arg1
___END_CFUN_ARG_SCMOBJ(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1_binary_23_39)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(5))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_binary_23_,"binary#",___REF_SUB(0),4,0)
,___DEF_LBL_PROC(___H_binary_23_,0,-1)
,___DEF_LBL_RET(___H_binary_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_binary_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_binary_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_binary_23_0,"binary#0",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_0,2,-1)
,___DEF_LBL_RET(___H_binary_23_0,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_1,"binary#1",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_1,3,-1)
,___DEF_LBL_RET(___H_binary_23_1,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_2,"binary#2",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_2,2,-1)
,___DEF_LBL_RET(___H_binary_23_2,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_3,"binary#3",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_3,3,-1)
,___DEF_LBL_RET(___H_binary_23_3,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_4,"binary#4",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_4,2,-1)
,___DEF_LBL_RET(___H_binary_23_4,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_5,"binary#5",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_5,3,-1)
,___DEF_LBL_RET(___H_binary_23_5,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_6,"binary#6",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_6,2,-1)
,___DEF_LBL_RET(___H_binary_23_6,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_7,"binary#7",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_7,3,-1)
,___DEF_LBL_RET(___H_binary_23_7,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_8,"binary#8",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_8,2,-1)
,___DEF_LBL_RET(___H_binary_23_8,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_9,"binary#9",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_9,3,-1)
,___DEF_LBL_RET(___H_binary_23_9,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_10,"binary#10",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_10,2,-1)
,___DEF_LBL_RET(___H_binary_23_10,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_11,"binary#11",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_11,3,-1)
,___DEF_LBL_RET(___H_binary_23_11,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_12,"binary#12",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_12,2,-1)
,___DEF_LBL_RET(___H_binary_23_12,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_13,"binary#13",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_13,3,-1)
,___DEF_LBL_RET(___H_binary_23_13,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_14,"binary#14",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_14,2,-1)
,___DEF_LBL_RET(___H_binary_23_14,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_15,"binary#15",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_15,3,-1)
,___DEF_LBL_RET(___H_binary_23_15,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_16,"binary#16",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_16,2,-1)
,___DEF_LBL_RET(___H_binary_23_16,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_17,"binary#17",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_17,3,-1)
,___DEF_LBL_RET(___H_binary_23_17,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_18,"binary#18",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_18,2,-1)
,___DEF_LBL_RET(___H_binary_23_18,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_19,"binary#19",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_19,3,-1)
,___DEF_LBL_RET(___H_binary_23_19,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_20,"binary#20",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_20,2,-1)
,___DEF_LBL_RET(___H_binary_23_20,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_21,"binary#21",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_21,3,-1)
,___DEF_LBL_RET(___H_binary_23_21,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_22,"binary#22",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_22,2,-1)
,___DEF_LBL_RET(___H_binary_23_22,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_23,"binary#23",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_23,3,-1)
,___DEF_LBL_RET(___H_binary_23_23,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_24,"binary#24",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_24,2,-1)
,___DEF_LBL_RET(___H_binary_23_24,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_25,"binary#25",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_25,3,-1)
,___DEF_LBL_RET(___H_binary_23_25,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_26,"binary#26",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_26,4,-1)
,___DEF_LBL_RET(___H_binary_23_26,___IFD(___RETN,5,4,0x1fL))
,___DEF_LBL_INTRO(___H_binary_23_27,"binary#27",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_27,4,-1)
,___DEF_LBL_RET(___H_binary_23_27,___IFD(___RETN,5,4,0x1fL))
,___DEF_LBL_INTRO(___H_binary_23_28,"binary#28",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_28,2,-1)
,___DEF_LBL_RET(___H_binary_23_28,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_29,"binary#29",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_29,3,-1)
,___DEF_LBL_RET(___H_binary_23_29,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_30,"binary#30",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_30,2,-1)
,___DEF_LBL_RET(___H_binary_23_30,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_31,"binary#31",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_31,3,-1)
,___DEF_LBL_RET(___H_binary_23_31,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_32,"binary#32",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_32,2,-1)
,___DEF_LBL_RET(___H_binary_23_32,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_33,"binary#33",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_33,3,-1)
,___DEF_LBL_RET(___H_binary_23_33,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_34,"binary#34",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_34,3,-1)
,___DEF_LBL_RET(___H_binary_23_34,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_35,"binary#35",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_35,5,-1)
,___DEF_LBL_RET(___H_binary_23_35,___IFD(___RETN,6,5,0x3fL))
,___DEF_LBL_INTRO(___H_binary_23_36,"binary#36",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_36,3,-1)
,___DEF_LBL_RET(___H_binary_23_36,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_binary_23_37,"binary#37",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_37,4,-1)
,___DEF_LBL_RET(___H_binary_23_37,___IFD(___RETN,5,4,0x1fL))
,___DEF_LBL_INTRO(___H_binary_23_38,"binary#38",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_38,2,-1)
,___DEF_LBL_RET(___H_binary_23_38,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H_binary_23_39,"binary#39",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_binary_23_39,4,-1)
,___DEF_LBL_RET(___H_binary_23_39,___IFD(___RETN,5,4,0x1fL))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_binary_23_,1)
___DEF_MOD_PRM(1,___G_binary_23_0,6)
___DEF_MOD_PRM(2,___G_binary_23_1,9)
___DEF_MOD_PRM(13,___G_binary_23_2,12)
___DEF_MOD_PRM(24,___G_binary_23_3,15)
___DEF_MOD_PRM(35,___G_binary_23_4,18)
___DEF_MOD_PRM(36,___G_binary_23_5,21)
___DEF_MOD_PRM(37,___G_binary_23_6,24)
___DEF_MOD_PRM(38,___G_binary_23_7,27)
___DEF_MOD_PRM(39,___G_binary_23_8,30)
___DEF_MOD_PRM(40,___G_binary_23_9,33)
___DEF_MOD_PRM(3,___G_binary_23_10,36)
___DEF_MOD_PRM(4,___G_binary_23_11,39)
___DEF_MOD_PRM(5,___G_binary_23_12,42)
___DEF_MOD_PRM(6,___G_binary_23_13,45)
___DEF_MOD_PRM(7,___G_binary_23_14,48)
___DEF_MOD_PRM(8,___G_binary_23_15,51)
___DEF_MOD_PRM(9,___G_binary_23_16,54)
___DEF_MOD_PRM(10,___G_binary_23_17,57)
___DEF_MOD_PRM(11,___G_binary_23_18,60)
___DEF_MOD_PRM(12,___G_binary_23_19,63)
___DEF_MOD_PRM(14,___G_binary_23_20,66)
___DEF_MOD_PRM(15,___G_binary_23_21,69)
___DEF_MOD_PRM(16,___G_binary_23_22,72)
___DEF_MOD_PRM(17,___G_binary_23_23,75)
___DEF_MOD_PRM(18,___G_binary_23_24,78)
___DEF_MOD_PRM(19,___G_binary_23_25,81)
___DEF_MOD_PRM(20,___G_binary_23_26,84)
___DEF_MOD_PRM(21,___G_binary_23_27,87)
___DEF_MOD_PRM(22,___G_binary_23_28,90)
___DEF_MOD_PRM(23,___G_binary_23_29,93)
___DEF_MOD_PRM(25,___G_binary_23_30,96)
___DEF_MOD_PRM(26,___G_binary_23_31,99)
___DEF_MOD_PRM(27,___G_binary_23_32,102)
___DEF_MOD_PRM(28,___G_binary_23_33,105)
___DEF_MOD_PRM(29,___G_binary_23_34,108)
___DEF_MOD_PRM(30,___G_binary_23_35,111)
___DEF_MOD_PRM(31,___G_binary_23_36,114)
___DEF_MOD_PRM(32,___G_binary_23_37,117)
___DEF_MOD_PRM(33,___G_binary_23_38,120)
___DEF_MOD_PRM(34,___G_binary_23_39,123)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_binary_23_,1)
___DEF_MOD_GLO(1,___G_binary_23_0,6)
___DEF_MOD_GLO(2,___G_binary_23_1,9)
___DEF_MOD_GLO(13,___G_binary_23_2,12)
___DEF_MOD_GLO(24,___G_binary_23_3,15)
___DEF_MOD_GLO(35,___G_binary_23_4,18)
___DEF_MOD_GLO(36,___G_binary_23_5,21)
___DEF_MOD_GLO(37,___G_binary_23_6,24)
___DEF_MOD_GLO(38,___G_binary_23_7,27)
___DEF_MOD_GLO(39,___G_binary_23_8,30)
___DEF_MOD_GLO(40,___G_binary_23_9,33)
___DEF_MOD_GLO(3,___G_binary_23_10,36)
___DEF_MOD_GLO(4,___G_binary_23_11,39)
___DEF_MOD_GLO(5,___G_binary_23_12,42)
___DEF_MOD_GLO(6,___G_binary_23_13,45)
___DEF_MOD_GLO(7,___G_binary_23_14,48)
___DEF_MOD_GLO(8,___G_binary_23_15,51)
___DEF_MOD_GLO(9,___G_binary_23_16,54)
___DEF_MOD_GLO(10,___G_binary_23_17,57)
___DEF_MOD_GLO(11,___G_binary_23_18,60)
___DEF_MOD_GLO(12,___G_binary_23_19,63)
___DEF_MOD_GLO(14,___G_binary_23_20,66)
___DEF_MOD_GLO(15,___G_binary_23_21,69)
___DEF_MOD_GLO(16,___G_binary_23_22,72)
___DEF_MOD_GLO(17,___G_binary_23_23,75)
___DEF_MOD_GLO(18,___G_binary_23_24,78)
___DEF_MOD_GLO(19,___G_binary_23_25,81)
___DEF_MOD_GLO(20,___G_binary_23_26,84)
___DEF_MOD_GLO(21,___G_binary_23_27,87)
___DEF_MOD_GLO(22,___G_binary_23_28,90)
___DEF_MOD_GLO(23,___G_binary_23_29,93)
___DEF_MOD_GLO(25,___G_binary_23_30,96)
___DEF_MOD_GLO(26,___G_binary_23_31,99)
___DEF_MOD_GLO(27,___G_binary_23_32,102)
___DEF_MOD_GLO(28,___G_binary_23_33,105)
___DEF_MOD_GLO(29,___G_binary_23_34,108)
___DEF_MOD_GLO(30,___G_binary_23_35,111)
___DEF_MOD_GLO(31,___G_binary_23_36,114)
___DEF_MOD_GLO(32,___G_binary_23_37,117)
___DEF_MOD_GLO(33,___G_binary_23_38,120)
___DEF_MOD_GLO(34,___G_binary_23_39,123)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_binary,"binary")
___DEF_MOD_SYM(1,___S_kernel_2e_binary,"kernel.binary")
___END_MOD_SYM_KEY

#endif
