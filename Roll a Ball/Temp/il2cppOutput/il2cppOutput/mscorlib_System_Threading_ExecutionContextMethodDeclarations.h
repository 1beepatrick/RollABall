#pragma once

// System.Threading.ExecutionContext
struct ExecutionContext_t3440;
// System.Security.SecurityContext
struct SecurityContext_t3577;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
 void ExecutionContext__ctor_m11893 (ExecutionContext_t3440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
 void ExecutionContext__ctor_m11894 (ExecutionContext_t3440 * __this, ExecutionContext_t3440 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext__ctor_m11895 (ExecutionContext_t3440 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
 ExecutionContext_t3440 * ExecutionContext_Capture_m11896 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext_GetObjectData_m11897 (ExecutionContext_t3440 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
 SecurityContext_t3577 * ExecutionContext_get_SecurityContext_m11898 (ExecutionContext_t3440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
 void ExecutionContext_set_SecurityContext_m11899 (ExecutionContext_t3440 * __this, SecurityContext_t3577 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
 bool ExecutionContext_get_FlowSuppressed_m11900 (ExecutionContext_t3440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
 bool ExecutionContext_IsFlowSuppressed_m11901 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
