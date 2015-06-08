#pragma once

// System.IO.Directory
struct Directory_t3301;
// System.IO.DirectoryInfo
struct DirectoryInfo_t3302;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t42;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
 DirectoryInfo_t3302 * Directory_CreateDirectory_m8245 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
 DirectoryInfo_t3302 * Directory_CreateDirectoriesInternal_m10051 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
 bool Directory_Exists_m8244 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
 String_t* Directory_GetCurrentDirectory_m10052 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
 StringU5BU5D_t42* Directory_GetFiles_m8246 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___searchPattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
 StringU5BU5D_t42* Directory_GetFileSystemEntries_m10053 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
