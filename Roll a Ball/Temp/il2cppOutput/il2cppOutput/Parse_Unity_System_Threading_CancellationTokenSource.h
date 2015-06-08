#pragma once
// System.Object
struct Object_t;
// System.Action
struct Action_t696;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t703  : public Object_t
{
	// System.Object System.Threading.CancellationTokenSource::mutex
	Object_t * ___mutex_0;
	// System.Action System.Threading.CancellationTokenSource::actions
	Action_t696 * ___actions_1;
	// System.Boolean System.Threading.CancellationTokenSource::isCancellationRequested
	bool ___isCancellationRequested_2;
};
