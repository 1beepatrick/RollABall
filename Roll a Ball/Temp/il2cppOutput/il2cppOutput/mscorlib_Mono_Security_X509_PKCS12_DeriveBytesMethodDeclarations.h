#pragma once

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t3211;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
 void DeriveBytes__ctor_m9433 (DeriveBytes_t3211 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
 void DeriveBytes__cctor_m9434 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
 void DeriveBytes_set_HashName_m9435 (DeriveBytes_t3211 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
 void DeriveBytes_set_IterationCount_m9436 (DeriveBytes_t3211 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
 void DeriveBytes_set_Password_m9437 (DeriveBytes_t3211 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
 void DeriveBytes_set_Salt_m9438 (DeriveBytes_t3211 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
 void DeriveBytes_Adjust_m9439 (DeriveBytes_t3211 * __this, ByteU5BU5D_t433* ___a, int32_t ___aOff, ByteU5BU5D_t433* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
 ByteU5BU5D_t433* DeriveBytes_Derive_m9440 (DeriveBytes_t3211 * __this, ByteU5BU5D_t433* ___diversifier, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
 ByteU5BU5D_t433* DeriveBytes_DeriveKey_m9441 (DeriveBytes_t3211 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
 ByteU5BU5D_t433* DeriveBytes_DeriveIV_m9442 (DeriveBytes_t3211 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
 ByteU5BU5D_t433* DeriveBytes_DeriveMAC_m9443 (DeriveBytes_t3211 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
