#pragma once
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2717;
// System.IO.Stream
struct Stream_t434;
// Mono.Security.Protocol.Tls.Context
struct Context_t3039;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3048  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t434 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t3039 * ___context_2;
};
struct RecordProtocol_t3048_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t2717 * ___record_processing_0;
};
