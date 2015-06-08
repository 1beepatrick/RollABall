#pragma once

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t2753;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1193;
// System.Collections.IComparer
struct IComparer_t2759;
// System.Collections.IEnumerator
struct IEnumerator_t30;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2755;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1772;

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
 void ListDictionary__ctor_m6093 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
 void ListDictionary__ctor_m6094 (ListDictionary_t2753 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m6095 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
 DictionaryNode_t2755 * ListDictionary_FindEntry_m6096 (ListDictionary_t2753 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
 DictionaryNode_t2755 * ListDictionary_FindEntry_m6097 (ListDictionary_t2753 * __this, Object_t * ___key, DictionaryNode_t2755 ** ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
 void ListDictionary_AddImpl_m6098 (ListDictionary_t2753 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t2755 * ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
 int32_t ListDictionary_get_Count_m6099 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
 bool ListDictionary_get_IsSynchronized_m6100 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
 Object_t * ListDictionary_get_SyncRoot_m6101 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
 void ListDictionary_CopyTo_m6102 (ListDictionary_t2753 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
 Object_t * ListDictionary_get_Item_m6103 (ListDictionary_t2753 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
 void ListDictionary_set_Item_m6104 (ListDictionary_t2753 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
 Object_t * ListDictionary_get_Keys_m6105 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
 void ListDictionary_Add_m6106 (ListDictionary_t2753 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
 void ListDictionary_Clear_m6107 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
 bool ListDictionary_Contains_m6108 (ListDictionary_t2753 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
 Object_t * ListDictionary_GetEnumerator_m6109 (ListDictionary_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
 void ListDictionary_Remove_m6110 (ListDictionary_t2753 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
