﻿#pragma once

// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t5318;
// System.Object
struct Object_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t520;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m22585 (Func_2_t5318 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m22586 (Func_2_t5318 * __this, ConstructorInfo_t520 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m22587 (Func_2_t5318 * __this, ConstructorInfo_t520 * ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m22588 (Func_2_t5318 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
