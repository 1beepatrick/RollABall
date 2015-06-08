﻿#pragma once

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t442;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t1776;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.String>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_8MethodDeclarations.h"
#define Task_1__ctor_m20807(__this, method) (void)Task_1__ctor_m14554_gshared((Task_1_t598 *)__this, method)
// T System.Threading.Tasks.Task`1<System.String>::get_Result()
#define Task_1_get_Result_m4048(__this, method) (String_t*)Task_1_get_Result_m14555_gshared((Task_1_t598 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m20808(__this, ___continuation, method) (Task_t438 *)Task_1_ContinueWith_m14557_gshared((Task_1_t598 *)__this, (Action_1_t824 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.String>::RunContinuations()
#define Task_1_RunContinuations_m20809(__this, method) (void)Task_1_RunContinuations_m14559_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetResult(T)
#define Task_1_TrySetResult_m20810(__this, ___result, method) (bool)Task_1_TrySetResult_m14561_gshared((Task_1_t598 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetCanceled()
#define Task_1_TrySetCanceled_m20811(__this, method) (bool)Task_1_TrySetCanceled_m14563_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m20812(__this, ___exception, method) (bool)Task_1_TrySetException_m14565_gshared((Task_1_t598 *)__this, (AggregateException_t701 *)___exception, method)
