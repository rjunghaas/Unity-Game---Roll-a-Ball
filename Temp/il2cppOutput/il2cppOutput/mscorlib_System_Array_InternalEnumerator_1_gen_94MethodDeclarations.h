#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_94.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16115_gshared (InternalEnumerator_1_t2195 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16115(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2195 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16115_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16116_gshared (InternalEnumerator_1_t2195 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16116(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2195 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16116_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16117_gshared (InternalEnumerator_1_t2195 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16117(__this, method) (( void (*) (InternalEnumerator_1_t2195 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16117_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16118_gshared (InternalEnumerator_1_t2195 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16118(__this, method) (( bool (*) (InternalEnumerator_1_t2195 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16118_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t505  InternalEnumerator_1_get_Current_m16119_gshared (InternalEnumerator_1_t2195 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16119(__this, method) (( DateTime_t505  (*) (InternalEnumerator_1_t2195 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16119_gshared)(__this, method)
