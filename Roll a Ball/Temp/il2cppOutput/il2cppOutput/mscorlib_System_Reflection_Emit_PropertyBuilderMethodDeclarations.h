#pragma once

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t3346;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3142;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1778;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t930;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2255;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.Exception
struct Exception_t35;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
 int32_t PropertyBuilder_get_Attributes_m10465 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
 bool PropertyBuilder_get_CanRead_m10466 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
 bool PropertyBuilder_get_CanWrite_m10467 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
 Type_t * PropertyBuilder_get_DeclaringType_m10468 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
 String_t* PropertyBuilder_get_Name_m10469 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
 Type_t * PropertyBuilder_get_PropertyType_m10470 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
 Type_t * PropertyBuilder_get_ReflectedType_m10471 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
 MethodInfoU5BU5D_t1778* PropertyBuilder_GetAccessors_m10472 (PropertyBuilder_t3346 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* PropertyBuilder_GetCustomAttributes_m10473 (PropertyBuilder_t3346 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* PropertyBuilder_GetCustomAttributes_m10474 (PropertyBuilder_t3346 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
 MethodInfo_t517 * PropertyBuilder_GetGetMethod_m10475 (PropertyBuilder_t3346 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
 ParameterInfoU5BU5D_t930* PropertyBuilder_GetIndexParameters_m10476 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
 MethodInfo_t517 * PropertyBuilder_GetSetMethod_m10477 (PropertyBuilder_t3346 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
 Object_t * PropertyBuilder_GetValue_m10478 (PropertyBuilder_t3346 * __this, Object_t * ___obj, ObjectU5BU5D_t315* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * PropertyBuilder_GetValue_m10479 (PropertyBuilder_t3346 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___index, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
 bool PropertyBuilder_IsDefined_m10480 (PropertyBuilder_t3346 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
 void PropertyBuilder_SetValue_m10481 (PropertyBuilder_t3346 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t315* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void PropertyBuilder_SetValue_m10482 (PropertyBuilder_t3346 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___index, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
 Module_t3142 * PropertyBuilder_get_Module_m10483 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
 Exception_t35 * PropertyBuilder_not_supported_m10484 (PropertyBuilder_t3346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
