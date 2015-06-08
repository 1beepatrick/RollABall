#pragma once

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t3113;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
 void DSASignatureDeformatter__ctor_m11298 (DSASignatureDeformatter_t3113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter__ctor_m8232 (DSASignatureDeformatter_t3113 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
 void DSASignatureDeformatter_SetHashAlgorithm_m8233 (DSASignatureDeformatter_t3113 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter_SetKey_m11299 (DSASignatureDeformatter_t3113 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool DSASignatureDeformatter_VerifySignature_m8234 (DSASignatureDeformatter_t3113 * __this, ByteU5BU5D_t433* ___rgbHash, ByteU5BU5D_t433* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
