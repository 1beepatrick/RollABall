#pragma once

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1789;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t10234;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
 void Task_1__ctor_m73311 (Task_1_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
 uint16_t Task_1_get_Result_m73312 (Task_1_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73313 (Task_1_t1789 * __this, Action_1_t10234 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
 void Task_1_RunContinuations_m73314 (Task_1_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
 bool Task_1_TrySetResult_m73315 (Task_1_t1789 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73316 (Task_1_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73317 (Task_1_t1789 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
