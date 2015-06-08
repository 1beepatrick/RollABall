#pragma once
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t2801;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3427;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3156  : public Identity_t3469
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_5;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t2801 * ____serverObject_6;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t3427 * ____context_7;
};
