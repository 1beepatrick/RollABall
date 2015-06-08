#pragma once

// Parse.ParseInstallation
struct ParseInstallation_t637;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t640;
// System.String
struct String_t;
// System.Version
struct Version_t554;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t503;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseInstallation::.ctor()
 void ParseInstallation__ctor_m2631 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.ParseInstallation::get_CurrentInstallation()
 ParseInstallation_t637 * ParseInstallation_get_CurrentInstallation_m2632 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SaveCurrentInstallation()
 void ParseInstallation_SaveCurrentInstallation_m2633 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::ClearInMemoryInstallation()
 void ParseInstallation_ClearInMemoryInstallation_m2634 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParseInstallation::get_Query()
 ParseQuery_1_t640 * ParseInstallation_get_Query_m2635 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::get_InstallationId()
 Guid_t641  ParseInstallation_get_InstallationId_m2636 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_InstallationId(System.Guid)
 void ParseInstallation_set_InstallationId_m2637 (ParseInstallation_t637 * __this, Guid_t641  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::getInstallationId()
 Guid_t641  ParseInstallation_getInstallationId_m2638 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceType()
 String_t* ParseInstallation_get_DeviceType_m2639 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceType(System.String)
 void ParseInstallation_set_DeviceType_m2640 (ParseInstallation_t637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppName()
 String_t* ParseInstallation_get_AppName_m2641 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppName(System.String)
 void ParseInstallation_set_AppName_m2642 (ParseInstallation_t637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppVersion()
 String_t* ParseInstallation_get_AppVersion_m2643 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppVersion(System.String)
 void ParseInstallation_set_AppVersion_m2644 (ParseInstallation_t637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppIdentifier()
 String_t* ParseInstallation_get_AppIdentifier_m2645 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppIdentifier(System.String)
 void ParseInstallation_set_AppIdentifier_m2646 (ParseInstallation_t637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_TimeZone()
 String_t* ParseInstallation_get_TimeZone_m2647 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_TimeZone(System.String)
 void ParseInstallation_set_TimeZone_m2648 (ParseInstallation_t637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getTimeZone()
 String_t* ParseInstallation_getTimeZone_m2649 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::get_ParseVersion()
 Version_t554 * ParseInstallation_get_ParseVersion_m2650 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_ParseVersion(System.Version)
 void ParseInstallation_set_ParseVersion_m2651 (ParseInstallation_t637 * __this, Version_t554 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::getParseVersion()
 Version_t554 * ParseInstallation_getParseVersion_m2652 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Parse.ParseInstallation::get_Channels()
 Object_t* ParseInstallation_get_Channels_m2653 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Channels(System.Collections.Generic.IList`1<System.String>)
 void ParseInstallation_set_Channels_m2654 (ParseInstallation_t637 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseInstallation::IsKeyMutable(System.String)
 bool ParseInstallation_IsKeyMutable_m2655 (ParseInstallation_t637 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetAutomaticValues()
 void ParseInstallation_SetAutomaticValues_m2656 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseInstallation_SaveAsync_m2657 (ParseInstallation_t637 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getDeviceType()
 String_t* ParseInstallation_getDeviceType_m2658 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppName()
 String_t* ParseInstallation_getAppName_m2659 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppIdentifier()
 String_t* ParseInstallation_getAppIdentifier_m2660 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppVersion()
 String_t* ParseInstallation_getAppVersion_m2661 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceToken()
 String_t* ParseInstallation_get_DeviceToken_m2662 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceToken(System.String)
 void ParseInstallation_set_DeviceToken_m2663 (ParseInstallation_t637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetDeviceTokenFromData(System.Byte[])
 void ParseInstallation_SetDeviceTokenFromData_m2664 (ParseInstallation_t637 * __this, ByteU5BU5D_t433* ___deviceToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseInstallation::get_Badge()
 int32_t ParseInstallation_get_Badge_m2665 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Badge(System.Int32)
 void ParseInstallation_set_Badge_m2666 (ParseInstallation_t637 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetPlatformAutomaticValue()
 void ParseInstallation_SetPlatformAutomaticValue_m2667 (ParseInstallation_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<>n__FabricatedMethod94(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseInstallation_U3CU3En__FabricatedMethod94_m2668 (ParseInstallation_t637 * __this, Task_t438 * p0, CancellationToken_t436  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8d(System.Threading.Tasks.Task&)
 void ParseInstallation_U3CSaveAsyncU3Eb__8d_m2669 (Object_t * __this/* static, unused */, Task_t438 ** ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8f(System.Threading.Tasks.Task)
 void ParseInstallation_U3CSaveAsyncU3Eb__8f_m2670 (Object_t * __this/* static, unused */, Task_t438 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.cctor()
 void ParseInstallation__cctor_m2671 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
