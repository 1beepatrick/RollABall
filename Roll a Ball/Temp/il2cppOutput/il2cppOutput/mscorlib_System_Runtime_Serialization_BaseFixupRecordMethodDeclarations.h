#pragma once

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3508;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3507;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3500;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
 void BaseFixupRecord__ctor_m11178 (BaseFixupRecord_t3508 * __this, ObjectRecord_t3507 * ___objectToBeFixed, ObjectRecord_t3507 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool BaseFixupRecord_DoFixup_m11179 (BaseFixupRecord_t3508 * __this, ObjectManager_t3500 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
