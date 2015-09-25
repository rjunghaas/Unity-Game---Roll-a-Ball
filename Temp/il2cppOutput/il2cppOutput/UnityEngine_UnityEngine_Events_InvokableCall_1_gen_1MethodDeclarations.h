#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1800;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t270;
// System.Object[]
struct ObjectU5BU5D_t289;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m11518_gshared (InvokableCall_1_t1800 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m11518(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1800 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m11518_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m11519_gshared (InvokableCall_1_t1800 * __this, UnityAction_1_t270 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m11519(__this, ___action, method) (( void (*) (InvokableCall_1_t1800 *, UnityAction_1_t270 *, const MethodInfo*))InvokableCall_1__ctor_m11519_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m11520_gshared (InvokableCall_1_t1800 * __this, ObjectU5BU5D_t289* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m11520(__this, ___args, method) (( void (*) (InvokableCall_1_t1800 *, ObjectU5BU5D_t289*, const MethodInfo*))InvokableCall_1_Invoke_m11520_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11521_gshared (InvokableCall_1_t1800 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m11521(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1800 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m11521_gshared)(__this, ___targetObj, ___method, method)
