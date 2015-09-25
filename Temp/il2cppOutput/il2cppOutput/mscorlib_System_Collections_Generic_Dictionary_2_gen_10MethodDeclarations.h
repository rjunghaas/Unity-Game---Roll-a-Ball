#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2126;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1805;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2277;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2278;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t961;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2131;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m15597_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15597(__this, method) (( void (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2__ctor_m15597_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15598_gshared (Dictionary_2_t2126 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15598(__this, ___comparer, method) (( void (*) (Dictionary_2_t2126 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15598_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15600_gshared (Dictionary_2_t2126 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15600(__this, ___capacity, method) (( void (*) (Dictionary_2_t2126 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15600_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15602_gshared (Dictionary_2_t2126 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15602(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2126 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m15602_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15604_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15604(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15606_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15606(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15606_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15608_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15608(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15608_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15610_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15610(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15610_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15612_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15612(__this, ___key, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15612_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15614_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15614(__this, method) (( bool (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15616_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15616(__this, method) (( Object_t * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15618_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15618(__this, method) (( bool (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15620_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15620(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15620_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15622_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15622(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15622_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15624_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2U5BU5D_t2277* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15624(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, KeyValuePair_2U5BU5D_t2277*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15624_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15626_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15626(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15626_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15628_gshared (Dictionary_2_t2126 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15628(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15628_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15630_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15630(__this, method) (( Object_t * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15630_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15632_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15632(__this, method) (( Object_t* (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15632_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15634_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15634(__this, method) (( Object_t * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15634_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15636_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15636(__this, method) (( int32_t (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_get_Count_m15636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m15638_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15638(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15638_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15640_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15640(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m15640_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15642_gshared (Dictionary_2_t2126 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15642(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2126 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15642_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15644_gshared (Dictionary_2_t2126 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15644(__this, ___size, method) (( void (*) (Dictionary_2_t2126 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15644_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15646_gshared (Dictionary_2_t2126 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15646_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2128  Dictionary_2_make_pair_m15648_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15648(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2128  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m15648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m15650_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15650(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m15650_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15652_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2U5BU5D_t2277* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15652(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, KeyValuePair_2U5BU5D_t2277*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15652_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m15654_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15654(__this, method) (( void (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_Resize_m15654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15656_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15656(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m15656_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m15658_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15658(__this, method) (( void (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_Clear_m15658_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15660_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15660(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15660_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15662_gshared (Dictionary_2_t2126 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15662(__this, ___value, method) (( bool (*) (Dictionary_2_t2126 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m15662_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15664_gshared (Dictionary_2_t2126 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15664(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2126 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m15664_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15666_gshared (Dictionary_2_t2126 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15666(__this, ___sender, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15666_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15668_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15668(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15668_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15670_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15670(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m15670_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2131 * Dictionary_2_get_Values_m15672_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15672(__this, method) (( ValueCollection_t2131 * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_get_Values_m15672_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15674_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15674(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15674_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m15676_gshared (Dictionary_2_t2126 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15676(__this, ___value, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15676_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15678_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15678(__this, ___pair, method) (( bool (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15678_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2133  Dictionary_2_GetEnumerator_m15680_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15680(__this, method) (( Enumerator_t2133  (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15680_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m15682_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15682(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15682_gshared)(__this /* static, unused */, ___key, ___value, method)
