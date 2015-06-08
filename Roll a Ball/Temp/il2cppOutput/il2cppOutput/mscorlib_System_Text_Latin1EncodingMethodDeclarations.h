#pragma once

// System.Text.Latin1Encoding
struct Latin1Encoding_t3602;
// System.Char[]
struct CharU5BU5D_t200;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3587;

// System.Void System.Text.Latin1Encoding::.ctor()
 void Latin1Encoding__ctor_m11759 (Latin1Encoding_t3602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetByteCount_m11760 (Latin1Encoding_t3602 * __this, CharU5BU5D_t200* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
 int32_t Latin1Encoding_GetByteCount_m11761 (Latin1Encoding_t3602 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m11762 (Latin1Encoding_t3602 * __this, CharU5BU5D_t200* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m11763 (Latin1Encoding_t3602 * __this, CharU5BU5D_t200* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3587 ** ___buffer, CharU5BU5D_t200** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m11764 (Latin1Encoding_t3602 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m11765 (Latin1Encoding_t3602 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3587 ** ___buffer, CharU5BU5D_t200** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetCharCount_m11766 (Latin1Encoding_t3602 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t Latin1Encoding_GetChars_m11767 (Latin1Encoding_t3602 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t200* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
 int32_t Latin1Encoding_GetMaxByteCount_m11768 (Latin1Encoding_t3602 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
 int32_t Latin1Encoding_GetMaxCharCount_m11769 (Latin1Encoding_t3602 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Latin1Encoding_GetString_m11770 (Latin1Encoding_t3602 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
 String_t* Latin1Encoding_GetString_m11771 (Latin1Encoding_t3602 * __this, ByteU5BU5D_t433* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
