﻿#pragma once

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Task_1_t5169;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t723;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>>
struct Action_1_t5170;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_8MethodDeclarations.h"
#define Task_1__ctor_m21616(__this, method) (void)Task_1__ctor_m14554_gshared((Task_1_t598 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::get_Result()
#define Task_1_get_Result_m21617(__this, method) (Task_1_t723 *)Task_1_get_Result_m14555_gshared((Task_1_t598 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m21618(__this, ___continuation, method) (Task_t438 *)Task_1_ContinueWith_m14557_gshared((Task_1_t598 *)__this, (Action_1_t824 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::RunContinuations()
#define Task_1_RunContinuations_m21619(__this, method) (void)Task_1_RunContinuations_m14559_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetResult(T)
#define Task_1_TrySetResult_m21620(__this, ___result, method) (bool)Task_1_TrySetResult_m14561_gshared((Task_1_t598 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m21621(__this, method) (bool)Task_1_TrySetCanceled_m14563_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m21622(__this, ___exception, method) (bool)Task_1_TrySetException_m14565_gshared((Task_1_t598 *)__this, (AggregateException_t701 *)___exception, method)