﻿#pragma once
// UnityEngine.Camera
struct Camera_t112;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t125;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t124  : public BaseRaycaster_t108
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t112 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t126  ___m_EventMask_4;
};
struct PhysicsRaycaster_t124_StaticFields{
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::kNoEventMaskSet
	int32_t ___kNoEventMaskSet_2;
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t125 * ___U3CU3Ef__am$cache2_5;
};
