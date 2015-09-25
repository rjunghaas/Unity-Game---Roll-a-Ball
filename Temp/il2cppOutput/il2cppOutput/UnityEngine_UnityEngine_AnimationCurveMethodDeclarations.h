#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t461;
struct AnimationCurve_t461_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t553;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2590 (AnimationCurve_t461 * __this, KeyframeU5BU5D_t553* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2591 (AnimationCurve_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2592 (AnimationCurve_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2593 (AnimationCurve_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2594 (AnimationCurve_t461 * __this, KeyframeU5BU5D_t553* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t461_marshal(const AnimationCurve_t461& unmarshaled, AnimationCurve_t461_marshaled& marshaled);
extern "C" void AnimationCurve_t461_marshal_back(const AnimationCurve_t461_marshaled& marshaled, AnimationCurve_t461& unmarshaled);
extern "C" void AnimationCurve_t461_marshal_cleanup(AnimationCurve_t461_marshaled& marshaled);
