﻿#pragma once

// System.Threading.NativeEventCalls
struct NativeEventCalls_t3614;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)
 IntPtr_t34 NativeEventCalls_CreateEvent_internal_m11914 (Object_t * __this/* static, unused */, bool ___manual, bool ___initial, String_t* ___name, bool* ___created, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)
 bool NativeEventCalls_SetEvent_internal_m11915 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)
 bool NativeEventCalls_ResetEvent_internal_m11916 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)
 void NativeEventCalls_CloseEvent_internal_m11917 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
