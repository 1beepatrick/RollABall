#pragma once

// UnityEngine.UI.Graphic
struct Graphic_t161;
// UnityEngine.Material
struct Material_t152;
// UnityEngine.RectTransform
struct RectTransform_t155;
// UnityEngine.Canvas
struct Canvas_t157;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t156;
// UnityEngine.Texture
struct Texture_t162;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t163;
// UnityEngine.Camera
struct Camera_t112;
// UnityEngine.Events.UnityAction
struct UnityAction_t158;
// UnityEngine.Transform
struct Transform_t25;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
 void Graphic__ctor_m475 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
 void Graphic__cctor_m476 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
 Material_t152 * Graphic_get_defaultGraphicMaterial_m477 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
 Color_t132  Graphic_get_color_m478 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
 void Graphic_set_color_m479 (Graphic_t161 * __this, Color_t132  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
 void Graphic_SetAllDirty_m480 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
 void Graphic_SetLayoutDirty_m481 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
 void Graphic_SetVerticesDirty_m482 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
 void Graphic_SetMaterialDirty_m483 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
 void Graphic_OnRectTransformDimensionsChange_m484 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
 void Graphic_OnBeforeTransformParentChanged_m485 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
 void Graphic_OnTransformParentChanged_m486 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
 int32_t Graphic_get_depth_m487 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
 RectTransform_t155 * Graphic_get_rectTransform_m488 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
 Canvas_t157 * Graphic_get_canvas_m489 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
 void Graphic_CacheCanvas_m490 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
 CanvasRenderer_t156 * Graphic_get_canvasRenderer_m491 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
 Material_t152 * Graphic_get_defaultMaterial_m492 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
 Material_t152 * Graphic_get_material_m493 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
 void Graphic_set_material_m494 (Graphic_t161 * __this, Material_t152 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
 Material_t152 * Graphic_get_materialForRendering_m495 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
 Texture_t162 * Graphic_get_mainTexture_m496 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
 void Graphic_OnEnable_m497 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
 void Graphic_OnDisable_m498 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
 void Graphic_SendGraphicEnabledDisabled_m499 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Graphic_Rebuild_m500 (Graphic_t161 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
 void Graphic_UpdateGeometry_m501 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
 void Graphic_UpdateMaterial_m502 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_OnFillVBO_m503 (Graphic_t161 * __this, List_1_t163 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
 void Graphic_OnDidApplyAnimationProperties_m504 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
 void Graphic_SetNativeSize_m505 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
 bool Graphic_Raycast_m506 (Graphic_t161 * __this, Vector2_t109  ___sp, Camera_t112 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
 Vector2_t109  Graphic_PixelAdjustPoint_m507 (Graphic_t161 * __this, Vector2_t109  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
 Rect_t164  Graphic_GetPixelAdjustedRect_m508 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m509 (Graphic_t161 * __this, Color_t132  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m510 (Graphic_t161 * __this, Color_t132  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
 Color_t132  Graphic_CreateColorFromAlpha_m511 (Object_t * __this/* static, unused */, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
 void Graphic_CrossFadeAlpha_m512 (Graphic_t161 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyLayoutCallback_m513 (Graphic_t161 * __this, UnityAction_t158 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyLayoutCallback_m514 (Graphic_t161 * __this, UnityAction_t158 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyVerticesCallback_m515 (Graphic_t161 * __this, UnityAction_t158 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyVerticesCallback_m516 (Graphic_t161 * __this, UnityAction_t158 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyMaterialCallback_m517 (Graphic_t161 * __this, UnityAction_t158 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyMaterialCallback_m518 (Graphic_t161 * __this, UnityAction_t158 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__4_m519 (Object_t * __this/* static, unused */, List_1_t163 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__5_m520 (Object_t * __this/* static, unused */, List_1_t163 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m521 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t25 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m522 (Graphic_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
