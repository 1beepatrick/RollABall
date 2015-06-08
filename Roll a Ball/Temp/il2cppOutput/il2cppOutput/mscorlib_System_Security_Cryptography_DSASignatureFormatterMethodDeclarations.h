#pragma once

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t3530;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
 void DSASignatureFormatter__ctor_m11300 (DSASignatureFormatter_t3530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t433* DSASignatureFormatter_CreateSignature_m11301 (DSASignatureFormatter_t3530 * __this, ByteU5BU5D_t433* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
 void DSASignatureFormatter_SetHashAlgorithm_m11302 (DSASignatureFormatter_t3530 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureFormatter_SetKey_m11303 (DSASignatureFormatter_t3530 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
