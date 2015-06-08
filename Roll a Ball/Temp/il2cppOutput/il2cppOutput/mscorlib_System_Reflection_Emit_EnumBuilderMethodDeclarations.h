#pragma once

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t3338;
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t932;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.EventInfo
struct EventInfo_t3143;
// System.Reflection.FieldInfo
struct FieldInfo_t1161;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1778;
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

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t948 * EnumBuilder_get_Assembly_m10343 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m10344 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m10345 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m10346 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m10347 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t3142 * EnumBuilder_get_Module_m10348 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m10349 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m10350 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m10351 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3141  EnumBuilder_get_TypeHandle_m10352 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m10353 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m10354 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t520 * EnumBuilder_GetConstructorImpl_m10355 (EnumBuilder_t3338 * __this, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t932* EnumBuilder_GetConstructors_m10356 (EnumBuilder_t3338 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* EnumBuilder_GetCustomAttributes_m10357 (EnumBuilder_t3338 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* EnumBuilder_GetCustomAttributes_m10358 (EnumBuilder_t3338 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m10359 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3143 * EnumBuilder_GetEvent_m10360 (EnumBuilder_t3338 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1161 * EnumBuilder_GetField_m10361 (EnumBuilder_t3338 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t508* EnumBuilder_GetInterfaces_m10362 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t517 * EnumBuilder_GetMethodImpl_m10363 (EnumBuilder_t3338 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, int32_t ___callConvention, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1778* EnumBuilder_GetMethods_m10364 (EnumBuilder_t3338 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t931* EnumBuilder_GetProperties_m10365 (EnumBuilder_t3338 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t521 * EnumBuilder_GetPropertyImpl_m10366 (EnumBuilder_t3338 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2255 * ___binder, Type_t * ___returnType, TypeU5BU5D_t508* ___types, ParameterModifierU5BU5D_t2256* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m10367 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m10368 (EnumBuilder_t3338 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2255 * ___binder, Object_t * ___target, ObjectU5BU5D_t315* ___args, ParameterModifierU5BU5D_t2256* ___modifiers, CultureInfo_t906 * ___culture, StringU5BU5D_t42* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m10369 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m10370 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m10371 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m10372 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m10373 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m10374 (EnumBuilder_t3338 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t35 * EnumBuilder_CreateNotSupportedException_m10375 (EnumBuilder_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
