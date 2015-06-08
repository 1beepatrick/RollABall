#pragma once

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t3076;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.RSA
struct RSA_t2809;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m7946 (SslHandshakeHash_t3076 * __this, ByteU5BU5D_t433* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m7947 (SslHandshakeHash_t3076 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t433* SslHandshakeHash_HashFinal_m7948 (SslHandshakeHash_t3076 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m7949 (SslHandshakeHash_t3076 * __this, ByteU5BU5D_t433* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t433* SslHandshakeHash_CreateSignature_m7950 (SslHandshakeHash_t3076 * __this, RSA_t2809 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m7951 (SslHandshakeHash_t3076 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
