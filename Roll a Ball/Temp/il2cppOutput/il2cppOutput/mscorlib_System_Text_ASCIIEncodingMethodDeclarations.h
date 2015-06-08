#pragma once

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t3586;
// System.Char[]
struct CharU5BU5D_t200;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3587;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t3588;
// System.Text.Decoder
struct Decoder_t3299;

// System.Void System.Text.ASCIIEncoding::.ctor()
 void ASCIIEncoding__ctor_m11650 (ASCIIEncoding_t3586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m11651 (ASCIIEncoding_t3586 * __this, CharU5BU5D_t200* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
 int32_t ASCIIEncoding_GetByteCount_m11652 (ASCIIEncoding_t3586 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m11653 (ASCIIEncoding_t3586 * __this, CharU5BU5D_t200* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m11654 (ASCIIEncoding_t3586 * __this, CharU5BU5D_t200* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3587 ** ___buffer, CharU5BU5D_t200** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m11655 (ASCIIEncoding_t3586 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m11656 (ASCIIEncoding_t3586 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3587 ** ___buffer, CharU5BU5D_t200** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetCharCount_m11657 (ASCIIEncoding_t3586 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ASCIIEncoding_GetChars_m11658 (ASCIIEncoding_t3586 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t200* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
 int32_t ASCIIEncoding_GetChars_m11659 (ASCIIEncoding_t3586 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t200* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t3588 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxByteCount_m11660 (ASCIIEncoding_t3586 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxCharCount_m11661 (ASCIIEncoding_t3586 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* ASCIIEncoding_GetString_m11662 (ASCIIEncoding_t3586 * __this, ByteU5BU5D_t433* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t ASCIIEncoding_GetBytes_m11663 (ASCIIEncoding_t3586 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m11664 (ASCIIEncoding_t3586 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
 Decoder_t3299 * ASCIIEncoding_GetDecoder_m11665 (ASCIIEncoding_t3586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
