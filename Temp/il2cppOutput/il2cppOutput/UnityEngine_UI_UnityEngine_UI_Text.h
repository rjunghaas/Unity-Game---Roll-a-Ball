#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t113;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t158;
// UnityEngine.Material
struct Material_t118;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t157;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct  Text_t6  : public MaskableGraphic_t138
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t113 * ___m_FontData_26;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_27;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t158 * ___m_TextCache_28;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t158 * ___m_TextCacheForLayout_29;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_31;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t157* ___m_TempVerts_32;
};
struct Text_t6_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t118 * ___s_DefaultText_30;
};
