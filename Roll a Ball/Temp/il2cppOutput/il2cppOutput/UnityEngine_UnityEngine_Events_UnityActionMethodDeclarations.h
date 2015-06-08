#pragma once

// UnityEngine.Events.UnityAction
struct UnityAction_t158;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
 void UnityAction__ctor_m1771 (UnityAction_t158 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::Invoke()
 void UnityAction_Invoke_m1596 (UnityAction_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * UnityAction_BeginInvoke_m5288 (UnityAction_t158 * __this, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
 void UnityAction_EndInvoke_m5289 (UnityAction_t158 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
