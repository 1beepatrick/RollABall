#pragma once

// UnityEngine.Camera
struct Camera_t112;
// UnityEngine.RenderTexture
struct RenderTexture_t2042;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2091;
// UnityEngine.GameObject
struct GameObject_t4;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_nearClipPlane()
 float Camera_get_nearClipPlane_m1498 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
 float Camera_get_farClipPlane_m1497 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
 float Camera_get_depth_m1338 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
 int32_t Camera_get_cullingMask_m1512 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
 int32_t Camera_get_eventMask_m4867 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_pixelRect_m4868 (Camera_t112 * __this, Rect_t164 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
 Rect_t164  Camera_get_pixelRect_m4869 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
 RenderTexture_t2042 * Camera_get_targetTexture_m4870 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
 int32_t Camera_get_clearFlags_m4871 (Camera_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
 Vector3_t6  Camera_ScreenToViewportPoint_m1645 (Camera_t112 * __this, Vector3_t6  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t6  Camera_INTERNAL_CALL_ScreenToViewportPoint_m4872 (Object_t * __this/* static, unused */, Camera_t112 * ___self, Vector3_t6 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
 Ray_t327  Camera_ScreenPointToRay_m1496 (Camera_t112 * __this, Vector3_t6  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t327  Camera_INTERNAL_CALL_ScreenPointToRay_m4873 (Object_t * __this/* static, unused */, Camera_t112 * ___self, Vector3_t6 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
 Camera_t112 * Camera_get_main_m1511 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
 int32_t Camera_get_allCamerasCount_m4874 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
 int32_t Camera_GetAllCameras_m4875 (Object_t * __this/* static, unused */, CameraU5BU5D_t2091* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
 void Camera_FireOnPreCull_m4876 (Object_t * __this/* static, unused */, Camera_t112 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
 void Camera_FireOnPreRender_m4877 (Object_t * __this/* static, unused */, Camera_t112 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
 void Camera_FireOnPostRender_m4878 (Object_t * __this/* static, unused */, Camera_t112 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t4 * Camera_RaycastTry_m4879 (Camera_t112 * __this, Ray_t327  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t4 * Camera_INTERNAL_CALL_RaycastTry_m4880 (Object_t * __this/* static, unused */, Camera_t112 * ___self, Ray_t327 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t4 * Camera_RaycastTry2D_m4881 (Camera_t112 * __this, Ray_t327  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t4 * Camera_INTERNAL_CALL_RaycastTry2D_m4882 (Object_t * __this/* static, unused */, Camera_t112 * ___self, Ray_t327 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
