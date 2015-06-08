#pragma once

// System.Func`1<System.Object>
struct Func_1_t793;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_1__ctor_m20818_gshared (Func_1_t793 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method);
#define Func_1__ctor_m20818(__this, ___object, ___method, method) (void)Func_1__ctor_m20818_gshared((Func_1_t793 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TResult System.Func`1<System.Object>::Invoke()
 Object_t * Func_1_Invoke_m20820_gshared (Func_1_t793 * __this, MethodInfo* method);
#define Func_1_Invoke_m20820(__this, method) (Object_t *)Func_1_Invoke_m20820_gshared((Func_1_t793 *)__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Func_1_BeginInvoke_m20822_gshared (Func_1_t793 * __this, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_1_BeginInvoke_m20822(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m20822_gshared((Func_1_t793 *)__this, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_1_EndInvoke_m20824_gshared (Func_1_t793 * __this, Object_t * ___result, MethodInfo* method);
#define Func_1_EndInvoke_m20824(__this, ___result, method) (Object_t *)Func_1_EndInvoke_m20824_gshared((Func_1_t793 *)__this, (Object_t *)___result, method)
