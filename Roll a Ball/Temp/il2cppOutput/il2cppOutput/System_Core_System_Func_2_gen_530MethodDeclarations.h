﻿#pragma once

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Func_2_t8563;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m56346 (Func_2_t8563 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T)
 KeyValuePair_2_t8087  Func_2_Invoke_m56347 (Func_2_t8563 * __this, KeyValuePair_2_t8087  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m56348 (Func_2_t8563 * __this, KeyValuePair_2_t8087  ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8087  Func_2_EndInvoke_m56349 (Func_2_t8563 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;