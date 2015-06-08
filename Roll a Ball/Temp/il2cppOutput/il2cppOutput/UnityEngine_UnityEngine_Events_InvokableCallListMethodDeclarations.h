#pragma once

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2187;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2175;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Object[]
struct ObjectU5BU5D_t315;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
 void InvokableCallList__ctor_m5260 (InvokableCallList_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m5261 (InvokableCallList_t2187 * __this, BaseInvokableCall_t2175 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddListener_m5262 (InvokableCallList_t2187 * __this, BaseInvokableCall_t2175 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void InvokableCallList_RemoveListener_m5263 (InvokableCallList_t2187 * __this, Object_t * ___targetObj, MethodInfo_t517 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
 void InvokableCallList_ClearPersistent_m5264 (InvokableCallList_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
 void InvokableCallList_Invoke_m5265 (InvokableCallList_t2187 * __this, ObjectU5BU5D_t315* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
