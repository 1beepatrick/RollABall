#pragma once

// UnityEngine.Plane
struct Plane_t376;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Plane__ctor_m1780 (Plane_t376 * __this, Vector3_t6  ___inNormal, Vector3_t6  ___inPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
 Vector3_t6  Plane_get_normal_m4790 (Plane_t376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
 float Plane_get_distance_m4791 (Plane_t376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
 bool Plane_Raycast_m1781 (Plane_t376 * __this, Ray_t327  ___ray, float* ___enter, MethodInfo* method) IL2CPP_METHOD_ATTR;
