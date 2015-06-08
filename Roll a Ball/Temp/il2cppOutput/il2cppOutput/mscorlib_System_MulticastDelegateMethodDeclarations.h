﻿#pragma once

// System.MulticastDelegate
struct MulticastDelegate_t195;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Delegate[]
struct DelegateU5BU5D_t1835;
// System.Delegate
struct Delegate_t352;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m1734 (MulticastDelegate_t195 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MulticastDelegate::DynamicInvokeImpl(System.Object[])
 Object_t * MulticastDelegate_DynamicInvokeImpl_m1735 (MulticastDelegate_t195 * __this, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m1732 (MulticastDelegate_t195 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m1733 (MulticastDelegate_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t1835* MulticastDelegate_GetInvocationList_m1737 (MulticastDelegate_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t352 * MulticastDelegate_CombineImpl_m1738 (MulticastDelegate_t195 * __this, Delegate_t352 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m8867 (MulticastDelegate_t195 * __this, MulticastDelegate_t195 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t195 * MulticastDelegate_KPM_m8868 (Object_t * __this/* static, unused */, MulticastDelegate_t195 * ___needle, MulticastDelegate_t195 * ___haystack, MulticastDelegate_t195 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t352 * MulticastDelegate_RemoveImpl_m1739 (MulticastDelegate_t195 * __this, Delegate_t352 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
