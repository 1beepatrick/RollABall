#pragma once

// Parse.Internal.InternalExtensions
struct InternalExtensions_t475;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t476;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t470;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t473;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t472;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
 Task_t438 * InternalExtensions_Safe_m2148 (Object_t * __this/* static, unused */, Task_t438 * ___task, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
 Task_t438 * InternalExtensions_PartialAsync_m2149 (Object_t * __this/* static, unused */, Object_t * ___self, PartialAccessor_1_t476 * ___partial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
 Task_t438 * InternalExtensions_PartialAsync_m2150 (Object_t * __this/* static, unused */, PartialAccessor_1_t476 * ___partial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
 Task_t438 * InternalExtensions_OnSuccess_m2151 (Object_t * __this/* static, unused */, Task_t438 * ___task, Action_1_t470 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
 Task_t438 * InternalExtensions_WhileAsync_m2152 (Object_t * __this/* static, unused */, Func_1_t473 * ___predicate, Func_1_t472 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
