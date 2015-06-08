#pragma once

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t640;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t639;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t5749;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t5750;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t5751;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t439;
// Parse.ParseInstallation
struct ParseInstallation_t637;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t5752;
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

// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m26043 (ParseQuery_1_t640 * __this, ParseQuery_1_t640 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t1129  ___skip, Nullable_1_t1129  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeIncludes_m26044 (ParseQuery_1_t640 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeSelectedKeys_m26045 (ParseQuery_1_t640 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m26046 (ParseQuery_1_t640 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
 void ParseQuery_1__ctor_m3822 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
 void ParseQuery_1__ctor_m26047 (ParseQuery_1_t640 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t640 * ParseQuery_1_Or_m26048 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
 ParseQuery_1_t640 * ParseQuery_1_OrderBy_m26049 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
 ParseQuery_1_t640 * ParseQuery_1_OrderByDescending_m26050 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
 ParseQuery_1_t640 * ParseQuery_1_ThenBy_m26051 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
 ParseQuery_1_t640 * ParseQuery_1_ThenByDescending_m26052 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
 ParseQuery_1_t640 * ParseQuery_1_Include_m26053 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
 ParseQuery_1_t640 * ParseQuery_1_Select_m26054 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
 ParseQuery_1_t640 * ParseQuery_1_Skip_m26055 (ParseQuery_1_t640 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
 ParseQuery_1_t640 * ParseQuery_1_Limit_m26056 (ParseQuery_1_t640 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereContains_m26057 (ParseQuery_1_t640 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereDoesNotExist_m26058 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereEndsWith_m26059 (ParseQuery_1_t640 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t640 * ParseQuery_1_WhereEqualTo_m26060 (ParseQuery_1_t640 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereExists_m26061 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t640 * ParseQuery_1_WhereGreaterThan_m26062 (ParseQuery_1_t640 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t640 * ParseQuery_1_WhereGreaterThanOrEqualTo_m26063 (ParseQuery_1_t640 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t640 * ParseQuery_1_WhereLessThan_m26064 (ParseQuery_1_t640 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t640 * ParseQuery_1_WhereLessThanOrEqualTo_m26065 (ParseQuery_1_t640 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereMatches_m26066 (ParseQuery_1_t640 * __this, String_t* ___key, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t640 * ParseQuery_1_WhereMatches_m26067 (ParseQuery_1_t640 * __this, String_t* ___key, Regex_t478 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereMatches_m26068 (ParseQuery_1_t640 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereMatches_m26069 (ParseQuery_1_t640 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t640 * ParseQuery_1_WhereNear_m26070 (ParseQuery_1_t640 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t640 * ParseQuery_1_WhereNotEqualTo_m26071 (ParseQuery_1_t640 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereStartsWith_m26072 (ParseQuery_1_t640 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t640 * ParseQuery_1_WhereWithinGeoBox_m26073 (ParseQuery_1_t640 * __this, String_t* ___key, ParseGeoPoint_t577  ___southwest, ParseGeoPoint_t577  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t640 * ParseQuery_1_WhereWithinDistance_m26074 (ParseQuery_1_t640 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, ParseGeoDistance_t576  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
 Task_1_t5750 * ParseQuery_1_FindAsync_m26075 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
 Task_1_t5750 * ParseQuery_1_FindAsync_m26076 (ParseQuery_1_t640 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
 Task_1_t5751 * ParseQuery_1_FirstOrDefaultAsync_m26077 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t5751 * ParseQuery_1_FirstOrDefaultAsync_m26078 (ParseQuery_1_t640 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
 Task_1_t5751 * ParseQuery_1_FirstAsync_m26079 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t5751 * ParseQuery_1_FirstAsync_m26080 (ParseQuery_1_t640 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
 Task_1_t439 * ParseQuery_1_CountAsync_m26081 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
 Task_1_t439 * ParseQuery_1_CountAsync_m26082 (ParseQuery_1_t640 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
 Task_1_t5751 * ParseQuery_1_GetAsync_m26083 (ParseQuery_1_t640 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t5751 * ParseQuery_1_GetAsync_m26084 (ParseQuery_1_t640 * __this, String_t* ___objectId, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseInstallation_t637 * ParseQuery_1_CreateParseObjectFromQueryResult_m26085 (ParseQuery_1_t640 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m26086 (ParseQuery_1_t640 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m3849 (ParseQuery_1_t640 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m3852 (ParseQuery_1_t640 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m26087 (ParseQuery_1_t640 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m26088 (ParseQuery_1_t640 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m26089 (ParseQuery_1_t640 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t640 * ParseQuery_1_WhereRelatedTo_m26090 (ParseQuery_1_t640 * __this, ParseObject_t21 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m26091 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m26092 (ParseQuery_1_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m26093 (ParseQuery_1_t640 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseInstallation_t637 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m26094 (ParseQuery_1_t640 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseInstallation_t637 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m26095 (Object_t * __this/* static, unused */, Task_1_t5751 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m26096 (Object_t * __this/* static, unused */, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseInstallation_t637 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m26097 (Object_t * __this/* static, unused */, Task_1_t5750 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseInstallation_t637 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m26098 (ParseQuery_1_t640 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
