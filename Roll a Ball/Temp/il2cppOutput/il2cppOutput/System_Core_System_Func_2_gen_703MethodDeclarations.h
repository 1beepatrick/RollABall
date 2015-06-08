#pragma once

// System.Func`2<System.Threading.Tasks.Task,System.Int16>
struct Func_2_t10163;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int16>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m72970 (Func_2_t10163 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::Invoke(T)
 int16_t Func_2_Invoke_m72971 (Func_2_t10163 * __this, Task_t438 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m72972 (Func_2_t10163 * __this, Task_t438 * ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::EndInvoke(System.IAsyncResult)
 int16_t Func_2_EndInvoke_m72973 (Func_2_t10163 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
