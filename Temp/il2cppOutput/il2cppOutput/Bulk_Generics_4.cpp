﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
#include "mscorlib_System_Array.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>(System.Int32)
extern "C" KeyValuePair_2_t2128  Array_InternalArray__get_Item_TisKeyValuePair_2_t2128_m16837_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2128_m16837(__this, p0, method) (( KeyValuePair_2_t2128  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2128_m16837_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15683_gshared (InternalEnumerator_1_t2129 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15684_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2128  L_0 = (( KeyValuePair_2_t2128  (*) (InternalEnumerator_1_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2129 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2128  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15685_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15686_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" KeyValuePair_2_t2128  InternalEnumerator_1_get_Current_m15687_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2128  L_8 = (( KeyValuePair_2_t2128  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void KeyValuePair_2__ctor_m15688_gshared (KeyValuePair_2_t2128 * __this, Object_t * ___key, bool ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2128 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2128 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2128 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m15689_gshared (KeyValuePair_2_t2128 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m15690_gshared (KeyValuePair_2_t2128 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C" bool KeyValuePair_2_get_Value_m15691_gshared (KeyValuePair_2_t2128 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m15692_gshared (KeyValuePair_2_t2128 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t509_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral220;
extern Il2CppCodeGenString* _stringLiteral211;
extern "C" String_t* KeyValuePair_2_ToString_m15693_gshared (KeyValuePair_2_t2128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t509* G_B2_1 = {0};
	StringU5BU5D_t509* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t509* G_B1_1 = {0};
	StringU5BU5D_t509* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t509* G_B3_2 = {0};
	StringU5BU5D_t509* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t509* G_B5_1 = {0};
	StringU5BU5D_t509* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t509* G_B4_1 = {0};
	StringU5BU5D_t509* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t509* G_B6_2 = {0};
	StringU5BU5D_t509* G_B6_3 = {0};
	{
		StringU5BU5D_t509* L_0 = (StringU5BU5D_t509*)((StringU5BU5D_t509*)SZArrayNew(StringU5BU5D_t509_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral210);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral210;
		StringU5BU5D_t509* L_1 = (StringU5BU5D_t509*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t509* L_6 = (StringU5BU5D_t509*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral220);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral220;
		StringU5BU5D_t509* L_7 = (StringU5BU5D_t509*)L_6;
		bool L_8 = (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		bool L_9 = (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		NullCheck((bool*)(&V_1));
		String_t* L_10 = Boolean_ToString_m5600((bool*)(&V_1), NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t509* L_12 = (StringU5BU5D_t509*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral211);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral211;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4999(NULL /*static, unused*/, (StringU5BU5D_t509*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
extern "C" bool Array_InternalArray__get_Item_TisBoolean_t292_m16848_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisBoolean_t292_m16848(__this, p0, method) (( bool (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisBoolean_t292_m16848_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15694_gshared (InternalEnumerator_1_t2130 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15695_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (( bool (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2130 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15696_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15697_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" bool InternalEnumerator_1_get_Current_m15698_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		bool L_8 = (( bool (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_13.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2134;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t292_m16859_gshared (Dictionary_2_t2126 * __this, Array_t * p0, int32_t p1, Transform_1_t2134 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t292_m16859(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, Transform_1_t2134 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t292_m16859_gshared)(__this, p0, p1, p2, method)
struct BooleanU5BU5D_t846;
struct Transform_1_t2134;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisBoolean_t292_TisBoolean_t292_m16861_gshared (Dictionary_2_t2126 * __this, BooleanU5BU5D_t846* p0, int32_t p1, Transform_1_t2134 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisBoolean_t292_TisBoolean_t292_m16861(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2126 *, BooleanU5BU5D_t846*, int32_t, Transform_1_t2134 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisBoolean_t292_TisBoolean_t292_m16861_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t585_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1227;
extern "C" void ValueCollection__ctor_m15699_gshared (ValueCollection_t2131 * __this, Dictionary_2_t2126 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral1227 = il2cpp_codegen_string_literal_from_index(1227);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m38((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2126 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t585 * L_1 = (ArgumentNullException_t585 *)il2cpp_codegen_object_new (ArgumentNullException_t585_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3005(L_1, (String_t*)_stringLiteral1227, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2126 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2682;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15700_gshared (ValueCollection_t2131 * __this, bool ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral2682 = il2cpp_codegen_string_literal_from_index(2682);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t307 * L_0 = (NotSupportedException_t307 *)il2cpp_codegen_object_new (NotSupportedException_t307_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3966(L_0, (String_t*)_stringLiteral2682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2682;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15701_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral2682 = il2cpp_codegen_string_literal_from_index(2682);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t307 * L_0 = (NotSupportedException_t307 *)il2cpp_codegen_object_new (NotSupportedException_t307_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3966(L_0, (String_t*)_stringLiteral2682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15702_gshared (ValueCollection_t2131 * __this, bool ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2126 * L_0 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		bool L_1 = ___item;
		NullCheck((Dictionary_2_t2126 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2126 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2126 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2682;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15703_gshared (ValueCollection_t2131 * __this, bool ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral2682 = il2cpp_codegen_string_literal_from_index(2682);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t307 * L_0 = (NotSupportedException_t307 *)il2cpp_codegen_object_new (NotSupportedException_t307_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3966(L_0, (String_t*)_stringLiteral2682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15704_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2131 *)__this);
		Enumerator_t2132  L_0 = (( Enumerator_t2132  (*) (ValueCollection_t2131 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2131 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2132  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m15705_gshared (ValueCollection_t2131 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	BooleanU5BU5D_t846* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (BooleanU5BU5D_t846*)((BooleanU5BU5D_t846*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		BooleanU5BU5D_t846* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		BooleanU5BU5D_t846* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2131 *)__this);
		(( void (*) (ValueCollection_t2131 *, BooleanU5BU5D_t846*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2131 *)__this, (BooleanU5BU5D_t846*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2126 * L_4 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2126 *)L_4);
		(( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2126 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2126 * L_7 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2134 * L_11 = (Transform_1_t2134 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2134 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2126 *)L_7);
		(( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, Transform_1_t2134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2126 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2134 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15706_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2131 *)__this);
		Enumerator_t2132  L_0 = (( Enumerator_t2132  (*) (ValueCollection_t2131 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2131 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2132  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15707_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15708_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t963_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m15709_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2126 * L_0 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t963_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m15710_gshared (ValueCollection_t2131 * __this, BooleanU5BU5D_t846* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2126 * L_0 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		BooleanU5BU5D_t846* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2126 *)L_0);
		(( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2126 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2126 * L_3 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		BooleanU5BU5D_t846* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2134 * L_7 = (Transform_1_t2134 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2134 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2126 *)L_3);
		(( void (*) (Dictionary_2_t2126 *, BooleanU5BU5D_t846*, int32_t, Transform_1_t2134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2126 *)L_3, (BooleanU5BU5D_t846*)L_4, (int32_t)L_5, (Transform_1_t2134 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2132  ValueCollection_GetEnumerator_m15711_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2126 * L_0 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		Enumerator_t2132  L_1 = {0};
		(( void (*) (Enumerator_t2132 *, Dictionary_2_t2126 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2126 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m15712_gshared (ValueCollection_t2131 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2126 * L_0 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2126 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count() */, (Dictionary_2_t2126 *)L_0);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
extern "C" void Enumerator__ctor_m15713_gshared (Enumerator_t2132 * __this, Dictionary_2_t2126 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2126 * L_0 = ___host;
		NullCheck((Dictionary_2_t2126 *)L_0);
		Enumerator_t2133  L_1 = (( Enumerator_t2133  (*) (Dictionary_2_t2126 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2126 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15714_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		bool L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m15715_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15716_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" bool Enumerator_get_Current_m15717_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2128 * L_1 = (KeyValuePair_2_t2128 *)&(L_0->___current_3);
		bool L_2 = (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2128 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
extern "C" void Enumerator__ctor_m15718_gshared (Enumerator_t2133 * __this, Dictionary_2_t2126 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2126 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2126 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15719_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2128  L_0 = (KeyValuePair_2_t2128 )(__this->___current_3);
		KeyValuePair_2_t2128  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t962  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15720_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2128 * L_0 = (KeyValuePair_2_t2128 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2128 * L_2 = (KeyValuePair_2_t2128 *)&(__this->___current_3);
		bool L_3 = (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2128 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		bool L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t962  L_6 = {0};
		DictionaryEntry__ctor_m4976(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15721_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15722_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		bool L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15723_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2126 * L_4 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1771* L_5 = (LinkU5BU5D_t1771*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1088 *)(Link_t1088 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1088 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2126 * L_8 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t289* L_9 = (ObjectU5BU5D_t289*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2126 * L_12 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck(L_12);
		BooleanU5BU5D_t846* L_13 = (BooleanU5BU5D_t846*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2128  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2128 *, Object_t *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (bool)(*(bool*)(bool*)SZArrayLdElema(L_13, L_15, sizeof(bool))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2126 * L_18 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2128  Enumerator_get_Current_m15724_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2128  L_0 = (KeyValuePair_2_t2128 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15725_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2128 * L_0 = (KeyValuePair_2_t2128 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m15726_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2128 * L_0 = (KeyValuePair_2_t2128 *)&(__this->___current_3);
		bool L_1 = (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2683;
extern "C" void Enumerator_VerifyState_m15727_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2683 = il2cpp_codegen_string_literal_from_index(2683);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2126 * L_0 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t617 * L_1 = (ObjectDisposedException_t617 *)il2cpp_codegen_object_new (ObjectDisposedException_t617_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3082(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t2126 * L_2 = (Dictionary_2_t2126 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t790 * L_5 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_5, (String_t*)_stringLiteral2683, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2684;
extern "C" void Enumerator_VerifyCurrent_m15728_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2684 = il2cpp_codegen_string_literal_from_index(2684);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2684, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m15729_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2126 *)NULL;
		return;
	}
}
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m15730_gshared (Transform_1_t2134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" bool Transform_1_Invoke_m15731_gshared (Transform_1_t2134 * __this, Object_t * ___key, bool ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m15731((Transform_1_t2134 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t292_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m15732_gshared (Transform_1_t2134 * __this, Object_t * ___key, bool ___value, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Boolean_t292_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Transform_1_EndInvoke_m15733_gshared (Transform_1_t2134 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m15734_gshared (Transform_1_t2127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" DictionaryEntry_t962  Transform_1_Invoke_m15735_gshared (Transform_1_t2127 * __this, Object_t * ___key, bool ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m15735((Transform_1_t2127 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t962  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t962  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t962  (*FunctionPointerType) (Object_t * __this, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t292_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m15736_gshared (Transform_1_t2127 * __this, Object_t * ___key, bool ___value, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Boolean_t292_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t962  Transform_1_EndInvoke_m15737_gshared (Transform_1_t2127 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t962 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m15738_gshared (Transform_1_t2135 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" KeyValuePair_2_t2128  Transform_1_Invoke_m15739_gshared (Transform_1_t2135 * __this, Object_t * ___key, bool ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m15739((Transform_1_t2135 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2128  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2128  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2128  (*FunctionPointerType) (Object_t * __this, bool ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t292_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m15740_gshared (Transform_1_t2135 * __this, Object_t * ___key, bool ___value, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Boolean_t292_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2128  Transform_1_EndInvoke_m15741_gshared (Transform_1_t2135 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2128 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m15742_gshared (ShimEnumerator_t2136 * __this, Dictionary_2_t2126 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m38((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2126 * L_0 = ___host;
		NullCheck((Dictionary_2_t2126 *)L_0);
		Enumerator_t2133  L_1 = (( Enumerator_t2133  (*) (Dictionary_2_t2126 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2126 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15743_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t961_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t962  ShimEnumerator_get_Entry_m15744_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2133  L_0 = (Enumerator_t2133 )(__this->___host_enumerator_0);
		Enumerator_t2133  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t962  L_3 = (DictionaryEntry_t962 )InterfaceFuncInvoker0< DictionaryEntry_t962  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t961_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15745_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2128  V_0 = {0};
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2128  L_1 = (( KeyValuePair_2_t2128  (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2128 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2128 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15746_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2128  V_0 = {0};
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2128  L_1 = (( KeyValuePair_2_t2128  (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2128 )L_1;
		bool L_2 = (( bool (*) (KeyValuePair_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2128 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		bool L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern TypeInfo* DictionaryEntry_t962_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m15747_gshared (ShimEnumerator_t2136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t962_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2136 *)__this);
		DictionaryEntry_t962  L_0 = (DictionaryEntry_t962 )VirtFuncInvoker0< DictionaryEntry_t962  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry() */, (ShimEnumerator_t2136 *)__this);
		DictionaryEntry_t962  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t962_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9.h"
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9MethodDeclarations.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m15748_gshared (EqualityComparer_1_t2137 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m38((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2395_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t557_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m15749_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2395_0_0_0_var = il2cpp_codegen_type_from_index(2521);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		TypeU5BU5D_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1687(NULL /*static, unused*/, (RuntimeTypeHandle_t991 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1687(NULL /*static, unused*/, (RuntimeTypeHandle_t991 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1687(NULL /*static, unused*/, (RuntimeTypeHandle_t991 )LoadTypeToken(GenericEqualityComparer_1_t2395_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t557* L_4 = (TypeU5BU5D_t557*)((TypeU5BU5D_t557*)SZArrayNew(TypeU5BU5D_t557_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1687(NULL /*static, unused*/, (RuntimeTypeHandle_t991 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t557* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t557*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9186(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2137_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2137 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2139 * L_8 = (DefaultComparer_t2139 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2139 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2137_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15750_gshared (EqualityComparer_1_t2137 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2137 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, bool >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::GetHashCode(T) */, (EqualityComparer_1_t2137 *)__this, (bool)((*(bool*)((bool*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15751_gshared (EqualityComparer_1_t2137 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2137 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, bool, bool >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_t2137 *)__this, (bool)((*(bool*)((bool*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (bool)((*(bool*)((bool*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Boolean>::get_Default()
extern "C" EqualityComparer_1_t2137 * EqualityComparer_1_get_Default_m15752_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2137 * L_0 = ((EqualityComparer_1_t2137_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m15753_gshared (GenericEqualityComparer_1_t2138 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2137 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2137 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2137 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m15754_gshared (GenericEqualityComparer_1_t2138 * __this, bool ___obj, const MethodInfo* method)
{
	{
		bool L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((bool*)(&___obj));
		int32_t L_1 = Boolean_GetHashCode_m5598((bool*)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m15755_gshared (GenericEqualityComparer_1_t2138 * __this, bool ___x, bool ___y, const MethodInfo* method)
{
	{
		bool L_0 = ___x;
		goto IL_0015;
	}
	{
		bool L_1 = ___y;
		bool L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		bool L_4 = ___y;
		NullCheck((bool*)(&___x));
		bool L_5 = Boolean_Equals_m5597((bool*)(&___x), (bool)L_4, NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m15756_gshared (DefaultComparer_t2139 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2137 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2137 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2137 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m15757_gshared (DefaultComparer_t2139 * __this, bool ___obj, const MethodInfo* method)
{
	{
		bool L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((bool*)(&___obj));
		int32_t L_1 = Boolean_GetHashCode_m5598((bool*)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15758_gshared (DefaultComparer_t2139 * __this, bool ___x, bool ___y, const MethodInfo* method)
{
	{
		bool L_0 = ___x;
		goto IL_0015;
	}
	{
		bool L_1 = ___y;
		bool L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		bool L_4 = ___y;
		bool L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((bool*)(&___x));
		bool L_7 = Boolean_Equals_m5595((bool*)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56MethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" X509ChainStatus_t868  Array_InternalArray__get_Item_TisX509ChainStatus_t868_m16866_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisX509ChainStatus_t868_m16866(__this, p0, method) (( X509ChainStatus_t868  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisX509ChainStatus_t868_m16866_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15795_gshared (InternalEnumerator_1_t2143 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15796_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method)
{
	{
		X509ChainStatus_t868  L_0 = (( X509ChainStatus_t868  (*) (InternalEnumerator_1_t2143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		X509ChainStatus_t868  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15797_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15798_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" X509ChainStatus_t868  InternalEnumerator_1_get_Current_m15799_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		X509ChainStatus_t868  L_8 = (( X509ChainStatus_t868  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59MethodDeclarations.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C" Mark_t913  Array_InternalArray__get_Item_TisMark_t913_m16878_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisMark_t913_m16878(__this, p0, method) (( Mark_t913  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisMark_t913_m16878_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15902_gshared (InternalEnumerator_1_t2151 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15903_gshared (InternalEnumerator_1_t2151 * __this, const MethodInfo* method)
{
	{
		Mark_t913  L_0 = (( Mark_t913  (*) (InternalEnumerator_1_t2151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Mark_t913  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15904_gshared (InternalEnumerator_1_t2151 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15905_gshared (InternalEnumerator_1_t2151 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" Mark_t913  InternalEnumerator_1_get_Current_m15906_gshared (InternalEnumerator_1_t2151 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Mark_t913  L_8 = (( Mark_t913  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60.h"
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60MethodDeclarations.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C" UriScheme_t950  Array_InternalArray__get_Item_TisUriScheme_t950_m16889_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUriScheme_t950_m16889(__this, p0, method) (( UriScheme_t950  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUriScheme_t950_m16889_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15907_gshared (InternalEnumerator_1_t2152 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15908_gshared (InternalEnumerator_1_t2152 * __this, const MethodInfo* method)
{
	{
		UriScheme_t950  L_0 = (( UriScheme_t950  (*) (InternalEnumerator_1_t2152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2152 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UriScheme_t950  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15909_gshared (InternalEnumerator_1_t2152 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15910_gshared (InternalEnumerator_1_t2152 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" UriScheme_t950  InternalEnumerator_1_get_Current_m15911_gshared (InternalEnumerator_1_t2152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UriScheme_t950  L_8 = (( UriScheme_t950  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t983_m16900_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t983_m16900(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t983_m16900_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15917_gshared (InternalEnumerator_1_t2154 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15918_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (InternalEnumerator_1_t2154 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2154 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15919_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15920_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" uint64_t InternalEnumerator_1_get_Current_m15921_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint64_t L_8 = (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t985_m16911_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t985_m16911(__this, p0, method) (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt16_t985_m16911_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15922_gshared (InternalEnumerator_1_t2155 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15923_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method)
{
	{
		int16_t L_0 = (( int16_t (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2155 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15924_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15925_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" int16_t InternalEnumerator_1_get_Current_m15926_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int16_t L_8 = (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64MethodDeclarations.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t984_m16922_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t984_m16922(__this, p0, method) (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSByte_t984_m16922_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15927_gshared (InternalEnumerator_1_t2156 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15928_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
{
	{
		int8_t L_0 = (( int8_t (*) (InternalEnumerator_1_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15929_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15930_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" int8_t InternalEnumerator_1_get_Current_m15931_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int8_t L_8 = (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65MethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t578_m16933_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t578_m16933(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt64_t578_m16933_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15932_gshared (InternalEnumerator_1_t2157 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15933_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2157 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15934_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15935_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" int64_t InternalEnumerator_1_get_Current_m15936_gshared (InternalEnumerator_1_t2157 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Converter_2__ctor_m15937_gshared (Converter_2_t2158 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m15938_gshared (Converter_2_t2158 * __this, Object_t * ___input, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m15938((Converter_2_t2158 *)__this->___prev_9,___input, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Converter_2_BeginInvoke_m15939_gshared (Converter_2_t2158 * __this, Object_t * ___input, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m15940_gshared (Converter_2_t2158 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3MethodDeclarations.h"
struct ObjectU5BU5D_t289;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m10051_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t289* p0, Object_t * p1, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10051(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t289*, Object_t *, const MethodInfo*))Array_IndexOf_TisObject_t_m10051_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ArrayReadOnlyList_1__ctor_m15941_gshared (ArrayReadOnlyList_1_t2159 * __this, ObjectU5BU5D_t289* ___array, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m38((Object_t *)__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t289* L_0 = ___array;
		__this->___array_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m15942_gshared (ArrayReadOnlyList_1_t2159 * __this, const MethodInfo* method)
{
	{
		NullCheck((ArrayReadOnlyList_1_t2159 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator() */, (ArrayReadOnlyList_1_t2159 *)__this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t616_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral586;
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m15943_gshared (ArrayReadOnlyList_1_t2159 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		ObjectU5BU5D_t289* L_1 = (ObjectU5BU5D_t289*)(__this->___array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_t616 * L_2 = (ArgumentOutOfRangeException_t616 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t616_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3965(L_2, (String_t*)_stringLiteral586, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0019:
	{
		ObjectU5BU5D_t289* L_3 = (ObjectU5BU5D_t289*)(__this->___array_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5, sizeof(Object_t *)));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void ArrayReadOnlyList_1_set_Item_m15944_gshared (ArrayReadOnlyList_1_t2159 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		Exception_t295 * L_0 = (( Exception_t295 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m15945_gshared (ArrayReadOnlyList_1_t2159 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t289* L_0 = (ObjectU5BU5D_t289*)(__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m15946_gshared (ArrayReadOnlyList_1_t2159 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern "C" void ArrayReadOnlyList_1_Add_m15947_gshared (ArrayReadOnlyList_1_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t295 * L_0 = (( Exception_t295 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern "C" void ArrayReadOnlyList_1_Clear_m15948_gshared (ArrayReadOnlyList_1_t2159 * __this, const MethodInfo* method)
{
	{
		Exception_t295 * L_0 = (( Exception_t295 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern "C" bool ArrayReadOnlyList_1_Contains_m15949_gshared (ArrayReadOnlyList_1_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t289* L_0 = (ObjectU5BU5D_t289*)(__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t289*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t289*)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ArrayReadOnlyList_1_CopyTo_m15950_gshared (ArrayReadOnlyList_1_t2159 * __this, ObjectU5BU5D_t289* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t289* L_0 = (ObjectU5BU5D_t289*)(__this->___array_0);
		ObjectU5BU5D_t289* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Array_t *)L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m15951_gshared (ArrayReadOnlyList_1_t2159 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2160 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2160 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2160 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2160 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2160 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2160 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2160 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m15952_gshared (ArrayReadOnlyList_1_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t289* L_0 = (ObjectU5BU5D_t289*)(__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t289*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t289*)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_Insert_m15953_gshared (ArrayReadOnlyList_1_t2159 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t295 * L_0 = (( Exception_t295 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern "C" bool ArrayReadOnlyList_1_Remove_m15954_gshared (ArrayReadOnlyList_1_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t295 * L_0 = (( Exception_t295 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern "C" void ArrayReadOnlyList_1_RemoveAt_m15955_gshared (ArrayReadOnlyList_1_t2159 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Exception_t295 * L_0 = (( Exception_t295 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2687;
extern "C" Exception_t295 * ArrayReadOnlyList_1_ReadOnlyError_m15956_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral2687 = il2cpp_codegen_string_literal_from_index(2687);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t307 * L_0 = (NotSupportedException_t307 *)il2cpp_codegen_object_new (NotSupportedException_t307_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3966(L_0, (String_t*)_stringLiteral2687, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m15957_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2160 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m38((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m15958_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2160 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m15959_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2160 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m15960_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2160 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0082;
	}

IL_0021:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0063;
	}

IL_002d:
	{
		ArrayReadOnlyList_1_t2159 * L_2 = (ArrayReadOnlyList_1_t2159 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ObjectU5BU5D_t289* L_3 = (ObjectU5BU5D_t289*)(L_2->___array_0);
		int32_t L_4 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		__this->___U24current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5, sizeof(Object_t *)));
		__this->___U24PC_1 = 1;
		goto IL_0084;
	}

IL_0055:
	{
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_7 = (int32_t)(__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t2159 * L_8 = (ArrayReadOnlyList_1_t2159 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_8);
		ObjectU5BU5D_t289* L_9 = (ObjectU5BU5D_t289*)(L_8->___array_0);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		__this->___U24PC_1 = (-1);
	}

IL_0082:
	{
		return 0;
	}

IL_0084:
	{
		return 1;
	}
	// Dead block : IL_0086: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m15961_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2160 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69.h"
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69MethodDeclarations.h"
// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t1021  Array_InternalArray__get_Item_TisTableRange_t1021_m16972_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t1021_m16972(__this, p0, method) (( TableRange_t1021  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t1021_m16972_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15977_gshared (InternalEnumerator_1_t2164 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15978_gshared (InternalEnumerator_1_t2164 * __this, const MethodInfo* method)
{
	{
		TableRange_t1021  L_0 = (( TableRange_t1021  (*) (InternalEnumerator_1_t2164 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2164 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TableRange_t1021  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15979_gshared (InternalEnumerator_1_t2164 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15980_gshared (InternalEnumerator_1_t2164 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" TableRange_t1021  InternalEnumerator_1_get_Current_m15981_gshared (InternalEnumerator_1_t2164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		TableRange_t1021  L_8 = (( TableRange_t1021  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1.h"
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1MethodDeclarations.h"
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2.h"
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2MethodDeclarations.h"
// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4.h"
// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.Object>::.ctor()
extern "C" void GenericComparer_1__ctor_m16002_gshared (GenericComparer_1_t2171 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1696 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1696 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1696 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Object>::Compare(T,T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t GenericComparer_1_Compare_m16003_gshared (GenericComparer_1_t2171 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Object_t * L_3 = ___y;
		NullCheck((Object_t*)(*(&___x)));
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)(*(&___x)), (Object_t *)L_3);
		return L_4;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m16004_gshared (GenericEqualityComparer_1_t2172 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1692 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1692 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1692 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m16005_gshared (GenericEqualityComparer_1_t2172 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)(*(&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)(*(&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m16006_gshared (GenericEqualityComparer_1_t2172 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_1 = ___y;
		return ((((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Object_t * L_2 = ___y;
		NullCheck((Object_t*)(*(&___x)));
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)(*(&___x)), (Object_t *)L_2);
		return L_3;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74MethodDeclarations.h"
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t1098  Array_InternalArray__get_Item_TisSlot_t1098_m16983_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1098_m16983(__this, p0, method) (( Slot_t1098  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1098_m16983_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m16007_gshared (InternalEnumerator_1_t2173 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16008_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method)
{
	{
		Slot_t1098  L_0 = (( Slot_t1098  (*) (InternalEnumerator_1_t2173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2173 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1098  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16009_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m16010_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m4978((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2671;
extern Il2CppCodeGenString* _stringLiteral2672;
extern "C" Slot_t1098  InternalEnumerator_1_get_Current_m16011_gshared (InternalEnumerator_1_t2173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral2671 = il2cpp_codegen_string_literal_from_index(2671);
		_stringLiteral2672 = il2cpp_codegen_string_literal_from_index(2672);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t790 * L_1 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_1, (String_t*)_stringLiteral2671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t790 * L_3 = (InvalidOperationException_t790 *)il2cpp_codegen_object_new (InvalidOperationException_t790_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4045(L_3, (String_t*)_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m4978((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Slot_t1098  L_8 = (( Slot_t1098  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
