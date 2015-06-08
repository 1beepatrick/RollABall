#pragma once

// System.IO.StreamReader
struct StreamReader_t431;
// System.IO.Stream
struct Stream_t434;
// System.Text.Encoding
struct Encoding_t951;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t200;

// System.Void System.IO.StreamReader::.ctor()
 void StreamReader__ctor_m10225 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
 void StreamReader__ctor_m4023 (StreamReader_t431 * __this, Stream_t434 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamReader__ctor_m10226 (StreamReader_t431 * __this, Stream_t434 * ___stream, Encoding_t951 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m10227 (StreamReader_t431 * __this, Stream_t434 * ___stream, Encoding_t951 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
 void StreamReader__ctor_m10228 (StreamReader_t431 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m10229 (StreamReader_t431 * __this, String_t* ___path, Encoding_t951 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
 void StreamReader__cctor_m10230 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader_Initialize_m10231 (StreamReader_t431 * __this, Stream_t434 * ___stream, Encoding_t951 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
 void StreamReader_Dispose_m10232 (StreamReader_t431 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
 int32_t StreamReader_DoChecks_m10233 (StreamReader_t431 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
 int32_t StreamReader_ReadBuffer_m10234 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
 int32_t StreamReader_Peek_m10235 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
 int32_t StreamReader_Read_m10236 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StreamReader_Read_m10237 (StreamReader_t431 * __this, CharU5BU5D_t200* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
 int32_t StreamReader_FindNextEOL_m10238 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
 String_t* StreamReader_ReadLine_m10239 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
 String_t* StreamReader_ReadToEnd_m10240 (StreamReader_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
