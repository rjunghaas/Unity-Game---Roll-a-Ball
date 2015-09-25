#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11488_gshared (InternalEnumerator_1_t1797 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11488(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1797 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11488_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11489_gshared (InternalEnumerator_1_t1797 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11489(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1797 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11489_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11490_gshared (InternalEnumerator_1_t1797 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11490(__this, method) (( void (*) (InternalEnumerator_1_t1797 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11490_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11491_gshared (InternalEnumerator_1_t1797 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11491(__this, method) (( bool (*) (InternalEnumerator_1_t1797 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11491_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t304  InternalEnumerator_1_get_Current_m11492_gshared (InternalEnumerator_1_t1797 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11492(__this, method) (( RaycastHit2D_t304  (*) (InternalEnumerator_1_t1797 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11492_gshared)(__this, method)
