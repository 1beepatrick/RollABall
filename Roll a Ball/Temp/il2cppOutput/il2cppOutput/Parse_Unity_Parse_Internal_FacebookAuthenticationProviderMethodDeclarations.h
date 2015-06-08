#pragma once

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t449;
// System.Uri
struct Uri_t454;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t455;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t448;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t458;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
 void FacebookAuthenticationProvider__ctor_m2121 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_LoginDialogUrlOverride()
 Uri_t454 * FacebookAuthenticationProvider_get_LoginDialogUrlOverride_m2122 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_LoginDialogUrlOverride(System.Uri)
 void FacebookAuthenticationProvider_set_LoginDialogUrlOverride_m2123 (FacebookAuthenticationProvider_t449 * __this, Uri_t454 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_ResponseUrlOverride()
 Uri_t454 * FacebookAuthenticationProvider_get_ResponseUrlOverride_m2124 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_ResponseUrlOverride(System.Uri)
 void FacebookAuthenticationProvider_set_ResponseUrlOverride_m2125 (FacebookAuthenticationProvider_t449 * __this, Uri_t454 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::get_Permissions()
 Object_t* FacebookAuthenticationProvider_get_Permissions_m2126 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
 void FacebookAuthenticationProvider_set_Permissions_m2127 (FacebookAuthenticationProvider_t449 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AppId()
 String_t* FacebookAuthenticationProvider_get_AppId_m2128 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AppId(System.String)
 void FacebookAuthenticationProvider_set_AppId_m2129 (FacebookAuthenticationProvider_t449 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AccessToken()
 String_t* FacebookAuthenticationProvider_get_AccessToken_m2130 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
 void FacebookAuthenticationProvider_set_AccessToken_m2131 (FacebookAuthenticationProvider_t449 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::add_Navigate(System.Action`1<System.Uri>)
 void FacebookAuthenticationProvider_add_Navigate_m2132 (FacebookAuthenticationProvider_t449 * __this, Action_1_t455 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::remove_Navigate(System.Action`1<System.Uri>)
 void FacebookAuthenticationProvider_remove_Navigate_m2133 (FacebookAuthenticationProvider_t449 * __this, Action_1_t455 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::TryParseOAuthCallbackUrl(System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>&)
 bool FacebookAuthenticationProvider_TryParseOAuthCallbackUrl_m2134 (FacebookAuthenticationProvider_t449 * __this, Uri_t454 * ___uri, Object_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.FacebookAuthenticationProvider::GetAuthData(System.String,System.String,System.DateTime)
 Object_t* FacebookAuthenticationProvider_GetAuthData_m2135 (FacebookAuthenticationProvider_t449 * __this, String_t* ___facebookId, String_t* ___accessToken, DateTime_t459  ___expiration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::HandleNavigation(System.Uri)
 bool FacebookAuthenticationProvider_HandleNavigation_m2136 (FacebookAuthenticationProvider_t449 * __this, Uri_t454 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::AuthenticateAsync(System.Threading.CancellationToken)
 Task_1_t458 * FacebookAuthenticationProvider_AuthenticateAsync_m2137 (FacebookAuthenticationProvider_t449 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
 void FacebookAuthenticationProvider_Deauthenticate_m2138 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 bool FacebookAuthenticationProvider_RestoreAuthentication_m2139 (FacebookAuthenticationProvider_t449 * __this, Object_t* ___authData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
 String_t* FacebookAuthenticationProvider_get_AuthType_m2140 (FacebookAuthenticationProvider_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
 void FacebookAuthenticationProvider__cctor_m2141 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
