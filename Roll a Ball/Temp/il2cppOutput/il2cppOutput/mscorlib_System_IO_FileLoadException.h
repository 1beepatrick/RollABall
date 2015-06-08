#pragma once
// System.String
struct String_t;
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.IO.FileLoadException
struct FileLoadException_t3308  : public IOException_t3125
{
	// System.String System.IO.FileLoadException::msg
	String_t* ___msg_11;
	// System.String System.IO.FileLoadException::fileName
	String_t* ___fileName_12;
	// System.String System.IO.FileLoadException::fusionLog
	String_t* ___fusionLog_13;
};
