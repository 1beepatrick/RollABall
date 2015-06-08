#pragma once

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t437;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5081;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
 void Task_1__ctor_m20858 (Task_1_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
 bool Task_1_get_Result_m3196 (Task_1_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m20859 (Task_1_t437 * __this, Action_1_t5081 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
 void Task_1_RunContinuations_m20860 (Task_1_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
 bool Task_1_TrySetResult_m20861 (Task_1_t437 * __this, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m20862 (Task_1_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m20863 (Task_1_t437 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
