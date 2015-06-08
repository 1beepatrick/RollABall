#pragma once

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t703;
// System.Action
struct Action_t696;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
 CancellationTokenRegistration_t704  CancellationTokenSource_Register_m2937 (CancellationTokenSource_t703 * __this, Action_t696 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
 void CancellationTokenSource_Unregister_m2938 (CancellationTokenSource_t703 * __this, Action_t696 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
 bool CancellationTokenSource_get_IsCancellationRequested_m2939 (CancellationTokenSource_t703 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
 CancellationToken_t436  CancellationTokenSource_get_Token_m2940 (CancellationTokenSource_t703 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel()
 void CancellationTokenSource_Cancel_m2941 (CancellationTokenSource_t703 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
 void CancellationTokenSource_Cancel_m2942 (CancellationTokenSource_t703 * __this, bool ___throwOnFirstException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::.ctor()
 void CancellationTokenSource__ctor_m2943 (CancellationTokenSource_t703 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
