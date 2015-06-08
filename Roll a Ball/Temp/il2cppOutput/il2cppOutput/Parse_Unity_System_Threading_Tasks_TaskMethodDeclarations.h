#pragma once

// System.Threading.Tasks.Task
struct Task_t438;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t721;
// System.AggregateException
struct AggregateException_t701;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t470;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t525;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t722;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t723;
// System.Action
struct Action_t696;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Tasks.Task::.ctor()
 void Task__ctor_m2957 (Task_t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
 TaskFactory_t721 * Task_get_Factory_m2958 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
 AggregateException_t701 * Task_get_Exception_m2959 (Task_t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
 bool Task_get_IsCanceled_m2960 (Task_t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
 bool Task_get_IsCompleted_m2961 (Task_t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
 bool Task_get_IsFaulted_m2962 (Task_t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
 void Task_Wait_m2963 (Task_t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
 Task_t438 * Task_ContinueWith_m2964 (Task_t438 * __this, Action_1_t470 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
 Task_t438 * Task_ContinueWith_m2965 (Task_t438 * __this, Action_1_t470 * ___continuation, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
 Task_t438 * Task_WhenAll_m2966 (Object_t * __this/* static, unused */, TaskU5BU5D_t525* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
 Task_t438 * Task_WhenAll_m2967 (Object_t * __this/* static, unused */, Object_t* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
 Task_1_t723 * Task_WhenAny_m2968 (Object_t * __this/* static, unused */, TaskU5BU5D_t525* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
 Task_1_t723 * Task_WhenAny_m2969 (Object_t * __this/* static, unused */, Object_t* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
 Task_t438 * Task_Run_m2970 (Object_t * __this/* static, unused */, Action_t696 * ___toRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.TimeSpan)
 Task_t438 * Task_Delay_m2971 (Object_t * __this/* static, unused */, TimeSpan_t724  ___timespan, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
 void Task__cctor_m2972 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Tasks.Task::<.cctor>b__22()
 int32_t Task_U3C_cctorU3Eb__22_m2973 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::<.cctor>b__23(System.Action)
 void Task_U3C_cctorU3Eb__23_m2974 (Object_t * __this/* static, unused */, Action_t696 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
