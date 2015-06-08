#pragma once

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3200;
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3108;

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
 void KeyPairPersistence__ctor_m9333 (KeyPairPersistence_t3200 * __this, CspParameters_t3108 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
 void KeyPairPersistence__ctor_m9334 (KeyPairPersistence_t3200 * __this, CspParameters_t3108 * ___parameters, String_t* ___keyPair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
 void KeyPairPersistence__cctor_m9335 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
 String_t* KeyPairPersistence_get_Filename_m9336 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
 String_t* KeyPairPersistence_get_KeyValue_m9337 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
 void KeyPairPersistence_set_KeyValue_m9338 (KeyPairPersistence_t3200 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
 bool KeyPairPersistence_Load_m9339 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
 void KeyPairPersistence_Save_m9340 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
 void KeyPairPersistence_Remove_m9341 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
 String_t* KeyPairPersistence_get_UserPath_m9342 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
 String_t* KeyPairPersistence_get_MachinePath_m9343 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
 bool KeyPairPersistence__CanSecure_m9344 (Object_t * __this/* static, unused */, String_t* ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
 bool KeyPairPersistence__ProtectUser_m9345 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
 bool KeyPairPersistence__ProtectMachine_m9346 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
 bool KeyPairPersistence__IsUserProtected_m9347 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
 bool KeyPairPersistence__IsMachineProtected_m9348 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
 bool KeyPairPersistence_CanSecure_m9349 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
 bool KeyPairPersistence_ProtectUser_m9350 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
 bool KeyPairPersistence_ProtectMachine_m9351 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
 bool KeyPairPersistence_IsUserProtected_m9352 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
 bool KeyPairPersistence_IsMachineProtected_m9353 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
 bool KeyPairPersistence_get_CanChange_m9354 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
 bool KeyPairPersistence_get_UseDefaultKeyContainer_m9355 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
 bool KeyPairPersistence_get_UseMachineKeyStore_m9356 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
 String_t* KeyPairPersistence_get_ContainerName_m9357 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
 CspParameters_t3108 * KeyPairPersistence_Copy_m9358 (KeyPairPersistence_t3200 * __this, CspParameters_t3108 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
 void KeyPairPersistence_FromXml_m9359 (KeyPairPersistence_t3200 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
 String_t* KeyPairPersistence_ToXml_m9360 (KeyPairPersistence_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
