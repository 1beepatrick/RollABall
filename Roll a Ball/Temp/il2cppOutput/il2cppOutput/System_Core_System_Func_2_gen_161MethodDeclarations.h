#pragma once

// System.Func`2<System.Boolean,System.SByte>
struct Func_2_t6210;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.SByte>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m30048 (Func_2_t6210 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Boolean,System.SByte>::Invoke(T)
 int8_t Func_2_Invoke_m30049 (Func_2_t6210 * __this, bool ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Boolean,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m30050 (Func_2_t6210 * __this, bool ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Boolean,System.SByte>::EndInvoke(System.IAsyncResult)
 int8_t Func_2_EndInvoke_m30051 (Func_2_t6210 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
