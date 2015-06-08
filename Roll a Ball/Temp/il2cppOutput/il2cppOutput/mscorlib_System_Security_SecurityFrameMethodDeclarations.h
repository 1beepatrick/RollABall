#pragma once

// System.Security.SecurityFrame
struct SecurityFrame_t3582;
// System.Reflection.Assembly
struct Assembly_t948;
// System.AppDomain
struct AppDomain_t1831;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t3581;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2764;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
 void SecurityFrame__ctor_m11637 (SecurityFrame_t3582 * __this, RuntimeSecurityFrame_t3581 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
 Array_t * SecurityFrame__GetSecurityStack_m11638 (Object_t * __this/* static, unused */, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
 void SecurityFrame_InitFromRuntimeFrame_m11639 (SecurityFrame_t3582 * __this, RuntimeSecurityFrame_t3581 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
 Assembly_t948 * SecurityFrame_get_Assembly_m11640 (SecurityFrame_t3582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
 AppDomain_t1831 * SecurityFrame_get_Domain_m11641 (SecurityFrame_t3582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
 String_t* SecurityFrame_ToString_m11642 (SecurityFrame_t3582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
 ArrayList_t2764 * SecurityFrame_GetStack_m11643 (Object_t * __this/* static, unused */, int32_t ___skipFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
