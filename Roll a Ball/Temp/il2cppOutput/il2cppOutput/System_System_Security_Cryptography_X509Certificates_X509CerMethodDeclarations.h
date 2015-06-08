#pragma once

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2817;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t2816;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t2812;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2806;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t2805;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2807;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.ASN1
struct ASN1_t2818;
// System.Text.StringBuilder
struct StringBuilder_t295;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
 void X509Certificate2__ctor_m6302 (X509Certificate2_t2817 * __this, ByteU5BU5D_t433* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
 void X509Certificate2__cctor_m6303 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
 X509ExtensionCollection_t2816 * X509Certificate2_get_Extensions_m6304 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
 X500DistinguishedName_t2812 * X509Certificate2_get_IssuerName_m6305 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
 DateTime_t459  X509Certificate2_get_NotAfter_m6306 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
 DateTime_t459  X509Certificate2_get_NotBefore_m6307 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
 AsymmetricAlgorithm_t2803 * X509Certificate2_get_PrivateKey_m6308 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
 PublicKey_t2806 * X509Certificate2_get_PublicKey_m6309 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
 String_t* X509Certificate2_get_SerialNumber_m6310 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
 Oid_t2805 * X509Certificate2_get_SignatureAlgorithm_m6311 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
 X500DistinguishedName_t2812 * X509Certificate2_get_SubjectName_m6312 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
 String_t* X509Certificate2_get_Thumbprint_m6313 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
 int32_t X509Certificate2_get_Version_m6314 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
 String_t* X509Certificate2_GetNameInfo_m6315 (X509Certificate2_t2817 * __this, int32_t ___nameType, bool ___forIssuer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
 ASN1_t2818 * X509Certificate2_Find_m6316 (X509Certificate2_t2817 * __this, ByteU5BU5D_t433* ___oid, ASN1_t2818 * ___dn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
 String_t* X509Certificate2_GetValueAsString_m6317 (X509Certificate2_t2817 * __this, ASN1_t2818 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
 void X509Certificate2_ImportPkcs12_m6318 (X509Certificate2_t2817 * __this, ByteU5BU5D_t433* ___rawData, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate2_Import_m6319 (X509Certificate2_t2817 * __this, ByteU5BU5D_t433* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
 void X509Certificate2_Reset_m6320 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
 String_t* X509Certificate2_ToString_m6321 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
 String_t* X509Certificate2_ToString_m6322 (X509Certificate2_t2817 * __this, bool ___verbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
 void X509Certificate2_AppendBuffer_m6323 (Object_t * __this/* static, unused */, StringBuilder_t295 * ___sb, ByteU5BU5D_t433* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
 bool X509Certificate2_Verify_m6324 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
 X509Certificate_t2807 * X509Certificate2_get_MonoCertificate_m6325 (X509Certificate2_t2817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
