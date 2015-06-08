#pragma once

// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t10369;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_4__ctor_m74177_gshared (Func_4_t10369 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method);
#define Func_4__ctor_m74177(__this, ___object, ___method, method) (void)Func_4__ctor_m74177_gshared((Func_4_t10369 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
 Object_t * Func_4_Invoke_m74179_gshared (Func_4_t10369 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
#define Func_4_Invoke_m74179(__this, ___arg1, ___arg2, ___arg3, method) (Object_t *)Func_4_Invoke_m74179_gshared((Func_4_t10369 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, method)
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
 Object_t * Func_4_BeginInvoke_m74181_gshared (Func_4_t10369 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_4_BeginInvoke_m74181(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (Object_t *)Func_4_BeginInvoke_m74181_gshared((Func_4_t10369 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_4_EndInvoke_m74183_gshared (Func_4_t10369 * __this, Object_t * ___result, MethodInfo* method);
#define Func_4_EndInvoke_m74183(__this, ___result, method) (Object_t *)Func_4_EndInvoke_m74183_gshared((Func_4_t10369 *)__this, (Object_t *)___result, method)
