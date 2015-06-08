#pragma once

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t3202;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2993;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3010;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m9365 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m9366 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___array1, ByteU5BU5D_t433* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t433* PKCS1_I2OSP_m9367 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t433* PKCS1_OS2IP_m9368 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t433* PKCS1_RSAEP_m9369 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, ByteU5BU5D_t433* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t433* PKCS1_RSASP1_m9370 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, ByteU5BU5D_t433* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t433* PKCS1_RSAVP1_m9371 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, ByteU5BU5D_t433* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
 ByteU5BU5D_t433* PKCS1_Encrypt_v15_m9372 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, RandomNumberGenerator_t2993 * ___rng, ByteU5BU5D_t433* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t433* PKCS1_Sign_v15_m9373 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, HashAlgorithm_t3010 * ___hash, ByteU5BU5D_t433* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m9374 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, HashAlgorithm_t3010 * ___hash, ByteU5BU5D_t433* ___hashValue, ByteU5BU5D_t433* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m9375 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, HashAlgorithm_t3010 * ___hash, ByteU5BU5D_t433* ___hashValue, ByteU5BU5D_t433* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t433* PKCS1_Encode_v15_m9376 (Object_t * __this/* static, unused */, HashAlgorithm_t3010 * ___hash, ByteU5BU5D_t433* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
