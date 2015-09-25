#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2136;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2126;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15742_gshared (ShimEnumerator_t2136 * __this, Dictionary_2_t2126 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15742(__this, ___host, method) (( void (*) (ShimEnumerator_t2136 *, Dictionary_2_t2126 *, const MethodInfo*))ShimEnumerator__ctor_m15742_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15743_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15743(__this, method) (( bool (*) (ShimEnumerator_t2136 *, const MethodInfo*))ShimEnumerator_MoveNext_m15743_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t962  ShimEnumerator_get_Entry_m15744_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15744(__this, method) (( DictionaryEntry_t962  (*) (ShimEnumerator_t2136 *, const MethodInfo*))ShimEnumerator_get_Entry_m15744_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15745_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15745(__this, method) (( Object_t * (*) (ShimEnumerator_t2136 *, const MethodInfo*))ShimEnumerator_get_Key_m15745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15746_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15746(__this, method) (( Object_t * (*) (ShimEnumerator_t2136 *, const MethodInfo*))ShimEnumerator_get_Value_m15746_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15747_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15747(__this, method) (( Object_t * (*) (ShimEnumerator_t2136 *, const MethodInfo*))ShimEnumerator_get_Current_m15747_gshared)(__this, method)
