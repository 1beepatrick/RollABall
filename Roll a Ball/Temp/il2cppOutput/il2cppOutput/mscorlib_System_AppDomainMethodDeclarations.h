#pragma once

// System.AppDomain
struct AppDomain_t1831;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t948;
// System.Security.Policy.Evidence
struct Evidence_t3353;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3427;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m11991 (AppDomain_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
 String_t* AppDomain_get_FriendlyName_m4108 (AppDomain_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t1831 * AppDomain_getCurDomain_m11992 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t1831 * AppDomain_get_CurrentDomain_m4107 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t948 * AppDomain_LoadAssembly_m11993 (AppDomain_t1831 * __this, String_t* ___assemblyRef, Evidence_t3353 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t948 * AppDomain_Load_m11994 (AppDomain_t1831 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t948 * AppDomain_Load_m11995 (AppDomain_t1831 * __this, String_t* ___assemblyString, Evidence_t3353 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t3427 * AppDomain_InternalGetContext_m11996 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t3427 * AppDomain_InternalGetDefaultContext_m11997 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m11998 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m11999 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m12000 (AppDomain_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
