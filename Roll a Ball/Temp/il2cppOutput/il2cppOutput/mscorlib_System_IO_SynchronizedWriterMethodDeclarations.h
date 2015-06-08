#pragma once

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t3328;
// System.IO.TextWriter
struct TextWriter_t1191;
// System.Char[]
struct CharU5BU5D_t200;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m10296 (SynchronizedWriter_t3328 * __this, TextWriter_t1191 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m10297 (SynchronizedWriter_t3328 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m10298 (SynchronizedWriter_t3328 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m10299 (SynchronizedWriter_t3328 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m10300 (SynchronizedWriter_t3328 * __this, CharU5BU5D_t200* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m10301 (SynchronizedWriter_t3328 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m10302 (SynchronizedWriter_t3328 * __this, CharU5BU5D_t200* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m10303 (SynchronizedWriter_t3328 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m10304 (SynchronizedWriter_t3328 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
