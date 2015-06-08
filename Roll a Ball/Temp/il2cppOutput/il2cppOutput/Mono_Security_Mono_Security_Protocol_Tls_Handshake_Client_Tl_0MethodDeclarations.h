#pragma once

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t3083;
// Mono.Security.Protocol.Tls.Context
struct Context_t3039;
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m8094 (TlsClientCertificateVerify_t3083 * __this, Context_t3039 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m8095 (TlsClientCertificateVerify_t3083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m8096 (TlsClientCertificateVerify_t3083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m8097 (TlsClientCertificateVerify_t3083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t2809 * TlsClientCertificateVerify_getClientCertRSA_m8098 (TlsClientCertificateVerify_t3083 * __this, RSA_t2809 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t433* TlsClientCertificateVerify_getUnsignedBigInteger_m8099 (TlsClientCertificateVerify_t3083 * __this, ByteU5BU5D_t433* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
