#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>
struct Transform_1_t5563;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t21;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m24628 (Transform_1_t5563 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5548  Transform_1_Invoke_m24629 (Transform_1_t5563 * __this, String_t* ___key, ParseObject_t21 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m24630 (Transform_1_t5563 * __this, String_t* ___key, ParseObject_t21 * ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5548  Transform_1_EndInvoke_m24631 (Transform_1_t5563 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
