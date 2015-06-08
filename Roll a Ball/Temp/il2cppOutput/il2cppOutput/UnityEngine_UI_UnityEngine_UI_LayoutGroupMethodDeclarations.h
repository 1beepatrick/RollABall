#pragma once

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t260;
// UnityEngine.RectOffset
struct RectOffset_t264;
// UnityEngine.RectTransform
struct RectTransform_t155;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t265;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
 void LayoutGroup__ctor_m1173 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
 RectOffset_t264 * LayoutGroup_get_padding_m1174 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
 void LayoutGroup_set_padding_m1175 (LayoutGroup_t260 * __this, RectOffset_t264 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
 int32_t LayoutGroup_get_childAlignment_m1176 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
 void LayoutGroup_set_childAlignment_m1177 (LayoutGroup_t260 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
 RectTransform_t155 * LayoutGroup_get_rectTransform_m1178 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
 List_1_t265 * LayoutGroup_get_rectChildren_m1179 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
 void LayoutGroup_CalculateLayoutInputHorizontal_m1180 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputVertical()
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
 float LayoutGroup_get_minWidth_m1181 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
 float LayoutGroup_get_preferredWidth_m1182 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
 float LayoutGroup_get_flexibleWidth_m1183 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
 float LayoutGroup_get_minHeight_m1184 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
 float LayoutGroup_get_preferredHeight_m1185 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
 float LayoutGroup_get_flexibleHeight_m1186 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
 int32_t LayoutGroup_get_layoutPriority_m1187 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutHorizontal()
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutVertical()
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
 void LayoutGroup_OnEnable_m1188 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
 void LayoutGroup_OnDisable_m1189 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
 void LayoutGroup_OnDidApplyAnimationProperties_m1190 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
 float LayoutGroup_GetTotalMinSize_m1191 (LayoutGroup_t260 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
 float LayoutGroup_GetTotalPreferredSize_m1192 (LayoutGroup_t260 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
 float LayoutGroup_GetTotalFlexibleSize_m1193 (LayoutGroup_t260 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
 float LayoutGroup_GetStartOffset_m1194 (LayoutGroup_t260 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
 void LayoutGroup_SetLayoutInputForAxis_m1195 (LayoutGroup_t260 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
 void LayoutGroup_SetChildAlongAxis_m1196 (LayoutGroup_t260 * __this, RectTransform_t155 * ___rect, int32_t ___axis, float ___pos, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
 bool LayoutGroup_get_isRootLayoutGroup_m1197 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
 void LayoutGroup_OnRectTransformDimensionsChange_m1198 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
 void LayoutGroup_OnTransformChildrenChanged_m1199 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
 void LayoutGroup_SetDirty_m1200 (LayoutGroup_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
