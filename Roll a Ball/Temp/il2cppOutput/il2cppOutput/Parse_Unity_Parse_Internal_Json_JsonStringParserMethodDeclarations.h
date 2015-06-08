#pragma once

// Parse.Internal.Json/JsonStringParser
struct JsonStringParser_t477;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t200;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t478;
// System.Text.RegularExpressions.Match
struct Match_t479;

// System.String Parse.Internal.Json/JsonStringParser::get_Input()
 String_t* JsonStringParser_get_Input_m2153 (JsonStringParser_t477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_Input(System.String)
 void JsonStringParser_set_Input_m2154 (JsonStringParser_t477 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Parse.Internal.Json/JsonStringParser::get_InputAsArray()
 CharU5BU5D_t200* JsonStringParser_get_InputAsArray_m2155 (JsonStringParser_t477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_InputAsArray(System.Char[])
 void JsonStringParser_set_InputAsArray_m2156 (JsonStringParser_t477 * __this, CharU5BU5D_t200* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.Json/JsonStringParser::get_CurrentIndex()
 int32_t JsonStringParser_get_CurrentIndex_m2157 (JsonStringParser_t477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::Skip(System.Int32)
 void JsonStringParser_Skip_m2158 (JsonStringParser_t477 * __this, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::.ctor(System.String)
 void JsonStringParser__ctor_m2159 (JsonStringParser_t477 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseObject(System.Object&)
 bool JsonStringParser_ParseObject_m2160 (JsonStringParser_t477 * __this, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseMember(System.Object&)
 bool JsonStringParser_ParseMember_m2161 (JsonStringParser_t477 * __this, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseArray(System.Object&)
 bool JsonStringParser_ParseArray_m2162 (JsonStringParser_t477 * __this, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseValue(System.Object&)
 bool JsonStringParser_ParseValue_m2163 (JsonStringParser_t477 * __this, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseString(System.Object&)
 bool JsonStringParser_ParseString_m2164 (JsonStringParser_t477 * __this, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseNumber(System.Object&)
 bool JsonStringParser_ParseNumber_m2165 (JsonStringParser_t477 * __this, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.Match&)
 bool JsonStringParser_Accept_m2166 (JsonStringParser_t477 * __this, Regex_t478 * ___matcher, Match_t479 ** ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char)
 bool JsonStringParser_Accept_m2167 (JsonStringParser_t477 * __this, uint16_t ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char[])
 bool JsonStringParser_Accept_m2168 (JsonStringParser_t477 * __this, CharU5BU5D_t200* ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
