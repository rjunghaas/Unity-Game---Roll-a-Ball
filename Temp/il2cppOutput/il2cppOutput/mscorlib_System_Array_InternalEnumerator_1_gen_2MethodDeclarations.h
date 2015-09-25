﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10268_gshared (InternalEnumerator_1_t1699 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10268(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1699 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10268_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10269_gshared (InternalEnumerator_1_t1699 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10269(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1699 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10269_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10270_gshared (InternalEnumerator_1_t1699 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10270(__this, method) (( void (*) (InternalEnumerator_1_t1699 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10270_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10271_gshared (InternalEnumerator_1_t1699 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10271(__this, method) (( bool (*) (InternalEnumerator_1_t1699 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10271_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m10272_gshared (InternalEnumerator_1_t1699 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10272(__this, method) (( double (*) (InternalEnumerator_1_t1699 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10272_gshared)(__this, method)
