#pragma once

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t2961;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3108;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t647;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
 void DSACryptoServiceProvider__ctor_m11287 (DSACryptoServiceProvider_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
 void DSACryptoServiceProvider__ctor_m7125 (DSACryptoServiceProvider_t2961 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
 void DSACryptoServiceProvider__ctor_m11288 (DSACryptoServiceProvider_t2961 * __this, int32_t ___dwKeySize, CspParameters_t3108 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
 void DSACryptoServiceProvider__cctor_m11289 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
 void DSACryptoServiceProvider_Finalize_m11290 (DSACryptoServiceProvider_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
 int32_t DSACryptoServiceProvider_get_KeySize_m11291 (DSACryptoServiceProvider_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
 bool DSACryptoServiceProvider_get_PublicOnly_m7111 (DSACryptoServiceProvider_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
 DSAParameters_t2962  DSACryptoServiceProvider_ExportParameters_m11292 (DSACryptoServiceProvider_t2961 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSACryptoServiceProvider_ImportParameters_m11293 (DSACryptoServiceProvider_t2961 * __this, DSAParameters_t2962  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
 ByteU5BU5D_t433* DSACryptoServiceProvider_CreateSignature_m11294 (DSACryptoServiceProvider_t2961 * __this, ByteU5BU5D_t433* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
 bool DSACryptoServiceProvider_VerifySignature_m11295 (DSACryptoServiceProvider_t2961 * __this, ByteU5BU5D_t433* ___rgbHash, ByteU5BU5D_t433* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
 void DSACryptoServiceProvider_Dispose_m11296 (DSACryptoServiceProvider_t2961 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void DSACryptoServiceProvider_OnKeyGenerated_m11297 (DSACryptoServiceProvider_t2961 * __this, Object_t * ___sender, EventArgs_t647 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
