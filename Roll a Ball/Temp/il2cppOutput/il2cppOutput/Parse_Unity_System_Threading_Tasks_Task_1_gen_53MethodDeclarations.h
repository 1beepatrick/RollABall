#pragma once

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1787;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t10204;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
 void Task_1__ctor_m73167 (Task_1_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
 int64_t Task_1_get_Result_m73168 (Task_1_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73169 (Task_1_t1787 * __this, Action_1_t10204 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
 void Task_1_RunContinuations_m73170 (Task_1_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
 bool Task_1_TrySetResult_m73171 (Task_1_t1787 * __this, int64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73172 (Task_1_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73173 (Task_1_t1787 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
