﻿#pragma once

// System.Func`2<System.Byte,System.Int32>
struct Func_2_t6361;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m31902 (Func_2_t6361 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Byte,System.Int32>::Invoke(T)
 int32_t Func_2_Invoke_m31903 (Func_2_t6361 * __this, uint8_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Byte,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m31904 (Func_2_t6361 * __this, uint8_t ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Byte,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Func_2_EndInvoke_m31905 (Func_2_t6361 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;