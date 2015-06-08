#pragma once

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t3065;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter__ctor_m7886 (RSASslSignatureDeformatter_t3065 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSASslSignatureDeformatter_VerifySignature_m7887 (RSASslSignatureDeformatter_t3065 * __this, ByteU5BU5D_t433* ___rgbHash, ByteU5BU5D_t433* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
 void RSASslSignatureDeformatter_SetHashAlgorithm_m7888 (RSASslSignatureDeformatter_t3065 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter_SetKey_m7889 (RSASslSignatureDeformatter_t3065 * __this, AsymmetricAlgorithm_t2803 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
