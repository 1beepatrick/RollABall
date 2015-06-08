#pragma once

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t5042;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void CreateValueCallback__ctor_m20799_gshared (CreateValueCallback_t5042 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method);
#define CreateValueCallback__ctor_m20799(__this, ___object, ___method, method) (void)CreateValueCallback__ctor_m20799_gshared((CreateValueCallback_t5042 *)__this, (Object_t *)___object, (IntPtr_t34)___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::Invoke(TKey)
 Object_t * CreateValueCallback_Invoke_m20800_gshared (CreateValueCallback_t5042 * __this, Object_t * ___key, MethodInfo* method);
#define CreateValueCallback_Invoke_m20800(__this, ___key, method) (Object_t *)CreateValueCallback_Invoke_m20800_gshared((CreateValueCallback_t5042 *)__this, (Object_t *)___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
 Object_t * CreateValueCallback_BeginInvoke_m20801_gshared (CreateValueCallback_t5042 * __this, Object_t * ___key, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method);
#define CreateValueCallback_BeginInvoke_m20801(__this, ___key, ___callback, ___object, method) (Object_t *)CreateValueCallback_BeginInvoke_m20801_gshared((CreateValueCallback_t5042 *)__this, (Object_t *)___key, (AsyncCallback_t64 *)___callback, (Object_t *)___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * CreateValueCallback_EndInvoke_m20802_gshared (CreateValueCallback_t5042 * __this, Object_t * ___result, MethodInfo* method);
#define CreateValueCallback_EndInvoke_m20802(__this, ___result, method) (Object_t *)CreateValueCallback_EndInvoke_m20802_gshared((CreateValueCallback_t5042 *)__this, (Object_t *)___result, method)
