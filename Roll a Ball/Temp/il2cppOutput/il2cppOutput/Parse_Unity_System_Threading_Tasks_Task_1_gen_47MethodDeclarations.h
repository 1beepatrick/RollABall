#pragma once

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1784;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t10159;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
 void Task_1__ctor_m72951 (Task_1_t1784 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
 int16_t Task_1_get_Result_m72952 (Task_1_t1784 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m72953 (Task_1_t1784 * __this, Action_1_t10159 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
 void Task_1_RunContinuations_m72954 (Task_1_t1784 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
 bool Task_1_TrySetResult_m72955 (Task_1_t1784 * __this, int16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m72956 (Task_1_t1784 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m72957 (Task_1_t1784 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
