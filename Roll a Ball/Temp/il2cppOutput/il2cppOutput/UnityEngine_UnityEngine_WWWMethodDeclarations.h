#pragma once

// UnityEngine.WWW
struct WWW_t679;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t575;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.String[]
struct StringU5BU5D_t42;
// System.Text.Encoding
struct Encoding_t951;

// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void WWW__ctor_m4059 (WWW_t679 * __this, String_t* ___url, ByteU5BU5D_t433* ___postData, Dictionary_2_t575 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
 void WWW_Dispose_m4842 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
 void WWW_Finalize_m4843 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
 void WWW_DestroyWWW_m4844 (WWW_t679 * __this, bool ___cancel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
 void WWW_InitWWW_m4845 (WWW_t679 * __this, String_t* ___url, ByteU5BU5D_t433* ___postData, StringU5BU5D_t42* ___iHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
 Dictionary_2_t575 * WWW_get_responseHeaders_m4846 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
 String_t* WWW_get_responseHeadersString_m4847 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
 String_t* WWW_get_text_m4043 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
 Encoding_t951 * WWW_GetTextEncoder_m4848 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
 ByteU5BU5D_t433* WWW_get_bytes_m4849 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
 String_t* WWW_get_error_m4042 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
 bool WWW_get_isDone_m4032 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
 float WWW_get_progress_m4046 (WWW_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 StringU5BU5D_t42* WWW_FlattenedHeadersFrom_m4850 (Object_t * __this/* static, unused */, Dictionary_2_t575 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
 Dictionary_2_t575 * WWW_ParseHTTPHeaderString_m4851 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
