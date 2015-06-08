#pragma once

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t2815;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2804;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
 void X509Extension__ctor_m6424 (X509Extension_t2815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
 void X509Extension__ctor_m6425 (X509Extension_t2815 * __this, String_t* ___oid, ByteU5BU5D_t433* ___rawData, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
 bool X509Extension_get_Critical_m6426 (X509Extension_t2815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
 void X509Extension_set_Critical_m6427 (X509Extension_t2815 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509Extension_CopyFrom_m6428 (X509Extension_t2815 * __this, AsnEncodedData_t2804 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
 String_t* X509Extension_FormatUnkownData_m6429 (X509Extension_t2815 * __this, ByteU5BU5D_t433* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
