#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Transform_1_t7742;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m46958 (Transform_1_t7742 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(TKey,TValue)
 KeyValuePair_2_t7430  Transform_1_Invoke_m46959 (Transform_1_t7742 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m46960 (Transform_1_t7742 * __this, String_t* ___key, double ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7430  Transform_1_EndInvoke_m46961 (Transform_1_t7742 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
