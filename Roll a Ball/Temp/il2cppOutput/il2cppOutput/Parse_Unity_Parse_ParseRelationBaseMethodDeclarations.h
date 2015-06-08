#pragma once

// Parse.ParseRelationBase
struct ParseRelationBase_t650;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t21;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;

// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String)
 void ParseRelationBase__ctor_m2714 (ParseRelationBase_t650 * __this, ParseObject_t21 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String,System.String)
 void ParseRelationBase__ctor_m2715 (ParseRelationBase_t650 * __this, ParseObject_t21 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::EnsureParentAndKey(Parse.ParseObject,System.String)
 void ParseRelationBase_EnsureParentAndKey_m2716 (ParseRelationBase_t650 * __this, ParseObject_t21 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Add(Parse.ParseObject)
 void ParseRelationBase_Add_m2717 (ParseRelationBase_t650 * __this, ParseObject_t21 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Remove(Parse.ParseObject)
 void ParseRelationBase_Remove_m2718 (ParseRelationBase_t650 * __this, ParseObject_t21 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseRelationBase::ToJSON()
 Object_t* ParseRelationBase_ToJSON_m2719 (ParseRelationBase_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRelationBase::get_TargetClassName()
 String_t* ParseRelationBase_get_TargetClassName_m2720 (ParseRelationBase_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::set_TargetClassName(System.String)
 void ParseRelationBase_set_TargetClassName_m2721 (ParseRelationBase_t650 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelationBase Parse.ParseRelationBase::CreateRelation(Parse.ParseObject,System.String,System.String)
 ParseRelationBase_t650 * ParseRelationBase_CreateRelation_m2722 (Object_t * __this/* static, unused */, ParseObject_t21 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
