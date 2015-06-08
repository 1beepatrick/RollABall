#pragma once

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3466;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3470;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
 void RealProxy__ctor_m11022 (RealProxy_t3466 * __this, Type_t * ___classToProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
 void RealProxy__ctor_m11023 (RealProxy_t3466 * __this, Type_t * ___classToProxy, ClientIdentity_t3470 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
 void RealProxy__ctor_m11024 (RealProxy_t3466 * __this, Type_t * ___classToProxy, IntPtr_t34 ___stub, Object_t * ___stubData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
 Type_t * RealProxy_InternalGetProxyType_m11025 (Object_t * __this/* static, unused */, Object_t * ___transparentProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
 Type_t * RealProxy_GetProxiedType_m11026 (RealProxy_t3466 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
 Object_t * RealProxy_InternalGetTransparentProxy_m11027 (RealProxy_t3466 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
 Object_t * RealProxy_GetTransparentProxy_m11028 (RealProxy_t3466 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
 void RealProxy_SetTargetDomain_m11029 (RealProxy_t3466 * __this, int32_t ___domainId, MethodInfo* method) IL2CPP_METHOD_ATTR;
