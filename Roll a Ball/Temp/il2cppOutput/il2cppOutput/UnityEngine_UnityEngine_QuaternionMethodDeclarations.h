#pragma once

// UnityEngine.Quaternion
struct Quaternion_t356;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Quaternion__ctor_m4705 (Quaternion_t356 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m4706 (Object_t * __this/* static, unused */, Quaternion_t356  ___a, Quaternion_t356  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t356  Quaternion_Inverse_m1924 (Object_t * __this/* static, unused */, Quaternion_t356  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t356  Quaternion_INTERNAL_CALL_Inverse_m4707 (Object_t * __this/* static, unused */, Quaternion_t356 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m4708 (Quaternion_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
 Quaternion_t356  Quaternion_Euler_m4709 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
 Quaternion_t356  Quaternion_Internal_FromEulerRad_m4710 (Object_t * __this/* static, unused */, Vector3_t6  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
 Quaternion_t356  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4711 (Object_t * __this/* static, unused */, Vector3_t6 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m4712 (Quaternion_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m4713 (Quaternion_t356 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
 Quaternion_t356  Quaternion_op_Multiply_m4714 (Object_t * __this/* static, unused */, Quaternion_t356  ___lhs, Quaternion_t356  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t6  Quaternion_op_Multiply_m1653 (Object_t * __this/* static, unused */, Quaternion_t356  ___rotation, Vector3_t6  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m1826 (Object_t * __this/* static, unused */, Quaternion_t356  ___lhs, Quaternion_t356  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
