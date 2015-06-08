#pragma once

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3002;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3001;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.ASN1
struct ASN1_t2818;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m7449 (EncryptedData_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m7450 (EncryptedData_t3002 * __this, ASN1_t2818 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t3001 * EncryptedData_get_EncryptionAlgorithm_m7451 (EncryptedData_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t433* EncryptedData_get_EncryptedContent_m7452 (EncryptedData_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
