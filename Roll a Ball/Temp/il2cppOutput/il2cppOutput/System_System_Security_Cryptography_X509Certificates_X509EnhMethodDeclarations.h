#pragma once

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t2836;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2804;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509EnhancedKeyUsageExtension__ctor_m6420 (X509EnhancedKeyUsageExtension_t2836 * __this, AsnEncodedData_t2804 * ___encodedEnhancedKeyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509EnhancedKeyUsageExtension_CopyFrom_m6421 (X509EnhancedKeyUsageExtension_t2836 * __this, AsnEncodedData_t2804 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
 int32_t X509EnhancedKeyUsageExtension_Decode_m6422 (X509EnhancedKeyUsageExtension_t2836 * __this, ByteU5BU5D_t433* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
 String_t* X509EnhancedKeyUsageExtension_ToString_m6423 (X509EnhancedKeyUsageExtension_t2836 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
