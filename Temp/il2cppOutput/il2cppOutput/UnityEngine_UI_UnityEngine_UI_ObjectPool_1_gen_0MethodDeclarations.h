#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1715;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1717;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m10430_gshared (ObjectPool_1_t1715 * __this, UnityAction_1_t1717 * ___actionOnGet, UnityAction_1_t1717 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m10430(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1715 *, UnityAction_1_t1717 *, UnityAction_1_t1717 *, const MethodInfo*))ObjectPool_1__ctor_m10430_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m10432_gshared (ObjectPool_1_t1715 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m10432(__this, method) (( int32_t (*) (ObjectPool_1_t1715 *, const MethodInfo*))ObjectPool_1_get_countAll_m10432_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m10434_gshared (ObjectPool_1_t1715 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m10434(__this, ___value, method) (( void (*) (ObjectPool_1_t1715 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10434_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m10436_gshared (ObjectPool_1_t1715 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m10436(__this, method) (( int32_t (*) (ObjectPool_1_t1715 *, const MethodInfo*))ObjectPool_1_get_countActive_m10436_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m10438_gshared (ObjectPool_1_t1715 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m10438(__this, method) (( int32_t (*) (ObjectPool_1_t1715 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10438_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m10440_gshared (ObjectPool_1_t1715 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m10440(__this, method) (( Object_t * (*) (ObjectPool_1_t1715 *, const MethodInfo*))ObjectPool_1_Get_m10440_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m10442_gshared (ObjectPool_1_t1715 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m10442(__this, ___element, method) (( void (*) (ObjectPool_1_t1715 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m10442_gshared)(__this, ___element, method)
