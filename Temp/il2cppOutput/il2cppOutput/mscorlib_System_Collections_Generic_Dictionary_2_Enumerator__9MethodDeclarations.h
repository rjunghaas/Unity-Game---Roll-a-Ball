#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2126;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15718_gshared (Enumerator_t2133 * __this, Dictionary_2_t2126 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15718(__this, ___dictionary, method) (( void (*) (Enumerator_t2133 *, Dictionary_2_t2126 *, const MethodInfo*))Enumerator__ctor_m15718_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15719_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15719(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15719_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t962  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15720_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15720(__this, method) (( DictionaryEntry_t962  (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15720_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15721_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15721(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15721_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15722_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15722(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15722_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15723_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15723(__this, method) (( bool (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_MoveNext_m15723_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2128  Enumerator_get_Current_m15724_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15724(__this, method) (( KeyValuePair_2_t2128  (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_get_Current_m15724_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15725_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15725(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_get_CurrentKey_m15725_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m15726_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15726(__this, method) (( bool (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_get_CurrentValue_m15726_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m15727_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15727(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_VerifyState_m15727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15728_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15728(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_VerifyCurrent_m15728_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m15729_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15729(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_Dispose_m15729_gshared)(__this, method)
