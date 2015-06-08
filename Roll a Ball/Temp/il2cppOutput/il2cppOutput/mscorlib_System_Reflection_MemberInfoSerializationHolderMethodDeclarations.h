#pragma once

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t3363;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t508;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MemberInfoSerializationHolder__ctor_m10613 (MemberInfoSerializationHolder_t3363 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
 void MemberInfoSerializationHolder_Serialize_m10614 (Object_t * __this/* static, unused */, SerializationInfo_t2166 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
 void MemberInfoSerializationHolder_Serialize_m10615 (Object_t * __this/* static, unused */, SerializationInfo_t2166 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t508* ___genericArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MemberInfoSerializationHolder_GetObjectData_m10616 (MemberInfoSerializationHolder_t3363 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * MemberInfoSerializationHolder_GetRealObject_m10617 (MemberInfoSerializationHolder_t3363 * __this, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
