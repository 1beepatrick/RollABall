#pragma once

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3203;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Security.Cryptography.DSA
struct DSA_t2808;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m9377 (PrivateKeyInfo_t3203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m9378 (PrivateKeyInfo_t3203 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t433* PrivateKeyInfo_get_PrivateKey_m9379 (PrivateKeyInfo_t3203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m9380 (PrivateKeyInfo_t3203 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t433* PrivateKeyInfo_RemoveLeadingZero_m9381 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t433* PrivateKeyInfo_Normalize_m9382 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t2809 * PrivateKeyInfo_DecodeRSA_m9383 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t2808 * PrivateKeyInfo_DecodeDSA_m9384 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___privateKey, DSAParameters_t2962  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
