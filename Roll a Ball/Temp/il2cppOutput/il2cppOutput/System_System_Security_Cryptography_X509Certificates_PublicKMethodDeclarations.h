#pragma once

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2806;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2804;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.Security.Cryptography.Oid
struct Oid_t2805;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2807;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.DSA
struct DSA_t2808;
// System.Security.Cryptography.RSA
struct RSA_t2809;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
 void PublicKey__ctor_m6278 (PublicKey_t2806 * __this, X509Certificate_t2807 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
 AsnEncodedData_t2804 * PublicKey_get_EncodedKeyValue_m6279 (PublicKey_t2806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
 AsnEncodedData_t2804 * PublicKey_get_EncodedParameters_m6280 (PublicKey_t2806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
 AsymmetricAlgorithm_t2803 * PublicKey_get_Key_m6281 (PublicKey_t2806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
 Oid_t2805 * PublicKey_get_Oid_m6282 (PublicKey_t2806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t433* PublicKey_GetUnsignedBigInteger_m6283 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
 DSA_t2808 * PublicKey_DecodeDSA_m6284 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___rawPublicKey, ByteU5BU5D_t433* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
 RSA_t2809 * PublicKey_DecodeRSA_m6285 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
