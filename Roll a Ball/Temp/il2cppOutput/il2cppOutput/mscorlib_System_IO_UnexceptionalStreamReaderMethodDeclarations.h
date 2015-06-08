#pragma once

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t3329;
// System.IO.Stream
struct Stream_t434;
// System.Text.Encoding
struct Encoding_t951;
// System.Char[]
struct CharU5BU5D_t200;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamReader__ctor_m10305 (UnexceptionalStreamReader_t3329 * __this, Stream_t434 * ___stream, Encoding_t951 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
 void UnexceptionalStreamReader__cctor_m10306 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
 int32_t UnexceptionalStreamReader_Peek_m10307 (UnexceptionalStreamReader_t3329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
 int32_t UnexceptionalStreamReader_Read_m10308 (UnexceptionalStreamReader_t3329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t UnexceptionalStreamReader_Read_m10309 (UnexceptionalStreamReader_t3329 * __this, CharU5BU5D_t200* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
 bool UnexceptionalStreamReader_CheckEOL_m10310 (UnexceptionalStreamReader_t3329 * __this, uint16_t ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
 String_t* UnexceptionalStreamReader_ReadLine_m10311 (UnexceptionalStreamReader_t3329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
 String_t* UnexceptionalStreamReader_ReadToEnd_m10312 (UnexceptionalStreamReader_t3329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
