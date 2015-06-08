#pragma once
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3010;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t3076  : public HashAlgorithm_t3010
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.SslHandshakeHash::md5
	HashAlgorithm_t3010 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.SslHandshakeHash::sha
	HashAlgorithm_t3010 * ___sha_5;
	// System.Boolean Mono.Security.Protocol.Tls.SslHandshakeHash::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::secret
	ByteU5BU5D_t433* ___secret_7;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::innerPadMD5
	ByteU5BU5D_t433* ___innerPadMD5_8;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::outerPadMD5
	ByteU5BU5D_t433* ___outerPadMD5_9;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::innerPadSHA
	ByteU5BU5D_t433* ___innerPadSHA_10;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::outerPadSHA
	ByteU5BU5D_t433* ___outerPadSHA_11;
};
