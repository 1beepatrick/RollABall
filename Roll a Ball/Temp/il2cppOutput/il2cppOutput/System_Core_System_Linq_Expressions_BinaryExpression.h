#pragma once
// System.Linq.Expressions.Expression
struct Expression_t1152;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2305;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t2315  : public Expression_t1152
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t1152 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t1152 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t2305 * ___conversion_4;
};
