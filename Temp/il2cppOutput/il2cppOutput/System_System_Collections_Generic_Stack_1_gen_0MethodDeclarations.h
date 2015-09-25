#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1716;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1945;
// System.Collections.IEnumerator
struct IEnumerator_t271;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m10443_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1__ctor_m10443(__this, method) (( void (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1__ctor_m10443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m10444_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m10444(__this, method) (( bool (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m10444_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m10445_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m10445(__this, method) (( Object_t * (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m10445_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m10446_gshared (Stack_1_t1716 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m10446(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1716 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m10446_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10447_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10447(__this, method) (( Object_t* (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10447_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m10448_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m10448(__this, method) (( Object_t * (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m10448_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m10449_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_Peek_m10449(__this, method) (( Object_t * (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_Peek_m10449_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m10450_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_Pop_m10450(__this, method) (( Object_t * (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_Pop_m10450_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m10451_gshared (Stack_1_t1716 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m10451(__this, ___t, method) (( void (*) (Stack_1_t1716 *, Object_t *, const MethodInfo*))Stack_1_Push_m10451_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m10452_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m10452(__this, method) (( int32_t (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_get_Count_m10452_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1718  Stack_1_GetEnumerator_m10453_gshared (Stack_1_t1716 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m10453(__this, method) (( Enumerator_t1718  (*) (Stack_1_t1716 *, const MethodInfo*))Stack_1_GetEnumerator_m10453_gshared)(__this, method)
