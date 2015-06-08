﻿#pragma once

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t2888;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t2887;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t30;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
 void IntervalCollection__ctor_m6716 (IntervalCollection_t2888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
 Interval_t2884  IntervalCollection_get_Item_m6717 (IntervalCollection_t2888 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
 void IntervalCollection_Add_m6718 (IntervalCollection_t2888 * __this, Interval_t2884  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
 void IntervalCollection_Normalize_m6719 (IntervalCollection_t2888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
 IntervalCollection_t2888 * IntervalCollection_GetMetaCollection_m6720 (IntervalCollection_t2888 * __this, CostDelegate_t2887 * ___cost_del, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
 void IntervalCollection_Optimize_m6721 (IntervalCollection_t2888 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t2888 * ___meta, CostDelegate_t2887 * ___cost_del, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
 int32_t IntervalCollection_get_Count_m6722 (IntervalCollection_t2888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
 bool IntervalCollection_get_IsSynchronized_m6723 (IntervalCollection_t2888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
 Object_t * IntervalCollection_get_SyncRoot_m6724 (IntervalCollection_t2888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
 void IntervalCollection_CopyTo_m6725 (IntervalCollection_t2888 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
 Object_t * IntervalCollection_GetEnumerator_m6726 (IntervalCollection_t2888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
