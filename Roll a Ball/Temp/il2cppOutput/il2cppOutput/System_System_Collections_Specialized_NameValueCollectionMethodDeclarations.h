﻿#pragma once

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2767;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2764;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
 void NameValueCollection__ctor_m6139 (NameValueCollection_t2767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameValueCollection__ctor_m6140 (NameValueCollection_t2767 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
 void NameValueCollection_Add_m6141 (NameValueCollection_t2767 * __this, String_t* ___name, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
 String_t* NameValueCollection_Get_m6142 (NameValueCollection_t2767 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
 String_t* NameValueCollection_AsSingleString_m6143 (Object_t * __this/* static, unused */, ArrayList_t2764 * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
 String_t* NameValueCollection_GetKey_m6144 (NameValueCollection_t2767 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
 void NameValueCollection_InvalidateCachedArrays_m6145 (NameValueCollection_t2767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
