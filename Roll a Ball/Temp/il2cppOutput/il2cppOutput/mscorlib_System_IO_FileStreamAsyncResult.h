#pragma once
// System.Object
struct Object_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2717;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t3315  : public Object_t
{
	// System.Object System.IO.FileStreamAsyncResult::state
	Object_t * ___state_0;
	// System.Boolean System.IO.FileStreamAsyncResult::completed
	bool ___completed_1;
	// System.Threading.ManualResetEvent System.IO.FileStreamAsyncResult::wh
	ManualResetEvent_t2717 * ___wh_2;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::cb
	AsyncCallback_t64 * ___cb_3;
	// System.Int32 System.IO.FileStreamAsyncResult::Count
	int32_t ___Count_4;
	// System.Int32 System.IO.FileStreamAsyncResult::OriginalCount
	int32_t ___OriginalCount_5;
	// System.Int32 System.IO.FileStreamAsyncResult::BytesRead
	int32_t ___BytesRead_6;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::realcb
	AsyncCallback_t64 * ___realcb_7;
};
