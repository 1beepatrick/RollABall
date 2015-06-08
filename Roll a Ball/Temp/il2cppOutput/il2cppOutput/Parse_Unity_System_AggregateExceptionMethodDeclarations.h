#pragma once

// System.AggregateException
struct AggregateException_t701;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t700;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t702;
// System.String
struct String_t;

// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
 void AggregateException__ctor_m2925 (AggregateException_t701 * __this, Object_t* ___innerExceptions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
 ReadOnlyCollection_1_t700 * AggregateException_get_InnerExceptions_m2926 (AggregateException_t701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
 void AggregateException_set_InnerExceptions_m2927 (AggregateException_t701 * __this, ReadOnlyCollection_1_t700 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.AggregateException::Flatten()
 AggregateException_t701 * AggregateException_Flatten_m2928 (AggregateException_t701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AggregateException::ToString()
 String_t* AggregateException_ToString_m2929 (AggregateException_t701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
