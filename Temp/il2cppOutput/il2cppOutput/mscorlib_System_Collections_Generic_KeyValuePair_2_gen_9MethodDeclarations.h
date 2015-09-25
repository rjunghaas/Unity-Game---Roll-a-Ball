#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m15688_gshared (KeyValuePair_2_t2128 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m15688(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2128 *, Object_t *, bool, const MethodInfo*))KeyValuePair_2__ctor_m15688_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m15689_gshared (KeyValuePair_2_t2128 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m15689(__this, method) (( Object_t * (*) (KeyValuePair_2_t2128 *, const MethodInfo*))KeyValuePair_2_get_Key_m15689_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m15690_gshared (KeyValuePair_2_t2128 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m15690(__this, ___value, method) (( void (*) (KeyValuePair_2_t2128 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m15690_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C" bool KeyValuePair_2_get_Value_m15691_gshared (KeyValuePair_2_t2128 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m15691(__this, method) (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))KeyValuePair_2_get_Value_m15691_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m15692_gshared (KeyValuePair_2_t2128 * __this, bool ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m15692(__this, ___value, method) (( void (*) (KeyValuePair_2_t2128 *, bool, const MethodInfo*))KeyValuePair_2_set_Value_m15692_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m15693_gshared (KeyValuePair_2_t2128 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m15693(__this, method) (( String_t* (*) (KeyValuePair_2_t2128 *, const MethodInfo*))KeyValuePair_2_ToString_m15693_gshared)(__this, method)
