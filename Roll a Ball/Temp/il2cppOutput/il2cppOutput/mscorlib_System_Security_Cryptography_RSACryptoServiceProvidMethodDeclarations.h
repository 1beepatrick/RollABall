#pragma once

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t2958;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3108;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t647;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
 void RSACryptoServiceProvider__ctor_m11411 (RSACryptoServiceProvider_t2958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider__ctor_m8204 (RSACryptoServiceProvider_t2958 * __this, CspParameters_t3108 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
 void RSACryptoServiceProvider__ctor_m7126 (RSACryptoServiceProvider_t2958 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
 void RSACryptoServiceProvider__cctor_m11412 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider_Common_m11413 (RSACryptoServiceProvider_t2958 * __this, int32_t ___dwKeySize, CspParameters_t3108 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
 void RSACryptoServiceProvider_Finalize_m11414 (RSACryptoServiceProvider_t2958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
 int32_t RSACryptoServiceProvider_get_KeySize_m11415 (RSACryptoServiceProvider_t2958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
 bool RSACryptoServiceProvider_get_PublicOnly_m7105 (RSACryptoServiceProvider_t2958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
 ByteU5BU5D_t433* RSACryptoServiceProvider_DecryptValue_m11416 (RSACryptoServiceProvider_t2958 * __this, ByteU5BU5D_t433* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
 ByteU5BU5D_t433* RSACryptoServiceProvider_EncryptValue_m11417 (RSACryptoServiceProvider_t2958 * __this, ByteU5BU5D_t433* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
 RSAParameters_t2960  RSACryptoServiceProvider_ExportParameters_m11418 (RSACryptoServiceProvider_t2958 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSACryptoServiceProvider_ImportParameters_m11419 (RSACryptoServiceProvider_t2958 * __this, RSAParameters_t2960  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
 void RSACryptoServiceProvider_Dispose_m11420 (RSACryptoServiceProvider_t2958 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void RSACryptoServiceProvider_OnKeyGenerated_m11421 (RSACryptoServiceProvider_t2958 * __this, Object_t * ___sender, EventArgs_t647 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
