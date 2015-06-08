#pragma once

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t130;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t133;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
 void UnityEvent_1__ctor_m1526 (UnityEvent_1_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m1531 (UnityEvent_1_t130 * __this, UnityAction_1_t133 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m17409 (UnityEvent_1_t130 * __this, UnityAction_1_t133 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t517 * UnityEvent_1_FindMethod_Impl_m1527 (UnityEvent_1_t130 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m1528 (UnityEvent_1_t130 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m17410 (Object_t * __this/* static, unused */, UnityAction_1_t133 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
 void UnityEvent_1_Invoke_m1530 (UnityEvent_1_t130 * __this, Color_t132  ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
