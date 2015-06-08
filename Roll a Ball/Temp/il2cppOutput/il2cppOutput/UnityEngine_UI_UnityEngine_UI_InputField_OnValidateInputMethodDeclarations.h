#pragma once

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t194;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t63;
// System.AsyncCallback
struct AsyncCallback_t64;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
 void OnValidateInput__ctor_m593 (OnValidateInput_t194 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
 uint16_t OnValidateInput_Invoke_m594 (OnValidateInput_t194 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.UI.InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
 Object_t * OnValidateInput_BeginInvoke_m595 (OnValidateInput_t194 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
 uint16_t OnValidateInput_EndInvoke_m596 (OnValidateInput_t194 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
