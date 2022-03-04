#ifdef ___LINKER_INFO
; File: "_time.c", produced by Gambit v4.8.9
(
408009
(C)
"bin:time"
(("bin:time"))
(
"add-duration"
"add-duration!"
"bin:time"
"copy-time"
"current-date"
"current-julian-day"
"current-modified-julian-day"
"current-time"
"date->julian-day"
"date->modified-julian-day"
"date->string"
"date->time-monotonic"
"date->time-tai"
"date->time-utc"
"date-day"
"date-hour"
"date-minute"
"date-month"
"date-nanosecond"
"date-second"
"date-week-day"
"date-week-number"
"date-year"
"date-year-day"
"date-zone-offset"
"date?"
"foundation.dialect"
"jazz"
"julian-day->date"
"julian-day->time-monotonic"
"julian-day->time-tai"
"julian-day->time-utc"
"local-timezone"
"local-timezone-set!"
"make-date"
"make-time"
"modified-julian-day->date"
"modified-julian-day->time-monotonic"
"modified-julian-day->time-tai"
"modified-julian-day->time-utc"
"public"
"set-time-nanosecond!"
"set-time-second!"
"set-time-type!"
"string->date"
"subtract-duration"
"subtract-duration!"
"system-timezone"
"system-timezone-set!"
"time"
"time-difference"
"time-difference!"
"time-duration"
"time-monotonic"
"time-monotonic->date"
"time-monotonic->julian-day"
"time-monotonic->modified-julian-day"
"time-monotonic->time-tai"
"time-monotonic->time-tai!"
"time-monotonic->time-utc"
"time-monotonic->time-utc!"
"time-nanosecond"
"time-process"
"time-resolution"
"time-second"
"time-tai"
"time-tai->date"
"time-tai->julian-day"
"time-tai->modified-julian-day"
"time-tai->time-monotonic"
"time-tai->time-monotonic!"
"time-tai->time-utc"
"time-tai->time-utc!"
"time-thread"
"time-type"
"time-utc"
"time-utc->date"
"time-utc->julian-day"
"time-utc->modified-julian-day"
"time-utc->time-monotonic"
"time-utc->time-monotonic!"
"time-utc->time-tai"
"time-utc->time-tai!"
"time.implementation"
"time:add-duration"
"time:add-duration!"
"time:copy-time"
"time:current-date"
"time:current-julian-day"
"time:current-modified-julian-day"
"time:current-time"
"time:date->julian-day"
"time:date->modified-julian-day"
"time:date->string"
"time:date->time-monotonic"
"time:date->time-tai"
"time:date->time-utc"
"time:date-day"
"time:date-hour"
"time:date-minute"
"time:date-month"
"time:date-nanosecond"
"time:date-second"
"time:date-week-day"
"time:date-week-number"
"time:date-year"
"time:date-year-day"
"time:date-zone-offset"
"time:date?"
"time:julian-day->date"
"time:julian-day->time-monotonic"
"time:julian-day->time-tai"
"time:julian-day->time-utc"
"time:local-timezone"
"time:local-timezone-set!"
"time:make-date"
"time:make-time"
"time:modified-julian-day->date"
"time:modified-julian-day->time-monotonic"
"time:modified-julian-day->time-tai"
"time:modified-julian-day->time-utc"
"time:set-time-nanosecond!"
"time:set-time-second!"
"time:set-time-type!"
"time:string->date"
"time:subtract-duration"
"time:subtract-duration!"
"time:system-timezone"
"time:system-timezone-set!"
"time:time-difference"
"time:time-difference!"
"time:time-duration"
"time:time-monotonic"
"time:time-monotonic->date"
"time:time-monotonic->julian-day"
"time:time-monotonic->modified-julian-day"
"time:time-monotonic->time-tai"
"time:time-monotonic->time-tai!"
"time:time-monotonic->time-utc"
"time:time-monotonic->time-utc!"
"time:time-nanosecond"
"time:time-process"
"time:time-resolution"
"time:time-second"
"time:time-tai"
"time:time-tai->date"
"time:time-tai->julian-day"
"time:time-tai->modified-julian-day"
"time:time-tai->time-monotonic"
"time:time-tai->time-monotonic!"
"time:time-tai->time-utc"
"time:time-tai->time-utc!"
"time:time-thread"
"time:time-type"
"time:time-utc"
"time:time-utc->date"
"time:time-utc->julian-day"
"time:time-utc->modified-julian-day"
"time:time-utc->time-monotonic"
"time:time-utc->time-monotonic!"
"time:time-utc->time-tai"
"time:time-utc->time-tai!"
"time:time<=?"
"time:time<?"
"time:time=?"
"time:time>=?"
"time:time>?"
"time:time?"
"time:tm-current-time"
"time<=?"
"time<?"
"time=?"
"time>=?"
"time>?"
"time?"
"tm-current-time"
)
(
)
(
"bin:time#"
)
(
"time:current-time"
)
(
"jazz:load-unit"
"jazz:register-module"
"tm-current-time"
)
 ()
)
#else
#define ___VERSION 408009
#define ___MODULE_NAME "bin:time"
#define ___LINKER_ID ___LNK_bin_3a_time
#define ___MH_PROC ___H_bin_3a_time
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 176
#define ___GLOCOUNT 5
#define ___SUPCOUNT 2
#define ___CNSCOUNT 170
#define ___SUBCOUNT 18
#define ___LBLCOUNT 8
#define ___MODDESCR ___REF_SUB(17)
#include "gambit.h"

___NEED_SYM(___S_add_2d_duration)
___NEED_SYM(___S_add_2d_duration_21_)
___NEED_SYM(___S_bin_3a_time)
___NEED_SYM(___S_copy_2d_time)
___NEED_SYM(___S_current_2d_date)
___NEED_SYM(___S_current_2d_julian_2d_day)
___NEED_SYM(___S_current_2d_modified_2d_julian_2d_day)
___NEED_SYM(___S_current_2d_time)
___NEED_SYM(___S_date_2d__3e_julian_2d_day)
___NEED_SYM(___S_date_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_date_2d__3e_string)
___NEED_SYM(___S_date_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_date_2d__3e_time_2d_tai)
___NEED_SYM(___S_date_2d__3e_time_2d_utc)
___NEED_SYM(___S_date_2d_day)
___NEED_SYM(___S_date_2d_hour)
___NEED_SYM(___S_date_2d_minute)
___NEED_SYM(___S_date_2d_month)
___NEED_SYM(___S_date_2d_nanosecond)
___NEED_SYM(___S_date_2d_second)
___NEED_SYM(___S_date_2d_week_2d_day)
___NEED_SYM(___S_date_2d_week_2d_number)
___NEED_SYM(___S_date_2d_year)
___NEED_SYM(___S_date_2d_year_2d_day)
___NEED_SYM(___S_date_2d_zone_2d_offset)
___NEED_SYM(___S_date_3f_)
___NEED_SYM(___S_foundation_2e_dialect)
___NEED_SYM(___S_jazz)
___NEED_SYM(___S_julian_2d_day_2d__3e_date)
___NEED_SYM(___S_julian_2d_day_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_julian_2d_day_2d__3e_time_2d_tai)
___NEED_SYM(___S_julian_2d_day_2d__3e_time_2d_utc)
___NEED_SYM(___S_local_2d_timezone)
___NEED_SYM(___S_local_2d_timezone_2d_set_21_)
___NEED_SYM(___S_make_2d_date)
___NEED_SYM(___S_make_2d_time)
___NEED_SYM(___S_modified_2d_julian_2d_day_2d__3e_date)
___NEED_SYM(___S_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_modified_2d_julian_2d_day_2d__3e_time_2d_tai)
___NEED_SYM(___S_modified_2d_julian_2d_day_2d__3e_time_2d_utc)
___NEED_SYM(___S_public)
___NEED_SYM(___S_set_2d_time_2d_nanosecond_21_)
___NEED_SYM(___S_set_2d_time_2d_second_21_)
___NEED_SYM(___S_set_2d_time_2d_type_21_)
___NEED_SYM(___S_string_2d__3e_date)
___NEED_SYM(___S_subtract_2d_duration)
___NEED_SYM(___S_subtract_2d_duration_21_)
___NEED_SYM(___S_system_2d_timezone)
___NEED_SYM(___S_system_2d_timezone_2d_set_21_)
___NEED_SYM(___S_time)
___NEED_SYM(___S_time_2d_difference)
___NEED_SYM(___S_time_2d_difference_21_)
___NEED_SYM(___S_time_2d_duration)
___NEED_SYM(___S_time_2d_monotonic)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_date)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_time_2d_tai_21_)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_2d_monotonic_2d__3e_time_2d_utc_21_)
___NEED_SYM(___S_time_2d_nanosecond)
___NEED_SYM(___S_time_2d_process)
___NEED_SYM(___S_time_2d_resolution)
___NEED_SYM(___S_time_2d_second)
___NEED_SYM(___S_time_2d_tai)
___NEED_SYM(___S_time_2d_tai_2d__3e_date)
___NEED_SYM(___S_time_2d_tai_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_2d_tai_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_2d_tai_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_2d_tai_2d__3e_time_2d_monotonic_21_)
___NEED_SYM(___S_time_2d_tai_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_2d_tai_2d__3e_time_2d_utc_21_)
___NEED_SYM(___S_time_2d_thread)
___NEED_SYM(___S_time_2d_type)
___NEED_SYM(___S_time_2d_utc)
___NEED_SYM(___S_time_2d_utc_2d__3e_date)
___NEED_SYM(___S_time_2d_utc_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_2d_utc_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_2d_utc_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_2d_utc_2d__3e_time_2d_monotonic_21_)
___NEED_SYM(___S_time_2d_utc_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_2d_utc_2d__3e_time_2d_tai_21_)
___NEED_SYM(___S_time_2e_implementation)
___NEED_SYM(___S_time_3a_add_2d_duration)
___NEED_SYM(___S_time_3a_add_2d_duration_21_)
___NEED_SYM(___S_time_3a_copy_2d_time)
___NEED_SYM(___S_time_3a_current_2d_date)
___NEED_SYM(___S_time_3a_current_2d_julian_2d_day)
___NEED_SYM(___S_time_3a_current_2d_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_3a_current_2d_time)
___NEED_SYM(___S_time_3a_date_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_3a_date_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_3a_date_2d__3e_string)
___NEED_SYM(___S_time_3a_date_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_3a_date_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_3a_date_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_3a_date_2d_day)
___NEED_SYM(___S_time_3a_date_2d_hour)
___NEED_SYM(___S_time_3a_date_2d_minute)
___NEED_SYM(___S_time_3a_date_2d_month)
___NEED_SYM(___S_time_3a_date_2d_nanosecond)
___NEED_SYM(___S_time_3a_date_2d_second)
___NEED_SYM(___S_time_3a_date_2d_week_2d_day)
___NEED_SYM(___S_time_3a_date_2d_week_2d_number)
___NEED_SYM(___S_time_3a_date_2d_year)
___NEED_SYM(___S_time_3a_date_2d_year_2d_day)
___NEED_SYM(___S_time_3a_date_2d_zone_2d_offset)
___NEED_SYM(___S_time_3a_date_3f_)
___NEED_SYM(___S_time_3a_julian_2d_day_2d__3e_date)
___NEED_SYM(___S_time_3a_julian_2d_day_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_3a_julian_2d_day_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_3a_julian_2d_day_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_3a_local_2d_timezone)
___NEED_SYM(___S_time_3a_local_2d_timezone_2d_set_21_)
___NEED_SYM(___S_time_3a_make_2d_date)
___NEED_SYM(___S_time_3a_make_2d_time)
___NEED_SYM(___S_time_3a_modified_2d_julian_2d_day_2d__3e_date)
___NEED_SYM(___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_3a_set_2d_time_2d_nanosecond_21_)
___NEED_SYM(___S_time_3a_set_2d_time_2d_second_21_)
___NEED_SYM(___S_time_3a_set_2d_time_2d_type_21_)
___NEED_SYM(___S_time_3a_string_2d__3e_date)
___NEED_SYM(___S_time_3a_subtract_2d_duration)
___NEED_SYM(___S_time_3a_subtract_2d_duration_21_)
___NEED_SYM(___S_time_3a_system_2d_timezone)
___NEED_SYM(___S_time_3a_system_2d_timezone_2d_set_21_)
___NEED_SYM(___S_time_3a_time_2d_difference)
___NEED_SYM(___S_time_3a_time_2d_difference_21_)
___NEED_SYM(___S_time_3a_time_2d_duration)
___NEED_SYM(___S_time_3a_time_2d_monotonic)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_date)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai_21_)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc_21_)
___NEED_SYM(___S_time_3a_time_2d_nanosecond)
___NEED_SYM(___S_time_3a_time_2d_process)
___NEED_SYM(___S_time_3a_time_2d_resolution)
___NEED_SYM(___S_time_3a_time_2d_second)
___NEED_SYM(___S_time_3a_time_2d_tai)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_date)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic_21_)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_time_2d_utc)
___NEED_SYM(___S_time_3a_time_2d_tai_2d__3e_time_2d_utc_21_)
___NEED_SYM(___S_time_3a_time_2d_thread)
___NEED_SYM(___S_time_3a_time_2d_type)
___NEED_SYM(___S_time_3a_time_2d_utc)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_date)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_julian_2d_day)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_modified_2d_julian_2d_day)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic_21_)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_time_2d_tai)
___NEED_SYM(___S_time_3a_time_2d_utc_2d__3e_time_2d_tai_21_)
___NEED_SYM(___S_time_3a_time_3c__3d__3f_)
___NEED_SYM(___S_time_3a_time_3c__3f_)
___NEED_SYM(___S_time_3a_time_3d__3f_)
___NEED_SYM(___S_time_3a_time_3e__3d__3f_)
___NEED_SYM(___S_time_3a_time_3e__3f_)
___NEED_SYM(___S_time_3a_time_3f_)
___NEED_SYM(___S_time_3a_tm_2d_current_2d_time)
___NEED_SYM(___S_time_3c__3d__3f_)
___NEED_SYM(___S_time_3c__3f_)
___NEED_SYM(___S_time_3d__3f_)
___NEED_SYM(___S_time_3e__3d__3f_)
___NEED_SYM(___S_time_3e__3f_)
___NEED_SYM(___S_time_3f_)
___NEED_SYM(___S_tm_2d_current_2d_time)

