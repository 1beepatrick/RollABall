#pragma once

// UnityEngine.Display
struct Display_t2095;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t2093;
// System.IntPtr[]
struct IntPtrU5BU5D_t2096;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Display::.ctor()
 void Display__ctor_m4890 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
 void Display__ctor_m4891 (Display_t2095 * __this, IntPtr_t34 ___nativeDisplay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
 void Display__cctor_m4892 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
 void Display_add_onDisplaysUpdated_m4893 (Object_t * __this/* static, unused */, DisplaysUpdatedDelegate_t2093 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
 void Display_remove_onDisplaysUpdated_m4894 (Object_t * __this/* static, unused */, DisplaysUpdatedDelegate_t2093 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
 int32_t Display_get_renderingWidth_m4895 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
 int32_t Display_get_renderingHeight_m4896 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
 int32_t Display_get_systemWidth_m4897 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
 int32_t Display_get_systemHeight_m4898 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
 RenderBuffer_t2097  Display_get_colorBuffer_m4899 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
 RenderBuffer_t2097  Display_get_depthBuffer_m4900 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate()
 void Display_Activate_m4901 (Display_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
 void Display_Activate_m4902 (Display_t2095 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
 void Display_SetParams_m4903 (Display_t2095 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
 void Display_SetRenderingResolution_m4904 (Display_t2095 * __this, int32_t ___w, int32_t ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
 bool Display_MultiDisplayLicense_m4905 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
 Vector3_t6  Display_RelativeMouseAt_m4906 (Object_t * __this/* static, unused */, Vector3_t6  ___inputMouseCoordinates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Display UnityEngine.Display::get_main()
 Display_t2095 * Display_get_main_m4907 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
 void Display_RecreateDisplayList_m4908 (Object_t * __this/* static, unused */, IntPtrU5BU5D_t2096* ___nativeDisplay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
 void Display_FireDisplaysUpdated_m4909 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
 void Display_GetSystemExtImpl_m4910 (Object_t * __this/* static, unused */, IntPtr_t34 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
 void Display_GetRenderingExtImpl_m4911 (Object_t * __this/* static, unused */, IntPtr_t34 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
 void Display_GetRenderingBuffersImpl_m4912 (Object_t * __this/* static, unused */, IntPtr_t34 ___nativeDisplay, RenderBuffer_t2097 * ___color, RenderBuffer_t2097 * ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
 void Display_SetRenderingResolutionImpl_m4913 (Object_t * __this/* static, unused */, IntPtr_t34 ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
 void Display_ActivateDisplayImpl_m4914 (Object_t * __this/* static, unused */, IntPtr_t34 ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
 void Display_SetParamsImpl_m4915 (Object_t * __this/* static, unused */, IntPtr_t34 ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
 bool Display_MultiDisplayLicenseImpl_m4916 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
 int32_t Display_RelativeMouseAtImpl_m4917 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method) IL2CPP_METHOD_ATTR;
