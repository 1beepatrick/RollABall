#pragma once

// Mono.Security.Protocol.Tls.Context
struct Context_t3039;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3054;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t3055;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t3041;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3050;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3048;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t3056;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void Context__ctor_m7768 (Context_t3039 * __this, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
 bool Context_get_AbbreviatedHandshake_m7769 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
 void Context_set_AbbreviatedHandshake_m7770 (Context_t3039 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
 bool Context_get_ProtocolNegotiated_m7771 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
 void Context_set_ProtocolNegotiated_m7772 (Context_t3039 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
 int32_t Context_get_SecurityProtocol_m7773 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void Context_set_SecurityProtocol_m7774 (Context_t3039 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
 int32_t Context_get_SecurityProtocolFlags_m7775 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
 int16_t Context_get_Protocol_m7776 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
 ByteU5BU5D_t433* Context_get_SessionId_m7777 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
 void Context_set_SessionId_m7778 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
 int32_t Context_get_CompressionMethod_m7779 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
 void Context_set_CompressionMethod_m7780 (Context_t3039 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
 TlsServerSettings_t3054 * Context_get_ServerSettings_m7781 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
 TlsClientSettings_t3055 * Context_get_ClientSettings_m7782 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
 uint8_t Context_get_LastHandshakeMsg_m7783 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void Context_set_LastHandshakeMsg_m7784 (Context_t3039 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
 int32_t Context_get_HandshakeState_m7785 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
 void Context_set_HandshakeState_m7786 (Context_t3039 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
 bool Context_get_ReceivedConnectionEnd_m7787 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
 void Context_set_ReceivedConnectionEnd_m7788 (Context_t3039 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
 bool Context_get_SentConnectionEnd_m7789 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
 void Context_set_SentConnectionEnd_m7790 (Context_t3039 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
 CipherSuiteCollection_t3041 * Context_get_SupportedCiphers_m7791 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
 void Context_set_SupportedCiphers_m7792 (Context_t3039 * __this, CipherSuiteCollection_t3041 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
 TlsStream_t3050 * Context_get_HandshakeMessages_m7793 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
 uint64_t Context_get_WriteSequenceNumber_m7794 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
 void Context_set_WriteSequenceNumber_m7795 (Context_t3039 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
 uint64_t Context_get_ReadSequenceNumber_m7796 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
 void Context_set_ReadSequenceNumber_m7797 (Context_t3039 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
 ByteU5BU5D_t433* Context_get_ClientRandom_m7798 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
 void Context_set_ClientRandom_m7799 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
 ByteU5BU5D_t433* Context_get_ServerRandom_m7800 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
 void Context_set_ServerRandom_m7801 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
 ByteU5BU5D_t433* Context_get_RandomCS_m7802 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
 void Context_set_RandomCS_m7803 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
 ByteU5BU5D_t433* Context_get_RandomSC_m7804 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
 void Context_set_RandomSC_m7805 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
 ByteU5BU5D_t433* Context_get_MasterSecret_m7806 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
 void Context_set_MasterSecret_m7807 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
 ByteU5BU5D_t433* Context_get_ClientWriteKey_m7808 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
 void Context_set_ClientWriteKey_m7809 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
 ByteU5BU5D_t433* Context_get_ServerWriteKey_m7810 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
 void Context_set_ServerWriteKey_m7811 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
 ByteU5BU5D_t433* Context_get_ClientWriteIV_m7812 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
 void Context_set_ClientWriteIV_m7813 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
 ByteU5BU5D_t433* Context_get_ServerWriteIV_m7814 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
 void Context_set_ServerWriteIV_m7815 (Context_t3039 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
 RecordProtocol_t3048 * Context_get_RecordProtocol_m7816 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
 void Context_set_RecordProtocol_m7817 (Context_t3039 * __this, RecordProtocol_t3048 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
 int32_t Context_GetUnixTime_m7818 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
 ByteU5BU5D_t433* Context_GetSecureRandomBytes_m7819 (Context_t3039 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
 void Context_Clear_m7820 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
 void Context_ClearKeyInfo_m7821 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
 int32_t Context_DecodeProtocolCode_m7822 (Context_t3039 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
 void Context_ChangeProtocol_m7823 (Context_t3039 * __this, int16_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
 SecurityParameters_t3056 * Context_get_Current_m7824 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
 SecurityParameters_t3056 * Context_get_Negotiating_m7825 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
 SecurityParameters_t3056 * Context_get_Read_m7826 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
 SecurityParameters_t3056 * Context_get_Write_m7827 (Context_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
 void Context_StartSwitchingSecurityParameters_m7828 (Context_t3039 * __this, bool ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
 void Context_EndSwitchingSecurityParameters_m7829 (Context_t3039 * __this, bool ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
