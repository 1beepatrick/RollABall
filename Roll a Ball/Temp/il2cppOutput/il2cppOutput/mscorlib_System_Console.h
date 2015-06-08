#pragma once
// System.IO.TextWriter
struct TextWriter_t1191;
// System.IO.TextReader
struct TextReader_t777;
// System.Text.Encoding
struct Encoding_t951;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct Console_t2977  : public Object_t
{
};
struct Console_t2977_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1191 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1191 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t777 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t951 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t951 * ___outputEncoding_4;
};
