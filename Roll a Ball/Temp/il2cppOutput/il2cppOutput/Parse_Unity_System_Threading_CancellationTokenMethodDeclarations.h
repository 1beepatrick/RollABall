#pragma once

// System.Threading.CancellationToken
struct CancellationToken_t436;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t703;
// System.Action
struct Action_t696;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Void System.Threading.CancellationToken::.ctor(System.Threading.CancellationTokenSource)
 void CancellationToken__ctor_m2930 (CancellationToken_t436 * __this, CancellationTokenSource_t703 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
 CancellationToken_t436  CancellationToken_get_None_m2931 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
 bool CancellationToken_get_IsCancellationRequested_m2932 (CancellationToken_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
 CancellationTokenRegistration_t704  CancellationToken_Register_m2933 (CancellationToken_t436 * __this, Action_t696 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
 void CancellationToken_ThrowIfCancellationRequested_m2934 (CancellationToken_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
