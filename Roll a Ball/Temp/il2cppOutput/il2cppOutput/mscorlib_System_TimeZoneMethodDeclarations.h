﻿#pragma once

// System.TimeZone
struct TimeZone_t1123;
// System.String
struct String_t;
// System.Globalization.DaylightTime
struct DaylightTime_t3293;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
 void TimeZone__ctor_m12734 (TimeZone_t1123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
 void TimeZone__cctor_m12735 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
 TimeZone_t1123 * TimeZone_get_CurrentTimeZone_m3837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZone::get_StandardName()
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
 bool TimeZone_IsDaylightSavingTime_m12736 (TimeZone_t1123 * __this, DateTime_t459  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
 bool TimeZone_IsDaylightSavingTime_m12737 (Object_t * __this/* static, unused */, DateTime_t459  ___time, DaylightTime_t3293 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
 DateTime_t459  TimeZone_ToLocalTime_m12738 (TimeZone_t1123 * __this, DateTime_t459  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
 DateTime_t459  TimeZone_ToUniversalTime_m12739 (TimeZone_t1123 * __this, DateTime_t459  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
 TimeSpan_t724  TimeZone_GetLocalTimeDiff_m12740 (TimeZone_t1123 * __this, DateTime_t459  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
 TimeSpan_t724  TimeZone_GetLocalTimeDiff_m12741 (TimeZone_t1123 * __this, DateTime_t459  ___time, TimeSpan_t724  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
