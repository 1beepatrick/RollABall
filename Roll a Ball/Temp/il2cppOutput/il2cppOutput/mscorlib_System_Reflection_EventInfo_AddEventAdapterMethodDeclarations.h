#pragma once

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t3361;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t352;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
 void AddEventAdapter__ctor_m10596 (AddEventAdapter_t3361 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
 void AddEventAdapter_Invoke_m10597 (AddEventAdapter_t3361 * __this, Object_t * ____this, Delegate_t352 * ___dele, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
 Object_t * AddEventAdapter_BeginInvoke_m10598 (AddEventAdapter_t3361 * __this, Object_t * ____this, Delegate_t352 * ___dele, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
 void AddEventAdapter_EndInvoke_m10599 (AddEventAdapter_t3361 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
