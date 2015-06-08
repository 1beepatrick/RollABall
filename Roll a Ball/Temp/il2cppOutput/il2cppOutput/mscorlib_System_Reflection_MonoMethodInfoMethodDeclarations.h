#pragma once

// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3376;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t930;
// System.Reflection.MemberInfo
struct MemberInfo_t1046;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
 void MonoMethodInfo_get_method_info_m10683 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MonoMethodInfo_t3376 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
 MonoMethodInfo_t3376  MonoMethodInfo_GetMethodInfo_m10684 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
 Type_t * MonoMethodInfo_GetDeclaringType_m10685 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
 Type_t * MonoMethodInfo_GetReturnType_m10686 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
 int32_t MonoMethodInfo_GetAttributes_m10687 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
 int32_t MonoMethodInfo_GetCallingConvention_m10688 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
 ParameterInfoU5BU5D_t930* MonoMethodInfo_get_parameter_info_m10689 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MemberInfo_t1046 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
 ParameterInfoU5BU5D_t930* MonoMethodInfo_GetParametersInfo_m10690 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, MemberInfo_t1046 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
