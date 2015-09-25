#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11276_gshared (InternalEnumerator_1_t1778 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11276(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1778 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11276_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11277_gshared (InternalEnumerator_1_t1778 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11277(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1778 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11277_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11278_gshared (InternalEnumerator_1_t1778 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11278(__this, method) (( void (*) (InternalEnumerator_1_t1778 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11278_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11279_gshared (InternalEnumerator_1_t1778 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11279(__this, method) (( bool (*) (InternalEnumerator_1_t1778 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11279_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1777  InternalEnumerator_1_get_Current_m11280_gshared (InternalEnumerator_1_t1778 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11280(__this, method) (( KeyValuePair_2_t1777  (*) (InternalEnumerator_1_t1778 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11280_gshared)(__this, method)
