#pragma once
// System.Uri
struct Uri_t454;
// System.Collections.ArrayList
struct ArrayList_t2764;
// System.Net.ICredentials
struct ICredentials_t2799;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebProxy
struct WebProxy_t2800  : public Object_t
{
	// System.Uri System.Net.WebProxy::address
	Uri_t454 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t2764 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Object_t * ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;
};
