#pragma once
// System.Threading.SynchronizationContext
struct SynchronizationContext_t752;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t748  : public Object_t
{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t752 * ___context_1;
};
struct TaskScheduler_t748_StaticFields{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t752 * ___defaultContext_0;
};
