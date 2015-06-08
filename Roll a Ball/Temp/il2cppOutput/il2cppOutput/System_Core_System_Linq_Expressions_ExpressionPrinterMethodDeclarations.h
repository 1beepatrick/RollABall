#pragma once

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t2318;
// System.Text.StringBuilder
struct StringBuilder_t295;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t1152;
// System.Linq.Expressions.ElementInit
struct ElementInit_t2317;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t2320;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t2309;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t2315;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t2321;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1160;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t2316;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1154;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1162;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1155;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t2322;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t2323;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t2324;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2305;
// System.Linq.Expressions.NewExpression
struct NewExpression_t2325;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t2326;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t2327;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t2328;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t2329;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
 void ExpressionPrinter__ctor_m5528 (ExpressionPrinter_t2318 * __this, StringBuilder_t295 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
 void ExpressionPrinter__ctor_m5529 (ExpressionPrinter_t2318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
 String_t* ExpressionPrinter_ToString_m5530 (Object_t * __this/* static, unused */, Expression_t1152 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
 String_t* ExpressionPrinter_ToString_m5531 (Object_t * __this/* static, unused */, ElementInit_t2317 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
 String_t* ExpressionPrinter_ToString_m5532 (Object_t * __this/* static, unused */, MemberBinding_t2320 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
 void ExpressionPrinter_Print_m5533 (ExpressionPrinter_t2318 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
 void ExpressionPrinter_Print_m5534 (ExpressionPrinter_t2318 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
 void ExpressionPrinter_Print_m5535 (ExpressionPrinter_t2318 * __this, String_t* ___str, ObjectU5BU5D_t315* ___objs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
 void ExpressionPrinter_VisitElementInitializer_m5536 (ExpressionPrinter_t2318 * __this, ElementInit_t2317 * ___initializer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
 void ExpressionPrinter_VisitUnary_m5537 (ExpressionPrinter_t2318 * __this, UnaryExpression_t2309 * ___unary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
 String_t* ExpressionPrinter_OperatorToString_m5538 (Object_t * __this/* static, unused */, BinaryExpression_t2315 * ___binary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
 bool ExpressionPrinter_IsBoolean_m5539 (Object_t * __this/* static, unused */, Expression_t1152 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
 void ExpressionPrinter_PrintArrayIndex_m5540 (ExpressionPrinter_t2318 * __this, BinaryExpression_t2315 * ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
 void ExpressionPrinter_VisitBinary_m5541 (ExpressionPrinter_t2318 * __this, BinaryExpression_t2315 * ___binary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
 void ExpressionPrinter_VisitTypeIs_m5542 (ExpressionPrinter_t2318 * __this, TypeBinaryExpression_t2321 * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
 void ExpressionPrinter_VisitConstant_m5543 (ExpressionPrinter_t2318 * __this, ConstantExpression_t1160 * ___constant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
 bool ExpressionPrinter_HasStringRepresentation_m5544 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
 void ExpressionPrinter_VisitConditional_m5545 (ExpressionPrinter_t2318 * __this, ConditionalExpression_t2316 * ___conditional, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
 void ExpressionPrinter_VisitParameter_m5546 (ExpressionPrinter_t2318 * __this, ParameterExpression_t1154 * ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
 void ExpressionPrinter_VisitMemberAccess_m5547 (ExpressionPrinter_t2318 * __this, MemberExpression_t1162 * ___access, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
 void ExpressionPrinter_VisitMethodCall_m5548 (ExpressionPrinter_t2318 * __this, MethodCallExpression_t1155 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
 void ExpressionPrinter_VisitMemberAssignment_m5549 (ExpressionPrinter_t2318 * __this, MemberAssignment_t2322 * ___assignment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
 void ExpressionPrinter_VisitMemberMemberBinding_m5550 (ExpressionPrinter_t2318 * __this, MemberMemberBinding_t2323 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
 void ExpressionPrinter_VisitMemberListBinding_m5551 (ExpressionPrinter_t2318 * __this, MemberListBinding_t2324 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
 void ExpressionPrinter_VisitLambda_m5552 (ExpressionPrinter_t2318 * __this, LambdaExpression_t2305 * ___lambda, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
 void ExpressionPrinter_VisitNew_m5553 (ExpressionPrinter_t2318 * __this, NewExpression_t2325 * ___nex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
 void ExpressionPrinter_VisitMemberInit_m5554 (ExpressionPrinter_t2318 * __this, MemberInitExpression_t2326 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
 void ExpressionPrinter_VisitListInit_m5555 (ExpressionPrinter_t2318 * __this, ListInitExpression_t2327 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
 void ExpressionPrinter_VisitNewArray_m5556 (ExpressionPrinter_t2318 * __this, NewArrayExpression_t2328 * ___newArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
 void ExpressionPrinter_VisitInvocation_m5557 (ExpressionPrinter_t2318 * __this, InvocationExpression_t2329 * ___invocation, MethodInfo* method) IL2CPP_METHOD_ATTR;
