﻿#pragma once
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2803;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2804;
// System.Security.Cryptography.Oid
struct Oid_t2805;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1822;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2806  : public Object_t
{
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t2803 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t2804 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t2804 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t2805 * ____oid_3;
};
struct PublicKey_t2806_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t1822 * ___U3CU3Ef__switch$map9_4;
};
