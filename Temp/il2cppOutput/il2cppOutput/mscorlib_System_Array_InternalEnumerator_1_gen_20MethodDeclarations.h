#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14251_gshared (InternalEnumerator_1_t1993 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14251(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1993 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14251_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14252_gshared (InternalEnumerator_1_t1993 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14252(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1993 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14252_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14253_gshared (InternalEnumerator_1_t1993 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14253(__this, method) (( void (*) (InternalEnumerator_1_t1993 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14253_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector4>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14254_gshared (InternalEnumerator_1_t1993 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14254(__this, method) (( bool (*) (InternalEnumerator_1_t1993 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14254_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector4>::get_Current()
extern "C" Vector4_t242  InternalEnumerator_1_get_Current_m14255_gshared (InternalEnumerator_1_t1993 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14255(__this, method) (( Vector4_t242  (*) (InternalEnumerator_1_t1993 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14255_gshared)(__this, method)
