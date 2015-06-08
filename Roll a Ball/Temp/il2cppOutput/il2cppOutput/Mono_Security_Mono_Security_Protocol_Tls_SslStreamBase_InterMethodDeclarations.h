#pragma once

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3077;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t35;
// System.Threading.WaitHandle
struct WaitHandle_t2718;
// System.AsyncCallback
struct AsyncCallback_t64;

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void InternalAsyncResult__ctor_m7952 (InternalAsyncResult_t3077 * __this, AsyncCallback_t64 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
 bool InternalAsyncResult_get_ProceedAfterHandshake_m7953 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
 bool InternalAsyncResult_get_FromWrite_m7954 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
 ByteU5BU5D_t433* InternalAsyncResult_get_Buffer_m7955 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
 int32_t InternalAsyncResult_get_Offset_m7956 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
 int32_t InternalAsyncResult_get_Count_m7957 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
 int32_t InternalAsyncResult_get_BytesRead_m7958 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
 Object_t * InternalAsyncResult_get_AsyncState_m7959 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
 Exception_t35 * InternalAsyncResult_get_AsyncException_m7960 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
 bool InternalAsyncResult_get_CompletedWithError_m7961 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t2718 * InternalAsyncResult_get_AsyncWaitHandle_m7962 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
 bool InternalAsyncResult_get_IsCompleted_m7963 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
 void InternalAsyncResult_SetComplete_m7964 (InternalAsyncResult_t3077 * __this, Exception_t35 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
 void InternalAsyncResult_SetComplete_m7965 (InternalAsyncResult_t3077 * __this, Exception_t35 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
 void InternalAsyncResult_SetComplete_m7966 (InternalAsyncResult_t3077 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
 void InternalAsyncResult_SetComplete_m7967 (InternalAsyncResult_t3077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
