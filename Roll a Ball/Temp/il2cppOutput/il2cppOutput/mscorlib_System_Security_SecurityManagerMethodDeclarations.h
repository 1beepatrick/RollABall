#pragma once

// System.Security.SecurityManager
struct SecurityManager_t3583;
// System.Security.PermissionSet
struct PermissionSet_t3354;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
 void SecurityManager__cctor_m11644 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
 bool SecurityManager_get_SecurityEnabled_m11645 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
 PermissionSet_t3354 * SecurityManager_Decode_m11646 (Object_t * __this/* static, unused */, IntPtr_t34 ___permissions, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
 PermissionSet_t3354 * SecurityManager_Decode_m11647 (Object_t * __this/* static, unused */, ByteU5BU5D_t433* ___encodedPermissions, MethodInfo* method) IL2CPP_METHOD_ATTR;
