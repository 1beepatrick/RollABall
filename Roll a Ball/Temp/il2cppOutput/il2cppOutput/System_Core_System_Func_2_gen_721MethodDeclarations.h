﻿#pragma once

// System.Func`2<System.Threading.Tasks.Task,System.Double>
struct Func_2_t10253;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Double>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m73402 (Func_2_t10253 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Double>::Invoke(T)
 double Func_2_Invoke_m73403 (Func_2_t10253 * __this, Task_t438 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m73404 (Func_2_t10253 * __this, Task_t438 * ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Double>::EndInvoke(System.IAsyncResult)
 double Func_2_EndInvoke_m73405 (Func_2_t10253 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;