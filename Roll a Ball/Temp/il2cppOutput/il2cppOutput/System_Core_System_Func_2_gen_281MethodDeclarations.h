﻿#pragma once

// System.Func`2<System.Int16,System.Single>
struct Func_2_t6667;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int16,System.Single>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m35621 (Func_2_t6667 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int16,System.Single>::Invoke(T)
 float Func_2_Invoke_m35622 (Func_2_t6667 * __this, int16_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Int16,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m35623 (Func_2_t6667 * __this, int16_t ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int16,System.Single>::EndInvoke(System.IAsyncResult)
 float Func_2_EndInvoke_m35624 (Func_2_t6667 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;