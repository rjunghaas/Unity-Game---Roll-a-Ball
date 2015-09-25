﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
#define List_1__ctor_m1925(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1__ctor_m10064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13129(__this, ___collection, method) (( void (*) (List_1_t194 *, Object_t*, const MethodInfo*))List_1__ctor_m10066_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m13130(__this, ___capacity, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1__ctor_m10068_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m13131(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10070_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13132(__this, method) (( Object_t* (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10072_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13133(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t194 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10074_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13134(__this, method) (( Object_t * (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10076_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13135(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10078_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13136(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10080_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13137(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10082_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13138(__this, ___index, ___item, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10084_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13139(__this, ___item, method) (( void (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10086_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13140(__this, method) (( bool (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13141(__this, method) (( bool (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10090_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13142(__this, method) (( Object_t * (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13143(__this, method) (( bool (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10094_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13144(__this, method) (( bool (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13145(__this, ___index, method) (( Object_t * (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13146(__this, ___index, ___value, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10100_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m13147(__this, ___item, method) (( void (*) (List_1_t194 *, Selectable_t89 *, const MethodInfo*))List_1_Add_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13148(__this, ___newCount, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10104_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13149(__this, ___collection, method) (( void (*) (List_1_t194 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10106_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13150(__this, ___enumerable, method) (( void (*) (List_1_t194 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10108_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13151(__this, ___collection, method) (( void (*) (List_1_t194 *, Object_t*, const MethodInfo*))List_1_AddRange_m10110_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m13152(__this, method) (( ReadOnlyCollection_1_t1922 * (*) (List_1_t194 *, const MethodInfo*))List_1_AsReadOnly_m10112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m13153(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1_Clear_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m13154(__this, ___item, method) (( bool (*) (List_1_t194 *, Selectable_t89 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13155(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t194 *, SelectableU5BU5D_t1921*, int32_t, const MethodInfo*))List_1_CopyTo_m10118_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m13156(__this, ___match, method) (( Selectable_t89 * (*) (List_1_t194 *, Predicate_1_t1924 *, const MethodInfo*))List_1_Find_m10120_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13157(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1924 *, const MethodInfo*))List_1_CheckMatch_m10122_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13158(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t194 *, int32_t, int32_t, Predicate_1_t1924 *, const MethodInfo*))List_1_GetIndex_m10124_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m13159(__this, method) (( Enumerator_t1925  (*) (List_1_t194 *, const MethodInfo*))List_1_GetEnumerator_m10126_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m13160(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Selectable_t89 *, const MethodInfo*))List_1_IndexOf_m10128_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13161(__this, ___start, ___delta, method) (( void (*) (List_1_t194 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10130_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13162(__this, ___index, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10132_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m13163(__this, ___index, ___item, method) (( void (*) (List_1_t194 *, int32_t, Selectable_t89 *, const MethodInfo*))List_1_Insert_m10134_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13164(__this, ___collection, method) (( void (*) (List_1_t194 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10136_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m13165(__this, ___item, method) (( bool (*) (List_1_t194 *, Selectable_t89 *, const MethodInfo*))List_1_Remove_m10138_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13166(__this, ___match, method) (( int32_t (*) (List_1_t194 *, Predicate_1_t1924 *, const MethodInfo*))List_1_RemoveAll_m10140_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13167(__this, ___index, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10142_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m13168(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1_Reverse_m10144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m13169(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1_Sort_m10146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13170(__this, ___comparison, method) (( void (*) (List_1_t194 *, Comparison_1_t1926 *, const MethodInfo*))List_1_Sort_m10148_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m13171(__this, method) (( SelectableU5BU5D_t1921* (*) (List_1_t194 *, const MethodInfo*))List_1_ToArray_m10150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m13172(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1_TrimExcess_m10152_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m13173(__this, method) (( int32_t (*) (List_1_t194 *, const MethodInfo*))List_1_get_Capacity_m10154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13174(__this, ___value, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10156_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m13175(__this, method) (( int32_t (*) (List_1_t194 *, const MethodInfo*))List_1_get_Count_m10158_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m13176(__this, ___index, method) (( Selectable_t89 * (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_get_Item_m10160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m13177(__this, ___index, ___value, method) (( void (*) (List_1_t194 *, int32_t, Selectable_t89 *, const MethodInfo*))List_1_set_Item_m10162_gshared)(__this, ___index, ___value, method)
