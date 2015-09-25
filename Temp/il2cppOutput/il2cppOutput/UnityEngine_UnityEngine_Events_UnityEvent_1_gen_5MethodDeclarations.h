#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t187;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t1919;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t530;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m1901_gshared (UnityEvent_1_t187 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1901(__this, method) (( void (*) (UnityEvent_1_t187 *, const MethodInfo*))UnityEvent_1__ctor_m1901_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13116_gshared (UnityEvent_1_t187 * __this, UnityAction_1_t1919 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m13116(__this, ___call, method) (( void (*) (UnityEvent_1_t187 *, UnityAction_1_t1919 *, const MethodInfo*))UnityEvent_1_AddListener_m13116_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13117_gshared (UnityEvent_1_t187 * __this, UnityAction_1_t1919 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13117(__this, ___call, method) (( void (*) (UnityEvent_1_t187 *, UnityAction_1_t1919 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13117_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13118_gshared (UnityEvent_1_t187 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13118(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t187 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13118_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t530 * UnityEvent_1_GetDelegate_m13119_gshared (UnityEvent_1_t187 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13119(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t530 * (*) (UnityEvent_1_t187 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13119_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t530 * UnityEvent_1_GetDelegate_m13120_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1919 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13120(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t530 * (*) (Object_t * /* static, unused */, UnityAction_1_t1919 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13120_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1908_gshared (UnityEvent_1_t187 * __this, Vector2_t55  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1908(__this, ___arg0, method) (( void (*) (UnityEvent_1_t187 *, Vector2_t55 , const MethodInfo*))UnityEvent_1_Invoke_m1908_gshared)(__this, ___arg0, method)
