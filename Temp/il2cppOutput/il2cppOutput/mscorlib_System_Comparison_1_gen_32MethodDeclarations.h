#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2072;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15046_gshared (Comparison_1_t2072 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15046(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2072 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15046_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15047_gshared (Comparison_1_t2072 * __this, UICharInfo_t334  ___x, UICharInfo_t334  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15047(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2072 *, UICharInfo_t334 , UICharInfo_t334 , const MethodInfo*))Comparison_1_Invoke_m15047_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15048_gshared (Comparison_1_t2072 * __this, UICharInfo_t334  ___x, UICharInfo_t334  ___y, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15048(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2072 *, UICharInfo_t334 , UICharInfo_t334 , AsyncCallback_t152 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15048_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15049_gshared (Comparison_1_t2072 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15049(__this, ___result, method) (( int32_t (*) (Comparison_1_t2072 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15049_gshared)(__this, ___result, method)
