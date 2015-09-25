#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t2007;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t364;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2232;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2006;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m14435_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1__ctor_m14435(__this, method) (( void (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1__ctor_m14435_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14436_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14436(__this, method) (( bool (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14436_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14437_gshared (Collection_1_t2007 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m14437(__this, ___array, ___index, method) (( void (*) (Collection_1_t2007 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m14437_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14438_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14438(__this, method) (( Object_t * (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m14438_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14439_gshared (Collection_1_t2007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m14439(__this, ___value, method) (( int32_t (*) (Collection_1_t2007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m14439_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14440_gshared (Collection_1_t2007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m14440(__this, ___value, method) (( bool (*) (Collection_1_t2007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m14440_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14441_gshared (Collection_1_t2007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m14441(__this, ___value, method) (( int32_t (*) (Collection_1_t2007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m14441_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14442_gshared (Collection_1_t2007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m14442(__this, ___index, ___value, method) (( void (*) (Collection_1_t2007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m14442_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14443_gshared (Collection_1_t2007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m14443(__this, ___value, method) (( void (*) (Collection_1_t2007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m14443_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14444_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14444(__this, method) (( bool (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m14444_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14445_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14445(__this, method) (( Object_t * (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m14445_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14446_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14446(__this, method) (( bool (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m14446_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14447_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14447(__this, method) (( bool (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m14447_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14448_gshared (Collection_1_t2007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m14448(__this, ___index, method) (( Object_t * (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m14448_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14449_gshared (Collection_1_t2007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m14449(__this, ___index, ___value, method) (( void (*) (Collection_1_t2007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m14449_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m14450_gshared (Collection_1_t2007 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m14450(__this, ___item, method) (( void (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_Add_m14450_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m14451_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_Clear_m14451(__this, method) (( void (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_Clear_m14451_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14452_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m14452(__this, method) (( void (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_ClearItems_m14452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m14453_gshared (Collection_1_t2007 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m14453(__this, ___item, method) (( bool (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_Contains_m14453_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14454_gshared (Collection_1_t2007 * __this, Int32U5BU5D_t364* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m14454(__this, ___array, ___index, method) (( void (*) (Collection_1_t2007 *, Int32U5BU5D_t364*, int32_t, const MethodInfo*))Collection_1_CopyTo_m14454_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14455_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m14455(__this, method) (( Object_t* (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_GetEnumerator_m14455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14456_gshared (Collection_1_t2007 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m14456(__this, ___item, method) (( int32_t (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m14456_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14457_gshared (Collection_1_t2007 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m14457(__this, ___index, ___item, method) (( void (*) (Collection_1_t2007 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m14457_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14458_gshared (Collection_1_t2007 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m14458(__this, ___index, ___item, method) (( void (*) (Collection_1_t2007 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m14458_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m14459_gshared (Collection_1_t2007 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m14459(__this, ___item, method) (( bool (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_Remove_m14459_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14460_gshared (Collection_1_t2007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m14460(__this, ___index, method) (( void (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m14460_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14461_gshared (Collection_1_t2007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m14461(__this, ___index, method) (( void (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m14461_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14462_gshared (Collection_1_t2007 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m14462(__this, method) (( int32_t (*) (Collection_1_t2007 *, const MethodInfo*))Collection_1_get_Count_m14462_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m14463_gshared (Collection_1_t2007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m14463(__this, ___index, method) (( int32_t (*) (Collection_1_t2007 *, int32_t, const MethodInfo*))Collection_1_get_Item_m14463_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14464_gshared (Collection_1_t2007 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m14464(__this, ___index, ___value, method) (( void (*) (Collection_1_t2007 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m14464_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14465_gshared (Collection_1_t2007 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m14465(__this, ___index, ___item, method) (( void (*) (Collection_1_t2007 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m14465_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m14466_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m14466(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m14466_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m14467_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m14467(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m14467_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m14468_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m14468(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m14468_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m14469_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m14469(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m14469_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m14470_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m14470(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m14470_gshared)(__this /* static, unused */, ___list, method)
