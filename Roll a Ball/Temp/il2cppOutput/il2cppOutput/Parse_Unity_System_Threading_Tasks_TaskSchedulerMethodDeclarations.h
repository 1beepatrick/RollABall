#pragma once

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t748;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t752;
// System.Action
struct Action_t696;

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
 void TaskScheduler__ctor_m2994 (TaskScheduler_t748 * __this, SynchronizationContext_t752 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
 void TaskScheduler_Post_m2995 (TaskScheduler_t748 * __this, Action_t696 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
 TaskScheduler_t748 * TaskScheduler_FromCurrentSynchronizationContext_m2996 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
 void TaskScheduler__cctor_m2997 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
