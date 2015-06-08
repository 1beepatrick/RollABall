#pragma once
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t5098;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t818;
// System.Func`1<System.Object>
struct Func_1_t793;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Object>
struct ThreadLocal_1_t5099  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Object>::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1<System.Object>::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Object>::valueFactory
	Func_1_t793 * ___valueFactory_5;
};
struct ThreadLocal_1_t5099_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Object>::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Object>::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Object>::CS$<>9__CachedAnonymousMethodDelegate1
	Func_1_t793 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1_6;
};
struct ThreadLocal_1_t5099_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Object>::threadLocalData
	Object_t* ___threadLocalData_1;
};
