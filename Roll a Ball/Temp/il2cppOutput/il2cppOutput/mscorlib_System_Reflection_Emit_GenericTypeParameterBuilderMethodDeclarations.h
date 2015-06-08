#pragma once

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t3342;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m10391 (GenericTypeParameterBuilder_t3342 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m10392 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t520 * GenericTypeParameterBuilder_GetConstructorImpl_m10393 (GenericTypeParameterBuilder_t3342 * __this, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t932* GenericTypeParameterBuilder_GetConstructors_m10394 (GenericTypeParameterBuilder_t3342 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3143 * GenericTypeParameterBuilder_GetEvent_m10395 (GenericTypeParameterBuilder_t3342 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1161 * GenericTypeParameterBuilder_GetField_m10396 (GenericTypeParameterBuilder_t3342 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t508* GenericTypeParameterBuilder_GetInterfaces_m10397 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1778* GenericTypeParameterBuilder_GetMethods_m10398 (GenericTypeParameterBuilder_t3342 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t517 * GenericTypeParameterBuilder_GetMethodImpl_m10399 (GenericTypeParameterBuilder_t3342 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t931* GenericTypeParameterBuilder_GetProperties_m10400 (GenericTypeParameterBuilder_t3342 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t521 * GenericTypeParameterBuilder_GetPropertyImpl_m10401 (GenericTypeParameterBuilder_t3342 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, Type_t * ___returnType, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m10402 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m10403 (GenericTypeParameterBuilder_t3342 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m10404 (GenericTypeParameterBuilder_t3342 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m10405 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m10406 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m10407 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m10408 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m10409 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m10410 (GenericTypeParameterBuilder_t3342 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2255 * ___binder, Object_t * ___target, ObjectU5BU5D_t315* ___args, ParameterModifierU5BU5D_t2256* ___modifiers, CultureInfo_t906 * ___culture, StringU5BU5D_t42* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m10411 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m10412 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t948 * GenericTypeParameterBuilder_get_Assembly_m10413 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m10414 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m10415 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m10416 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m10417 (GenericTypeParameterBuilder_t3342 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* GenericTypeParameterBuilder_GetCustomAttributes_m10418 (GenericTypeParameterBuilder_t3342 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* GenericTypeParameterBuilder_GetCustomAttributes_m10419 (GenericTypeParameterBuilder_t3342 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m10420 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m10421 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t3142 * GenericTypeParameterBuilder_get_Module_m10422 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m10423 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m10424 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3141  GenericTypeParameterBuilder_get_TypeHandle_m10425 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t508* GenericTypeParameterBuilder_GetGenericArguments_m10426 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m10427 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m10428 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m10429 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m10430 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m10431 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t35 * GenericTypeParameterBuilder_not_supported_m10432 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m10433 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m10434 (GenericTypeParameterBuilder_t3342 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m10435 (GenericTypeParameterBuilder_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m10436 (GenericTypeParameterBuilder_t3342 * __this, TypeU5BU5D_t508* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
