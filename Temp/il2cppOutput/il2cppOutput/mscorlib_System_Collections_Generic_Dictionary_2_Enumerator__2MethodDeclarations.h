#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1854;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12247_gshared (Enumerator_t1860 * __this, Dictionary_2_t1854 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12247(__this, ___dictionary, method) (( void (*) (Enumerator_t1860 *, Dictionary_2_t1854 *, const MethodInfo*))Enumerator__ctor_m12247_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12248_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12248(__this, method) (( Object_t * (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12248_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t962  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12249_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12249(__this, method) (( DictionaryEntry_t962  (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12249_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12250_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12250(__this, method) (( Object_t * (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12250_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12251_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12251(__this, method) (( Object_t * (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12251_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12252_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12252(__this, method) (( bool (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_MoveNext_m12252_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1856  Enumerator_get_Current_m12253_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12253(__this, method) (( KeyValuePair_2_t1856  (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_get_Current_m12253_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12254_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12254(__this, method) (( Object_t * (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_get_CurrentKey_m12254_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12255_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12255(__this, method) (( Object_t * (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_get_CurrentValue_m12255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12256_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12256(__this, method) (( void (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_VerifyState_m12256_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12257_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12257(__this, method) (( void (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_VerifyCurrent_m12257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12258_gshared (Enumerator_t1860 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12258(__this, method) (( void (*) (Enumerator_t1860 *, const MethodInfo*))Enumerator_Dispose_m12258_gshared)(__this, method)
