#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2000;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14336_gshared (Predicate_1_t2000 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14336(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2000 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14336_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14337_gshared (Predicate_1_t2000 * __this, Vector4_t242  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14337(__this, ___obj, method) (( bool (*) (Predicate_1_t2000 *, Vector4_t242 , const MethodInfo*))Predicate_1_Invoke_m14337_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14338_gshared (Predicate_1_t2000 * __this, Vector4_t242  ___obj, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14338(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2000 *, Vector4_t242 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14338_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14339_gshared (Predicate_1_t2000 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14339(__this, ___result, method) (( bool (*) (Predicate_1_t2000 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14339_gshared)(__this, ___result, method)
