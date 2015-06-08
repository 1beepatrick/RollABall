#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Transform_1_t7815;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m47756 (Transform_1_t7815 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(TKey,TValue)
 KeyValuePair_2_t7476  Transform_1_Invoke_m47757 (Transform_1_t7815 * __this, String_t* ___key, DateTime_t459  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m47758 (Transform_1_t7815 * __this, String_t* ___key, DateTime_t459  ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7476  Transform_1_EndInvoke_m47759 (Transform_1_t7815 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
