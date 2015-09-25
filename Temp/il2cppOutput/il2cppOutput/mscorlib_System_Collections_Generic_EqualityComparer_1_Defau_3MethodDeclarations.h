#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t1967;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m13894_gshared (DefaultComparer_t1967 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13894(__this, method) (( void (*) (DefaultComparer_t1967 *, const MethodInfo*))DefaultComparer__ctor_m13894_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13895_gshared (DefaultComparer_t1967 * __this, Vector3_t4  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13895(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1967 *, Vector3_t4 , const MethodInfo*))DefaultComparer_GetHashCode_m13895_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13896_gshared (DefaultComparer_t1967 * __this, Vector3_t4  ___x, Vector3_t4  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13896(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1967 *, Vector3_t4 , Vector3_t4 , const MethodInfo*))DefaultComparer_Equals_m13896_gshared)(__this, ___x, ___y, method)
