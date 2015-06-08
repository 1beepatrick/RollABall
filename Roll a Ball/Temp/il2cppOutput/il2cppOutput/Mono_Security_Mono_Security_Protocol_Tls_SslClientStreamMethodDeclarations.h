#pragma once

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3045;
// System.IO.Stream
struct Stream_t434;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2789;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2776;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3073;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3060;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3061;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3074;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3072;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2968;
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
 void SslClientStream__ctor_m7904 (SslClientStream_t3045 * __this, Stream_t434 * ___stream, String_t* ___targetHost, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
 void SslClientStream__ctor_m7905 (SslClientStream_t3045 * __this, Stream_t434 * ___stream, String_t* ___targetHost, X509Certificate_t2776 * ___clientCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m7906 (SslClientStream_t3045 * __this, Stream_t434 * ___stream, String_t* ___targetHost, X509CertificateCollection_t2789 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
 void SslClientStream__ctor_m7907 (SslClientStream_t3045 * __this, Stream_t434 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m7908 (SslClientStream_t3045 * __this, Stream_t434 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t2789 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_add_ServerCertValidation_m7909 (SslClientStream_t3045 * __this, CertificateValidationCallback_t3073 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_remove_ServerCertValidation_m7910 (SslClientStream_t3045 * __this, CertificateValidationCallback_t3073 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_add_ClientCertSelection_m7911 (SslClientStream_t3045 * __this, CertificateSelectionCallback_t3060 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_remove_ClientCertSelection_m7912 (SslClientStream_t3045 * __this, CertificateSelectionCallback_t3060 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_add_PrivateKeySelection_m7913 (SslClientStream_t3045 * __this, PrivateKeySelectionCallback_t3061 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_remove_PrivateKeySelection_m7914 (SslClientStream_t3045 * __this, PrivateKeySelectionCallback_t3061 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_add_ServerCertValidation2_m7915 (SslClientStream_t3045 * __this, CertificateValidationCallback2_t3074 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_remove_ServerCertValidation2_m7916 (SslClientStream_t3045 * __this, CertificateValidationCallback2_t3074 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
 Stream_t434 * SslClientStream_get_InputBuffer_m7917 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
 X509CertificateCollection_t2789 * SslClientStream_get_ClientCertificates_m7918 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
 X509Certificate_t2776 * SslClientStream_get_SelectedClientCertificate_m7919 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
 CertificateValidationCallback_t3073 * SslClientStream_get_ServerCertValidationDelegate_m7920 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_set_ServerCertValidationDelegate_m7921 (SslClientStream_t3045 * __this, CertificateValidationCallback_t3073 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
 CertificateSelectionCallback_t3060 * SslClientStream_get_ClientCertSelectionDelegate_m7922 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_set_ClientCertSelectionDelegate_m7923 (SslClientStream_t3045 * __this, CertificateSelectionCallback_t3060 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
 PrivateKeySelectionCallback_t3061 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m7924 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_set_PrivateKeyCertSelectionDelegate_m7925 (SslClientStream_t3045 * __this, PrivateKeySelectionCallback_t3061 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
 void SslClientStream_Finalize_m7926 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
 void SslClientStream_Dispose_m7927 (SslClientStream_t3045 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
 Object_t * SslClientStream_OnBeginNegotiateHandshake_m7928 (SslClientStream_t3045 * __this, AsyncCallback_t64 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
 void SslClientStream_SafeReceiveRecord_m7929 (SslClientStream_t3045 * __this, Stream_t434 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
 void SslClientStream_OnNegotiateHandshakeCallback_m7930 (SslClientStream_t3045 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2776 * SslClientStream_OnLocalCertificateSelection_m7931 (SslClientStream_t3045 * __this, X509CertificateCollection_t2789 * ___clientCertificates, X509Certificate_t2776 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2789 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
 bool SslClientStream_get_HaveRemoteValidation2Callback_m7932 (SslClientStream_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t3072 * SslClientStream_OnRemoteCertificateValidation2_m7933 (SslClientStream_t3045 * __this, X509CertificateCollection_t2968 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_OnRemoteCertificateValidation_m7934 (SslClientStream_t3045 * __this, X509Certificate_t2776 * ___certificate, Int32U5BU5D_t2359* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_RaiseServerCertificateValidation_m7935 (SslClientStream_t3045 * __this, X509Certificate_t2776 * ___certificate, Int32U5BU5D_t2359* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t3072 * SslClientStream_RaiseServerCertificateValidation2_m7936 (SslClientStream_t3045 * __this, X509CertificateCollection_t2968 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2776 * SslClientStream_RaiseClientCertificateSelection_m7937 (SslClientStream_t3045 * __this, X509CertificateCollection_t2789 * ___clientCertificates, X509Certificate_t2776 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2789 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t2803 * SslClientStream_OnLocalPrivateKeySelection_m7938 (SslClientStream_t3045 * __this, X509Certificate_t2776 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t2803 * SslClientStream_RaisePrivateKeySelection_m7939 (SslClientStream_t3045 * __this, X509Certificate_t2776 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
