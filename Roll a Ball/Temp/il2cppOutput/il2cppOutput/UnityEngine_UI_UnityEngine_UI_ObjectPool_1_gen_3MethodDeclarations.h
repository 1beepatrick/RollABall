#pragma once

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t4434;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4161;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
 void ObjectPool_1__ctor_m15935_gshared (ObjectPool_1_t4434 * __this, UnityAction_1_t4161 * ___actionOnGet, UnityAction_1_t4161 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m15935(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m15935_gshared((ObjectPool_1_t4434 *)__this, (UnityAction_1_t4161 *)___actionOnGet, (UnityAction_1_t4161 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
 int32_t ObjectPool_1_get_countAll_m15937_gshared (ObjectPool_1_t4434 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m15937(__this, method) (int32_t)ObjectPool_1_get_countAll_m15937_gshared((ObjectPool_1_t4434 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
 void ObjectPool_1_set_countAll_m15939_gshared (ObjectPool_1_t4434 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m15939(__this, ___value, method) (void)ObjectPool_1_set_countAll_m15939_gshared((ObjectPool_1_t4434 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
 int32_t ObjectPool_1_get_countActive_m15941_gshared (ObjectPool_1_t4434 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m15941(__this, method) (int32_t)ObjectPool_1_get_countActive_m15941_gshared((ObjectPool_1_t4434 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
 int32_t ObjectPool_1_get_countInactive_m15943_gshared (ObjectPool_1_t4434 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m15943(__this, method) (int32_t)ObjectPool_1_get_countInactive_m15943_gshared((ObjectPool_1_t4434 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
 Object_t * ObjectPool_1_Get_m15945_gshared (ObjectPool_1_t4434 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m15945(__this, method) (Object_t *)ObjectPool_1_Get_m15945_gshared((ObjectPool_1_t4434 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
 void ObjectPool_1_Release_m15947_gshared (ObjectPool_1_t4434 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m15947(__this, ___element, method) (void)ObjectPool_1_Release_m15947_gshared((ObjectPool_1_t4434 *)__this, (Object_t *)___element, method)
