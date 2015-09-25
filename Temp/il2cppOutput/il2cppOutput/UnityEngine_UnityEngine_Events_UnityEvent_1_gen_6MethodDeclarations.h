#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t1757;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1717;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t530;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m10940_gshared (UnityEvent_1_t1757 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m10940(__this, method) (( void (*) (UnityEvent_1_t1757 *, const MethodInfo*))UnityEvent_1__ctor_m10940_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m10942_gshared (UnityEvent_1_t1757 * __this, UnityAction_1_t1717 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m10942(__this, ___call, method) (( void (*) (UnityEvent_1_t1757 *, UnityAction_1_t1717 *, const MethodInfo*))UnityEvent_1_AddListener_m10942_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m10944_gshared (UnityEvent_1_t1757 * __this, UnityAction_1_t1717 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m10944(__this, ___call, method) (( void (*) (UnityEvent_1_t1757 *, UnityAction_1_t1717 *, const MethodInfo*))UnityEvent_1_RemoveListener_m10944_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m10946_gshared (UnityEvent_1_t1757 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m10946(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1757 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m10946_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t530 * UnityEvent_1_GetDelegate_m10948_gshared (UnityEvent_1_t1757 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m10948(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t530 * (*) (UnityEvent_1_t1757 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m10948_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t530 * UnityEvent_1_GetDelegate_m10950_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1717 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m10950(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t530 * (*) (Object_t * /* static, unused */, UnityAction_1_t1717 *, const MethodInfo*))UnityEvent_1_GetDelegate_m10950_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m10951_gshared (UnityEvent_1_t1757 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m10951(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1757 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m10951_gshared)(__this, ___arg0, method)
