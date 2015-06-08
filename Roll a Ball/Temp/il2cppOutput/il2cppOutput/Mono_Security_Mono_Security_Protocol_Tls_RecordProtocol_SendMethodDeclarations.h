#pragma once

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t3064;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3049;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t35;
// System.Threading.WaitHandle
struct WaitHandle_t2718;
// System.AsyncCallback
struct AsyncCallback_t64;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
 void SendRecordAsyncResult__ctor_m7847 (SendRecordAsyncResult_t3064 * __this, AsyncCallback_t64 * ___userCallback, Object_t * ___userState, HandshakeMessage_t3049 * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
 HandshakeMessage_t3049 * SendRecordAsyncResult_get_Message_m7848 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
 Object_t * SendRecordAsyncResult_get_AsyncState_m7849 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
 Exception_t35 * SendRecordAsyncResult_get_AsyncException_m7850 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
 bool SendRecordAsyncResult_get_CompletedWithError_m7851 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t2718 * SendRecordAsyncResult_get_AsyncWaitHandle_m7852 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
 bool SendRecordAsyncResult_get_IsCompleted_m7853 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
 void SendRecordAsyncResult_SetComplete_m7854 (SendRecordAsyncResult_t3064 * __this, Exception_t35 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
 void SendRecordAsyncResult_SetComplete_m7855 (SendRecordAsyncResult_t3064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
