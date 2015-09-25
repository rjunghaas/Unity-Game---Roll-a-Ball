#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
struct UnityAdsDelegate_2_t2115;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m15548_gshared (UnityAdsDelegate_2_t2115 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m15548(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t2115 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m15548_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m15549_gshared (UnityAdsDelegate_2_t2115 * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m15549(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t2115 *, Object_t *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_Invoke_m15549_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m15550_gshared (UnityAdsDelegate_2_t2115 * __this, Object_t * ___p1, Object_t * ___p2, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m15550(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t2115 *, Object_t *, Object_t *, AsyncCallback_t152 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m15550_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m15551_gshared (UnityAdsDelegate_2_t2115 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m15551(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t2115 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m15551_gshared)(__this, ___result, method)
