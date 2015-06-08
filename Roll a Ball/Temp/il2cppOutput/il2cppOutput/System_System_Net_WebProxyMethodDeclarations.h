#pragma once

// System.Net.WebProxy
struct WebProxy_t2800;
// System.Uri
struct Uri_t454;
// System.String[]
struct StringU5BU5D_t42;
// System.Net.ICredentials
struct ICredentials_t2799;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
 void WebProxy__ctor_m6259 (WebProxy_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
 void WebProxy__ctor_m6260 (WebProxy_t2800 * __this, Uri_t454 * ___address, bool ___bypassOnLocal, StringU5BU5D_t42* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy__ctor_m6261 (WebProxy_t2800 * __this, SerializationInfo_t2166 * ___serializationInfo, StreamingContext_t2167  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m6262 (WebProxy_t2800 * __this, SerializationInfo_t2166 * ___serializationInfo, StreamingContext_t2167  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
 bool WebProxy_get_UseDefaultCredentials_m6263 (WebProxy_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
 Uri_t454 * WebProxy_GetProxy_m6264 (WebProxy_t2800 * __this, Uri_t454 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
 bool WebProxy_IsBypassed_m6265 (WebProxy_t2800 * __this, Uri_t454 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_GetObjectData_m6266 (WebProxy_t2800 * __this, SerializationInfo_t2166 * ___serializationInfo, StreamingContext_t2167  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
 void WebProxy_CheckBypassList_m6267 (WebProxy_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
