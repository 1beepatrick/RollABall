#pragma once

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3214;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3222;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.ASN1
struct ASN1_t3209;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m9541 (EncryptedData_t3214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m9542 (EncryptedData_t3214 * __this, ASN1_t3209 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t3222 * EncryptedData_get_EncryptionAlgorithm_m9543 (EncryptedData_t3214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t433* EncryptedData_get_EncryptedContent_m9544 (EncryptedData_t3214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
