﻿#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t976;
// System.IO.TextReader
struct TextReader_t1084;
// System.Text.Encoding
struct Encoding_t767;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t975  : public Object_t
{
};
struct Console_t975_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t976 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t976 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1084 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t767 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t767 * ___outputEncoding_4;
};
