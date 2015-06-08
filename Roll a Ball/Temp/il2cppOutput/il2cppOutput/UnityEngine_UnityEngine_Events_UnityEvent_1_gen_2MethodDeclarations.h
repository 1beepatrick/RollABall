#pragma once

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t213;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t381;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
 void UnityEvent_1__ctor_m1863 (UnityEvent_1_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m1883 (UnityEvent_1_t213 * __this, UnityAction_1_t381 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m1882 (UnityEvent_1_t213 * __this, UnityAction_1_t381 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t517 * UnityEvent_1_FindMethod_Impl_m1864 (UnityEvent_1_t213 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m1865 (UnityEvent_1_t213 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m19270 (Object_t * __this/* static, unused */, UnityAction_1_t381 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
 void UnityEvent_1_Invoke_m1872 (UnityEvent_1_t213 * __this, float ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
