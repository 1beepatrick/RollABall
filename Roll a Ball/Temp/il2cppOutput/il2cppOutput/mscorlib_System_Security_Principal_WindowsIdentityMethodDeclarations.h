#pragma once

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t3575;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WindowsIdentity__ctor_m11583 (WindowsIdentity_t3575 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.cctor()
 void WindowsIdentity__cctor_m11584 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11585 (WindowsIdentity_t3575 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WindowsIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m11586 (WindowsIdentity_t3575 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::Dispose()
 void WindowsIdentity_Dispose_m11587 (WindowsIdentity_t3575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Principal.WindowsIdentity::GetCurrentToken()
 IntPtr_t34 WindowsIdentity_GetCurrentToken_m11588 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::GetTokenName(System.IntPtr)
 String_t* WindowsIdentity_GetTokenName_m11589 (Object_t * __this/* static, unused */, IntPtr_t34 ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
