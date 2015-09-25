#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1823;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m11855_gshared (UnityAction_1_t1823 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m11855(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1823 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m11855_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m11856_gshared (UnityAction_1_t1823 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m11856(__this, ___arg0, method) (( void (*) (UnityAction_1_t1823 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m11856_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m11857_gshared (UnityAction_1_t1823 * __this, int32_t ___arg0, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m11857(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1823 *, int32_t, AsyncCallback_t152 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m11857_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m11858_gshared (UnityAction_1_t1823 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m11858(__this, ___result, method) (( void (*) (UnityAction_1_t1823 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m11858_gshared)(__this, ___result, method)
