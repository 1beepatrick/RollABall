#pragma once

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t3465;
// System.MarshalByRefObject
struct MarshalByRefObject_t2801;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3466;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3467;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3427;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t3426;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
 MarshalByRefObject_t2801 * ProxyAttribute_CreateInstance_m11018 (ProxyAttribute_t3465 * __this, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
 RealProxy_t3466 * ProxyAttribute_CreateProxy_m11019 (ProxyAttribute_t3465 * __this, ObjRef_t3467 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t3427 * ___serverContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ProxyAttribute_GetPropertiesForNewContext_m11020 (ProxyAttribute_t3465 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ProxyAttribute_IsContextOK_m11021 (ProxyAttribute_t3465 * __this, Context_t3427 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
