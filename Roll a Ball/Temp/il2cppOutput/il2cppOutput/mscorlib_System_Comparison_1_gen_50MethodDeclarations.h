﻿#pragma once

// System.Comparison`1<System.DateTime>
struct Comparison_1_t6711;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Comparison`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m36209 (Comparison_1_t6711 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m36210 (Comparison_1_t6711 * __this, DateTime_t459  ___x, DateTime_t459  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m36211 (Comparison_1_t6711 * __this, DateTime_t459  ___x, DateTime_t459  ___y, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m36212 (Comparison_1_t6711 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;