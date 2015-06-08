#pragma once

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t3437;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t3426;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3427;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
 void SynchronizationAttribute__ctor_m10877 (SynchronizationAttribute_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
 void SynchronizationAttribute__ctor_m10878 (SynchronizationAttribute_t3437 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
 void SynchronizationAttribute_set_Locked_m10879 (SynchronizationAttribute_t3437 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
 void SynchronizationAttribute_ReleaseLock_m10880 (SynchronizationAttribute_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void SynchronizationAttribute_GetPropertiesForNewContext_m10881 (SynchronizationAttribute_t3437 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool SynchronizationAttribute_IsContextOK_m10882 (SynchronizationAttribute_t3437 * __this, Context_t3427 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
 void SynchronizationAttribute_ExitContext_m10883 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
 void SynchronizationAttribute_EnterContext_m10884 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
