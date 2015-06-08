#pragma once

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t3062;
// System.IO.Stream
struct Stream_t434;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2789;
// System.Net.HttpWebRequest
struct HttpWebRequest_t2790;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2776;
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
 void HttpsClientStream__ctor_m7830 (HttpsClientStream_t3062 * __this, Stream_t434 * ___stream, X509CertificateCollection_t2789 * ___clientCertificates, HttpWebRequest_t2790 * ___request, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
 bool HttpsClientStream_get_TrustFailure_m7831 (HttpsClientStream_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m7832 (HttpsClientStream_t3062 * __this, X509Certificate_t2776 * ___certificate, Int32U5BU5D_t2359* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2776 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m7833 (Object_t * __this/* static, unused */, X509CertificateCollection_t2789 * ___clientCerts, X509Certificate_t2776 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2789 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t2803 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m7834 (Object_t * __this/* static, unused */, X509Certificate_t2776 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
