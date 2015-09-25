#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"

// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15932_gshared (InternalEnumerator_1_t2157 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15932(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2157 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15932_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15933_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15933(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2157 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15933_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15934_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15934(__this, method) (( void (*) (InternalEnumerator_1_t2157 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15934_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15935_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15935(__this, method) (( bool (*) (InternalEnumerator_1_t2157 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15935_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m15936_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15936(__this, method) (( int64_t (*) (InternalEnumerator_1_t2157 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15936_gshared)(__this, method)
