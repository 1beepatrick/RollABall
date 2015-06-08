#pragma once

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t4522;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4161;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
 void UnityEvent_1__ctor_m16727_gshared (UnityEvent_1_t4522 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m16727(__this, method) (void)UnityEvent_1__ctor_m16727_gshared((UnityEvent_1_t4522 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m16729_gshared (UnityEvent_1_t4522 * __this, UnityAction_1_t4161 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m16729(__this, ___call, method) (void)UnityEvent_1_AddListener_m16729_gshared((UnityEvent_1_t4522 *)__this, (UnityAction_1_t4161 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m16731_gshared (UnityEvent_1_t4522 * __this, UnityAction_1_t4161 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16731(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m16731_gshared((UnityEvent_1_t4522 *)__this, (UnityAction_1_t4161 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t517 * UnityEvent_1_FindMethod_Impl_m16732_gshared (UnityEvent_1_t4522 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16732(__this, ___name, ___targetObj, method) (MethodInfo_t517 *)UnityEvent_1_FindMethod_Impl_m16732_gshared((UnityEvent_1_t4522 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m16733_gshared (UnityEvent_1_t4522 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16733(__this, ___target, ___theFunction, method) (BaseInvokableCall_t2175 *)UnityEvent_1_GetDelegate_m16733_gshared((UnityEvent_1_t4522 *)__this, (Object_t *)___target, (MethodInfo_t517 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2175 * UnityEvent_1_GetDelegate_m16734_gshared (Object_t * __this/* static, unused */, UnityAction_1_t4161 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16734(__this/* static, unused */, ___action, method) (BaseInvokableCall_t2175 *)UnityEvent_1_GetDelegate_m16734_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t4161 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
 void UnityEvent_1_Invoke_m16735_gshared (UnityEvent_1_t4522 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m16735(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m16735_gshared((UnityEvent_1_t4522 *)__this, (Object_t *)___arg0, method)
