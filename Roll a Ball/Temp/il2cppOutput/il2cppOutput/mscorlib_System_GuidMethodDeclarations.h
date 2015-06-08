﻿#pragma once

// System.Guid
struct Guid_t641;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t295;
// System.IFormatProvider
struct IFormatProvider_t3106;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid::.ctor(System.Byte[])
 void Guid__ctor_m12432 (Guid_t641 * __this, ByteU5BU5D_t433* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.String)
 void Guid__ctor_m3432 (Guid_t641 * __this, String_t* ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
 void Guid__ctor_m12433 (Guid_t641 * __this, int32_t ___a, int16_t ___b, int16_t ___c, ByteU5BU5D_t433* ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
 void Guid__ctor_m12434 (Guid_t641 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
 void Guid__cctor_m12435 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
 void Guid_CheckNull_m12436 (Object_t * __this/* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
 void Guid_CheckLength_m12437 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
 void Guid_CheckArray_m12438 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
 int32_t Guid_Compare_m12439 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
 int32_t Guid_CompareTo_m12440 (Guid_t641 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
 bool Guid_Equals_m12441 (Guid_t641 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
 int32_t Guid_CompareTo_m12442 (Guid_t641 * __this, Guid_t641  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
 bool Guid_Equals_m12443 (Guid_t641 * __this, Guid_t641  ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
 int32_t Guid_GetHashCode_m12444 (Guid_t641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
 uint16_t Guid_ToHex_m12445 (Object_t * __this/* static, unused */, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
 Guid_t641  Guid_NewGuid_m3441 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Guid::ToByteArray()
 ByteU5BU5D_t433* Guid_ToByteArray_m12446 (Guid_t641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
 void Guid_AppendInt_m12447 (Object_t * __this/* static, unused */, StringBuilder_t295 * ___builder, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
 void Guid_AppendShort_m12448 (Object_t * __this/* static, unused */, StringBuilder_t295 * ___builder, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
 void Guid_AppendByte_m12449 (Object_t * __this/* static, unused */, StringBuilder_t295 * ___builder, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
 String_t* Guid_BaseToString_m12450 (Guid_t641 * __this, bool ___h, bool ___p, bool ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
 String_t* Guid_ToString_m12451 (Guid_t641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
 String_t* Guid_ToString_m12452 (Guid_t641 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
 String_t* Guid_ToString_m12453 (Guid_t641 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
