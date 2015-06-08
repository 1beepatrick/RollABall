#pragma once

// System.ArgumentException
struct ArgumentException_t392;
// System.String
struct String_t;
// System.Exception
struct Exception_t35;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
 void ArgumentException__ctor_m5657 (ArgumentException_t392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
 void ArgumentException__ctor_m1974 (ArgumentException_t392 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
 void ArgumentException__ctor_m7214 (ArgumentException_t392 * __this, String_t* ___message, Exception_t35 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
 void ArgumentException__ctor_m3744 (ArgumentException_t392 * __this, String_t* ___message, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
 void ArgumentException__ctor_m12006 (ArgumentException_t392 * __this, String_t* ___message, String_t* ___paramName, Exception_t35 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException__ctor_m12007 (ArgumentException_t392 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
 String_t* ArgumentException_get_ParamName_m12008 (ArgumentException_t392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
 String_t* ArgumentException_get_Message_m12009 (ArgumentException_t392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException_GetObjectData_m12010 (ArgumentException_t392 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
