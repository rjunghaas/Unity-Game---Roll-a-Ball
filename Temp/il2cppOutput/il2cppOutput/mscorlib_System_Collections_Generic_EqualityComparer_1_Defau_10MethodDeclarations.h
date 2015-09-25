#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2208;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m16247_gshared (DefaultComparer_t2208 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16247(__this, method) (( void (*) (DefaultComparer_t2208 *, const MethodInfo*))DefaultComparer__ctor_m16247_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16248_gshared (DefaultComparer_t2208 * __this, DateTime_t505  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16248(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2208 *, DateTime_t505 , const MethodInfo*))DefaultComparer_GetHashCode_m16248_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16249_gshared (DefaultComparer_t2208 * __this, DateTime_t505  ___x, DateTime_t505  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16249(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2208 *, DateTime_t505 , DateTime_t505 , const MethodInfo*))DefaultComparer_Equals_m16249_gshared)(__this, ___x, ___y, method)
