#pragma once

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3500;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3459;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3507;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3508;
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t1046;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void ObjectManager__ctor_m11164 (ObjectManager_t3500 * __this, Object_t * ___selector, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
 void ObjectManager_DoFixups_m11165 (ObjectManager_t3500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
 ObjectRecord_t3507 * ObjectManager_GetObjectRecord_m11166 (ObjectManager_t3500 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
 Object_t * ObjectManager_GetObject_m11167 (ObjectManager_t3500 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
 void ObjectManager_RaiseDeserializationEvent_m11168 (ObjectManager_t3500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
 void ObjectManager_RaiseOnDeserializingEvent_m11169 (ObjectManager_t3500 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
 void ObjectManager_RaiseOnDeserializedEvent_m11170 (ObjectManager_t3500 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
 void ObjectManager_AddFixup_m11171 (ObjectManager_t3500 * __this, BaseFixupRecord_t3508 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
 void ObjectManager_RecordArrayElementFixup_m11172 (ObjectManager_t3500 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
 void ObjectManager_RecordArrayElementFixup_m11173 (ObjectManager_t3500 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t2359* ___indices, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
 void ObjectManager_RecordDelayedFixup_m11174 (ObjectManager_t3500 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
 void ObjectManager_RecordFixup_m11175 (ObjectManager_t3500 * __this, int64_t ___objectToBeFixed, MemberInfo_t1046 * ___member, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
 void ObjectManager_RegisterObjectInternal_m11176 (ObjectManager_t3500 * __this, Object_t * ___obj, ObjectRecord_t3507 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectManager_RegisterObject_m11177 (ObjectManager_t3500 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t2166 * ___info, int64_t ___idOfContainingObj, MemberInfo_t1046 * ___member, Int32U5BU5D_t2359* ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
