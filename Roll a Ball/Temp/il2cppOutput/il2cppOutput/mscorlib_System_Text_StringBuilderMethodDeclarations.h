#pragma once

// System.Text.StringBuilder
struct StringBuilder_t295;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Char[]
struct CharU5BU5D_t200;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.IFormatProvider
struct IFormatProvider_t3106;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m11772 (StringBuilder_t295 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m11773 (StringBuilder_t295 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
 void StringBuilder__ctor_m1347 (StringBuilder_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
 void StringBuilder__ctor_m5395 (StringBuilder_t295 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
 void StringBuilder__ctor_m1463 (StringBuilder_t295 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
 void StringBuilder__ctor_m7064 (StringBuilder_t295 * __this, String_t* ___value, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder__ctor_m11774 (StringBuilder_t295 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m11775 (StringBuilder_t295 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
 int32_t StringBuilder_get_Capacity_m11776 (StringBuilder_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
 void StringBuilder_set_Capacity_m11777 (StringBuilder_t295 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
 int32_t StringBuilder_get_Length_m3273 (StringBuilder_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
 void StringBuilder_set_Length_m7342 (StringBuilder_t295 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
 uint16_t StringBuilder_get_Chars_m11778 (StringBuilder_t295 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
 void StringBuilder_set_Chars_m3258 (StringBuilder_t295 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
 String_t* StringBuilder_ToString_m1350 (StringBuilder_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
 String_t* StringBuilder_ToString_m11779 (StringBuilder_t295 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
 StringBuilder_t295 * StringBuilder_Remove_m3257 (StringBuilder_t295 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
 StringBuilder_t295 * StringBuilder_Replace_m11780 (StringBuilder_t295 * __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
 StringBuilder_t295 * StringBuilder_Replace_m11781 (StringBuilder_t295 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
 StringBuilder_t295 * StringBuilder_Append_m7344 (StringBuilder_t295 * __this, CharU5BU5D_t200* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
 StringBuilder_t295 * StringBuilder_Append_m3271 (StringBuilder_t295 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
 StringBuilder_t295 * StringBuilder_Append_m7139 (StringBuilder_t295 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
 StringBuilder_t295 * StringBuilder_Append_m7079 (StringBuilder_t295 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
 StringBuilder_t295 * StringBuilder_Append_m5712 (StringBuilder_t295 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
 StringBuilder_t295 * StringBuilder_Append_m1796 (StringBuilder_t295 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
 StringBuilder_t295 * StringBuilder_Append_m11782 (StringBuilder_t295 * __this, uint16_t ___value, int32_t ___repeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
 StringBuilder_t295 * StringBuilder_Append_m11783 (StringBuilder_t295 * __this, CharU5BU5D_t200* ___value, int32_t ___startIndex, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
 StringBuilder_t295 * StringBuilder_Append_m7254 (StringBuilder_t295 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
 StringBuilder_t295 * StringBuilder_AppendLine_m1349 (StringBuilder_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
 StringBuilder_t295 * StringBuilder_AppendLine_m1348 (StringBuilder_t295 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
 StringBuilder_t295 * StringBuilder_AppendFormat_m5713 (StringBuilder_t295 * __this, String_t* ___format, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t295 * StringBuilder_AppendFormat_m11784 (StringBuilder_t295 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t315* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
 StringBuilder_t295 * StringBuilder_AppendFormat_m7078 (StringBuilder_t295 * __this, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
 StringBuilder_t295 * StringBuilder_AppendFormat_m7165 (StringBuilder_t295 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
 StringBuilder_t295 * StringBuilder_AppendFormat_m7168 (StringBuilder_t295 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
 StringBuilder_t295 * StringBuilder_Insert_m11785 (StringBuilder_t295 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
 StringBuilder_t295 * StringBuilder_Insert_m11786 (StringBuilder_t295 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
 StringBuilder_t295 * StringBuilder_Insert_m11787 (StringBuilder_t295 * __this, int32_t ___index, String_t* ___value, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
 void StringBuilder_InternalEnsureCapacity_m11788 (StringBuilder_t295 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
