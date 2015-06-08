#pragma once

// System.Reflection.Assembly
struct Assembly_t948;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t315;
// System.Reflection.Module
struct Module_t3142;
// System.Reflection.AssemblyName
struct AssemblyName_t949;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3333;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
 void Assembly__ctor_m10539 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
 String_t* Assembly_get_fullname_m10540 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
 String_t* Assembly_get_location_m10541 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
 String_t* Assembly_get_FullName_m3427 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
 String_t* Assembly_get_Location_m10542 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
 bool Assembly_IsDefined_m10543 (Assembly_t948 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t315* Assembly_GetCustomAttributes_m10544 (Assembly_t948 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
 IntPtr_t34 Assembly_GetManifestResourceInternal_m10545 (Assembly_t948 * __this, String_t* ___name, int32_t* ___size, Module_t3142 ** ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
 Type_t * Assembly_GetType_m10546 (Assembly_t948 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
 Type_t * Assembly_GetType_m7098 (Assembly_t948 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_InternalGetType_m10547 (Assembly_t948 * __this, Module_t3142 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_GetType_m10548 (Assembly_t948 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
 void Assembly_FillName_m10549 (Object_t * __this/* static, unused */, Assembly_t948 * ___ass, AssemblyName_t949 * ___aname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
 AssemblyName_t949 * Assembly_UnprotectedGetName_m10550 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
 String_t* Assembly_ToString_m10551 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
 Assembly_t948 * Assembly_Load_m10552 (Object_t * __this/* static, unused */, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
 Module_t3142 * Assembly_GetModule_m10553 (Assembly_t948 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
 ModuleU5BU5D_t3333* Assembly_GetModulesInternal_m10554 (Assembly_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
 ModuleU5BU5D_t3333* Assembly_GetModules_m10555 (Assembly_t948 * __this, bool ___getResourceModules, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
 Assembly_t948 * Assembly_GetExecutingAssembly_m10556 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
