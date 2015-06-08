#pragma once

// Parse.ParseFile
struct ParseFile_t572;
// System.String
struct String_t;
// System.Uri
struct Uri_t454;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.IO.Stream
struct Stream_t434;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Threading.Tasks.Task
struct Task_t438;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t557;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
 void ParseFile__ctor_m2455 (ParseFile_t572 * __this, String_t* ___name, Uri_t454 * ___uri, String_t* ___mimeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.Byte[],System.String)
 void ParseFile__ctor_m2456 (ParseFile_t572 * __this, String_t* ___name, ByteU5BU5D_t433* ___data, String_t* ___mimeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.IO.Stream,System.String)
 void ParseFile__ctor_m2457 (ParseFile_t572 * __this, String_t* ___name, Stream_t434 * ___data, String_t* ___mimeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
 bool ParseFile_get_IsDirty_m2458 (ParseFile_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
 String_t* ParseFile_get_Name_m2459 (ParseFile_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_MimeType()
 String_t* ParseFile_get_MimeType_m2460 (ParseFile_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
 Uri_t454 * ParseFile_get_Url_m2461 (ParseFile_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::ToJSON()
 Object_t* ParseFile_ToJSON_m2462 (ParseFile_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::MergeFromJSON(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseFile_MergeFromJSON_m2463 (ParseFile_t572 * __this, Object_t* ___jsonData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync()
 Task_t438 * ParseFile_SaveAsync_m2464 (ParseFile_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
 Task_t438 * ParseFile_SaveAsync_m2465 (ParseFile_t572 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>)
 Task_t438 * ParseFile_SaveAsync_m2466 (ParseFile_t572 * __this, Object_t* ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_t438 * ParseFile_SaveAsync_m2467 (ParseFile_t572 * __this, Object_t* ___progress, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.Tasks.Task,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_t438 * ParseFile_SaveAsync_m2468 (ParseFile_t572 * __this, Task_t438 * ___toAwait, Object_t* ___progress, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::GetMIMEType(System.String)
 String_t* ParseFile_GetMIMEType_m2469 (Object_t * __this/* static, unused */, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.cctor()
 void ParseFile__cctor_m2470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
