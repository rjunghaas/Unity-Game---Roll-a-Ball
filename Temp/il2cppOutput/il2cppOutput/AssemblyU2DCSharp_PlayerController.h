#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t6;
// UnityEngine.Rigidbody
struct Rigidbody_t7;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerController
struct  PlayerController_t5  : public MonoBehaviour_t2
{
	// System.Single PlayerController::speed
	float ___speed_2;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t6 * ___countText_3;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t6 * ___winText_4;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t7 * ___rb_5;
	// System.Int32 PlayerController::count
	int32_t ___count_6;
};
