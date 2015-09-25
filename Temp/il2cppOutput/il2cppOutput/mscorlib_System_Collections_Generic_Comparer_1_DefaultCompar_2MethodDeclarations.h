#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t1970;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m13905_gshared (DefaultComparer_t1970 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13905(__this, method) (( void (*) (DefaultComparer_t1970 *, const MethodInfo*))DefaultComparer__ctor_m13905_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m13906_gshared (DefaultComparer_t1970 * __this, Vector3_t4  ___x, Vector3_t4  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m13906(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1970 *, Vector3_t4 , Vector3_t4 , const MethodInfo*))DefaultComparer_Compare_m13906_gshared)(__this, ___x, ___y, method)
