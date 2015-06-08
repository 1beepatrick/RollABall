#pragma once

// System.Linq.Expressions.Expression
struct Expression_t1152;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t523;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1155;
// System.Reflection.MethodInfo
struct MethodInfo_t517;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t1151;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t2306;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1160;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1162;
// System.Reflection.FieldInfo
struct FieldInfo_t1161;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2304;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t2307;
// System.Reflection.MethodBase
struct MethodBase_t935;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2308;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t2309;
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
 void Expression__ctor_m5503 (Expression_t1152 * __this, int32_t ___node_type, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
 int32_t Expression_get_NodeType_m5504 (Expression_t1152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
 Type_t * Expression_get_Type_m5505 (Expression_t1152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
 String_t* Expression_ToString_m5506 (Expression_t1152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
 bool Expression_IsAssignableToParameterType_m5507 (Object_t * __this/* static, unused */, Type_t * ___type, ParameterInfo_t523 * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
 MethodCallExpression_t1155 * Expression_Call_m3944 (Object_t * __this/* static, unused */, Expression_t1152 * ___instance, MethodInfo_t517 * ___method, ExpressionU5BU5D_t1151* ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
 MethodCallExpression_t1155 * Expression_Call_m5508 (Object_t * __this/* static, unused */, Expression_t1152 * ___instance, MethodInfo_t517 * ___method, Object_t* ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
 ConstantExpression_t1160 * Expression_Constant_m3941 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
 ConstantExpression_t1160 * Expression_Constant_m5509 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.Reflection.FieldInfo)
 MemberExpression_t1162 * Expression_Field_m3943 (Object_t * __this/* static, unused */, Expression_t1152 * ___expression, FieldInfo_t1161 * ___field, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
 bool Expression_CanAssign_m5510 (Object_t * __this/* static, unused */, Type_t * ___target, Type_t * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
 Expression_t1152 * Expression_CheckLambda_m5511 (Object_t * __this/* static, unused */, Type_t * ___delegateType, Expression_t1152 * ___body, ReadOnlyCollection_1_t2304 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CreateArgumentList(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
 Object_t* Expression_CreateArgumentList_m5512 (Object_t * __this/* static, unused */, Object_t* ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
 void Expression_CheckNonGenericMethod_m5513 (Object_t * __this/* static, unused */, MethodBase_t935 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CheckMethodArguments(System.Reflection.MethodBase,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
 ReadOnlyCollection_1_t2308 * Expression_CheckMethodArguments_m5514 (Object_t * __this/* static, unused */, MethodBase_t935 * ___method, Object_t* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
 UnaryExpression_t2309 * Expression_Quote_m5515 (Object_t * __this/* static, unused */, Expression_t1152 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
