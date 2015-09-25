#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t574;
// System.Object[]
struct ObjectU5BU5D_t289;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t582;
// System.Globalization.CultureInfo
struct CultureInfo_t576;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t581;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1634;

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m7550 (Binder_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m7551 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t574 * Binder_get_DefaultBinder_m7552 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m7553 (Object_t * __this /* static, unused */, Binder_t574 * ___binder, ObjectU5BU5D_t289* ___args, ParameterInfoU5BU5D_t582* ___pinfo, CultureInfo_t576 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m7554 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t581 * Binder_FindMostDerivedMatch_m7555 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1634* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
