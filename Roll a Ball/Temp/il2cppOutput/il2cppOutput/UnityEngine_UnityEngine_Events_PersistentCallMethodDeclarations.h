#pragma once

// UnityEngine.Events.PersistentCall
struct PersistentCall_t2183;
// UnityEngine.Object
struct Object_t207;
struct Object_t207_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2174;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2184;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m5250 (PersistentCall_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t207 * PersistentCall_get_target_m5251 (PersistentCall_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m5252 (PersistentCall_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m5253 (PersistentCall_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t2174 * PersistentCall_get_arguments_m5254 (PersistentCall_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m5255 (PersistentCall_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t2175 * PersistentCall_GetRuntimeCall_m5256 (PersistentCall_t2183 * __this, UnityEventBase_t2184 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t2175 * PersistentCall_GetObjectCall_m5257 (Object_t * __this/* static, unused */, Object_t207 * ___target, MethodInfo_t517 * ___method, ArgumentCache_t2174 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
