﻿#pragma once

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t3336;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3334;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3142;
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
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
 int32_t ConstructorBuilder_get_CallingConvention_m10324 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
 TypeBuilder_t3334 * ConstructorBuilder_get_TypeBuilder_m10325 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
 ParameterInfoU5BU5D_t930* ConstructorBuilder_GetParameters_m10326 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
 ParameterInfoU5BU5D_t930* ConstructorBuilder_GetParametersInternal_m10327 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m10328 (ConstructorBuilder_t3336 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___parameters, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m10329 (ConstructorBuilder_t3336 * __this, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___parameters, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
 RuntimeMethodHandle_t3337  ConstructorBuilder_get_MethodHandle_m10330 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
 int32_t ConstructorBuilder_get_Attributes_m10331 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
 Type_t * ConstructorBuilder_get_ReflectedType_m10332 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
 Type_t * ConstructorBuilder_get_DeclaringType_m10333 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
 String_t* ConstructorBuilder_get_Name_m10334 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
 bool ConstructorBuilder_IsDefined_m10335 (ConstructorBuilder_t3336 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* ConstructorBuilder_GetCustomAttributes_m10336 (ConstructorBuilder_t3336 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* ConstructorBuilder_GetCustomAttributes_m10337 (ConstructorBuilder_t3336 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
 Module_t3142 * ConstructorBuilder_get_Module_m10338 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
 String_t* ConstructorBuilder_ToString_m10339 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
 bool ConstructorBuilder_get_IsCompilerContext_m10340 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
 Exception_t35 * ConstructorBuilder_not_supported_m10341 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
 Exception_t35 * ConstructorBuilder_not_created_m10342 (ConstructorBuilder_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
