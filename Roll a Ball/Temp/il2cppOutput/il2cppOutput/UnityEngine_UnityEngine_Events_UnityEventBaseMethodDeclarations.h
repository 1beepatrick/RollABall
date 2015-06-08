#pragma once

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2184;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2183;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Type[]
struct TypeU5BU5D_t508;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
 void UnityEventBase__ctor_m5266 (UnityEventBase_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359 (UnityEventBase_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360 (UnityEventBase_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
 MethodInfo_t517 * UnityEventBase_FindMethod_m5267 (UnityEventBase_t2184 * __this, PersistentCall_t2183 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
 MethodInfo_t517 * UnityEventBase_FindMethod_m5268 (UnityEventBase_t2184 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
 void UnityEventBase_DirtyPersistentCalls_m5269 (UnityEventBase_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
 void UnityEventBase_RebuildPersistentCallsIfNeeded_m5270 (UnityEventBase_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
 void UnityEventBase_AddCall_m5271 (UnityEventBase_t2184 * __this, BaseInvokableCall_t2175 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void UnityEventBase_RemoveListener_m5272 (UnityEventBase_t2184 * __this, Object_t * ___targetObj, MethodInfo_t517 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
 void UnityEventBase_Invoke_m5273 (UnityEventBase_t2184 * __this, ObjectU5BU5D_t315* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
 String_t* UnityEventBase_ToString_m1358 (UnityEventBase_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
 MethodInfo_t517 * UnityEventBase_GetValidMethodInfo_m5274 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t508* ___argumentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
