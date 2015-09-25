#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t75;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1543_gshared (Comparison_1_t75 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1543(__this, ___object, ___method, method) (( void (*) (Comparison_1_t75 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1543_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11493_gshared (Comparison_1_t75 * __this, RaycastHit_t268  ___x, RaycastHit_t268  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11493(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t75 *, RaycastHit_t268 , RaycastHit_t268 , const MethodInfo*))Comparison_1_Invoke_m11493_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11494_gshared (Comparison_1_t75 * __this, RaycastHit_t268  ___x, RaycastHit_t268  ___y, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11494(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t75 *, RaycastHit_t268 , RaycastHit_t268 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11494_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11495_gshared (Comparison_1_t75 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11495(__this, ___result, method) (( int32_t (*) (Comparison_1_t75 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11495_gshared)(__this, ___result, method)
