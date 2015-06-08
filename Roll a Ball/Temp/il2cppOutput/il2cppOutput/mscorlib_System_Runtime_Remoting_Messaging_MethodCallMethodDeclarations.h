#pragma once

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t3445;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3451;
// System.Reflection.MethodBase
struct MethodBase_t935;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t1192;
// System.Type[]
struct TypeU5BU5D_t508;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3452;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
 void MethodCall__ctor_m10932 (MethodCall_t3445 * __this, HeaderU5BU5D_t3452* ___h1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall__ctor_m10933 (MethodCall_t3445 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
 void MethodCall__ctor_m10934 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10935 (MethodCall_t3445 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
 void MethodCall_InitMethodProperty_m10936 (MethodCall_t3445 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall_GetObjectData_m10937 (MethodCall_t3445 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
 ObjectU5BU5D_t315* MethodCall_get_Args_m10938 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
 LogicalCallContext_t3451 * MethodCall_get_LogicalCallContext_m10939 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
 MethodBase_t935 * MethodCall_get_MethodBase_m10940 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
 String_t* MethodCall_get_MethodName_m10941 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
 Object_t * MethodCall_get_MethodSignature_m10942 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
 Object_t * MethodCall_get_Properties_m10943 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
 void MethodCall_InitDictionary_m10944 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
 String_t* MethodCall_get_TypeName_m10945 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
 String_t* MethodCall_get_Uri_m10946 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
 void MethodCall_set_Uri_m10947 (MethodCall_t3445 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
 void MethodCall_Init_m10948 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
 void MethodCall_ResolveMethod_m10949 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
 Type_t * MethodCall_CastTo_m10950 (MethodCall_t3445 * __this, String_t* ___clientType, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
 String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m10951 (Object_t * __this/* static, unused */, String_t* ___aqname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
 TypeU5BU5D_t508* MethodCall_get_GenericArguments_m10952 (MethodCall_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
