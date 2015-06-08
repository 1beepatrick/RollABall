#pragma once

// Parse.ParseConfig
struct ParseConfig_t563;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t565;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t561;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t556;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
 ParseConfig_t563 * ParseConfig_get_CurrentConfig_m2419 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::set_CurrentConfig(Parse.ParseConfig)
 void ParseConfig_set_CurrentConfig_m2420 (Object_t * __this/* static, unused */, ParseConfig_t563 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
 void ParseConfig_ClearCurrentConfig_m2421 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
 void ParseConfig_ClearCurrentConfigInMemory_m2422 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
 void ParseConfig__ctor_m2423 (ParseConfig_t563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void ParseConfig__ctor_m2424 (ParseConfig_t563 * __this, Dictionary_2_t565 * ___fetchedConfig, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
 Task_1_t561 * ParseConfig_GetAsync_m2425 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
 Task_1_t561 * ParseConfig_GetAsync_m2426 (Object_t * __this/* static, unused */, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t561 * ParseConfig_GetAsync_m2427 (Object_t * __this/* static, unused */, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::HandleFetchResult(System.Object)
 ParseConfig_t563 * ParseConfig_HandleFetchResult_m2428 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::SaveCurrentConfigFromFetchedConfig(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void ParseConfig_SaveCurrentConfigFromFetchedConfig_m2429 (Object_t * __this/* static, unused */, Dictionary_2_t565 * ___fetchedConfig, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
 Object_t * ParseConfig_get_Item_m2430 (ParseConfig_t563 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::<GetAsync>b__4(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseConfig_t563 * ParseConfig_U3CGetAsyncU3Eb__4_m2431 (Object_t * __this/* static, unused */, Task_1_t556 * ___task, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.cctor()
 void ParseConfig__cctor_m2432 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
