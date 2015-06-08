#pragma once

// Parse.Internal.ParseRelationOperation
struct ParseRelationOperation_t505;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t28;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t490;
// Parse.ParseObject
struct ParseObject_t21;

// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.String)
 void ParseRelationOperation__ctor_m2282 (ParseRelationOperation_t505 * __this, Object_t* ___adds, Object_t* ___removes, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>,System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
 void ParseRelationOperation__ctor_m2283 (ParseRelationOperation_t505 * __this, Object_t* ___adds, Object_t* ___removes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Encode()
 Object_t * ParseRelationOperation_Encode_m2284 (ParseRelationOperation_t505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRelationOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseRelationOperation_MergeWithPrevious_m2285 (ParseRelationOperation_t505 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseRelationOperation_Apply_m2286 (ParseRelationOperation_t505 * __this, Object_t * ___oldValue, ParseObject_t21 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::get_TargetClassName()
 String_t* ParseRelationOperation_get_TargetClassName_m2287 (ParseRelationOperation_t505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.ParseRelationOperation::IdsFromObjects(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
 Object_t* ParseRelationOperation_IdsFromObjects_m2288 (ParseRelationOperation_t505 * __this, Object_t* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::<.ctor>b__0(Parse.ParseObject)
 String_t* ParseRelationOperation_U3C_ctorU3Eb__0_m2289 (Object_t * __this/* static, unused */, ParseObject_t21 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__5(System.String)
 Object_t * ParseRelationOperation_U3CEncodeU3Eb__5_m2290 (ParseRelationOperation_t505 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__6(System.String)
 Object_t * ParseRelationOperation_U3CEncodeU3Eb__6_m2291 (ParseRelationOperation_t505 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::<IdsFromObjects>b__7(Parse.ParseObject)
 String_t* ParseRelationOperation_U3CIdsFromObjectsU3Eb__7_m2292 (Object_t * __this/* static, unused */, ParseObject_t21 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
