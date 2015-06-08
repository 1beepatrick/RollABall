#pragma once

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1782;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t10129;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
 void Task_1__ctor_m72807 (Task_1_t1782 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
 uint8_t Task_1_get_Result_m72808 (Task_1_t1782 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m72809 (Task_1_t1782 * __this, Action_1_t10129 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
 void Task_1_RunContinuations_m72810 (Task_1_t1782 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
 bool Task_1_TrySetResult_m72811 (Task_1_t1782 * __this, uint8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m72812 (Task_1_t1782 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m72813 (Task_1_t1782 * __this, AggregateException_t701 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
