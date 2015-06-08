#pragma once

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3001;
// Mono.Security.ASN1
struct ASN1_t2818;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
 void ContentInfo__ctor_m7442 (ContentInfo_t3001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
 void ContentInfo__ctor_m7443 (ContentInfo_t3001 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
 void ContentInfo__ctor_m7444 (ContentInfo_t3001 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
 void ContentInfo__ctor_m7445 (ContentInfo_t3001 * __this, ASN1_t2818 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
 ASN1_t2818 * ContentInfo_get_Content_m7446 (ContentInfo_t3001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
 void ContentInfo_set_Content_m7447 (ContentInfo_t3001 * __this, ASN1_t2818 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
 String_t* ContentInfo_get_ContentType_m7448 (ContentInfo_t3001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
