#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_95.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16120_gshared (InternalEnumerator_1_t2196 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16120(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2196 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16120_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16121_gshared (InternalEnumerator_1_t2196 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16121(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2196 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16121_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16122_gshared (InternalEnumerator_1_t2196 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16122(__this, method) (( void (*) (InternalEnumerator_1_t2196 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16122_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16123_gshared (InternalEnumerator_1_t2196 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16123(__this, method) (( bool (*) (InternalEnumerator_1_t2196 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16123_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t986  InternalEnumerator_1_get_Current_m16124_gshared (InternalEnumerator_1_t2196 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16124(__this, method) (( Decimal_t986  (*) (InternalEnumerator_1_t2196 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16124_gshared)(__this, method)
