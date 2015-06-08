#pragma once

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t3195;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.RSA
struct RSA_t2809;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
 int32_t CryptoConvert_ToInt32LE_m9295 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
 uint32_t CryptoConvert_ToUInt32LE_m9296 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
 ByteU5BU5D_t433* CryptoConvert_GetBytesLE_m9297 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
 ByteU5BU5D_t433* CryptoConvert_ToCapiPrivateKeyBlob_m9298 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
 RSA_t2809 * CryptoConvert_FromCapiPublicKeyBlob_m9299 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___blob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
 RSA_t2809 * CryptoConvert_FromCapiPublicKeyBlob_m9300 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___blob, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
 ByteU5BU5D_t433* CryptoConvert_ToCapiPublicKeyBlob_m9301 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
 ByteU5BU5D_t433* CryptoConvert_ToCapiKeyBlob_m9302 (Object_t * __this/* static, unused */, RSA_t2809 * ___rsa, bool ___includePrivateKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
