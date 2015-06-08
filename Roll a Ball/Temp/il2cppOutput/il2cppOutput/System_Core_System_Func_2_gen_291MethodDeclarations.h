#pragma once

// System.Func`2<System.DateTime,System.Object>
struct Func_2_t6698;
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

// System.Void System.Func`2<System.DateTime,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m36012 (Func_2_t6698 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.DateTime,System.Object>::Invoke(T)
 Object_t * Func_2_Invoke_m36013 (Func_2_t6698 * __this, DateTime_t459  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.DateTime,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m36014 (Func_2_t6698 * __this, DateTime_t459  ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.DateTime,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_2_EndInvoke_m36015 (Func_2_t6698 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
