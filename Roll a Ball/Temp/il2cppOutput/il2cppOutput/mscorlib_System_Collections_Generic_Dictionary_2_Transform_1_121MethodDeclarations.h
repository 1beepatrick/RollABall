#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>
struct Transform_1_t7905;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseFile
struct ParseFile_t572;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m48696 (Transform_1_t7905 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::Invoke(TKey,TValue)
 KeyValuePair_2_t7546  Transform_1_Invoke_m48697 (Transform_1_t7905 * __this, String_t* ___key, ParseFile_t572 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m48698 (Transform_1_t7905 * __this, String_t* ___key, ParseFile_t572 * ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7546  Transform_1_EndInvoke_m48699 (Transform_1_t7905 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
