#pragma once

// System.Action
struct Action_t696;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
 void Action__ctor_m3118 (Action_t696 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
 void Action_Invoke_m3119 (Action_t696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Action_BeginInvoke_m5651 (Action_t696 * __this, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
 void Action_EndInvoke_m5652 (Action_t696 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
