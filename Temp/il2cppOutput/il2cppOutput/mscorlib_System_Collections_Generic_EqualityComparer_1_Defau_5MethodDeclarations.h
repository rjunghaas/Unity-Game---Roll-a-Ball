#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t1988;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14185_gshared (DefaultComparer_t1988 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14185(__this, method) (( void (*) (DefaultComparer_t1988 *, const MethodInfo*))DefaultComparer__ctor_m14185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14186_gshared (DefaultComparer_t1988 * __this, Vector2_t55  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14186(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1988 *, Vector2_t55 , const MethodInfo*))DefaultComparer_GetHashCode_m14186_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14187_gshared (DefaultComparer_t1988 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14187(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1988 *, Vector2_t55 , Vector2_t55 , const MethodInfo*))DefaultComparer_Equals_m14187_gshared)(__this, ___x, ___y, method)
