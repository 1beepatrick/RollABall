#pragma once

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2090;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t112;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
 void CameraCallback__ctor_m4863 (CameraCallback_t2090 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
 void CameraCallback_Invoke_m4864 (CameraCallback_t2090 * __this, Camera_t112 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
 Object_t * CameraCallback_BeginInvoke_m4865 (CameraCallback_t2090 * __this, Camera_t112 * ___cam, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
 void CameraCallback_EndInvoke_m4866 (CameraCallback_t2090 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
