#pragma once

// Parse.ParseSession
struct ParseSession_t658;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t659;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t657;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Boolean Parse.ParseSession::IsKeyMutable(System.String)
 bool ParseSession_IsKeyMutable_m2735 (ParseSession_t658 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseSession::get_SessionToken()
 String_t* ParseSession_get_SessionToken_m2736 (ParseSession_t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseSession> Parse.ParseSession::get_Query()
 ParseQuery_1_t659 * ParseSession_get_Query_m2737 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync()
 Task_1_t657 * ParseSession_GetCurrentSessionAsync_m2738 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync(System.Threading.CancellationToken)
 Task_1_t657 * ParseSession_GetCurrentSessionAsync_m2739 (Object_t * __this/* static, unused */, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.ctor()
 void ParseSession__ctor_m2740 (ParseSession_t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.cctor()
 void ParseSession__cctor_m2741 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
