#pragma once
// System.Text.RegularExpressions.Group
struct Group_t908;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t904;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct Group_t908  : public Capture_t905
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t904 * ___captures_5;
};
struct Group_t908_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t908 * ___Fail_3;
};
