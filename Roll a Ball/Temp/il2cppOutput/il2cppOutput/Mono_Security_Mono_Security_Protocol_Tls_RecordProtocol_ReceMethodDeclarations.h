#pragma once

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t3063;
// System.IO.Stream
struct Stream_t434;
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

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m7835 (ReceiveRecordAsyncResult_t3063 * __this, AsyncCallback_t64 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t433* ___initialBuffer, Stream_t434 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t434 * ReceiveRecordAsyncResult_get_Record_m7836 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t433* ReceiveRecordAsyncResult_get_ResultingBuffer_m7837 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t433* ReceiveRecordAsyncResult_get_InitialBuffer_m7838 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m7839 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t35 * ReceiveRecordAsyncResult_get_AsyncException_m7840 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m7841 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t2718 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m7842 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m7843 (ReceiveRecordAsyncResult_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m7844 (ReceiveRecordAsyncResult_t3063 * __this, Exception_t35 * ___ex, ByteU5BU5D_t433* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m7845 (ReceiveRecordAsyncResult_t3063 * __this, Exception_t35 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m7846 (ReceiveRecordAsyncResult_t3063 * __this, ByteU5BU5D_t433* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
