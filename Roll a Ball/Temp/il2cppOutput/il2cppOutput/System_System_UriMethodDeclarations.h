#pragma once

// System.Uri
struct Uri_t454;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t2911;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t200;
// System.IO.MemoryStream
struct MemoryStream_t690;
// System.Text.Encoding
struct Encoding_t951;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.UriPartial
#include "System_System_UriPartial.h"

// System.Void System.Uri::.ctor(System.String)
 void Uri__ctor_m3437 (Uri_t454 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri__ctor_m6878 (Uri_t454 * __this, SerializationInfo_t2166 * ___serializationInfo, StreamingContext_t2167  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
 void Uri__ctor_m3126 (Uri_t454 * __this, String_t* ___uriString, int32_t ___uriKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
 void Uri__ctor_m3456 (Uri_t454 * __this, Uri_t454 * ___baseUri, Uri_t454 * ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
 void Uri__ctor_m6879 (Uri_t454 * __this, String_t* ___uriString, bool ___dontEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
 void Uri__ctor_m3097 (Uri_t454 * __this, Uri_t454 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
 void Uri__cctor_m6880 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m6881 (Uri_t454 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
 void Uri_Merge_m6882 (Uri_t454 * __this, Uri_t454 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
 String_t* Uri_get_AbsoluteUri_m3112 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
 String_t* Uri_get_Authority_m6883 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
 String_t* Uri_get_Fragment_m3114 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
 String_t* Uri_get_Host_m6884 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
 bool Uri_get_IsFile_m6885 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
 bool Uri_get_IsLoopback_m6886 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
 bool Uri_get_IsUnc_m6887 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
 String_t* Uri_get_Query_m3115 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
 String_t* Uri_get_Scheme_m6888 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
 bool Uri_get_IsAbsoluteUri_m6889 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
 String_t* Uri_get_OriginalString_m6890 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
 int32_t Uri_CheckHostName_m6891 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
 bool Uri_IsIPv4Address_m6892 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
 bool Uri_IsDomainAddress_m6893 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
 bool Uri_CheckSchemeName_m6894 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
 bool Uri_IsAlpha_m6895 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
 bool Uri_Equals_m6896 (Uri_t454 * __this, Object_t * ___comparant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
 bool Uri_InternalEquals_m6897 (Uri_t454 * __this, Uri_t454 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
 int32_t Uri_GetHashCode_m6898 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
 String_t* Uri_GetLeftPart_m6899 (Uri_t454 * __this, int32_t ___part, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
 int32_t Uri_FromHex_m6900 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
 String_t* Uri_HexEscape_m6901 (Object_t * __this/* static, unused */, uint16_t ___character, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
 bool Uri_IsHexDigit_m6902 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
 bool Uri_IsHexEncoding_m6903 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
 void Uri_AppendQueryAndFragment_m6904 (Uri_t454 * __this, String_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
 String_t* Uri_ToString_m6905 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
 String_t* Uri_EscapeString_m6906 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
 String_t* Uri_EscapeString_m6907 (Object_t * __this/* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
 void Uri_ParseUri_m6908 (Uri_t454 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
 String_t* Uri_Unescape_m6909 (Uri_t454 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
 String_t* Uri_Unescape_m6910 (Object_t * __this/* static, unused */, String_t* ___str, bool ___excludeSpecial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
 void Uri_ParseAsWindowsUNC_m6911 (Uri_t454 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
 String_t* Uri_ParseAsWindowsAbsoluteFilePath_m6912 (Uri_t454 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
 void Uri_ParseAsUnixAbsoluteFilePath_m6913 (Uri_t454 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
 void Uri_Parse_m6914 (Uri_t454 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
 String_t* Uri_ParseNoExceptions_m6915 (Uri_t454 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
 bool Uri_CompactEscaped_m6916 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
 String_t* Uri_Reduce_m6917 (Object_t * __this/* static, unused */, String_t* ___path, bool ___compact_escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
 uint16_t Uri_HexUnescapeMultiByte_m6918 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
 String_t* Uri_GetSchemeDelimiter_m6919 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
 int32_t Uri_GetDefaultPort_m6920 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
 String_t* Uri_GetOpaqueWiseSchemeDelimiter_m6921 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
 bool Uri_IsPredefinedScheme_m6922 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
 UriParser_t2911 * Uri_get_Parser_m6923 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeDataChar(System.Char)
 bool Uri_NeedToEscapeDataChar_m6924 (Object_t * __this/* static, unused */, uint16_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeDataString(System.String)
 String_t* Uri_EscapeDataString_m3476 (Object_t * __this/* static, unused */, String_t* ___stringToEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeUriChar(System.Char)
 bool Uri_NeedToEscapeUriChar_m6925 (Object_t * __this/* static, unused */, uint16_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeUriString(System.String)
 String_t* Uri_EscapeUriString_m6926 (Object_t * __this/* static, unused */, String_t* ___stringToEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
 String_t* Uri_UnescapeDataString_m3470 (Object_t * __this/* static, unused */, String_t* ___stringToUnescape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
 int32_t Uri_GetInt_m6927 (Object_t * __this/* static, unused */, uint8_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
 int32_t Uri_GetChar_m6928 (Object_t * __this/* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
 CharU5BU5D_t200* Uri_GetChars_m6929 (Object_t * __this/* static, unused */, MemoryStream_t690 * ___b, Encoding_t951 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
 void Uri_EnsureAbsoluteUri_m6930 (Uri_t454 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
 bool Uri_op_Equality_m6931 (Object_t * __this/* static, unused */, Uri_t454 * ___u1, Uri_t454 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
