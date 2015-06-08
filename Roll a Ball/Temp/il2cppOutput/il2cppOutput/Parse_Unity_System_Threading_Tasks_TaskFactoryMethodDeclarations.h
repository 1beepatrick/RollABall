#pragma once

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t721;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t748;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t749;
// System.Action`1<System.IAsyncResult>
struct Action_1_t741;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t525;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t745;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptions.h"
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptions.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
 void TaskFactory__ctor_m2984 (TaskFactory_t721 * __this, TaskScheduler_t748 * ___scheduler, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler)
 void TaskFactory__ctor_m2985 (TaskFactory_t721 * __this, TaskScheduler_t748 * ___scheduler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken)
 void TaskFactory__ctor_m2986 (TaskFactory_t721 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
 void TaskFactory__ctor_m2987 (TaskFactory_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
 void TaskFactory__ctor_m2988 (TaskFactory_t721 * __this, CancellationToken_t436  ___cancellationToken, int32_t ___creationOptions, int32_t ___continuationOptions, TaskScheduler_t748 * ___scheduler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
 TaskScheduler_t748 * TaskFactory_get_Scheduler_m2989 (TaskFactory_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
 Task_t438 * TaskFactory_FromAsync_m2990 (TaskFactory_t721 * __this, Func_3_t749 * ___beginMethod, Action_1_t741 * ___endMethod, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
 Task_t438 * TaskFactory_ContinueWhenAll_m2991 (TaskFactory_t721 * __this, TaskU5BU5D_t525* ___tasks, Action_1_t745 * ___continuationAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
