﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1775;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1774;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2229;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t961;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1781;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11191_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11191(__this, method) (( void (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2__ctor_m11191_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11193_gshared (Dictionary_2_t1775 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11193(__this, ___comparer, method) (( void (*) (Dictionary_2_t1775 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11193_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11195_gshared (Dictionary_2_t1775 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11195(__this, ___capacity, method) (( void (*) (Dictionary_2_t1775 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11195_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11197_gshared (Dictionary_2_t1775 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11197(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1775 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m11197_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11199_gshared (Dictionary_2_t1775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11199(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11199_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11201_gshared (Dictionary_2_t1775 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11201(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1775 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11201_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11203_gshared (Dictionary_2_t1775 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11203(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1775 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11203_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11205_gshared (Dictionary_2_t1775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11205(__this, ___key, method) (( bool (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11205_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11207_gshared (Dictionary_2_t1775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11207(__this, ___key, method) (( void (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11207_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11209_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11209(__this, method) (( bool (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11209_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11211_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11211(__this, method) (( Object_t * (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11213_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11213(__this, method) (( bool (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11213_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11215_gshared (Dictionary_2_t1775 * __this, KeyValuePair_2_t1777  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11215(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1775 *, KeyValuePair_2_t1777 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11215_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11217_gshared (Dictionary_2_t1775 * __this, KeyValuePair_2_t1777  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11217(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1775 *, KeyValuePair_2_t1777 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11217_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11219_gshared (Dictionary_2_t1775 * __this, KeyValuePair_2U5BU5D_t2228* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11219(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1775 *, KeyValuePair_2U5BU5D_t2228*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11219_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11221_gshared (Dictionary_2_t1775 * __this, KeyValuePair_2_t1777  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11221(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1775 *, KeyValuePair_2_t1777 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11221_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11223_gshared (Dictionary_2_t1775 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11223(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1775 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11223_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11225_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11225(__this, method) (( Object_t * (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11225_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11227_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11227(__this, method) (( Object_t* (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11227_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11229_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11229(__this, method) (( Object_t * (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11229_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11231_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11231(__this, method) (( int32_t (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_get_Count_m11231_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11233_gshared (Dictionary_2_t1775 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11233(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1775 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11233_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11235_gshared (Dictionary_2_t1775 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11235(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1775 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11235_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11237_gshared (Dictionary_2_t1775 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11237(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1775 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11237_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11239_gshared (Dictionary_2_t1775 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11239(__this, ___size, method) (( void (*) (Dictionary_2_t1775 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11239_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11241_gshared (Dictionary_2_t1775 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11241(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1775 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11241_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1777  Dictionary_2_make_pair_m11243_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11243(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1777  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11243_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11245_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11245(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11245_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11247_gshared (Dictionary_2_t1775 * __this, KeyValuePair_2U5BU5D_t2228* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11247(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1775 *, KeyValuePair_2U5BU5D_t2228*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11247_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11249_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11249(__this, method) (( void (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_Resize_m11249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11251_gshared (Dictionary_2_t1775 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11251(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1775 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11251_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11253_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11253(__this, method) (( void (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_Clear_m11253_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11255_gshared (Dictionary_2_t1775 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11255(__this, ___key, method) (( bool (*) (Dictionary_2_t1775 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11255_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11257_gshared (Dictionary_2_t1775 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11257(__this, ___value, method) (( bool (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11257_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11259_gshared (Dictionary_2_t1775 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11259(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1775 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m11259_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11261_gshared (Dictionary_2_t1775 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11261(__this, ___sender, method) (( void (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11261_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11263_gshared (Dictionary_2_t1775 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11263(__this, ___key, method) (( bool (*) (Dictionary_2_t1775 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11263_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11265_gshared (Dictionary_2_t1775 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11265(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1775 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11265_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1781 * Dictionary_2_get_Values_m11266_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11266(__this, method) (( ValueCollection_t1781 * (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_get_Values_m11266_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11268_gshared (Dictionary_2_t1775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11268(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11268_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11270_gshared (Dictionary_2_t1775 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11270(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1775 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11270_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11272_gshared (Dictionary_2_t1775 * __this, KeyValuePair_2_t1777  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11272(__this, ___pair, method) (( bool (*) (Dictionary_2_t1775 *, KeyValuePair_2_t1777 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11272_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1783  Dictionary_2_GetEnumerator_m11273_gshared (Dictionary_2_t1775 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11273(__this, method) (( Enumerator_t1783  (*) (Dictionary_2_t1775 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11273_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m11275_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11275(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11275_gshared)(__this /* static, unused */, ___key, ___value, method)
