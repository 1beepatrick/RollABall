#pragma once

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3507;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3500;
// System.Reflection.MemberInfo
struct MemberInfo_t1046;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3508;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3459;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
 void ObjectRecord__ctor_m11188 (ObjectRecord_t3507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
 void ObjectRecord_SetMemberValue_m11189 (ObjectRecord_t3507 * __this, ObjectManager_t3500 * ___manager, MemberInfo_t1046 * ___member, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
 void ObjectRecord_SetArrayValue_m11190 (ObjectRecord_t3507 * __this, ObjectManager_t3500 * ___manager, Object_t * ___value, Int32U5BU5D_t2359* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
 void ObjectRecord_SetMemberValue_m11191 (ObjectRecord_t3507 * __this, ObjectManager_t3500 * ___manager, String_t* ___memberName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
 bool ObjectRecord_get_IsInstanceReady_m11192 (ObjectRecord_t3507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
 bool ObjectRecord_get_IsUnsolvedObjectReference_m11193 (ObjectRecord_t3507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
 bool ObjectRecord_get_IsRegistered_m11194 (ObjectRecord_t3507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool ObjectRecord_DoFixups_m11195 (ObjectRecord_t3507 * __this, bool ___asContainer, ObjectManager_t3500 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_RemoveFixup_m11196 (ObjectRecord_t3507 * __this, BaseFixupRecord_t3508 * ___fixupToRemove, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_UnchainFixup_m11197 (ObjectRecord_t3507 * __this, BaseFixupRecord_t3508 * ___fixup, BaseFixupRecord_t3508 * ___prevFixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_ChainFixup_m11198 (ObjectRecord_t3507 * __this, BaseFixupRecord_t3508 * ___fixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 bool ObjectRecord_LoadData_m11199 (ObjectRecord_t3507 * __this, ObjectManager_t3500 * ___manager, Object_t * ___selector, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
 bool ObjectRecord_get_HasPendingFixups_m11200 (ObjectRecord_t3507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
