#pragma once

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3047;
// System.IO.Stream
struct Stream_t434;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3046;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3049;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3050;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
 void ClientRecordProtocol__ctor_m7745 (ClientRecordProtocol_t3047 * __this, Stream_t434 * ___innerStream, ClientContext_t3046 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t3049 * ClientRecordProtocol_GetMessage_m7746 (ClientRecordProtocol_t3047 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
 void ClientRecordProtocol_ProcessHandshakeMessage_m7747 (ClientRecordProtocol_t3047 * __this, TlsStream_t3050 * ___handMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t3049 * ClientRecordProtocol_createClientHandshakeMessage_m7748 (ClientRecordProtocol_t3047 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 HandshakeMessage_t3049 * ClientRecordProtocol_createServerHandshakeMessage_m7749 (ClientRecordProtocol_t3047 * __this, uint8_t ___type, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
