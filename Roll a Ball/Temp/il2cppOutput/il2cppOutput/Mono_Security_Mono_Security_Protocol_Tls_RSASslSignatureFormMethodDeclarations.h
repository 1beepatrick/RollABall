#pragma once

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t3067;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureFormatter__ctor_m7890 (RSASslSignatureFormatter_t3067 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t433* RSASslSignatureFormatter_CreateSignature_m7891 (RSASslSignatureFormatter_t3067 * __this, ByteU5BU5D_t433* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
 void RSASslSignatureFormatter_SetHashAlgorithm_m7892 (RSASslSignatureFormatter_t3067 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureFormatter_SetKey_m7893 (RSASslSignatureFormatter_t3067 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
