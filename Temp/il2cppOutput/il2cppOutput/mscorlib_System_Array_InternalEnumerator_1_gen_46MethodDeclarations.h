#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"

// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15552_gshared (InternalEnumerator_1_t2116 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15552(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2116 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15552_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15553_gshared (InternalEnumerator_1_t2116 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15553(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2116 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15553_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15554_gshared (InternalEnumerator_1_t2116 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15554(__this, method) (( void (*) (InternalEnumerator_1_t2116 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15554_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15555_gshared (InternalEnumerator_1_t2116 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15555(__this, method) (( bool (*) (InternalEnumerator_1_t2116 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15555_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m15556_gshared (InternalEnumerator_1_t2116 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15556(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2116 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15556_gshared)(__this, method)
