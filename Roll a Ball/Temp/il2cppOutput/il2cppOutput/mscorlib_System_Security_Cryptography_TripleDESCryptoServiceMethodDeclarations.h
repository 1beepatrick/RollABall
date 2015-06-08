#pragma once

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t3561;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3006;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
 void TripleDESCryptoServiceProvider__ctor_m11539 (TripleDESCryptoServiceProvider_t3561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
 void TripleDESCryptoServiceProvider_GenerateIV_m11540 (TripleDESCryptoServiceProvider_t3561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
 void TripleDESCryptoServiceProvider_GenerateKey_m11541 (TripleDESCryptoServiceProvider_t3561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m11542 (TripleDESCryptoServiceProvider_t3561 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m11543 (TripleDESCryptoServiceProvider_t3561 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
