#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10057_gshared (Nullable_1_t1644 * __this, TimeSpan_t871  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10057(__this, ___value, method) (( void (*) (Nullable_1_t1644 *, TimeSpan_t871 , const MethodInfo*))Nullable_1__ctor_m10057_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10058_gshared (Nullable_1_t1644 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10058(__this, method) (( bool (*) (Nullable_1_t1644 *, const MethodInfo*))Nullable_1_get_HasValue_m10058_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t871  Nullable_1_get_Value_m10059_gshared (Nullable_1_t1644 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10059(__this, method) (( TimeSpan_t871  (*) (Nullable_1_t1644 *, const MethodInfo*))Nullable_1_get_Value_m10059_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m16267_gshared (Nullable_1_t1644 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m16267(__this, ___other, method) (( bool (*) (Nullable_1_t1644 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m16267_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m16268_gshared (Nullable_1_t1644 * __this, Nullable_1_t1644  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m16268(__this, ___other, method) (( bool (*) (Nullable_1_t1644 *, Nullable_1_t1644 , const MethodInfo*))Nullable_1_Equals_m16268_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m16269_gshared (Nullable_1_t1644 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m16269(__this, method) (( int32_t (*) (Nullable_1_t1644 *, const MethodInfo*))Nullable_1_GetHashCode_m16269_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m16270_gshared (Nullable_1_t1644 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m16270(__this, method) (( String_t* (*) (Nullable_1_t1644 *, const MethodInfo*))Nullable_1_ToString_m16270_gshared)(__this, method)
