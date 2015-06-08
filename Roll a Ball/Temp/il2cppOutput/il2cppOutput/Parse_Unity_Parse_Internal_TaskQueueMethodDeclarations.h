#pragma once

// Parse.Internal.TaskQueue
struct TaskQueue_t529;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Threading.Tasks.Task Parse.Internal.TaskQueue::GetTaskToAwait(System.Threading.CancellationToken)
 Task_t438 * TaskQueue_GetTaskToAwait_m2320 (TaskQueue_t529 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.TaskQueue::get_Mutex()
 Object_t * TaskQueue_get_Mutex_m2321 (TaskQueue_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::.ctor()
 void TaskQueue__ctor_m2322 (TaskQueue_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::<GetTaskToAwait>b__0(System.Threading.Tasks.Task)
 void TaskQueue_U3CGetTaskToAwaitU3Eb__0_m2323 (Object_t * __this/* static, unused */, Task_t438 * ___task, MethodInfo* method) IL2CPP_METHOD_ATTR;
