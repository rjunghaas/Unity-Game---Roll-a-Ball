#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"

// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15694_gshared (InternalEnumerator_1_t2130 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15694(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2130 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15694_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15695_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15695(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15695_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15696_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15696(__this, method) (( void (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15696_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15697_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15697(__this, method) (( bool (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15697_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
extern "C" bool InternalEnumerator_1_get_Current_m15698_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15698(__this, method) (( bool (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15698_gshared)(__this, method)
