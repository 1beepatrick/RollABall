﻿#pragma once

// System.Text.RegularExpressions.CategoryUtils
struct CategoryUtils_t2869;
// System.String
struct String_t;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"

// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
 uint16_t CategoryUtils_CategoryFromName_m6594 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
 bool CategoryUtils_IsCategory_m6595 (Object_t * __this/* static, unused */, uint16_t ___cat, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
 bool CategoryUtils_IsCategory_m6596 (Object_t * __this/* static, unused */, int32_t ___uc, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
