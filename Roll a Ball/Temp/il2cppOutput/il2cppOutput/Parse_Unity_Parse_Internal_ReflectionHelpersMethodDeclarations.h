#pragma once

// Parse.Internal.ReflectionHelpers
struct ReflectionHelpers_t515;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t516;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t508;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t518;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t519;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t520;
// System.Reflection.PropertyInfo
struct PropertyInfo_t521;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>
struct U3CU3Ef__AnonymousType0_2_t522;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>
struct U3CU3Ef__AnonymousType1_2_t510;
// System.Reflection.ParameterInfo
struct ParameterInfo_t523;

// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Parse.Internal.ReflectionHelpers::GetProperties(System.Type)
 Object_t* ReflectionHelpers_GetProperties_m2306 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Parse.Internal.ReflectionHelpers::GetMethod(System.Type,System.String,System.Type[])
 MethodInfo_t517 * ReflectionHelpers_GetMethod_m2307 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___name, TypeU5BU5D_t508* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsPrimitive(System.Type)
 bool ReflectionHelpers_IsPrimitive_m2308 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Parse.Internal.ReflectionHelpers::GetInterfaces(System.Type)
 Object_t* ReflectionHelpers_GetInterfaces_m2309 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsConstructedGenericType(System.Type)
 bool ReflectionHelpers_IsConstructedGenericType_m2310 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> Parse.Internal.ReflectionHelpers::GetConstructors(System.Type)
 Object_t* ReflectionHelpers_GetConstructors_m2311 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Parse.Internal.ReflectionHelpers::GetGenericTypeArguments(System.Type)
 TypeU5BU5D_t508* ReflectionHelpers_GetGenericTypeArguments_m2312 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::FindConstructor(System.Type,System.Type[])
 ConstructorInfo_t520 * ReflectionHelpers_FindConstructor_m2313 (Object_t * __this/* static, unused */, Type_t * ___self, TypeU5BU5D_t508* ___parameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo Parse.Internal.ReflectionHelpers::GetProperty(System.Type,System.String)
 PropertyInfo_t521 * ReflectionHelpers_GetProperty_m2314 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsNullable(System.Type)
 bool ReflectionHelpers_IsNullable_m2315 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]> Parse.Internal.ReflectionHelpers::<FindConstructor>b__2(System.Reflection.ConstructorInfo)
 U3CU3Ef__AnonymousType0_2_t522 * ReflectionHelpers_U3CFindConstructorU3Eb__2_m2316 (Object_t * __this/* static, unused */, ConstructorInfo_t520 * ___constructor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>> Parse.Internal.ReflectionHelpers::<FindConstructor>b__3(<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>)
 U3CU3Ef__AnonymousType1_2_t510 * ReflectionHelpers_U3CFindConstructorU3Eb__3_m2317 (Object_t * __this/* static, unused */, U3CU3Ef__AnonymousType0_2_t522 * ___U3CU3Eh__TransparentIdentifier0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::<FindConstructor>b__6(<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>)
 ConstructorInfo_t520 * ReflectionHelpers_U3CFindConstructorU3Eb__6_m2318 (Object_t * __this/* static, unused */, U3CU3Ef__AnonymousType1_2_t510 * ___U3CU3Eh__TransparentIdentifier1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.Internal.ReflectionHelpers::<FindConstructor>b__4(System.Reflection.ParameterInfo)
 Type_t * ReflectionHelpers_U3CFindConstructorU3Eb__4_m2319 (Object_t * __this/* static, unused */, ParameterInfo_t523 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
