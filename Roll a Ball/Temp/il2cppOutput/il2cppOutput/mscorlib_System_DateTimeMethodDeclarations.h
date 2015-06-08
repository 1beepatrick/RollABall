#pragma once

// System.DateTime
struct DateTime_t459;
// System.IFormatProvider
struct IFormatProvider_t3106;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t42;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t3289;
// System.String
struct String_t;
// System.Exception
struct Exception_t35;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime/Which
#include "mscorlib_System_DateTime_Which.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTime::.ctor(System.Int64)
 void DateTime__ctor_m12264 (DateTime_t459 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
 void DateTime__ctor_m12265 (DateTime_t459 * __this, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void DateTime__ctor_m5389 (DateTime_t459 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
 void DateTime__ctor_m12266 (DateTime_t459 * __this, bool ___check, TimeSpan_t724  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
 void DateTime__ctor_m12267 (DateTime_t459 * __this, int64_t ___ticks, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
 void DateTime__cctor_m12268 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool DateTime_System_IConvertible_ToBoolean_m12269 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t DateTime_System_IConvertible_ToByte_m12270 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t DateTime_System_IConvertible_ToChar_m12271 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t459  DateTime_System_IConvertible_ToDateTime_m12272 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t917  DateTime_System_IConvertible_ToDecimal_m12273 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
 double DateTime_System_IConvertible_ToDouble_m12274 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t DateTime_System_IConvertible_ToInt16_m12275 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t DateTime_System_IConvertible_ToInt32_m12276 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t DateTime_System_IConvertible_ToInt64_m12277 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t DateTime_System_IConvertible_ToSByte_m12278 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
 float DateTime_System_IConvertible_ToSingle_m12279 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * DateTime_System_IConvertible_ToType_m12280 (DateTime_t459 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t DateTime_System_IConvertible_ToUInt16_m12281 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t DateTime_System_IConvertible_ToUInt32_m12282 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t DateTime_System_IConvertible_ToUInt64_m12283 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
 int32_t DateTime_AbsoluteDays_m12284 (Object_t * __this/* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
 int32_t DateTime_FromTicks_m12285 (DateTime_t459 * __this, int32_t ___what, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Date()
 DateTime_t459  DateTime_get_Date_m12286 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
 int32_t DateTime_get_Month_m12287 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
 int32_t DateTime_get_Day_m12288 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
 int32_t DateTime_get_DayOfWeek_m12289 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_DayOfYear()
 int32_t DateTime_get_DayOfYear_m12290 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::get_TimeOfDay()
 TimeSpan_t724  DateTime_get_TimeOfDay_m12291 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
 int32_t DateTime_get_Hour_m12292 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
 int32_t DateTime_get_Minute_m12293 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
 int32_t DateTime_get_Second_m12294 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Millisecond()
 int32_t DateTime_get_Millisecond_m12295 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
 int64_t DateTime_GetTimeMonotonic_m12296 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
 int64_t DateTime_GetNow_m12297 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
 DateTime_t459  DateTime_get_Now_m3104 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
 int64_t DateTime_get_Ticks_m8278 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
 DateTime_t459  DateTime_get_Today_m12298 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
 DateTime_t459  DateTime_get_UtcNow_m8230 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
 int32_t DateTime_get_Year_m12299 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
 int32_t DateTime_get_Kind_m12300 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
 DateTime_t459  DateTime_Add_m12301 (DateTime_t459 * __this, TimeSpan_t724  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
 DateTime_t459  DateTime_AddTicks_m12302 (DateTime_t459 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
 DateTime_t459  DateTime_AddMilliseconds_m7082 (DateTime_t459 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
 DateTime_t459  DateTime_AddSeconds_m5390 (DateTime_t459 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
 int32_t DateTime_Compare_m12303 (Object_t * __this/* static, unused */, DateTime_t459  ___t1, DateTime_t459  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
 int32_t DateTime_CompareTo_m12304 (DateTime_t459 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsDaylightSavingTime()
 bool DateTime_IsDaylightSavingTime_m12305 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
 int32_t DateTime_CompareTo_m12306 (DateTime_t459 * __this, DateTime_t459  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
 bool DateTime_Equals_m12307 (DateTime_t459 * __this, DateTime_t459  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToBinary()
 int64_t DateTime_ToBinary_m12308 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
 DateTime_t459  DateTime_FromBinary_m12309 (Object_t * __this/* static, unused */, int64_t ___dateData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
 DateTime_t459  DateTime_SpecifyKind_m12310 (Object_t * __this/* static, unused */, DateTime_t459  ___value, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
 int32_t DateTime_DaysInMonth_m12311 (Object_t * __this/* static, unused */, int32_t ___year, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
 bool DateTime_Equals_m12312 (DateTime_t459 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats()
 StringU5BU5D_t42* DateTime_GetDateTimeFormats_m12313 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.IFormatProvider)
 StringU5BU5D_t42* DateTime_GetDateTimeFormats_m12314 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.Char,System.IFormatProvider)
 StringU5BU5D_t42* DateTime_GetDateTimeFormats_m12315 (DateTime_t459 * __this, uint16_t ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.Boolean,System.String[],System.Globalization.DateTimeFormatInfo)
 StringU5BU5D_t42* DateTime_GetDateTimeFormats_m12316 (DateTime_t459 * __this, bool ___adjustutc, StringU5BU5D_t42* ___patterns, DateTimeFormatInfo_t3289 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
 void DateTime_CheckDateTimeKind_m12317 (DateTime_t459 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
 int32_t DateTime_GetHashCode_m12318 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.DateTime::GetTypeCode()
 int32_t DateTime_GetTypeCode_m12319 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
 bool DateTime_IsLeapYear_m12320 (Object_t * __this/* static, unused */, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
 DateTime_t459  DateTime_Parse_m12321 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
 DateTime_t459  DateTime_Parse_m12322 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
 bool DateTime_CoreParse_m12323 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t459 * ___result, DateTimeOffset_t3643 * ___dto, bool ___setExceptionOnError, Exception_t35 ** ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider)
 DateTime_t459  DateTime_ParseExact_m3445 (Object_t * __this/* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
 StringU5BU5D_t42* DateTime_YearMonthDayFormats_m12324 (Object_t * __this/* static, unused */, DateTimeFormatInfo_t3289 * ___dfi, bool ___setExceptionOnError, Exception_t35 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
 int32_t DateTime__ParseNumber_m12325 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
 int32_t DateTime__ParseEnum_m12326 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t42* ___values, StringU5BU5D_t42* ___invValues, bool ___exact, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
 bool DateTime__ParseString_m12327 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
 bool DateTime__ParseAmPm_m12328 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t3289 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
 bool DateTime__ParseTimeSeparator_m12329 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t3289 * ___dfi, bool ___exact, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
 bool DateTime__ParseDateSeparator_m12330 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t3289 * ___dfi, bool ___exact, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
 bool DateTime_IsLetter_m12331 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
 bool DateTime__DoParse_m12332 (Object_t * __this/* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t459 * ___result, DateTimeOffset_t3643 * ___dto, DateTimeFormatInfo_t3289 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
 DateTime_t459  DateTime_ParseExact_m8172 (Object_t * __this/* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
 DateTime_t459  DateTime_ParseExact_m12333 (Object_t * __this/* static, unused */, String_t* ___s, StringU5BU5D_t42* ___formats, Object_t * ___provider, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
 void DateTime_CheckStyle_m12334 (Object_t * __this/* static, unused */, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
 bool DateTime_ParseExact_m12335 (Object_t * __this/* static, unused */, String_t* ___s, StringU5BU5D_t42* ___formats, DateTimeFormatInfo_t3289 * ___dfi, int32_t ___style, DateTime_t459 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t35 ** ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
 DateTime_t459  DateTime_Subtract_m12336 (DateTime_t459 * __this, TimeSpan_t724  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToFileTime()
 int64_t DateTime_ToFileTime_m12337 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToFileTimeUtc()
 int64_t DateTime_ToFileTimeUtc_m12338 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToLongDateString()
 String_t* DateTime_ToLongDateString_m12339 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToLongTimeString()
 String_t* DateTime_ToLongTimeString_m12340 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::ToOADate()
 double DateTime_ToOADate_m12341 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToShortDateString()
 String_t* DateTime_ToShortDateString_m12342 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToShortTimeString()
 String_t* DateTime_ToShortTimeString_m12343 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
 String_t* DateTime_ToString_m12344 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
 String_t* DateTime_ToString_m12345 (DateTime_t459 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
 String_t* DateTime_ToString_m3117 (DateTime_t459 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
 String_t* DateTime_ToString_m12346 (DateTime_t459 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
 DateTime_t459  DateTime_ToLocalTime_m7142 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
 DateTime_t459  DateTime_ToUniversalTime_m12347 (DateTime_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
 DateTime_t459  DateTime_op_Addition_m3107 (Object_t * __this/* static, unused */, DateTime_t459  ___d, TimeSpan_t724  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
 bool DateTime_op_Equality_m12348 (Object_t * __this/* static, unused */, DateTime_t459  ___d1, DateTime_t459  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
 bool DateTime_op_GreaterThan_m7188 (Object_t * __this/* static, unused */, DateTime_t459  ___t1, DateTime_t459  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
 bool DateTime_op_GreaterThanOrEqual_m7083 (Object_t * __this/* static, unused */, DateTime_t459  ___t1, DateTime_t459  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
 bool DateTime_op_Inequality_m12349 (Object_t * __this/* static, unused */, DateTime_t459  ___d1, DateTime_t459  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
 bool DateTime_op_LessThan_m7187 (Object_t * __this/* static, unused */, DateTime_t459  ___t1, DateTime_t459  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
 bool DateTime_op_LessThanOrEqual_m7186 (Object_t * __this/* static, unused */, DateTime_t459  ___t1, DateTime_t459  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
 DateTime_t459  DateTime_op_Subtraction_m12350 (Object_t * __this/* static, unused */, DateTime_t459  ___d, TimeSpan_t724  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
