#pragma once
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2894;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2899;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2903;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t2904  : public Assertion_t2892
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t2894 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t2899 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t2903 * ___literal_3;
};
