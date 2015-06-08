#pragma once

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t3004;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3006;

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
 void ARC4Managed__ctor_m7453 (ARC4Managed_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
 void ARC4Managed_Finalize_m7454 (ARC4Managed_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
 void ARC4Managed_Dispose_m7455 (ARC4Managed_t3004 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
 ByteU5BU5D_t433* ARC4Managed_get_Key_m7456 (ARC4Managed_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
 void ARC4Managed_set_Key_m7457 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
 bool ARC4Managed_get_CanReuseTransform_m7458 (ARC4Managed_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateEncryptor_m7459 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateDecryptor_m7460 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___rgbKey, ByteU5BU5D_t433* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
 void ARC4Managed_GenerateIV_m7461 (ARC4Managed_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
 void ARC4Managed_GenerateKey_m7462 (ARC4Managed_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
 void ARC4Managed_KeySetup_m7463 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
 void ARC4Managed_CheckInput_m7464 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_TransformBlock_m7465 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t433* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_InternalTransformBlock_m7466 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t433* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t433* ARC4Managed_TransformFinalBlock_m7467 (ARC4Managed_t3004 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
