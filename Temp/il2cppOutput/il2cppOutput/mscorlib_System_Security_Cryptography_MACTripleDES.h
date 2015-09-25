﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.TripleDES
struct TripleDES_t787;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1056;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1428  : public KeyedHashAlgorithm_t681
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t787 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1056 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;
};
