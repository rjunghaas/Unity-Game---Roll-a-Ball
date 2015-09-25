#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2218;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m16293_gshared (DefaultComparer_t2218 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16293(__this, method) (( void (*) (DefaultComparer_t2218 *, const MethodInfo*))DefaultComparer__ctor_m16293_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m16294_gshared (DefaultComparer_t2218 * __this, TimeSpan_t871  ___x, TimeSpan_t871  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m16294(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2218 *, TimeSpan_t871 , TimeSpan_t871 , const MethodInfo*))DefaultComparer_Compare_m16294_gshared)(__this, ___x, ___y, method)
