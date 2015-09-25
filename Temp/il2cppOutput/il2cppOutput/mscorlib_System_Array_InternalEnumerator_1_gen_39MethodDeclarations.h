#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14902_gshared (InternalEnumerator_1_t2063 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14902(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2063 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14902_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14903_gshared (InternalEnumerator_1_t2063 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14903(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2063 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14903_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14904_gshared (InternalEnumerator_1_t2063 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14904(__this, method) (( void (*) (InternalEnumerator_1_t2063 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14904_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14905_gshared (InternalEnumerator_1_t2063 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14905(__this, method) (( bool (*) (InternalEnumerator_1_t2063 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14905_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::get_Current()
extern "C" CharacterInfo_t469  InternalEnumerator_1_get_Current_m14906_gshared (InternalEnumerator_1_t2063 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14906(__this, method) (( CharacterInfo_t469  (*) (InternalEnumerator_1_t2063 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14906_gshared)(__this, method)
