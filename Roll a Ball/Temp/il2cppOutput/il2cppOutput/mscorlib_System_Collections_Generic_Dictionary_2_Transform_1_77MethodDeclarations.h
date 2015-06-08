#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>
struct Transform_1_t5599;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1050;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m24866 (Transform_1_t5599 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5467  Transform_1_Invoke_m24867 (Transform_1_t5599 * __this, Tuple_2_t1050 * ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m24868 (Transform_1_t5599 * __this, Tuple_2_t1050 * ___key, String_t* ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5467  Transform_1_EndInvoke_m24869 (Transform_1_t5599 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
