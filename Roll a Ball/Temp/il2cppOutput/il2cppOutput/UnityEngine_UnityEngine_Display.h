﻿#pragma once
// UnityEngine.Display[]
struct DisplayU5BU5D_t2094;
// UnityEngine.Display
struct Display_t2095;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t2093;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct Display_t2095  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t34 ___nativeDisplay_0;
};
struct Display_t2095_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2094* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t2095 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t2093 * ___onDisplaysUpdated_3;
};
