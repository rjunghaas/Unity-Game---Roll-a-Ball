#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1863;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1854;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12271_gshared (ShimEnumerator_t1863 * __this, Dictionary_2_t1854 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12271(__this, ___host, method) (( void (*) (ShimEnumerator_t1863 *, Dictionary_2_t1854 *, const MethodInfo*))ShimEnumerator__ctor_m12271_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12272_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12272(__this, method) (( bool (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_MoveNext_m12272_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t962  ShimEnumerator_get_Entry_m12273_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12273(__this, method) (( DictionaryEntry_t962  (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Entry_m12273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12274_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12274(__this, method) (( Object_t * (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Key_m12274_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12275_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12275(__this, method) (( Object_t * (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Value_m12275_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12276_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12276(__this, method) (( Object_t * (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Current_m12276_gshared)(__this, method)
