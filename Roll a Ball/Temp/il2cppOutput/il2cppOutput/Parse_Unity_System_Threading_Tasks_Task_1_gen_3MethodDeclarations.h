﻿#pragma once

// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t556;
// System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Tuple_2_t541;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>
struct Action_1_t1007;
// System.AggregateException
struct AggregateException_t701;

// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_8MethodDeclarations.h"
#define Task_1__ctor_m14612(__this, method) (void)Task_1__ctor_m14554_gshared((Task_1_t598 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::get_Result()
#define Task_1_get_Result_m3499(__this, method) (Tuple_2_t541 *)Task_1_get_Result_m14555_gshared((Task_1_t598 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m14613(__this, ___continuation, method) (Task_t438 *)Task_1_ContinueWith_m14557_gshared((Task_1_t598 *)__this, (Action_1_t824 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::RunContinuations()
#define Task_1_RunContinuations_m14614(__this, method) (void)Task_1_RunContinuations_m14559_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetResult(T)
#define Task_1_TrySetResult_m14615(__this, ___result, method) (bool)Task_1_TrySetResult_m14561_gshared((Task_1_t598 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m14616(__this, method) (bool)Task_1_TrySetCanceled_m14563_gshared((Task_1_t598 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m14617(__this, ___exception, method) (bool)Task_1_TrySetException_m14565_gshared((Task_1_t598 *)__this, (AggregateException_t701 *)___exception, method)