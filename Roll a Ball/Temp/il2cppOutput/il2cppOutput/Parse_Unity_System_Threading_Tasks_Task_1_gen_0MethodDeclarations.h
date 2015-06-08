#pragma once

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t439;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t4337;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
 void Task_1__ctor_m15223 (Task_1_t439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
 int32_t Task_1_get_Result_m3020 (Task_1_t439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m15224 (Task_1_t439 * __this, Action_1_t4337 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
 void Task_1_RunContinuations_m15225 (Task_1_t439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
 bool Task_1_TrySetResult_m15226 (Task_1_t439 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m15227 (Task_1_t439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m15228 (Task_1_t439 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
