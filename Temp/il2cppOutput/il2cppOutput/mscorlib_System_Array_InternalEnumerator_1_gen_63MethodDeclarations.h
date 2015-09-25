#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"

// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15922_gshared (InternalEnumerator_1_t2155 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15922(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2155 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15922_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15923_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15923(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15923_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15924_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15924(__this, method) (( void (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15924_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15925_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15925(__this, method) (( bool (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15925_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
extern "C" int16_t InternalEnumerator_1_get_Current_m15926_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15926(__this, method) (( int16_t (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15926_gshared)(__this, method)
