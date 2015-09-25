#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t507;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t507 * GcScoreData_ToScore_m2773 (GcScoreData_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t496_marshal(const GcScoreData_t496& unmarshaled, GcScoreData_t496_marshaled& marshaled);
extern "C" void GcScoreData_t496_marshal_back(const GcScoreData_t496_marshaled& marshaled, GcScoreData_t496& unmarshaled);
extern "C" void GcScoreData_t496_marshal_cleanup(GcScoreData_t496_marshaled& marshaled);
