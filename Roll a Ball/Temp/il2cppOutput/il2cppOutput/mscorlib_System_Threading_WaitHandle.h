#pragma once
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t3163;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
struct WaitHandle_t2718  : public MarshalByRefObject_t2801
{
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t3163 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;
};
struct WaitHandle_t2718_StaticFields{
	// System.Int32 System.Threading.WaitHandle::WaitTimeout
	int32_t ___WaitTimeout_1;
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t34 ___InvalidHandle_3;
};
