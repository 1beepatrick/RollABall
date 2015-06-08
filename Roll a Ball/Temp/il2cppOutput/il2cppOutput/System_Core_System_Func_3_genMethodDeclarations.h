#pragma once

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t498;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_3__ctor_m3309_gshared (Func_3_t498 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method);
#define Func_3__ctor_m3309(__this, ___object, ___method, method) (void)Func_3__ctor_m3309_gshared((Func_3_t498 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
 Object_t * Func_3_Invoke_m3306_gshared (Func_3_t498 * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define Func_3_Invoke_m3306(__this, ___arg1, ___arg2, method) (Object_t *)Func_3_Invoke_m3306_gshared((Func_3_t498 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, method)
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
 Object_t * Func_3_BeginInvoke_m20885_gshared (Func_3_t498 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_3_BeginInvoke_m20885(__this, ___arg1, ___arg2, ___callback, ___object, method) (Object_t *)Func_3_BeginInvoke_m20885_gshared((Func_3_t498 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_3_EndInvoke_m20887_gshared (Func_3_t498 * __this, Object_t * ___result, MethodInfo* method);
#define Func_3_EndInvoke_m20887(__this, ___result, method) (Object_t *)Func_3_EndInvoke_m20887_gshared((Func_3_t498 *)__this, (Object_t *)___result, method)
