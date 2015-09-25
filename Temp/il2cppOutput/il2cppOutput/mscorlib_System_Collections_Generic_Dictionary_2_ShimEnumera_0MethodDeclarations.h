#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1813;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1803;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11651_gshared (ShimEnumerator_t1813 * __this, Dictionary_2_t1803 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11651(__this, ___host, method) (( void (*) (ShimEnumerator_t1813 *, Dictionary_2_t1803 *, const MethodInfo*))ShimEnumerator__ctor_m11651_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11652_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11652(__this, method) (( bool (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_MoveNext_m11652_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t962  ShimEnumerator_get_Entry_m11653_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11653(__this, method) (( DictionaryEntry_t962  (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Entry_m11653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11654_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11654(__this, method) (( Object_t * (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Key_m11654_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11655_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11655(__this, method) (( Object_t * (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Value_m11655_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11656_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11656(__this, method) (( Object_t * (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Current_m11656_gshared)(__this, method)
