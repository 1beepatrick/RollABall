#pragma once

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t3162;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeHandle__ctor_m10825 (SafeHandle_t3162 * __this, IntPtr_t34 ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
 void SafeHandle_Close_m10826 (SafeHandle_t3162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
 void SafeHandle_DangerousAddRef_m10827 (SafeHandle_t3162 * __this, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
 IntPtr_t34 SafeHandle_DangerousGetHandle_m10828 (SafeHandle_t3162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
 void SafeHandle_DangerousRelease_m10829 (SafeHandle_t3162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
 void SafeHandle_Dispose_m10830 (SafeHandle_t3162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
 void SafeHandle_Dispose_m10831 (SafeHandle_t3162 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
 void SafeHandle_SetHandle_m10832 (SafeHandle_t3162 * __this, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
 void SafeHandle_Finalize_m10833 (SafeHandle_t3162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
