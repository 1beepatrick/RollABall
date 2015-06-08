#pragma once

// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t2889;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t2890;
// System.Collections.Hashtable
struct Hashtable_t688;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t2891;
// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t2892;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2893;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2894;
// System.Collections.ArrayList
struct ArrayList_t2764;
// System.ArgumentException
struct ArgumentException_t392;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"

// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
 void Parser__ctor_m6727 (Parser_t2889 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
 int32_t Parser_ParseDecimal_m6728 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
 int32_t Parser_ParseOctal_m6729 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
 int32_t Parser_ParseHex_m6730 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___digits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
 int32_t Parser_ParseNumber_m6731 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___b, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
 String_t* Parser_ParseName_m6732 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
 RegularExpression_t2890 * Parser_ParseRegularExpression_m6733 (Parser_t2889 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
 int32_t Parser_GetMapping_m6734 (Parser_t2889 * __this, Hashtable_t688 * ___mapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
 void Parser_ParseGroup_m6735 (Parser_t2889 * __this, Group_t2891 * ___group, int32_t ___options, Assertion_t2892 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
 Expression_t2893 * Parser_ParseGroupingConstruct_m6736 (Parser_t2889 * __this, int32_t* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
 bool Parser_ParseAssertionType_m6737 (Parser_t2889 * __this, ExpressionAssertion_t2894 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
 void Parser_ParseOptions_m6738 (Parser_t2889 * __this, int32_t* ___options, bool ___negate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
 Expression_t2893 * Parser_ParseCharacterClass_m6739 (Parser_t2889 * __this, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
 bool Parser_ParseRepetitionBounds_m6740 (Parser_t2889 * __this, int32_t* ___min, int32_t* ___max, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
 uint16_t Parser_ParseUnicodeCategory_m6741 (Parser_t2889 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
 Expression_t2893 * Parser_ParseSpecial_m6742 (Parser_t2889 * __this, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
 int32_t Parser_ParseEscape_m6743 (Parser_t2889 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
 String_t* Parser_ParseName_m6744 (Parser_t2889 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
 bool Parser_IsNameChar_m6745 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
 int32_t Parser_ParseNumber_m6746 (Parser_t2889 * __this, int32_t ___b, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
 int32_t Parser_ParseDigit_m6747 (Object_t * __this/* static, unused */, uint16_t ___c, int32_t ___b, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
 void Parser_ConsumeWhitespace_m6748 (Parser_t2889 * __this, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
 void Parser_ResolveReferences_m6749 (Parser_t2889 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
 void Parser_HandleExplicitNumericGroups_m6750 (Parser_t2889 * __this, ArrayList_t2764 * ___explicit_numeric_groups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsIgnoreCase_m6751 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsMultiline_m6752 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsExplicitCapture_m6753 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsSingleline_m6754 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsIgnorePatternWhitespace_m6755 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsECMAScript_m6756 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
 ArgumentException_t392 * Parser_NewParseException_m6757 (Parser_t2889 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
