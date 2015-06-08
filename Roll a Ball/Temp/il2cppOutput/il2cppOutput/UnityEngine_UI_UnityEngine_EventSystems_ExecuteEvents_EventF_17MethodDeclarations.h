#pragma once

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t4418;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t48;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void EventFunction_1__ctor_m15771_gshared (EventFunction_1_t4418 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method);
#define EventFunction_1__ctor_m15771(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m15771_gshared((EventFunction_1_t4418 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
 void EventFunction_1_Invoke_m15773_gshared (EventFunction_1_t4418 * __this, Object_t * ___handler, BaseEventData_t48 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m15773(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m15773_gshared((EventFunction_1_t4418 *)__this, (Object_t *)___handler, (BaseEventData_t48 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
 Object_t * EventFunction_1_BeginInvoke_m15775_gshared (EventFunction_1_t4418 * __this, Object_t * ___handler, BaseEventData_t48 * ___eventData, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m15775(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m15775_gshared((EventFunction_1_t4418 *)__this, (Object_t *)___handler, (BaseEventData_t48 *)___eventData, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
 void EventFunction_1_EndInvoke_m15777_gshared (EventFunction_1_t4418 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m15777(__this, ___result, method) (void)EventFunction_1_EndInvoke_m15777_gshared((EventFunction_1_t4418 *)__this, (Object_t *)___result, method)
