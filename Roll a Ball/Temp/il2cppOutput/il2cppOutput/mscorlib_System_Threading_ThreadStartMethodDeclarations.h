#pragma once

// System.Threading.ThreadStart
struct ThreadStart_t3616;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
 void ThreadStart__ctor_m12815 (ThreadStart_t3616 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::Invoke()
 void ThreadStart_Invoke_m12816 (ThreadStart_t3616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ThreadStart_BeginInvoke_m12817 (ThreadStart_t3616 * __this, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
 void ThreadStart_EndInvoke_m12818 (ThreadStart_t3616 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
