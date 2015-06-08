#pragma once

// System.Reflection.TypeFilter
struct TypeFilter_t3368;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
 void TypeFilter__ctor_m12801 (TypeFilter_t3368 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
 bool TypeFilter_Invoke_m12802 (TypeFilter_t3368 * __this, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
 Object_t * TypeFilter_BeginInvoke_m12803 (TypeFilter_t3368 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
 bool TypeFilter_EndInvoke_m12804 (TypeFilter_t3368 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
