﻿#pragma once

// Mono.Security.X509.X509Extension
struct X509Extension_t2831;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2818;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t295;

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
 void X509Extension__ctor_m7605 (X509Extension_t2831 * __this, ASN1_t2818 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
 void X509Extension__ctor_m7606 (X509Extension_t2831 * __this, X509Extension_t2831 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
 void X509Extension_Decode_m7607 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
 void X509Extension_Encode_m7608 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
 String_t* X509Extension_get_Oid_m7231 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
 bool X509Extension_get_Critical_m7230 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
 ASN1_t2818 * X509Extension_get_Value_m7239 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
 bool X509Extension_Equals_m7609 (X509Extension_t2831 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
 int32_t X509Extension_GetHashCode_m7610 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
 void X509Extension_WriteLine_m7611 (X509Extension_t2831 * __this, StringBuilder_t295 * ___sb, int32_t ___n, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
 String_t* X509Extension_ToString_m7612 (X509Extension_t2831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
