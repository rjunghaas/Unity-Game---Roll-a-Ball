#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_97.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16130_gshared (InternalEnumerator_1_t2198 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16130(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2198 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16130_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16131_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16131(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2198 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16131_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16132_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16132(__this, method) (( void (*) (InternalEnumerator_1_t2198 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16132_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16133_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16133(__this, method) (( bool (*) (InternalEnumerator_1_t2198 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16133_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m16134_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16134(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2198 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16134_gshared)(__this, method)
