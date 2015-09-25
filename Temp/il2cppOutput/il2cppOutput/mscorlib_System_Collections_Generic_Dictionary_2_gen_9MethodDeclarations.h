#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1854;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1805;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2237;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2238;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t961;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1858;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12086_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12086(__this, method) (( void (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2__ctor_m12086_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12088_gshared (Dictionary_2_t1854 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12088(__this, ___comparer, method) (( void (*) (Dictionary_2_t1854 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12088_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12090_gshared (Dictionary_2_t1854 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12090(__this, ___capacity, method) (( void (*) (Dictionary_2_t1854 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12090_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12092_gshared (Dictionary_2_t1854 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12092(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1854 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m12092_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12094_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12094(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12094_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12096_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12096(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12096_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12098_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12098(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12098_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12100_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12100(__this, ___key, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12102_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12102(__this, ___key, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12102_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12104_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12104(__this, method) (( bool (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12104_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12106_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12106(__this, method) (( Object_t * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12108_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12108(__this, method) (( bool (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12110_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1856  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12110(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1856 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12110_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12112_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1856  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12112(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1856 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12112_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12114_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2U5BU5D_t2237* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12114(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, KeyValuePair_2U5BU5D_t2237*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12114_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12116_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1856  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12116(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1856 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12116_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12118_gshared (Dictionary_2_t1854 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12118(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12118_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12120_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12120(__this, method) (( Object_t * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12120_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12122_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12122(__this, method) (( Object_t* (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12122_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12124_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12124(__this, method) (( Object_t * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12124_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12126_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12126(__this, method) (( int32_t (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_get_Count_m12126_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12128_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12128(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12128_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12130_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12130(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12130_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12132_gshared (Dictionary_2_t1854 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12132(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1854 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12132_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12134_gshared (Dictionary_2_t1854 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12134(__this, ___size, method) (( void (*) (Dictionary_2_t1854 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12134_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12136_gshared (Dictionary_2_t1854 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12136(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12136_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1856  Dictionary_2_make_pair_m12138_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12138(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1856  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12138_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12140_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12140(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12140_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12142_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2U5BU5D_t2237* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12142(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, KeyValuePair_2U5BU5D_t2237*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12142_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12144_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12144(__this, method) (( void (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_Resize_m12144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12146_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12146(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12146_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12148_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12148(__this, method) (( void (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_Clear_m12148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12150_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12150(__this, ___key, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12150_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12152_gshared (Dictionary_2_t1854 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12152(__this, ___value, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12152_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12154_gshared (Dictionary_2_t1854 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12154(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1854 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m12154_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12156_gshared (Dictionary_2_t1854 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12156(__this, ___sender, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12156_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12158_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12158(__this, ___key, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12158_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12160_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12160(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12160_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1858 * Dictionary_2_get_Values_m12162_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12162(__this, method) (( ValueCollection_t1858 * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_get_Values_m12162_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12164_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12164(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12164_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12166_gshared (Dictionary_2_t1854 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12166(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12166_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12168_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1856  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12168(__this, ___pair, method) (( bool (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1856 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12168_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1860  Dictionary_2_GetEnumerator_m12170_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12170(__this, method) (( Enumerator_t1860  (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12170_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m12172_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12172(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12172_gshared)(__this /* static, unused */, ___key, ___value, method)
