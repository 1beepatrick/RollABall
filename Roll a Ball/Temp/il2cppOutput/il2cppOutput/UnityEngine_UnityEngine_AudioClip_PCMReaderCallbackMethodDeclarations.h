#pragma once

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t2111;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t2110;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
 void PCMReaderCallback__ctor_m4996 (PCMReaderCallback_t2111 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
 void PCMReaderCallback_Invoke_m4997 (PCMReaderCallback_t2111 * __this, SingleU5BU5D_t2110* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
 Object_t * PCMReaderCallback_BeginInvoke_m4998 (PCMReaderCallback_t2111 * __this, SingleU5BU5D_t2110* ___data, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
 void PCMReaderCallback_EndInvoke_m4999 (PCMReaderCallback_t2111 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
