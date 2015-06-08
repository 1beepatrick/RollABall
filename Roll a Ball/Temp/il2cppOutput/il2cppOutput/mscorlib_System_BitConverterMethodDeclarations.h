#pragma once

// System.BitConverter
struct BitConverter_t2954;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
 void BitConverter__cctor_m12021 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
 bool BitConverter_AmILittleEndian_m12022 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
 bool BitConverter_DoubleWordsAreSwapped_m12023 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
 int64_t BitConverter_DoubleToInt64Bits_m12024 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
 ByteU5BU5D_t433* BitConverter_GetBytes_m12025 (Object_t * __this/* static, unused */, uint8_t* ___ptr, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
 ByteU5BU5D_t433* BitConverter_GetBytes_m12026 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
 void BitConverter_PutBytes_m12027 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t433* ___src, int32_t ___start_index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
 int64_t BitConverter_ToInt64_m12028 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
 String_t* BitConverter_ToString_m8276 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
 String_t* BitConverter_ToString_m12029 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
