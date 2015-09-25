#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1691;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t289;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1945;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1690;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10204_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10204(__this, method) (( void (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1__ctor_m10204_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10205_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10205(__this, method) (( bool (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10205_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10206_gshared (Collection_1_t1691 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10206(__this, ___array, ___index, method) (( void (*) (Collection_1_t1691 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10206_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10207_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10207(__this, method) (( Object_t * (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10207_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10208_gshared (Collection_1_t1691 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10208(__this, ___value, method) (( int32_t (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10208_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10209_gshared (Collection_1_t1691 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10209(__this, ___value, method) (( bool (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10209_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10210_gshared (Collection_1_t1691 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10210(__this, ___value, method) (( int32_t (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10210_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10211_gshared (Collection_1_t1691 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10211(__this, ___index, ___value, method) (( void (*) (Collection_1_t1691 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10211_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10212_gshared (Collection_1_t1691 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10212(__this, ___value, method) (( void (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10212_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10213_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10213(__this, method) (( bool (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10213_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10214_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10214(__this, method) (( Object_t * (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10214_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10215_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10215(__this, method) (( bool (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10215_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10216_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10216(__this, method) (( bool (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10216_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10217_gshared (Collection_1_t1691 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10217(__this, ___index, method) (( Object_t * (*) (Collection_1_t1691 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10217_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10218_gshared (Collection_1_t1691 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10218(__this, ___index, ___value, method) (( void (*) (Collection_1_t1691 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10218_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10219_gshared (Collection_1_t1691 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10219(__this, ___item, method) (( void (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_Add_m10219_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10220_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10220(__this, method) (( void (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_Clear_m10220_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10221_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10221(__this, method) (( void (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_ClearItems_m10221_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10222_gshared (Collection_1_t1691 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10222(__this, ___item, method) (( bool (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10222_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10223_gshared (Collection_1_t1691 * __this, ObjectU5BU5D_t289* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10223(__this, ___array, ___index, method) (( void (*) (Collection_1_t1691 *, ObjectU5BU5D_t289*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10223_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10224_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10224(__this, method) (( Object_t* (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_GetEnumerator_m10224_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10225_gshared (Collection_1_t1691 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10225(__this, ___item, method) (( int32_t (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10225_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10226_gshared (Collection_1_t1691 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10226(__this, ___index, ___item, method) (( void (*) (Collection_1_t1691 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10226_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10227_gshared (Collection_1_t1691 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10227(__this, ___index, ___item, method) (( void (*) (Collection_1_t1691 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10227_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10228_gshared (Collection_1_t1691 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10228(__this, ___item, method) (( bool (*) (Collection_1_t1691 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10228_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10229_gshared (Collection_1_t1691 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10229(__this, ___index, method) (( void (*) (Collection_1_t1691 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10229_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10230_gshared (Collection_1_t1691 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10230(__this, ___index, method) (( void (*) (Collection_1_t1691 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10230_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10231_gshared (Collection_1_t1691 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10231(__this, method) (( int32_t (*) (Collection_1_t1691 *, const MethodInfo*))Collection_1_get_Count_m10231_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10232_gshared (Collection_1_t1691 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10232(__this, ___index, method) (( Object_t * (*) (Collection_1_t1691 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10232_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10233_gshared (Collection_1_t1691 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10233(__this, ___index, ___value, method) (( void (*) (Collection_1_t1691 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10233_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10234_gshared (Collection_1_t1691 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10234(__this, ___index, ___item, method) (( void (*) (Collection_1_t1691 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10234_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10235_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10235(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10235_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10236_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10236(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10236_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10237_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10237(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10237_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10238_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10238(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10238_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10239_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10239(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10239_gshared)(__this /* static, unused */, ___list, method)
