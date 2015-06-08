#pragma once

// System.Net.ServicePoint
struct ServicePoint_t2775;
// System.Uri
struct Uri_t454;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
 void ServicePoint__ctor_m6220 (ServicePoint_t2775 * __this, Uri_t454 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
 Uri_t454 * ServicePoint_get_Address_m6221 (ServicePoint_t2775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
 int32_t ServicePoint_get_CurrentConnections_m6222 (ServicePoint_t2775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
 DateTime_t459  ServicePoint_get_IdleSince_m6223 (ServicePoint_t2775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
 void ServicePoint_set_IdleSince_m6224 (ServicePoint_t2775 * __this, DateTime_t459  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
 void ServicePoint_set_Expect100Continue_m6225 (ServicePoint_t2775 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
 void ServicePoint_set_UseNagleAlgorithm_m6226 (ServicePoint_t2775 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
 void ServicePoint_set_SendContinue_m6227 (ServicePoint_t2775 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
 void ServicePoint_set_UsesProxy_m6228 (ServicePoint_t2775 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
 void ServicePoint_set_UseConnect_m6229 (ServicePoint_t2775 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
 bool ServicePoint_get_AvailableForRecycling_m6230 (ServicePoint_t2775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
