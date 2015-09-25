﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t2008;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14471_gshared (Predicate_1_t2008 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14471(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2008 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14471_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14472_gshared (Predicate_1_t2008 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14472(__this, ___obj, method) (( bool (*) (Predicate_1_t2008 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m14472_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14473_gshared (Predicate_1_t2008 * __this, int32_t ___obj, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14473(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2008 *, int32_t, AsyncCallback_t152 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14473_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14474_gshared (Predicate_1_t2008 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14474(__this, ___result, method) (( bool (*) (Predicate_1_t2008 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14474_gshared)(__this, ___result, method)
