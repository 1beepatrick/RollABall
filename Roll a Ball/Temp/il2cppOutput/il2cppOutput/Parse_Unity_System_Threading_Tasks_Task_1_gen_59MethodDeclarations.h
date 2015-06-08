#pragma once

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1790;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t10249;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
 void Task_1__ctor_m73383 (Task_1_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
 double Task_1_get_Result_m73384 (Task_1_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73385 (Task_1_t1790 * __this, Action_1_t10249 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
 void Task_1_RunContinuations_m73386 (Task_1_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
 bool Task_1_TrySetResult_m73387 (Task_1_t1790 * __this, double ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73388 (Task_1_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73389 (Task_1_t1790 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
