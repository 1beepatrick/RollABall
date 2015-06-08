#pragma once

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t598;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t824;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
 void Task_1__ctor_m14554_gshared (Task_1_t598 * __this, MethodInfo* method);
#define Task_1__ctor_m14554(__this, method) (void)Task_1__ctor_m14554_gshared((Task_1_t598 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
 Object_t * Task_1_get_Result_m14555_gshared (Task_1_t598 * __this, MethodInfo* method);
#define Task_1_get_Result_m14555(__this, method) (Object_t *)Task_1_get_Result_m14555_gshared((Task_1_t598 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t438 * Task_1_ContinueWith_m14557_gshared (Task_1_t598 * __this, Action_1_t824 * ___continuation, MethodInfo* method);
#define Task_1_ContinueWith_m14557(__this, ___continuation, method) (Task_t438 *)Task_1_ContinueWith_m14557_gshared((Task_1_t598 *)__this, (Action_1_t824 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
 void Task_1_RunContinuations_m14559_gshared (Task_1_t598 * __this, MethodInfo* method);
#define Task_1_RunContinuations_m14559(__this, method) (void)Task_1_RunContinuations_m14559_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
 bool Task_1_TrySetResult_m14561_gshared (Task_1_t598 * __this, Object_t * ___result, MethodInfo* method);
#define Task_1_TrySetResult_m14561(__this, ___result, method) (bool)Task_1_TrySetResult_m14561_gshared((Task_1_t598 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m14563_gshared (Task_1_t598 * __this, MethodInfo* method);
#define Task_1_TrySetCanceled_m14563(__this, method) (bool)Task_1_TrySetCanceled_m14563_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m14565_gshared (Task_1_t598 * __this, AggregateException_t701 * ___exception, MethodInfo* method);
#define Task_1_TrySetException_m14565(__this, ___exception, method) (bool)Task_1_TrySetException_m14565_gshared((Task_1_t598 *)__this, (AggregateException_t701 *)___exception, method)
