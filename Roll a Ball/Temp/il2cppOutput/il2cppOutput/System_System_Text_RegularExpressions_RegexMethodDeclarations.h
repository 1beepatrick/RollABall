#pragma once

// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t2860;
// System.Text.RegularExpressions.Match
struct Match_t479;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t2856;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t480;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2855;
// System.String[]
struct StringU5BU5D_t42;
// System.Collections.IDictionary
struct IDictionary_t1192;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
 void Regex__ctor_m6560 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
 void Regex__ctor_m3281 (Regex_t478 * __this, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
 void Regex__ctor_m3282 (Regex_t478 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Regex__ctor_m6561 (Regex_t478 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
 void Regex__cctor_m6562 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m6563 (Regex_t478 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
 void Regex_validate_options_m6564 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
 void Regex_Init_m6565 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
 void Regex_InitNewRegex_m6566 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
 Object_t * Regex_CreateMachineFactory_m6567 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
 int32_t Regex_get_Options_m6568 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
 bool Regex_get_RightToLeft_m6569 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
 int32_t Regex_GroupNumberFromName_m6570 (Regex_t478 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
 int32_t Regex_GetGroupIndex_m6571 (Regex_t478 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
 int32_t Regex_default_startat_m6572 (Regex_t478 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
 bool Regex_IsMatch_m3965 (Regex_t478 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
 bool Regex_IsMatch_m6573 (Regex_t478 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
 Match_t479 * Regex_Match_m3263 (Regex_t478 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
 MatchCollection_t2856 * Regex_Matches_m6574 (Regex_t478 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
 MatchCollection_t2856 * Regex_Matches_m6575 (Regex_t478 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator)
 String_t* Regex_Replace_m3278 (Regex_t478 * __this, String_t* ___input, MatchEvaluator_t480 * ___evaluator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
 String_t* Regex_Replace_m6576 (Regex_t478 * __this, String_t* ___input, MatchEvaluator_t480 * ___evaluator, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
 String_t* Regex_ToString_m6577 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
 int32_t Regex_get_Gap_m6578 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
 Object_t * Regex_CreateMachine_m6579 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
 StringU5BU5D_t42* Regex_GetGroupNamesArray_m6580 (Object_t * __this/* static, unused */, int32_t ___groupCount, Object_t * ___mapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
 Int32U5BU5D_t2359* Regex_get_GroupNumbers_m6581 (Regex_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
