#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t1982;
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

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14055_gshared (Comparison_1_t1982 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14055(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1982 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14055_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14056_gshared (Comparison_1_t1982 * __this, Color32_t275  ___x, Color32_t275  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14056(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1982 *, Color32_t275 , Color32_t275 , const MethodInfo*))Comparison_1_Invoke_m14056_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14057_gshared (Comparison_1_t1982 * __this, Color32_t275  ___x, Color32_t275  ___y, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14057(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1982 *, Color32_t275 , Color32_t275 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14057_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14058_gshared (Comparison_1_t1982 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14058(__this, ___result, method) (( int32_t (*) (Comparison_1_t1982 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14058_gshared)(__this, ___result, method)
