﻿#pragma once

// System.Text.RegularExpressions.PatternCompiler
struct PatternCompiler_t2875;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t2860;
// System.Collections.BitArray
struct BitArray_t2876;
// System.String
struct String_t;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t2870;
// System.Text.RegularExpressions.OpCode
#include "System_System_Text_RegularExpressions_OpCode.h"
// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
 void PatternCompiler__ctor_m6614 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
 uint16_t PatternCompiler_EncodeOp_m6615 (Object_t * __this/* static, unused */, uint16_t ___op, uint16_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
 Object_t * PatternCompiler_GetMachineFactory_m6616 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
 void PatternCompiler_EmitFalse_m6617 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
 void PatternCompiler_EmitTrue_m6618 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
 void PatternCompiler_EmitCount_m6619 (PatternCompiler_t2875 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
 void PatternCompiler_EmitCharacter_m6620 (PatternCompiler_t2875 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
 void PatternCompiler_EmitCategory_m6621 (PatternCompiler_t2875 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
 void PatternCompiler_EmitNotCategory_m6622 (PatternCompiler_t2875 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
 void PatternCompiler_EmitRange_m6623 (PatternCompiler_t2875 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
 void PatternCompiler_EmitSet_m6624 (PatternCompiler_t2875 * __this, uint16_t ___lo, BitArray_t2876 * ___set, bool ___negate, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
 void PatternCompiler_EmitString_m6625 (PatternCompiler_t2875 * __this, String_t* ___str, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
 void PatternCompiler_EmitPosition_m6626 (PatternCompiler_t2875 * __this, uint16_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
 void PatternCompiler_EmitOpen_m6627 (PatternCompiler_t2875 * __this, int32_t ___gid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
 void PatternCompiler_EmitClose_m6628 (PatternCompiler_t2875 * __this, int32_t ___gid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitBalanceStart_m6629 (PatternCompiler_t2875 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
 void PatternCompiler_EmitBalance_m6630 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
 void PatternCompiler_EmitReference_m6631 (PatternCompiler_t2875 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitIfDefined_m6632 (PatternCompiler_t2875 * __this, int32_t ___gid, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitSub_m6633 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitTest_m6634 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___yes, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitBranch_m6635 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___next, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitJump_m6636 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitRepeat_m6637 (PatternCompiler_t2875 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t2870 * ___until, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitUntil_m6638 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___repeat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitFastRepeat_m6639 (PatternCompiler_t2875 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitIn_m6640 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitAnchor_m6641 (PatternCompiler_t2875 * __this, bool ___reverse, int32_t ___offset, LinkRef_t2870 * ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
 void PatternCompiler_EmitInfo_m6642 (PatternCompiler_t2875 * __this, int32_t ___count, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
 LinkRef_t2870 * PatternCompiler_NewLink_m6643 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_ResolveLink_m6644 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___lref, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
 void PatternCompiler_EmitBranchEnd_m6645 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
 void PatternCompiler_EmitAlternationEnd_m6646 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 uint16_t PatternCompiler_MakeFlags_m6647 (Object_t * __this/* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
 void PatternCompiler_Emit_m6648 (PatternCompiler_t2875 * __this, uint16_t ___op, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
 void PatternCompiler_Emit_m6649 (PatternCompiler_t2875 * __this, uint16_t ___op, uint16_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
 void PatternCompiler_Emit_m6650 (PatternCompiler_t2875 * __this, uint16_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
 int32_t PatternCompiler_get_CurrentAddress_m6651 (PatternCompiler_t2875 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_BeginLink_m6652 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___lref, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
 void PatternCompiler_EmitLink_m6653 (PatternCompiler_t2875 * __this, LinkRef_t2870 * ___lref, MethodInfo* method) IL2CPP_METHOD_ATTR;
