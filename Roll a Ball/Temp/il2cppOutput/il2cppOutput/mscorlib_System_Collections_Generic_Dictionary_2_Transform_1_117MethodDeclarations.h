﻿#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct Transform_1_t7871;
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
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m48340 (Transform_1_t7871 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::Invoke(TKey,TValue)
 KeyValuePair_2_t7522  Transform_1_Invoke_m48341 (Transform_1_t7871 * __this, String_t* ___key, ParseGeoPoint_t577  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m48342 (Transform_1_t7871 * __this, String_t* ___key, ParseGeoPoint_t577  ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7522  Transform_1_EndInvoke_m48343 (Transform_1_t7871 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;