#pragma once

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3544;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3006;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m11433 (RijndaelManaged_t3544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m11434 (RijndaelManaged_t3544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m11435 (RijndaelManaged_t3544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m11436 (RijndaelManaged_t3544 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m11437 (RijndaelManaged_t3544 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
