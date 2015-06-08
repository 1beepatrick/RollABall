#pragma once

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t2774;
// System.Net.ServicePoint
struct ServicePoint_t2775;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2776;
// System.Net.WebRequest
struct WebRequest_t2777;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
 void DefaultCertificatePolicy__ctor_m6155 (DefaultCertificatePolicy_t2774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
 bool DefaultCertificatePolicy_CheckValidationResult_m6156 (DefaultCertificatePolicy_t2774 * __this, ServicePoint_t2775 * ___point, X509Certificate_t2776 * ___certificate, WebRequest_t2777 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
