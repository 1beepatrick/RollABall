﻿#pragma once

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t3547;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.UInt32[]
struct UInt32U5BU5D_t2992;

// System.Void System.Security.Cryptography.SHA1Internal::.ctor()
 void SHA1Internal__ctor_m11456 (SHA1Internal_t3547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA1Internal_HashCore_m11457 (SHA1Internal_t3547 * __this, ByteU5BU5D_t433* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Internal::HashFinal()
 ByteU5BU5D_t433* SHA1Internal_HashFinal_m11458 (SHA1Internal_t3547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::Initialize()
 void SHA1Internal_Initialize_m11459 (SHA1Internal_t3547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessBlock(System.Byte[],System.UInt32)
 void SHA1Internal_ProcessBlock_m11460 (SHA1Internal_t3547 * __this, ByteU5BU5D_t433* ___inputBuffer, uint32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::InitialiseBuff(System.UInt32[],System.Byte[],System.UInt32)
 void SHA1Internal_InitialiseBuff_m11461 (Object_t * __this/* static, unused */, UInt32U5BU5D_t2992* ___buff, ByteU5BU5D_t433* ___input, uint32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::FillBuff(System.UInt32[])
 void SHA1Internal_FillBuff_m11462 (Object_t * __this/* static, unused */, UInt32U5BU5D_t2992* ___buff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
 void SHA1Internal_ProcessFinalBlock_m11463 (SHA1Internal_t3547 * __this, ByteU5BU5D_t433* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::AddLength(System.UInt64,System.Byte[],System.Int32)
 void SHA1Internal_AddLength_m11464 (SHA1Internal_t3547 * __this, uint64_t ___length, ByteU5BU5D_t433* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
