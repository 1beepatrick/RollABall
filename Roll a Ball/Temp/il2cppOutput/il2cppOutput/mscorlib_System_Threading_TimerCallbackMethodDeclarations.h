#pragma once

// System.Threading.TimerCallback
struct TimerCallback_t1850;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
 void TimerCallback__ctor_m4154 (TimerCallback_t1850 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
 void TimerCallback_Invoke_m12819 (TimerCallback_t1850 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * TimerCallback_BeginInvoke_m12820 (TimerCallback_t1850 * __this, Object_t * ___state, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
 void TimerCallback_EndInvoke_m12821 (TimerCallback_t1850 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
