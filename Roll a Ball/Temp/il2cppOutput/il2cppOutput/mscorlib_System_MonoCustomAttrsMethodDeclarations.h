#pragma once

// System.MonoCustomAttrs
struct MonoCustomAttrs_t3674;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t3675;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t539;
// System.Reflection.PropertyInfo
struct PropertyInfo_t521;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t946;

// System.Void System.MonoCustomAttrs::.cctor()
 void MonoCustomAttrs__cctor_m12489 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
 bool MonoCustomAttrs_IsUserCattrProvider_m12490 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t315* MonoCustomAttrs_GetCustomAttributesInternal_m12491 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t315* MonoCustomAttrs_GetPseudoCustomAttributes_m12492 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t315* MonoCustomAttrs_GetCustomAttributesBase_m12493 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 Attribute_t539 * MonoCustomAttrs_GetCustomAttribute_m12494 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t315* MonoCustomAttrs_GetCustomAttributes_m12495 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
 ObjectU5BU5D_t315* MonoCustomAttrs_GetCustomAttributes_m12496 (Object_t * __this/* static, unused */, Object_t * ___obj, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 bool MonoCustomAttrs_IsDefined_m12497 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
 bool MonoCustomAttrs_IsDefinedInternal_m12498 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
 PropertyInfo_t521 * MonoCustomAttrs_GetBasePropertyDefinition_m12499 (Object_t * __this/* static, unused */, PropertyInfo_t521 * ___property, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
 Object_t * MonoCustomAttrs_GetBase_m12500 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
 AttributeUsageAttribute_t946 * MonoCustomAttrs_RetrieveAttributeUsage_m12501 (Object_t * __this/* static, unused */, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
