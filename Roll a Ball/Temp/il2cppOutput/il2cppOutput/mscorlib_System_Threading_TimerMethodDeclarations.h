#pragma once

// System.Threading.Timer
struct Timer_t1851;
// System.Threading.TimerCallback
struct TimerCallback_t1850;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback)
 void Timer__ctor_m4155 (Timer_t1851 * __this, TimerCallback_t1850 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
 void Timer__cctor_m11967 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
 void Timer_Init_m11968 (Timer_t1851 * __this, TimerCallback_t1850 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
 bool Timer_Change_m4157 (Timer_t1851 * __this, TimeSpan_t724  ___dueTime, TimeSpan_t724  ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
 void Timer_Dispose_m11969 (Timer_t1851 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
 bool Timer_Change_m11970 (Timer_t1851 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, MethodInfo* method) IL2CPP_METHOD_ATTR;
