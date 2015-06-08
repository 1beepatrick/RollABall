#pragma once

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t142;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t146;
// UnityEngine.Transform
struct Transform_t25;

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
 void CanvasUpdateRegistry__ctor_m414 (CanvasUpdateRegistry_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
 void CanvasUpdateRegistry__cctor_m415 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
 CanvasUpdateRegistry_t142 * CanvasUpdateRegistry_get_instance_m416 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
 bool CanvasUpdateRegistry_ObjectValidForUpdate_m417 (CanvasUpdateRegistry_t142 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
 void CanvasUpdateRegistry_PerformUpdate_m418 (CanvasUpdateRegistry_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
 int32_t CanvasUpdateRegistry_ParentCount_m419 (Object_t * __this/* static, unused */, Transform_t25 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
 int32_t CanvasUpdateRegistry_SortLayoutList_m420 (Object_t * __this/* static, unused */, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m421 (Object_t * __this/* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m422 (CanvasUpdateRegistry_t142 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m423 (Object_t * __this/* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m424 (CanvasUpdateRegistry_t142 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m425 (Object_t * __this/* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m426 (CanvasUpdateRegistry_t142 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m427 (CanvasUpdateRegistry_t142 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
 bool CanvasUpdateRegistry_IsRebuildingLayout_m428 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
 bool CanvasUpdateRegistry_IsRebuildingGraphics_m429 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__2(UnityEngine.UI.ICanvasElement)
 bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__2_m430 (Object_t * __this/* static, unused */, Object_t * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__3(UnityEngine.UI.ICanvasElement)
 bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__3_m431 (Object_t * __this/* static, unused */, Object_t * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
