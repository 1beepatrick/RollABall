#pragma once

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t1779;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
 void ParameterizedThreadStart__ctor_m4101 (ParameterizedThreadStart_t1779 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
 void ParameterizedThreadStart_Invoke_m12809 (ParameterizedThreadStart_t1779 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * ParameterizedThreadStart_BeginInvoke_m12810 (ParameterizedThreadStart_t1779 * __this, Object_t * ___obj, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
 void ParameterizedThreadStart_EndInvoke_m12811 (ParameterizedThreadStart_t1779 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
