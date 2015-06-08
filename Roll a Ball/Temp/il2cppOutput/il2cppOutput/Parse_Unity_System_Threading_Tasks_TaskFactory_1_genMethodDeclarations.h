#pragma once

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t10373;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t748;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t598;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t749;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t10361;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
 void TaskFactory_1__ctor_m74206_gshared (TaskFactory_1_t10373 * __this, TaskScheduler_t748 * ___scheduler, CancellationToken_t436  ___cancellationToken, MethodInfo* method);
#define TaskFactory_1__ctor_m74206(__this, ___scheduler, ___cancellationToken, method) (void)TaskFactory_1__ctor_m74206_gshared((TaskFactory_1_t10373 *)__this, (TaskScheduler_t748 *)___scheduler, (CancellationToken_t436 )___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
 void TaskFactory_1__ctor_m74207_gshared (TaskFactory_1_t10373 * __this, TaskScheduler_t748 * ___scheduler, MethodInfo* method);
#define TaskFactory_1__ctor_m74207(__this, ___scheduler, method) (void)TaskFactory_1__ctor_m74207_gshared((TaskFactory_1_t10373 *)__this, (TaskScheduler_t748 *)___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
 void TaskFactory_1__ctor_m74208_gshared (TaskFactory_1_t10373 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method);
#define TaskFactory_1__ctor_m74208(__this, ___cancellationToken, method) (void)TaskFactory_1__ctor_m74208_gshared((TaskFactory_1_t10373 *)__this, (CancellationToken_t436 )___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
 void TaskFactory_1__ctor_m74209_gshared (TaskFactory_1_t10373 * __this, MethodInfo* method);
#define TaskFactory_1__ctor_m74209(__this, method) (void)TaskFactory_1__ctor_m74209_gshared((TaskFactory_1_t10373 *)__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
 TaskScheduler_t748 * TaskFactory_1_get_Scheduler_m74210_gshared (TaskFactory_1_t10373 * __this, MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m74210(__this, method) (TaskScheduler_t748 *)TaskFactory_1_get_Scheduler_m74210_gshared((TaskFactory_1_t10373 *)__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
 Task_1_t598 * TaskFactory_1_FromAsync_m74211_gshared (TaskFactory_1_t10373 * __this, Func_3_t749 * ___beginMethod, Func_2_t10361 * ___endMethod, Object_t * ___state, MethodInfo* method);
#define TaskFactory_1_FromAsync_m74211(__this, ___beginMethod, ___endMethod, ___state, method) (Task_1_t598 *)TaskFactory_1_FromAsync_m74211_gshared((TaskFactory_1_t10373 *)__this, (Func_3_t749 *)___beginMethod, (Func_2_t10361 *)___endMethod, (Object_t *)___state, method)
