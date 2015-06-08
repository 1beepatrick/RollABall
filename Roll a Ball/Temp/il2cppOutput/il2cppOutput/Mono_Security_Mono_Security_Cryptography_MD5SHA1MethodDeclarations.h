#pragma once

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t3034;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.RSA
struct RSA_t2809;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
 void MD5SHA1__ctor_m7664 (MD5SHA1_t3034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
 void MD5SHA1_Initialize_m7665 (MD5SHA1_t3034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
 ByteU5BU5D_t433* MD5SHA1_HashFinal_m7666 (MD5SHA1_t3034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5SHA1_HashCore_m7667 (MD5SHA1_t3034 * __this, ByteU5BU5D_t433* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t433* MD5SHA1_CreateSignature_m7668 (MD5SHA1_t3034 * __this, RSA_t2809 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
 bool MD5SHA1_VerifySignature_m7669 (MD5SHA1_t3034 * __this, RSA_t2809 * ___rsa, ByteU5BU5D_t433* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
