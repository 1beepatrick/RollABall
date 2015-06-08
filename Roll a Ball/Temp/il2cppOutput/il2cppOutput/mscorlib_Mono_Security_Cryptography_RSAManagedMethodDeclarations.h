#pragma once

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3207;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3206;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t3187;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
 void RSAManaged__ctor_m9396 (RSAManaged_t3207 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
 void RSAManaged_add_KeyGenerated_m9397 (RSAManaged_t3207 * __this, KeyGeneratedEventHandler_t3206 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
 void RSAManaged_remove_KeyGenerated_m9398 (RSAManaged_t3207 * __this, KeyGeneratedEventHandler_t3206 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
 void RSAManaged_Finalize_m9399 (RSAManaged_t3207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
 void RSAManaged_GenerateKeyPair_m9400 (RSAManaged_t3207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
 int32_t RSAManaged_get_KeySize_m9401 (RSAManaged_t3207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
 bool RSAManaged_get_PublicOnly_m9402 (RSAManaged_t3207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
 ByteU5BU5D_t433* RSAManaged_DecryptValue_m9403 (RSAManaged_t3207 * __this, ByteU5BU5D_t433* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
 ByteU5BU5D_t433* RSAManaged_EncryptValue_m9404 (RSAManaged_t3207 * __this, ByteU5BU5D_t433* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
 RSAParameters_t2960  RSAManaged_ExportParameters_m9405 (RSAManaged_t3207 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSAManaged_ImportParameters_m9406 (RSAManaged_t3207 * __this, RSAParameters_t2960  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
 void RSAManaged_Dispose_m9407 (RSAManaged_t3207 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
 String_t* RSAManaged_ToXmlString_m9408 (RSAManaged_t3207 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
 bool RSAManaged_get_IsCrtPossible_m9409 (RSAManaged_t3207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
 ByteU5BU5D_t433* RSAManaged_GetPaddedValue_m9410 (RSAManaged_t3207 * __this, BigInteger_t3187 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
