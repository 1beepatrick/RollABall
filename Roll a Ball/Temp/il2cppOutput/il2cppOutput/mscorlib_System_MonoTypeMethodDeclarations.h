#pragma once

// System.MonoType
struct MonoType_t3678;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t948;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3142;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t520;
// System.Reflection.Binder
struct Binder_t2255;
// System.Type[]
struct TypeU5BU5D_t508;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2256;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t932;
// System.Reflection.EventInfo
struct EventInfo_t3143;
// System.Reflection.FieldInfo
struct FieldInfo_t1161;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1778;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t931;
// System.Reflection.PropertyInfo
struct PropertyInfo_t521;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.String[]
struct StringU5BU5D_t42;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Reflection.MethodBase
struct MethodBase_t935;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
 int32_t MonoType_get_attributes_m12504 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
 ConstructorInfo_t520 * MonoType_GetDefaultConstructor_m12505 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
 int32_t MonoType_GetAttributeFlagsImpl_m12506 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t520 * MonoType_GetConstructorImpl_m12507 (MonoType_t3678 * __this, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
 ConstructorInfoU5BU5D_t932* MonoType_GetConstructors_internal_m12508 (MonoType_t3678 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t932* MonoType_GetConstructors_m12509 (MonoType_t3678 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3143 * MonoType_InternalGetEvent_m12510 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3143 * MonoType_GetEvent_m12511 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1161 * MonoType_GetField_m12512 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
 TypeU5BU5D_t508* MonoType_GetInterfaces_m12513 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t1778* MonoType_GetMethodsByName_m12514 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1778* MonoType_GetMethods_m12515 (MonoType_t3678 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t517 * MonoType_GetMethodImpl_m12516 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 PropertyInfoU5BU5D_t931* MonoType_GetPropertiesByName_m12517 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t931* MonoType_GetProperties_m12518 (MonoType_t3678 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t521 * MonoType_GetPropertyImpl_m12519 (MonoType_t3678 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, Type_t * ___returnType, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
 bool MonoType_HasElementTypeImpl_m12520 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
 bool MonoType_IsArrayImpl_m12521 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
 bool MonoType_IsByRefImpl_m12522 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
 bool MonoType_IsPointerImpl_m12523 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
 bool MonoType_IsPrimitiveImpl_m12524 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
 bool MonoType_IsSubclassOf_m12525 (MonoType_t3678 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * MonoType_InvokeMember_m12526 (MonoType_t3678 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2255 * ___binder, Object_t * ___target, ObjectU5BU5D_t315* ___args, ParameterModifierU5BU5D_t2256* ___modifiers, CultureInfo_t906 * ___culture, StringU5BU5D_t42* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
 Type_t * MonoType_GetElementType_m12527 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
 Type_t * MonoType_get_UnderlyingSystemType_m12528 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
 Assembly_t948 * MonoType_get_Assembly_m12529 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
 String_t* MonoType_get_AssemblyQualifiedName_m12530 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
 String_t* MonoType_getFullName_m12531 (MonoType_t3678 * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
 Type_t * MonoType_get_BaseType_m12532 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
 String_t* MonoType_get_FullName_m12533 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
 bool MonoType_IsDefined_m12534 (MonoType_t3678 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* MonoType_GetCustomAttributes_m12535 (MonoType_t3678 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* MonoType_GetCustomAttributes_m12536 (MonoType_t3678 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
 int32_t MonoType_get_MemberType_m12537 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
 String_t* MonoType_get_Name_m12538 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
 String_t* MonoType_get_Namespace_m12539 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
 Module_t3142 * MonoType_get_Module_m12540 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
 Type_t * MonoType_get_DeclaringType_m12541 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
 Type_t * MonoType_get_ReflectedType_m12542 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
 RuntimeTypeHandle_t3141  MonoType_get_TypeHandle_m12543 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoType::GetArrayRank()
 int32_t MonoType_GetArrayRank_m12544 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoType_GetObjectData_m12545 (MonoType_t3678 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
 String_t* MonoType_ToString_m12546 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
 TypeU5BU5D_t508* MonoType_GetGenericArguments_m12547 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
 bool MonoType_get_ContainsGenericParameters_m12548 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
 bool MonoType_get_IsGenericParameter_m12549 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
 Type_t * MonoType_GetGenericTypeDefinition_m12550 (MonoType_t3678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
 MethodBase_t935 * MonoType_CheckMethodSecurity_m12551 (MonoType_t3678 * __this, MethodBase_t935 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
 void MonoType_ReorderParamArrayArguments_m12552 (MonoType_t3678 * __this, ObjectU5BU5D_t315** ___args, MethodBase_t935 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
