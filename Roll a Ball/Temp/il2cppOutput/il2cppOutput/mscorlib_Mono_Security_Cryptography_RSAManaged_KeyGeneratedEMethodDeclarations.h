﻿#pragma once

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3206;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t647;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
 void KeyGeneratedEventHandler__ctor_m9392 (KeyGeneratedEventHandler_t3206 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
 void KeyGeneratedEventHandler_Invoke_m9393 (KeyGeneratedEventHandler_t3206 * __this, Object_t * ___sender, EventArgs_t647 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * KeyGeneratedEventHandler_BeginInvoke_m9394 (KeyGeneratedEventHandler_t3206 * __this, Object_t * ___sender, EventArgs_t647 * ___e, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
 void KeyGeneratedEventHandler_EndInvoke_m9395 (KeyGeneratedEventHandler_t3206 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
