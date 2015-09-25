#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m11281_gshared (KeyValuePair_2_t1777 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m11281(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t1777 *, int32_t, Object_t *, const MethodInfo*))KeyValuePair_2__ctor_m11281_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m11282_gshared (KeyValuePair_2_t1777 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m11282(__this, method) (( int32_t (*) (KeyValuePair_2_t1777 *, const MethodInfo*))KeyValuePair_2_get_Key_m11282_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m11283_gshared (KeyValuePair_2_t1777 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m11283(__this, ___value, method) (( void (*) (KeyValuePair_2_t1777 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m11283_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m11284_gshared (KeyValuePair_2_t1777 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m11284(__this, method) (( Object_t * (*) (KeyValuePair_2_t1777 *, const MethodInfo*))KeyValuePair_2_get_Value_m11284_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m11285_gshared (KeyValuePair_2_t1777 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m11285(__this, ___value, method) (( void (*) (KeyValuePair_2_t1777 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Value_m11285_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m11286_gshared (KeyValuePair_2_t1777 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m11286(__this, method) (( String_t* (*) (KeyValuePair_2_t1777 *, const MethodInfo*))KeyValuePair_2_ToString_m11286_gshared)(__this, method)
