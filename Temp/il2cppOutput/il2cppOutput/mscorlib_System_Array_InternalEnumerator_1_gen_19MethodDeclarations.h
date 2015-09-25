#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13960_gshared (InternalEnumerator_1_t1972 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13960(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1972 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13960_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13961_gshared (InternalEnumerator_1_t1972 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13961(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1972 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13961_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13962_gshared (InternalEnumerator_1_t1972 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13962(__this, method) (( void (*) (InternalEnumerator_1_t1972 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13962_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13963_gshared (InternalEnumerator_1_t1972 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13963(__this, method) (( bool (*) (InternalEnumerator_1_t1972 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13963_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
extern "C" Color32_t275  InternalEnumerator_1_get_Current_m13964_gshared (InternalEnumerator_1_t1972 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13964(__this, method) (( Color32_t275  (*) (InternalEnumerator_1_t1972 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13964_gshared)(__this, method)
