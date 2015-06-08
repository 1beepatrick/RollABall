#pragma once

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t429;
// System.Exception
struct Exception_t35;

// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
 ExceptionDispatchInfo_t429 * ExceptionDispatchInfo_Capture_m2096 (Object_t * __this/* static, unused */, Exception_t35 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::.ctor(System.Exception)
 void ExceptionDispatchInfo__ctor_m2097 (ExceptionDispatchInfo_t429 * __this, Exception_t35 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
 Exception_t35 * ExceptionDispatchInfo_get_SourceException_m2098 (ExceptionDispatchInfo_t429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::set_SourceException(System.Exception)
 void ExceptionDispatchInfo_set_SourceException_m2099 (ExceptionDispatchInfo_t429 * __this, Exception_t35 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
 void ExceptionDispatchInfo_Throw_m2100 (ExceptionDispatchInfo_t429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
