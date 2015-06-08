#pragma once

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t3529;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3006;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m11277 (DESCryptoServiceProvider_t3529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m11278 (DESCryptoServiceProvider_t3529 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m11279 (DESCryptoServiceProvider_t3529 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m11280 (DESCryptoServiceProvider_t3529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m11281 (DESCryptoServiceProvider_t3529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
