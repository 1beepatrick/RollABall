﻿#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.DictionaryEntry>
struct Transform_1_t7997;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t535;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m49760 (Transform_1_t7997 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1773  Transform_1_Invoke_m49761 (Transform_1_t7997 * __this, String_t* ___key, ParseRole_t535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m49762 (Transform_1_t7997 * __this, String_t* ___key, ParseRole_t535 * ___value, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1773  Transform_1_EndInvoke_m49763 (Transform_1_t7997 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
