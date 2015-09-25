#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_83.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16052_gshared (InternalEnumerator_1_t2182 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16052(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2182 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16052_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16053_gshared (InternalEnumerator_1_t2182 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16053(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2182 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16053_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16054_gshared (InternalEnumerator_1_t2182 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16054(__this, method) (( void (*) (InternalEnumerator_1_t2182 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16054_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16055_gshared (InternalEnumerator_1_t2182 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16055(__this, method) (( bool (*) (InternalEnumerator_1_t2182 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16055_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1184  InternalEnumerator_1_get_Current_m16056_gshared (InternalEnumerator_1_t2182 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16056(__this, method) (( LabelFixup_t1184  (*) (InternalEnumerator_1_t2182 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16056_gshared)(__this, method)
