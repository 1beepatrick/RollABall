#pragma once

// UnityEngine.RectTransformUtility
struct RectTransformUtility_t351;
// UnityEngine.RectTransform
struct RectTransform_t155;
// UnityEngine.Camera
struct Camera_t112;
// UnityEngine.Transform
struct Transform_t25;
// UnityEngine.Canvas
struct Canvas_t157;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
 void RectTransformUtility__cctor_m5114 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
 bool RectTransformUtility_RectangleContainsScreenPoint_m1659 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rect, Vector2_t109  ___screenPoint, Camera_t112 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
 bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5115 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rect, Vector2_t109 * ___screenPoint, Camera_t112 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
 Vector2_t109  RectTransformUtility_PixelAdjustPoint_m1621 (Object_t * __this/* static, unused */, Vector2_t109  ___point, Transform_t25 * ___elementTransform, Canvas_t157 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
 void RectTransformUtility_PixelAdjustPoint_m5116 (Object_t * __this/* static, unused */, Vector2_t109  ___point, Transform_t25 * ___elementTransform, Canvas_t157 * ___canvas, Vector2_t109 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
 void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5117 (Object_t * __this/* static, unused */, Vector2_t109 * ___point, Transform_t25 * ___elementTransform, Canvas_t157 * ___canvas, Vector2_t109 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
 Rect_t164  RectTransformUtility_PixelAdjustRect_m1622 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rectTransform, Canvas_t157 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
 bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m5118 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rect, Vector2_t109  ___screenPoint, Camera_t112 * ___cam, Vector3_t6 * ___worldPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
 bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1710 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rect, Vector2_t109  ___screenPoint, Camera_t112 * ___cam, Vector2_t109 * ___localPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
 Ray_t327  RectTransformUtility_ScreenPointToRay_m5119 (Object_t * __this/* static, unused */, Camera_t112 * ___cam, Vector2_t109  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
 void RectTransformUtility_FlipLayoutOnAxis_m1876 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
 void RectTransformUtility_FlipLayoutAxes_m1875 (Object_t * __this/* static, unused */, RectTransform_t155 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
 Vector2_t109  RectTransformUtility_GetTransposed_m5120 (Object_t * __this/* static, unused */, Vector2_t109  ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