___NEED_GLO(___G_bin_3a_time_23_)
___NEED_GLO(___G_jazz_3a_load_2d_unit)
___NEED_GLO(___G_jazz_3a_register_2d_module)
___NEED_GLO(___G_time_3a_current_2d_time)
___NEED_GLO(___G_tm_2d_current_2d_time)

___BEGIN_SYM
___DEF_SYM(0,___S_add_2d_duration,"add-duration")
___DEF_SYM(1,___S_add_2d_duration_21_,"add-duration!")
___DEF_SYM(2,___S_bin_3a_time,"bin:time")
___DEF_SYM(3,___S_copy_2d_time,"copy-time")
___DEF_SYM(4,___S_current_2d_date,"current-date")
___DEF_SYM(5,___S_current_2d_julian_2d_day,"current-julian-day")
___DEF_SYM(6,___S_current_2d_modified_2d_julian_2d_day,"current-modified-julian-day")
___DEF_SYM(7,___S_current_2d_time,"current-time")
___DEF_SYM(8,___S_date_2d__3e_julian_2d_day,"date->julian-day")
___DEF_SYM(9,___S_date_2d__3e_modified_2d_julian_2d_day,"date->modified-julian-day")
___DEF_SYM(10,___S_date_2d__3e_string,"date->string")
___DEF_SYM(11,___S_date_2d__3e_time_2d_monotonic,"date->time-monotonic")
___DEF_SYM(12,___S_date_2d__3e_time_2d_tai,"date->time-tai")
___DEF_SYM(13,___S_date_2d__3e_time_2d_utc,"date->time-utc")
___DEF_SYM(14,___S_date_2d_day,"date-day")
___DEF_SYM(15,___S_date_2d_hour,"date-hour")
___DEF_SYM(16,___S_date_2d_minute,"date-minute")
___DEF_SYM(17,___S_date_2d_month,"date-month")
___DEF_SYM(18,___S_date_2d_nanosecond,"date-nanosecond")
___DEF_SYM(19,___S_date_2d_second,"date-second")
___DEF_SYM(20,___S_date_2d_week_2d_day,"date-week-day")
___DEF_SYM(21,___S_date_2d_week_2d_number,"date-week-number")
___DEF_SYM(22,___S_date_2d_year,"date-year")
___DEF_SYM(23,___S_date_2d_year_2d_day,"date-year-day")
___DEF_SYM(24,___S_date_2d_zone_2d_offset,"date-zone-offset")
___DEF_SYM(25,___S_date_3f_,"date?")
___DEF_SYM(26,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_SYM(27,___S_jazz,"jazz")
___DEF_SYM(28,___S_julian_2d_day_2d__3e_date,"julian-day->date")
___DEF_SYM(29,___S_julian_2d_day_2d__3e_time_2d_monotonic,"julian-day->time-monotonic")
___DEF_SYM(30,___S_julian_2d_day_2d__3e_time_2d_tai,"julian-day->time-tai")
___DEF_SYM(31,___S_julian_2d_day_2d__3e_time_2d_utc,"julian-day->time-utc")
___DEF_SYM(32,___S_local_2d_timezone,"local-timezone")
___DEF_SYM(33,___S_local_2d_timezone_2d_set_21_,"local-timezone-set!")
___DEF_SYM(34,___S_make_2d_date,"make-date")
___DEF_SYM(35,___S_make_2d_time,"make-time")
___DEF_SYM(36,___S_modified_2d_julian_2d_day_2d__3e_date,"modified-julian-day->date")
___DEF_SYM(37,___S_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic,"modified-julian-day->time-monotonic")

___DEF_SYM(38,___S_modified_2d_julian_2d_day_2d__3e_time_2d_tai,"modified-julian-day->time-tai")

___DEF_SYM(39,___S_modified_2d_julian_2d_day_2d__3e_time_2d_utc,"modified-julian-day->time-utc")

___DEF_SYM(40,___S_public,"public")
___DEF_SYM(41,___S_set_2d_time_2d_nanosecond_21_,"set-time-nanosecond!")
___DEF_SYM(42,___S_set_2d_time_2d_second_21_,"set-time-second!")
___DEF_SYM(43,___S_set_2d_time_2d_type_21_,"set-time-type!")
___DEF_SYM(44,___S_string_2d__3e_date,"string->date")
___DEF_SYM(45,___S_subtract_2d_duration,"subtract-duration")
___DEF_SYM(46,___S_subtract_2d_duration_21_,"subtract-duration!")
___DEF_SYM(47,___S_system_2d_timezone,"system-timezone")
___DEF_SYM(48,___S_system_2d_timezone_2d_set_21_,"system-timezone-set!")
___DEF_SYM(49,___S_time,"time")
___DEF_SYM(50,___S_time_2d_difference,"time-difference")
___DEF_SYM(51,___S_time_2d_difference_21_,"time-difference!")
___DEF_SYM(52,___S_time_2d_duration,"time-duration")
___DEF_SYM(53,___S_time_2d_monotonic,"time-monotonic")
___DEF_SYM(54,___S_time_2d_monotonic_2d__3e_date,"time-monotonic->date")
___DEF_SYM(55,___S_time_2d_monotonic_2d__3e_julian_2d_day,"time-monotonic->julian-day")
___DEF_SYM(56,___S_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day,"time-monotonic->modified-julian-day")

___DEF_SYM(57,___S_time_2d_monotonic_2d__3e_time_2d_tai,"time-monotonic->time-tai")
___DEF_SYM(58,___S_time_2d_monotonic_2d__3e_time_2d_tai_21_,"time-monotonic->time-tai!")
___DEF_SYM(59,___S_time_2d_monotonic_2d__3e_time_2d_utc,"time-monotonic->time-utc")
___DEF_SYM(60,___S_time_2d_monotonic_2d__3e_time_2d_utc_21_,"time-monotonic->time-utc!")
___DEF_SYM(61,___S_time_2d_nanosecond,"time-nanosecond")
___DEF_SYM(62,___S_time_2d_process,"time-process")
___DEF_SYM(63,___S_time_2d_resolution,"time-resolution")
___DEF_SYM(64,___S_time_2d_second,"time-second")
___DEF_SYM(65,___S_time_2d_tai,"time-tai")
___DEF_SYM(66,___S_time_2d_tai_2d__3e_date,"time-tai->date")
___DEF_SYM(67,___S_time_2d_tai_2d__3e_julian_2d_day,"time-tai->julian-day")
___DEF_SYM(68,___S_time_2d_tai_2d__3e_modified_2d_julian_2d_day,"time-tai->modified-julian-day")

___DEF_SYM(69,___S_time_2d_tai_2d__3e_time_2d_monotonic,"time-tai->time-monotonic")
___DEF_SYM(70,___S_time_2d_tai_2d__3e_time_2d_monotonic_21_,"time-tai->time-monotonic!")
___DEF_SYM(71,___S_time_2d_tai_2d__3e_time_2d_utc,"time-tai->time-utc")
___DEF_SYM(72,___S_time_2d_tai_2d__3e_time_2d_utc_21_,"time-tai->time-utc!")
___DEF_SYM(73,___S_time_2d_thread,"time-thread")
___DEF_SYM(74,___S_time_2d_type,"time-type")
___DEF_SYM(75,___S_time_2d_utc,"time-utc")
___DEF_SYM(76,___S_time_2d_utc_2d__3e_date,"time-utc->date")
___DEF_SYM(77,___S_time_2d_utc_2d__3e_julian_2d_day,"time-utc->julian-day")
___DEF_SYM(78,___S_time_2d_utc_2d__3e_modified_2d_julian_2d_day,"time-utc->modified-julian-day")

___DEF_SYM(79,___S_time_2d_utc_2d__3e_time_2d_monotonic,"time-utc->time-monotonic")
___DEF_SYM(80,___S_time_2d_utc_2d__3e_time_2d_monotonic_21_,"time-utc->time-monotonic!")
___DEF_SYM(81,___S_time_2d_utc_2d__3e_time_2d_tai,"time-utc->time-tai")
___DEF_SYM(82,___S_time_2d_utc_2d__3e_time_2d_tai_21_,"time-utc->time-tai!")
___DEF_SYM(83,___S_time_2e_implementation,"time.implementation")
___DEF_SYM(84,___S_time_3a_add_2d_duration,"time:add-duration")
___DEF_SYM(85,___S_time_3a_add_2d_duration_21_,"time:add-duration!")
___DEF_SYM(86,___S_time_3a_copy_2d_time,"time:copy-time")
___DEF_SYM(87,___S_time_3a_current_2d_date,"time:current-date")
___DEF_SYM(88,___S_time_3a_current_2d_julian_2d_day,"time:current-julian-day")
___DEF_SYM(89,___S_time_3a_current_2d_modified_2d_julian_2d_day,"time:current-modified-julian-day")

___DEF_SYM(90,___S_time_3a_current_2d_time,"time:current-time")
___DEF_SYM(91,___S_time_3a_date_2d__3e_julian_2d_day,"time:date->julian-day")
___DEF_SYM(92,___S_time_3a_date_2d__3e_modified_2d_julian_2d_day,"time:date->modified-julian-day")

___DEF_SYM(93,___S_time_3a_date_2d__3e_string,"time:date->string")
___DEF_SYM(94,___S_time_3a_date_2d__3e_time_2d_monotonic,"time:date->time-monotonic")
___DEF_SYM(95,___S_time_3a_date_2d__3e_time_2d_tai,"time:date->time-tai")
___DEF_SYM(96,___S_time_3a_date_2d__3e_time_2d_utc,"time:date->time-utc")
___DEF_SYM(97,___S_time_3a_date_2d_day,"time:date-day")
___DEF_SYM(98,___S_time_3a_date_2d_hour,"time:date-hour")
___DEF_SYM(99,___S_time_3a_date_2d_minute,"time:date-minute")
___DEF_SYM(100,___S_time_3a_date_2d_month,"time:date-month")
___DEF_SYM(101,___S_time_3a_date_2d_nanosecond,"time:date-nanosecond")
___DEF_SYM(102,___S_time_3a_date_2d_second,"time:date-second")
___DEF_SYM(103,___S_time_3a_date_2d_week_2d_day,"time:date-week-day")
___DEF_SYM(104,___S_time_3a_date_2d_week_2d_number,"time:date-week-number")
___DEF_SYM(105,___S_time_3a_date_2d_year,"time:date-year")
___DEF_SYM(106,___S_time_3a_date_2d_year_2d_day,"time:date-year-day")
___DEF_SYM(107,___S_time_3a_date_2d_zone_2d_offset,"time:date-zone-offset")
___DEF_SYM(108,___S_time_3a_date_3f_,"time:date?")
___DEF_SYM(109,___S_time_3a_julian_2d_day_2d__3e_date,"time:julian-day->date")
___DEF_SYM(110,___S_time_3a_julian_2d_day_2d__3e_time_2d_monotonic,"time:julian-day->time-monotonic")

___DEF_SYM(111,___S_time_3a_julian_2d_day_2d__3e_time_2d_tai,"time:julian-day->time-tai")
___DEF_SYM(112,___S_time_3a_julian_2d_day_2d__3e_time_2d_utc,"time:julian-day->time-utc")
___DEF_SYM(113,___S_time_3a_local_2d_timezone,"time:local-timezone")
___DEF_SYM(114,___S_time_3a_local_2d_timezone_2d_set_21_,"time:local-timezone-set!")
___DEF_SYM(115,___S_time_3a_make_2d_date,"time:make-date")
___DEF_SYM(116,___S_time_3a_make_2d_time,"time:make-time")
___DEF_SYM(117,___S_time_3a_modified_2d_julian_2d_day_2d__3e_date,"time:modified-julian-day->date")

___DEF_SYM(118,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic,"time:modified-julian-day->time-monotonic")

___DEF_SYM(119,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_tai,"time:modified-julian-day->time-tai")

___DEF_SYM(120,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_utc,"time:modified-julian-day->time-utc")

___DEF_SYM(121,___S_time_3a_set_2d_time_2d_nanosecond_21_,"time:set-time-nanosecond!")
___DEF_SYM(122,___S_time_3a_set_2d_time_2d_second_21_,"time:set-time-second!")
___DEF_SYM(123,___S_time_3a_set_2d_time_2d_type_21_,"time:set-time-type!")
___DEF_SYM(124,___S_time_3a_string_2d__3e_date,"time:string->date")
___DEF_SYM(125,___S_time_3a_subtract_2d_duration,"time:subtract-duration")
___DEF_SYM(126,___S_time_3a_subtract_2d_duration_21_,"time:subtract-duration!")
___DEF_SYM(127,___S_time_3a_system_2d_timezone,"time:system-timezone")
___DEF_SYM(128,___S_time_3a_system_2d_timezone_2d_set_21_,"time:system-timezone-set!")
___DEF_SYM(129,___S_time_3a_time_2d_difference,"time:time-difference")
___DEF_SYM(130,___S_time_3a_time_2d_difference_21_,"time:time-difference!")
___DEF_SYM(131,___S_time_3a_time_2d_duration,"time:time-duration")
___DEF_SYM(132,___S_time_3a_time_2d_monotonic,"time:time-monotonic")
___DEF_SYM(133,___S_time_3a_time_2d_monotonic_2d__3e_date,"time:time-monotonic->date")
___DEF_SYM(134,___S_time_3a_time_2d_monotonic_2d__3e_julian_2d_day,"time:time-monotonic->julian-day")

___DEF_SYM(135,___S_time_3a_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day,"time:time-monotonic->modified-julian-day")

___DEF_SYM(136,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai,"time:time-monotonic->time-tai")

___DEF_SYM(137,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai_21_,"time:time-monotonic->time-tai!")

___DEF_SYM(138,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc,"time:time-monotonic->time-utc")

___DEF_SYM(139,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc_21_,"time:time-monotonic->time-utc!")

___DEF_SYM(140,___S_time_3a_time_2d_nanosecond,"time:time-nanosecond")
___DEF_SYM(141,___S_time_3a_time_2d_process,"time:time-process")
___DEF_SYM(142,___S_time_3a_time_2d_resolution,"time:time-resolution")
___DEF_SYM(143,___S_time_3a_time_2d_second,"time:time-second")
___DEF_SYM(144,___S_time_3a_time_2d_tai,"time:time-tai")
___DEF_SYM(145,___S_time_3a_time_2d_tai_2d__3e_date,"time:time-tai->date")
___DEF_SYM(146,___S_time_3a_time_2d_tai_2d__3e_julian_2d_day,"time:time-tai->julian-day")
___DEF_SYM(147,___S_time_3a_time_2d_tai_2d__3e_modified_2d_julian_2d_day,"time:time-tai->modified-julian-day")

___DEF_SYM(148,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic,"time:time-tai->time-monotonic")

___DEF_SYM(149,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic_21_,"time:time-tai->time-monotonic!")

___DEF_SYM(150,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc,"time:time-tai->time-utc")
___DEF_SYM(151,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc_21_,"time:time-tai->time-utc!")
___DEF_SYM(152,___S_time_3a_time_2d_thread,"time:time-thread")
___DEF_SYM(153,___S_time_3a_time_2d_type,"time:time-type")
___DEF_SYM(154,___S_time_3a_time_2d_utc,"time:time-utc")
___DEF_SYM(155,___S_time_3a_time_2d_utc_2d__3e_date,"time:time-utc->date")
___DEF_SYM(156,___S_time_3a_time_2d_utc_2d__3e_julian_2d_day,"time:time-utc->julian-day")
___DEF_SYM(157,___S_time_3a_time_2d_utc_2d__3e_modified_2d_julian_2d_day,"time:time-utc->modified-julian-day")

___DEF_SYM(158,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic,"time:time-utc->time-monotonic")

___DEF_SYM(159,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic_21_,"time:time-utc->time-monotonic!")

___DEF_SYM(160,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai,"time:time-utc->time-tai")
___DEF_SYM(161,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai_21_,"time:time-utc->time-tai!")
___DEF_SYM(162,___S_time_3a_time_3c__3d__3f_,"time:time<=?")
___DEF_SYM(163,___S_time_3a_time_3c__3f_,"time:time<?")
___DEF_SYM(164,___S_time_3a_time_3d__3f_,"time:time=?")
___DEF_SYM(165,___S_time_3a_time_3e__3d__3f_,"time:time>=?")
___DEF_SYM(166,___S_time_3a_time_3e__3f_,"time:time>?")
___DEF_SYM(167,___S_time_3a_time_3f_,"time:time?")
___DEF_SYM(168,___S_time_3a_tm_2d_current_2d_time,"time:tm-current-time")
___DEF_SYM(169,___S_time_3c__3d__3f_,"time<=?")
___DEF_SYM(170,___S_time_3c__3f_,"time<?")
___DEF_SYM(171,___S_time_3d__3f_,"time=?")
___DEF_SYM(172,___S_time_3e__3d__3f_,"time>=?")
___DEF_SYM(173,___S_time_3e__3f_,"time>?")
___DEF_SYM(174,___S_time_3f_,"time?")
___DEF_SYM(175,___S_tm_2d_current_2d_time,"tm-current-time")
___END_SYM

#define ___SYM_add_2d_duration ___SYM(0,___S_add_2d_duration)
#define ___SYM_add_2d_duration_21_ ___SYM(1,___S_add_2d_duration_21_)
#define ___SYM_bin_3a_time ___SYM(2,___S_bin_3a_time)
#define ___SYM_copy_2d_time ___SYM(3,___S_copy_2d_time)
#define ___SYM_current_2d_date ___SYM(4,___S_current_2d_date)
#define ___SYM_current_2d_julian_2d_day ___SYM(5,___S_current_2d_julian_2d_day)
#define ___SYM_current_2d_modified_2d_julian_2d_day ___SYM(6,___S_current_2d_modified_2d_julian_2d_day)
#define ___SYM_current_2d_time ___SYM(7,___S_current_2d_time)
#define ___SYM_date_2d__3e_julian_2d_day ___SYM(8,___S_date_2d__3e_julian_2d_day)
#define ___SYM_date_2d__3e_modified_2d_julian_2d_day ___SYM(9,___S_date_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_date_2d__3e_string ___SYM(10,___S_date_2d__3e_string)
#define ___SYM_date_2d__3e_time_2d_monotonic ___SYM(11,___S_date_2d__3e_time_2d_monotonic)
#define ___SYM_date_2d__3e_time_2d_tai ___SYM(12,___S_date_2d__3e_time_2d_tai)
#define ___SYM_date_2d__3e_time_2d_utc ___SYM(13,___S_date_2d__3e_time_2d_utc)
#define ___SYM_date_2d_day ___SYM(14,___S_date_2d_day)
#define ___SYM_date_2d_hour ___SYM(15,___S_date_2d_hour)
#define ___SYM_date_2d_minute ___SYM(16,___S_date_2d_minute)
#define ___SYM_date_2d_month ___SYM(17,___S_date_2d_month)
#define ___SYM_date_2d_nanosecond ___SYM(18,___S_date_2d_nanosecond)
#define ___SYM_date_2d_second ___SYM(19,___S_date_2d_second)
#define ___SYM_date_2d_week_2d_day ___SYM(20,___S_date_2d_week_2d_day)
#define ___SYM_date_2d_week_2d_number ___SYM(21,___S_date_2d_week_2d_number)
#define ___SYM_date_2d_year ___SYM(22,___S_date_2d_year)
#define ___SYM_date_2d_year_2d_day ___SYM(23,___S_date_2d_year_2d_day)
#define ___SYM_date_2d_zone_2d_offset ___SYM(24,___S_date_2d_zone_2d_offset)
#define ___SYM_date_3f_ ___SYM(25,___S_date_3f_)
#define ___SYM_foundation_2e_dialect ___SYM(26,___S_foundation_2e_dialect)
#define ___SYM_jazz ___SYM(27,___S_jazz)
#define ___SYM_julian_2d_day_2d__3e_date ___SYM(28,___S_julian_2d_day_2d__3e_date)
#define ___SYM_julian_2d_day_2d__3e_time_2d_monotonic ___SYM(29,___S_julian_2d_day_2d__3e_time_2d_monotonic)
#define ___SYM_julian_2d_day_2d__3e_time_2d_tai ___SYM(30,___S_julian_2d_day_2d__3e_time_2d_tai)
#define ___SYM_julian_2d_day_2d__3e_time_2d_utc ___SYM(31,___S_julian_2d_day_2d__3e_time_2d_utc)
#define ___SYM_local_2d_timezone ___SYM(32,___S_local_2d_timezone)
#define ___SYM_local_2d_timezone_2d_set_21_ ___SYM(33,___S_local_2d_timezone_2d_set_21_)
#define ___SYM_make_2d_date ___SYM(34,___S_make_2d_date)
#define ___SYM_make_2d_time ___SYM(35,___S_make_2d_time)
#define ___SYM_modified_2d_julian_2d_day_2d__3e_date ___SYM(36,___S_modified_2d_julian_2d_day_2d__3e_date)
#define ___SYM_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic ___SYM(37,___S_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic)
#define ___SYM_modified_2d_julian_2d_day_2d__3e_time_2d_tai ___SYM(38,___S_modified_2d_julian_2d_day_2d__3e_time_2d_tai)
#define ___SYM_modified_2d_julian_2d_day_2d__3e_time_2d_utc ___SYM(39,___S_modified_2d_julian_2d_day_2d__3e_time_2d_utc)
#define ___SYM_public ___SYM(40,___S_public)
#define ___SYM_set_2d_time_2d_nanosecond_21_ ___SYM(41,___S_set_2d_time_2d_nanosecond_21_)
#define ___SYM_set_2d_time_2d_second_21_ ___SYM(42,___S_set_2d_time_2d_second_21_)
#define ___SYM_set_2d_time_2d_type_21_ ___SYM(43,___S_set_2d_time_2d_type_21_)
#define ___SYM_string_2d__3e_date ___SYM(44,___S_string_2d__3e_date)
#define ___SYM_subtract_2d_duration ___SYM(45,___S_subtract_2d_duration)
#define ___SYM_subtract_2d_duration_21_ ___SYM(46,___S_subtract_2d_duration_21_)
#define ___SYM_system_2d_timezone ___SYM(47,___S_system_2d_timezone)
#define ___SYM_system_2d_timezone_2d_set_21_ ___SYM(48,___S_system_2d_timezone_2d_set_21_)
#define ___SYM_time ___SYM(49,___S_time)
#define ___SYM_time_2d_difference ___SYM(50,___S_time_2d_difference)
#define ___SYM_time_2d_difference_21_ ___SYM(51,___S_time_2d_difference_21_)
#define ___SYM_time_2d_duration ___SYM(52,___S_time_2d_duration)
#define ___SYM_time_2d_monotonic ___SYM(53,___S_time_2d_monotonic)
#define ___SYM_time_2d_monotonic_2d__3e_date ___SYM(54,___S_time_2d_monotonic_2d__3e_date)
#define ___SYM_time_2d_monotonic_2d__3e_julian_2d_day ___SYM(55,___S_time_2d_monotonic_2d__3e_julian_2d_day)
#define ___SYM_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day ___SYM(56,___S_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_2d_monotonic_2d__3e_time_2d_tai ___SYM(57,___S_time_2d_monotonic_2d__3e_time_2d_tai)
#define ___SYM_time_2d_monotonic_2d__3e_time_2d_tai_21_ ___SYM(58,___S_time_2d_monotonic_2d__3e_time_2d_tai_21_)
#define ___SYM_time_2d_monotonic_2d__3e_time_2d_utc ___SYM(59,___S_time_2d_monotonic_2d__3e_time_2d_utc)
#define ___SYM_time_2d_monotonic_2d__3e_time_2d_utc_21_ ___SYM(60,___S_time_2d_monotonic_2d__3e_time_2d_utc_21_)
#define ___SYM_time_2d_nanosecond ___SYM(61,___S_time_2d_nanosecond)
#define ___SYM_time_2d_process ___SYM(62,___S_time_2d_process)
#define ___SYM_time_2d_resolution ___SYM(63,___S_time_2d_resolution)
#define ___SYM_time_2d_second ___SYM(64,___S_time_2d_second)
#define ___SYM_time_2d_tai ___SYM(65,___S_time_2d_tai)
#define ___SYM_time_2d_tai_2d__3e_date ___SYM(66,___S_time_2d_tai_2d__3e_date)
#define ___SYM_time_2d_tai_2d__3e_julian_2d_day ___SYM(67,___S_time_2d_tai_2d__3e_julian_2d_day)
#define ___SYM_time_2d_tai_2d__3e_modified_2d_julian_2d_day ___SYM(68,___S_time_2d_tai_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_2d_tai_2d__3e_time_2d_monotonic ___SYM(69,___S_time_2d_tai_2d__3e_time_2d_monotonic)
#define ___SYM_time_2d_tai_2d__3e_time_2d_monotonic_21_ ___SYM(70,___S_time_2d_tai_2d__3e_time_2d_monotonic_21_)
#define ___SYM_time_2d_tai_2d__3e_time_2d_utc ___SYM(71,___S_time_2d_tai_2d__3e_time_2d_utc)
#define ___SYM_time_2d_tai_2d__3e_time_2d_utc_21_ ___SYM(72,___S_time_2d_tai_2d__3e_time_2d_utc_21_)
#define ___SYM_time_2d_thread ___SYM(73,___S_time_2d_thread)
#define ___SYM_time_2d_type ___SYM(74,___S_time_2d_type)
#define ___SYM_time_2d_utc ___SYM(75,___S_time_2d_utc)
#define ___SYM_time_2d_utc_2d__3e_date ___SYM(76,___S_time_2d_utc_2d__3e_date)
#define ___SYM_time_2d_utc_2d__3e_julian_2d_day ___SYM(77,___S_time_2d_utc_2d__3e_julian_2d_day)
#define ___SYM_time_2d_utc_2d__3e_modified_2d_julian_2d_day ___SYM(78,___S_time_2d_utc_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_2d_utc_2d__3e_time_2d_monotonic ___SYM(79,___S_time_2d_utc_2d__3e_time_2d_monotonic)
#define ___SYM_time_2d_utc_2d__3e_time_2d_monotonic_21_ ___SYM(80,___S_time_2d_utc_2d__3e_time_2d_monotonic_21_)
#define ___SYM_time_2d_utc_2d__3e_time_2d_tai ___SYM(81,___S_time_2d_utc_2d__3e_time_2d_tai)
#define ___SYM_time_2d_utc_2d__3e_time_2d_tai_21_ ___SYM(82,___S_time_2d_utc_2d__3e_time_2d_tai_21_)
#define ___SYM_time_2e_implementation ___SYM(83,___S_time_2e_implementation)
#define ___SYM_time_3a_add_2d_duration ___SYM(84,___S_time_3a_add_2d_duration)
#define ___SYM_time_3a_add_2d_duration_21_ ___SYM(85,___S_time_3a_add_2d_duration_21_)
#define ___SYM_time_3a_copy_2d_time ___SYM(86,___S_time_3a_copy_2d_time)
#define ___SYM_time_3a_current_2d_date ___SYM(87,___S_time_3a_current_2d_date)
#define ___SYM_time_3a_current_2d_julian_2d_day ___SYM(88,___S_time_3a_current_2d_julian_2d_day)
#define ___SYM_time_3a_current_2d_modified_2d_julian_2d_day ___SYM(89,___S_time_3a_current_2d_modified_2d_julian_2d_day)
#define ___SYM_time_3a_current_2d_time ___SYM(90,___S_time_3a_current_2d_time)
#define ___SYM_time_3a_date_2d__3e_julian_2d_day ___SYM(91,___S_time_3a_date_2d__3e_julian_2d_day)
#define ___SYM_time_3a_date_2d__3e_modified_2d_julian_2d_day ___SYM(92,___S_time_3a_date_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_3a_date_2d__3e_string ___SYM(93,___S_time_3a_date_2d__3e_string)
#define ___SYM_time_3a_date_2d__3e_time_2d_monotonic ___SYM(94,___S_time_3a_date_2d__3e_time_2d_monotonic)
#define ___SYM_time_3a_date_2d__3e_time_2d_tai ___SYM(95,___S_time_3a_date_2d__3e_time_2d_tai)
#define ___SYM_time_3a_date_2d__3e_time_2d_utc ___SYM(96,___S_time_3a_date_2d__3e_time_2d_utc)
#define ___SYM_time_3a_date_2d_day ___SYM(97,___S_time_3a_date_2d_day)
#define ___SYM_time_3a_date_2d_hour ___SYM(98,___S_time_3a_date_2d_hour)
#define ___SYM_time_3a_date_2d_minute ___SYM(99,___S_time_3a_date_2d_minute)
#define ___SYM_time_3a_date_2d_month ___SYM(100,___S_time_3a_date_2d_month)
#define ___SYM_time_3a_date_2d_nanosecond ___SYM(101,___S_time_3a_date_2d_nanosecond)
#define ___SYM_time_3a_date_2d_second ___SYM(102,___S_time_3a_date_2d_second)
#define ___SYM_time_3a_date_2d_week_2d_day ___SYM(103,___S_time_3a_date_2d_week_2d_day)
#define ___SYM_time_3a_date_2d_week_2d_number ___SYM(104,___S_time_3a_date_2d_week_2d_number)
#define ___SYM_time_3a_date_2d_year ___SYM(105,___S_time_3a_date_2d_year)
#define ___SYM_time_3a_date_2d_year_2d_day ___SYM(106,___S_time_3a_date_2d_year_2d_day)
#define ___SYM_time_3a_date_2d_zone_2d_offset ___SYM(107,___S_time_3a_date_2d_zone_2d_offset)
#define ___SYM_time_3a_date_3f_ ___SYM(108,___S_time_3a_date_3f_)
#define ___SYM_time_3a_julian_2d_day_2d__3e_date ___SYM(109,___S_time_3a_julian_2d_day_2d__3e_date)
#define ___SYM_time_3a_julian_2d_day_2d__3e_time_2d_monotonic ___SYM(110,___S_time_3a_julian_2d_day_2d__3e_time_2d_monotonic)
#define ___SYM_time_3a_julian_2d_day_2d__3e_time_2d_tai ___SYM(111,___S_time_3a_julian_2d_day_2d__3e_time_2d_tai)
#define ___SYM_time_3a_julian_2d_day_2d__3e_time_2d_utc ___SYM(112,___S_time_3a_julian_2d_day_2d__3e_time_2d_utc)
#define ___SYM_time_3a_local_2d_timezone ___SYM(113,___S_time_3a_local_2d_timezone)
#define ___SYM_time_3a_local_2d_timezone_2d_set_21_ ___SYM(114,___S_time_3a_local_2d_timezone_2d_set_21_)
#define ___SYM_time_3a_make_2d_date ___SYM(115,___S_time_3a_make_2d_date)
#define ___SYM_time_3a_make_2d_time ___SYM(116,___S_time_3a_make_2d_time)
#define ___SYM_time_3a_modified_2d_julian_2d_day_2d__3e_date ___SYM(117,___S_time_3a_modified_2d_julian_2d_day_2d__3e_date)
#define ___SYM_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic ___SYM(118,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic)
#define ___SYM_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_tai ___SYM(119,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_tai)
#define ___SYM_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_utc ___SYM(120,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_utc)
#define ___SYM_time_3a_set_2d_time_2d_nanosecond_21_ ___SYM(121,___S_time_3a_set_2d_time_2d_nanosecond_21_)
#define ___SYM_time_3a_set_2d_time_2d_second_21_ ___SYM(122,___S_time_3a_set_2d_time_2d_second_21_)
#define ___SYM_time_3a_set_2d_time_2d_type_21_ ___SYM(123,___S_time_3a_set_2d_time_2d_type_21_)
#define ___SYM_time_3a_string_2d__3e_date ___SYM(124,___S_time_3a_string_2d__3e_date)
#define ___SYM_time_3a_subtract_2d_duration ___SYM(125,___S_time_3a_subtract_2d_duration)
#define ___SYM_time_3a_subtract_2d_duration_21_ ___SYM(126,___S_time_3a_subtract_2d_duration_21_)
#define ___SYM_time_3a_system_2d_timezone ___SYM(127,___S_time_3a_system_2d_timezone)
#define ___SYM_time_3a_system_2d_timezone_2d_set_21_ ___SYM(128,___S_time_3a_system_2d_timezone_2d_set_21_)
#define ___SYM_time_3a_time_2d_difference ___SYM(129,___S_time_3a_time_2d_difference)
#define ___SYM_time_3a_time_2d_difference_21_ ___SYM(130,___S_time_3a_time_2d_difference_21_)
#define ___SYM_time_3a_time_2d_duration ___SYM(131,___S_time_3a_time_2d_duration)
#define ___SYM_time_3a_time_2d_monotonic ___SYM(132,___S_time_3a_time_2d_monotonic)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_date ___SYM(133,___S_time_3a_time_2d_monotonic_2d__3e_date)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_julian_2d_day ___SYM(134,___S_time_3a_time_2d_monotonic_2d__3e_julian_2d_day)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day ___SYM(135,___S_time_3a_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_time_2d_tai ___SYM(136,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_time_2d_tai_21_ ___SYM(137,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai_21_)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_time_2d_utc ___SYM(138,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc)
#define ___SYM_time_3a_time_2d_monotonic_2d__3e_time_2d_utc_21_ ___SYM(139,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc_21_)
#define ___SYM_time_3a_time_2d_nanosecond ___SYM(140,___S_time_3a_time_2d_nanosecond)
#define ___SYM_time_3a_time_2d_process ___SYM(141,___S_time_3a_time_2d_process)
#define ___SYM_time_3a_time_2d_resolution ___SYM(142,___S_time_3a_time_2d_resolution)
#define ___SYM_time_3a_time_2d_second ___SYM(143,___S_time_3a_time_2d_second)
#define ___SYM_time_3a_time_2d_tai ___SYM(144,___S_time_3a_time_2d_tai)
#define ___SYM_time_3a_time_2d_tai_2d__3e_date ___SYM(145,___S_time_3a_time_2d_tai_2d__3e_date)
#define ___SYM_time_3a_time_2d_tai_2d__3e_julian_2d_day ___SYM(146,___S_time_3a_time_2d_tai_2d__3e_julian_2d_day)
#define ___SYM_time_3a_time_2d_tai_2d__3e_modified_2d_julian_2d_day ___SYM(147,___S_time_3a_time_2d_tai_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_3a_time_2d_tai_2d__3e_time_2d_monotonic ___SYM(148,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic)
#define ___SYM_time_3a_time_2d_tai_2d__3e_time_2d_monotonic_21_ ___SYM(149,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic_21_)
#define ___SYM_time_3a_time_2d_tai_2d__3e_time_2d_utc ___SYM(150,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc)
#define ___SYM_time_3a_time_2d_tai_2d__3e_time_2d_utc_21_ ___SYM(151,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc_21_)
#define ___SYM_time_3a_time_2d_thread ___SYM(152,___S_time_3a_time_2d_thread)
#define ___SYM_time_3a_time_2d_type ___SYM(153,___S_time_3a_time_2d_type)
#define ___SYM_time_3a_time_2d_utc ___SYM(154,___S_time_3a_time_2d_utc)
#define ___SYM_time_3a_time_2d_utc_2d__3e_date ___SYM(155,___S_time_3a_time_2d_utc_2d__3e_date)
#define ___SYM_time_3a_time_2d_utc_2d__3e_julian_2d_day ___SYM(156,___S_time_3a_time_2d_utc_2d__3e_julian_2d_day)
#define ___SYM_time_3a_time_2d_utc_2d__3e_modified_2d_julian_2d_day ___SYM(157,___S_time_3a_time_2d_utc_2d__3e_modified_2d_julian_2d_day)
#define ___SYM_time_3a_time_2d_utc_2d__3e_time_2d_monotonic ___SYM(158,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic)
#define ___SYM_time_3a_time_2d_utc_2d__3e_time_2d_monotonic_21_ ___SYM(159,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic_21_)
#define ___SYM_time_3a_time_2d_utc_2d__3e_time_2d_tai ___SYM(160,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai)
#define ___SYM_time_3a_time_2d_utc_2d__3e_time_2d_tai_21_ ___SYM(161,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai_21_)
#define ___SYM_time_3a_time_3c__3d__3f_ ___SYM(162,___S_time_3a_time_3c__3d__3f_)
#define ___SYM_time_3a_time_3c__3f_ ___SYM(163,___S_time_3a_time_3c__3f_)
#define ___SYM_time_3a_time_3d__3f_ ___SYM(164,___S_time_3a_time_3d__3f_)
#define ___SYM_time_3a_time_3e__3d__3f_ ___SYM(165,___S_time_3a_time_3e__3d__3f_)
#define ___SYM_time_3a_time_3e__3f_ ___SYM(166,___S_time_3a_time_3e__3f_)
#define ___SYM_time_3a_time_3f_ ___SYM(167,___S_time_3a_time_3f_)
#define ___SYM_time_3a_tm_2d_current_2d_time ___SYM(168,___S_time_3a_tm_2d_current_2d_time)
#define ___SYM_time_3c__3d__3f_ ___SYM(169,___S_time_3c__3d__3f_)
#define ___SYM_time_3c__3f_ ___SYM(170,___S_time_3c__3f_)
#define ___SYM_time_3d__3f_ ___SYM(171,___S_time_3d__3f_)
#define ___SYM_time_3e__3d__3f_ ___SYM(172,___S_time_3e__3d__3f_)
#define ___SYM_time_3e__3f_ ___SYM(173,___S_time_3e__3f_)
#define ___SYM_time_3f_ ___SYM(174,___S_time_3f_)
#define ___SYM_tm_2d_current_2d_time ___SYM(175,___S_tm_2d_current_2d_time)

___BEGIN_GLO
___DEF_GLO(0,"bin:time#")
___DEF_GLO(1,"time:current-time")
___DEF_GLO(2,"jazz:load-unit")
___DEF_GLO(3,"jazz:register-module")
___DEF_GLO(4,"tm-current-time")
___END_GLO

#define ___GLO_bin_3a_time_23_ ___GLO(0,___G_bin_3a_time_23_)
#define ___PRM_bin_3a_time_23_ ___PRM(0,___G_bin_3a_time_23_)
#define ___GLO_time_3a_current_2d_time ___GLO(1,___G_time_3a_current_2d_time)
#define ___PRM_time_3a_current_2d_time ___PRM(1,___G_time_3a_current_2d_time)
#define ___GLO_jazz_3a_load_2d_unit ___GLO(2,___G_jazz_3a_load_2d_unit)
#define ___PRM_jazz_3a_load_2d_unit ___PRM(2,___G_jazz_3a_load_2d_unit)
#define ___GLO_jazz_3a_register_2d_module ___GLO(3,___G_jazz_3a_register_2d_module)
#define ___PRM_jazz_3a_register_2d_module ___PRM(3,___G_jazz_3a_register_2d_module)
#define ___GLO_tm_2d_current_2d_time ___GLO(4,___G_tm_2d_current_2d_time)
#define ___PRM_tm_2d_current_2d_time ___PRM(4,___G_tm_2d_current_2d_time)

___BEGIN_CNS
 ___DEF_CNS(___REF_CNS(1),___REF_CNS(2))
,___DEF_CNS(___REF_SYM(0,___S_add_2d_duration),___REF_SYM(84,___S_time_3a_add_2d_duration))
,___DEF_CNS(___REF_CNS(3),___REF_CNS(4))
,___DEF_CNS(___REF_SYM(1,___S_add_2d_duration_21_),___REF_SYM(85,___S_time_3a_add_2d_duration_21_))
,___DEF_CNS(___REF_CNS(5),___REF_CNS(6))
,___DEF_CNS(___REF_SYM(3,___S_copy_2d_time),___REF_SYM(86,___S_time_3a_copy_2d_time))
,___DEF_CNS(___REF_CNS(7),___REF_CNS(8))
,___DEF_CNS(___REF_SYM(4,___S_current_2d_date),___REF_SYM(87,___S_time_3a_current_2d_date))
,___DEF_CNS(___REF_CNS(9),___REF_CNS(10))
,___DEF_CNS(___REF_SYM(5,___S_current_2d_julian_2d_day),___REF_SYM(88,___S_time_3a_current_2d_julian_2d_day))
,___DEF_CNS(___REF_CNS(11),___REF_CNS(12))
,___DEF_CNS(___REF_SYM(6,___S_current_2d_modified_2d_julian_2d_day),___REF_SYM(89,___S_time_3a_current_2d_modified_2d_julian_2d_day))
,___DEF_CNS(___REF_CNS(13),___REF_CNS(14))
,___DEF_CNS(___REF_SYM(7,___S_current_2d_time),___REF_SYM(90,___S_time_3a_current_2d_time))
,___DEF_CNS(___REF_CNS(15),___REF_CNS(16))
,___DEF_CNS(___REF_SYM(8,___S_date_2d__3e_julian_2d_day),___REF_SYM(91,___S_time_3a_date_2d__3e_julian_2d_day))
,___DEF_CNS(___REF_CNS(17),___REF_CNS(18))
,___DEF_CNS(___REF_SYM(9,___S_date_2d__3e_modified_2d_julian_2d_day),___REF_SYM(92,___S_time_3a_date_2d__3e_modified_2d_julian_2d_day))
,___DEF_CNS(___REF_CNS(19),___REF_CNS(20))
,___DEF_CNS(___REF_SYM(10,___S_date_2d__3e_string),___REF_SYM(93,___S_time_3a_date_2d__3e_string))
,___DEF_CNS(___REF_CNS(21),___REF_CNS(22))
,___DEF_CNS(___REF_SYM(11,___S_date_2d__3e_time_2d_monotonic),___REF_SYM(94,___S_time_3a_date_2d__3e_time_2d_monotonic))
,___DEF_CNS(___REF_CNS(23),___REF_CNS(24))
,___DEF_CNS(___REF_SYM(12,___S_date_2d__3e_time_2d_tai),___REF_SYM(95,___S_time_3a_date_2d__3e_time_2d_tai))
,___DEF_CNS(___REF_CNS(25),___REF_CNS(26))
,___DEF_CNS(___REF_SYM(13,___S_date_2d__3e_time_2d_utc),___REF_SYM(96,___S_time_3a_date_2d__3e_time_2d_utc))
,___DEF_CNS(___REF_CNS(27),___REF_CNS(28))
,___DEF_CNS(___REF_SYM(14,___S_date_2d_day),___REF_SYM(97,___S_time_3a_date_2d_day))
,___DEF_CNS(___REF_CNS(29),___REF_CNS(30))
,___DEF_CNS(___REF_SYM(15,___S_date_2d_hour),___REF_SYM(98,___S_time_3a_date_2d_hour))
,___DEF_CNS(___REF_CNS(31),___REF_CNS(32))
,___DEF_CNS(___REF_SYM(16,___S_date_2d_minute),___REF_SYM(99,___S_time_3a_date_2d_minute))
,___DEF_CNS(___REF_CNS(33),___REF_CNS(34))
,___DEF_CNS(___REF_SYM(17,___S_date_2d_month),___REF_SYM(100,___S_time_3a_date_2d_month))
,___DEF_CNS(___REF_CNS(35),___REF_CNS(36))
,___DEF_CNS(___REF_SYM(18,___S_date_2d_nanosecond),___REF_SYM(101,___S_time_3a_date_2d_nanosecond))
,___DEF_CNS(___REF_CNS(37),___REF_CNS(38))
,___DEF_CNS(___REF_SYM(19,___S_date_2d_second),___REF_SYM(102,___S_time_3a_date_2d_second))
,___DEF_CNS(___REF_CNS(39),___REF_CNS(40))
,___DEF_CNS(___REF_SYM(20,___S_date_2d_week_2d_day),___REF_SYM(103,___S_time_3a_date_2d_week_2d_day))
,___DEF_CNS(___REF_CNS(41),___REF_CNS(42))
,___DEF_CNS(___REF_SYM(21,___S_date_2d_week_2d_number),___REF_SYM(104,___S_time_3a_date_2d_week_2d_number))
,___DEF_CNS(___REF_CNS(43),___REF_CNS(44))
,___DEF_CNS(___REF_SYM(22,___S_date_2d_year),___REF_SYM(105,___S_time_3a_date_2d_year))
,___DEF_CNS(___REF_CNS(45),___REF_CNS(46))
,___DEF_CNS(___REF_SYM(23,___S_date_2d_year_2d_day),___REF_SYM(106,___S_time_3a_date_2d_year_2d_day))
,___DEF_CNS(___REF_CNS(47),___REF_CNS(48))
,___DEF_CNS(___REF_SYM(24,___S_date_2d_zone_2d_offset),___REF_SYM(107,___S_time_3a_date_2d_zone_2d_offset))
,___DEF_CNS(___REF_CNS(49),___REF_CNS(50))
,___DEF_CNS(___REF_SYM(25,___S_date_3f_),___REF_SYM(108,___S_time_3a_date_3f_))
,___DEF_CNS(___REF_CNS(51),___REF_CNS(52))
,___DEF_CNS(___REF_SYM(28,___S_julian_2d_day_2d__3e_date),___REF_SYM(109,___S_time_3a_julian_2d_day_2d__3e_date))
,___DEF_CNS(___REF_CNS(53),___REF_CNS(54))
,___DEF_CNS(___REF_SYM(29,___S_julian_2d_day_2d__3e_time_2d_monotonic),___REF_SYM(110,___S_time_3a_julian_2d_day_2d__3e_time_2d_monotonic))
,___DEF_CNS(___REF_CNS(55),___REF_CNS(56))
,___DEF_CNS(___REF_SYM(30,___S_julian_2d_day_2d__3e_time_2d_tai),___REF_SYM(111,___S_time_3a_julian_2d_day_2d__3e_time_2d_tai))
,___DEF_CNS(___REF_CNS(57),___REF_CNS(58))
,___DEF_CNS(___REF_SYM(31,___S_julian_2d_day_2d__3e_time_2d_utc),___REF_SYM(112,___S_time_3a_julian_2d_day_2d__3e_time_2d_utc))
,___DEF_CNS(___REF_CNS(59),___REF_CNS(60))
,___DEF_CNS(___REF_SYM(32,___S_local_2d_timezone),___REF_SYM(113,___S_time_3a_local_2d_timezone))
,___DEF_CNS(___REF_CNS(61),___REF_CNS(62))
,___DEF_CNS(___REF_SYM(33,___S_local_2d_timezone_2d_set_21_),___REF_SYM(114,___S_time_3a_local_2d_timezone_2d_set_21_))
,___DEF_CNS(___REF_CNS(63),___REF_CNS(64))
,___DEF_CNS(___REF_SYM(34,___S_make_2d_date),___REF_SYM(115,___S_time_3a_make_2d_date))
,___DEF_CNS(___REF_CNS(65),___REF_CNS(66))
,___DEF_CNS(___REF_SYM(35,___S_make_2d_time),___REF_SYM(116,___S_time_3a_make_2d_time))
,___DEF_CNS(___REF_CNS(67),___REF_CNS(68))
,___DEF_CNS(___REF_SYM(36,___S_modified_2d_julian_2d_day_2d__3e_date),___REF_SYM(117,___S_time_3a_modified_2d_julian_2d_day_2d__3e_date))
,___DEF_CNS(___REF_CNS(69),___REF_CNS(70))
,___DEF_CNS(___REF_SYM(37,___S_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic),___REF_SYM(118,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic))
,___DEF_CNS(___REF_CNS(71),___REF_CNS(72))
,___DEF_CNS(___REF_SYM(38,___S_modified_2d_julian_2d_day_2d__3e_time_2d_tai),___REF_SYM(119,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_tai))
,___DEF_CNS(___REF_CNS(73),___REF_CNS(74))
,___DEF_CNS(___REF_SYM(39,___S_modified_2d_julian_2d_day_2d__3e_time_2d_utc),___REF_SYM(120,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_utc))
,___DEF_CNS(___REF_CNS(75),___REF_CNS(76))
,___DEF_CNS(___REF_SYM(41,___S_set_2d_time_2d_nanosecond_21_),___REF_SYM(121,___S_time_3a_set_2d_time_2d_nanosecond_21_))
,___DEF_CNS(___REF_CNS(77),___REF_CNS(78))
,___DEF_CNS(___REF_SYM(42,___S_set_2d_time_2d_second_21_),___REF_SYM(122,___S_time_3a_set_2d_time_2d_second_21_))
,___DEF_CNS(___REF_CNS(79),___REF_CNS(80))
,___DEF_CNS(___REF_SYM(43,___S_set_2d_time_2d_type_21_),___REF_SYM(123,___S_time_3a_set_2d_time_2d_type_21_))
,___DEF_CNS(___REF_CNS(81),___REF_CNS(82))
,___DEF_CNS(___REF_SYM(44,___S_string_2d__3e_date),___REF_SYM(124,___S_time_3a_string_2d__3e_date))
,___DEF_CNS(___REF_CNS(83),___REF_CNS(84))
,___DEF_CNS(___REF_SYM(45,___S_subtract_2d_duration),___REF_SYM(125,___S_time_3a_subtract_2d_duration))
,___DEF_CNS(___REF_CNS(85),___REF_CNS(86))
,___DEF_CNS(___REF_SYM(46,___S_subtract_2d_duration_21_),___REF_SYM(126,___S_time_3a_subtract_2d_duration_21_))
,___DEF_CNS(___REF_CNS(87),___REF_CNS(88))
,___DEF_CNS(___REF_SYM(47,___S_system_2d_timezone),___REF_SYM(127,___S_time_3a_system_2d_timezone))
,___DEF_CNS(___REF_CNS(89),___REF_CNS(90))
,___DEF_CNS(___REF_SYM(48,___S_system_2d_timezone_2d_set_21_),___REF_SYM(128,___S_time_3a_system_2d_timezone_2d_set_21_))
,___DEF_CNS(___REF_CNS(91),___REF_CNS(92))
,___DEF_CNS(___REF_SYM(50,___S_time_2d_difference),___REF_SYM(129,___S_time_3a_time_2d_difference))
,___DEF_CNS(___REF_CNS(93),___REF_CNS(94))
,___DEF_CNS(___REF_SYM(51,___S_time_2d_difference_21_),___REF_SYM(130,___S_time_3a_time_2d_difference_21_))
,___DEF_CNS(___REF_CNS(95),___REF_CNS(96))
,___DEF_CNS(___REF_SYM(52,___S_time_2d_duration),___REF_SYM(131,___S_time_3a_time_2d_duration))
,___DEF_CNS(___REF_CNS(97),___REF_CNS(98))
,___DEF_CNS(___REF_SYM(53,___S_time_2d_monotonic),___REF_SYM(132,___S_time_3a_time_2d_monotonic))
,___DEF_CNS(___REF_CNS(99),___REF_CNS(100))
,___DEF_CNS(___REF_SYM(54,___S_time_2d_monotonic_2d__3e_date),___REF_SYM(133,___S_time_3a_time_2d_monotonic_2d__3e_date))
,___DEF_CNS(___REF_CNS(101),___REF_CNS(102))
,___DEF_CNS(___REF_SYM(55,___S_time_2d_monotonic_2d__3e_julian_2d_day),___REF_SYM(134,___S_time_3a_time_2d_monotonic_2d__3e_julian_2d_day))
,___DEF_CNS(___REF_CNS(103),___REF_CNS(104))
,___DEF_CNS(___REF_SYM(56,___S_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day),___REF_SYM(135,___S_time_3a_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day))
,___DEF_CNS(___REF_CNS(105),___REF_CNS(106))
,___DEF_CNS(___REF_SYM(57,___S_time_2d_monotonic_2d__3e_time_2d_tai),___REF_SYM(136,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai))
,___DEF_CNS(___REF_CNS(107),___REF_CNS(108))
,___DEF_CNS(___REF_SYM(58,___S_time_2d_monotonic_2d__3e_time_2d_tai_21_),___REF_SYM(137,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai_21_))
,___DEF_CNS(___REF_CNS(109),___REF_CNS(110))
,___DEF_CNS(___REF_SYM(59,___S_time_2d_monotonic_2d__3e_time_2d_utc),___REF_SYM(138,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc))
,___DEF_CNS(___REF_CNS(111),___REF_CNS(112))
,___DEF_CNS(___REF_SYM(60,___S_time_2d_monotonic_2d__3e_time_2d_utc_21_),___REF_SYM(139,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc_21_))
,___DEF_CNS(___REF_CNS(113),___REF_CNS(114))
,___DEF_CNS(___REF_SYM(61,___S_time_2d_nanosecond),___REF_SYM(140,___S_time_3a_time_2d_nanosecond))
,___DEF_CNS(___REF_CNS(115),___REF_CNS(116))
,___DEF_CNS(___REF_SYM(62,___S_time_2d_process),___REF_SYM(141,___S_time_3a_time_2d_process))
,___DEF_CNS(___REF_CNS(117),___REF_CNS(118))
,___DEF_CNS(___REF_SYM(63,___S_time_2d_resolution),___REF_SYM(142,___S_time_3a_time_2d_resolution))
,___DEF_CNS(___REF_CNS(119),___REF_CNS(120))
,___DEF_CNS(___REF_SYM(64,___S_time_2d_second),___REF_SYM(143,___S_time_3a_time_2d_second))
,___DEF_CNS(___REF_CNS(121),___REF_CNS(122))
,___DEF_CNS(___REF_SYM(65,___S_time_2d_tai),___REF_SYM(144,___S_time_3a_time_2d_tai))
,___DEF_CNS(___REF_CNS(123),___REF_CNS(124))
,___DEF_CNS(___REF_SYM(66,___S_time_2d_tai_2d__3e_date),___REF_SYM(145,___S_time_3a_time_2d_tai_2d__3e_date))
,___DEF_CNS(___REF_CNS(125),___REF_CNS(126))
,___DEF_CNS(___REF_SYM(67,___S_time_2d_tai_2d__3e_julian_2d_day),___REF_SYM(146,___S_time_3a_time_2d_tai_2d__3e_julian_2d_day))
,___DEF_CNS(___REF_CNS(127),___REF_CNS(128))
,___DEF_CNS(___REF_SYM(68,___S_time_2d_tai_2d__3e_modified_2d_julian_2d_day),___REF_SYM(147,___S_time_3a_time_2d_tai_2d__3e_modified_2d_julian_2d_day))
,___DEF_CNS(___REF_CNS(129),___REF_CNS(130))
,___DEF_CNS(___REF_SYM(69,___S_time_2d_tai_2d__3e_time_2d_monotonic),___REF_SYM(148,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic))
,___DEF_CNS(___REF_CNS(131),___REF_CNS(132))
,___DEF_CNS(___REF_SYM(70,___S_time_2d_tai_2d__3e_time_2d_monotonic_21_),___REF_SYM(149,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic_21_))
,___DEF_CNS(___REF_CNS(133),___REF_CNS(134))
,___DEF_CNS(___REF_SYM(71,___S_time_2d_tai_2d__3e_time_2d_utc),___REF_SYM(150,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc))
,___DEF_CNS(___REF_CNS(135),___REF_CNS(136))
,___DEF_CNS(___REF_SYM(72,___S_time_2d_tai_2d__3e_time_2d_utc_21_),___REF_SYM(151,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc_21_))
,___DEF_CNS(___REF_CNS(137),___REF_CNS(138))
,___DEF_CNS(___REF_SYM(73,___S_time_2d_thread),___REF_SYM(152,___S_time_3a_time_2d_thread))
,___DEF_CNS(___REF_CNS(139),___REF_CNS(140))
,___DEF_CNS(___REF_SYM(74,___S_time_2d_type),___REF_SYM(153,___S_time_3a_time_2d_type))
,___DEF_CNS(___REF_CNS(141),___REF_CNS(142))
,___DEF_CNS(___REF_SYM(75,___S_time_2d_utc),___REF_SYM(154,___S_time_3a_time_2d_utc))
,___DEF_CNS(___REF_CNS(143),___REF_CNS(144))
,___DEF_CNS(___REF_SYM(76,___S_time_2d_utc_2d__3e_date),___REF_SYM(155,___S_time_3a_time_2d_utc_2d__3e_date))
,___DEF_CNS(___REF_CNS(145),___REF_CNS(146))
,___DEF_CNS(___REF_SYM(77,___S_time_2d_utc_2d__3e_julian_2d_day),___REF_SYM(156,___S_time_3a_time_2d_utc_2d__3e_julian_2d_day))
,___DEF_CNS(___REF_CNS(147),___REF_CNS(148))
,___DEF_CNS(___REF_SYM(78,___S_time_2d_utc_2d__3e_modified_2d_julian_2d_day),___REF_SYM(157,___S_time_3a_time_2d_utc_2d__3e_modified_2d_julian_2d_day))
,___DEF_CNS(___REF_CNS(149),___REF_CNS(150))
,___DEF_CNS(___REF_SYM(79,___S_time_2d_utc_2d__3e_time_2d_monotonic),___REF_SYM(158,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic))
,___DEF_CNS(___REF_CNS(151),___REF_CNS(152))
,___DEF_CNS(___REF_SYM(80,___S_time_2d_utc_2d__3e_time_2d_monotonic_21_),___REF_SYM(159,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic_21_))
,___DEF_CNS(___REF_CNS(153),___REF_CNS(154))
,___DEF_CNS(___REF_SYM(81,___S_time_2d_utc_2d__3e_time_2d_tai),___REF_SYM(160,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai))
,___DEF_CNS(___REF_CNS(155),___REF_CNS(156))
,___DEF_CNS(___REF_SYM(82,___S_time_2d_utc_2d__3e_time_2d_tai_21_),___REF_SYM(161,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai_21_))
,___DEF_CNS(___REF_CNS(157),___REF_CNS(158))
,___DEF_CNS(___REF_SYM(169,___S_time_3c__3d__3f_),___REF_SYM(162,___S_time_3a_time_3c__3d__3f_))
,___DEF_CNS(___REF_CNS(159),___REF_CNS(160))
,___DEF_CNS(___REF_SYM(170,___S_time_3c__3f_),___REF_SYM(163,___S_time_3a_time_3c__3f_))
,___DEF_CNS(___REF_CNS(161),___REF_CNS(162))
,___DEF_CNS(___REF_SYM(171,___S_time_3d__3f_),___REF_SYM(164,___S_time_3a_time_3d__3f_))
,___DEF_CNS(___REF_CNS(163),___REF_CNS(164))
,___DEF_CNS(___REF_SYM(172,___S_time_3e__3d__3f_),___REF_SYM(165,___S_time_3a_time_3e__3d__3f_))
,___DEF_CNS(___REF_CNS(165),___REF_CNS(166))
,___DEF_CNS(___REF_SYM(173,___S_time_3e__3f_),___REF_SYM(166,___S_time_3a_time_3e__3f_))
,___DEF_CNS(___REF_CNS(167),___REF_CNS(168))
,___DEF_CNS(___REF_SYM(174,___S_time_3f_),___REF_SYM(167,___S_time_3a_time_3f_))
,___DEF_CNS(___REF_CNS(169),___REF_NUL)
,___DEF_CNS(___REF_SYM(175,___S_tm_2d_current_2d_time),___REF_SYM(168,___S_time_3a_tm_2d_current_2d_time))
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
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X4,2UL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_SUB(5))
               ___VEC0
