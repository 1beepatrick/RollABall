#pragma once

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t635;
// System.Object
struct Object_t;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1064;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
 void PropertyChangedEventHandler__ctor_m6946 (PropertyChangedEventHandler_t635 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
 void PropertyChangedEventHandler_Invoke_m6947 (PropertyChangedEventHandler_t635 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1064 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
 Object_t * PropertyChangedEventHandler_BeginInvoke_m6948 (PropertyChangedEventHandler_t635 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1064 * ___e, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
 void PropertyChangedEventHandler_EndInvoke_m6949 (PropertyChangedEventHandler_t635 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
