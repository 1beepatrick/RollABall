﻿#pragma once

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>
struct Func_2_t965;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t556;
// System.Threading.Tasks.Task
struct Task_t438;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_17MethodDeclarations.h"
#define Func_2__ctor_m3494(__this, ___object, ___method, method) (void)Func_2__ctor_m3444_gshared((Func_2_t549 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::Invoke(T)
#define Func_2_Invoke_m23421(__this, ___arg1, method) (Task_1_t556 *)Func_2_Invoke_m14548_gshared((Func_2_t549 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m23422(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m14550_gshared((Func_2_t549 *)__this, (Object_t *)___arg1, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m23423(__this, ___result, method) (Task_1_t556 *)Func_2_EndInvoke_m14552_gshared((Func_2_t549 *)__this, (Object_t *)___result, method)