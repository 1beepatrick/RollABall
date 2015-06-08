#pragma once

// System.IO.BinaryReader
struct BinaryReader_t3300;
// System.IO.Stream
struct Stream_t434;
// System.Text.Encoding
struct Encoding_t951;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Char[]
struct CharU5BU5D_t200;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
 void BinaryReader__ctor_m10026 (BinaryReader_t3300 * __this, Stream_t434 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void BinaryReader__ctor_m10027 (BinaryReader_t3300 * __this, Stream_t434 * ___input, Encoding_t951 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
 void BinaryReader_System_IDisposable_Dispose_m10028 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
 void BinaryReader_Dispose_m10029 (BinaryReader_t3300 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
 void BinaryReader_FillBuffer_m10030 (BinaryReader_t3300 * __this, int32_t ___numBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
 int32_t BinaryReader_Read_m10031 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m10032 (BinaryReader_t3300 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m10033 (BinaryReader_t3300 * __this, CharU5BU5D_t200* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
 int32_t BinaryReader_ReadCharBytes_m10034 (BinaryReader_t3300 * __this, CharU5BU5D_t200* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
 int32_t BinaryReader_Read7BitEncodedInt_m10035 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
 bool BinaryReader_ReadBoolean_m10036 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
 uint8_t BinaryReader_ReadByte_m10037 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
 uint16_t BinaryReader_ReadChar_m10038 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
 Decimal_t917  BinaryReader_ReadDecimal_m10039 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
 double BinaryReader_ReadDouble_m10040 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
 int16_t BinaryReader_ReadInt16_m10041 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
 int32_t BinaryReader_ReadInt32_m10042 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
 int64_t BinaryReader_ReadInt64_m10043 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
 int8_t BinaryReader_ReadSByte_m10044 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
 String_t* BinaryReader_ReadString_m10045 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
 float BinaryReader_ReadSingle_m10046 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
 uint16_t BinaryReader_ReadUInt16_m10047 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
 uint32_t BinaryReader_ReadUInt32_m10048 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
 uint64_t BinaryReader_ReadUInt64_m10049 (BinaryReader_t3300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
 void BinaryReader_CheckBuffer_m10050 (BinaryReader_t3300 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
