#pragma once

// System.Security.Cryptography.DESTransform
struct DESTransform_t3528;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3017;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.UInt32[]
struct UInt32U5BU5D_t2992;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
 void DESTransform__ctor_m11268 (DESTransform_t3528 * __this, SymmetricAlgorithm_t3017 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t433* ___key, ByteU5BU5D_t433* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
 void DESTransform__cctor_m11269 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
 uint32_t DESTransform_CipherFunct_m11270 (DESTransform_t3528 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
 void DESTransform_Permutation_m11271 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___input, ByteU5BU5D_t433* ___output, UInt32U5BU5D_t2992* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
 void DESTransform_BSwap_m11272 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
 void DESTransform_SetKey_m11273 (DESTransform_t3528 * __this, ByteU5BU5D_t433* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
 void DESTransform_ProcessBlock_m11274 (DESTransform_t3528 * __this, ByteU5BU5D_t433* ___input, ByteU5BU5D_t433* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
 void DESTransform_ECB_m11275 (DESTransform_t3528 * __this, ByteU5BU5D_t433* ___input, ByteU5BU5D_t433* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
 ByteU5BU5D_t433* DESTransform_GetStrongKey_m11276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
