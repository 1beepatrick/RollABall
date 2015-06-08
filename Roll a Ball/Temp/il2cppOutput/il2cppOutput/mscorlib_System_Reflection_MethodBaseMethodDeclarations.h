#pragma once

// System.Reflection.MethodBase
struct MethodBase_t935;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t930;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.Binder
struct Binder_t2255;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.Type[]
struct TypeU5BU5D_t508;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
 void MethodBase__ctor_m10618 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
 MethodBase_t935 * MethodBase_GetMethodFromHandleNoGenericCheck_m10619 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t3337  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
 MethodBase_t935 * MethodBase_GetMethodFromIntPtr_m10620 (Object_t * __this/* static, unused */, IntPtr_t34 ___handle, IntPtr_t34 ___declaringType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
 MethodBase_t935 * MethodBase_GetMethodFromHandle_m3940 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t3337  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
 MethodBase_t935 * MethodBase_GetMethodFromHandleInternalType_m10621 (Object_t * __this/* static, unused */, IntPtr_t34 ___method_handle, IntPtr_t34 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
 Object_t * MethodBase_Invoke_m3835 (MethodBase_t935 * __this, Object_t * ___obj, ObjectU5BU5D_t315* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
 int32_t MethodBase_get_CallingConvention_m10622 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
 bool MethodBase_get_IsPublic_m10623 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
 bool MethodBase_get_IsStatic_m5413 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
 bool MethodBase_get_IsVirtual_m10624 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
 TypeU5BU5D_t508* MethodBase_GetGenericArguments_m10625 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
 bool MethodBase_get_ContainsGenericParameters_m4106 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
 bool MethodBase_get_IsGenericMethodDefinition_m5666 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
 bool MethodBase_get_IsGenericMethod_m10626 (MethodBase_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
