﻿#pragma once

// System.Func`2<System.Threading.Tasks.Task,System.Int64>
struct Func_2_t10208;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int64>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m73186 (Func_2_t10208 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int64>::Invoke(T)
 int64_t Func_2_Invoke_m73187 (Func_2_t10208 * __this, Task_t438 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m73188 (Func_2_t10208 * __this, Task_t438 * ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int64>::EndInvoke(System.IAsyncResult)
 int64_t Func_2_EndInvoke_m73189 (Func_2_t10208 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;