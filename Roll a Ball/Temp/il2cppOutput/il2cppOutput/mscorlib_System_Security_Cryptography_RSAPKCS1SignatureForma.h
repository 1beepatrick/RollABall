#pragma once
// System.Security.Cryptography.RSA
struct RSA_t2809;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3010;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t3543  : public AsymmetricSignatureFormatter_t3068
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t2809 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t3010 * ___hash_1;
};
