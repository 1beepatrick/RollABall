#pragma once

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1785;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t10174;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
 void Task_1__ctor_m73023 (Task_1_t1785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
 uint16_t Task_1_get_Result_m73024 (Task_1_t1785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m73025 (Task_1_t1785 * __this, Action_1_t10174 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
 void Task_1_RunContinuations_m73026 (Task_1_t1785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
 bool Task_1_TrySetResult_m73027 (Task_1_t1785 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m73028 (Task_1_t1785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m73029 (Task_1_t1785 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
