#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// CameraController
struct  CameraController_t1  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject CameraController::player
	GameObject_t3 * ___player_2;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t4  ___offset_3;
};
