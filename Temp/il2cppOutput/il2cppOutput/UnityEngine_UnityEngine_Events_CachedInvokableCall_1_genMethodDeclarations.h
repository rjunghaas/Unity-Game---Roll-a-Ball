#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t586;
// UnityEngine.Object
struct Object_t278;
struct Object_t278_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t289;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3007_gshared (CachedInvokableCall_1_t586 * __this, Object_t278 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3007(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t586 *, Object_t278 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3007_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m15351_gshared (CachedInvokableCall_1_t586 * __this, ObjectU5BU5D_t289* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m15351(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t586 *, ObjectU5BU5D_t289*, const MethodInfo*))CachedInvokableCall_1_Invoke_m15351_gshared)(__this, ___args, method)
