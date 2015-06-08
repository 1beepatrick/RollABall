#pragma once

// Mono.Security.Protocol.Tls.ClientSessionCache
struct ClientSessionCache_t3052;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t3051;
// Mono.Security.Protocol.Tls.Context
struct Context_t3039;

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
 void ClientSessionCache__cctor_m7762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
 void ClientSessionCache_Add_m7763 (Object_t * __this/* static, unused */, String_t* ___host, ByteU5BU5D_t433* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
 ByteU5BU5D_t433* ClientSessionCache_FromHost_m7764 (Object_t * __this/* static, unused */, String_t* ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
 ClientSessionInfo_t3051 * ClientSessionCache_FromContext_m7765 (Object_t * __this/* static, unused */, Context_t3039 * ___context, bool ___checkValidity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextInCache_m7766 (Object_t * __this/* static, unused */, Context_t3039 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextFromCache_m7767 (Object_t * __this/* static, unused */, Context_t3039 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
