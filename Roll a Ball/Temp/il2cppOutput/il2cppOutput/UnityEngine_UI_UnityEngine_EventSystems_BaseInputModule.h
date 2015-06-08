#pragma once
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t53;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t60;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t50;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t48;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t47  : public UIBehaviour_t51
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t53 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t60 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t50 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t48 * ___m_BaseEventData_5;
};
