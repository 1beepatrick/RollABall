#pragma once

// System.Threading.Timer/Scheduler
struct Scheduler_t3623;
// System.Threading.Timer
struct Timer_t1851;
// System.Collections.ArrayList
struct ArrayList_t2764;

// System.Void System.Threading.Timer/Scheduler::.ctor()
 void Scheduler__ctor_m11958 (Scheduler_t3623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
 void Scheduler__cctor_m11959 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
 Scheduler_t3623 * Scheduler_get_Instance_m11960 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
 void Scheduler_Remove_m11961 (Scheduler_t3623 * __this, Timer_t1851 * ___timer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
 void Scheduler_Change_m11962 (Scheduler_t3623 * __this, Timer_t1851 * ___timer, int64_t ___new_next_run, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
 void Scheduler_Add_m11963 (Scheduler_t3623 * __this, Timer_t1851 * ___timer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
 int32_t Scheduler_InternalRemove_m11964 (Scheduler_t3623 * __this, Timer_t1851 * ___timer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
 void Scheduler_SchedulerThread_m11965 (Scheduler_t3623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
 void Scheduler_ShrinkIfNeeded_m11966 (Scheduler_t3623 * __this, ArrayList_t2764 * ___list, int32_t ___initial, MethodInfo* method) IL2CPP_METHOD_ATTR;
