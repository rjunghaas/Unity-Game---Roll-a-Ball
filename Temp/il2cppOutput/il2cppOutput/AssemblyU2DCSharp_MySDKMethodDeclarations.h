#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MySDK
struct MySDK_t10;
// System.String
struct String_t;

// System.Void MySDK::.ctor()
extern "C" void MySDK__ctor_m13 (MySDK_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MySDK::mixpanel_init(System.String)
extern "C" void MySDK_mixpanel_init_m14 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MySDK::mixpanel_track(System.String)
extern "C" void MySDK_mixpanel_track_m15 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MySDK::MixpanelInit(System.String)
extern "C" void MySDK_MixpanelInit_m16 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MySDK::MixpanelTrack(System.String)
extern "C" void MySDK_MixpanelTrack_m17 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
