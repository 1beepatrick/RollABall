#pragma once

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t654;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t639;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t5871;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t5872;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t5873;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t439;
// Parse.ParseRole
struct ParseRole_t535;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t5874;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t482;
// Parse.ParseObject
struct ParseObject_t21;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t556;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_2.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m27000 (ParseQuery_1_t654 * __this, ParseQuery_1_t654 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t1129  ___skip, Nullable_1_t1129  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeIncludes_m27001 (ParseQuery_1_t654 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeSelectedKeys_m27002 (ParseQuery_1_t654 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m27003 (ParseQuery_1_t654 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
 void ParseQuery_1__ctor_m3964 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
 void ParseQuery_1__ctor_m27004 (ParseQuery_1_t654 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t654 * ParseQuery_1_Or_m27005 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
 ParseQuery_1_t654 * ParseQuery_1_OrderBy_m27006 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
 ParseQuery_1_t654 * ParseQuery_1_OrderByDescending_m27007 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
 ParseQuery_1_t654 * ParseQuery_1_ThenBy_m27008 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
 ParseQuery_1_t654 * ParseQuery_1_ThenByDescending_m27009 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
 ParseQuery_1_t654 * ParseQuery_1_Include_m27010 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
 ParseQuery_1_t654 * ParseQuery_1_Select_m27011 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
 ParseQuery_1_t654 * ParseQuery_1_Skip_m27012 (ParseQuery_1_t654 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
 ParseQuery_1_t654 * ParseQuery_1_Limit_m27013 (ParseQuery_1_t654 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereContains_m27014 (ParseQuery_1_t654 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereDoesNotExist_m27015 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereEndsWith_m27016 (ParseQuery_1_t654 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t654 * ParseQuery_1_WhereEqualTo_m27017 (ParseQuery_1_t654 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereExists_m27018 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t654 * ParseQuery_1_WhereGreaterThan_m27019 (ParseQuery_1_t654 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t654 * ParseQuery_1_WhereGreaterThanOrEqualTo_m27020 (ParseQuery_1_t654 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t654 * ParseQuery_1_WhereLessThan_m27021 (ParseQuery_1_t654 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t654 * ParseQuery_1_WhereLessThanOrEqualTo_m27022 (ParseQuery_1_t654 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereMatches_m27023 (ParseQuery_1_t654 * __this, String_t* ___key, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t654 * ParseQuery_1_WhereMatches_m27024 (ParseQuery_1_t654 * __this, String_t* ___key, Regex_t478 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereMatches_m27025 (ParseQuery_1_t654 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereMatches_m27026 (ParseQuery_1_t654 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t654 * ParseQuery_1_WhereNear_m27027 (ParseQuery_1_t654 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t654 * ParseQuery_1_WhereNotEqualTo_m27028 (ParseQuery_1_t654 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereStartsWith_m27029 (ParseQuery_1_t654 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t654 * ParseQuery_1_WhereWithinGeoBox_m27030 (ParseQuery_1_t654 * __this, String_t* ___key, ParseGeoPoint_t577  ___southwest, ParseGeoPoint_t577  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t654 * ParseQuery_1_WhereWithinDistance_m27031 (ParseQuery_1_t654 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, ParseGeoDistance_t576  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
 Task_1_t5872 * ParseQuery_1_FindAsync_m27032 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
 Task_1_t5872 * ParseQuery_1_FindAsync_m27033 (ParseQuery_1_t654 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
 Task_1_t5873 * ParseQuery_1_FirstOrDefaultAsync_m27034 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t5873 * ParseQuery_1_FirstOrDefaultAsync_m27035 (ParseQuery_1_t654 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
 Task_1_t5873 * ParseQuery_1_FirstAsync_m27036 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t5873 * ParseQuery_1_FirstAsync_m27037 (ParseQuery_1_t654 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
 Task_1_t439 * ParseQuery_1_CountAsync_m27038 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
 Task_1_t439 * ParseQuery_1_CountAsync_m27039 (ParseQuery_1_t654 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
 Task_1_t5873 * ParseQuery_1_GetAsync_m27040 (ParseQuery_1_t654 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t5873 * ParseQuery_1_GetAsync_m27041 (ParseQuery_1_t654 * __this, String_t* ___objectId, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseRole_t535 * ParseQuery_1_CreateParseObjectFromQueryResult_m27042 (ParseQuery_1_t654 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m27043 (ParseQuery_1_t654 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m27044 (ParseQuery_1_t654 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m27045 (ParseQuery_1_t654 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m27046 (ParseQuery_1_t654 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m27047 (ParseQuery_1_t654 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m27048 (ParseQuery_1_t654 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t654 * ParseQuery_1_WhereRelatedTo_m27049 (ParseQuery_1_t654 * __this, ParseObject_t21 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m27050 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m27051 (ParseQuery_1_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m27052 (ParseQuery_1_t654 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseRole_t535 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m27053 (ParseQuery_1_t654 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseRole_t535 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m27054 (Object_t * __this/* static, unused */, Task_1_t5873 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m27055 (Object_t * __this/* static, unused */, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseRole_t535 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m27056 (Object_t * __this/* static, unused */, Task_1_t5872 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseRole_t535 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m27057 (ParseQuery_1_t654 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
