#pragma once

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3197;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3006;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
 void BlockProcessor__ctor_m9306 (BlockProcessor_t3197 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
 void BlockProcessor_Finalize_m9307 (BlockProcessor_t3197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
 void BlockProcessor_Initialize_m9308 (BlockProcessor_t3197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
 void BlockProcessor_Core_m9309 (BlockProcessor_t3197 * __this, ByteU5BU5D_t433* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
 void BlockProcessor_Core_m9310 (BlockProcessor_t3197 * __this, ByteU5BU5D_t433* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
 ByteU5BU5D_t433* BlockProcessor_Final_m9311 (BlockProcessor_t3197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
