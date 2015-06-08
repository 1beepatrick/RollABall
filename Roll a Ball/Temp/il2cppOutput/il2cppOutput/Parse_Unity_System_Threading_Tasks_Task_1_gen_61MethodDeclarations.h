#pragma once

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1791;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t10264;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
 void Task_1__ctor_m73455 (Task_1_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
 float Task_1_get_Result_m73456 (Task_1_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73457 (Task_1_t1791 * __this, Action_1_t10264 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
 void Task_1_RunContinuations_m73458 (Task_1_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
 bool Task_1_TrySetResult_m73459 (Task_1_t1791 * __this, float ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73460 (Task_1_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73461 (Task_1_t1791 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
