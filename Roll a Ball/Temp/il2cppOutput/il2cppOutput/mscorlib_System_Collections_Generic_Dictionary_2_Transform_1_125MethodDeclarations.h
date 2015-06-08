#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseACL,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>
struct Transform_1_t7939;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseACL
struct ParseACL_t533;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseACL,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m49052 (Transform_1_t7939 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseACL,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>::Invoke(TKey,TValue)
 KeyValuePair_2_t7570  Transform_1_Invoke_m49053 (Transform_1_t7939 * __this, String_t* ___key, ParseACL_t533 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseACL,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m49054 (Transform_1_t7939 * __this, String_t* ___key, ParseACL_t533 * ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseACL,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7570  Transform_1_EndInvoke_m49055 (Transform_1_t7939 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
