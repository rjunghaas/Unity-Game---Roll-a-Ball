﻿#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t97;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t139;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t140;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
// UnityEngine.UI.Image
struct  Image_t100  : public MaskableGraphic_t138
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t97 * ___m_Sprite_26;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t97 * ___m_OverrideSprite_27;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_28;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_29;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_30;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_31;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_32;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_33;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_34;
	// System.Single UnityEngine.UI.Image::m_EventAlphaThreshold
	float ___m_EventAlphaThreshold_35;
};
struct Image_t100_StaticFields{
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t139* ___s_VertScratch_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t139* ___s_UVScratch_37;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t140* ___s_Xy_38;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t140* ___s_Uv_39;
};
