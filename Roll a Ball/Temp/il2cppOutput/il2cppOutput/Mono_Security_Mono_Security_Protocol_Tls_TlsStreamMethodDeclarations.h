#pragma once

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3050;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
 void TlsStream__ctor_m8050 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
 void TlsStream__ctor_m8051 (TlsStream_t3050 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
 bool TlsStream_get_EOF_m8052 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
 bool TlsStream_get_CanWrite_m8053 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
 bool TlsStream_get_CanRead_m8054 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
 bool TlsStream_get_CanSeek_m8055 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
 int64_t TlsStream_get_Position_m8056 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
 void TlsStream_set_Position_m8057 (TlsStream_t3050 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
 int64_t TlsStream_get_Length_m8058 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
 ByteU5BU5D_t433* TlsStream_ReadSmallValue_m8059 (TlsStream_t3050 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
 uint8_t TlsStream_ReadByte_m8060 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
 int16_t TlsStream_ReadInt16_m8061 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
 int32_t TlsStream_ReadInt24_m8062 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
 ByteU5BU5D_t433* TlsStream_ReadBytes_m8063 (TlsStream_t3050 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
 void TlsStream_Write_m8064 (TlsStream_t3050 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
 void TlsStream_Write_m8065 (TlsStream_t3050 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
 void TlsStream_WriteInt24_m8066 (TlsStream_t3050 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
 void TlsStream_Write_m8067 (TlsStream_t3050 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
 void TlsStream_Write_m8068 (TlsStream_t3050 * __this, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
 void TlsStream_Reset_m8069 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
 ByteU5BU5D_t433* TlsStream_ToArray_m8070 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
 void TlsStream_Flush_m8071 (TlsStream_t3050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
 void TlsStream_SetLength_m8072 (TlsStream_t3050 * __this, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t TlsStream_Seek_m8073 (TlsStream_t3050 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t TlsStream_Read_m8074 (TlsStream_t3050 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
 void TlsStream_Write_m8075 (TlsStream_t3050 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
