#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t88;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t85;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t59;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t21;
// System.Collections.IEnumerator
struct IEnumerator_t271;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m364 (Button_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t85 * Button_get_onClick_m365 (Button_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m366 (Button_t88 * __this, ButtonClickedEvent_t85 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m367 (Button_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m368 (Button_t88 * __this, PointerEventData_t59 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m369 (Button_t88 * __this, BaseEventData_t21 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m370 (Button_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
