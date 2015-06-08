#pragma once

// Mono.Security.X509.PKCS12
struct PKCS12_t3213;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3212;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3017;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3214;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3203;
// Mono.Security.ASN1
struct ASN1_t3209;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m9444 (PKCS12_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m9445 (PKCS12_t3213 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m9446 (PKCS12_t3213 * __this, ByteU5BU5D_t433* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m9447 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m9448 (PKCS12_t3213 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m9449 (PKCS12_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m9450 (PKCS12_t3213 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t3212 * PKCS12_get_Certificates_m9451 (PKCS12_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m9452 (PKCS12_t3213 * __this, ByteU5BU5D_t433* ___expected, ByteU5BU5D_t433* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t3017 * PKCS12_GetSymmetricAlgorithm_m9453 (PKCS12_t3213 * __this, String_t* ___algorithmOid, ByteU5BU5D_t433* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t433* PKCS12_Decrypt_m9454 (PKCS12_t3213 * __this, String_t* ___algorithmOid, ByteU5BU5D_t433* ___salt, int32_t ___iterationCount, ByteU5BU5D_t433* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t433* PKCS12_Decrypt_m9455 (PKCS12_t3213 * __this, EncryptedData_t3214 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t2962  PKCS12_GetExistingParameters_m9456 (PKCS12_t3213 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m9457 (PKCS12_t3213 * __this, PrivateKeyInfo_t3203 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m9458 (PKCS12_t3213 * __this, ASN1_t3209 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t433* PKCS12_MAC_m9459 (PKCS12_t3213 * __this, ByteU5BU5D_t433* ___password, ByteU5BU5D_t433* ___salt, int32_t ___iterations, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m9460 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
