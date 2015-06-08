#pragma once

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1984;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
 void SendOrPostCallback__ctor_m4296 (SendOrPostCallback_t1984 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
 void SendOrPostCallback_Invoke_m12812 (SendOrPostCallback_t1984 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * SendOrPostCallback_BeginInvoke_m12813 (SendOrPostCallback_t1984 * __this, Object_t * ___state, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
 void SendOrPostCallback_EndInvoke_m12814 (SendOrPostCallback_t1984 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
