﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t107;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1823;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t530;

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m1611_gshared (UnityEvent_1_t107 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1611(__this, method) (( void (*) (UnityEvent_1_t107 *, const MethodInfo*))UnityEvent_1__ctor_m1611_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m11850_gshared (UnityEvent_1_t107 * __this, UnityAction_1_t1823 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m11850(__this, ___call, method) (( void (*) (UnityEvent_1_t107 *, UnityAction_1_t1823 *, const MethodInfo*))UnityEvent_1_AddListener_m11850_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m11851_gshared (UnityEvent_1_t107 * __this, UnityAction_1_t1823 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m11851(__this, ___call, method) (( void (*) (UnityEvent_1_t107 *, UnityAction_1_t1823 *, const MethodInfo*))UnityEvent_1_RemoveListener_m11851_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m11852_gshared (UnityEvent_1_t107 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m11852(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t107 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m11852_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t530 * UnityEvent_1_GetDelegate_m11853_gshared (UnityEvent_1_t107 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11853(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t530 * (*) (UnityEvent_1_t107 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m11853_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t530 * UnityEvent_1_GetDelegate_m11854_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1823 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11854(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t530 * (*) (Object_t * /* static, unused */, UnityAction_1_t1823 *, const MethodInfo*))UnityEvent_1_GetDelegate_m11854_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1616_gshared (UnityEvent_1_t107 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1616(__this, ___arg0, method) (( void (*) (UnityEvent_1_t107 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1616_gshared)(__this, ___arg0, method)
