#pragma once

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3075;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2776;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2968;
// System.IO.Stream
struct Stream_t434;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2789;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t2359;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3072;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3077;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
 void SslStreamBase__ctor_m7968 (SslStreamBase_t3075 * __this, Stream_t434 * ___stream, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
 void SslStreamBase__cctor_m7969 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
 void SslStreamBase_AsyncHandshakeCallback_m7970 (SslStreamBase_t3075 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
 bool SslStreamBase_get_MightNeedHandshake_m7971 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
 void SslStreamBase_NegotiateHandshake_m7972 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::OnNegotiateHandshakeCallback(System.IAsyncResult)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_HaveRemoteValidation2Callback()
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2776 * SslStreamBase_RaiseLocalCertificateSelection_m7973 (SslStreamBase_t3075 * __this, X509CertificateCollection_t2789 * ___certificates, X509Certificate_t2776 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t2789 * ___requestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslStreamBase_RaiseRemoteCertificateValidation_m7974 (SslStreamBase_t3075 * __this, X509Certificate_t2776 * ___certificate, Int32U5BU5D_t2359* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t3072 * SslStreamBase_RaiseRemoteCertificateValidation2_m7975 (SslStreamBase_t3075 * __this, X509CertificateCollection_t2968 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t2803 * SslStreamBase_RaiseLocalPrivateKeySelection_m7976 (SslStreamBase_t3075 * __this, X509Certificate_t2776 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
 bool SslStreamBase_get_CheckCertRevocationStatus_m7977 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
 void SslStreamBase_set_CheckCertRevocationStatus_m7978 (SslStreamBase_t3075 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
 int32_t SslStreamBase_get_CipherAlgorithm_m7979 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
 int32_t SslStreamBase_get_CipherStrength_m7980 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
 int32_t SslStreamBase_get_HashAlgorithm_m7981 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
 int32_t SslStreamBase_get_HashStrength_m7982 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
 int32_t SslStreamBase_get_KeyExchangeStrength_m7983 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
 int32_t SslStreamBase_get_KeyExchangeAlgorithm_m7984 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
 int32_t SslStreamBase_get_SecurityProtocol_m7985 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
 X509Certificate_t2776 * SslStreamBase_get_ServerCertificate_m7986 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
 X509CertificateCollection_t2968 * SslStreamBase_get_ServerCertificates_m7987 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 bool SslStreamBase_BeginNegotiateHandshake_m7988 (SslStreamBase_t3075 * __this, InternalAsyncResult_t3077 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 void SslStreamBase_EndNegotiateHandshake_m7989 (SslStreamBase_t3075 * __this, InternalAsyncResult_t3077 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * SslStreamBase_BeginRead_m7990 (SslStreamBase_t3075 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t64 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 void SslStreamBase_InternalBeginRead_m7991 (SslStreamBase_t3075 * __this, InternalAsyncResult_t3077 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
 void SslStreamBase_InternalReadCallback_m7992 (SslStreamBase_t3075 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 void SslStreamBase_InternalBeginWrite_m7993 (SslStreamBase_t3075 * __this, InternalAsyncResult_t3077 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
 void SslStreamBase_InternalWriteCallback_m7994 (SslStreamBase_t3075 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * SslStreamBase_BeginWrite_m7995 (SslStreamBase_t3075 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t64 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
 int32_t SslStreamBase_EndRead_m7996 (SslStreamBase_t3075 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
 void SslStreamBase_EndWrite_m7997 (SslStreamBase_t3075 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
 void SslStreamBase_Close_m7998 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
 void SslStreamBase_Flush_m7999 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
 int32_t SslStreamBase_Read_m8000 (SslStreamBase_t3075 * __this, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
 int32_t SslStreamBase_Read_m8001 (SslStreamBase_t3075 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t SslStreamBase_Seek_m8002 (SslStreamBase_t3075 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
 void SslStreamBase_SetLength_m8003 (SslStreamBase_t3075 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
 void SslStreamBase_Write_m8004 (SslStreamBase_t3075 * __this, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
 void SslStreamBase_Write_m8005 (SslStreamBase_t3075 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
 bool SslStreamBase_get_CanRead_m8006 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
 bool SslStreamBase_get_CanSeek_m8007 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
 bool SslStreamBase_get_CanWrite_m8008 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
 int64_t SslStreamBase_get_Length_m8009 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
 int64_t SslStreamBase_get_Position_m8010 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
 void SslStreamBase_set_Position_m8011 (SslStreamBase_t3075 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
 void SslStreamBase_Finalize_m8012 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
 void SslStreamBase_Dispose_m8013 (SslStreamBase_t3075 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
 void SslStreamBase_resetBuffer_m8014 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
 void SslStreamBase_checkDisposed_m8015 (SslStreamBase_t3075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
