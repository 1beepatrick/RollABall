#pragma once

// System.Text.Encoding
struct Encoding_t951;
// System.Text.DecoderFallback
struct DecoderFallback_t3589;
// System.Text.EncoderFallback
struct EncoderFallback_t3596;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t200;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Text.Decoder
struct Decoder_t3299;
// System.Object[]
struct ObjectU5BU5D_t315;

// System.Void System.Text.Encoding::.ctor()
 void Encoding__ctor_m11731 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
 void Encoding__ctor_m11732 (Encoding_t951 * __this, int32_t ___codePage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
 void Encoding__cctor_m11733 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
 String_t* Encoding___m11734 (Object_t * __this/* static, unused */, String_t* ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
 bool Encoding_get_IsReadOnly_m11735 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
 DecoderFallback_t3589 * Encoding_get_DecoderFallback_m11736 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
 void Encoding_set_DecoderFallback_m11737 (Encoding_t951 * __this, DecoderFallback_t3589 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
 EncoderFallback_t3596 * Encoding_get_EncoderFallback_m11738 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
 void Encoding_SetFallbackInternal_m11739 (Encoding_t951 * __this, EncoderFallback_t3596 * ___e, DecoderFallback_t3589 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
 bool Encoding_Equals_m11740 (Encoding_t951 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
 int32_t Encoding_GetByteCount_m11741 (Encoding_t951 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
 int32_t Encoding_GetByteCount_m11742 (Encoding_t951 * __this, CharU5BU5D_t200* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Encoding_GetBytes_m8218 (Encoding_t951 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
 ByteU5BU5D_t433* Encoding_GetBytes_m3454 (Encoding_t951 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
 ByteU5BU5D_t433* Encoding_GetBytes_m11743 (Encoding_t951 * __this, CharU5BU5D_t200* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
 ByteU5BU5D_t433* Encoding_GetBytes_m7338 (Encoding_t951 * __this, CharU5BU5D_t200* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
 CharU5BU5D_t200* Encoding_GetChars_m7348 (Encoding_t951 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
 Decoder_t3299 * Encoding_GetDecoder_m11744 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
 Object_t * Encoding_InvokeI18N_m11745 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
 Encoding_t951 * Encoding_GetEncoding_m11746 (Object_t * __this/* static, unused */, int32_t ___codepage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
 Encoding_t951 * Encoding_GetEncoding_m5348 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
 int32_t Encoding_GetHashCode_m11747 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32)
// System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32)
// System.Byte[] System.Text.Encoding::GetPreamble()
 ByteU5BU5D_t433* Encoding_GetPreamble_m11748 (Encoding_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Encoding_GetString_m5343 (Encoding_t951 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
 String_t* Encoding_GetString_m7152 (Encoding_t951 * __this, ByteU5BU5D_t433* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
 Encoding_t951 * Encoding_get_ASCII_m7252 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
 Encoding_t951 * Encoding_get_BigEndianUnicode_m8217 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
 String_t* Encoding_InternalCodePage_m11749 (Object_t * __this/* static, unused */, int32_t* ___code_page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
 Encoding_t951 * Encoding_get_Default_m11750 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
 Encoding_t951 * Encoding_get_ISOLatin1_m11751 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
 Encoding_t951 * Encoding_get_UTF7_m8226 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
 Encoding_t951 * Encoding_get_UTF8_m3453 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
 Encoding_t951 * Encoding_get_UTF8Unmarked_m11752 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
 Encoding_t951 * Encoding_get_UTF8UnmarkedUnsafe_m11753 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
 Encoding_t951 * Encoding_get_Unicode_m11754 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
 Encoding_t951 * Encoding_get_UTF32_m11755 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
 Encoding_t951 * Encoding_get_BigEndianUTF32_m11756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t Encoding_GetByteCount_m11757 (Encoding_t951 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t Encoding_GetBytes_m11758 (Encoding_t951 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
