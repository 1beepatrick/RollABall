#pragma once

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t3315;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t2718;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IAsyncResult
struct IAsyncResult_t63;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m10124 (FileStreamAsyncResult_t3315 * __this, AsyncCallback_t64 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m10125 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m10126 (FileStreamAsyncResult_t3315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t2718 * FileStreamAsyncResult_get_AsyncWaitHandle_m10127 (FileStreamAsyncResult_t3315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m10128 (FileStreamAsyncResult_t3315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
