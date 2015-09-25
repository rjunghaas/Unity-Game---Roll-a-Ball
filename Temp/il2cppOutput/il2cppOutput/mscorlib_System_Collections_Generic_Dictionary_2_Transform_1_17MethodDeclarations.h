#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t2135;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15738_gshared (Transform_1_t2135 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15738(__this, ___object, ___method, method) (( void (*) (Transform_1_t2135 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15738_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2128  Transform_1_Invoke_m15739_gshared (Transform_1_t2135 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15739(__this, ___key, ___value, method) (( KeyValuePair_2_t2128  (*) (Transform_1_t2135 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m15739_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15740_gshared (Transform_1_t2135 * __this, Object_t * ___key, bool ___value, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15740(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2135 *, Object_t *, bool, AsyncCallback_t152 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15740_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2128  Transform_1_EndInvoke_m15741_gshared (Transform_1_t2135 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15741(__this, ___result, method) (( KeyValuePair_2_t2128  (*) (Transform_1_t2135 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15741_gshared)(__this, ___result, method)
