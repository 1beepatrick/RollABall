#pragma once

// System.TimeSpan
struct TimeSpan_t724;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
 void TimeSpan__ctor_m12698 (TimeSpan_t724 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m12699 (TimeSpan_t724 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m12700 (TimeSpan_t724 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
 void TimeSpan__cctor_m12701 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 int64_t TimeSpan_CalculateTicks_m12702 (Object_t * __this/* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
 int32_t TimeSpan_get_Days_m12703 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
 int32_t TimeSpan_get_Hours_m12704 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
 int32_t TimeSpan_get_Milliseconds_m12705 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
 int32_t TimeSpan_get_Minutes_m12706 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
 int32_t TimeSpan_get_Seconds_m12707 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
 int64_t TimeSpan_get_Ticks_m12708 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
 double TimeSpan_get_TotalDays_m12709 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
 double TimeSpan_get_TotalHours_m12710 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
 double TimeSpan_get_TotalMilliseconds_m12711 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
 double TimeSpan_get_TotalMinutes_m12712 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
 double TimeSpan_get_TotalSeconds_m3855 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
 TimeSpan_t724  TimeSpan_Add_m12713 (TimeSpan_t724 * __this, TimeSpan_t724  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
 int32_t TimeSpan_Compare_m12714 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
 int32_t TimeSpan_CompareTo_m12715 (TimeSpan_t724 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
 int32_t TimeSpan_CompareTo_m12716 (TimeSpan_t724 * __this, TimeSpan_t724  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
 bool TimeSpan_Equals_m12717 (TimeSpan_t724 * __this, TimeSpan_t724  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
 TimeSpan_t724  TimeSpan_Duration_m12718 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
 bool TimeSpan_Equals_m12719 (TimeSpan_t724 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
 TimeSpan_t724  TimeSpan_FromMinutes_m12720 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
 TimeSpan_t724  TimeSpan_FromSeconds_m3106 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
 TimeSpan_t724  TimeSpan_FromMilliseconds_m4156 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
 TimeSpan_t724  TimeSpan_From_m12721 (Object_t * __this/* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
 int32_t TimeSpan_GetHashCode_m12722 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
 TimeSpan_t724  TimeSpan_Negate_m12723 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
 TimeSpan_t724  TimeSpan_Subtract_m12724 (TimeSpan_t724 * __this, TimeSpan_t724  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
 String_t* TimeSpan_ToString_m12725 (TimeSpan_t724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
 TimeSpan_t724  TimeSpan_op_Addition_m12726 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Equality_m12727 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThan_m12728 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThanOrEqual_m12729 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Inequality_m12730 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThan_m12731 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThanOrEqual_m12732 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
 TimeSpan_t724  TimeSpan_op_Subtraction_m12733 (Object_t * __this/* static, unused */, TimeSpan_t724  ___t1, TimeSpan_t724  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
