#include "il2cpp-config.h"
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

// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
// CameraController
#include "AssemblyU2DCSharp_CameraController.h"
// CameraController
#include "AssemblyU2DCSharp_CameraControllerMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void CameraController::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CameraController__ctor_m0 (CameraController_t1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m18(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void CameraController_Start_m1 (CameraController_t1 * __this, const MethodInfo* method)
{
	{
		Transform_t12 * L_0 = Component_get_transform_m19(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4  L_1 = Transform_get_position_m20(L_0, /*hidden argument*/NULL);
		GameObject_t3 * L_2 = (__this->___player_2);
		NullCheck(L_2);
		Transform_t12 * L_3 = GameObject_get_transform_m21(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4  L_4 = Transform_get_position_m20(L_3, /*hidden argument*/NULL);
		Vector3_t4  L_5 = Vector3_op_Subtraction_m22(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->___offset_3 = L_5;
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C" void CameraController_LateUpdate_m2 (CameraController_t1 * __this, const MethodInfo* method)
{
	{
		Transform_t12 * L_0 = Component_get_transform_m19(__this, /*hidden argument*/NULL);
		GameObject_t3 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Transform_t12 * L_2 = GameObject_get_transform_m21(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t4  L_3 = Transform_get_position_m20(L_2, /*hidden argument*/NULL);
		Vector3_t4  L_4 = (__this->___offset_3);
		Vector3_t4  L_5 = Vector3_op_Addition_m23(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m24(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
struct Rigidbody_t7;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m35_gshared (Component_t14 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m35(__this, method) (( Object_t * (*) (Component_t14 *, const MethodInfo*))Component_GetComponent_TisObject_t_m35_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t7_m25(__this, method) (( Rigidbody_t7 * (*) (Component_t14 *, const MethodInfo*))Component_GetComponent_TisObject_t_m35_gshared)(__this, method)
// System.Void PlayerController::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void PlayerController__ctor_m3 (PlayerController_t5 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m18(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t7_m25_MethodInfo_var;
extern "C" void PlayerController_Start_m4 (PlayerController_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisRigidbody_t7_m25_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t7 * L_0 = Component_GetComponent_TisRigidbody_t7_m25(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t7_m25_MethodInfo_var);
		__this->___rb_5 = L_0;
		__this->___count_6 = 0;
		PlayerController_SetCountText_m7(__this, /*hidden argument*/NULL);
		Text_t6 * L_1 = (__this->___winText_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
extern TypeInfo* Input_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void PlayerController_FixedUpdate_m5 (PlayerController_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t13_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m26(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m26(NULL /*static, unused*/, _stringLiteral1, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m27((&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody_t7 * L_4 = (__this->___rb_5);
		Vector3_t4  L_5 = V_2;
		float L_6 = (__this->___speed_2);
		Vector3_t4  L_7 = Vector3_op_Multiply_m28(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddForce_m29(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void PlayerController_OnTriggerEnter_m6 (PlayerController_t5 * __this, Collider_t11 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t11 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t3 * L_1 = Component_get_gameObject_m30(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m31(L_1, _stringLiteral2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t11 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t3 * L_4 = Component_get_gameObject_m30(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m32(L_4, 0, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___count_6);
		__this->___count_6 = ((int32_t)((int32_t)L_5+(int32_t)1));
		PlayerController_SetCountText_m7(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::SetCountText()
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void PlayerController_SetCountText_m7 (PlayerController_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t6 * L_0 = (__this->___countText_3);
		int32_t* L_1 = &(__this->___count_6);
		String_t* L_2 = Int32_ToString_m33(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m34(NULL /*static, unused*/, _stringLiteral3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = (__this->___count_6);
		if ((((int32_t)L_4) < ((int32_t)5)))
		{
			goto IL_003c;
		}
	}
	{
		Text_t6 * L_5 = (__this->___winText_4);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral4);
	}

IL_003c:
	{
		return;
	}
}
// Rotator
#include "AssemblyU2DCSharp_Rotator.h"
// Rotator
#include "AssemblyU2DCSharp_RotatorMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Void Rotator::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Rotator__ctor_m8 (Rotator_t8 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m18(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void Rotator_Update_m9 (Rotator_t8 * __this, const MethodInfo* method)
{
	{
		Transform_t12 * L_0 = Component_get_transform_m19(__this, /*hidden argument*/NULL);
		Vector3_t4  L_1 = {0};
		Vector3__ctor_m27(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m36(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4  L_3 = Vector3_op_Multiply_m28(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m37(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// MP_Unity
#include "AssemblyU2DCSharp_MP_Unity.h"
// MP_Unity
#include "AssemblyU2DCSharp_MP_UnityMethodDeclarations.h"
// MySDK
#include "AssemblyU2DCSharp_MySDKMethodDeclarations.h"
// System.Void MP_Unity::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void MP_Unity__ctor_m10 (MP_Unity_t9 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m18(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MP_Unity::Start()
// MySDK
#include "AssemblyU2DCSharp_MySDKMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void MP_Unity_Start_m11 (MP_Unity_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		MySDK_MixpanelInit_m16(NULL /*static, unused*/, _stringLiteral5, /*hidden argument*/NULL);
		MySDK_MixpanelTrack_m17(NULL /*static, unused*/, _stringLiteral6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MP_Unity::Update()
extern "C" void MP_Unity_Update_m12 (MP_Unity_t9 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// MySDK
#include "AssemblyU2DCSharp_MySDK.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Void MySDK::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void MySDK__ctor_m13 (MySDK_t10 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m38(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MySDK::mixpanel_init(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" {void DEFAULT_CALL mixpanel_init(char*);}
extern "C" void MySDK_mixpanel_init_m14 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)mixpanel_init;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'mixpanel_init'"));
		}
	}

	// Marshaling of parameter '___token' to native representation
	char* ____token_marshaled = { 0 };
	____token_marshaled = il2cpp_codegen_marshal_string(___token);

	// Native function invocation
	_il2cpp_pinvoke_func(____token_marshaled);

	// Marshaling cleanup of parameter '___token' native representation
	il2cpp_codegen_marshal_free(____token_marshaled);
	____token_marshaled = NULL;

}
// System.Void MySDK::mixpanel_track(System.String)
extern "C" {void DEFAULT_CALL mixpanel_track(char*);}
extern "C" void MySDK_mixpanel_track_m15 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)mixpanel_track;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'mixpanel_track'"));
		}
	}

	// Marshaling of parameter '___eventName' to native representation
	char* ____eventName_marshaled = { 0 };
	____eventName_marshaled = il2cpp_codegen_marshal_string(___eventName);

	// Native function invocation
	_il2cpp_pinvoke_func(____eventName_marshaled);

	// Marshaling cleanup of parameter '___eventName' native representation
	il2cpp_codegen_marshal_free(____eventName_marshaled);
	____eventName_marshaled = NULL;

}
// System.Void MySDK::MixpanelInit(System.String)
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// MySDK
#include "AssemblyU2DCSharp_MySDKMethodDeclarations.h"
extern "C" void MySDK_MixpanelInit_m16 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m39(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___token;
		MySDK_mixpanel_init_m14(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0010:
	{
		return;
	}
}
// System.Void MySDK::MixpanelTrack(System.String)
extern "C" void MySDK_MixpanelTrack_m17 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m39(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___eventName;
		MySDK_mixpanel_track_m15(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0010:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
