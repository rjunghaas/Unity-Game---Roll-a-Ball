#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2206;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m16238_gshared (DefaultComparer_t2206 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16238(__this, method) (( void (*) (DefaultComparer_t2206 *, const MethodInfo*))DefaultComparer__ctor_m16238_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m16239_gshared (DefaultComparer_t2206 * __this, DateTime_t505  ___x, DateTime_t505  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m16239(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2206 *, DateTime_t505 , DateTime_t505 , const MethodInfo*))DefaultComparer_Compare_m16239_gshared)(__this, ___x, ___y, method)
