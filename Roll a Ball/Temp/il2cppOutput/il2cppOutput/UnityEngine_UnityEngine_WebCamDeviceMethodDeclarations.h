#pragma once

// UnityEngine.WebCamDevice
struct WebCamDevice_t2114;
struct WebCamDevice_t2114_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m5006 (WebCamDevice_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m5007 (WebCamDevice_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t2114_marshal(const WebCamDevice_t2114& unmarshaled, WebCamDevice_t2114_marshaled& marshaled);
void WebCamDevice_t2114_marshal_back(const WebCamDevice_t2114_marshaled& marshaled, WebCamDevice_t2114& unmarshaled);
void WebCamDevice_t2114_marshal_cleanup(WebCamDevice_t2114_marshaled& marshaled);
