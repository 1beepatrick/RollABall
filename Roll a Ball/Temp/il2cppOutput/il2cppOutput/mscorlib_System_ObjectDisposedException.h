﻿#pragma once
// System.String
struct String_t;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ObjectDisposedException
struct ObjectDisposedException_t2713  : public InvalidOperationException_t826
{
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;
};
