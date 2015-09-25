#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t1843;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t313;
// System.Object[]
struct ObjectU5BU5D_t289;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12082_gshared (InvokableCall_1_t1843 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12082(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1843 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12082_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12083_gshared (InvokableCall_1_t1843 * __this, UnityAction_1_t313 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12083(__this, ___action, method) (( void (*) (InvokableCall_1_t1843 *, UnityAction_1_t313 *, const MethodInfo*))InvokableCall_1__ctor_m12083_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12084_gshared (InvokableCall_1_t1843 * __this, ObjectU5BU5D_t289* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12084(__this, ___args, method) (( void (*) (InvokableCall_1_t1843 *, ObjectU5BU5D_t289*, const MethodInfo*))InvokableCall_1_Invoke_m12084_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12085_gshared (InvokableCall_1_t1843 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12085(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1843 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12085_gshared)(__this, ___targetObj, ___method, method)
