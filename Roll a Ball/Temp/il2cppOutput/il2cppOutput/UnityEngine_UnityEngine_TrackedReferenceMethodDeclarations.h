#pragma once

// UnityEngine.TrackedReference
struct TrackedReference_t2123;
struct TrackedReference_t2123_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m5234 (TrackedReference_t2123 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m5235 (TrackedReference_t2123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m5236 (Object_t * __this/* static, unused */, TrackedReference_t2123 * ___x, TrackedReference_t2123 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t2123_marshal(const TrackedReference_t2123& unmarshaled, TrackedReference_t2123_marshaled& marshaled);
void TrackedReference_t2123_marshal_back(const TrackedReference_t2123_marshaled& marshaled, TrackedReference_t2123& unmarshaled);
void TrackedReference_t2123_marshal_cleanup(TrackedReference_t2123_marshaled& marshaled);
