﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75.h"
// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16012_gshared (InternalEnumerator_1_t2174 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16012(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2174 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16012_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16013_gshared (InternalEnumerator_1_t2174 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16013(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2174 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16013_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16014_gshared (InternalEnumerator_1_t2174 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16014(__this, method) (( void (*) (InternalEnumerator_1_t2174 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16014_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16015_gshared (InternalEnumerator_1_t2174 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16015(__this, method) (( bool (*) (InternalEnumerator_1_t2174 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16015_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern "C" Slot_t1105  InternalEnumerator_1_get_Current_m16016_gshared (InternalEnumerator_1_t2174 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16016(__this, method) (( Slot_t1105  (*) (InternalEnumerator_1_t2174 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16016_gshared)(__this, method)
