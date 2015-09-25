﻿#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t607;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t598;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Math.BigInteger
struct  BigInteger_t1048  : public Object_t
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t607* ___data_1;
};
struct BigInteger_t1048_StaticFields{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t607* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t598 * ___rng_3;
};
