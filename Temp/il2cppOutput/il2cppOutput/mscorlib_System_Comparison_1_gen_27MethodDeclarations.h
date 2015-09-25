#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t1992;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14198_gshared (Comparison_1_t1992 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14198(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1992 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14198_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14199_gshared (Comparison_1_t1992 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14199(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1992 *, Vector2_t55 , Vector2_t55 , const MethodInfo*))Comparison_1_Invoke_m14199_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14200_gshared (Comparison_1_t1992 * __this, Vector2_t55  ___x, Vector2_t55  ___y, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14200(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1992 *, Vector2_t55 , Vector2_t55 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14200_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14201_gshared (Comparison_1_t1992 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14201(__this, ___result, method) (( int32_t (*) (Comparison_1_t1992 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14201_gshared)(__this, ___result, method)
