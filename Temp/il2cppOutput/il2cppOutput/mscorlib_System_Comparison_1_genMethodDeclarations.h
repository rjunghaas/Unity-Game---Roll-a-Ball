#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t22;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1405_gshared (Comparison_1_t22 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1405(__this, ___object, ___method, method) (( void (*) (Comparison_1_t22 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1405_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m10326_gshared (Comparison_1_t22 * __this, RaycastResult_t53  ___x, RaycastResult_t53  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m10326(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t22 *, RaycastResult_t53 , RaycastResult_t53 , const MethodInfo*))Comparison_1_Invoke_m10326_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m10327_gshared (Comparison_1_t22 * __this, RaycastResult_t53  ___x, RaycastResult_t53  ___y, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m10327(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t22 *, RaycastResult_t53 , RaycastResult_t53 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10327_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m10328_gshared (Comparison_1_t22 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m10328(__this, ___result, method) (( int32_t (*) (Comparison_1_t22 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10328_gshared)(__this, ___result, method)
