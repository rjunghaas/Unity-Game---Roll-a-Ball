#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t1979;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14045_gshared (Predicate_1_t1979 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14045(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1979 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14045_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14046_gshared (Predicate_1_t1979 * __this, Color32_t275  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14046(__this, ___obj, method) (( bool (*) (Predicate_1_t1979 *, Color32_t275 , const MethodInfo*))Predicate_1_Invoke_m14046_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14047_gshared (Predicate_1_t1979 * __this, Color32_t275  ___obj, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14047(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1979 *, Color32_t275 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14047_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14048_gshared (Predicate_1_t1979 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14048(__this, ___result, method) (( bool (*) (Predicate_1_t1979 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14048_gshared)(__this, ___result, method)
