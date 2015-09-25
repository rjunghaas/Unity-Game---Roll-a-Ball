#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t652;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t643;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1435  : public AsymmetricSignatureFormatter_t718
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t652 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t643 * ___hash_1;
};
