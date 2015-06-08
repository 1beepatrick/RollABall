#pragma once

// UnityEngine.ScriptableObject
struct ScriptableObject_t2016;
struct ScriptableObject_t2016_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m4365 (ScriptableObject_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m4366 (Object_t * __this/* static, unused */, ScriptableObject_t2016 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t2016 * ScriptableObject_CreateInstance_m4367 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t2016 * ScriptableObject_CreateInstance_m4368 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t2016 * ScriptableObject_CreateInstanceFromType_m4369 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t2016_marshal(const ScriptableObject_t2016& unmarshaled, ScriptableObject_t2016_marshaled& marshaled);
void ScriptableObject_t2016_marshal_back(const ScriptableObject_t2016_marshaled& marshaled, ScriptableObject_t2016& unmarshaled);
void ScriptableObject_t2016_marshal_cleanup(ScriptableObject_t2016_marshaled& marshaled);
