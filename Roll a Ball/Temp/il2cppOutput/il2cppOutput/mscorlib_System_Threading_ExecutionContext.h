﻿#pragma once
// System.Security.SecurityContext
struct SecurityContext_t3577;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ExecutionContext
struct ExecutionContext_t3440  : public Object_t
{
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t3577 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;
};
