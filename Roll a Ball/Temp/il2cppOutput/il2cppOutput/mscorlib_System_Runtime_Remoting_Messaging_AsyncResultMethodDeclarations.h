#pragma once

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t3444;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t2718;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2984;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t3441;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t3442;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t3443;

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
 void AsyncResult__ctor_m10887 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
 Object_t * AsyncResult_get_AsyncState_m10888 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
 WaitHandle_t2718 * AsyncResult_get_AsyncWaitHandle_m10889 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
 bool AsyncResult_get_CompletedSynchronously_m10890 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
 bool AsyncResult_get_IsCompleted_m10891 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
 bool AsyncResult_get_EndInvokeCalled_m10892 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
 void AsyncResult_set_EndInvokeCalled_m10893 (AsyncResult_t3444 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
 Object_t * AsyncResult_get_AsyncDelegate_m10894 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
 Object_t * AsyncResult_get_NextSink_m10895 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
 Object_t * AsyncResult_AsyncProcessMessage_m10896 (AsyncResult_t3444 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
 Object_t * AsyncResult_GetReplyMessage_m10897 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
 void AsyncResult_SetMessageCtrl_m10898 (AsyncResult_t3444 * __this, Object_t * ___mc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
 void AsyncResult_SetCompletedSynchronously_m10899 (AsyncResult_t3444 * __this, bool ___completed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
 Object_t * AsyncResult_EndInvoke_m10900 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
 Object_t * AsyncResult_SyncProcessMessage_m10901 (AsyncResult_t3444 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
 MonoMethodMessage_t3441 * AsyncResult_get_CallMessage_m10902 (AsyncResult_t3444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
 void AsyncResult_set_CallMessage_m10903 (AsyncResult_t3444 * __this, MonoMethodMessage_t3441 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
