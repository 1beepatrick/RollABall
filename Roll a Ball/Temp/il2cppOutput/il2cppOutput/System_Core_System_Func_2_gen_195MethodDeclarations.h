﻿#pragma once

// System.Func`2<System.UInt64,System.UInt16>
struct Func_2_t6336;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt64,System.UInt16>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m31548 (Func_2_t6336 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.UInt64,System.UInt16>::Invoke(T)
 uint16_t Func_2_Invoke_m31549 (Func_2_t6336 * __this, uint64_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.UInt64,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m31550 (Func_2_t6336 * __this, uint64_t ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.UInt64,System.UInt16>::EndInvoke(System.IAsyncResult)
 uint16_t Func_2_EndInvoke_m31551 (Func_2_t6336 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;