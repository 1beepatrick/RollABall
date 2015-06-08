#pragma once

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t3562;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3121;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
 void TripleDESTransform__ctor_m11544 (TripleDESTransform_t3562 * __this, TripleDES_t3121 * ___algo, bool ___encryption, ByteU5BU5D_t433* ___key, ByteU5BU5D_t433* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
 void TripleDESTransform_ECB_m11545 (TripleDESTransform_t3562 * __this, ByteU5BU5D_t433* ___input, ByteU5BU5D_t433* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
 ByteU5BU5D_t433* TripleDESTransform_GetStrongKey_m11546 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
