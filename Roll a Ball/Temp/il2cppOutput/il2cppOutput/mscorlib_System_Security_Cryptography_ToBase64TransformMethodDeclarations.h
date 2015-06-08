#pragma once

// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t3560;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.ToBase64Transform::System.IDisposable.Dispose()
 void ToBase64Transform_System_IDisposable_Dispose_m11524 (ToBase64Transform_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Finalize()
 void ToBase64Transform_Finalize_m11525 (ToBase64Transform_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanReuseTransform()
 bool ToBase64Transform_get_CanReuseTransform_m11526 (ToBase64Transform_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_InputBlockSize()
 int32_t ToBase64Transform_get_InputBlockSize_m11527 (ToBase64Transform_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_OutputBlockSize()
 int32_t ToBase64Transform_get_OutputBlockSize_m11528 (ToBase64Transform_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Dispose(System.Boolean)
 void ToBase64Transform_Dispose_m11529 (ToBase64Transform_t3560 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ToBase64Transform_TransformBlock_m11530 (ToBase64Transform_t3560 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t433* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 void ToBase64Transform_InternalTransformBlock_m11531 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t433* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t433* ToBase64Transform_TransformFinalBlock_m11532 (ToBase64Transform_t3560 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::InternalTransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t433* ToBase64Transform_InternalTransformFinalBlock_m11533 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
