﻿#pragma once

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Func_2_t8675;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m57781 (Func_2_t8675 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T)
 KeyValuePair_2_t7430  Func_2_Invoke_m57782 (Func_2_t8675 * __this, KeyValuePair_2_t7406  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m57783 (Func_2_t8675 * __this, KeyValuePair_2_t7406  ___arg1, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7430  Func_2_EndInvoke_m57784 (Func_2_t8675 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;