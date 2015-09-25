﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_81.h"
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16042_gshared (InternalEnumerator_1_t2180 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16042(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2180 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16042_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16043_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16043(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16043_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16044_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16044(__this, method) (( void (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16044_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16045_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16045(__this, method) (( bool (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16045_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1183  InternalEnumerator_1_get_Current_m16046_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16046(__this, method) (( ILTokenInfo_t1183  (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16046_gshared)(__this, method)
