#pragma once
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// System.MissingMemberException
struct MissingMemberException_t3670  : public MemberAccessException_t3663
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t433* ___Signature_13;
};
