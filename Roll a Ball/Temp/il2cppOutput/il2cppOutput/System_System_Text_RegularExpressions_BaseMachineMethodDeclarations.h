#pragma once

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t2852;
// System.Text.RegularExpressions.Match
struct Match_t479;
// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.String
struct String_t;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t2851;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t480;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
 void BaseMachine__ctor_m6511 (BaseMachine_t2852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
 Match_t479 * BaseMachine_Scan_m6512 (BaseMachine_t2852 * __this, Regex_t478 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32)
 String_t* BaseMachine_LTRReplace_m6513 (BaseMachine_t2852 * __this, Regex_t478 * ___regex, String_t* ___input, MatchAppendEvaluator_t2851 * ___evaluator, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
 String_t* BaseMachine_LTRReplace_m6514 (BaseMachine_t2852 * __this, Regex_t478 * ___regex, String_t* ___input, MatchAppendEvaluator_t2851 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
 String_t* BaseMachine_RTLReplace_m6515 (BaseMachine_t2852 * __this, Regex_t478 * ___regex, String_t* ___input, MatchEvaluator_t480 * ___evaluator, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
