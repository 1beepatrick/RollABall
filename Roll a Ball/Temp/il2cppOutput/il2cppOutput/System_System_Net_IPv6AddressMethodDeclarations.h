#pragma once

// System.Net.IPv6Address
struct IPv6Address_t2793;
// System.UInt16[]
struct UInt16U5BU5D_t2791;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Net.IPv6Address::.ctor(System.UInt16[])
 void IPv6Address__ctor_m6199 (IPv6Address_t2793 * __this, UInt16U5BU5D_t2791* ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32)
 void IPv6Address__ctor_m6200 (IPv6Address_t2793 * __this, UInt16U5BU5D_t2791* ___addr, int32_t ___prefixLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32,System.Int32)
 void IPv6Address__ctor_m6201 (IPv6Address_t2793 * __this, UInt16U5BU5D_t2791* ___addr, int32_t ___prefixLength, int32_t ___scopeId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.cctor()
 void IPv6Address__cctor_m6202 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPv6Address System.Net.IPv6Address::Parse(System.String)
 IPv6Address_t2793 * IPv6Address_Parse_m6203 (Object_t * __this/* static, unused */, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Fill(System.UInt16[],System.String)
 int32_t IPv6Address_Fill_m6204 (Object_t * __this/* static, unused */, UInt16U5BU5D_t2791* ___addr, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Int32&)
 bool IPv6Address_TryParse_m6205 (Object_t * __this/* static, unused */, String_t* ___prefix, int32_t* ___res, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
 bool IPv6Address_TryParse_m6206 (Object_t * __this/* static, unused */, String_t* ___ipString, IPv6Address_t2793 ** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] System.Net.IPv6Address::get_Address()
 UInt16U5BU5D_t2791* IPv6Address_get_Address_m6207 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPv6Address::get_ScopeId()
 int64_t IPv6Address_get_ScopeId_m6208 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::set_ScopeId(System.Int64)
 void IPv6Address_set_ScopeId_m6209 (IPv6Address_t2793 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
 bool IPv6Address_IsLoopback_m6210 (Object_t * __this/* static, unused */, IPv6Address_t2793 * ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.IPv6Address::SwapUShort(System.UInt16)
 uint16_t IPv6Address_SwapUShort_m6211 (Object_t * __this/* static, unused */, uint16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::AsIPv4Int()
 int32_t IPv6Address_AsIPv4Int_m6212 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Compatible()
 bool IPv6Address_IsIPv4Compatible_m6213 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Mapped()
 bool IPv6Address_IsIPv4Mapped_m6214 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString()
 String_t* IPv6Address_ToString_m6215 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString(System.Boolean)
 String_t* IPv6Address_ToString_m6216 (IPv6Address_t2793 * __this, bool ___fullLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::Equals(System.Object)
 bool IPv6Address_Equals_m6217 (IPv6Address_t2793 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::GetHashCode()
 int32_t IPv6Address_GetHashCode_m6218 (IPv6Address_t2793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
 int32_t IPv6Address_Hash_m6219 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
