#pragma once

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3114;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
 void RSAPKCS1SignatureDeformatter__ctor_m11423 (RSAPKCS1SignatureDeformatter_t3114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter__ctor_m8235 (RSAPKCS1SignatureDeformatter_t3114 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m8236 (RSAPKCS1SignatureDeformatter_t3114 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter_SetKey_m11424 (RSAPKCS1SignatureDeformatter_t3114 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSAPKCS1SignatureDeformatter_VerifySignature_m8237 (RSAPKCS1SignatureDeformatter_t3114 * __this, ByteU5BU5D_t433* ___rgbHash, ByteU5BU5D_t433* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
