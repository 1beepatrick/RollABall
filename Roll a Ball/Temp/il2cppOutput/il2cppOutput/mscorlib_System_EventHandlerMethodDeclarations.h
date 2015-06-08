#pragma once

// System.EventHandler
struct EventHandler_t3631;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t647;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
 void EventHandler__ctor_m12833 (EventHandler_t3631 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
 void EventHandler_Invoke_m12834 (EventHandler_t3631 * __this, Object_t * ___sender, EventArgs_t647 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * EventHandler_BeginInvoke_m12835 (EventHandler_t3631 * __this, Object_t * ___sender, EventArgs_t647 * ___e, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
 void EventHandler_EndInvoke_m12836 (EventHandler_t3631 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
