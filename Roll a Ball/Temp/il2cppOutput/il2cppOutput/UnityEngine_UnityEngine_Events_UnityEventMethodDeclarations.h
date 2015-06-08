#pragma once

// UnityEngine.Events.UnityEvent
struct UnityEvent_t138;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;

// System.Void UnityEngine.Events.UnityEvent::.ctor()
 void UnityEvent__ctor_m1543 (UnityEvent_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t517 * UnityEvent_FindMethod_Impl_m1544 (UnityEvent_t138 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2175 * UnityEvent_GetDelegate_m1545 (UnityEvent_t138 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
 void UnityEvent_Invoke_m1548 (UnityEvent_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
