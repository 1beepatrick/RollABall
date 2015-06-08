#pragma once

// System.Net.ServicePointManager
struct ServicePointManager_t2797;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t2796;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2783;
// System.Net.ServicePoint
struct ServicePoint_t2775;
// System.Uri
struct Uri_t454;
// System.Net.IWebProxy
struct IWebProxy_t2779;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
 void ServicePointManager__cctor_m6234 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
 Object_t * ServicePointManager_get_CertificatePolicy_m6235 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
 bool ServicePointManager_get_CheckCertificateRevocationList_m6236 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
 int32_t ServicePointManager_get_SecurityProtocol_m6237 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
 RemoteCertificateValidationCallback_t2783 * ServicePointManager_get_ServerCertificateValidationCallback_m6238 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
 ServicePoint_t2775 * ServicePointManager_FindServicePoint_m6239 (Object_t * __this/* static, unused */, Uri_t454 * ___address, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
 void ServicePointManager_RecycleServicePoints_m6240 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
