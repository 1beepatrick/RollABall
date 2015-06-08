#pragma once

// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Func_5_t10365;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_5__ctor_m74165_gshared (Func_5_t10365 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method);
#define Func_5__ctor_m74165(__this, ___object, ___method, method) (void)Func_5__ctor_m74165_gshared((Func_5_t10365 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
 Object_t * Func_5_Invoke_m74167_gshared (Func_5_t10365 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, MethodInfo* method);
#define Func_5_Invoke_m74167(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) (Object_t *)Func_5_Invoke_m74167_gshared((Func_5_t10365 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, (Object_t *)___arg4, method)
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
 Object_t * Func_5_BeginInvoke_m74169_gshared (Func_5_t10365 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_5_BeginInvoke_m74169(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) (Object_t *)Func_5_BeginInvoke_m74169_gshared((Func_5_t10365 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, (Object_t *)___arg4, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_5_EndInvoke_m74171_gshared (Func_5_t10365 * __this, Object_t * ___result, MethodInfo* method);
#define Func_5_EndInvoke_m74171(__this, ___result, method) (Object_t *)Func_5_EndInvoke_m74171_gshared((Func_5_t10365 *)__this, (Object_t *)___result, method)
