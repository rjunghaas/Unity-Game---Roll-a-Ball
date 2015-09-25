#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2216;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m16285_gshared (DefaultComparer_t2216 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16285(__this, method) (( void (*) (DefaultComparer_t2216 *, const MethodInfo*))DefaultComparer__ctor_m16285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16286_gshared (DefaultComparer_t2216 * __this, Guid_t1561  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16286(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2216 *, Guid_t1561 , const MethodInfo*))DefaultComparer_GetHashCode_m16286_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16287_gshared (DefaultComparer_t2216 * __this, Guid_t1561  ___x, Guid_t1561  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16287(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2216 *, Guid_t1561 , Guid_t1561 , const MethodInfo*))DefaultComparer_Equals_m16287_gshared)(__this, ___x, ___y, method)
