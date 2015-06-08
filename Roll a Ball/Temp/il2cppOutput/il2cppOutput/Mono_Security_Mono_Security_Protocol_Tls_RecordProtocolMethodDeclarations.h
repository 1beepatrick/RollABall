#pragma once

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3048;
// Mono.Security.Protocol.Tls.Context
struct Context_t3039;
// System.IO.Stream
struct Stream_t434;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3050;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3049;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t3037;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t3040;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
 void RecordProtocol__ctor_m7856 (RecordProtocol_t3048 * __this, Stream_t434 * ___innerStream, Context_t3039 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
 void RecordProtocol__cctor_m7857 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
 Context_t3039 * RecordProtocol_get_Context_m7858 (RecordProtocol_t3048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void RecordProtocol_SendRecord_m7859 (RecordProtocol_t3048 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
 void RecordProtocol_ProcessChangeCipherSpec_m7860 (RecordProtocol_t3048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t3049 * RecordProtocol_GetMessage_m7861 (RecordProtocol_t3048 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginReceiveRecord_m7862 (RecordProtocol_t3048 * __this, Stream_t434 * ___record, AsyncCallback_t64 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalReceiveRecordCallback_m7863 (RecordProtocol_t3048 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
 ByteU5BU5D_t433* RecordProtocol_EndReceiveRecord_m7864 (RecordProtocol_t3048 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
 ByteU5BU5D_t433* RecordProtocol_ReceiveRecord_m7865 (RecordProtocol_t3048 * __this, Stream_t434 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
 ByteU5BU5D_t433* RecordProtocol_ReadRecordBuffer_m7866 (RecordProtocol_t3048 * __this, int32_t ___contentType, Stream_t434 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
 ByteU5BU5D_t433* RecordProtocol_ReadClientHelloV2_m7867 (RecordProtocol_t3048 * __this, Stream_t434 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
 ByteU5BU5D_t433* RecordProtocol_ReadStandardRecordBuffer_m7868 (RecordProtocol_t3048 * __this, Stream_t434 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_ProcessAlert_m7869 (RecordProtocol_t3048 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m7870 (RecordProtocol_t3048 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m7871 (RecordProtocol_t3048 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
 void RecordProtocol_SendAlert_m7872 (RecordProtocol_t3048 * __this, Alert_t3037 * ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
 void RecordProtocol_SendChangeCipherSpec_m7873 (RecordProtocol_t3048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m7874 (RecordProtocol_t3048 * __this, uint8_t ___handshakeType, AsyncCallback_t64 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalSendRecordCallback_m7875 (RecordProtocol_t3048 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m7876 (RecordProtocol_t3048 * __this, uint8_t ___contentType, ByteU5BU5D_t433* ___recordData, AsyncCallback_t64 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
 void RecordProtocol_EndSendRecord_m7877 (RecordProtocol_t3048 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 void RecordProtocol_SendRecord_m7878 (RecordProtocol_t3048 * __this, uint8_t ___contentType, ByteU5BU5D_t433* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t433* RecordProtocol_EncodeRecord_m7879 (RecordProtocol_t3048 * __this, uint8_t ___contentType, ByteU5BU5D_t433* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t433* RecordProtocol_EncodeRecord_m7880 (RecordProtocol_t3048 * __this, uint8_t ___contentType, ByteU5BU5D_t433* ___recordData, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t433* RecordProtocol_encryptRecordFragment_m7881 (RecordProtocol_t3048 * __this, uint8_t ___contentType, ByteU5BU5D_t433* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t433* RecordProtocol_decryptRecordFragment_m7882 (RecordProtocol_t3048 * __this, uint8_t ___contentType, ByteU5BU5D_t433* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
 bool RecordProtocol_Compare_m7883 (RecordProtocol_t3048 * __this, ByteU5BU5D_t433* ___array1, ByteU5BU5D_t433* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
 void RecordProtocol_ProcessCipherSpecV2Buffer_m7884 (RecordProtocol_t3048 * __this, int32_t ___protocol, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
 CipherSuite_t3040 * RecordProtocol_MapV2CipherCode_m7885 (RecordProtocol_t3048 * __this, String_t* ___prefix, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
