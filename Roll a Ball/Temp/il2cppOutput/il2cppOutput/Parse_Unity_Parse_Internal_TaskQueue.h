﻿#pragma once
// System.Threading.Tasks.Task
struct Task_t438;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t470;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.TaskQueue
struct TaskQueue_t529  : public Object_t
{
	// System.Threading.Tasks.Task Parse.Internal.TaskQueue::tail
	Task_t438 * ___tail_0;
	// System.Object Parse.Internal.TaskQueue::mutex
	Object_t * ___mutex_1;
};
struct TaskQueue_t529_StaticFields{
	// System.Action`1<System.Threading.Tasks.Task> Parse.Internal.TaskQueue::CS$<>9__CachedAnonymousMethodDelegate1
	Action_1_t470 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1_2;
};
