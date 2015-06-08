#pragma once

// Parse.Internal.MissingExtensions
struct MissingExtensions_t441;
// System.Type
struct Type_t;
// System.Enum
struct Enum_t293;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t442;
// System.IO.StreamReader
struct StreamReader_t431;
// System.Threading.Tasks.Task
struct Task_t438;
// System.IO.Stream
struct Stream_t434;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t439;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Type Parse.Internal.MissingExtensions::GetTypeInfo(System.Type)
 Type_t * MissingExtensions_GetTypeInfo_m2108 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MissingExtensions::HasFlag(System.Enum,System.Enum)
 bool MissingExtensions_HasFlag_m2109 (Object_t * __this/* static, unused */, Enum_t293 * ___enumValue, Enum_t293 * ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.MissingExtensions::ReadToEndAsync(System.IO.StreamReader)
 Task_1_t442 * MissingExtensions_ReadToEndAsync_m2110 (Object_t * __this/* static, unused */, StreamReader_t431 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream)
 Task_t438 * MissingExtensions_CopyToAsync_m2111 (Object_t * __this/* static, unused */, Stream_t434 * ___stream, Stream_t434 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Threading.CancellationToken)
 Task_t438 * MissingExtensions_CopyToAsync_m2112 (Object_t * __this/* static, unused */, Stream_t434 * ___stream, Stream_t434 * ___destination, int32_t ___bufferSize, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.Internal.MissingExtensions::ReadAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
 Task_1_t439 * MissingExtensions_ReadAsync_m2113 (Object_t * __this/* static, unused */, Stream_t434 * ___stream, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::WriteAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
 Task_t438 * MissingExtensions_WriteAsync_m2114 (Object_t * __this/* static, unused */, Stream_t434 * ___stream, ByteU5BU5D_t433* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
