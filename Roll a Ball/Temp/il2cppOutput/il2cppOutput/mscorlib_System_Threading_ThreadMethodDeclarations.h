#pragma once

// System.Threading.Thread
struct Thread_t947;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3427;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.String
struct String_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t3440;
// System.Threading.ThreadStart
struct ThreadStart_t3616;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t1779;
// System.MulticastDelegate
struct MulticastDelegate_t195;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Threading.CompressedStack
struct CompressedStack_t3576;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
 void Thread__ctor_m11920 (Thread_t947 * __this, ThreadStart_t3616 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
 void Thread__ctor_m4102 (Thread_t947 * __this, ParameterizedThreadStart_t1779 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
 void Thread__cctor_m11921 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
 Context_t3427 * Thread_get_CurrentContext_m11922 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
 Thread_t947 * Thread_CurrentThread_internal_m11923 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
 Thread_t947 * Thread_get_CurrentThread_m3417 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
 int32_t Thread_GetDomainID_m11924 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
 void Thread_Sleep_internal_m11925 (Object_t * __this/* static, unused */, int32_t ___ms, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
 void Thread_Sleep_m6017 (Object_t * __this/* static, unused */, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
 IntPtr_t34 Thread_Thread_internal_m11926 (Thread_t947 * __this, MulticastDelegate_t195 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
 void Thread_Thread_init_m11927 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
 CultureInfo_t906 * Thread_GetCachedCurrentCulture_m11928 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
 ByteU5BU5D_t433* Thread_GetSerializedCurrentCulture_m11929 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentCulture_m11930 (Thread_t947 * __this, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
 CultureInfo_t906 * Thread_GetCachedCurrentUICulture_m11931 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
 ByteU5BU5D_t433* Thread_GetSerializedCurrentUICulture_m11932 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentUICulture_m11933 (Thread_t947 * __this, CultureInfo_t906 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
 CultureInfo_t906 * Thread_get_CurrentCulture_m11934 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
 CultureInfo_t906 * Thread_get_CurrentUICulture_m11935 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
 void Thread_set_IsBackground_m11936 (Thread_t947 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
 void Thread_SetName_internal_m11937 (Thread_t947 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
 void Thread_set_Name_m11938 (Thread_t947 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SpinWait_nop()
 void Thread_SpinWait_nop_m11939 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SpinWait(System.Int32)
 void Thread_SpinWait_m6016 (Object_t * __this/* static, unused */, int32_t ___iterations, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
 void Thread_Start_m4103 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
 void Thread_Thread_free_internal_m11940 (Thread_t947 * __this, IntPtr_t34 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
 void Thread_Finalize_m11941 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
 void Thread_SetState_m11942 (Thread_t947 * __this, int32_t ___set, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
 void Thread_ClrState_m11943 (Thread_t947 * __this, int32_t ___clr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
 int32_t Thread_GetNewManagedId_m11944 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
 int32_t Thread_GetNewManagedId_internal_m11945 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
 ExecutionContext_t3440 * Thread_get_ExecutionContext_m11946 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
 int32_t Thread_get_ManagedThreadId_m3418 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
 int32_t Thread_GetHashCode_m11947 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
 CompressedStack_t3576 * Thread_GetCompressedStack_m11948 (Thread_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
