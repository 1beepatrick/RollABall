#pragma once

// System.AsyncCallback
struct AsyncCallback_t64;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
 void AsyncCallback__ctor_m8284 (AsyncCallback_t64 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
 void AsyncCallback_Invoke_m9087 (AsyncCallback_t64 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
 Object_t * AsyncCallback_BeginInvoke_m8283 (AsyncCallback_t64 * __this, Object_t * ___ar, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
 void AsyncCallback_EndInvoke_m9088 (AsyncCallback_t64 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
