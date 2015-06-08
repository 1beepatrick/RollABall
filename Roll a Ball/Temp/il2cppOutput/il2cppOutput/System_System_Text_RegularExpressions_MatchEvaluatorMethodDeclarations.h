#pragma once

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t480;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t479;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
 void MatchEvaluator__ctor_m3277 (MatchEvaluator_t480 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
 String_t* MatchEvaluator_Invoke_m6954 (MatchEvaluator_t480 * __this, Match_t479 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
 Object_t * MatchEvaluator_BeginInvoke_m6955 (MatchEvaluator_t480 * __this, Match_t479 * ___match, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
 String_t* MatchEvaluator_EndInvoke_m6956 (MatchEvaluator_t480 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
