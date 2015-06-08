#pragma once

// System.ResolveEventHandler
struct ResolveEventHandler_t3630;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t948;
// System.ResolveEventArgs
struct ResolveEventArgs_t3687;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m12837 (ResolveEventHandler_t3630 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t948 * ResolveEventHandler_Invoke_m12838 (ResolveEventHandler_t3630 * __this, Object_t * ___sender, ResolveEventArgs_t3687 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m12839 (ResolveEventHandler_t3630 * __this, Object_t * ___sender, ResolveEventArgs_t3687 * ___args, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t948 * ResolveEventHandler_EndInvoke_m12840 (ResolveEventHandler_t3630 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
