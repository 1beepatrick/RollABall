#pragma once

// System.DateTimeUtils
struct DateTimeUtils_t3645;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t295;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t3289;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Int32 System.DateTimeUtils::CountRepeat(System.String,System.Int32,System.Char)
 int32_t DateTimeUtils_CountRepeat_m12368 (Object_t * __this/* static, unused */, String_t* ___fmt, int32_t ___p, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeUtils::ZeroPad(System.Text.StringBuilder,System.Int32,System.Int32)
 void DateTimeUtils_ZeroPad_m12369 (Object_t * __this/* static, unused */, StringBuilder_t295 * ___output, int32_t ___digits, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeUtils::ParseQuotedString(System.String,System.Int32,System.Text.StringBuilder)
 int32_t DateTimeUtils_ParseQuotedString_m12370 (Object_t * __this/* static, unused */, String_t* ___fmt, int32_t ___pos, StringBuilder_t295 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&)
 String_t* DateTimeUtils_GetStandardPattern_m12371 (Object_t * __this/* static, unused */, uint16_t ___format, DateTimeFormatInfo_t3289 * ___dfi, bool* ___useutc, bool* ___use_invariant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&,System.Boolean)
 String_t* DateTimeUtils_GetStandardPattern_m12372 (Object_t * __this/* static, unused */, uint16_t ___format, DateTimeFormatInfo_t3289 * ___dfi, bool* ___useutc, bool* ___use_invariant, bool ___date_time_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.String,System.Globalization.DateTimeFormatInfo)
 String_t* DateTimeUtils_ToString_m12373 (Object_t * __this/* static, unused */, DateTime_t459  ___dt, String_t* ___format, DateTimeFormatInfo_t3289 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.Nullable`1<System.TimeSpan>,System.String,System.Globalization.DateTimeFormatInfo)
 String_t* DateTimeUtils_ToString_m12374 (Object_t * __this/* static, unused */, DateTime_t459  ___dt, Nullable_1_t644  ___utc_offset, String_t* ___format, DateTimeFormatInfo_t3289 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
