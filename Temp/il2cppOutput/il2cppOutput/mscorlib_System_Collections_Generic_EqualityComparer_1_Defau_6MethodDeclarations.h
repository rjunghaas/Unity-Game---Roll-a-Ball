#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t1999;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m14333_gshared (DefaultComparer_t1999 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14333(__this, method) (( void (*) (DefaultComparer_t1999 *, const MethodInfo*))DefaultComparer__ctor_m14333_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14334_gshared (DefaultComparer_t1999 * __this, Vector4_t242  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14334(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1999 *, Vector4_t242 , const MethodInfo*))DefaultComparer_GetHashCode_m14334_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14335_gshared (DefaultComparer_t1999 * __this, Vector4_t242  ___x, Vector4_t242  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14335(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1999 *, Vector4_t242 , Vector4_t242 , const MethodInfo*))DefaultComparer_Equals_m14335_gshared)(__this, ___x, ___y, method)
