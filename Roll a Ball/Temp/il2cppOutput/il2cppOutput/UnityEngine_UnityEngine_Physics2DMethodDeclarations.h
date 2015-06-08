﻿#pragma once

// UnityEngine.Physics2D
struct Physics2D_t325;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t328;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
 void Physics2D__cctor_m4989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
 void Physics2D_Internal_Raycast_m4990 (Object_t * __this/* static, unused */, Vector2_t109  ___origin, Vector2_t109  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t329 * ___raycastHit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
 void Physics2D_INTERNAL_CALL_Internal_Raycast_m4991 (Object_t * __this/* static, unused */, Vector2_t109 * ___origin, Vector2_t109 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t329 * ___raycastHit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
 RaycastHit2D_t329  Physics2D_Raycast_m1647 (Object_t * __this/* static, unused */, Vector2_t109  ___origin, Vector2_t109  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
 RaycastHit2D_t329  Physics2D_Raycast_m4992 (Object_t * __this/* static, unused */, Vector2_t109  ___origin, Vector2_t109  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
 RaycastHit2DU5BU5D_t328* Physics2D_RaycastAll_m1501 (Object_t * __this/* static, unused */, Vector2_t109  ___origin, Vector2_t109  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
 RaycastHit2DU5BU5D_t328* Physics2D_INTERNAL_CALL_RaycastAll_m4993 (Object_t * __this/* static, unused */, Vector2_t109 * ___origin, Vector2_t109 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
