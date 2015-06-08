#pragma once

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3647;
// System.Delegate
struct Delegate_t352;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m12375 (DelegateEntry_t3647 * __this, Delegate_t352 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t352 * DelegateEntry_DeserializeDelegate_m12376 (DelegateEntry_t3647 * __this, SerializationInfo_t2166 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
