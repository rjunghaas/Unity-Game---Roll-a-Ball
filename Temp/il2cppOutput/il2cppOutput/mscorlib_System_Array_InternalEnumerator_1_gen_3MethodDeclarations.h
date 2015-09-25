#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Char>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10273_gshared (InternalEnumerator_1_t1700 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10273(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1700 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10273_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Char>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10274_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10274(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10274_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Char>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10275_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10275(__this, method) (( void (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10275_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Char>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10276_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10276(__this, method) (( bool (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10276_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Char>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m10277_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10277(__this, method) (( uint16_t (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10277_gshared)(__this, method)
