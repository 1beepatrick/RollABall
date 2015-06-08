#pragma once
// System.AppDomain
struct AppDomain_t1831;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Security.PermissionSet
struct PermissionSet_t3354;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.SecurityFrame
struct SecurityFrame_t3582 
{
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t1831 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t517 * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t3354 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t3354 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t3354 * ____permitonly_4;
};
