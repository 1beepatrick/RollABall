#pragma once

// System.Net.IPAddress
struct IPAddress_t2792;
// System.UInt16[]
struct UInt16U5BU5D_t2791;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
 void IPAddress__ctor_m6180 (IPAddress_t2792 * __this, int64_t ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
 void IPAddress__ctor_m6181 (IPAddress_t2792 * __this, UInt16U5BU5D_t2791* ___address, int64_t ___scopeId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
 void IPAddress__cctor_m6182 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
 int16_t IPAddress_SwapShort_m6183 (Object_t * __this/* static, unused */, int16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
 int16_t IPAddress_HostToNetworkOrder_m6184 (Object_t * __this/* static, unused */, int16_t ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
 int16_t IPAddress_NetworkToHostOrder_m6185 (Object_t * __this/* static, unused */, int16_t ___network, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
 IPAddress_t2792 * IPAddress_Parse_m6186 (Object_t * __this/* static, unused */, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
 bool IPAddress_TryParse_m6187 (Object_t * __this/* static, unused */, String_t* ___ipString, IPAddress_t2792 ** ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
 IPAddress_t2792 * IPAddress_ParseIPV4_m6188 (Object_t * __this/* static, unused */, String_t* ___ip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
 IPAddress_t2792 * IPAddress_ParseIPV6_m6189 (Object_t * __this/* static, unused */, String_t* ___ip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
 int64_t IPAddress_get_InternalIPv4Address_m6190 (IPAddress_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
 int64_t IPAddress_get_ScopeId_m6191 (IPAddress_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
 int32_t IPAddress_get_AddressFamily_m6192 (IPAddress_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
 bool IPAddress_IsLoopback_m6193 (Object_t * __this/* static, unused */, IPAddress_t2792 * ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
 String_t* IPAddress_ToString_m6194 (IPAddress_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
 String_t* IPAddress_ToString_m6195 (Object_t * __this/* static, unused */, int64_t ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
 bool IPAddress_Equals_m6196 (IPAddress_t2792 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
 int32_t IPAddress_GetHashCode_m6197 (IPAddress_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
 int32_t IPAddress_Hash_m6198 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
