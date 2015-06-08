#pragma once

// Parse.ParseACL
struct ParseACL_t533;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// Parse.ParseUser
struct ParseUser_t534;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t535;
// Parse.ParseACL/AccessKind
#include "Parse_Unity_Parse_ParseACL_AccessKind.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.ParseACL::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseACL__ctor_m2324 (ParseACL_t533 * __this, Object_t* ___jsonObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor()
 void ParseACL__ctor_m2325 (ParseACL_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor(Parse.ParseUser)
 void ParseACL__ctor_m2326 (ParseACL_t533 * __this, ParseUser_t534 * ___owner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseACL::ToJSON()
 Object_t* ParseACL_ToJSON_m2327 (ParseACL_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetAccess(Parse.ParseACL/AccessKind,System.String,System.Boolean)
 void ParseACL_SetAccess_m2328 (ParseACL_t533 * __this, int32_t ___kind, String_t* ___userId, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetAccess(Parse.ParseACL/AccessKind,System.String)
 bool ParseACL_GetAccess_m2329 (ParseACL_t533 * __this, int32_t ___kind, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicReadAccess()
 bool ParseACL_get_PublicReadAccess_m2330 (ParseACL_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicReadAccess(System.Boolean)
 void ParseACL_set_PublicReadAccess_m2331 (ParseACL_t533 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicWriteAccess()
 bool ParseACL_get_PublicWriteAccess_m2332 (ParseACL_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicWriteAccess(System.Boolean)
 void ParseACL_set_PublicWriteAccess_m2333 (ParseACL_t533 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(System.String,System.Boolean)
 void ParseACL_SetReadAccess_m2334 (ParseACL_t533 * __this, String_t* ___userId, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(Parse.ParseUser,System.Boolean)
 void ParseACL_SetReadAccess_m2335 (ParseACL_t533 * __this, ParseUser_t534 * ___user, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(System.String,System.Boolean)
 void ParseACL_SetWriteAccess_m2336 (ParseACL_t533 * __this, String_t* ___userId, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(Parse.ParseUser,System.Boolean)
 void ParseACL_SetWriteAccess_m2337 (ParseACL_t533 * __this, ParseUser_t534 * ___user, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(System.String)
 bool ParseACL_GetReadAccess_m2338 (ParseACL_t533 * __this, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(Parse.ParseUser)
 bool ParseACL_GetReadAccess_m2339 (ParseACL_t533 * __this, ParseUser_t534 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(System.String)
 bool ParseACL_GetWriteAccess_m2340 (ParseACL_t533 * __this, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(Parse.ParseUser)
 bool ParseACL_GetWriteAccess_m2341 (ParseACL_t533 * __this, ParseUser_t534 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(System.String,System.Boolean)
 void ParseACL_SetRoleReadAccess_m2342 (ParseACL_t533 * __this, String_t* ___roleName, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(Parse.ParseRole,System.Boolean)
 void ParseACL_SetRoleReadAccess_m2343 (ParseACL_t533 * __this, ParseRole_t535 * ___role, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(System.String)
 bool ParseACL_GetRoleReadAccess_m2344 (ParseACL_t533 * __this, String_t* ___roleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(Parse.ParseRole)
 bool ParseACL_GetRoleReadAccess_m2345 (ParseACL_t533 * __this, ParseRole_t535 * ___role, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(System.String,System.Boolean)
 void ParseACL_SetRoleWriteAccess_m2346 (ParseACL_t533 * __this, String_t* ___roleName, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(Parse.ParseRole,System.Boolean)
 void ParseACL_SetRoleWriteAccess_m2347 (ParseACL_t533 * __this, ParseRole_t535 * ___role, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(System.String)
 bool ParseACL_GetRoleWriteAccess_m2348 (ParseACL_t533 * __this, String_t* ___roleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(Parse.ParseRole)
 bool ParseACL_GetRoleWriteAccess_m2349 (ParseACL_t533 * __this, ParseRole_t535 * ___role, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 bool ParseACL_U3C_ctorU3Eb__0_m2350 (Object_t * __this/* static, unused */, KeyValuePair_2_t536  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 String_t* ParseACL_U3C_ctorU3Eb__1_m2351 (Object_t * __this/* static, unused */, KeyValuePair_2_t536  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 bool ParseACL_U3C_ctorU3Eb__2_m2352 (Object_t * __this/* static, unused */, KeyValuePair_2_t536  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 String_t* ParseACL_U3C_ctorU3Eb__3_m2353 (Object_t * __this/* static, unused */, KeyValuePair_2_t536  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
