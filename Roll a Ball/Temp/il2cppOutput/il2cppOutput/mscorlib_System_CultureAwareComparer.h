#pragma once
// System.Globalization.CompareInfo
struct CompareInfo_t3123;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct CultureAwareComparer_t3688  : public StringComparer_t2217
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3123 * ____compareInfo_5;
};
