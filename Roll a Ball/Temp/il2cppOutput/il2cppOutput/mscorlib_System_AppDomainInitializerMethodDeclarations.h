#pragma once

// System.AppDomainInitializer
struct AppDomainInitializer_t3633;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t42;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
 void AppDomainInitializer__ctor_m12825 (AppDomainInitializer_t3633 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
 void AppDomainInitializer_Invoke_m12826 (AppDomainInitializer_t3633 * __this, StringU5BU5D_t42* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
 Object_t * AppDomainInitializer_BeginInvoke_m12827 (AppDomainInitializer_t3633 * __this, StringU5BU5D_t42* ___args, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
 void AppDomainInitializer_EndInvoke_m12828 (AppDomainInitializer_t3633 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
