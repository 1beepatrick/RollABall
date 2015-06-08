#pragma once

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t3538;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3006;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
 void RC2CryptoServiceProvider__ctor_m11364 (RC2CryptoServiceProvider_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
 int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m11365 (RC2CryptoServiceProvider_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateDecryptor_m11366 (RC2CryptoServiceProvider_t3538 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateEncryptor_m11367 (RC2CryptoServiceProvider_t3538 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
 void RC2CryptoServiceProvider_GenerateIV_m11368 (RC2CryptoServiceProvider_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
 void RC2CryptoServiceProvider_GenerateKey_m11369 (RC2CryptoServiceProvider_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
