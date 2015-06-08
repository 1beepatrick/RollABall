#pragma once
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Principal.WindowsAccountType
#include "mscorlib_System_Security_Principal_WindowsAccountType.h"
// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t3575  : public Object_t
{
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t34 ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t2166 * ____info_5;
};
struct WindowsIdentity_t3575_StaticFields{
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t34 ___invalidWindows_6;
};
