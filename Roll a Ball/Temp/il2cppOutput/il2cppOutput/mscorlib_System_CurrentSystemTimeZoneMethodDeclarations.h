#pragma once

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t3692;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t3138;
// System.String[]
struct StringU5BU5D_t42;
// System.Globalization.DaylightTime
struct DaylightTime_t3293;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
 void CurrentSystemTimeZone__ctor_m12742 (CurrentSystemTimeZone_t3692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
 void CurrentSystemTimeZone__ctor_m12743 (CurrentSystemTimeZone_t3692 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m12744 (CurrentSystemTimeZone_t3692 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
 bool CurrentSystemTimeZone_GetTimeZoneData_m12745 (Object_t * __this/* static, unused */, int32_t ___year, Int64U5BU5D_t3138** ___data, StringU5BU5D_t42** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CurrentSystemTimeZone::get_StandardName()
 String_t* CurrentSystemTimeZone_get_StandardName_m12746 (CurrentSystemTimeZone_t3692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
 DaylightTime_t3293 * CurrentSystemTimeZone_GetDaylightChanges_m12747 (CurrentSystemTimeZone_t3692 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
 TimeSpan_t724  CurrentSystemTimeZone_GetUtcOffset_m12748 (CurrentSystemTimeZone_t3692 * __this, DateTime_t459  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
 void CurrentSystemTimeZone_OnDeserialization_m12749 (CurrentSystemTimeZone_t3692 * __this, DaylightTime_t3293 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
 DaylightTime_t3293 * CurrentSystemTimeZone_GetDaylightTimeFromData_m12750 (CurrentSystemTimeZone_t3692 * __this, Int64U5BU5D_t3138* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
