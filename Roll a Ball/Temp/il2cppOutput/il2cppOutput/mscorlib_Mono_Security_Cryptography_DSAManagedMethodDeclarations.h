#pragma once

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3199;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2993;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3198;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
 void DSAManaged__ctor_m9316 (DSAManaged_t3199 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_add_KeyGenerated_m9317 (DSAManaged_t3199 * __this, KeyGeneratedEventHandler_t3198 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_remove_KeyGenerated_m9318 (DSAManaged_t3199 * __this, KeyGeneratedEventHandler_t3198 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
 void DSAManaged_Finalize_m9319 (DSAManaged_t3199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
 void DSAManaged_Generate_m9320 (DSAManaged_t3199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
 void DSAManaged_GenerateKeyPair_m9321 (DSAManaged_t3199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
 void DSAManaged_add_m9322 (DSAManaged_t3199 * __this, ByteU5BU5D_t433* ___a, ByteU5BU5D_t433* ___b, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
 void DSAManaged_GenerateParams_m9323 (DSAManaged_t3199 * __this, int32_t ___keyLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
 RandomNumberGenerator_t2993 * DSAManaged_get_Random_m9324 (DSAManaged_t3199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
 int32_t DSAManaged_get_KeySize_m9325 (DSAManaged_t3199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
 bool DSAManaged_get_PublicOnly_m9326 (DSAManaged_t3199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
 ByteU5BU5D_t433* DSAManaged_NormalizeArray_m9327 (DSAManaged_t3199 * __this, ByteU5BU5D_t433* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
 DSAParameters_t2962  DSAManaged_ExportParameters_m9328 (DSAManaged_t3199 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSAManaged_ImportParameters_m9329 (DSAManaged_t3199 * __this, DSAParameters_t2962  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
 ByteU5BU5D_t433* DSAManaged_CreateSignature_m9330 (DSAManaged_t3199 * __this, ByteU5BU5D_t433* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
 bool DSAManaged_VerifySignature_m9331 (DSAManaged_t3199 * __this, ByteU5BU5D_t433* ___rgbHash, ByteU5BU5D_t433* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
 void DSAManaged_Dispose_m9332 (DSAManaged_t3199 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
