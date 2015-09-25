#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16007_gshared (InternalEnumerator_1_t2173 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16007(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2173 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16007_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16008_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16008(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2173 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16008_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16009_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16009(__this, method) (( void (*) (InternalEnumerator_1_t2173 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16009_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16010_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16010(__this, method) (( bool (*) (InternalEnumerator_1_t2173 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16010_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t1098  InternalEnumerator_1_get_Current_m16011_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16011(__this, method) (( Slot_t1098  (*) (InternalEnumerator_1_t2173 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16011_gshared)(__this, method)
