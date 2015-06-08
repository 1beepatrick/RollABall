#pragma once

// Mono.Security.Cryptography.HMAC
struct HMAC_t3032;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
 void HMAC__ctor_m7657 (HMAC_t3032 * __this, String_t* ___hashName, ByteU5BU5D_t433* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t433* HMAC_get_Key_m7658 (HMAC_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m7659 (HMAC_t3032 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m7660 (HMAC_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t433* HMAC_HashFinal_m7661 (HMAC_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m7662 (HMAC_t3032 * __this, ByteU5BU5D_t433* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
 void HMAC_initializePad_m7663 (HMAC_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
