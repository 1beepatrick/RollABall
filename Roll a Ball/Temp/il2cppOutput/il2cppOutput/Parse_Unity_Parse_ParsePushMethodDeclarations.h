#pragma once

// Parse.ParsePush
struct ParsePush_t643;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t640;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t438;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t645;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParsePush::.ctor()
 void ParsePush__ctor_m2672 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
 ParseQuery_1_t640 * ParsePush_get_Query_m2673 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
 void ParsePush_set_Query_m2674 (ParsePush_t643 * __this, ParseQuery_1_t640 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
 Object_t* ParsePush_get_Channels_m2675 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
 void ParsePush_set_Channels_m2676 (ParsePush_t643 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
 Nullable_1_t629  ParsePush_get_Expiration_m2677 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
 void ParsePush_set_Expiration_m2678 (ParsePush_t643 * __this, Nullable_1_t629  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
 Nullable_1_t644  ParsePush_get_ExpirationInterval_m2679 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
 void ParsePush_set_ExpirationInterval_m2680 (ParsePush_t643 * __this, Nullable_1_t644  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
 Object_t* ParsePush_get_Data_m2681 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParsePush_set_Data_m2682 (ParsePush_t643 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
 String_t* ParsePush_get_Alert_m2683 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
 void ParsePush_set_Alert_m2684 (ParsePush_t643 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
 Object_t* ParsePush_Encode_m2685 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
 Task_t438 * ParsePush_SendAsync_m2686 (ParsePush_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
 Task_t438 * ParsePush_SendAsync_m2687 (ParsePush_t643 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
 Task_t438 * ParsePush_SendAlertAsync_m2688 (Object_t * __this/* static, unused */, String_t* ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
 Task_t438 * ParsePush_SendAlertAsync_m2689 (Object_t * __this/* static, unused */, String_t* ___alert, String_t* ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
 Task_t438 * ParsePush_SendAlertAsync_m2690 (Object_t * __this/* static, unused */, String_t* ___alert, Object_t* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
 Task_t438 * ParsePush_SendAlertAsync_m2691 (Object_t * __this/* static, unused */, String_t* ___alert, ParseQuery_1_t640 * ___query, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Task_t438 * ParsePush_SendDataAsync_m2692 (Object_t * __this/* static, unused */, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
 Task_t438 * ParsePush_SendDataAsync_m2693 (Object_t * __this/* static, unused */, Object_t* ___data, String_t* ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
 Task_t438 * ParsePush_SendDataAsync_m2694 (Object_t * __this/* static, unused */, Object_t* ___data, Object_t* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
 Task_t438 * ParsePush_SendDataAsync_m2695 (Object_t * __this/* static, unused */, Object_t* ___data, ParseQuery_1_t640 * ___query, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
 void ParsePush_add_ParsePushNotificationReceived_m2696 (Object_t * __this/* static, unused */, EventHandler_1_t645 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
 void ParsePush_remove_ParsePushNotificationReceived_m2697 (Object_t * __this/* static, unused */, EventHandler_1_t645 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
 Task_t438 * ParsePush_SubscribeAsync_m2698 (Object_t * __this/* static, unused */, String_t* ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
 Task_t438 * ParsePush_SubscribeAsync_m2699 (Object_t * __this/* static, unused */, String_t* ___channel, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
 Task_t438 * ParsePush_SubscribeAsync_m2700 (Object_t * __this/* static, unused */, Object_t* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
 Task_t438 * ParsePush_SubscribeAsync_m2701 (Object_t * __this/* static, unused */, Object_t* ___channels, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
 Task_t438 * ParsePush_UnsubscribeAsync_m2702 (Object_t * __this/* static, unused */, String_t* ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
 Task_t438 * ParsePush_UnsubscribeAsync_m2703 (Object_t * __this/* static, unused */, String_t* ___channel, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
 Task_t438 * ParsePush_UnsubscribeAsync_m2704 (Object_t * __this/* static, unused */, Object_t* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
 Task_t438 * ParsePush_UnsubscribeAsync_m2705 (Object_t * __this/* static, unused */, Object_t* ___channels, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
 void ParsePush__cctor_m2706 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
