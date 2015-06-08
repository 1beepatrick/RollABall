#pragma once

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1783;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t10144;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
 void Task_1__ctor_m72879 (Task_1_t1783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
 int8_t Task_1_get_Result_m72880 (Task_1_t1783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m72881 (Task_1_t1783 * __this, Action_1_t10144 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
 void Task_1_RunContinuations_m72882 (Task_1_t1783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
 bool Task_1_TrySetResult_m72883 (Task_1_t1783 * __this, int8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m72884 (Task_1_t1783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m72885 (Task_1_t1783 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
