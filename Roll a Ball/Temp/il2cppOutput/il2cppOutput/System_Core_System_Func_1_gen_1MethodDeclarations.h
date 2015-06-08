#pragma once

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t472;
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

// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m3033(__this, ___object, ___method, method) (void)Func_1__ctor_m20818_gshared((Func_1_t793 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
#define Func_1_Invoke_m3198(__this, method) (Task_t438 *)Func_1_Invoke_m20820_gshared((Func_1_t793 *)__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m20872(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m20822_gshared((Func_1_t793 *)__this, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m20873(__this, ___result, method) (Task_t438 *)Func_1_EndInvoke_m20824_gshared((Func_1_t793 *)__this, (Object_t *)___result, method)
