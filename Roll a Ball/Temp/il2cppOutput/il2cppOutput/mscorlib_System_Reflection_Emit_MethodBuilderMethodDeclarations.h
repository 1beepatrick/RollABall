#pragma once

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3341;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3142;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t930;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2255;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.Exception
struct Exception_t35;
// System.Type[]
struct TypeU5BU5D_t508;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
 bool MethodBuilder_get_ContainsGenericParameters_m10437 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
 RuntimeMethodHandle_t3337  MethodBuilder_get_MethodHandle_m10438 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
 Type_t * MethodBuilder_get_ReturnType_m10439 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
 Type_t * MethodBuilder_get_ReflectedType_m10440 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
 Type_t * MethodBuilder_get_DeclaringType_m10441 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
 String_t* MethodBuilder_get_Name_m10442 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
 int32_t MethodBuilder_get_Attributes_m10443 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
 int32_t MethodBuilder_get_CallingConvention_m10444 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
 MethodInfo_t517 * MethodBuilder_GetBaseDefinition_m10445 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
 ParameterInfoU5BU5D_t930* MethodBuilder_GetParameters_m10446 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MethodBuilder_Invoke_m10447 (MethodBuilder_t3341 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___parameters, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
 bool MethodBuilder_IsDefined_m10448 (MethodBuilder_t3341 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* MethodBuilder_GetCustomAttributes_m10449 (MethodBuilder_t3341 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* MethodBuilder_GetCustomAttributes_m10450 (MethodBuilder_t3341 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
 String_t* MethodBuilder_ToString_m10451 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
 bool MethodBuilder_Equals_m10452 (MethodBuilder_t3341 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
 int32_t MethodBuilder_GetHashCode_m10453 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
 Exception_t35 * MethodBuilder_NotSupported_m10454 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
 MethodInfo_t517 * MethodBuilder_MakeGenericMethod_m10455 (MethodBuilder_t3341 * __this, TypeU5BU5D_t508* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
 bool MethodBuilder_get_IsGenericMethodDefinition_m10456 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
 bool MethodBuilder_get_IsGenericMethod_m10457 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetGenericMethodDefinition()
 MethodInfo_t517 * MethodBuilder_GetGenericMethodDefinition_m10458 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
 TypeU5BU5D_t508* MethodBuilder_GetGenericArguments_m10459 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
 Module_t3142 * MethodBuilder_get_Module_m10460 (MethodBuilder_t3341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
