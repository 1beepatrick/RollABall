#pragma once

// Parse.ParseRole
struct ParseRole_t535;
// System.String
struct String_t;
// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t652;
// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t653;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t654;
// Parse.ParseACL
struct ParseACL_t533;
// System.Object
struct Object_t;

// System.Void Parse.ParseRole::.ctor()
 void ParseRole__ctor_m2723 (ParseRole_t535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.ctor(System.String,Parse.ParseACL)
 void ParseRole__ctor_m2724 (ParseRole_t535 * __this, String_t* ___name, ParseACL_t533 * ___acl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRole::get_Name()
 String_t* ParseRole_get_Name_m2725 (ParseRole_t535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::set_Name(System.String)
 void ParseRole_set_Name_m2726 (ParseRole_t535 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseUser> Parse.ParseRole::get_Users()
 ParseRelation_1_t652 * ParseRole_get_Users_m2727 (ParseRole_t535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseRole> Parse.ParseRole::get_Roles()
 ParseRelation_1_t653 * ParseRole_get_Roles_m2728 (ParseRole_t535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::OnSettingValue(System.String&,System.Object&)
 void ParseRole_OnSettingValue_m2729 (ParseRole_t535 * __this, String_t** ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseRole> Parse.ParseRole::get_Query()
 ParseQuery_1_t654 * ParseRole_get_Query_m2730 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.cctor()
 void ParseRole__cctor_m2731 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
