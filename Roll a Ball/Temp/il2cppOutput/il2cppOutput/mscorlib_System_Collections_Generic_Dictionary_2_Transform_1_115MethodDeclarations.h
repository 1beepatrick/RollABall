#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint>
struct Transform_1_t7870;
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
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m48332 (Transform_1_t7870 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::Invoke(TKey,TValue)
 ParseGeoPoint_t577  Transform_1_Invoke_m48333 (Transform_1_t7870 * __this, String_t* ___key, ParseGeoPoint_t577  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m48334 (Transform_1_t7870 * __this, String_t* ___key, ParseGeoPoint_t577  ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
 ParseGeoPoint_t577  Transform_1_EndInvoke_m48335 (Transform_1_t7870 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