___DEF_SUB_VEC(___X5,2UL)
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X6,2UL)
               ___VEC1(___REF_FIX(2))
               ___VEC1(___REF_SUB(7))
               ___VEC0
___DEF_SUB_VEC(___X7,2UL)
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X8,2UL)
               ___VEC1(___REF_FIX(3))
               ___VEC1(___REF_SUB(9))
               ___VEC0
___DEF_SUB_VEC(___X9,2UL)
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X10,2UL)
               ___VEC1(___REF_FIX(4))
               ___VEC1(___REF_SUB(11))
               ___VEC0
___DEF_SUB_VEC(___X11,2UL)
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X12,2UL)
               ___VEC1(___REF_FIX(5))
               ___VEC1(___REF_SUB(13))
               ___VEC0
___DEF_SUB_VEC(___X13,2UL)
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(37))
               ___VEC0
___DEF_SUB_VEC(___X14,2UL)
               ___VEC1(___REF_FIX(6))
               ___VEC1(___REF_SUB(15))
               ___VEC0
___DEF_SUB_VEC(___X15,2UL)
               ___VEC1(___REF_SYM(49,___S_time))
               ___VEC1(___REF_FIX(65))
               ___VEC0
___DEF_SUB_VEC(___X16,0UL)
               ___VEC0
