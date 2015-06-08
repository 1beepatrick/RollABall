#pragma once

// System.IO.StreamWriter
struct StreamWriter_t1190;
// System.IO.Stream
struct Stream_t434;
// System.Text.Encoding
struct Encoding_t951;
// System.Char[]
struct CharU5BU5D_t200;
// System.String
struct String_t;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
 void StreamWriter__ctor_m4026 (StreamWriter_t1190 * __this, Stream_t434 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamWriter__ctor_m10241 (StreamWriter_t1190 * __this, Stream_t434 * ___stream, Encoding_t951 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m10242 (StreamWriter_t1190 * __this, Stream_t434 * ___stream, Encoding_t951 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
 void StreamWriter__cctor_m10243 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
 void StreamWriter_Initialize_m10244 (StreamWriter_t1190 * __this, Encoding_t951 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
 void StreamWriter_set_AutoFlush_m10245 (StreamWriter_t1190 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
 void StreamWriter_Dispose_m10246 (StreamWriter_t1190 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
 void StreamWriter_Flush_m10247 (StreamWriter_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
 void StreamWriter_FlushBytes_m10248 (StreamWriter_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
 void StreamWriter_Decode_m10249 (StreamWriter_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void StreamWriter_Write_m10250 (StreamWriter_t1190 * __this, CharU5BU5D_t200* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
 void StreamWriter_LowLevelWrite_m10251 (StreamWriter_t1190 * __this, CharU5BU5D_t200* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
 void StreamWriter_LowLevelWrite_m10252 (StreamWriter_t1190 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
 void StreamWriter_Write_m10253 (StreamWriter_t1190 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
 void StreamWriter_Write_m10254 (StreamWriter_t1190 * __this, CharU5BU5D_t200* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
 void StreamWriter_Write_m10255 (StreamWriter_t1190 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
 void StreamWriter_Close_m10256 (StreamWriter_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
 void StreamWriter_Finalize_m10257 (StreamWriter_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
