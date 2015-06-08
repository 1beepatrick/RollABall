#pragma once

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1788;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t10219;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
 void Task_1__ctor_m73239 (Task_1_t1788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
 uint64_t Task_1_get_Result_m73240 (Task_1_t1788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73241 (Task_1_t1788 * __this, Action_1_t10219 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
 void Task_1_RunContinuations_m73242 (Task_1_t1788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
 bool Task_1_TrySetResult_m73243 (Task_1_t1788 * __this, uint64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73244 (Task_1_t1788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73245 (Task_1_t1788 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
