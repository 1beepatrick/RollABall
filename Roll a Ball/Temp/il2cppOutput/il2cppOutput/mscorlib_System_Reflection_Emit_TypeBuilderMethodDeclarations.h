#pragma once

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3334;
// System.Reflection.Assembly
struct Assembly_t948;
// System.String
struct String_t;
// System.Type
struct Type_t;
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
// System.Object[]
struct ObjectU5BU5D_t315;
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
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.String[]
struct StringU5BU5D_t42;
// System.Exception
struct Exception_t35;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
 int32_t TypeBuilder_GetAttributeFlagsImpl_m10485 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
 Assembly_t948 * TypeBuilder_get_Assembly_m10486 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
 String_t* TypeBuilder_get_AssemblyQualifiedName_m10487 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
 Type_t * TypeBuilder_get_BaseType_m10488 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
 Type_t * TypeBuilder_get_DeclaringType_m10489 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
 Type_t * TypeBuilder_get_UnderlyingSystemType_m10490 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
 String_t* TypeBuilder_get_FullName_m10491 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
 Module_t3142 * TypeBuilder_get_Module_m10492 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
 String_t* TypeBuilder_get_Name_m10493 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
 String_t* TypeBuilder_get_Namespace_m10494 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
 Type_t * TypeBuilder_get_ReflectedType_m10495 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t520 * TypeBuilder_GetConstructorImpl_m10496 (TypeBuilder_t3334 * __this, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
 bool TypeBuilder_IsDefined_m10497 (TypeBuilder_t3334 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* TypeBuilder_GetCustomAttributes_m10498 (TypeBuilder_t3334 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* TypeBuilder_GetCustomAttributes_m10499 (TypeBuilder_t3334 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t932* TypeBuilder_GetConstructors_m10500 (TypeBuilder_t3334 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t932* TypeBuilder_GetConstructorsInternal_m10501 (TypeBuilder_t3334 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
 Type_t * TypeBuilder_GetElementType_m10502 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3143 * TypeBuilder_GetEvent_m10503 (TypeBuilder_t3334 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1161 * TypeBuilder_GetField_m10504 (TypeBuilder_t3334 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
 TypeU5BU5D_t508* TypeBuilder_GetInterfaces_m10505 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t1778* TypeBuilder_GetMethodsByName_m10506 (TypeBuilder_t3334 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1778* TypeBuilder_GetMethods_m10507 (TypeBuilder_t3334 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t517 * TypeBuilder_GetMethodImpl_m10508 (TypeBuilder_t3334 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t931* TypeBuilder_GetProperties_m10509 (TypeBuilder_t3334 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t521 * TypeBuilder_GetPropertyImpl_m10510 (TypeBuilder_t3334 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, Type_t * ___returnType, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
 bool TypeBuilder_HasElementTypeImpl_m10511 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * TypeBuilder_InvokeMember_m10512 (TypeBuilder_t3334 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2255 * ___binder, Object_t * ___target, ObjectU5BU5D_t315* ___args, ParameterModifierU5BU5D_t2256* ___modifiers, CultureInfo_t906 * ___culture, StringU5BU5D_t42* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
 bool TypeBuilder_IsArrayImpl_m10513 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
 bool TypeBuilder_IsByRefImpl_m10514 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
 bool TypeBuilder_IsPointerImpl_m10515 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
 bool TypeBuilder_IsPrimitiveImpl_m10516 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
 bool TypeBuilder_IsValueTypeImpl_m10517 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
 Type_t * TypeBuilder_MakeGenericType_m10518 (TypeBuilder_t3334 * __this, TypeU5BU5D_t508* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3141  TypeBuilder_get_TypeHandle_m10519 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
 bool TypeBuilder_get_IsCompilerContext_m10520 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
 bool TypeBuilder_get_is_created_m10521 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
 Exception_t35 * TypeBuilder_not_supported_m10522 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
 void TypeBuilder_check_created_m10523 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
 String_t* TypeBuilder_ToString_m10524 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
 bool TypeBuilder_IsAssignableFrom_m10525 (TypeBuilder_t3334 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
 bool TypeBuilder_IsSubclassOf_m10526 (TypeBuilder_t3334 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
 bool TypeBuilder_IsAssignableTo_m10527 (TypeBuilder_t3334 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
 TypeU5BU5D_t508* TypeBuilder_GetGenericArguments_m10528 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
 Type_t * TypeBuilder_GetGenericTypeDefinition_m10529 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
 bool TypeBuilder_get_ContainsGenericParameters_m10530 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
 bool TypeBuilder_get_IsGenericParameter_m10531 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
 bool TypeBuilder_get_IsGenericTypeDefinition_m10532 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
 bool TypeBuilder_get_IsGenericType_m10533 (TypeBuilder_t3334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
