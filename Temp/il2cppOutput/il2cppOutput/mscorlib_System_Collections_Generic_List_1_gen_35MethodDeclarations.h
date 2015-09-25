#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t286;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t347;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1945;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2221;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1689;
// System.Object[]
struct ObjectU5BU5D_t289;
// System.Predicate`1<System.Object>
struct Predicate_1_t1695;
// System.Comparison`1<System.Object>
struct Comparison_1_t1701;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10064_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1__ctor_m10064(__this, method) (( void (*) (List_1_t286 *, const MethodInfo*))List_1__ctor_m10064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10066_gshared (List_1_t286 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10066(__this, ___collection, method) (( void (*) (List_1_t286 *, Object_t*, const MethodInfo*))List_1__ctor_m10066_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10068_gshared (List_1_t286 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10068(__this, ___capacity, method) (( void (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1__ctor_m10068_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10070_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10070(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10070_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10072_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10072(__this, method) (( Object_t* (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10072_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10074_gshared (List_1_t286 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10074(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t286 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10074_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10076_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10076(__this, method) (( Object_t * (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10076_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10078_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10078(__this, ___item, method) (( int32_t (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10078_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10080_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10080(__this, ___item, method) (( bool (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10080_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10082_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10082(__this, ___item, method) (( int32_t (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10082_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10084_gshared (List_1_t286 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10084(__this, ___index, ___item, method) (( void (*) (List_1_t286 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10084_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10086_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10086(__this, ___item, method) (( void (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10086_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10088_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10088(__this, method) (( bool (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10090_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10090(__this, method) (( bool (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10090_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10092_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10092(__this, method) (( Object_t * (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10094_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10094(__this, method) (( bool (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10094_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10096(__this, method) (( bool (*) (List_1_t286 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10098_gshared (List_1_t286 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10098(__this, ___index, method) (( Object_t * (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10100_gshared (List_1_t286 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10100(__this, ___index, ___value, method) (( void (*) (List_1_t286 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10100_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10102_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10102(__this, ___item, method) (( void (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_Add_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10104_gshared (List_1_t286 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10104(__this, ___newCount, method) (( void (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10104_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10106_gshared (List_1_t286 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10106(__this, ___collection, method) (( void (*) (List_1_t286 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10106_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10108_gshared (List_1_t286 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10108(__this, ___enumerable, method) (( void (*) (List_1_t286 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10108_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10110_gshared (List_1_t286 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10110(__this, ___collection, method) (( void (*) (List_1_t286 *, Object_t*, const MethodInfo*))List_1_AddRange_m10110_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1689 * List_1_AsReadOnly_m10112_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10112(__this, method) (( ReadOnlyCollection_1_t1689 * (*) (List_1_t286 *, const MethodInfo*))List_1_AsReadOnly_m10112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10114_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_Clear_m10114(__this, method) (( void (*) (List_1_t286 *, const MethodInfo*))List_1_Clear_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10116_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10116(__this, ___item, method) (( bool (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10118_gshared (List_1_t286 * __this, ObjectU5BU5D_t289* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10118(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t286 *, ObjectU5BU5D_t289*, int32_t, const MethodInfo*))List_1_CopyTo_m10118_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10120_gshared (List_1_t286 * __this, Predicate_1_t1695 * ___match, const MethodInfo* method);
#define List_1_Find_m10120(__this, ___match, method) (( Object_t * (*) (List_1_t286 *, Predicate_1_t1695 *, const MethodInfo*))List_1_Find_m10120_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10122_gshared (Object_t * __this /* static, unused */, Predicate_1_t1695 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10122(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1695 *, const MethodInfo*))List_1_CheckMatch_m10122_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10124_gshared (List_1_t286 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1695 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10124(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t286 *, int32_t, int32_t, Predicate_1_t1695 *, const MethodInfo*))List_1_GetIndex_m10124_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1688  List_1_GetEnumerator_m10126_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10126(__this, method) (( Enumerator_t1688  (*) (List_1_t286 *, const MethodInfo*))List_1_GetEnumerator_m10126_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10128_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10128(__this, ___item, method) (( int32_t (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10128_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10130_gshared (List_1_t286 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10130(__this, ___start, ___delta, method) (( void (*) (List_1_t286 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10130_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10132_gshared (List_1_t286 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10132(__this, ___index, method) (( void (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10132_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10134_gshared (List_1_t286 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10134(__this, ___index, ___item, method) (( void (*) (List_1_t286 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10134_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10136_gshared (List_1_t286 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10136(__this, ___collection, method) (( void (*) (List_1_t286 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10136_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10138_gshared (List_1_t286 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10138(__this, ___item, method) (( bool (*) (List_1_t286 *, Object_t *, const MethodInfo*))List_1_Remove_m10138_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10140_gshared (List_1_t286 * __this, Predicate_1_t1695 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10140(__this, ___match, method) (( int32_t (*) (List_1_t286 *, Predicate_1_t1695 *, const MethodInfo*))List_1_RemoveAll_m10140_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10142_gshared (List_1_t286 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10142(__this, ___index, method) (( void (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10142_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10144_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_Reverse_m10144(__this, method) (( void (*) (List_1_t286 *, const MethodInfo*))List_1_Reverse_m10144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10146_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_Sort_m10146(__this, method) (( void (*) (List_1_t286 *, const MethodInfo*))List_1_Sort_m10146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10148_gshared (List_1_t286 * __this, Comparison_1_t1701 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10148(__this, ___comparison, method) (( void (*) (List_1_t286 *, Comparison_1_t1701 *, const MethodInfo*))List_1_Sort_m10148_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t289* List_1_ToArray_m10150_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_ToArray_m10150(__this, method) (( ObjectU5BU5D_t289* (*) (List_1_t286 *, const MethodInfo*))List_1_ToArray_m10150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10152_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10152(__this, method) (( void (*) (List_1_t286 *, const MethodInfo*))List_1_TrimExcess_m10152_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10154_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10154(__this, method) (( int32_t (*) (List_1_t286 *, const MethodInfo*))List_1_get_Capacity_m10154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10156_gshared (List_1_t286 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10156(__this, ___value, method) (( void (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10156_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10158_gshared (List_1_t286 * __this, const MethodInfo* method);
#define List_1_get_Count_m10158(__this, method) (( int32_t (*) (List_1_t286 *, const MethodInfo*))List_1_get_Count_m10158_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10160_gshared (List_1_t286 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10160(__this, ___index, method) (( Object_t * (*) (List_1_t286 *, int32_t, const MethodInfo*))List_1_get_Item_m10160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10162_gshared (List_1_t286 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10162(__this, ___index, ___value, method) (( void (*) (List_1_t286 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10162_gshared)(__this, ___index, ___value, method)
