#pragma once

// UnityEngine.Touch
struct Touch_t119;
struct Touch_t119_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m1445 (Touch_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t109  Touch_get_position_m1447 (Touch_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m1446 (Touch_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t119_marshal(const Touch_t119& unmarshaled, Touch_t119_marshaled& marshaled);
void Touch_t119_marshal_back(const Touch_t119_marshaled& marshaled, Touch_t119& unmarshaled);
void Touch_t119_marshal_cleanup(Touch_t119_marshaled& marshaled);
