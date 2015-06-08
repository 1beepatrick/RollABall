#pragma once

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3563;
// System.Security.IPermission
struct IPermission_t3565;
// System.Security.SecurityElement
struct SecurityElement_t3225;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission__ctor_m11547 (SecurityPermission_t3563 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission_set_Flags_m11548 (SecurityPermission_t3563 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
 bool SecurityPermission_IsUnrestricted_m11549 (SecurityPermission_t3563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
 bool SecurityPermission_IsSubsetOf_m11550 (SecurityPermission_t3563 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
 SecurityElement_t3225 * SecurityPermission_ToXml_m11551 (SecurityPermission_t3563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
 bool SecurityPermission_IsEmpty_m11552 (SecurityPermission_t3563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
 SecurityPermission_t3563 * SecurityPermission_Cast_m11553 (SecurityPermission_t3563 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
