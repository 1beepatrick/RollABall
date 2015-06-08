#pragma once

// System.Reflection.MonoProperty
struct MonoProperty_t3378;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1778;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t930;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3380;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2255;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.Type[]
struct TypeU5BU5D_t508;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
 void MonoProperty__ctor_m10743 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
 void MonoProperty_CachePropertyInfo_m10744 (MonoProperty_t3378 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
 int32_t MonoProperty_get_Attributes_m10745 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
 bool MonoProperty_get_CanRead_m10746 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
 bool MonoProperty_get_CanWrite_m10747 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
 Type_t * MonoProperty_get_PropertyType_m10748 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
 Type_t * MonoProperty_get_ReflectedType_m10749 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
 Type_t * MonoProperty_get_DeclaringType_m10750 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
 String_t* MonoProperty_get_Name_m10751 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
 MethodInfoU5BU5D_t1778* MonoProperty_GetAccessors_m10752 (MonoProperty_t3378 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
 MethodInfo_t517 * MonoProperty_GetGetMethod_m10753 (MonoProperty_t3378 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
 ParameterInfoU5BU5D_t930* MonoProperty_GetIndexParameters_m10754 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
 MethodInfo_t517 * MonoProperty_GetSetMethod_m10755 (MonoProperty_t3378 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
 bool MonoProperty_IsDefined_m10756 (MonoProperty_t3378 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t315* MonoProperty_GetCustomAttributes_m10757 (MonoProperty_t3378 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* MonoProperty_GetCustomAttributes_m10758 (MonoProperty_t3378 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
 GetterAdapter_t3380 * MonoProperty_CreateGetterDelegate_m10759 (Object_t * __this/* static, unused */, MethodInfo_t517 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
 Object_t * MonoProperty_GetValue_m10760 (MonoProperty_t3378 * __this, Object_t * ___obj, ObjectU5BU5D_t315* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoProperty_GetValue_m10761 (MonoProperty_t3378 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___index, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void MonoProperty_SetValue_m10762 (MonoProperty_t3378 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2255 * ___binder, ObjectU5BU5D_t315* ___index, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
 String_t* MonoProperty_ToString_m10763 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
 TypeU5BU5D_t508* MonoProperty_GetOptionalCustomModifiers_m10764 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
 TypeU5BU5D_t508* MonoProperty_GetRequiredCustomModifiers_m10765 (MonoProperty_t3378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoProperty_GetObjectData_m10766 (MonoProperty_t3378 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
