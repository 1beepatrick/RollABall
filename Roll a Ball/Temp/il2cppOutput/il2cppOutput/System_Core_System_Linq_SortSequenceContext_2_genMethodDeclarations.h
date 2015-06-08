#pragma once

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t5216;
// System.Func`2<System.Object,System.Object>
struct Func_2_t549;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5213;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5215;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
 void SortSequenceContext_2__ctor_m21877_gshared (SortSequenceContext_2_t5216 * __this, Func_2_t549 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t5215 * ___child_context, MethodInfo* method);
#define SortSequenceContext_2__ctor_m21877(__this, ___selector, ___comparer, ___direction, ___child_context, method) (void)SortSequenceContext_2__ctor_m21877_gshared((SortSequenceContext_2_t5216 *)__this, (Func_2_t549 *)___selector, (Object_t*)___comparer, (int32_t)___direction, (SortContext_1_t5215 *)___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
 void SortSequenceContext_2_Initialize_m21878_gshared (SortSequenceContext_2_t5216 * __this, ObjectU5BU5D_t315* ___elements, MethodInfo* method);
#define SortSequenceContext_2_Initialize_m21878(__this, ___elements, method) (void)SortSequenceContext_2_Initialize_m21878_gshared((SortSequenceContext_2_t5216 *)__this, (ObjectU5BU5D_t315*)___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
 int32_t SortSequenceContext_2_Compare_m21879_gshared (SortSequenceContext_2_t5216 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define SortSequenceContext_2_Compare_m21879(__this, ___first_index, ___second_index, method) (int32_t)SortSequenceContext_2_Compare_m21879_gshared((SortSequenceContext_2_t5216 *)__this, (int32_t)___first_index, (int32_t)___second_index, method)
