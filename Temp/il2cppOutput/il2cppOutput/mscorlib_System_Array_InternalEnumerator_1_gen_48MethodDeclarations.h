#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15562_gshared (InternalEnumerator_1_t2118 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15562(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2118 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15562_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15563_gshared (InternalEnumerator_1_t2118 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15563(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2118 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15563_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15564_gshared (InternalEnumerator_1_t2118 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15564(__this, method) (( void (*) (InternalEnumerator_1_t2118 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15564_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15565_gshared (InternalEnumerator_1_t2118 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15565(__this, method) (( bool (*) (InternalEnumerator_1_t2118 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15565_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern "C" uint32_t InternalEnumerator_1_get_Current_m15566_gshared (InternalEnumerator_1_t2118 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15566(__this, method) (( uint32_t (*) (InternalEnumerator_1_t2118 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15566_gshared)(__this, method)
