#pragma once

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3054;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2968;
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3079;
// System.String[]
struct StringU5BU5D_t42;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
 void TlsServerSettings__ctor_m8036 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
 bool TlsServerSettings_get_ServerKeyExchange_m8037 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
 void TlsServerSettings_set_ServerKeyExchange_m8038 (TlsServerSettings_t3054 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
 X509CertificateCollection_t2968 * TlsServerSettings_get_Certificates_m8039 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerSettings_set_Certificates_m8040 (TlsServerSettings_t3054 * __this, X509CertificateCollection_t2968 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
 RSA_t2809 * TlsServerSettings_get_CertificateRSA_m8041 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
 RSAParameters_t2960  TlsServerSettings_get_RsaParameters_m8042 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
 void TlsServerSettings_set_RsaParameters_m8043 (TlsServerSettings_t3054 * __this, RSAParameters_t2960  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
 void TlsServerSettings_set_SignedParams_m8044 (TlsServerSettings_t3054 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
 bool TlsServerSettings_get_CertificateRequest_m8045 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
 void TlsServerSettings_set_CertificateRequest_m8046 (TlsServerSettings_t3054 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
 void TlsServerSettings_set_CertificateTypes_m8047 (TlsServerSettings_t3054 * __this, ClientCertificateTypeU5BU5D_t3079* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
 void TlsServerSettings_set_DistinguisedNames_m8048 (TlsServerSettings_t3054 * __this, StringU5BU5D_t42* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
 void TlsServerSettings_UpdateCertificateRSA_m8049 (TlsServerSettings_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
