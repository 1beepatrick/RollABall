#pragma once

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_t3314;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
 void WriteDelegate__ctor_m10087 (WriteDelegate_t3314 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 void WriteDelegate_Invoke_m10088 (WriteDelegate_t3314 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WriteDelegate_BeginInvoke_m10089 (WriteDelegate_t3314 * __this, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
 void WriteDelegate_EndInvoke_m10090 (WriteDelegate_t3314 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
