#pragma once

// System.Delegate
struct Delegate_t352;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Delegate[]
struct DelegateU5BU5D_t1835;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
 MethodInfo_t517 * Delegate_get_Method_m5412 (Delegate_t352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
 Object_t * Delegate_get_Target_m5414 (Delegate_t352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t352 * Delegate_CreateDelegate_internal_m8869 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t517 * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
 void Delegate_SetMulticastInvoke_m8870 (Delegate_t352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
 bool Delegate_arg_type_match_m8871 (Object_t * __this/* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
 bool Delegate_return_type_match_m8872 (Object_t * __this/* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t352 * Delegate_CreateDelegate_m8873 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t517 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
 Delegate_t352 * Delegate_CreateDelegate_m5418 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t517 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t352 * Delegate_CreateDelegate_m8874 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo_t517 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
 Delegate_t352 * Delegate_CreateDelegate_m8875 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
 MethodInfo_t517 * Delegate_GetCandidateMethod_m8876 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
 Delegate_t352 * Delegate_CreateDelegate_m8877 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
 Delegate_t352 * Delegate_CreateDelegate_m8878 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
 Delegate_t352 * Delegate_CreateDelegate_m8879 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
 Delegate_t352 * Delegate_CreateDelegate_m8880 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::DynamicInvoke(System.Object[])
 Object_t * Delegate_DynamicInvoke_m8881 (Delegate_t352 * __this, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::DynamicInvokeImpl(System.Object[])
 Object_t * Delegate_DynamicInvokeImpl_m8882 (Delegate_t352 * __this, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
 Object_t * Delegate_Clone_m1736 (Delegate_t352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
 bool Delegate_Equals_m8883 (Delegate_t352 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
 int32_t Delegate_GetHashCode_m8884 (Delegate_t352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Delegate_GetObjectData_m8885 (Delegate_t352 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
 DelegateU5BU5D_t1835* Delegate_GetInvocationList_m4120 (Delegate_t352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
 Delegate_t352 * Delegate_Combine_m1629 (Object_t * __this/* static, unused */, Delegate_t352 * ___a, Delegate_t352 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
 Delegate_t352 * Delegate_Combine_m8886 (Object_t * __this/* static, unused */, DelegateU5BU5D_t1835* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
 Delegate_t352 * Delegate_CombineImpl_m8887 (Delegate_t352 * __this, Delegate_t352 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
 Delegate_t352 * Delegate_Remove_m1630 (Object_t * __this/* static, unused */, Delegate_t352 * ___source, Delegate_t352 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
 Delegate_t352 * Delegate_RemoveImpl_m8888 (Delegate_t352 * __this, Delegate_t352 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::op_Equality(System.Delegate,System.Delegate)
 bool Delegate_op_Equality_m8889 (Object_t * __this/* static, unused */, Delegate_t352 * ___d1, Delegate_t352 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
