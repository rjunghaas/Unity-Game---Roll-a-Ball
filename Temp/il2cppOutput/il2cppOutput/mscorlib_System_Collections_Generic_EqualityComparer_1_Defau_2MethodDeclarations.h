#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1874;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12503_gshared (DefaultComparer_t1874 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12503(__this, method) (( void (*) (DefaultComparer_t1874 *, const MethodInfo*))DefaultComparer__ctor_m12503_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12504_gshared (DefaultComparer_t1874 * __this, UIVertex_t164  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12504(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1874 *, UIVertex_t164 , const MethodInfo*))DefaultComparer_GetHashCode_m12504_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12505_gshared (DefaultComparer_t1874 * __this, UIVertex_t164  ___x, UIVertex_t164  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12505(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1874 *, UIVertex_t164 , UIVertex_t164 , const MethodInfo*))DefaultComparer_Equals_m12505_gshared)(__this, ___x, ___y, method)
