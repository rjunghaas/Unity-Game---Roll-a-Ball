#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1802;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1945;
// System.Object[]
struct ObjectU5BU5D_t289;
// System.Predicate`1<System.Object>
struct Predicate_1_t1695;
// System.Comparison`1<System.Object>
struct Comparison_1_t1701;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11522_gshared (IndexedSet_1_t1802 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11522(__this, method) (( void (*) (IndexedSet_1_t1802 *, const MethodInfo*))IndexedSet_1__ctor_m11522_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11524_gshared (IndexedSet_1_t1802 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11524(__this, method) (( Object_t * (*) (IndexedSet_1_t1802 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11524_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11526_gshared (IndexedSet_1_t1802 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11526(__this, ___item, method) (( void (*) (IndexedSet_1_t1802 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11526_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11528_gshared (IndexedSet_1_t1802 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11528(__this, ___item, method) (( bool (*) (IndexedSet_1_t1802 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11528_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11530_gshared (IndexedSet_1_t1802 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11530(__this, method) (( Object_t* (*) (IndexedSet_1_t1802 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11530_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11532_gshared (IndexedSet_1_t1802 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11532(__this, method) (( void (*) (IndexedSet_1_t1802 *, const MethodInfo*))IndexedSet_1_Clear_m11532_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11534_gshared (IndexedSet_1_t1802 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11534(__this, ___item, method) (( bool (*) (IndexedSet_1_t1802 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11534_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11536_gshared (IndexedSet_1_t1802 * __this, ObjectU5BU5D_t289* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11536(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1802 *, ObjectU5BU5D_t289*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11536_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11538_gshared (IndexedSet_1_t1802 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11538(__this, method) (( int32_t (*) (IndexedSet_1_t1802 *, const MethodInfo*))IndexedSet_1_get_Count_m11538_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11540_gshared (IndexedSet_1_t1802 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11540(__this, method) (( bool (*) (IndexedSet_1_t1802 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11540_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11542_gshared (IndexedSet_1_t1802 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11542(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1802 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11542_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11544_gshared (IndexedSet_1_t1802 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11544(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1802 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11544_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11546_gshared (IndexedSet_1_t1802 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11546(__this, ___index, method) (( void (*) (IndexedSet_1_t1802 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11546_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11548_gshared (IndexedSet_1_t1802 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11548(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1802 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11548_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11550_gshared (IndexedSet_1_t1802 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11550(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1802 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11550_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11551_gshared (IndexedSet_1_t1802 * __this, Predicate_1_t1695 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11551(__this, ___match, method) (( void (*) (IndexedSet_1_t1802 *, Predicate_1_t1695 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11551_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11552_gshared (IndexedSet_1_t1802 * __this, Comparison_1_t1701 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11552(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1802 *, Comparison_1_t1701 *, const MethodInfo*))IndexedSet_1_Sort_m11552_gshared)(__this, ___sortLayoutFunction, method)