___DEF_SUB_VEC(___X17,5UL)
               ___VEC1(___REF_SYM(2,___S_bin_3a_time))
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
___DEF_M_HLBL(___L0_bin_3a_time_23_)
___DEF_M_HLBL(___L1_bin_3a_time_23_)
___DEF_M_HLBL(___L2_bin_3a_time_23_)
___DEF_M_HLBL(___L3_bin_3a_time_23_)
___DEF_M_HLBL(___L4_bin_3a_time_23_)
___DEF_M_HLBL(___L5_bin_3a_time_23_)
___DEF_M_HLBL(___L6_bin_3a_time_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_bin_3a_time_23_
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
___DEF_P_HLBL(___L0_bin_3a_time_23_)
___DEF_P_HLBL(___L1_bin_3a_time_23_)
___DEF_P_HLBL(___L2_bin_3a_time_23_)
___DEF_P_HLBL(___L3_bin_3a_time_23_)
___DEF_P_HLBL(___L4_bin_3a_time_23_)
___DEF_P_HLBL(___L5_bin_3a_time_23_)
___DEF_P_HLBL(___L6_bin_3a_time_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_bin_3a_time_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_bin_3a_time_23_)
   ___SET_STK(1,___R0)
   ___SET_R1(___SYM_foundation_2e_dialect)
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_bin_3a_time_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(2,___L2_bin_3a_time_23_)
   ___SET_R1(___SYM_jazz)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(3,___L3_bin_3a_time_23_)
   ___SET_R1(___SYM_time_2e_implementation)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_jazz_3a_load_2d_unit)
