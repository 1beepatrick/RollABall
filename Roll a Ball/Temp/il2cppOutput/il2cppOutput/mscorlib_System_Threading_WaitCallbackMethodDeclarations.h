#pragma once

// System.Threading.WaitCallback
struct WaitCallback_t1780;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
 void WaitCallback__ctor_m4104 (WaitCallback_t1780 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
 void WaitCallback_Invoke_m12822 (WaitCallback_t1780 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * WaitCallback_BeginInvoke_m12823 (WaitCallback_t1780 * __this, Object_t * ___state, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
 void WaitCallback_EndInvoke_m12824 (WaitCallback_t1780 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
