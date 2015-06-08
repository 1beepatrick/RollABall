#pragma once

// System.Reflection.FieldInfo
struct FieldInfo_t1161;
// System.Type
struct Type_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3339;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2255;
// System.Globalization.CultureInfo
struct CultureInfo_t906;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.FieldInfo::.ctor()
 void FieldInfo__ctor_m10603 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
 int32_t FieldInfo_get_MemberType_m10604 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
 bool FieldInfo_get_IsLiteral_m10605 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
 bool FieldInfo_get_IsStatic_m5658 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
 bool FieldInfo_get_IsNotSerialized_m10606 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
 void FieldInfo_SetValue_m10607 (FieldInfo_t1161 * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
 FieldInfo_t1161 * FieldInfo_internal_from_handle_type_m10608 (Object_t * __this/* static, unused */, IntPtr_t34 ___field_handle, IntPtr_t34 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
 FieldInfo_t1161 * FieldInfo_GetFieldFromHandle_m3942 (Object_t * __this/* static, unused */, RuntimeFieldHandle_t3144  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
 int32_t FieldInfo_GetFieldOffset_m10609 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
 UnmanagedMarshal_t3339 * FieldInfo_GetUnmanagedMarshal_m10610 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
 UnmanagedMarshal_t3339 * FieldInfo_get_UMarshal_m10611 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t315* FieldInfo_GetPseudoCustomAttributes_m10612 (FieldInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
