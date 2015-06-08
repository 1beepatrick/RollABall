#pragma once

// Mono.Security.X509.X509Certificate
struct X509Certificate_t2807;
// System.Security.Cryptography.DSA
struct DSA_t2808;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2971;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// Mono.Security.ASN1
struct ASN1_t2818;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m7162 (X509Certificate_t2807 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m7556 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m7557 (X509Certificate_t2807 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t433* X509Certificate_GetUnsignedBigInteger_m7558 (X509Certificate_t2807 * __this, ByteU5BU5D_t433* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t2808 * X509Certificate_get_DSA_m7110 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
 void X509Certificate_set_DSA_m7160 (X509Certificate_t2807 * __this, DSA_t2808 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
 X509ExtensionCollection_t2971 * X509Certificate_get_Extensions_m7219 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
 ByteU5BU5D_t433* X509Certificate_get_Hash_m7559 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m7560 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
 String_t* X509Certificate_get_KeyAlgorithm_m7103 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t433* X509Certificate_get_KeyAlgorithmParameters_m7116 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
 void X509Certificate_set_KeyAlgorithmParameters_m7217 (X509Certificate_t2807 * __this, ByteU5BU5D_t433* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t433* X509Certificate_get_PublicKey_m7115 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
 RSA_t2809 * X509Certificate_get_RSA_m7104 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
 void X509Certificate_set_RSA_m7159 (X509Certificate_t2807 * __this, RSA_t2809 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t433* X509Certificate_get_RawData_m7247 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
 ByteU5BU5D_t433* X509Certificate_get_SerialNumber_m7144 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
 ByteU5BU5D_t433* X509Certificate_get_Signature_m7561 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
 String_t* X509Certificate_get_SignatureAlgorithm_m7145 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m7562 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t459  X509Certificate_get_ValidFrom_m7143 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t459  X509Certificate_get_ValidUntil_m7141 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
 int32_t X509Certificate_get_Version_m7148 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
 bool X509Certificate_get_IsCurrent_m7563 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
 bool X509Certificate_WasCurrent_m7564 (X509Certificate_t2807 * __this, DateTime_t459  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Certificate_VerifySignature_m7565 (X509Certificate_t2807 * __this, DSA_t2808 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Certificate_VerifySignature_m7566 (X509Certificate_t2807 * __this, RSA_t2809 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Certificate_VerifySignature_m7218 (X509Certificate_t2807 * __this, AsymmetricAlgorithm_t2803 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
 bool X509Certificate_get_IsSelfSigned_m7567 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t2818 * X509Certificate_GetIssuerName_m7140 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t2818 * X509Certificate_GetSubjectName_m7146 (X509Certificate_t2807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m7568 (X509Certificate_t2807 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t433* X509Certificate_PEM_m7569 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
