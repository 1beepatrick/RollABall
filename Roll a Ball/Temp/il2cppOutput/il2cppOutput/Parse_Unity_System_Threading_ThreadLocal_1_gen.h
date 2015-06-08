#pragma once
// System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>
struct IDictionary_2_t5478;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t818;
// System.Func`1<System.Boolean>
struct Func_1_t628;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Boolean>
struct ThreadLocal_1_t622  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Boolean>::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1<System.Boolean>::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Boolean>::valueFactory
	Func_1_t628 * ___valueFactory_5;
};
struct ThreadLocal_1_t622_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Boolean>::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Boolean>::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Boolean>::CS$<>9__CachedAnonymousMethodDelegate1
	Func_1_t628 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1_6;
};
struct ThreadLocal_1_t622_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Boolean>::threadLocalData
	Object_t* ___threadLocalData_1;
};
