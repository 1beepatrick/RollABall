#pragma once

// Mono.Security.X509.X509Store
struct X509Store_t2844;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2968;
// System.Collections.ArrayList
struct ArrayList_t2764;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2807;
// Mono.Security.X509.X509Crl
struct X509Crl_t2830;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
 void X509Store__ctor_m7617 (X509Store_t2844 * __this, String_t* ___path, bool ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
 X509CertificateCollection_t2968 * X509Store_get_Certificates_m7244 (X509Store_t2844 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
 ArrayList_t2764 * X509Store_get_Crls_m7228 (X509Store_t2844 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
 ByteU5BU5D_t433* X509Store_Load_m7618 (X509Store_t2844 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
 X509Certificate_t2807 * X509Store_LoadCertificate_m7619 (X509Store_t2844 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
 X509Crl_t2830 * X509Store_LoadCrl_m7620 (X509Store_t2844 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
 bool X509Store_CheckStore_m7621 (X509Store_t2844 * __this, String_t* ___path, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
 X509CertificateCollection_t2968 * X509Store_BuildCertificatesCollection_m7622 (X509Store_t2844 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
 ArrayList_t2764 * X509Store_BuildCrlsCollection_m7623 (X509Store_t2844 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
