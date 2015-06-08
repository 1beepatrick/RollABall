#pragma once

// UnityEngine.Application/LogCallback
struct LogCallback_t2089;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
 void LogCallback__ctor_m4856 (LogCallback_t2089 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
 void LogCallback_Invoke_m4857 (LogCallback_t2089 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
 Object_t * LogCallback_BeginInvoke_m4858 (LogCallback_t2089 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
 void LogCallback_EndInvoke_m4859 (LogCallback_t2089 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
