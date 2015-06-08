#pragma once

// System.Security.Cryptography.CryptoConfig
struct CryptoConfig_t2967;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
 void CryptoConfig__cctor_m11249 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
 void CryptoConfig_Initialize_m11250 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
 Object_t * CryptoConfig_CreateFromName_m7170 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
 Object_t * CryptoConfig_CreateFromName_m7240 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
 String_t* CryptoConfig_MapNameToOID_m8200 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
 ByteU5BU5D_t433* CryptoConfig_EncodeOID_m7185 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
 ByteU5BU5D_t433* CryptoConfig_EncodeLongNumber_m11251 (Object_t * __this/* static, unused */, int64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
