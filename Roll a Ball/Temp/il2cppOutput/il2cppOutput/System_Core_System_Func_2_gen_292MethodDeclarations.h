#pragma once

// System.Func`2<System.Object,System.DateTime>
struct Func_2_t6706;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Func`2<System.Object,System.DateTime>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m36047 (Func_2_t6706 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,System.DateTime>::Invoke(T)
 DateTime_t459  Func_2_Invoke_m36048 (Func_2_t6706 * __this, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Object,System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m36049 (Func_2_t6706 * __this, Object_t * ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,System.DateTime>::EndInvoke(System.IAsyncResult)
 DateTime_t459  Func_2_EndInvoke_m36050 (Func_2_t6706 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
