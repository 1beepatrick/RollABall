#pragma once
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Uri
struct Uri_t454;
// System.IO.Stream
struct Stream_t434;
// Parse.Internal.TaskQueue
struct TaskQueue_t529;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t575;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.ParseFile
struct ParseFile_t572  : public Object_t
{
	// System.Object Parse.ParseFile::mutex
	Object_t * ___mutex_0;
	// System.String Parse.ParseFile::name
	String_t* ___name_1;
	// System.String Parse.ParseFile::mimeType
	String_t* ___mimeType_2;
	// System.Uri Parse.ParseFile::uri
	Uri_t454 * ___uri_3;
	// System.IO.Stream Parse.ParseFile::dataStream
	Stream_t434 * ___dataStream_4;
	// Parse.Internal.TaskQueue Parse.ParseFile::taskQueue
	TaskQueue_t529 * ___taskQueue_5;
};
struct ParseFile_t572_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseFile::MIMETypesDictionary
	Dictionary_2_t575 * ___MIMETypesDictionary_6;
};
