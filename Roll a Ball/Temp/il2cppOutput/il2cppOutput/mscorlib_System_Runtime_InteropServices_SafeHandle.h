﻿#pragma once
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t3162  : public CriticalFinalizerObject_t3398
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t34 ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t34 ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;
};
