#pragma once

// System.Collections.ArrayList
struct ArrayList_t2764;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1193;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t30;
// System.Collections.IComparer
struct IComparer_t2759;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
 void ArrayList__ctor_m7053 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
 void ArrayList__ctor_m7095 (ArrayList_t2764 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
 void ArrayList__ctor_m7238 (ArrayList_t2764 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
 void ArrayList__ctor_m9676 (ArrayList_t2764 * __this, ObjectU5BU5D_t315* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
 void ArrayList__cctor_m9677 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
 Object_t * ArrayList_get_Item_m7051 (ArrayList_t2764 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
 void ArrayList_set_Item_m7313 (ArrayList_t2764 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
 int32_t ArrayList_get_Count_m7049 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
 int32_t ArrayList_get_Capacity_m9678 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
 void ArrayList_set_Capacity_m9679 (ArrayList_t2764 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
 bool ArrayList_get_IsFixedSize_m8265 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
 bool ArrayList_get_IsReadOnly_m8266 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
 bool ArrayList_get_IsSynchronized_m7233 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
 Object_t * ArrayList_get_SyncRoot_m7234 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
 void ArrayList_EnsureCapacity_m9680 (ArrayList_t2764 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
 void ArrayList_Shift_m9681 (ArrayList_t2764 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
 int32_t ArrayList_Add_m7063 (ArrayList_t2764 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
 void ArrayList_Clear_m7236 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
 bool ArrayList_Contains_m8267 (ArrayList_t2764 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
 int32_t ArrayList_IndexOf_m8268 (ArrayList_t2764 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
 int32_t ArrayList_IndexOf_m9682 (ArrayList_t2764 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayList_IndexOf_m9683 (ArrayList_t2764 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
 void ArrayList_Insert_m7215 (ArrayList_t2764 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayList_InsertRange_m9684 (ArrayList_t2764 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
 void ArrayList_Remove_m8238 (ArrayList_t2764 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
 void ArrayList_RemoveAt_m7320 (ArrayList_t2764 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
 void ArrayList_CopyTo_m7309 (ArrayList_t2764 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
 void ArrayList_CopyTo_m7235 (ArrayList_t2764 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayList_CopyTo_m9685 (ArrayList_t2764 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
 Object_t * ArrayList_GetEnumerator_m7054 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
 void ArrayList_AddRange_m7184 (ArrayList_t2764 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
 void ArrayList_Sort_m7319 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
 void ArrayList_Sort_m9686 (ArrayList_t2764 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
 ObjectU5BU5D_t315* ArrayList_ToArray_m9687 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
 Array_t * ArrayList_ToArray_m7216 (ArrayList_t2764 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
 Object_t * ArrayList_Clone_m9688 (ArrayList_t2764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
 void ArrayList_ThrowNewArgumentOutOfRangeException_m9689 (Object_t * __this/* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
 ArrayList_t2764 * ArrayList_Synchronized_m9690 (Object_t * __this/* static, unused */, ArrayList_t2764 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
 ArrayList_t2764 * ArrayList_ReadOnly_m8219 (Object_t * __this/* static, unused */, ArrayList_t2764 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
