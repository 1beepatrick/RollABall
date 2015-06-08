#pragma once

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t674;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t639;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t5822;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t5823;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t570;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t439;
// Parse.ParseUser
struct ParseUser_t534;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t5824;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m26620 (ParseQuery_1_t674 * __this, ParseQuery_1_t674 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t1129  ___skip, Nullable_1_t1129  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeIncludes_m26621 (ParseQuery_1_t674 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t639 * ParseQuery_1_MergeSelectedKeys_m26622 (ParseQuery_1_t674 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m26623 (ParseQuery_1_t674 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
 void ParseQuery_1__ctor_m3980 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
 void ParseQuery_1__ctor_m26624 (ParseQuery_1_t674 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t674 * ParseQuery_1_Or_m26625 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
 ParseQuery_1_t674 * ParseQuery_1_OrderBy_m26626 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
 ParseQuery_1_t674 * ParseQuery_1_OrderByDescending_m26627 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
 ParseQuery_1_t674 * ParseQuery_1_ThenBy_m26628 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
 ParseQuery_1_t674 * ParseQuery_1_ThenByDescending_m26629 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
 ParseQuery_1_t674 * ParseQuery_1_Include_m26630 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
 ParseQuery_1_t674 * ParseQuery_1_Select_m26631 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
 ParseQuery_1_t674 * ParseQuery_1_Skip_m26632 (ParseQuery_1_t674 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
 ParseQuery_1_t674 * ParseQuery_1_Limit_m26633 (ParseQuery_1_t674 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereContains_m26634 (ParseQuery_1_t674 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereDoesNotExist_m26635 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereEndsWith_m26636 (ParseQuery_1_t674 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t674 * ParseQuery_1_WhereEqualTo_m26637 (ParseQuery_1_t674 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereExists_m26638 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t674 * ParseQuery_1_WhereGreaterThan_m26639 (ParseQuery_1_t674 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t674 * ParseQuery_1_WhereGreaterThanOrEqualTo_m26640 (ParseQuery_1_t674 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t674 * ParseQuery_1_WhereLessThan_m26641 (ParseQuery_1_t674 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t674 * ParseQuery_1_WhereLessThanOrEqualTo_m26642 (ParseQuery_1_t674 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereMatches_m26643 (ParseQuery_1_t674 * __this, String_t* ___key, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t674 * ParseQuery_1_WhereMatches_m26644 (ParseQuery_1_t674 * __this, String_t* ___key, Regex_t478 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereMatches_m26645 (ParseQuery_1_t674 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereMatches_m26646 (ParseQuery_1_t674 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t674 * ParseQuery_1_WhereNear_m26647 (ParseQuery_1_t674 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t674 * ParseQuery_1_WhereNotEqualTo_m26648 (ParseQuery_1_t674 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereStartsWith_m26649 (ParseQuery_1_t674 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t674 * ParseQuery_1_WhereWithinGeoBox_m26650 (ParseQuery_1_t674 * __this, String_t* ___key, ParseGeoPoint_t577  ___southwest, ParseGeoPoint_t577  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t674 * ParseQuery_1_WhereWithinDistance_m26651 (ParseQuery_1_t674 * __this, String_t* ___key, ParseGeoPoint_t577  ___point, ParseGeoDistance_t576  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
 Task_1_t5823 * ParseQuery_1_FindAsync_m26652 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
 Task_1_t5823 * ParseQuery_1_FindAsync_m26653 (ParseQuery_1_t674 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
 Task_1_t570 * ParseQuery_1_FirstOrDefaultAsync_m26654 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t570 * ParseQuery_1_FirstOrDefaultAsync_m26655 (ParseQuery_1_t674 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
 Task_1_t570 * ParseQuery_1_FirstAsync_m26656 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t570 * ParseQuery_1_FirstAsync_m26657 (ParseQuery_1_t674 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
 Task_1_t439 * ParseQuery_1_CountAsync_m26658 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
 Task_1_t439 * ParseQuery_1_CountAsync_m26659 (ParseQuery_1_t674 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
 Task_1_t570 * ParseQuery_1_GetAsync_m26660 (ParseQuery_1_t674 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t570 * ParseQuery_1_GetAsync_m26661 (ParseQuery_1_t674 * __this, String_t* ___objectId, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseUser_t534 * ParseQuery_1_CreateParseObjectFromQueryResult_m26662 (ParseQuery_1_t674 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m26663 (ParseQuery_1_t674 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m26664 (ParseQuery_1_t674 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m26665 (ParseQuery_1_t674 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m26666 (ParseQuery_1_t674 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m26667 (ParseQuery_1_t674 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m26668 (ParseQuery_1_t674 * __this, Regex_t478 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t674 * ParseQuery_1_WhereRelatedTo_m26669 (ParseQuery_1_t674 * __this, ParseObject_t21 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m26670 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m26671 (ParseQuery_1_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m26672 (ParseQuery_1_t674 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseUser_t534 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m26673 (ParseQuery_1_t674 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseUser_t534 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m26674 (Object_t * __this/* static, unused */, Task_1_t570 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m26675 (Object_t * __this/* static, unused */, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseUser_t534 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m26676 (Object_t * __this/* static, unused */, Task_1_t5823 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseUser_t534 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m26677 (ParseQuery_1_t674 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
