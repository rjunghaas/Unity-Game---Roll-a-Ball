#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37.h"

// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14892_gshared (InternalEnumerator_1_t2061 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14892(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2061 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14892_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14893_gshared (InternalEnumerator_1_t2061 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14893(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2061 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14893_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14894_gshared (InternalEnumerator_1_t2061 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14894(__this, method) (( void (*) (InternalEnumerator_1_t2061 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14894_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14895_gshared (InternalEnumerator_1_t2061 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14895(__this, method) (( bool (*) (InternalEnumerator_1_t2061 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14895_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m14896_gshared (InternalEnumerator_1_t2061 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14896(__this, method) (( float (*) (InternalEnumerator_1_t2061 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14896_gshared)(__this, method)
