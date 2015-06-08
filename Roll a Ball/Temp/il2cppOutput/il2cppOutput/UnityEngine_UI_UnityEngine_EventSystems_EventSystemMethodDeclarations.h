#pragma once

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t50;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t47;
// UnityEngine.GameObject
struct GameObject_t4;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t48;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t53;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
 void EventSystem__ctor_m107 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
 void EventSystem__cctor_m108 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
 EventSystem_t50 * EventSystem_get_current_m109 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
 void EventSystem_set_current_m110 (Object_t * __this/* static, unused */, EventSystem_t50 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
 bool EventSystem_get_sendNavigationEvents_m111 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
 void EventSystem_set_sendNavigationEvents_m112 (EventSystem_t50 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
 int32_t EventSystem_get_pixelDragThreshold_m113 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
 void EventSystem_set_pixelDragThreshold_m114 (EventSystem_t50 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
 BaseInputModule_t47 * EventSystem_get_currentInputModule_m115 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
 GameObject_t4 * EventSystem_get_firstSelectedGameObject_m116 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_set_firstSelectedGameObject_m117 (EventSystem_t50 * __this, GameObject_t4 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
 GameObject_t4 * EventSystem_get_currentSelectedGameObject_m118 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
 GameObject_t4 * EventSystem_get_lastSelectedGameObject_m119 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
 void EventSystem_UpdateModules_m120 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
 bool EventSystem_get_alreadySelecting_m121 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void EventSystem_SetSelectedGameObject_m122 (EventSystem_t50 * __this, GameObject_t4 * ___selected, BaseEventData_t48 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
 BaseEventData_t48 * EventSystem_get_baseEventDataCache_m123 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_SetSelectedGameObject_m124 (EventSystem_t50 * __this, GameObject_t4 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
 int32_t EventSystem_RaycastComparer_m125 (Object_t * __this/* static, unused */, RaycastResult_t54  ___lhs, RaycastResult_t54  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void EventSystem_RaycastAll_m126 (EventSystem_t50 * __this, PointerEventData_t52 * ___eventData, List_1_t53 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
 bool EventSystem_IsPointerOverGameObject_m127 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
 bool EventSystem_IsPointerOverGameObject_m128 (EventSystem_t50 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
 void EventSystem_OnEnable_m129 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
 void EventSystem_OnDisable_m130 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
 void EventSystem_TickModules_m131 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
 void EventSystem_Update_m132 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
 void EventSystem_ChangeEventModule_m133 (EventSystem_t50 * __this, BaseInputModule_t47 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
 String_t* EventSystem_ToString_m134 (EventSystem_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
