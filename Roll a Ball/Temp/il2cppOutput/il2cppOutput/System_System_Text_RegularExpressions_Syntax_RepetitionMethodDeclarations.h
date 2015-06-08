﻿#pragma once

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t2902;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2893;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2896;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t2897;

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
 void Repetition__ctor_m6800 (Repetition_t2902 * __this, int32_t ___min, int32_t ___max, bool ___lazy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
 Expression_t2893 * Repetition_get_Expression_m6801 (Repetition_t2902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
 void Repetition_set_Expression_m6802 (Repetition_t2902 * __this, Expression_t2893 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
 int32_t Repetition_get_Minimum_m6803 (Repetition_t2902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Repetition_Compile_m6804 (Repetition_t2902 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
 void Repetition_GetWidth_m6805 (Repetition_t2902 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
 AnchorInfo_t2897 * Repetition_GetAnchorInfo_m6806 (Repetition_t2902 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
