#pragma once

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t116;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t114;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
 void MouseState__ctor_m295 (MouseState_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
 bool MouseState_AnyPressesThisFrame_m296 (MouseState_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
 bool MouseState_AnyReleasesThisFrame_m297 (MouseState_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
 ButtonState_t114 * MouseState_GetButtonState_m298 (MouseState_t116 * __this, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
 void MouseState_SetButtonState_m299 (MouseState_t116 * __this, int32_t ___button, int32_t ___stateForMouseButton, PointerEventData_t52 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
