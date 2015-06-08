#pragma once

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t3545;
// System.Security.Cryptography.Rijndael
struct Rijndael_t3122;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.UInt32[]
struct UInt32U5BU5D_t2992;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m11438 (RijndaelTransform_t3545 * __this, Rijndael_t3122 * ___algo, bool ___encryption, ByteU5BU5D_t433* ___key, ByteU5BU5D_t433* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m11439 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m11440 (RijndaelTransform_t3545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m11441 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___input, ByteU5BU5D_t433* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m11442 (RijndaelTransform_t3545 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m11443 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___indata, ByteU5BU5D_t433* ___outdata, UInt32U5BU5D_t2992* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m11444 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___indata, ByteU5BU5D_t433* ___outdata, UInt32U5BU5D_t2992* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m11445 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___indata, ByteU5BU5D_t433* ___outdata, UInt32U5BU5D_t2992* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m11446 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___indata, ByteU5BU5D_t433* ___outdata, UInt32U5BU5D_t2992* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m11447 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___indata, ByteU5BU5D_t433* ___outdata, UInt32U5BU5D_t2992* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m11448 (RijndaelTransform_t3545 * __this, ByteU5BU5D_t433* ___indata, ByteU5BU5D_t433* ___outdata, UInt32U5BU5D_t2992* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
