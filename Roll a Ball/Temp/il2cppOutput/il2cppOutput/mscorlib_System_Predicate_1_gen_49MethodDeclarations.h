﻿#pragma once

// System.Predicate`1<System.Single>
struct Predicate_1_t6648;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m35479 (Predicate_1_t6648 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
 bool Predicate_1_Invoke_m35480 (Predicate_1_t6648 * __this, float ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m35481 (Predicate_1_t6648 * __this, float ___obj, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m35482 (Predicate_1_t6648 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;