#pragma once

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1786;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t10189;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
 void Task_1__ctor_m73095 (Task_1_t1786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
 uint32_t Task_1_get_Result_m73096 (Task_1_t1786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73097 (Task_1_t1786 * __this, Action_1_t10189 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
 void Task_1_RunContinuations_m73098 (Task_1_t1786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
 bool Task_1_TrySetResult_m73099 (Task_1_t1786 * __this, uint32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73100 (Task_1_t1786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73101 (Task_1_t1786 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
