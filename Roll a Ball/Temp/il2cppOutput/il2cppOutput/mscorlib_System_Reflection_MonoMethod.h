﻿#pragma once
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethod
struct MonoMethod_t3373  : public MethodInfo_t517
{
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t34 ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;
};
