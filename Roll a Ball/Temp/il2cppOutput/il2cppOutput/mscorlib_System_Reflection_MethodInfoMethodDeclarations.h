#pragma once

// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t508;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MethodInfo::.ctor()
 void MethodInfo__ctor_m10627 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
 int32_t MethodInfo_get_MemberType_m10628 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
 Type_t * MethodInfo_get_ReturnType_m5663 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetGenericMethodDefinition()
 MethodInfo_t517 * MethodInfo_GetGenericMethodDefinition_m3948 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
 MethodInfo_t517 * MethodInfo_MakeGenericMethod_m3949 (MethodInfo_t517 * __this, TypeU5BU5D_t508* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
 TypeU5BU5D_t508* MethodInfo_GetGenericArguments_m10629 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
 bool MethodInfo_get_IsGenericMethod_m10630 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
 bool MethodInfo_get_IsGenericMethodDefinition_m10631 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
 bool MethodInfo_get_ContainsGenericParameters_m10632 (MethodInfo_t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
