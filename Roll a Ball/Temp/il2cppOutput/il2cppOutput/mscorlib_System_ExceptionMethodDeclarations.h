#pragma once

// System.Exception
struct Exception_t35;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Text.StringBuilder
struct StringBuilder_t295;
// System.Reflection.MethodBase
struct MethodBase_t935;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
 void Exception__ctor_m4111 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
 void Exception__ctor_m5373 (Exception_t35 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception__ctor_m5409 (Exception_t35 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
 void Exception__ctor_m3506 (Exception_t35 * __this, String_t* ___message, Exception_t35 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
 Exception_t35 * Exception_get_InnerException_m3509 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
 void Exception_set_HResult_m5408 (Exception_t35 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
 String_t* Exception_get_ClassName_m9065 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
 String_t* Exception_get_Message_m1717 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
 String_t* Exception_get_Source_m3510 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
 String_t* Exception_get_StackTrace_m3511 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception_GetObjectData_m3508 (Exception_t35 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
 String_t* Exception_ToString_m3507 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
 void Exception_GetFullNameForStackTrace_m9066 (Exception_t35 * __this, StringBuilder_t295 * ___sb, MethodBase_t935 * ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
 Type_t * Exception_GetType_m3512 (Exception_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
