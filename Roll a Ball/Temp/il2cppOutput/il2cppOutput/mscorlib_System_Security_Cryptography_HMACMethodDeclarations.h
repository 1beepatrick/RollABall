#pragma once

// System.Security.Cryptography.HMAC
struct HMAC_t3112;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3197;

// System.Void System.Security.Cryptography.HMAC::.ctor()
 void HMAC__ctor_m11304 (HMAC_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
 int32_t HMAC_get_BlockSizeValue_m11305 (HMAC_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
 void HMAC_set_BlockSizeValue_m11306 (HMAC_t3112 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
 void HMAC_set_HashName_m11307 (HMAC_t3112 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t433* HMAC_get_Key_m11308 (HMAC_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m8225 (HMAC_t3112 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
 BlockProcessor_t3197 * HMAC_get_Block_m11309 (HMAC_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
 ByteU5BU5D_t433* HMAC_KeySetup_m11310 (HMAC_t3112 * __this, ByteU5BU5D_t433* ___key, uint8_t ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
 void HMAC_Dispose_m11311 (HMAC_t3112 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m11312 (HMAC_t3112 * __this, ByteU5BU5D_t433* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t433* HMAC_HashFinal_m11313 (HMAC_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m11314 (HMAC_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
 HMAC_t3112 * HMAC_Create_m8224 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
 HMAC_t3112 * HMAC_Create_m11315 (Object_t * __this/* static, unused */, String_t* ___algorithmName, MethodInfo* method) IL2CPP_METHOD_ATTR;
