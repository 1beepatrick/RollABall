#pragma once

// Parse.PlatformHooks
struct PlatformHooks_t699;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t296;
// UnityEngine.WWW
struct WWW_t679;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Collections.Hashtable
struct Hashtable_t688;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t680;
// System.Action`1<System.Byte[]>
struct Action_1_t578;
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Action_1_t682;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t451;
// System.Uri
struct Uri_t454;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t555;
// System.IO.Stream
struct Stream_t434;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t557;
// System.Action
struct Action_t696;
// System.Collections.IEnumerator
struct IEnumerator_t30;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t598;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.PlatformHooks::get_SDKName()
 String_t* PlatformHooks_get_SDKName_m2885 (PlatformHooks_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsCompiledByIL2CPP()
 bool PlatformHooks_get_IsCompiledByIL2CPP_m2886 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWebPlayer()
 bool PlatformHooks_get_IsWebPlayer_m2887 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsAndroid()
 bool PlatformHooks_get_IsAndroid_m2888 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsIOS()
 bool PlatformHooks_get_IsIOS_m2889 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWindowsPhone8()
 bool PlatformHooks_get_IsWindowsPhone8_m2890 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.PlatformHooks::GetTypeFromUnityEngine(System.String)
 Type_t * PlatformHooks_GetTypeFromUnityEngine_m2891 (Object_t * __this/* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::get_ApplicationSettings()
 Object_t* PlatformHooks_get_ApplicationSettings_m2892 (PlatformHooks_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Parse.PlatformHooks::CreateWrapperTypes()
 List_1_t296 * PlatformHooks_CreateWrapperTypes_m2893 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW Parse.PlatformHooks::GenerateWWWInstance(System.String,System.Byte[],System.Collections.Hashtable)
 WWW_t679 * PlatformHooks_GenerateWWWInstance_m2894 (Object_t * __this/* static, unused */, String_t* ___uri, ByteU5BU5D_t433* ___bytes, Hashtable_t688 * ___headerTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterNetworkRequest(UnityEngine.WWW,System.Action`1<UnityEngine.WWW>)
 void PlatformHooks_RegisterNetworkRequest_m2895 (Object_t * __this/* static, unused */, WWW_t679 * ___www, Action_1_t680 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterDeviceTokenRequest(System.Action`1<System.Byte[]>)
 void PlatformHooks_RegisterDeviceTokenRequest_m2896 (Object_t * __this/* static, unused */, Action_1_t578 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisteriOSPushNotificationListener(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
 void PlatformHooks_RegisteriOSPushNotificationListener_m2897 (Object_t * __this/* static, unused */, Action_1_t682 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
 Task_1_t451 * PlatformHooks_RequestAsync_m2898 (PlatformHooks_t699 * __this, Uri_t454 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t434 * ___data, String_t* ___contentType, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::UploadAsync(System.Uri,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_1_t451 * PlatformHooks_UploadAsync_m2899 (PlatformHooks_t699 * __this, Uri_t454 * ___uri, Object_t* ___headers, Stream_t434 * ___data, Object_t* ___progress, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_1_t451 * PlatformHooks_RequestAsync_m2900 (PlatformHooks_t699 * __this, Uri_t454 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t434 * ___data, String_t* ___contentType, Object_t* ___progress, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RunOnMainThread(System.Action)
 void PlatformHooks_RunOnMainThread_m2901 (Object_t * __this/* static, unused */, Action_t696 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks::RunDispatcher()
 Object_t * PlatformHooks_RunDispatcher_m2902 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::Initialize()
 void PlatformHooks_Initialize_m2903 (PlatformHooks_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::ClearInMemoryInstallation()
 void PlatformHooks_ClearInMemoryInstallation_m2904 (PlatformHooks_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.ctor()
 void PlatformHooks__ctor_m2905 (PlatformHooks_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__1()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m2906 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__2()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m2907 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__3()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m2908 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__4()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m2909 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__5()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m2910 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__6()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m2911 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__7()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m2912 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__8()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m2913 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__9()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m2914 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__a()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m2915 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__b()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m2916 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__c()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m2917 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__d()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m2918 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__e()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m2919 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__f()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m2920 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Object> Parse.PlatformHooks::<RequestAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>)
 Task_1_t598 * PlatformHooks_U3CRequestAsyncU3Eb__34_m2921 (Object_t * __this/* static, unused */, Task_1_t451 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::<Initialize>b__46(System.Reflection.MethodInfo)
 bool PlatformHooks_U3CInitializeU3Eb__46_m2922 (Object_t * __this/* static, unused */, MethodInfo_t517 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::<Initialize>b__47(System.Reflection.MethodInfo)
 bool PlatformHooks_U3CInitializeU3Eb__47_m2923 (Object_t * __this/* static, unused */, MethodInfo_t517 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.cctor()
 void PlatformHooks__cctor_m2924 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
