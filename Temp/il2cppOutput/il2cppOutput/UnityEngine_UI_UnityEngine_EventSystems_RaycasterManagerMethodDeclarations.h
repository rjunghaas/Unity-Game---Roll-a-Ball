﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t54;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t52;

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
extern "C" void RaycasterManager__cctor_m128 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_AddRaycaster_m129 (Object_t * __this /* static, unused */, BaseRaycaster_t54 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
extern "C" List_1_t52 * RaycasterManager_GetRaycasters_m130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_RemoveRaycasters_m131 (Object_t * __this /* static, unused */, BaseRaycaster_t54 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
