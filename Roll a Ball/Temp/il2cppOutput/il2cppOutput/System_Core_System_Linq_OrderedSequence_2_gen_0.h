#pragma once
// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t5212;
// System.Func`2<System.Object,System.IComparable>
struct Func_2_t485;
// System.Collections.Generic.IComparer`1<System.IComparable>
struct IComparer_1_t5219;
// System.Linq.OrderedEnumerable`1<System.Object>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<System.Object,System.IComparable>
struct OrderedSequence_2_t5220  : public OrderedEnumerable_1_t5212
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.IComparable>::parent
	OrderedEnumerable_1_t5212 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.Object,System.IComparable>::selector
	Func_2_t485 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.Object,System.IComparable>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.Object,System.IComparable>::direction
	int32_t ___direction_4;
};
