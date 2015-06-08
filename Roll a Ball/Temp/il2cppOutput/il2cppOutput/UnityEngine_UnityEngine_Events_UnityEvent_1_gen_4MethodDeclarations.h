#pragma once

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t241;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t4922;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
 void UnityEvent_1__ctor_m1967 (UnityEvent_1_t241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m19860 (UnityEvent_1_t241 * __this, UnityAction_1_t4922 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m19861 (UnityEvent_1_t241 * __this, UnityAction_1_t4922 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t517 * UnityEvent_1_FindMethod_Impl_m1968 (UnityEvent_1_t241 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m1969 (UnityEvent_1_t241 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m19862 (Object_t * __this/* static, unused */, UnityAction_1_t4922 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
 void UnityEvent_1_Invoke_m1970 (UnityEvent_1_t241 * __this, bool ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
