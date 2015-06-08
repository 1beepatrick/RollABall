#pragma once

// System.Reflection.MonoMethod
struct MonoMethod_t3373;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t935;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t930;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Exception
struct Exception_t35;
// System.Reflection.Binder
struct Binder_t2255;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t3146;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
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
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoMethod::.ctor()
 void MonoMethod__ctor_m10691 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
 String_t* MonoMethod_get_name_m10692 (Object_t * __this/* static, unused */, MethodBase_t935 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
 MonoMethod_t3373 * MonoMethod_get_base_definition_m10693 (Object_t * __this/* static, unused */, MonoMethod_t3373 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
 MethodInfo_t517 * MonoMethod_GetBaseDefinition_m10694 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
 Type_t * MonoMethod_get_ReturnType_m10695 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
 ParameterInfoU5BU5D_t930* MonoMethod_GetParameters_m10696 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoMethod_InternalInvoke_m10697 (MonoMethod_t3373 * __this, Object_t * ___obj, ObjectU5BU5D_t315* ___parameters, Exception_t35 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoMethod_Invoke_m10698 (MonoMethod_t3373 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___parameters, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
 RuntimeMethodHandle_t3337  MonoMethod_get_MethodHandle_m10699 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
 int32_t MonoMethod_get_Attributes_m10700 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
 int32_t MonoMethod_get_CallingConvention_m10701 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
 Type_t * MonoMethod_get_ReflectedType_m10702 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
 Type_t * MonoMethod_get_DeclaringType_m10703 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
 String_t* MonoMethod_get_Name_m10704 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
 bool MonoMethod_IsDefined_m10705 (MonoMethod_t3373 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* MonoMethod_GetCustomAttributes_m10706 (MonoMethod_t3373 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* MonoMethod_GetCustomAttributes_m10707 (MonoMethod_t3373 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
 DllImportAttribute_t3146 * MonoMethod_GetDllImportAttribute_m10708 (Object_t * __this/* static, unused */, IntPtr_t34 ___mhandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
 ObjectU5BU5D_t315* MonoMethod_GetPseudoCustomAttributes_m10709 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
 bool MonoMethod_ShouldPrintFullName_m10710 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
 String_t* MonoMethod_ToString_m10711 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoMethod_GetObjectData_m10712 (MonoMethod_t3373 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
 MethodInfo_t517 * MonoMethod_MakeGenericMethod_m10713 (MonoMethod_t3373 * __this, TypeU5BU5D_t508* ___methodInstantiation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
 MethodInfo_t517 * MonoMethod_MakeGenericMethod_impl_m10714 (MonoMethod_t3373 * __this, TypeU5BU5D_t508* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
 TypeU5BU5D_t508* MonoMethod_GetGenericArguments_m10715 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetGenericMethodDefinition_impl()
 MethodInfo_t517 * MonoMethod_GetGenericMethodDefinition_impl_m10716 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetGenericMethodDefinition()
 MethodInfo_t517 * MonoMethod_GetGenericMethodDefinition_m10717 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
 bool MonoMethod_get_IsGenericMethodDefinition_m10718 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
 bool MonoMethod_get_IsGenericMethod_m10719 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
 bool MonoMethod_get_ContainsGenericParameters_m10720 (MonoMethod_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
