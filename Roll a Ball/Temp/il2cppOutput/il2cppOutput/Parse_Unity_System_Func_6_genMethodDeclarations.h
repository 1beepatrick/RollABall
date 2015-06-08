#pragma once

// System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_6_t791;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
 void Func_6__ctor_m3038 (Func_6_t791 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5)
 Object_t * Func_6_Invoke_m20874 (Func_6_t791 * __this, ByteU5BU5D_t433* ___arg1, int32_t ___arg2, int32_t ___arg3, AsyncCallback_t64 * ___arg4, Object_t * ___arg5, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(TArg1,TArg2,TArg3,TArg4,TArg5,System.AsyncCallback,System.Object)
 Object_t * Func_6_BeginInvoke_m20875 (Func_6_t791 * __this, ByteU5BU5D_t433* ___arg1, int32_t ___arg2, int32_t ___arg3, AsyncCallback_t64 * ___arg4, Object_t * ___arg5, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
 Object_t * Func_6_EndInvoke_m20876 (Func_6_t791 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
