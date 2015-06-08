#pragma once

// System.Func`2<System.Threading.Tasks.Task,System.Int32>
struct Func_2_t1848;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t438;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m4143 (Func_2_t1848 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int32>::Invoke(T)
 int32_t Func_2_Invoke_m15237 (Func_2_t1848 * __this, Task_t438 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m15238 (Func_2_t1848 * __this, Task_t438 * ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Func_2_EndInvoke_m15239 (Func_2_t1848 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
