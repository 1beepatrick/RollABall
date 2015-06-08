#pragma once

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t3546;
// System.Security.Cryptography.Rijndael
struct Rijndael_t3122;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelManagedTransform__ctor_m11449 (RijndaelManagedTransform_t3546 * __this, Rijndael_t3122 * ___algo, bool ___encryption, ByteU5BU5D_t433* ___key, ByteU5BU5D_t433* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
 void RijndaelManagedTransform_System_IDisposable_Dispose_m11450 (RijndaelManagedTransform_t3546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
 bool RijndaelManagedTransform_get_CanReuseTransform_m11451 (RijndaelManagedTransform_t3546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t RijndaelManagedTransform_TransformBlock_m11452 (RijndaelManagedTransform_t3546 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t433* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t433* RijndaelManagedTransform_TransformFinalBlock_m11453 (RijndaelManagedTransform_t3546 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
