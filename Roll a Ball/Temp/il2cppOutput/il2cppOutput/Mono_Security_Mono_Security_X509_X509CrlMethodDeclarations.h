#pragma once

// Mono.Security.X509.X509Crl
struct X509Crl_t2830;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2971;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t2832;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2807;
// System.Security.Cryptography.DSA
struct DSA_t2808;
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m7597 (X509Crl_t2830 * __this, ByteU5BU5D_t433* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m7598 (X509Crl_t2830 * __this, ByteU5BU5D_t433* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t2971 * X509Crl_get_Extensions_m7221 (X509Crl_t2830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t433* X509Crl_get_Hash_m7599 (X509Crl_t2830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m7229 (X509Crl_t2830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t459  X509Crl_get_NextUpdate_m7227 (X509Crl_t2830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m7600 (X509Crl_t2830 * __this, ByteU5BU5D_t433* ___array1, ByteU5BU5D_t433* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t2832 * X509Crl_GetCrlEntry_m7225 (X509Crl_t2830 * __this, X509Certificate_t2807 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t2832 * X509Crl_GetCrlEntry_m7601 (X509Crl_t2830 * __this, ByteU5BU5D_t433* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m7602 (X509Crl_t2830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m7603 (X509Crl_t2830 * __this, DSA_t2808 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m7604 (X509Crl_t2830 * __this, RSA_t2809 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m7224 (X509Crl_t2830 * __this, AsymmetricAlgorithm_t2803 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
