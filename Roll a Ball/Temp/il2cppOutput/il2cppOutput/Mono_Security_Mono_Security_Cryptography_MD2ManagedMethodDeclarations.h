#pragma once

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t3011;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
 void MD2Managed__ctor_m7473 (MD2Managed_t3011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
 void MD2Managed__cctor_m7474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
 ByteU5BU5D_t433* MD2Managed_Padding_m7475 (MD2Managed_t3011 * __this, int32_t ___nLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
 void MD2Managed_Initialize_m7476 (MD2Managed_t3011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD2Managed_HashCore_m7477 (MD2Managed_t3011 * __this, ByteU5BU5D_t433* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
 ByteU5BU5D_t433* MD2Managed_HashFinal_m7478 (MD2Managed_t3011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
 void MD2Managed_MD2Transform_m7479 (MD2Managed_t3011 * __this, ByteU5BU5D_t433* ___state, ByteU5BU5D_t433* ___checksum, ByteU5BU5D_t433* ___block, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
