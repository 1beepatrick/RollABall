#pragma once

// Mono.Xml.SecurityParser
struct SecurityParser_t3226;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t3225;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3227;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t3228;

// System.Void Mono.Xml.SecurityParser::.ctor()
 void SecurityParser__ctor_m9549 (SecurityParser_t3226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
 void SecurityParser_LoadXml_m9550 (SecurityParser_t3226 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
 SecurityElement_t3225 * SecurityParser_ToXml_m9551 (SecurityParser_t3226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnStartParsing_m9552 (SecurityParser_t3226 * __this, SmallXmlParser_t3227 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
 void SecurityParser_OnProcessingInstruction_m9553 (SecurityParser_t3226 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
 void SecurityParser_OnIgnorableWhitespace_m9554 (SecurityParser_t3226 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
 void SecurityParser_OnStartElement_m9555 (SecurityParser_t3226 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
 void SecurityParser_OnEndElement_m9556 (SecurityParser_t3226 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
 void SecurityParser_OnChars_m9557 (SecurityParser_t3226 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnEndParsing_m9558 (SecurityParser_t3226 * __this, SmallXmlParser_t3227 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
