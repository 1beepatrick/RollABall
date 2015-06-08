#pragma once

// System.Guid/GuidParser
struct GuidParser_t3665;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
 void GuidParser__ctor_m12421 (GuidParser_t3665 * __this, String_t* ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
 void GuidParser_Reset_m12422 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
 bool GuidParser_AtEnd_m12423 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
 void GuidParser_ThrowFormatException_m12424 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
 uint64_t GuidParser_ParseHex_m12425 (GuidParser_t3665 * __this, int32_t ___length, bool ___strictLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
 bool GuidParser_ParseOptChar_m12426 (GuidParser_t3665 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
 void GuidParser_ParseChar_m12427 (GuidParser_t3665 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
 Guid_t641  GuidParser_ParseGuid1_m12428 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
 void GuidParser_ParseHexPrefix_m12429 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
 Guid_t641  GuidParser_ParseGuid2_m12430 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
 Guid_t641  GuidParser_Parse_m12431 (GuidParser_t3665 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
