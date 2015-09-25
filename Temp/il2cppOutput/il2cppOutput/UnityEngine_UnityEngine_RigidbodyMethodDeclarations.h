﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"

// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m29 (Rigidbody_t7 * __this, Vector3_t4  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m2542 (Object_t * __this /* static, unused */, Rigidbody_t7 * ___self, Vector3_t4 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
