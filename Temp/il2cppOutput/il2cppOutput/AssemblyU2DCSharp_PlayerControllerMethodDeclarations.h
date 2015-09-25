#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t5;
// UnityEngine.Collider
struct Collider_t11;

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m4 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C" void PlayerController_FixedUpdate_m5 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PlayerController_OnTriggerEnter_m6 (PlayerController_t5 * __this, Collider_t11 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SetCountText()
extern "C" void PlayerController_SetCountText_m7 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
