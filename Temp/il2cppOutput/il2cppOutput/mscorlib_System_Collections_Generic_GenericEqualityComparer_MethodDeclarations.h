#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1678;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10054_gshared (GenericEqualityComparer_1_t1678 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10054(__this, method) (( void (*) (GenericEqualityComparer_1_t1678 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m10054_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m16240_gshared (GenericEqualityComparer_1_t1678 * __this, DateTime_t505  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m16240(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1678 *, DateTime_t505 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m16240_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m16241_gshared (GenericEqualityComparer_1_t1678 * __this, DateTime_t505  ___x, DateTime_t505  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m16241(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1678 *, DateTime_t505 , DateTime_t505 , const MethodInfo*))GenericEqualityComparer_1_Equals_m16241_gshared)(__this, ___x, ___y, method)
