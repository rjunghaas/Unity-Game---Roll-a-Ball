#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1471 (Touch_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t55  Touch_get_position_m1473 (Touch_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m1472 (Touch_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t267_marshal(const Touch_t267& unmarshaled, Touch_t267_marshaled& marshaled);
extern "C" void Touch_t267_marshal_back(const Touch_t267_marshaled& marshaled, Touch_t267& unmarshaled);
extern "C" void Touch_t267_marshal_cleanup(Touch_t267_marshaled& marshaled);
