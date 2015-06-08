#pragma once

// Parse.ParseFacebookUtils
struct ParseFacebookUtils_t569;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t570;
// System.Threading.Tasks.Task
struct Task_t438;
// Parse.ParseUser
struct ParseUser_t534;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.ParseFacebookUtils::get_AccessToken()
 String_t* ParseFacebookUtils_get_AccessToken_m2436 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::Initialize()
 void ParseFacebookUtils_Initialize_m2437 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime,System.Threading.CancellationToken)
 Task_1_t570 * ParseFacebookUtils_LogInAsync_m2438 (Object_t * __this/* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t459  ___expiration, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime)
 Task_1_t570 * ParseFacebookUtils_LogInAsync_m2439 (Object_t * __this/* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t459  ___expiration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime,System.Threading.CancellationToken)
 Task_t438 * ParseFacebookUtils_LinkAsync_m2440 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t459  ___expiration, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime)
 Task_t438 * ParseFacebookUtils_LinkAsync_m2441 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t459  ___expiration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFacebookUtils::IsLinked(Parse.ParseUser)
 bool ParseFacebookUtils_IsLinked_m2442 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser,System.Threading.CancellationToken)
 Task_t438 * ParseFacebookUtils_UnlinkAsync_m2443 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser)
 Task_t438 * ParseFacebookUtils_UnlinkAsync_m2444 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::.cctor()
 void ParseFacebookUtils__cctor_m2445 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
