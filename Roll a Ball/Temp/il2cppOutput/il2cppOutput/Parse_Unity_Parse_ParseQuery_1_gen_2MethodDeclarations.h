#pragma once

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t659;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t639;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t5926;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t5927;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t657;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t439;
// Parse.ParseSession
struct ParseSession_t658;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t5928;
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

// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m27390 (ParseQuery_1_t659 * __this, ParseQuery_1_t659 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t1129  ___skip, Nullable_1_t1129  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeIncludes_m27391 (ParseQuery_1_t659 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeSelectedKeys_m27392 (ParseQuery_1_t659 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m27393 (ParseQuery_1_t659 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
 void ParseQuery_1__ctor_m3972 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
 void ParseQuery_1__ctor_m27394 (ParseQuery_1_t659 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t659 * ParseQuery_1_Or_m27395 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
 ParseQuery_1_t659 * ParseQuery_1_OrderBy_m27396 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
 ParseQuery_1_t659 * ParseQuery_1_OrderByDescending_m27397 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
 ParseQuery_1_t659 * ParseQuery_1_ThenBy_m27398 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
 ParseQuery_1_t659 * ParseQuery_1_ThenByDescending_m27399 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
 ParseQuery_1_t659 * ParseQuery_1_Include_m27400 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
 ParseQuery_1_t659 * ParseQuery_1_Select_m27401 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
 ParseQuery_1_t659 * ParseQuery_1_Skip_m27402 (ParseQuery_1_t659 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
 ParseQuery_1_t659 * ParseQuery_1_Limit_m27403 (ParseQuery_1_t659 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereContains_m27404 (ParseQuery_1_t659 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereDoesNotExist_m27405 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereEndsWith_m27406 (ParseQuery_1_t659 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t659 * ParseQuery_1_WhereEqualTo_m27407 (ParseQuery_1_t659 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereExists_m27408 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t659 * ParseQuery_1_WhereGreaterThan_m27409 (ParseQuery_1_t659 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t659 * ParseQuery_1_WhereGreaterThanOrEqualTo_m27410 (ParseQuery_1_t659 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t659 * ParseQuery_1_WhereLessThan_m27411 (ParseQuery_1_t659 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t659 * ParseQuery_1_WhereLessThanOrEqualTo_m27412 (ParseQuery_1_t659 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereMatches_m27413 (ParseQuery_1_t659 * __this, String_t* ___key, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t659 * ParseQuery_1_WhereMatches_m27414 (ParseQuery_1_t659 * __this, String_t* ___key, Regex_t478 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereMatches_m27415 (ParseQuery_1_t659 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereMatches_m27416 (ParseQuery_1_t659 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t659 * ParseQuery_1_WhereNear_m27417 (ParseQuery_1_t659 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t659 * ParseQuery_1_WhereNotEqualTo_m27418 (ParseQuery_1_t659 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereStartsWith_m27419 (ParseQuery_1_t659 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t659 * ParseQuery_1_WhereWithinGeoBox_m27420 (ParseQuery_1_t659 * __this, String_t* ___key, ParseGeoPoint_t577  ___southwest, ParseGeoPoint_t577  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t659 * ParseQuery_1_WhereWithinDistance_m27421 (ParseQuery_1_t659 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, ParseGeoDistance_t576  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
 Task_1_t5927 * ParseQuery_1_FindAsync_m27422 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
 Task_1_t5927 * ParseQuery_1_FindAsync_m27423 (ParseQuery_1_t659 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
 Task_1_t657 * ParseQuery_1_FirstOrDefaultAsync_m27424 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t657 * ParseQuery_1_FirstOrDefaultAsync_m27425 (ParseQuery_1_t659 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
 Task_1_t657 * ParseQuery_1_FirstAsync_m27426 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t657 * ParseQuery_1_FirstAsync_m27427 (ParseQuery_1_t659 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
 Task_1_t439 * ParseQuery_1_CountAsync_m27428 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
 Task_1_t439 * ParseQuery_1_CountAsync_m27429 (ParseQuery_1_t659 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
 Task_1_t657 * ParseQuery_1_GetAsync_m27430 (ParseQuery_1_t659 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t657 * ParseQuery_1_GetAsync_m27431 (ParseQuery_1_t659 * __this, String_t* ___objectId, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseSession_t658 * ParseQuery_1_CreateParseObjectFromQueryResult_m27432 (ParseQuery_1_t659 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m27433 (ParseQuery_1_t659 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m27434 (ParseQuery_1_t659 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m27435 (ParseQuery_1_t659 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m27436 (ParseQuery_1_t659 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m27437 (ParseQuery_1_t659 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m27438 (ParseQuery_1_t659 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t659 * ParseQuery_1_WhereRelatedTo_m27439 (ParseQuery_1_t659 * __this, ParseObject_t21 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m27440 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m27441 (ParseQuery_1_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m27442 (ParseQuery_1_t659 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseSession_t658 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m27443 (ParseQuery_1_t659 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseSession_t658 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m27444 (Object_t * __this/* static, unused */, Task_1_t657 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m27445 (Object_t * __this/* static, unused */, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseSession_t658 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m27446 (Object_t * __this/* static, unused */, Task_1_t5927 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseSession_t658 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m27447 (ParseQuery_1_t659 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
