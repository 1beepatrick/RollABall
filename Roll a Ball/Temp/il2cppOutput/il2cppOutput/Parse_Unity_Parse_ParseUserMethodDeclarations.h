#pragma once

// Parse.ParseUser
struct ParseUser_t534;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t674;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t675;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t570;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t602;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t676;
// Parse.ParseObject
struct ParseObject_t21;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t556;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseUser::.ctor()
 void ParseUser__ctor_m2768 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
 bool ParseUser_get_IsAuthenticated_m2769 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
 void ParseUser_Remove_m2770 (ParseUser_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
 bool ParseUser_IsKeyMutable_m2771 (ParseUser_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseUser_MergeMagicFields_m2772 (ParseUser_t534 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseUser_MergeAfterSave_m2773 (ParseUser_t534 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseUser_MergeAfterFetch_m2774 (ParseUser_t534 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
 String_t* ParseUser_get_SessionToken_m2775 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
 Task_t438 * ParseUser_SetSessionTokenAsync_m2776 (ParseUser_t534 * __this, String_t* ___newSessionToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
 Task_t438 * ParseUser_SetSessionTokenAsync_m2777 (ParseUser_t534 * __this, String_t* ___newSessionToken, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
 String_t* ParseUser_get_Username_m2778 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
 void ParseUser_set_Username_m2779 (ParseUser_t534 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
 String_t* ParseUser_get_Password_m2780 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
 void ParseUser_set_Password_m2781 (ParseUser_t534 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
 String_t* ParseUser_get_Email_m2782 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
 void ParseUser_set_Email_m2783 (ParseUser_t534 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseUser_SignUpAsync_m2784 (ParseUser_t534 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
 Task_t438 * ParseUser_SignUpAsync_m2785 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
 Task_t438 * ParseUser_SignUpAsync_m2786 (ParseUser_t534 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
 Task_1_t570 * ParseUser_LogInAsync_m2787 (Object_t * __this/* static, unused */, String_t* ___username, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
 Task_1_t570 * ParseUser_LogInAsync_m2788 (Object_t * __this/* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
 Task_1_t570 * ParseUser_BecomeAsync_m2789 (Object_t * __this/* static, unused */, String_t* ___sessionToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
 Task_1_t570 * ParseUser_BecomeAsync_m2790 (Object_t * __this/* static, unused */, String_t* ___sessionToken, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseUser_SaveAsync_m2791 (ParseUser_t534 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t602 * ParseUser_FetchAsyncInternal_m2792 (ParseUser_t534 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
 void ParseUser_LogOut_m2793 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
 Task_t438 * ParseUser_LogOutAsync_m2794 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
 Task_t438 * ParseUser_LogOutAsync_m2795 (Object_t * __this/* static, unused */, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
 String_t* ParseUser_get_CurrentSessionToken_m2796 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
 ParseUser_t534 * ParseUser_get_CurrentUser_m2797 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
 Task_1_t570 * ParseUser_GetCurrentUserAsync_m2798 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
 Task_1_t570 * ParseUser_GetCurrentUserAsync_m2799 (Object_t * __this/* static, unused */, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SaveCurrentUser(Parse.ParseUser)
 void ParseUser_SaveCurrentUser_m2800 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
 Task_t438 * ParseUser_SaveCurrentUserAsync_m2801 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
 Task_t438 * ParseUser_SaveCurrentUserAsync_m2802 (Object_t * __this/* static, unused */, ParseUser_t534 * ___user, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
 void ParseUser_ClearInMemoryUser_m2803 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsCurrentUser()
 bool ParseUser_get_IsCurrentUser_m2804 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
 ParseQuery_1_t674 * ParseUser_get_Query_m2805 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
 Task_t438 * ParseUser_EnableRevocableSessionAsync_m2806 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
 Task_t438 * ParseUser_EnableRevocableSessionAsync_m2807 (Object_t * __this/* static, unused */, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
 void ParseUser_DisableRevocableSession_m2808 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
 bool ParseUser_get_IsRevocableSessionEnabled_m2809 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsRevocableSessionToken(System.String)
 bool ParseUser_IsRevocableSessionToken_m2810 (Object_t * __this/* static, unused */, String_t* ___sessionToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
 Task_t438 * ParseUser_UpgradeToRevocableSessionAsync_m2811 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
 Task_t438 * ParseUser_UpgradeToRevocableSessionAsync_m2812 (ParseUser_t534 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseUser_UpgradeToRevocableSessionAsync_m2813 (ParseUser_t534 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
 Task_t438 * ParseUser_RequestPasswordResetAsync_m2814 (Object_t * __this/* static, unused */, String_t* ___email, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
 Task_t438 * ParseUser_RequestPasswordResetAsync_m2815 (Object_t * __this/* static, unused */, String_t* ___email, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
 Object_t* ParseUser_get_AuthData_m2816 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
 void ParseUser_set_AuthData_m2817 (ParseUser_t534 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
 Object_t * ParseUser_GetProvider_m2818 (Object_t * __this/* static, unused */, String_t* ___providerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
 void ParseUser_CleanupAuthData_m2819 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
 void ParseUser_SynchronizeAllAuthData_m2820 (ParseUser_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
 void ParseUser_SynchronizeAuthData_m2821 (ParseUser_t534 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
 Task_t438 * ParseUser_LinkWithAsync_m2822 (ParseUser_t534 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
 Task_t438 * ParseUser_LinkWithAsync_m2823 (ParseUser_t534 * __this, String_t* ___authType, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
 Task_t438 * ParseUser_UnlinkFromAsync_m2824 (ParseUser_t534 * __this, String_t* ___authType, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
 bool ParseUser_IsLinked_m2825 (ParseUser_t534 * __this, String_t* ___authType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
 void ParseUser_LogOutWithProviders_m2826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
 Task_1_t570 * ParseUser_LogInWithAsync_m2827 (Object_t * __this/* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
 Task_1_t570 * ParseUser_LogInWithAsync_m2828 (Object_t * __this/* static, unused */, String_t* ___authType, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
 void ParseUser_RegisterProvider_m2829 (Object_t * __this/* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SignUpAsync>b__0(System.Threading.Tasks.Task)
 void ParseUser_U3CSignUpAsyncU3Eb__0_m2830 (ParseUser_t534 * __this, Task_t438 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SaveAsync>b__c(System.Threading.Tasks.Task)
 void ParseUser_U3CSaveAsyncU3Eb__c_m2831 (ParseUser_t534 * __this, Task_t438 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseUser::<FetchAsyncInternal>b__e(System.Threading.Tasks.Task`1<Parse.ParseObject>)
 ParseObject_t21 * ParseUser_U3CFetchAsyncInternalU3Eb__e_m2832 (ParseUser_t534 * __this, Task_1_t602 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::<GetCurrentUserAsync>b__12()
 ParseUser_t534 * ParseUser_U3CGetCurrentUserAsyncU3Eb__12_m2833 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__1e(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Task_t438 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__1e_m2834 (ParseUser_t534 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
 void ParseUser__cctor_m2835 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
