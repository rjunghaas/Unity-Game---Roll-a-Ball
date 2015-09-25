﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
#define Dictionary_2__ctor_m12832(__this, method) (( void (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2__ctor_m11553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12833(__this, ___comparer, method) (( void (*) (Dictionary_2_t163 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11554_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m1826(__this, ___capacity, method) (( void (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11555_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m12834(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t163 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m11556_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12835(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12836(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11558_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m12837(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11559_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m12838(__this, ___key, method) (( bool (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11560_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m12839(__this, ___key, method) (( void (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11561_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12840(__this, method) (( bool (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11562_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12841(__this, method) (( Object_t * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12842(__this, method) (( bool (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12843(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t163 *, KeyValuePair_2_t1901 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11565_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12844(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t163 *, KeyValuePair_2_t1901 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11566_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12845(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, KeyValuePair_2U5BU5D_t2247*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11567_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12846(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t163 *, KeyValuePair_2_t1901 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11568_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12847(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11569_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12848(__this, method) (( Object_t * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11570_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12849(__this, method) (( Object_t* (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11571_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12850(__this, method) (( Object_t * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11572_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m12851(__this, method) (( int32_t (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_get_Count_m11573_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m12852(__this, ___key, method) (( int32_t (*) (Dictionary_2_t163 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m11574_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m12853(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11575_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m12854(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t163 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11576_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m12855(__this, ___size, method) (( void (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11577_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m12856(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11578_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m12857(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1901  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11579_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m12858(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11580_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m12859(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, KeyValuePair_2U5BU5D_t2247*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11581_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m12860(__this, method) (( void (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_Resize_m11582_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m12861(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m11583_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m12862(__this, method) (( void (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_Clear_m11584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m12863(__this, ___key, method) (( bool (*) (Dictionary_2_t163 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m11585_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12864(__this, ___value, method) (( bool (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11586_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12865(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t163 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m11587_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12866(__this, ___sender, method) (( void (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11588_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m12867(__this, ___key, method) (( bool (*) (Dictionary_2_t163 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m11589_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m12868(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t163 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11590_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m12869(__this, method) (( ValueCollection_t1902 * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_get_Values_m11591_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12870(__this, ___key, method) (( String_t* (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11592_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12871(__this, ___value, method) (( int32_t (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11593_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12872(__this, ___pair, method) (( bool (*) (Dictionary_2_t163 *, KeyValuePair_2_t1901 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11594_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m12873(__this, method) (( Enumerator_t1903  (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11595_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12874(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11596_gshared)(__this /* static, unused */, ___key, ___value, method)
