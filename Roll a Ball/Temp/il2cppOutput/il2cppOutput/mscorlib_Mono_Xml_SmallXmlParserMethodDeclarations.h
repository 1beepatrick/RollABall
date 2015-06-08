#pragma once

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3227;
// System.Exception
struct Exception_t35;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t777;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t3230;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t3229;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
 void SmallXmlParser__ctor_m9565 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
 Exception_t35 * SmallXmlParser_Error_m9566 (SmallXmlParser_t3227 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
 Exception_t35 * SmallXmlParser_UnexpectedEndError_m9567 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
 bool SmallXmlParser_IsNameChar_m9568 (SmallXmlParser_t3227 * __this, uint16_t ___c, bool ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
 bool SmallXmlParser_IsWhitespace_m9569 (SmallXmlParser_t3227 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
 void SmallXmlParser_SkipWhitespaces_m9570 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
 void SmallXmlParser_HandleWhitespaces_m9571 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
 void SmallXmlParser_SkipWhitespaces_m9572 (SmallXmlParser_t3227 * __this, bool ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
 int32_t SmallXmlParser_Peek_m9573 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
 int32_t SmallXmlParser_Read_m9574 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
 void SmallXmlParser_Expect_m9575 (SmallXmlParser_t3227 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
 String_t* SmallXmlParser_ReadUntil_m9576 (SmallXmlParser_t3227 * __this, uint16_t ___until, bool ___handleReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
 String_t* SmallXmlParser_ReadName_m9577 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
 void SmallXmlParser_Parse_m9578 (SmallXmlParser_t3227 * __this, TextReader_t777 * ___input, Object_t * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
 void SmallXmlParser_Cleanup_m9579 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
 void SmallXmlParser_ReadContent_m9580 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
 void SmallXmlParser_HandleBufferedContent_m9581 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
 void SmallXmlParser_ReadCharacters_m9582 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
 void SmallXmlParser_ReadReference_m9583 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
 int32_t SmallXmlParser_ReadCharacterReference_m9584 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
 void SmallXmlParser_ReadAttribute_m9585 (SmallXmlParser_t3227 * __this, AttrListImpl_t3229 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
 void SmallXmlParser_ReadCDATASection_m9586 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
 void SmallXmlParser_ReadComment_m9587 (SmallXmlParser_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
