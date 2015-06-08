#pragma once

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t3512;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3507;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3500;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m11186 (DelayedFixupRecord_t3512 * __this, ObjectRecord_t3507 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t3507 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m11187 (DelayedFixupRecord_t3512 * __this, ObjectManager_t3500 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
