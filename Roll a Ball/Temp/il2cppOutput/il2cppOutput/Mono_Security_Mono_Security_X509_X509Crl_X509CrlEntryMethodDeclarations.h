#pragma once

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t2832;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2971;
// Mono.Security.ASN1
struct ASN1_t2818;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
 void X509CrlEntry__ctor_m7595 (X509CrlEntry_t2832 * __this, ASN1_t2818 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
 ByteU5BU5D_t433* X509CrlEntry_get_SerialNumber_m7596 (X509CrlEntry_t2832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
 DateTime_t459  X509CrlEntry_get_RevocationDate_m7226 (X509CrlEntry_t2832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
 X509ExtensionCollection_t2971 * X509CrlEntry_get_Extensions_m7232 (X509CrlEntry_t2832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
