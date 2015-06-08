#pragma once
// System.Security.SecurityElement
struct SecurityElement_t3225;
// System.Collections.Stack
struct Stack_t2198;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t3226  : public SmallXmlParser_t3227
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t3225 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t3225 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2198 * ___stack_15;
};
