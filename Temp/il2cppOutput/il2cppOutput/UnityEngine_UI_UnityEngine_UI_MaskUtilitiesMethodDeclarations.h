#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t169;
// UnityEngine.Component
struct Component_t14;
// UnityEngine.Transform
struct Transform_t12;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t168;
// UnityEngine.UI.IClippable
struct IClippable_t277;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t177;

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m811 (MaskUtilities_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m812 (Object_t * __this /* static, unused */, Component_t14 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m813 (Object_t * __this /* static, unused */, Component_t14 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t12 * MaskUtilities_FindRootSortOverrideCanvas_m814 (Object_t * __this /* static, unused */, Transform_t12 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m815 (Object_t * __this /* static, unused */, Transform_t12 * ___transform, Transform_t12 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t168 * MaskUtilities_GetRectMaskForClippable_m816 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m817 (Object_t * __this /* static, unused */, RectMask2D_t168 * ___clipper, List_1_t177 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
