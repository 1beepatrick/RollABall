﻿#pragma once

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2776;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
 void X509Certificate__ctor_m11241 (X509Certificate_t2776 * __this, ByteU5BU5D_t433* ___data, bool ___dates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m8295 (X509Certificate_t2776 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
 void X509Certificate__ctor_m7149 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate__ctor_m11242 (X509Certificate_t2776 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7174 (X509Certificate_t2776 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m7173 (X509Certificate_t2776 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
 String_t* X509Certificate_tostr_m11243 (X509Certificate_t2776 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
 bool X509Certificate_Equals_m7175 (X509Certificate_t2776 * __this, X509Certificate_t2776 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
 ByteU5BU5D_t433* X509Certificate_GetCertHash_m7176 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
 String_t* X509Certificate_GetCertHashString_m7147 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
 String_t* X509Certificate_GetEffectiveDateString_m7177 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
 String_t* X509Certificate_GetExpirationDateString_m7178 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
 int32_t X509Certificate_GetHashCode_m7172 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
 String_t* X509Certificate_GetIssuerName_m7179 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
 String_t* X509Certificate_GetName_m7180 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
 ByteU5BU5D_t433* X509Certificate_GetPublicKey_m7181 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
 ByteU5BU5D_t433* X509Certificate_GetRawCertData_m7182 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
 String_t* X509Certificate_ToString_m11244 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
 String_t* X509Certificate_ToString_m7164 (X509Certificate_t2776 * __this, bool ___fVerbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
 String_t* X509Certificate_get_Issuer_m7167 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
 String_t* X509Certificate_get_Subject_m7166 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
 bool X509Certificate_Equals_m7171 (X509Certificate_t2776 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate_Import_m7161 (X509Certificate_t2776 * __this, ByteU5BU5D_t433* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
 void X509Certificate_Reset_m7163 (X509Certificate_t2776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
