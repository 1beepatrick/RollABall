#pragma once

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t2026;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2027;
// System.Action`1<System.Boolean>
struct Action_1_t2017;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t153;
// System.String[]
struct StringU5BU5D_t42;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2028;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t2030;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t2018;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t2019;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t2020;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t2032;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t2021;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2023;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2033;
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
 void GameCenterPlatform__ctor_m4370 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
 void GameCenterPlatform__cctor_m4371 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
 void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m4372 (GameCenterPlatform_t2026 * __this, Object_t * ___user, Action_1_t2017 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
 void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m4373 (GameCenterPlatform_t2026 * __this, Object_t * ___user, Action_1_t2017 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
 void GameCenterPlatform_Internal_Authenticate_m4374 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
 bool GameCenterPlatform_Internal_Authenticated_m4375 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
 String_t* GameCenterPlatform_Internal_UserName_m4376 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
 String_t* GameCenterPlatform_Internal_UserID_m4377 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
 bool GameCenterPlatform_Internal_Underage_m4378 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
 Texture2D_t153 * GameCenterPlatform_Internal_UserImage_m4379 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
 void GameCenterPlatform_Internal_LoadFriends_m4380 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
 void GameCenterPlatform_Internal_LoadAchievementDescriptions_m4381 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
 void GameCenterPlatform_Internal_LoadAchievements_m4382 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
 void GameCenterPlatform_Internal_ReportProgress_m4383 (Object_t * __this/* static, unused */, String_t* ___id, double ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
 void GameCenterPlatform_Internal_ReportScore_m4384 (Object_t * __this/* static, unused */, int64_t ___score, String_t* ___category, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
 void GameCenterPlatform_Internal_LoadScores_m4385 (Object_t * __this/* static, unused */, String_t* ___category, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
 void GameCenterPlatform_Internal_ShowAchievementsUI_m4386 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
 void GameCenterPlatform_Internal_ShowLeaderboardUI_m4387 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
 void GameCenterPlatform_Internal_LoadUsers_m4388 (Object_t * __this/* static, unused */, StringU5BU5D_t42* ___userIds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
 void GameCenterPlatform_Internal_ResetAllAchievements_m4389 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
 void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4390 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
 void GameCenterPlatform_ResetAllAchievements_m4391 (Object_t * __this/* static, unused */, Action_1_t2017 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
 void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m4392 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
 void GameCenterPlatform_ShowLeaderboardUI_m4393 (Object_t * __this/* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
 void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4394 (Object_t * __this/* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
 void GameCenterPlatform_ClearAchievementDescriptions_m4395 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
 void GameCenterPlatform_SetAchievementDescription_m4396 (Object_t * __this/* static, unused */, GcAchievementDescriptionData_t2034  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetAchievementDescriptionImage_m4397 (Object_t * __this/* static, unused */, Texture2D_t153 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
 void GameCenterPlatform_TriggerAchievementDescriptionCallback_m4398 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
 void GameCenterPlatform_AuthenticateCallbackWrapper_m4399 (Object_t * __this/* static, unused */, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
 void GameCenterPlatform_ClearFriends_m4400 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
 void GameCenterPlatform_SetFriends_m4401 (Object_t * __this/* static, unused */, GcUserProfileData_t2035  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetFriendImage_m4402 (Object_t * __this/* static, unused */, Texture2D_t153 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
 void GameCenterPlatform_TriggerFriendsCallbackWrapper_m4403 (Object_t * __this/* static, unused */, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
 void GameCenterPlatform_AchievementCallbackWrapper_m4404 (Object_t * __this/* static, unused */, GcAchievementDataU5BU5D_t2028* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
 void GameCenterPlatform_ProgressCallbackWrapper_m4405 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
 void GameCenterPlatform_ScoreCallbackWrapper_m4406 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
 void GameCenterPlatform_ScoreLoaderCallbackWrapper_m4407 (Object_t * __this/* static, unused */, GcScoreDataU5BU5D_t2030* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
 Object_t * GameCenterPlatform_get_localUser_m4408 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
 void GameCenterPlatform_PopulateLocalUser_m4409 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
 void GameCenterPlatform_LoadAchievementDescriptions_m4410 (GameCenterPlatform_t2026 * __this, Action_1_t2018 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
 void GameCenterPlatform_ReportProgress_m4411 (GameCenterPlatform_t2026 * __this, String_t* ___id, double ___progress, Action_1_t2017 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
 void GameCenterPlatform_LoadAchievements_m4412 (GameCenterPlatform_t2026 * __this, Action_1_t2019 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
 void GameCenterPlatform_ReportScore_m4413 (GameCenterPlatform_t2026 * __this, int64_t ___score, String_t* ___board, Action_1_t2017 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
 void GameCenterPlatform_LoadScores_m4414 (GameCenterPlatform_t2026 * __this, String_t* ___category, Action_1_t2020 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
 void GameCenterPlatform_LoadScores_m4415 (GameCenterPlatform_t2026 * __this, Object_t * ___board, Action_1_t2017 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
 void GameCenterPlatform_LeaderboardCallbackWrapper_m4416 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
 bool GameCenterPlatform_GetLoading_m4417 (GameCenterPlatform_t2026 * __this, Object_t * ___board, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
 bool GameCenterPlatform_VerifyAuthentication_m4418 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
 void GameCenterPlatform_ShowAchievementsUI_m4419 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
 void GameCenterPlatform_ShowLeaderboardUI_m4420 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
 void GameCenterPlatform_ClearUsers_m4421 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
 void GameCenterPlatform_SetUser_m4422 (Object_t * __this/* static, unused */, GcUserProfileData_t2035  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetUserImage_m4423 (Object_t * __this/* static, unused */, Texture2D_t153 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
 void GameCenterPlatform_TriggerUsersCallbackWrapper_m4424 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
 void GameCenterPlatform_LoadUsers_m4425 (GameCenterPlatform_t2026 * __this, StringU5BU5D_t42* ___userIds, Action_1_t2021 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SafeSetUserImage_m4426 (Object_t * __this/* static, unused */, UserProfileU5BU5D_t2023** ___array, Texture2D_t153 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
 void GameCenterPlatform_SafeClearArray_m4427 (Object_t * __this/* static, unused */, UserProfileU5BU5D_t2023** ___array, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
 Object_t * GameCenterPlatform_CreateLeaderboard_m4428 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
 Object_t * GameCenterPlatform_CreateAchievement_m4429 (GameCenterPlatform_t2026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
 void GameCenterPlatform_TriggerResetAchievementCallback_m4430 (Object_t * __this/* static, unused */, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