___DEF_SLBL(4,___L4_bin_3a_time_23_)
   ___SET_STK(1,___SYM_time)
   ___SET_R3(___CNS(0))
   ___SET_R2(___NUL)
   ___SET_R1(___SYM_public)
   ___SET_R0(___LBL(5))
   ___ADJFP(1)
   ___JUMPGLOSAFE(___SET_NARGS(4),3,___G_jazz_3a_register_2d_module)
___DEF_SLBL(5,___L5_bin_3a_time_23_)
   ___SET_GLO(1,___G_time_3a_current_2d_time,___GLO_tm_2d_current_2d_time)
   ___SET_R1(___VOID)
   ___POLL(6)
___DEF_SLBL(6,___L6_bin_3a_time_23_)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_bin_3a_time_23_,"bin:time#",___REF_SUB(0),7,0)
,___DEF_LBL_PROC(___H_bin_3a_time_23_,0,-1)
,___DEF_LBL_RET(___H_bin_3a_time_23_,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_bin_3a_time_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_time_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_time_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_time_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_bin_3a_time_23_,___IFD(___RETI,4,0,0x3f1L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_bin_3a_time_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_bin_3a_time_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_add_2d_duration,"add-duration")
___DEF_MOD_SYM(1,___S_add_2d_duration_21_,"add-duration!")
___DEF_MOD_SYM(2,___S_bin_3a_time,"bin:time")
___DEF_MOD_SYM(3,___S_copy_2d_time,"copy-time")
___DEF_MOD_SYM(4,___S_current_2d_date,"current-date")
___DEF_MOD_SYM(5,___S_current_2d_julian_2d_day,"current-julian-day")
___DEF_MOD_SYM(6,___S_current_2d_modified_2d_julian_2d_day,"current-modified-julian-day")
___DEF_MOD_SYM(7,___S_current_2d_time,"current-time")
___DEF_MOD_SYM(8,___S_date_2d__3e_julian_2d_day,"date->julian-day")
___DEF_MOD_SYM(9,___S_date_2d__3e_modified_2d_julian_2d_day,"date->modified-julian-day")
___DEF_MOD_SYM(10,___S_date_2d__3e_string,"date->string")
___DEF_MOD_SYM(11,___S_date_2d__3e_time_2d_monotonic,"date->time-monotonic")
___DEF_MOD_SYM(12,___S_date_2d__3e_time_2d_tai,"date->time-tai")
___DEF_MOD_SYM(13,___S_date_2d__3e_time_2d_utc,"date->time-utc")
___DEF_MOD_SYM(14,___S_date_2d_day,"date-day")
___DEF_MOD_SYM(15,___S_date_2d_hour,"date-hour")
___DEF_MOD_SYM(16,___S_date_2d_minute,"date-minute")
___DEF_MOD_SYM(17,___S_date_2d_month,"date-month")
___DEF_MOD_SYM(18,___S_date_2d_nanosecond,"date-nanosecond")
___DEF_MOD_SYM(19,___S_date_2d_second,"date-second")
___DEF_MOD_SYM(20,___S_date_2d_week_2d_day,"date-week-day")
___DEF_MOD_SYM(21,___S_date_2d_week_2d_number,"date-week-number")
___DEF_MOD_SYM(22,___S_date_2d_year,"date-year")
___DEF_MOD_SYM(23,___S_date_2d_year_2d_day,"date-year-day")
___DEF_MOD_SYM(24,___S_date_2d_zone_2d_offset,"date-zone-offset")
___DEF_MOD_SYM(25,___S_date_3f_,"date?")
___DEF_MOD_SYM(26,___S_foundation_2e_dialect,"foundation.dialect")
___DEF_MOD_SYM(27,___S_jazz,"jazz")
___DEF_MOD_SYM(28,___S_julian_2d_day_2d__3e_date,"julian-day->date")
___DEF_MOD_SYM(29,___S_julian_2d_day_2d__3e_time_2d_monotonic,"julian-day->time-monotonic")
___DEF_MOD_SYM(30,___S_julian_2d_day_2d__3e_time_2d_tai,"julian-day->time-tai")
___DEF_MOD_SYM(31,___S_julian_2d_day_2d__3e_time_2d_utc,"julian-day->time-utc")
___DEF_MOD_SYM(32,___S_local_2d_timezone,"local-timezone")
___DEF_MOD_SYM(33,___S_local_2d_timezone_2d_set_21_,"local-timezone-set!")
___DEF_MOD_SYM(34,___S_make_2d_date,"make-date")
___DEF_MOD_SYM(35,___S_make_2d_time,"make-time")
___DEF_MOD_SYM(36,___S_modified_2d_julian_2d_day_2d__3e_date,"modified-julian-day->date")
___DEF_MOD_SYM(37,___S_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic,"modified-julian-day->time-monotonic")

___DEF_MOD_SYM(38,___S_modified_2d_julian_2d_day_2d__3e_time_2d_tai,"modified-julian-day->time-tai")

___DEF_MOD_SYM(39,___S_modified_2d_julian_2d_day_2d__3e_time_2d_utc,"modified-julian-day->time-utc")

___DEF_MOD_SYM(40,___S_public,"public")
___DEF_MOD_SYM(41,___S_set_2d_time_2d_nanosecond_21_,"set-time-nanosecond!")
___DEF_MOD_SYM(42,___S_set_2d_time_2d_second_21_,"set-time-second!")
___DEF_MOD_SYM(43,___S_set_2d_time_2d_type_21_,"set-time-type!")
___DEF_MOD_SYM(44,___S_string_2d__3e_date,"string->date")
___DEF_MOD_SYM(45,___S_subtract_2d_duration,"subtract-duration")
___DEF_MOD_SYM(46,___S_subtract_2d_duration_21_,"subtract-duration!")
___DEF_MOD_SYM(47,___S_system_2d_timezone,"system-timezone")
___DEF_MOD_SYM(48,___S_system_2d_timezone_2d_set_21_,"system-timezone-set!")
___DEF_MOD_SYM(49,___S_time,"time")
___DEF_MOD_SYM(50,___S_time_2d_difference,"time-difference")
___DEF_MOD_SYM(51,___S_time_2d_difference_21_,"time-difference!")
___DEF_MOD_SYM(52,___S_time_2d_duration,"time-duration")
___DEF_MOD_SYM(53,___S_time_2d_monotonic,"time-monotonic")
___DEF_MOD_SYM(54,___S_time_2d_monotonic_2d__3e_date,"time-monotonic->date")
___DEF_MOD_SYM(55,___S_time_2d_monotonic_2d__3e_julian_2d_day,"time-monotonic->julian-day")
___DEF_MOD_SYM(56,___S_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day,"time-monotonic->modified-julian-day")

___DEF_MOD_SYM(57,___S_time_2d_monotonic_2d__3e_time_2d_tai,"time-monotonic->time-tai")
___DEF_MOD_SYM(58,___S_time_2d_monotonic_2d__3e_time_2d_tai_21_,"time-monotonic->time-tai!")
___DEF_MOD_SYM(59,___S_time_2d_monotonic_2d__3e_time_2d_utc,"time-monotonic->time-utc")
___DEF_MOD_SYM(60,___S_time_2d_monotonic_2d__3e_time_2d_utc_21_,"time-monotonic->time-utc!")
___DEF_MOD_SYM(61,___S_time_2d_nanosecond,"time-nanosecond")
___DEF_MOD_SYM(62,___S_time_2d_process,"time-process")
___DEF_MOD_SYM(63,___S_time_2d_resolution,"time-resolution")
___DEF_MOD_SYM(64,___S_time_2d_second,"time-second")
___DEF_MOD_SYM(65,___S_time_2d_tai,"time-tai")
___DEF_MOD_SYM(66,___S_time_2d_tai_2d__3e_date,"time-tai->date")
___DEF_MOD_SYM(67,___S_time_2d_tai_2d__3e_julian_2d_day,"time-tai->julian-day")
___DEF_MOD_SYM(68,___S_time_2d_tai_2d__3e_modified_2d_julian_2d_day,"time-tai->modified-julian-day")

___DEF_MOD_SYM(69,___S_time_2d_tai_2d__3e_time_2d_monotonic,"time-tai->time-monotonic")
___DEF_MOD_SYM(70,___S_time_2d_tai_2d__3e_time_2d_monotonic_21_,"time-tai->time-monotonic!")
___DEF_MOD_SYM(71,___S_time_2d_tai_2d__3e_time_2d_utc,"time-tai->time-utc")
___DEF_MOD_SYM(72,___S_time_2d_tai_2d__3e_time_2d_utc_21_,"time-tai->time-utc!")
___DEF_MOD_SYM(73,___S_time_2d_thread,"time-thread")
___DEF_MOD_SYM(74,___S_time_2d_type,"time-type")
___DEF_MOD_SYM(75,___S_time_2d_utc,"time-utc")
___DEF_MOD_SYM(76,___S_time_2d_utc_2d__3e_date,"time-utc->date")
___DEF_MOD_SYM(77,___S_time_2d_utc_2d__3e_julian_2d_day,"time-utc->julian-day")
___DEF_MOD_SYM(78,___S_time_2d_utc_2d__3e_modified_2d_julian_2d_day,"time-utc->modified-julian-day")

___DEF_MOD_SYM(79,___S_time_2d_utc_2d__3e_time_2d_monotonic,"time-utc->time-monotonic")
___DEF_MOD_SYM(80,___S_time_2d_utc_2d__3e_time_2d_monotonic_21_,"time-utc->time-monotonic!")
___DEF_MOD_SYM(81,___S_time_2d_utc_2d__3e_time_2d_tai,"time-utc->time-tai")
___DEF_MOD_SYM(82,___S_time_2d_utc_2d__3e_time_2d_tai_21_,"time-utc->time-tai!")
___DEF_MOD_SYM(83,___S_time_2e_implementation,"time.implementation")
___DEF_MOD_SYM(84,___S_time_3a_add_2d_duration,"time:add-duration")
___DEF_MOD_SYM(85,___S_time_3a_add_2d_duration_21_,"time:add-duration!")
___DEF_MOD_SYM(86,___S_time_3a_copy_2d_time,"time:copy-time")
___DEF_MOD_SYM(87,___S_time_3a_current_2d_date,"time:current-date")
___DEF_MOD_SYM(88,___S_time_3a_current_2d_julian_2d_day,"time:current-julian-day")
___DEF_MOD_SYM(89,___S_time_3a_current_2d_modified_2d_julian_2d_day,"time:current-modified-julian-day")

___DEF_MOD_SYM(90,___S_time_3a_current_2d_time,"time:current-time")
___DEF_MOD_SYM(91,___S_time_3a_date_2d__3e_julian_2d_day,"time:date->julian-day")
___DEF_MOD_SYM(92,___S_time_3a_date_2d__3e_modified_2d_julian_2d_day,"time:date->modified-julian-day")

___DEF_MOD_SYM(93,___S_time_3a_date_2d__3e_string,"time:date->string")
___DEF_MOD_SYM(94,___S_time_3a_date_2d__3e_time_2d_monotonic,"time:date->time-monotonic")
___DEF_MOD_SYM(95,___S_time_3a_date_2d__3e_time_2d_tai,"time:date->time-tai")
___DEF_MOD_SYM(96,___S_time_3a_date_2d__3e_time_2d_utc,"time:date->time-utc")
___DEF_MOD_SYM(97,___S_time_3a_date_2d_day,"time:date-day")
___DEF_MOD_SYM(98,___S_time_3a_date_2d_hour,"time:date-hour")
___DEF_MOD_SYM(99,___S_time_3a_date_2d_minute,"time:date-minute")
___DEF_MOD_SYM(100,___S_time_3a_date_2d_month,"time:date-month")
___DEF_MOD_SYM(101,___S_time_3a_date_2d_nanosecond,"time:date-nanosecond")
___DEF_MOD_SYM(102,___S_time_3a_date_2d_second,"time:date-second")
___DEF_MOD_SYM(103,___S_time_3a_date_2d_week_2d_day,"time:date-week-day")
___DEF_MOD_SYM(104,___S_time_3a_date_2d_week_2d_number,"time:date-week-number")
___DEF_MOD_SYM(105,___S_time_3a_date_2d_year,"time:date-year")
___DEF_MOD_SYM(106,___S_time_3a_date_2d_year_2d_day,"time:date-year-day")
___DEF_MOD_SYM(107,___S_time_3a_date_2d_zone_2d_offset,"time:date-zone-offset")
___DEF_MOD_SYM(108,___S_time_3a_date_3f_,"time:date?")
___DEF_MOD_SYM(109,___S_time_3a_julian_2d_day_2d__3e_date,"time:julian-day->date")
___DEF_MOD_SYM(110,___S_time_3a_julian_2d_day_2d__3e_time_2d_monotonic,"time:julian-day->time-monotonic")

___DEF_MOD_SYM(111,___S_time_3a_julian_2d_day_2d__3e_time_2d_tai,"time:julian-day->time-tai")
___DEF_MOD_SYM(112,___S_time_3a_julian_2d_day_2d__3e_time_2d_utc,"time:julian-day->time-utc")
___DEF_MOD_SYM(113,___S_time_3a_local_2d_timezone,"time:local-timezone")
___DEF_MOD_SYM(114,___S_time_3a_local_2d_timezone_2d_set_21_,"time:local-timezone-set!")
___DEF_MOD_SYM(115,___S_time_3a_make_2d_date,"time:make-date")
___DEF_MOD_SYM(116,___S_time_3a_make_2d_time,"time:make-time")
___DEF_MOD_SYM(117,___S_time_3a_modified_2d_julian_2d_day_2d__3e_date,"time:modified-julian-day->date")

___DEF_MOD_SYM(118,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_monotonic,"time:modified-julian-day->time-monotonic")

___DEF_MOD_SYM(119,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_tai,"time:modified-julian-day->time-tai")

___DEF_MOD_SYM(120,___S_time_3a_modified_2d_julian_2d_day_2d__3e_time_2d_utc,"time:modified-julian-day->time-utc")

___DEF_MOD_SYM(121,___S_time_3a_set_2d_time_2d_nanosecond_21_,"time:set-time-nanosecond!")
___DEF_MOD_SYM(122,___S_time_3a_set_2d_time_2d_second_21_,"time:set-time-second!")
___DEF_MOD_SYM(123,___S_time_3a_set_2d_time_2d_type_21_,"time:set-time-type!")
___DEF_MOD_SYM(124,___S_time_3a_string_2d__3e_date,"time:string->date")
___DEF_MOD_SYM(125,___S_time_3a_subtract_2d_duration,"time:subtract-duration")
___DEF_MOD_SYM(126,___S_time_3a_subtract_2d_duration_21_,"time:subtract-duration!")
___DEF_MOD_SYM(127,___S_time_3a_system_2d_timezone,"time:system-timezone")
___DEF_MOD_SYM(128,___S_time_3a_system_2d_timezone_2d_set_21_,"time:system-timezone-set!")
___DEF_MOD_SYM(129,___S_time_3a_time_2d_difference,"time:time-difference")
___DEF_MOD_SYM(130,___S_time_3a_time_2d_difference_21_,"time:time-difference!")
___DEF_MOD_SYM(131,___S_time_3a_time_2d_duration,"time:time-duration")
___DEF_MOD_SYM(132,___S_time_3a_time_2d_monotonic,"time:time-monotonic")
___DEF_MOD_SYM(133,___S_time_3a_time_2d_monotonic_2d__3e_date,"time:time-monotonic->date")
___DEF_MOD_SYM(134,___S_time_3a_time_2d_monotonic_2d__3e_julian_2d_day,"time:time-monotonic->julian-day")

___DEF_MOD_SYM(135,___S_time_3a_time_2d_monotonic_2d__3e_modified_2d_julian_2d_day,"time:time-monotonic->modified-julian-day")

___DEF_MOD_SYM(136,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai,"time:time-monotonic->time-tai")

___DEF_MOD_SYM(137,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_tai_21_,"time:time-monotonic->time-tai!")

___DEF_MOD_SYM(138,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc,"time:time-monotonic->time-utc")

___DEF_MOD_SYM(139,___S_time_3a_time_2d_monotonic_2d__3e_time_2d_utc_21_,"time:time-monotonic->time-utc!")

___DEF_MOD_SYM(140,___S_time_3a_time_2d_nanosecond,"time:time-nanosecond")
___DEF_MOD_SYM(141,___S_time_3a_time_2d_process,"time:time-process")
___DEF_MOD_SYM(142,___S_time_3a_time_2d_resolution,"time:time-resolution")
___DEF_MOD_SYM(143,___S_time_3a_time_2d_second,"time:time-second")
___DEF_MOD_SYM(144,___S_time_3a_time_2d_tai,"time:time-tai")
___DEF_MOD_SYM(145,___S_time_3a_time_2d_tai_2d__3e_date,"time:time-tai->date")
___DEF_MOD_SYM(146,___S_time_3a_time_2d_tai_2d__3e_julian_2d_day,"time:time-tai->julian-day")
___DEF_MOD_SYM(147,___S_time_3a_time_2d_tai_2d__3e_modified_2d_julian_2d_day,"time:time-tai->modified-julian-day")

___DEF_MOD_SYM(148,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic,"time:time-tai->time-monotonic")

___DEF_MOD_SYM(149,___S_time_3a_time_2d_tai_2d__3e_time_2d_monotonic_21_,"time:time-tai->time-monotonic!")

___DEF_MOD_SYM(150,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc,"time:time-tai->time-utc")
___DEF_MOD_SYM(151,___S_time_3a_time_2d_tai_2d__3e_time_2d_utc_21_,"time:time-tai->time-utc!")
___DEF_MOD_SYM(152,___S_time_3a_time_2d_thread,"time:time-thread")
___DEF_MOD_SYM(153,___S_time_3a_time_2d_type,"time:time-type")
___DEF_MOD_SYM(154,___S_time_3a_time_2d_utc,"time:time-utc")
___DEF_MOD_SYM(155,___S_time_3a_time_2d_utc_2d__3e_date,"time:time-utc->date")
___DEF_MOD_SYM(156,___S_time_3a_time_2d_utc_2d__3e_julian_2d_day,"time:time-utc->julian-day")
___DEF_MOD_SYM(157,___S_time_3a_time_2d_utc_2d__3e_modified_2d_julian_2d_day,"time:time-utc->modified-julian-day")

___DEF_MOD_SYM(158,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic,"time:time-utc->time-monotonic")

___DEF_MOD_SYM(159,___S_time_3a_time_2d_utc_2d__3e_time_2d_monotonic_21_,"time:time-utc->time-monotonic!")

___DEF_MOD_SYM(160,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai,"time:time-utc->time-tai")
___DEF_MOD_SYM(161,___S_time_3a_time_2d_utc_2d__3e_time_2d_tai_21_,"time:time-utc->time-tai!")
___DEF_MOD_SYM(162,___S_time_3a_time_3c__3d__3f_,"time:time<=?")
___DEF_MOD_SYM(163,___S_time_3a_time_3c__3f_,"time:time<?")
___DEF_MOD_SYM(164,___S_time_3a_time_3d__3f_,"time:time=?")
___DEF_MOD_SYM(165,___S_time_3a_time_3e__3d__3f_,"time:time>=?")
___DEF_MOD_SYM(166,___S_time_3a_time_3e__3f_,"time:time>?")
___DEF_MOD_SYM(167,___S_time_3a_time_3f_,"time:time?")
___DEF_MOD_SYM(168,___S_time_3a_tm_2d_current_2d_time,"time:tm-current-time")
___DEF_MOD_SYM(169,___S_time_3c__3d__3f_,"time<=?")
___DEF_MOD_SYM(170,___S_time_3c__3f_,"time<?")
___DEF_MOD_SYM(171,___S_time_3d__3f_,"time=?")
___DEF_MOD_SYM(172,___S_time_3e__3d__3f_,"time>=?")
___DEF_MOD_SYM(173,___S_time_3e__3f_,"time>?")
___DEF_MOD_SYM(174,___S_time_3f_,"time?")
___DEF_MOD_SYM(175,___S_tm_2d_current_2d_time,"tm-current-time")
___END_MOD_SYM_KEY

#endif
